#include "TriggerTaskDetailCusomize.h"
#include "DetailLayoutBuilder.h"
#include "IDetailChildrenBuilder.h"
#include "TriggerDefinition.h"
#include "TriggerTask/TriggerTaskBase.h"
#include "DetailWidgetRow.h"
#include "PropertyHandle.h"
#include "Editor.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateIconFinder.h"
#include "PropertyCustomizationHelpers.h"
#include "CustomizeDetailPanel/FTriggerTask.h"
#include "EngineUtils.h"
#include "NewTriggerBase.h"

FTriggerTaskDetailCustomize::FTriggerTaskDetailCustomize()
{
	Components.Empty();

	//FWorldDelegates::OnWorldCleanup.AddRaw(this, &FTriggerTaskDetailCustomize::OnWorldCleanUp);

}

FTriggerTaskDetailCustomize::~FTriggerTaskDetailCustomize()
{
	CleanUp();
}

void FTriggerTaskDetailCustomize::CleanUp()
{
	if (PropertyHandle.IsValid())
		PropertyHandle = nullptr;
	if(TaskComponentWidget.IsValid())
		TaskComponentWidget = nullptr;
	if(TaskComponentTextWidget.IsValid())
		TaskComponentTextWidget = nullptr;
	if(ComponentListViewWidget.IsValid())
		ComponentListViewWidget = nullptr;

	TaskWidgets.Empty();
	TaskTextWidgets.Empty();
	ComboButtons.Empty();
}

TSharedRef<IPropertyTypeCustomization> FTriggerTaskDetailCustomize::MakeInstance()
{
	return MakeShareable(new FTriggerTaskDetailCustomize());
}

void FTriggerTaskDetailCustomize::CustomizeHeader(TSharedRef<IPropertyHandle> InPropertyHandle, FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& CustomizationUtils)
{
	PropertyHandle = InPropertyHandle;

	Components.Empty();

	HeaderRow
		.NameContent()
		[
			PropertyHandle->CreatePropertyNameWidget(FText::FromString(InPropertyHandle->GetProperty()->GetNameCPP()), FText::FromString(TEXT("Refer to the existed task that have allreay created in this level")), false)
		]
		.ValueContent()
		[
			GetCustomizedTaskComponentWidget()
		];
}

void FTriggerTaskDetailCustomize::CustomizeChildren(TSharedRef<IPropertyHandle> InPropertyHandle, IDetailChildrenBuilder& ChildBuilder, IPropertyTypeCustomizationUtils& CustomizationUtils)
{
}

TSharedRef<SWidget> FTriggerTaskDetailCustomize::GetCustomizedTaskComponentWidget()
{
	UObject* CurrentValue = nullptr;

	//Assume the  first member of FTriggerTask is the task I need to customize
	FPropertyAccess::Result Result = PropertyHandle->GetChildHandle(0)->GetValue(CurrentValue);

	//Reset cashed data
	Components.Empty();
	CurrentSlectedComponentIndex = 0;

	if (Result == FPropertyAccess::Success && CurrentValue != nullptr)
	{
		CreateTaskComponentWidget();

		UTriggerTaskBase* TaskValue = Cast<UTriggerTaskBase>(CurrentValue);

		TArray<UTriggerTaskBase*> TaskChainTemp;

		TaskChainTemp.Add(TaskValue);

		for (UTriggerTaskBase* Parent = TaskValue->ParentTask; Parent != nullptr; )
		{
			if (Parent != nullptr)
			{
				TaskChainTemp.Add(Parent);
				Parent = Parent->ParentTask;
			}
		}

		for (int i = TaskChainTemp.Num() -1; i >= 0; i--)
		{
			TaskChain.Add(TaskChainTemp[i]);
		}


		STextBlock* TextBlock = static_cast<STextBlock*>(TaskComponentTextWidget.Get());

		if(TaskValue->GetTriggerOwner() == nullptr)
			return SNullWidget::NullWidget;

		TextBlock->SetText(FText::FromString(TaskValue->GetTriggerOwner()->GetOuter()->GetName()));

		CreateTaskWidgetRecursively(TaskComponentWidget.ToSharedRef(), TaskValue);

		if (TaskValue->GetChildTasks().Num() != 0)
		{
			CreateCustomizedTaskWidget(TaskWidgets[TaskWidgets.Num()-1]);
		}

		Components.Add(TaskValue->GetTriggerOwner());

		return TaskComponentWidget.ToSharedRef();

	}
	else
	{
		return CreateTaskComponentWidget();
	}

}

