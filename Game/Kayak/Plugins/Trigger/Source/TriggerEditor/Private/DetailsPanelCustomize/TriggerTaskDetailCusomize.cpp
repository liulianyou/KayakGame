#include "TriggerTaskDetailCusomize.h"
#include "DetailLayoutBuilder.h"
#include "IDetailChildrenBuilder.h"
#include "DetailWidgetRow.h"
#include "PropertyHandle.h"
#include "Editor.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateIconFinder.h"
#include "PropertyCustomizationHelpers.h"
#include "EngineUtils.h"

#include "Components/ComboBoxString.h"
#include "Components/HorizontalBox.h"
#include "Components/ListView.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"

#include "TriggerEditorConfig.h"

#include "TriggerDefinition.h"
#include "FTriggerTask.h"
#include "TriggerTaskBase.h"
#include "NewTriggerBase.h"
#include "TriggerManager.h"
#include "TriggerOctreeControllerBase.h"
#include "TriggerBlueprintLib.h"
#include "TriggerTaskComponentBase.h"

#define EMPTYSELECTEDCOMPONENT TEXT("Select New Trigger Task Component Here!")
#define EMPTYSELECTEDTRIGGERTASK TEXT("Select New Trigger Task Here!")

static void GetComponents(TArray<UTriggerTaskComponentBase*>& Components, UObject* Trigger)
{
	if (Trigger->GetClass()->ImplementsInterface(UTriggerInterface::StaticClass()))
	{
		ITriggerInterface* Interface = Cast<ITriggerInterface>(Trigger);

		if (Interface != nullptr)
		{
			Interface->GetTriggerTaskComponents(Components);
		}
		else
		{
			ITriggerInterface::Execute_OnGetTriggerTaskComponents(Trigger, Components);
		}
	}
}

