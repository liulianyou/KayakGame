
#include "Widget/TriggerEditPanel.h"

#include "UnrealEd/Public/Editor.h"
#include "ActorEditorUtils.h"
#include "EngineUtils.h"
#include "Components/TreeView.h"

#include "Components/HorizontalBox.h"
#include "Widgets/SBoxPanel.h"

#include "NewTriggerBase.h"
#include "TriggerTaskComponent/TriggerTaskComponent.h"
#include "Widget/TriggerTreeViewObject.h"
#include "Widget/TriggerTreeEntryWidget.h"
#include "Widget/TriggerDetailsView.h"
#include "Widget/TriggerRadioButton.h"
#include "TriggerTaskComponent/EventChain/TriggerEventChainBase.h"


#define NewTriggerChain 1

UTriggerEditPanel::UTriggerEditPanel(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

#if WITH_EDITOR

void UTriggerEditPanel::GetTriggersInLevel(TArray<ANewTriggerBase*>& Result)
{
	if (!IsInGameThread())
	{
		return;
	}
	if (!GIsEditor)
	{
		return;
	}
	if (GEditor->PlayWorld || GIsPlayInEditorWorld)
	{
		return;
	}

	UWorld* EditorWorld = GEditor ? GEditor->GetEditorWorldContext(false).World() : nullptr;
	//Default iterator only iterates over active levels.
	const EActorIteratorFlags Flags = EActorIteratorFlags::SkipPendingKill;
	for (TActorIterator<ANewTriggerBase> It(EditorWorld, ANewTriggerBase::StaticClass(), Flags); It; ++It)
	{
		ANewTriggerBase* Actor = *It;
		if (Actor->IsEditable() &&
			Actor->IsListedInSceneOutliner() &&					// Only add actors that are allowed to be selected and drawn in editor
			!Actor->IsTemplate() &&								// Should never happen, but we never want CDOs
			!Actor->HasAnyFlags(RF_Transient) &&				// Don't add transient actors in non-play worlds
			!Actor->IsA(AWorldSettings::StaticClass()))			// Don't add the WorldSettings actor, even though it is technically editable
		{
			Result.Add(*It);
		}
	}
}

void UTriggerEditPanel::OnTriggerTreeExpansionChanged()
{
	if (CurSelectedTrigger)
	{
		UTriggerTreeEntryWidget* LastSelectedEntry = Cast<UTriggerTreeEntryWidget>(TreeView->GetEntryWidgetFromItem(CurSelectedTrigger));
		if (LastSelectedEntry)
		{
			LastSelectedEntry->TriggerSelected();
		}
	}
}

#endif


void UTriggerEditPanel::NativeConstruct()
{
#if WITH_EDITOR
	InitTreeView();

	InitDetailsView();

	InitComponentsRadioButton();

// 	UHorizontalBox* ContentPanel = Cast<UHorizontalBox>(GetWidgetFromName(TEXT("HorizontalBox_Content")));
// 	if (ContentPanel == nullptr)
// 	{
// 		return;
// 	}
// 	TSharedPtr<SHorizontalBox> ContentWidget = StaticCastSharedPtr<SHorizontalBox>(ContentPanel->GetCachedWidget());
// 
// 	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
// 
// 	FDetailsViewArgs DetailsViewArgs;
// 	DetailsViewArgs.bUpdatesFromSelection = false;
// 	DetailsViewArgs.bLockable = false;
// 	DetailsViewArgs.bShowPropertyMatrixButton = false;
// 	DetailsViewArgs.NameAreaSettings = FDetailsViewArgs::HideNameArea;
// 	DetailsViewArgs.ViewIdentifier = NAME_None;
// 	DetailsView = PropertyModule.CreateDetailView(DetailsViewArgs);
// 	ContentWidget->AddSlot()
// 			.FillWidth(1.0f)
// 			.HAlign(EHorizontalAlignment::HAlign_Fill)
// 			.VAlign(EVerticalAlignment::VAlign_Top)
// 			[
// 				DetailsView.ToSharedRef()
// 			]
// 	;

#endif
	Super::NativeConstruct();
}

#if WITH_EDITOR

void UTriggerEditPanel::OnGetItemChildren(UObject* Item, TArray<UObject*>& Children)
{
	UTriggerTreeViewObject* TreeObjectItem = Cast<UTriggerTreeViewObject>(Item);
	if (TreeObjectItem)
	{
		Children = TreeObjectItem->NextNodesChildren;
	}
}

void UTriggerEditPanel::OnEntryWidgetGenerated(UUserWidget& EntryWidget)
{
	UTriggerTreeEntryWidget* ListEntry = Cast<UTriggerTreeEntryWidget>(&EntryWidget);
	if (ListEntry)
	{
		ListEntry->OnSelectedTrigger.AddUniqueDynamic(this, &UTriggerEditPanel::OnSelectedTrigger);
		if (CurSelectedTrigger && ListEntry->IsSameTrigger(CurSelectedTrigger))
		{
			ListEntry->TriggerSelected();
		}
	}
}

void UTriggerEditPanel::OnTreeViewScrolled(float, float)
{
	UpdateSelectedEntryWidgetState();
}

void UTriggerEditPanel::OnTreeViewExpanded(UObject* Item, bool bIsExpanded)
{
	UpdateSelectedEntryWidgetState();
}

void UTriggerEditPanel::OnSelectedTrigger(UTriggerTreeViewObject* TriggerData)
{
	if (TriggerData == nullptr || TreeView == nullptr)
	{
		return;
	}
	if (CurSelectedTrigger)
	{
		UTriggerTreeEntryWidget* LastSelectedEntry = Cast<UTriggerTreeEntryWidget>(TreeView->GetEntryWidgetFromItem(CurSelectedTrigger));
		if (LastSelectedEntry)
		{
			LastSelectedEntry->TriggerUnSelected();
		}
	}
	CurSelectedTrigger = TriggerData;
	//update trigger details panel.
	if (TriggerData && TriggerData->Trigger && DetailsView)
	{
		TArray<UTriggerTaskComponentBase*> TaskComponents;
		TriggerData->Trigger->GetTriggerTaskComponents(TaskComponents);
		if (TaskComponents.Num() > 0)
		{
			DetailsView->SelectObject(TaskComponents[0]);
		}
		if (RadioButton)
		{
			RadioButton->SetTextArrByTriggerComponents(TaskComponents);
		}
	}
}

void UTriggerEditPanel::InitTreeView()
{
	TreeView = Cast<UTreeView>(GetWidgetFromName(TEXT("TreeView_Trigger")));
	if (TreeView == nullptr)
	{
		return;
	}

	TreeView->OnEntryWidgetGenerated().AddUObject(this, &UTriggerEditPanel::OnEntryWidgetGenerated);
	TreeView->OnListViewScrolled().AddUObject(this, &UTriggerEditPanel::OnTreeViewScrolled);
	TreeView->OnItemExpansionChanged().AddUObject(this, &UTriggerEditPanel::OnTreeViewExpanded);

// 	for (int32 i = 0; i < 20; ++i)
// 	{
// 		UTriggerTreeViewObject* Child = NewObject<UTriggerTreeViewObject>(this);
// 		Child->TriggerLevel = 0;
// 		Child->TriggerName = FString::FromInt(i);
// 		Child->TestData();
// 
// 		TreeView->AddItem(Child);
// 	}

	//construct tree view object.
	TMap<ANewTriggerBase*, UTriggerTreeViewObject*> Trigger2TreeObjectMap;

	TArray<ANewTriggerBase*> TriggersInLevelArr;
	GetTriggersInLevel(TriggersInLevelArr);

	//new tree view object, first add to Trigger2TreeObjectMap, for ring relationship.
	for (int32 i = 0; i < TriggersInLevelArr.Num(); ++i)
	{
		ANewTriggerBase* Trigger = TriggersInLevelArr[i];
		TArray<UTriggerTaskComponentBase*> TaskComponents;
		Trigger->GetTriggerTaskComponents(TaskComponents);
		if (TaskComponents.Num() == 0)
		{
			continue;
		}
		const UTriggerTaskComponent* TriggerCompoennt = Cast<UTriggerTaskComponent>(TaskComponents[0]);
        if (TriggerCompoennt == nullptr)
        {
            continue;
        }
#if NewTriggerChain
        const TArray<UTriggerEventChainBase*>& EventChainsArr = TriggerCompoennt->GetConstEventChains();
        if (EventChainsArr.Num() == 0)
        {
            continue;
        }
        bool IsFirstTrigger = true;
        TArray<TScriptInterface<ITriggerInterface>> OuterTriggers;
        for (int32 ChainIndex = 0; ChainIndex < EventChainsArr.Num(); ++ChainIndex)
        {
            EventChainsArr[ChainIndex]->GetParentTriggers(OuterTriggers);
            if (OuterTriggers.Num() > 0)
            {
                IsFirstTrigger = false;
                break;
            }
        }

        UTriggerTreeViewObject* Child = NewObject<UTriggerTreeViewObject>(this);
        Child->TriggerName = Trigger->GetActorLabel();//UKismetSystemLibrary::GetDisplayName
        Child->Trigger = Trigger;
        Trigger2TreeObjectMap.Add(Trigger, Child);

        if (IsFirstTrigger)
        {
            TreeViewObjectArr.Add(Child);
            Child->TriggerLevel = 0;//start from 0.
        }
#else
        UTriggerTreeViewObject* Child = NewObject<UTriggerTreeViewObject>(this);
        Child->TriggerName = Trigger->GetActorLabel();//UKismetSystemLibrary::GetDisplayName
        Child->Trigger = Trigger;
        Trigger2TreeObjectMap.Add(Trigger, Child);

        if (TriggerCompoennt->IsFirstTrigger)
        {
            TreeViewObjectArr.Add(Child);
            Child->TriggerLevel = 0;//start from 0.
        }
#endif
	}

	//construct next nodes.
	for (int32 i = 0; i < TreeViewObjectArr.Num(); ++i)
	{
		UTriggerTreeViewObject* TreeViewObject = TreeViewObjectArr[i];
		TreeViewObject->ConstructNextNodes(Trigger2TreeObjectMap);
		TreeView->AddItem(TreeViewObject);
	}


	//expand all item.
	TSharedPtr<STreeView<UObject*>> TreeViewWidget = StaticCastSharedPtr<STreeView<UObject*>>(TreeView->GetCachedWidget());
	for (TMap<ANewTriggerBase*, UTriggerTreeViewObject*>::TConstIterator Iter(Trigger2TreeObjectMap); Iter; ++Iter)
	{
		if (Iter->Value->NextNodesChildren.Num() > 0)
		{
			TreeViewWidget->SetItemExpansion(Iter->Value, true);
		}
	}
	TreeView->SetOnGetItemChildren(this, &UTriggerEditPanel::OnGetItemChildren);
}

void UTriggerEditPanel::InitDetailsView()
{
	DetailsView = Cast<UTriggerDetailsView>(GetWidgetFromName(TEXT("TriggerDetailsView_Trigger")));
	if (DetailsView == nullptr)
	{
		return;
	}
}

void UTriggerEditPanel::InitComponentsRadioButton()
{
	RadioButton = Cast<UTriggerRadioButton>(GetWidgetFromName(TEXT("TriggerRadioButton_Components")));
	if (RadioButton == nullptr)
	{
		return;
	}
	RadioButton->OnRadioSelectChanged.AddDynamic(this, &UTriggerEditPanel::OnSelectComponents);
}

void UTriggerEditPanel::UpdateSelectedEntryWidgetState()
{
	if (CurSelectedTrigger)
	{
		UTriggerTreeEntryWidget* CurSelectedEntry = Cast<UTriggerTreeEntryWidget>(TreeView->GetEntryWidgetFromItem(CurSelectedTrigger));
		if (CurSelectedEntry)
		{
			CurSelectedEntry->TriggerSelected();
		}
	}
}

void UTriggerEditPanel::OnSelectComponents(int32 Index)
{
	//update trigger details panel.
	if (CurSelectedTrigger && CurSelectedTrigger->Trigger && DetailsView)
	{
		TArray<UTriggerTaskComponentBase*> TaskComponents;
		CurSelectedTrigger->Trigger->GetTriggerTaskComponents(TaskComponents);
		if (TaskComponents.Num() > Index)
		{
			DetailsView->SelectObject(TaskComponents[Index]);
		}
	}
}

#endif