TSharedRef<SWidget> FTriggerTaskDetailCustomize::CreateTaskWidgetRecursively(TSharedRef<SWidget> ParentWidget, UTriggerTaskBase* EndTask)
{
	if (EndTask->ParentTask == nullptr)
	{
		return CreateCustomizedTaskWidget(ParentWidget, EndTask->GetName());
	}
	else
	{
		return CreateCustomizedTaskWidget(CreateTaskWidgetRecursively(ParentWidget, EndTask->ParentTask), EndTask->GetName());
	}

}

TSharedRef<SWidget> FTriggerTaskDetailCustomize::CreateTaskComponentWidget()
{
	return SAssignNew(TaskComponentWidget, SVerticalBox)
			+ SVerticalBox::Slot()
			.AutoHeight()
			.VAlign(VAlign_Center).Padding(0.0f, 0.0f, 4.0f, 0.0f)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center).Padding(0.0f, 0.0f, 4.0f, 0.0f)
				[
					SNew(SComboButton)
					.OnGetMenuContent(this, &FTriggerTaskDetailCustomize::GenerateTriggerTaskComponentPicker)
					.ContentPadding(0)
					.ButtonContent()
					[
						SNew(SHorizontalBox)
						+ SHorizontalBox::Slot()
						.AutoWidth()
						.VAlign(VAlign_Center)
						.Padding(0.0f, 0.0f, 4.0f, 0.0f)
						[
							SNew(SImage)
							.Image(this, &FTriggerTaskDetailCustomize::GetTriggerTaskComponentDisplayValueIcon)
						]
						+ SHorizontalBox::Slot()
						.VAlign(VAlign_Center)
						[
							SAssignNew(TaskComponentTextWidget, STextBlock)
							.Text(this, &FTriggerTaskDetailCustomize::GetTriggerTaskComponentDisplayValueAsString)
						]
					]
				]
				+ SHorizontalBox::Slot()
					.AutoWidth()
					.VAlign(VAlign_Center).Padding(0.0f, 0.0f, 4.0f, 0.0f)
					[
						PropertyCustomizationHelpers::MakeBrowseButton( FSimpleDelegate::CreateSP(this, &FTriggerTaskDetailCustomize::BrowserTo), 
							FText::FromString(TEXT("Browser to Trigger actor") ))
					]
				+ SHorizontalBox::Slot()
					.AutoWidth()
					.VAlign(VAlign_Center).Padding(0.0f, 0.0f, 4.0f, 0.0f)
					[
						PropertyCustomizationHelpers::MakeInteractiveActorPicker(FOnGetAllowedClasses::CreateSP(this, &FTriggerTaskDetailCustomize::OnGetAllowedClasses),
						FOnShouldFilterActor(), 
						FOnActorSelected::CreateSP(this, &FTriggerTaskDetailCustomize::OnActorSelected))
					]
				
			];
}

TSharedRef<SWidget> FTriggerTaskDetailCustomize::CreateCustomizedTaskWidget(TSharedPtr<SWidget> ParentWidget, FString WidgetName)
{
	SVerticalBox* VB = static_cast<SVerticalBox*>(ParentWidget.Get());

	if (VB == nullptr)
		return SNullWidget::NullWidget;

	TSharedPtr<SWidget> TaskWidget;
	TSharedPtr<SWidget> TaskTextWidget;
	TSharedPtr<SWidget> ComboButton;

	VB->AddSlot().AutoHeight().VAlign(VAlign_Center)
		[
			SAssignNew(TaskWidget, SVerticalBox)
			+ SVerticalBox::Slot()
			.AutoHeight()
			.VAlign(VAlign_Center).Padding(0.0f, 0.0f, 4.0f, 0.0f)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center).Padding(0.0f, 0.0f, 4.0f, 0.0f)
				[
					SNew(SSpacer)
				]
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center).Padding(0.0f, 0.0f, 4.0f, 0.0f)
				[
					SNew(SSpacer)
				]
				+SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center).Padding(0.0f, 0.0f, 4.0f, 0.0f)
				[
					SAssignNew(ComboButton, SComboButton)
					.OnGetMenuContent(this, &FTriggerTaskDetailCustomize::GenerateTaskPicker)
					.ContentPadding(0)
					.OnComboBoxOpened(this, &FTriggerTaskDetailCustomize::OnComboButtonOpen)
					.ButtonContent()
					[
						SNew(SHorizontalBox)
						+ SHorizontalBox::Slot()
						.AutoWidth()
						.VAlign(VAlign_Center)
						.Padding(0.0f, 0.0f, 4.0f, 0.0f)
						[
							SNew(SImage)
							.Image(this, &FTriggerTaskDetailCustomize::GetTaskDisplayValueIcon)
						]
						+ SHorizontalBox::Slot()
						.VAlign(VAlign_Center)
						[
							SAssignNew(TaskTextWidget, STextBlock)
							.Text(FText::FromString(WidgetName))
						]
					]
				]
			]
		];

	ComboButtons.Add(ComboButton);

	TaskWidgets.Add(TaskWidget);

	TaskTextWidgets.Add(TaskTextWidget);

	return TaskWidget.ToSharedRef();
}

