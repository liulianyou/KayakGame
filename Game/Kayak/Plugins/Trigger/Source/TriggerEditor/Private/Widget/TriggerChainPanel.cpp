// Copyright 1998-2099 Epic Games, Inc. All Rights Reserved.


#include "Widget/TriggerChainPanel.h"

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
#include "Widget/Helper/TriggerChainHelper.h"


UTriggerChainPanel::UTriggerChainPanel(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

#if WITH_EDITOR

void UTriggerChainPanel::GetTriggersInLevel(TArray<ANewTriggerBase*>& Result)
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

void UTriggerChainPanel::OnTriggerTreeExpansionChanged()
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


void UTriggerChainPanel::NativeConstruct()
{
#if WITH_EDITOR
    InitTreeView();

    InitDetailsView();

    InitComponentsRadioButton();

#endif
    Super::NativeConstruct();
}

#if WITH_EDITOR

void UTriggerChainPanel::OnGetItemChildren(UObject* Item, TArray<UObject*>& Children)
{
    UTriggerTreeViewObject* TreeObjectItem = Cast<UTriggerTreeViewObject>(Item);
    if (TreeObjectItem)
    {
        Children = TreeObjectItem->NextNodesChildren;
    }
}

void UTriggerChainPanel::OnEntryWidgetGenerated(UUserWidget& EntryWidget)
{
    UTriggerTreeEntryWidget* ListEntry = Cast<UTriggerTreeEntryWidget>(&EntryWidget);
    if (ListEntry)
    {
        ListEntry->OnSelectedTrigger.AddUniqueDynamic(this, &UTriggerChainPanel::OnSelectedTrigger);
        if (CurSelectedTrigger && ListEntry->IsSameTrigger(CurSelectedTrigger))
        {
            ListEntry->TriggerSelected();
        }
    }
}

void UTriggerChainPanel::OnTreeViewScrolled(float, float)
{
    UpdateSelectedEntryWidgetState();
}

void UTriggerChainPanel::OnTreeViewExpanded(UObject* Item, bool bIsExpanded)
{
    UpdateSelectedEntryWidgetState();
}

void UTriggerChainPanel::OnSelectedTrigger(UTriggerTreeViewObject* TriggerData)
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

void UTriggerChainPanel::InitTreeView()
{
    TreeView = Cast<UTreeView>(GetWidgetFromName(TEXT("TreeView_Trigger")));
    if (TreeView == nullptr)
    {
        return;
    }

    TreeView->OnEntryWidgetGenerated().AddUObject(this, &UTriggerChainPanel::OnEntryWidgetGenerated);
    TreeView->OnListViewScrolled().AddUObject(this, &UTriggerChainPanel::OnTreeViewScrolled);
    TreeView->OnItemExpansionChanged().AddUObject(this, &UTriggerChainPanel::OnTreeViewExpanded);

    TArray<ANewTriggerBase*> TriggersInLevelArr;
    GetTriggersInLevel(TriggersInLevelArr);

    FTriggerChainHelper ChainHelper;
    ChainHelper.GenerateTriggerChainInfo(TriggersInLevelArr);
    ChainHelper.GenerateTriggerViewObject(TreeViewObjectArr, TriggerNoTagName, this);

    //add to tree view.
    for (int32 i = 0; i < TreeViewObjectArr.Num(); ++i)
    {
        TreeView->AddItem(TreeViewObjectArr[i]);
    }

    //expand all item.
    TSharedPtr<STreeView<UObject*>> TreeViewWidget = StaticCastSharedPtr<STreeView<UObject*>>(TreeView->GetCachedWidget());
    for (int32 i = 0; i < TreeViewObjectArr.Num(); ++i)
    {
        TreeViewWidget->SetItemExpansion(TreeViewObjectArr[i], true);
    }
    TreeView->SetOnGetItemChildren(this, &UTriggerChainPanel::OnGetItemChildren);
}

void UTriggerChainPanel::InitDetailsView()
{
    DetailsView = Cast<UTriggerDetailsView>(GetWidgetFromName(TEXT("TriggerDetailsView_Trigger")));
    if (DetailsView == nullptr)
    {
        return;
    }
}

void UTriggerChainPanel::InitComponentsRadioButton()
{
    RadioButton = Cast<UTriggerRadioButton>(GetWidgetFromName(TEXT("TriggerRadioButton_Components")));
    if (RadioButton == nullptr)
    {
        return;
    }
    RadioButton->OnRadioSelectChanged.AddDynamic(this, &UTriggerChainPanel::OnSelectComponents);
}

void UTriggerChainPanel::UpdateSelectedEntryWidgetState()
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

void UTriggerChainPanel::OnSelectComponents(int32 Index)
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