UTriggerTaskListItemData::UTriggerTaskListItemData(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

UFTriggerTaskListEntry::UFTriggerTaskListEntry(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

void UFTriggerTaskListEntry::NativeConstruct()
{
	Super::NativeConstruct();

	PendingTask->SetVisibility(ESlateVisibility::Visible);

	if (!PendingTask->OnSelectionChanged.IsAlreadyBound(this, &UFTriggerTaskListEntry::OnPendingTaskSelectedChange))
	{
		PendingTask->OnSelectionChanged.AddDynamic(this, &UFTriggerTaskListEntry::OnPendingTaskSelectedChange);
	}
}

void UFTriggerTaskListEntry::NativeDestruct()
{
	Super::NativeDestruct();


}

void UFTriggerTaskListEntry::NativeOnListItemObjectSet(UObject* ListItemObject)
{
	IUserObjectListEntry::NativeOnListItemObjectSet(ListItemObject);

	UTriggerTaskListItemData* Data = Cast<UTriggerTaskListItemData>(ListItemObject);

	ListData = Data;

	if (Data == nullptr)
		return;

	PendingTask->ClearOptions();

	TArray<UTriggerTaskBase*>LocalTasks;

	int SelectedIndex = INDEX_NONE;

	if (Data->TriggerTask != nullptr)
	{
		if (Data->TriggerTask->GetParentTask() != nullptr)
		{
			LocalTasks = Data->TriggerTask->GetParentTask()->GetChildTasks();

			SelectedIndex = LocalTasks.Find(Data->TriggerTask.Get());
		}
		else if (UTriggerTaskComponentBase* Component = Data->TriggerTask->GetTriggerOwner())
		{
			Component->GetAllTriggerTasks(LocalTasks);

			SelectedIndex = LocalTasks.Find(Data->TriggerTask.Get());
		}
		else
		{
			LocalTasks.Add(Data->TriggerTask.Get());
			SelectedIndex = 0;
		}
	}
	else if (Data->TriggerTaskComponent != nullptr)
	{
		TArray<UTriggerTaskBase*> Tasks;
		Data->TriggerTaskComponent->GetAllTriggerTasks(LocalTasks);

		SelectedIndex = INDEX_NONE;
	}
	else if (Data->RootTaskToFindChildTasks != nullptr)
	{
		LocalTasks = Data->RootTaskToFindChildTasks->GetChildTasks();

		SelectedIndex = INDEX_NONE;
	}
	else
	{
		//Invalid Data
		return;
	}

	for (int i = 0; i < LocalTasks.Num(); i++)
	{
		if (LocalTasks[i] == nullptr)
			continue;

		PendingTask->AddOption(LocalTasks[i]->GetName());
	}

	if (SelectedIndex == INDEX_NONE)
	{
		PendingTask->SetSelectedOption(EMPTYSELECTEDTRIGGERTASK);
	}
	else
	{
		PendingTask->SetSelectedIndex(SelectedIndex);
	}
}

void UFTriggerTaskListEntry::OnPendingTaskSelectedChange(FString SelectedItem, ESelectInfo::Type SelectionType)
{
	if (SelectionType == ESelectInfo::OnMouseClick)
	{
		UTriggerTaskBase* SelectedTriggerTask = nullptr;

		TArray<UTriggerTaskBase*> Tasks;

		if (ListData->RootTaskToFindChildTasks != nullptr)
		{
			Tasks = ListData->RootTaskToFindChildTasks->GetChildTasks();
		}
		else if (ListData->TriggerTask != nullptr)
		{
			if (ListData->TriggerTask->GetParentTask() != nullptr)
			{
				Tasks = ListData->TriggerTask->GetParentTask()->GetChildTasks();
			}
			else
			{
				UTriggerTaskComponentBase* Component = ListData->TriggerTask->GetTriggerOwner();

				if (Component)
				{
					Component->GetAllTriggerTasks(Tasks);
				}
			}

		}
		else if (ListData->TriggerTaskComponent != nullptr)
		{
			ListData->TriggerTaskComponent->GetAllTriggerTasks(Tasks);
		}
		else
		{
			//Invalid Data
			return;
		}

		SelectedTriggerTask = Tasks[PendingTask->GetSelectedIndex()];

		UFTriggerTaskDetailPanelWidget* DetailPanelWidget = GetTypedOuter<UFTriggerTaskDetailPanelWidget>();

		if (DetailPanelWidget != nullptr && SelectedTriggerTask != nullptr)
		{
			DetailPanelWidget->SetTriggerTask(SelectedTriggerTask);
		}

	}
}



UFTriggerTaskDetailPanelWidget::UFTriggerTaskDetailPanelWidget(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

void UFTriggerTaskDetailPanelWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (TrigerHorizontal != nullptr)
	{
		TSharedRef<SHorizontalBox> HorizontalBox = StaticCastSharedRef<SHorizontalBox>(TrigerHorizontal->TakeWidget());

		HorizontalBox->AddSlot().AutoWidth()
			.VAlign(VAlign_Center).Padding(0.0f, 0.0f, 4.0f, 0.0f)
			[
				PropertyCustomizationHelpers::MakeBrowseButton(FSimpleDelegate::CreateUObject(this, &UFTriggerTaskDetailPanelWidget::BrowserTo),
				FText::FromString(TEXT("Browser to Trigger actor")))
			];

		HorizontalBox->AddSlot().AutoWidth()
			.VAlign(VAlign_Center).Padding(0.0f, 0.0f, 4.0f, 0.0f)
			[
				PropertyCustomizationHelpers::MakeInteractiveActorPicker(FOnGetAllowedClasses::CreateUObject(this, &UFTriggerTaskDetailPanelWidget::OnGetAllowedClasses),
				FOnShouldFilterActor(),
				FOnActorSelected::CreateUObject(this, &UFTriggerTaskDetailPanelWidget::OnActorSelected))
			];
	}

	if (TriggerTaskComponentWidget != nullptr)
	{
		if (!TriggerTaskComponentWidget->OnOpening.IsAlreadyBound(this, &UFTriggerTaskDetailPanelWidget::OnOpeningTriggerComponentCombox))
		{
			TriggerTaskComponentWidget->OnOpening.AddDynamic(this, &UFTriggerTaskDetailPanelWidget::OnOpeningTriggerComponentCombox);
		}

		if (!TriggerTaskComponentWidget->OnSelectionChanged.IsAlreadyBound(this, &UFTriggerTaskDetailPanelWidget::OnSelctedChangeInTriggerTaskComponent))
		{
			TriggerTaskComponentWidget->OnSelectionChanged.AddDynamic(this, &UFTriggerTaskDetailPanelWidget::OnSelctedChangeInTriggerTaskComponent);
		}
	}

	if (TriggerWidget != nullptr)
	{
		if (!TriggerWidget->OnOpening.IsAlreadyBound(this, &UFTriggerTaskDetailPanelWidget::OnOpeningTriggerWidget))
		{
			TriggerWidget->OnOpening.AddDynamic(this, &UFTriggerTaskDetailPanelWidget::OnOpeningTriggerWidget);
		}

		if (!TriggerWidget->OnSelectionChanged.IsAlreadyBound(this, &UFTriggerTaskDetailPanelWidget::OnSelctedChangeInTriggerWidget))
		{
			TriggerWidget->OnSelectionChanged.AddDynamic(this, &UFTriggerTaskDetailPanelWidget::OnSelctedChangeInTriggerWidget);
		}
	}

	if(AssignSelfButton != nullptr)
	{
		if(!AssignSelfButton->OnClicked.IsAlreadyBound(this, &UFTriggerTaskDetailPanelWidget::OnClickAssignSelfButton))
		{
			AssignSelfButton->OnClicked.AddDynamic(this, &UFTriggerTaskDetailPanelWidget::OnClickAssignSelfButton);
		}
	}

	SetTriggerTask(TriggerTask.Get());
}

void UFTriggerTaskDetailPanelWidget::UpdateCashedTriggerListData()
{
	CashedTriggerTaskListDatas.Empty();

	if (TriggerTask != nullptr)
	{
		UTriggerTaskBase* LocalTask = TriggerTask->GetParentTask();

		TArray<UTriggerTaskBase*> LocalTasks;
		
		LocalTasks.Add(TriggerTask.Get());

		while (LocalTask)
		{
			LocalTasks.Add(LocalTask);

			LocalTask = LocalTask->GetParentTask();
		}

		for (int i = LocalTasks.Num() - 1; i >= 0; i--)
		{
			UTriggerTaskListItemData* ListData = NewObject<UTriggerTaskListItemData>(this, UTriggerTaskListItemData::StaticClass());

			ListData->TriggerTask = LocalTasks[i];

			CashedTriggerTaskListDatas.Add(ListData);
		}

		if (TriggerTask->GetChildTasks().Num())
		{
			UTriggerTaskListItemData* ListData = NewObject<UTriggerTaskListItemData>(this, UTriggerTaskListItemData::StaticClass());
			ListData->RootTaskToFindChildTasks = TriggerTask;
			CashedTriggerTaskListDatas.Add(ListData);
		}
	}
	else if(SelctedComponent)
	{
		UTriggerTaskListItemData* ListData = NewObject<UTriggerTaskListItemData>(this, UTriggerTaskListItemData::StaticClass());
		ListData->TriggerTaskComponent = SelctedComponent;
		CashedTriggerTaskListDatas.Add(ListData);
	}
}

void UFTriggerTaskDetailPanelWidget::UpdateTriggerWidget(UObject* NewTrigger)
{
	SelectedTrigger = NewTrigger;

	TArray<TScriptInterface<ITriggerInterface>> Triggers;
	GetAllTriggers(Triggers);

	TriggerTaskComponentWidget->ClearOptions();
	TriggerTaskComponentWidget->ClearSelection();

	int Index = Triggers.Find(SelectedTrigger);

	if (TriggerWidget != nullptr)
	{
		for (int i = 0; i < Triggers.Num(); i++)
		{
			if (Triggers[i].GetObject() != nullptr)
			{
				TriggerWidget->AddOption(GetTriggerName(Triggers[i].GetObject()));
			}
		}

		TriggerWidget->SetSelectedIndex(Index);
	}

	TriggerTaskComponentWidget->SetVisibility(ESlateVisibility::Hidden);
	TriggerTaskViewlist->SetVisibility(ESlateVisibility::Hidden);

	if(SelectedTrigger == nullptr )
	{
		return;
	}

	TArray<UTriggerTaskComponentBase*> Components;

	GetComponents(Components, SelectedTrigger);

	if(Components.Find(SelctedComponent) == INDEX_NONE)
	{
		SelctedComponent = nullptr;
		TriggerTask = nullptr;
	}
	else
	{
		TArray<UTriggerTaskBase*> Tasks;

		SelctedComponent->GetAllTriggerTasks(Tasks, true);

		if(Tasks.Find(TriggerTask.Get()) == INDEX_NONE)
		{
			TriggerTask = nullptr;
		}
	}

	UpdateTriggerTaskComponentWidget(SelctedComponent);
}

void UFTriggerTaskDetailPanelWidget::UpdateTriggerTaskComponentWidget(UTriggerTaskComponentBase* NewComponent)
{
	check(SelectedTrigger);

	SelctedComponent = NewComponent;

	if (TriggerTaskComponentWidget != nullptr)
	{
		TriggerTaskComponentWidget->SetVisibility(ESlateVisibility::Visible);

		TriggerTaskComponentWidget->ClearOptions();
		TriggerTaskComponentWidget->ClearSelection();

		TArray<UTriggerTaskComponentBase*> Components;

		GetComponents(Components, SelectedTrigger);

		for (int i = 0; i < Components.Num(); i++)
		{
			TriggerTaskComponentWidget->AddOption(GetComponentName(Components[i]));
		}

		if (SelctedComponent != nullptr)
		{
			int Index = Components.Find( SelctedComponent );

			TriggerTaskComponentWidget->SetSelectedIndex(Index);

			TArray<UTriggerTaskBase*> Tasks;

			SelctedComponent->GetAllTriggerTasks(Tasks, true);

			if (Tasks.Find(TriggerTask.Get()) == INDEX_NONE)
			{
				TriggerTask = nullptr;
			}

			UpdateTriggerTaskViewlist(TriggerTask.Get());
		}
		else
		{
			TriggerTaskViewlist->SetVisibility(ESlateVisibility::Hidden);
		}
	}
}

void UFTriggerTaskDetailPanelWidget::UpdateTriggerTaskViewlist(UTriggerTaskBase* NewTriggerTask)
{
	check(SelectedTrigger);
	check(SelctedComponent);

	TriggerTask = NewTriggerTask;

	if (TriggerTaskViewlist == nullptr)
		return;

	TriggerTaskViewlist->SetVisibility(ESlateVisibility::Visible);

	UpdateCashedTriggerListData();

	TriggerTaskViewlist->ClearListItems();

	TriggerTaskViewlist->SetListItems(CashedTriggerTaskListDatas);
}

void UFTriggerTaskDetailPanelWidget::GetAllTriggers(TArray<TScriptInterface<ITriggerInterface>>& Triggers)
{
	UTriggerManager* TriggerManager = UTriggerBlueprintLib::GetTriggerManager();

	if (TriggerManager == nullptr)
		return;

	UTriggerOctreeControllerBase* Controller = TriggerManager->GetTriggerController();

	if (Controller == nullptr)
		return;

	TArray<UObject*> Objects;

	Controller->GetAllTriggersInsideBox(Objects, FVector::ZeroVector, FVector(INT_MAX, INT_MAX, INT_MAX));

	for (int i = 0; i < Objects.Num(); i++)
	{
		if (Objects[i] == nullptr)
			continue;

		if (Objects[i]->GetClass()->ImplementsInterface(UTriggerInterface::StaticClass()))
		{
			Triggers.Add(Objects[i]);
		}
	}
}

FString UFTriggerTaskDetailPanelWidget::GetComponentName(UTriggerTaskComponentBase* Component)
{
	if (Component == nullptr)
	{
		return TEXT("Select new trigger task component here");
	}

	TScriptInterface<ITriggerInterface> Owner = Component->GetTriggerObjectOwner();

	int ComponentIndex = 0;

	if (Owner != nullptr)
	{
		TArray<UTriggerTaskComponentBase*> Components;

		Owner->GetTriggerTaskComponents(Components);

		ComponentIndex = Components.Find(Component);

		ComponentIndex = ComponentIndex == INDEX_NONE ? 0 : ComponentIndex;
	}

	FString Result = Component->GetName();

	return Result;
}

FString UFTriggerTaskDetailPanelWidget::GetTriggerName(UObject* Trigger)
{
	if(Trigger == nullptr)
		return TEXT("");

	return Trigger->GetName();
}

void UFTriggerTaskDetailPanelWidget::BrowserTo()
{
	AActor* Actor = nullptr;

	if (TriggerTask == nullptr)
	{
		if (SelctedComponent != nullptr)
		{
			Actor = SelctedComponent->GetTypedOuter<AActor>();
		}
	}
	else
	{
		Actor = TriggerTask->TryToGetOwnerActor();
	}

	if (Actor == nullptr)
		return;

	TArray<AActor*> Actors;
	Actors.Add(Actor);

	GEditor->SelectNone(/*bNoteSelectionChange=*/false, /*bDeselectBSPSurfs=*/true);
	GEditor->SelectActor(Actor, /*InSelected=*/true, /*bNotify=*/true, /*bSelectEvenIfHidden=*/true);

	// Jump to the location of the actor
	GEditor->MoveViewportCamerasToActor(Actors, /*bActiveViewportOnly=*/false);
}

void UFTriggerTaskDetailPanelWidget::OnOpeningTriggerComponentCombox()
{
	check(SelectedTrigger);

	/*
	* When the trigger task component combo box is opening I need to update the options in this widget.
	*/
	TriggerTaskComponentWidget->ClearOptions();

	TArray<UTriggerTaskComponentBase*> Components;

	GetComponents(Components, SelectedTrigger);

	for (int i = 0; i < Components.Num(); i++)
	{
		TriggerTaskComponentWidget->AddOption(GetComponentName(Components[i]));
	}

	int Index = Components.Find(SelctedComponent);

	TriggerTaskComponentWidget->SetSelectedIndex(Index);
}

void UFTriggerTaskDetailPanelWidget::OnOpeningTriggerWidget()
{
	TArray<TScriptInterface<ITriggerInterface>> Triggers;

	GetAllTriggers(Triggers);



}

void UFTriggerTaskDetailPanelWidget::OnSelctedChangeInTriggerWidget(FString SelectedItem, ESelectInfo::Type SelectionType)
{
	//Only care about the selection for task list
	if (SelectionType == ESelectInfo::OnMouseClick)
	{
		TArray<TScriptInterface<ITriggerInterface>> Triggers;

		GetAllTriggers(Triggers);

		for (int i = 0; i < Triggers.Num(); i++)
		{
			if (GetTriggerName(Triggers[i].GetObject()) == SelectedItem)
			{
				if (Triggers[i].GetObject() != SelectedTrigger)
				{
					UpdateTriggerWidget(Triggers[i].GetObject());

					break;
				}
			}
		}
	}
}


void UFTriggerTaskDetailPanelWidget::OnClickAssignSelfButton()
{
	if(!PropertyHandle.IsValid())
		return;

	TArray<UObject*> OuterObjects;
	PropertyHandle->GetOuterObjects(OuterObjects);

	TArray<UPackage*> OuterPackages;
	PropertyHandle->GetOuterPackages(OuterPackages);

	for (int i = 0; i < OuterObjects.Num(); i++)
	{
		UObject* Outer = OuterObjects[i];
		UTriggerTaskBase* TaskOwner = nullptr;
		while(Outer != nullptr)
		{
			TaskOwner = Cast<UTriggerTaskBase>(Outer);

			if (TaskOwner == nullptr)
			{
				Outer = Outer->GetOuter();
			}
			else
			{
				break;
			}
		};

		if(TaskOwner != nullptr)
		{
			SetTriggerTask(TaskOwner);
			break;
		}
	}
}

void UFTriggerTaskDetailPanelWidget::OnSelctedChangeInTriggerTaskComponent(FString SelectedItem, ESelectInfo::Type SelectionType)
{
	check(SelectedTrigger);

	//Only care about the selection for task list
	if (SelectionType == ESelectInfo::OnMouseClick)
	{
		TArray<UTriggerTaskComponentBase*> Components;

		GetComponents(Components, SelectedTrigger);

		for(int i = 0; i <Components.Num(); i++)
		{
			if (GetComponentName(Components[i]) == SelectedItem)
			{
				if (SelctedComponent != Components[TriggerTaskComponentWidget->GetSelectedIndex()])
				{
					SelctedComponent = Components[TriggerTaskComponentWidget->GetSelectedIndex()];

					TriggerTask = nullptr;

					UpdateTriggerTaskViewlist(TriggerTask.Get());
				}
			}
		}
	}
}

void UFTriggerTaskDetailPanelWidget::OnGetAllowedClasses(TArray<const UClass*>& AllowedClasses)
{
	AllowedClasses.Empty();

	for (TObjectIterator< UClass > ClassIt; ClassIt; ++ClassIt)
	{
		UClass* Class = *ClassIt;

		if (Class == nullptr)
			continue;

		//Allow all triggers which derived from ITriggerInterface
		if (Class->ImplementsInterface(UTriggerInterface::StaticClass()))
		{
			AllowedClasses.Add(Class);
		}
	}
}

void  UFTriggerTaskDetailPanelWidget::OnActorSelected(AActor* InActor)
{
	if (InActor == nullptr)
		return;

	if (InActor->GetClass()->ImplementsInterface(UTriggerInterface::StaticClass()))
	{
		UpdateTriggerWidget(InActor);
	}
}

void UFTriggerTaskDetailPanelWidget::NativeDestruct()
{
	Super::NativeDestruct();
}

void UFTriggerTaskDetailPanelWidget::SetTriggerTask(UTriggerTaskBase* NewTriggerTask)
{
	TriggerTask = NewTriggerTask;

	if (TriggerTask)
	{
		SelctedComponent = TriggerTask->GetTriggerOwner();

		SelectedTrigger = SelctedComponent->GetOuter();
	}

	UpdateTriggerWidget(SelectedTrigger);

	//Make the target value which this widget inspect changed
	{
		TArray<FString> NewValues;

		NewValues.Add(TriggerTask->GetPathName());

		PropertyHandle->GetChildHandle(0)->SetPerObjectValues(NewValues);
	}

}

void UFTriggerTaskDetailPanelWidget::SetPropertyHandle(TSharedRef<IPropertyHandle> InPropertyHandle)
{
	PropertyHandle = InPropertyHandle;

	UObject* CurrentValue = nullptr;

	//Assume the  first member of FTriggerTask is the task I need to customize
	FPropertyAccess::Result Result = InPropertyHandle->GetChildHandle(0)->GetValue(CurrentValue);

	SetTriggerTask(Cast<UTriggerTaskBase>(CurrentValue));
}

FTriggerTaskDetailCustomize::FTriggerTaskDetailCustomize()
{
}

FTriggerTaskDetailCustomize::~FTriggerTaskDetailCustomize()
{
#if USE_UMG

	if (TriggerTaskWidget != nullptr && TriggerTaskWidget->IsValidLowLevel())
	{
		TriggerTaskWidget->RemoveFromParent();

		TriggerTaskWidget->MarkPendingKill();

		TriggerTaskWidget = nullptr;
	}

#else
	CleanUp();
#endif
}

TSharedRef<IPropertyTypeCustomization> FTriggerTaskDetailCustomize::MakeInstance()
{
	return MakeShareable(new FTriggerTaskDetailCustomize());
}

void FTriggerTaskDetailCustomize::CustomizeHeader(TSharedRef<IPropertyHandle> PropertyHandle, FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& CustomizationUtils)
{
#if !USE_UMG
	PropertyHandle = InPropertyHandle;
	Components.Empty();
#endif

	HeaderRow
		.NameContent()
		[
			PropertyHandle->CreatePropertyNameWidget(FText::FromString(PropertyHandle->GetProperty()->GetNameCPP()), FText::FromString(TEXT("Refer to the existed task that have allreay created in this level")), false)
		]
	.ValueContent()
		[
#if USE_UMG
			CrateTriggerTaskDetailsPanel(PropertyHandle)
#else
			GetCustomizedTaskComponentWidget()
#endif
		];
}

void FTriggerTaskDetailCustomize::CustomizeChildren(TSharedRef<IPropertyHandle> InPropertyHandle, IDetailChildrenBuilder& ChildBuilder, IPropertyTypeCustomizationUtils& CustomizationUtils)
{
}

#if USE_UMG
TSharedRef<SWidget> FTriggerTaskDetailCustomize::CrateTriggerTaskDetailsPanel(TSharedRef<IPropertyHandle> InPropertyHandle)
{
	UClass* WidgetClass = UFTriggerTaskDetailPanelWidget::StaticClass();

	const UTriggerEditorConfig* const TriggerEditorConfig = GetDefault<UTriggerEditorConfig>();

	if (TriggerEditorConfig)
	{
		if (TriggerEditorConfig->TriggerTaskDetailsPanelWidget != nullptr)
		{
			WidgetClass = TriggerEditorConfig->TriggerTaskDetailsPanelWidget.LoadSynchronous();
		}
	}

	TriggerTaskWidget = NewObject<UFTriggerTaskDetailPanelWidget>(GetTransientPackage(), WidgetClass, NAME_None, RF_Transactional);

	TriggerTaskWidget->Initialize();

	if (TriggerTaskWidget != nullptr)
	{
		TriggerTaskWidget->SetPropertyHandle(InPropertyHandle);

		return TriggerTaskWidget->TakeWidget();
	}
	else
	{
		return SNullWidget::NullWidget;
	}
}

#else

void FTriggerTaskDetailCustomize::CleanUp()
{
	if (PropertyHandle.IsValid())
		PropertyHandle = nullptr;
	if (TaskComponentWidget.IsValid())
		TaskComponentWidget = nullptr;
	if (TaskComponentTextWidget.IsValid())
		TaskComponentTextWidget = nullptr;
	if (ComponentListViewWidget.IsValid())
		ComponentListViewWidget = nullptr;

	TaskWidgets.Empty();
	TaskTextWidgets.Empty();
	ComboButtons.Empty();
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

		for (UTriggerTaskBase* Parent = TaskValue->GetParentTask(); Parent != nullptr; )
		{
			if (Parent != nullptr)
			{
				TaskChainTemp.Add(Parent);
				Parent = Parent->GetParentTask();
			}
		}

		for (int i = TaskChainTemp.Num() - 1; i >= 0; i--)
		{
			TaskChain.Add(TaskChainTemp[i]);
		}


		STextBlock* TextBlock = static_cast<STextBlock*>(TaskComponentTextWidget.Get());

		if (TaskValue->GetTriggerOwner() == nullptr)
			return SNullWidget::NullWidget;

		TextBlock->SetText(FText::FromString(TaskValue->GetTriggerOwner()->GetOuter()->GetName()));

		CreateTaskWidgetRecursively(TaskComponentWidget.ToSharedRef(), TaskValue);

		if (TaskValue->GetChildTasks().Num() != 0)
		{
			CreateCustomizedTaskWidget(TaskWidgets[TaskWidgets.Num() - 1]);
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
	if (EndTask->GetParentTask() == nullptr)
	{
		return CreateCustomizedTaskWidget(ParentWidget, EndTask->GetName());
	}
	else
	{
		return CreateCustomizedTaskWidget(CreateTaskWidgetRecursively(ParentWidget, EndTask->GetParentTask()), EndTask->GetName());
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
			PropertyCustomizationHelpers::MakeBrowseButton(FSimpleDelegate::CreateSP(this, &FTriggerTaskDetailCustomize::BrowserTo),
			FText::FromString(TEXT("Browser to Trigger actor")))
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
	+ SHorizontalBox::Slot()
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

		if (Class == nullptr)
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

	if (Address == nullptr)
		return;

	Trigger.SetObject(InActor);
	Trigger.SetInterface(Address);

	TArray<UTriggerTaskComponentBase*> TriggerTaskComponents;

	Trigger->GetTriggerTaskComponents(TriggerTaskComponents);

	for (int i = 0; i < TriggerTaskComponents.Num(); i++)
	{
		if (TriggerTaskComponents[i] == nullptr)
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
		if (CurrentTryToChangedTaskIndex > TaskChain.Num())
			return SNullWidget::NullWidget;

		UTriggerTaskBase* Task = TaskChain[CurrentTryToChangedTaskIndex - 1];

		if (Task == nullptr)
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
	if (CurrentTryToChangedTaskIndex != -1)
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
#endif