void FTriggerTaskDetailCustomize::BrowserTo()
{
	if (Components[CurrentSlectedComponentIndex] == nullptr)
		return;

	{

		AActor* Actor = Cast<AActor>(Components[CurrentSlectedComponentIndex]->GetOwner());

		if (Actor == nullptr)
			return;

		TArray<AActor*> Actors;
		Actors.Add(Actor);

		GEditor->SelectNone(/*bNoteSelectionChange=*/false, /*bDeselectBSPSurfs=*/true);
		GEditor->SelectActor(Actor, /*InSelected=*/true, /*bNotify=*/true, /*bSelectEvenIfHidden=*/true);

		// Jump to the location of the actor
		GEditor->MoveViewportCamerasToActor(Actors, /*bActiveViewportOnly=*/false);
	}
}

void FTriggerTaskDetailCustomize::OnGetAllowedClasses(TArray<const UClass*>& AllowedClasses)
{
	AllowedClasses.Empty();
	
	for (TObjectIterator< UClass > ClassIt; ClassIt; ++ClassIt)
	{
		UClass* Class = *ClassIt;

		if(Class == nullptr)
			continue;

		if (Class->ImplementsInterface(UTriggerInterface::StaticClass()))
		{
			AllowedClasses.Add(Class);
		}
	}

}

void  FTriggerTaskDetailCustomize::OnActorSelected(AActor* InActor)
{
	TScriptInterface<ITriggerInterface> Trigger;
	void* Address = InActor->GetInterfaceAddress(UTriggerInterface::StaticClass());

	if(Address == nullptr)
		return;

	Trigger.SetObject(InActor);
	Trigger.SetInterface(Address);

	TArray<UTriggerTaskComponentBase*> TriggerTaskComponents;

	Trigger->GetTriggerTaskComponents(TriggerTaskComponents);

	for (int i = 0; i < TriggerTaskComponents.Num(); i++)
	{
		if(TriggerTaskComponents[i] == nullptr)
			continue;

		int Index = Components.Find(TriggerTaskComponents[i]);

		bool ReConstructTaskWidget = false;
		if (Index == INDEX_NONE)
		{
			Components.Empty();

			Components.Add(TriggerTaskComponents[i]);

			CurrentSlectedComponentIndex = 0;

			//When new trigger task component is resisted I need empty the combobuttons
			ComboButtons.Empty();

			ReConstructTaskWidget = true;
		}
		else
		{
			if (CurrentSlectedComponentIndex != Index)
			{
				CurrentSlectedComponentIndex = Index;
				ReConstructTaskWidget = true;
			}
		}

		if (ReConstructTaskWidget)
		{
			if (Trigger.GetObject() != nullptr)
			{
				STextBlock* TextBlock = static_cast<STextBlock*>(TaskComponentTextWidget.Get());

				TextBlock->SetText(FText::FromString(Trigger.GetObject()->GetName()));

				RegeneratedTaskWidget();
			}
		}
	}
}

const FSlateBrush* FTriggerTaskDetailCustomize::GetTriggerTaskComponentDisplayValueIcon() const
{
	UObject* CurrentValue = nullptr;

	FPropertyAccess::Result Result = PropertyHandle->GetChildHandle(0)->GetValue(CurrentValue);

	if (Result == FPropertyAccess::Success && CurrentValue != nullptr)
	{
		return FSlateIconFinder::FindIconBrushForClass(CurrentValue->GetClass());
	}

	return nullptr;
}


FText FTriggerTaskDetailCustomize::GetTriggerTaskComponentDisplayValueAsString() const
{
	UObject* CurrentValue = NULL;
	FPropertyAccess::Result Result = PropertyHandle->GetValue(CurrentValue);
	if (Result == FPropertyAccess::Success && CurrentValue != NULL)
	{
		return CurrentValue->GetClass()->GetDisplayNameText();
	}
	else
	{
		return FText::FromString(TEXT("None"));
	}

	return FText::FromString(TEXT("None"));
}


TSharedRef<SWidget> FTriggerTaskDetailCustomize::GenerateTriggerTaskComponentPicker()
{
	UTriggerTaskComponentBase* Component = nullptr;

	if (Components.Num() == 1)
	{
		//This means current widget component is have value
		Component = Components[0];
	}

	Components.Empty();

	for (TActorIterator<ANewTriggerBase> It(GWorld, ANewTriggerBase::StaticClass()); It; ++It)
	{
		Components.Add((*It)->TriggerTaskComponent);
	}

	int Index = Components.Find(Component);

	if (Index != INDEX_NONE)
		CurrentSlectedComponentIndex = Index;


	return SAssignNew(ComponentListViewWidget, SListView<UTriggerTaskComponentBase*>)
		.ListItemsSource(&Components)
		.OnGenerateRow(this, &FTriggerTaskDetailCustomize::OnGenerateTriggerTaskComponentRow)
		.SelectionMode(ESelectionMode::Single)
		.OnSelectionChanged(this, &FTriggerTaskDetailCustomize::OnTriggerTaskComponentSelectedChanged);
}

TSharedRef<SWidget> FTriggerTaskDetailCustomize::GenerateTaskPicker()
{
	static bool DoubleClick = true;

	if (DoubleClick)
	{
		DoubleClick = false;
		return SNullWidget::NullWidget;
	}

	DoubleClick = true;

	if (TaskChain.Num() == 0 || CurrentTryToChangedTaskIndex == -1 || CurrentTryToChangedTaskIndex == 0)
	{

		//As this only used for designer in the map so just use the TriggerTasks
		return SNew(SListView<UTriggerTaskBase*>)
			.ListItemsSource(&Components[CurrentSlectedComponentIndex]->GetTemplateTasks())
			.OnGenerateRow(this, &FTriggerTaskDetailCustomize::OnGenerateTaskRow)
			.SelectionMode(ESelectionMode::Single)
			.OnSelectionChanged(this, &FTriggerTaskDetailCustomize::OnTaskSelectedChanged);
	}
	else
	{
		if(CurrentTryToChangedTaskIndex > TaskChain.Num())
			return SNullWidget::NullWidget;

		UTriggerTaskBase* Task = TaskChain[CurrentTryToChangedTaskIndex-1];

		if(Task == nullptr)
			return SNullWidget::NullWidget;

		return SNew(SListView<UTriggerTaskBase*>)
			.ListItemsSource(&Task->GetChildTasks())
			.OnGenerateRow(this, &FTriggerTaskDetailCustomize::OnGenerateTaskRow)
			.SelectionMode(ESelectionMode::Single)
			.OnSelectionChanged(this, &FTriggerTaskDetailCustomize::OnTaskSelectedChanged);
	}

	return SNullWidget::NullWidget;

}

void FTriggerTaskDetailCustomize::OnComboButtonOpen()
{
	
	{
		for (int i = 0; i < ComboButtons.Num(); i++)
		{
			SComboButton* CB = static_cast<SComboButton*>(ComboButtons[i].Get());

			if (CB != nullptr && CB->IsOpen())
			{
				CurrentTryToChangedTaskIndex = i;
				break;
			}
		}
	}
}

FText FTriggerTaskDetailCustomize::GetTaskDisplayValueAsString() const
{

	return FText::FromString(TEXT("None"));
}

const FSlateBrush* FTriggerTaskDetailCustomize::GetTaskDisplayValueIcon() const
{
	return nullptr;
}

void FTriggerTaskDetailCustomize::OnTaskComponentClicked(UTriggerTaskComponentBase* TriggerTaskComponent)
{
	CurrentSlectedComponentIndex = Components.Find(TriggerTaskComponent);
}

TSharedRef<ITableRow> FTriggerTaskDetailCustomize::OnGenerateTriggerTaskComponentRow(UTriggerTaskComponentBase* Component, const TSharedRef<STableViewBase>& OwnerTable)
{
	typedef STableRow<UTriggerTaskComponentBase*> RowType;

	TSharedRef<RowType> NewRow = SNew(RowType, OwnerTable);
	NewRow->SetContent(SNew(STextBlock).Text(FText::FromString(Component->GetOuter()->GetName())));

	return NewRow;
}

TSharedRef<ITableRow> FTriggerTaskDetailCustomize::OnGenerateTaskRow(UTriggerTaskBase* Task, const TSharedRef<STableViewBase>& OwnerTable)
{
	typedef STableRow<UTriggerTaskBase*> RowType;

	TSharedRef<RowType> NewRow = SNew(RowType, OwnerTable);

	NewRow->SetContent(SNew(STextBlock).AutoWrapText(true).Text(FText::FromString(Task->GetName())));

	return NewRow;
}

void FTriggerTaskDetailCustomize::OnTaskSelectedChanged(UTriggerTaskBase* Task, ESelectInfo::Type SelectInfo)
{
	int Index = GetTaskWidgetIndex(Task);

	if (Index == INDEX_NONE)
		return;

	//Reset the data 
	if(CurrentTryToChangedTaskIndex != -1)
	{
		for (int i = TaskChain.Num() - 1; i > CurrentTryToChangedTaskIndex; i--)
		{
			TaskChain.Pop();
		}

		for (int i = TaskWidgets.Num() - 2; i > CurrentTryToChangedTaskIndex; i--)
		{
			SVerticalBox* VB = static_cast<SVerticalBox*>(TaskWidgets[i].Get());

			if (VB == nullptr)
				continue;
			int SlotNum = VB->NumSlots();

			if (SlotNum > 1)
			{
				VB->RemoveSlot(VB->GetChildren()->GetChildAt(1));
			}
		}
	}

	TaskChain.Add(Task);

	STextBlock* TB = static_cast<STextBlock*>(TaskTextWidgets[Index].Get());

	TB->SetText(FText::FromString(Task->GetName()));
	//void* Data;

	TArray<FString> NewValues;

	NewValues.Add(Task->GetPathName());

	PropertyHandle->GetChildHandle(0)->SetPerObjectValues(NewValues);


	if (Task->GetChildTasks().Num() != 0)
	{
		CreateCustomizedTaskWidget(TaskWidgets[Index]);
	}
}

int FTriggerTaskDetailCustomize::GetTaskWidgetIndex(UTriggerTaskBase* FindTask)
{
	if (CurrentSlectedComponentIndex == -1)
		return -1;

	int Result = -1;

	int Index = Components[CurrentSlectedComponentIndex]->GetTemplateTasks().Find(FindTask);

	if (Index == INDEX_NONE)
	{
		for (auto Task : Components[CurrentSlectedComponentIndex]->GetTemplateTasks())
		{
			Result = GetTaskWidgetIndexInternal(FindTask, Task, Result);
			if (Result != INDEX_NONE)
				return Result;
		}
	}
	else
	{
		Result++;
	}

	return Result;
}

int FTriggerTaskDetailCustomize::GetTaskWidgetIndexInternal(UTriggerTaskBase* FindTask, UTriggerTaskBase* TargetTask, int index)
{
	if (TargetTask->GetChildTasks().Num() == 0)
		return index;

	int Index = TargetTask->GetChildTasks().Find(FindTask);

	if (Index == INDEX_NONE)
	{
		bool InChild = false;

		for (auto T : TargetTask->GetChildTasks())
		{
			if (GetTaskWidgetIndexInternal(FindTask, T, index) != -1)
			{
				return Index + 1;
			}
		}

		return index;
	}

	return index + 1;
}

void FTriggerTaskDetailCustomize::RegeneratedTaskWidget()
{
	SVerticalBox* VB = static_cast<SVerticalBox*>(TaskComponentWidget.Get());

	int SlotNum = VB->NumSlots();

	if (SlotNum > 1)
	{
		VB->RemoveSlot(VB->GetChildren()->GetChildAt(1));
		TaskWidgets.Empty();
		TaskTextWidgets.Empty();
	}

	if (Components[CurrentSlectedComponentIndex] == nullptr)
		return;

	if (Components[CurrentSlectedComponentIndex]->GetTemplateTasks().Num() != 0)
	{
		CreateCustomizedTaskWidget(TaskComponentWidget);
	}
}

void FTriggerTaskDetailCustomize::OnTriggerTaskComponentSelectedChanged(UTriggerTaskComponentBase* Component, ESelectInfo::Type SelectInfo)
{
	STextBlock* TextBlock = static_cast<STextBlock*>(TaskComponentTextWidget.Get());

	TextBlock->SetText(FText::FromString(Component->GetOuter()->GetName()));

	CurrentSlectedComponentIndex = Components.Find(Component);

	RegeneratedTaskWidget();

}