// Copyright 1998-2099 Epic Games, Inc. All Rights Reserved.


#include "Widget/SCustomTagWidget.h"

#include "Misc/ConfigCacheIni.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Input/SCheckBox.h"
#include "Widgets/Input/SComboButton.h"
#include "Widgets/Images/SImage.h"
#include "EditorStyleSet.h"
#include "Widgets/SWindow.h"
#include "Dialogs/Dialogs.h"
#include "GameplayTagsModule.h"
#include "ScopedTransaction.h"
#include "Textures/SlateIcon.h"
#include "PropertyHandle.h"
#include "Widgets/Input/SSearchBox.h"
#include "GameplayTagsEditorModule.h"
#include "Widgets/Layout/SScaleBox.h"

#include "AssetToolsModule.h"
#include "Widgets/Input/SHyperlink.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "Framework/Notifications/NotificationManager.h"
#include "GameplayTagsSettings.h"
#include "Layout/WidgetPath.h"
#include "Framework/Application/SlateApplication.h"
//#include "SAddNewGameplayTagWidget.h"
//#include "SAddNewGameplayTagSourceWidget.h"
//#include "SAddNewRestrictedGameplayTagWidget.h"
//#include "SRenameGameplayTagDialog.h"
#include "AssetData.h"
#include "Editor.h"
#include "Framework/Commands/UIAction.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Misc/MessageDialog.h"

#define LOCTEXT_NAMESPACE "TriggerEditor"

const FString SCustomTagWidget::SettingsIniSection = TEXT("GameplayTagWidget");

void SCustomTagWidget::Construct(const FArguments& InArgs, const TArray<FEditableGameplayTagContainerDatum>& EditableTagContainers)
{
    // If we're in management mode, we don't need to have editable tag containers.
    ensure(EditableTagContainers.Num() > 0 || InArgs._GameplayTagUIMode == EGameplayTagUIMode::ManagementMode);
    TagContainers = EditableTagContainers;

    OnTagChanged = InArgs._OnTagChanged;
    bReadOnly = InArgs._ReadOnly;
    TagContainerName = InArgs._TagContainerName;
    bMultiSelect = InArgs._MultiSelect;
    PropertyHandle = InArgs._PropertyHandle;
    RootFilterString = InArgs._Filter;
    GameplayTagUIMode = InArgs._GameplayTagUIMode;

    bAddTagSectionExpanded = InArgs._NewTagControlsInitiallyExpanded;
    bDelayRefresh = false;
    MaxHeight = InArgs._MaxHeight;

    bRestrictedTags = InArgs._RestrictedTags;

    UGameplayTagsManager::OnEditorRefreshGameplayTagTree.AddSP(this, &SCustomTagWidget::RefreshOnNextTick);
    UGameplayTagsManager& Manager = UGameplayTagsManager::Get();

    Manager.GetFilteredGameplayRootTags(RootFilterString, TagItems);

    if (bRestrictedTags)
    {
        // We only want to show the restricted gameplay tags
        for (int32 Idx = TagItems.Num() - 1; Idx >= 0; --Idx)
        {
            if (!TagItems[Idx]->IsRestrictedGameplayTag())
            {
                TagItems.RemoveAtSwap(Idx);
            }
        }
    }

    // Tag the assets as transactional so they can support undo/redo
    TArray<UObject*> ObjectsToMarkTransactional;
    if (PropertyHandle.IsValid())
    {
        // If we have a property handle use that to find the objects that need to be transactional
        PropertyHandle->GetOuterObjects(ObjectsToMarkTransactional);
    }
    else
    {
        // Otherwise use the owner list
        for (int32 AssetIdx = 0; AssetIdx < TagContainers.Num(); ++AssetIdx)
        {
            ObjectsToMarkTransactional.Add(TagContainers[AssetIdx].TagContainerOwner.Get());
        }
    }

    // Now actually mark the assembled objects
    for (UObject* ObjectToMark : ObjectsToMarkTransactional)
    {
        if (ObjectToMark)
        {
            ObjectToMark->SetFlags(RF_Transactional);
        }
    }

    //const FText NewTagText = bRestrictedTags ? LOCTEXT("AddNewRestrictedTag", "Add New Restricted Gameplay Tag") : LOCTEXT("AddNewTag", "Add New Gameplay Tag");

    ChildSlot
    [
        SNew(SBorder)
        .BorderImage(FEditorStyle::GetBrush("ToolPanel.GroupBorder"))
        [
            SNew(SVerticalBox)

            // Expandable UI controls
            //+SVerticalBox::Slot()
            //.AutoHeight()
            //.VAlign(VAlign_Top)
            //[
            //    SNew(SHorizontalBox)
            //
            //    +SHorizontalBox::Slot()
            //    .AutoWidth()
            //    [
            //        SNew( SCheckBox )
            //        .IsChecked(this, &SCustomTagWidget::GetAddTagSectionExpansionState) 
            //        .OnCheckStateChanged(this, &SCustomTagWidget::OnAddTagSectionExpansionStateChanged)
            //        .CheckedImage(FEditorStyle::GetBrush("TreeArrow_Expanded"))
            //        .CheckedHoveredImage(FEditorStyle::GetBrush("TreeArrow_Expanded_Hovered"))
            //        .CheckedPressedImage(FEditorStyle::GetBrush("TreeArrow_Expanded"))
            //        .UncheckedImage(FEditorStyle::GetBrush("TreeArrow_Collapsed"))
            //        .UncheckedHoveredImage(FEditorStyle::GetBrush("TreeArrow_Collapsed_Hovered"))
            //        .UncheckedPressedImage(FEditorStyle::GetBrush("TreeArrow_Collapsed"))
            //        .Visibility( this, &SCustomTagWidget::DetermineExpandableUIVisibility )
            //        [
            //            SNew( STextBlock )
            //            .Text( NewTagText )
            //        ]
            //    ]
            //]


            // Expandable UI for adding restricted tags
            //+SVerticalBox::Slot()
            //.AutoHeight()
            //.VAlign(VAlign_Top)
            //.Padding(16.0f, 0.0f)
            //[
            //    SAssignNew(AddNewRestrictedTagWidget, SAddNewRestrictedGameplayTagWidget)
            //    .Visibility(this, &SCustomTagWidget::DetermineAddNewRestrictedTagWidgetVisibility)
            //    .OnRestrictedGameplayTagAdded(this, &SCustomTagWidget::OnGameplayTagAdded)
            //    .NewRestrictedTagName(InArgs._NewTagName)
            //]

            // Expandable UI for adding non-restricted tags
            //+SVerticalBox::Slot()
            //.AutoHeight()
            //.VAlign(VAlign_Top)
            //.Padding(16.0f, 0.0f)
            //[
            //    SAssignNew( AddNewTagWidget, SAddNewGameplayTagWidget )
            //    .Visibility(this, &SCustomTagWidget::DetermineAddNewTagWidgetVisibility)
            //    .OnGameplayTagAdded(this, &SCustomTagWidget::OnGameplayTagAdded)
            //    .NewTagName(InArgs._NewTagName)
            //]

            // Expandable UI controls
            //+ SVerticalBox::Slot()
            //.AutoHeight()
            //.VAlign(VAlign_Top)
            //[
            //    SNew(SHorizontalBox)
            //
            //    + SHorizontalBox::Slot()
            //    .AutoWidth()
            //    [
            //        SNew(SCheckBox)
            //        .IsChecked(this, &SCustomTagWidget::GetAddSourceSectionExpansionState)
            //        .OnCheckStateChanged(this, &SCustomTagWidget::OnAddSourceSectionExpansionStateChanged)
            //        .CheckedImage(FEditorStyle::GetBrush("TreeArrow_Expanded"))
            //        .CheckedHoveredImage(FEditorStyle::GetBrush("TreeArrow_Expanded_Hovered"))
            //        .CheckedPressedImage(FEditorStyle::GetBrush("TreeArrow_Expanded"))
            //        .UncheckedImage(FEditorStyle::GetBrush("TreeArrow_Collapsed"))
            //        .UncheckedHoveredImage(FEditorStyle::GetBrush("TreeArrow_Collapsed_Hovered"))
            //        .UncheckedPressedImage(FEditorStyle::GetBrush("TreeArrow_Collapsed"))
            //        .Visibility(this, &SCustomTagWidget::DetermineAddNewSourceExpandableUIVisibility)
            //        [
            //            SNew(STextBlock)
            //            .Text(LOCTEXT("AddNewSource", "Add New Tag Source"))
            //        ]
            //    ]
            //]

            //+ SVerticalBox::Slot()
            //.AutoHeight()
            //.VAlign(VAlign_Top)
            //.Padding(16.0f, 0.0f)
            //[
            //    SAssignNew(AddNewTagSourceWidget, SAddNewGameplayTagSourceWidget)
            //    .Visibility(this, &SCustomTagWidget::DetermineAddNewSourceWidgetVisibility)
            //]

            +SVerticalBox::Slot()
            .AutoHeight()
            .VAlign(VAlign_Top)
            [
                SNew(SBorder)
                .BorderImage(FEditorStyle::GetBrush("DetailsView.CategoryMiddle"))
                .Padding(FMargin(0.0f, 3.0f, 0.0f, 0.0f))
                .Visibility(this, &SCustomTagWidget::DetermineAddNewTagWidgetVisibility)
                [
                    SNew(SImage)
                    .Image(FEditorStyle::GetBrush("DetailsView.AdvancedDropdownBorder.Open"))
                ]
            ]

            // Gameplay Tag Tree controls
            +SVerticalBox::Slot()
            .AutoHeight()
            .VAlign(VAlign_Top)
            [
                SNew(SHorizontalBox)

                // Expand All nodes
                +SHorizontalBox::Slot()
                .AutoWidth()
                [
                    SNew(SButton)
                    .OnClicked(this, &SCustomTagWidget::OnExpandAllClicked)
                    .Text(LOCTEXT("GameplayTagWidget_ExpandAll", "Expand All"))
                ]
            
                // Collapse All nodes
                +SHorizontalBox::Slot()
                .AutoWidth()
                [
                    SNew(SButton)
                    .OnClicked(this, &SCustomTagWidget::OnCollapseAllClicked)
                    .Text(LOCTEXT("GameplayTagWidget_CollapseAll", "Collapse All"))
                ]

                // Clear selections
                +SHorizontalBox::Slot()
                .AutoWidth()
                [
                    SNew(SButton)
                    .IsEnabled(this, &SCustomTagWidget::CanSelectTags)
                    .OnClicked(this, &SCustomTagWidget::OnClearAllClicked)
                    .Text(LOCTEXT("GameplayTagWidget_ClearAll", "Clear All"))
                    .Visibility(this, &SCustomTagWidget::DetermineClearSelectionVisibility)
                ]

                // Search
                +SHorizontalBox::Slot()
                .VAlign( VAlign_Center )
                .FillWidth(1.f)
                .Padding(5,1,5,1)
                [
                    SAssignNew(SearchTagBox, SSearchBox)
                    .HintText(LOCTEXT("GameplayTagWidget_SearchBoxHint", "Search Gameplay Tags"))
                    .OnTextChanged( this, &SCustomTagWidget::OnFilterTextChanged )
                ]
            ]

            // Gameplay Tags tree
            +SVerticalBox::Slot()
            .MaxHeight(MaxHeight)
            [
                SAssignNew(TagTreeContainerWidget, SBorder)
                .Padding(FMargin(4.f))
                [
                    SAssignNew(TagTreeWidget, STreeView< TSharedPtr<FGameplayTagNode> >)
                    .TreeItemsSource(&TagItems)
                    .OnGenerateRow(this, &SCustomTagWidget::OnGenerateRow)
                    .OnGetChildren(this, &SCustomTagWidget::OnGetChildren)
                    .OnExpansionChanged( this, &SCustomTagWidget::OnExpansionChanged)
                    .SelectionMode(ESelectionMode::Multi)
                ]
            ]
        ]
    ];

    // Force the entire tree collapsed to start
    SetTagTreeItemExpansion(false);
     
    LoadSettings();

    // Strip any invalid tags from the assets being edited
    VerifyAssetTagValidity();
}

void SCustomTagWidget::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
    SCompoundWidget::Tick(AllottedGeometry, InCurrentTime, InDeltaTime);

    if (bDelayRefresh)
    {
        RefreshTags();
        bDelayRefresh = false;
    }
}

FVector2D SCustomTagWidget::ComputeDesiredSize(float LayoutScaleMultiplier) const
{
    FVector2D WidgetSize = SCompoundWidget::ComputeDesiredSize(LayoutScaleMultiplier);

    FVector2D TagTreeContainerSize = TagTreeContainerWidget->GetDesiredSize();

    if (TagTreeContainerSize.Y < MaxHeight)
    {
        WidgetSize.Y += MaxHeight - TagTreeContainerSize.Y;
    }

    return WidgetSize;
}

void SCustomTagWidget::OnFilterTextChanged(const FText& InFilterText)
{
    FilterString = InFilterText.ToString();

    if (FilterString.IsEmpty())
    {
        TagTreeWidget->SetTreeItemsSource(&TagItems);

        for (int32 iItem = 0; iItem < TagItems.Num(); ++iItem)
        {
            SetDefaultTagNodeItemExpansion(TagItems[iItem]);
        }
    }
    else
    {
        FilteredTagItems.Empty();

        for (int32 iItem = 0; iItem < TagItems.Num(); ++iItem)
        {
            if (FilterChildrenCheck(TagItems[iItem]))
            {
                FilteredTagItems.Add(TagItems[iItem]);
                SetTagNodeItemExpansion(TagItems[iItem], true);
            }
            else
            {
                SetTagNodeItemExpansion(TagItems[iItem], false);
            }
        }

        TagTreeWidget->SetTreeItemsSource(&FilteredTagItems);
    }

    TagTreeWidget->RequestTreeRefresh();
}

bool SCustomTagWidget::FilterChildrenCheck(TSharedPtr<FGameplayTagNode> InItem)
{
    if (!InItem.IsValid())
    {
        return false;
    }

    if (bRestrictedTags && !InItem->IsRestrictedGameplayTag())
    {
        return false;
    }

    auto FilterChildrenCheck_r = ([=]()
        {
            TArray< TSharedPtr<FGameplayTagNode> > Children = InItem->GetChildTagNodes();
            for (int32 iChild = 0; iChild < Children.Num(); ++iChild)
            {
                if (FilterChildrenCheck(Children[iChild]))
                {
                    return true;
                }
            }
            return false;
        });


    bool DelegateShouldHide = false;
    UGameplayTagsManager::Get().OnFilterGameplayTagChildren.Broadcast(RootFilterString, InItem, DelegateShouldHide);
    if (DelegateShouldHide)
    {
        // The delegate wants to hide, see if any children need to show
        return FilterChildrenCheck_r();
    }

    if (InItem->GetCompleteTagString().Contains(FilterString) || FilterString.IsEmpty())
    {
        return true;
    }

    return FilterChildrenCheck_r();
}

TSharedRef<ITableRow> SCustomTagWidget::OnGenerateRow(TSharedPtr<FGameplayTagNode> InItem, const TSharedRef<STableViewBase>& OwnerTable)
{
    FText TooltipText;
    if (InItem.IsValid())
    {
        UGameplayTagsManager& Manager = UGameplayTagsManager::Get();

        FName TagName = InItem.Get()->GetCompleteTagName();
        TSharedPtr<FGameplayTagNode> Node = Manager.FindTagNode(TagName);

        FString TooltipString = TagName.ToString();

        if (Node.IsValid())
        {
            // Add Tag source if we're in management mode
            if (GameplayTagUIMode == EGameplayTagUIMode::ManagementMode)
            {
                FName TagSource;

                if (Node->IsExplicitTag())
                {
                    TagSource = FName(TEXT("Error"));//Node->SourceName;
                }
                else
                {
                    TagSource = FName(TEXT("Implicit"));
                }

                TooltipString.Append(FString::Printf(TEXT(" (%s)"), *TagSource.ToString()));
            }

            // tag comments
            //if (!Node->DevComment.IsEmpty())
            //{
            //    TooltipString.Append(FString::Printf(TEXT("\n\n%s"), *Node->DevComment));
            //}

            // info related to conflicts
            //if (Node->bDescendantHasConflict)
            //{
            //    TooltipString.Append(TEXT("\n\nA tag that descends from this tag has a source conflict."));
            //}
            //
            //if (Node->bAncestorHasConflict)
            //{
            //    TooltipString.Append(TEXT("\n\nThis tag is descended from a tag that has a conflict. No operations can be performed on this tag until the conflict is resolved."));
            //}
            //
            //if (Node->bNodeHasConflict)
            //{
            //    TooltipString.Append(TEXT("\n\nThis tag comes from multiple sources. Tags may only have one source."));
            //}
        }

        TooltipText = FText::FromString(TooltipString);
    }

    return SNew(STableRow< TSharedPtr<FGameplayTagNode> >, OwnerTable)
        .Style(FEditorStyle::Get(), "GameplayTagTreeView")
        [
            SNew( SHorizontalBox )

            // Tag Selection (selection mode only)
            +SHorizontalBox::Slot()
            .FillWidth(1.0f)
            .HAlign(HAlign_Left)
            [
                SNew(SCheckBox)
                .OnCheckStateChanged(this, &SCustomTagWidget::OnTagCheckStatusChanged, InItem)
                .IsChecked(this, &SCustomTagWidget::IsTagChecked, InItem)
                .ToolTipText(TooltipText)
                .IsEnabled(this, &SCustomTagWidget::CanSelectTags)
                .Visibility( GameplayTagUIMode == EGameplayTagUIMode::SelectionMode ? EVisibility::Visible : EVisibility::Collapsed )
                [
                    SNew(STextBlock)
                    .Text(FText::FromName(InItem->GetSimpleTagName()))
                ]
            ]

            // Normal Tag Display (management mode only)
            +SHorizontalBox::Slot()
            .FillWidth(1.0f)
            .HAlign(HAlign_Left)
            [
                SNew( STextBlock )
                .ToolTip( FSlateApplication::Get().MakeToolTip(TooltipText) )
                .Text(FText::FromName( InItem->GetSimpleTagName()) )
                .ColorAndOpacity(this, &SCustomTagWidget::GetTagTextColour, InItem)
                .Visibility( GameplayTagUIMode != EGameplayTagUIMode::SelectionMode ? EVisibility::Visible : EVisibility::Collapsed )
            ]

            // Allows non-restricted children checkbox
            +SHorizontalBox::Slot()
            .AutoWidth()
            .HAlign(HAlign_Right)
            [
                SNew(SCheckBox)
                .ToolTipText(LOCTEXT("AllowsChildren", "Does this restricted tag allow non-restricted children"))
                .OnCheckStateChanged(this, &SCustomTagWidget::OnAllowChildrenTagCheckStatusChanged, InItem)
                .IsChecked(this, &SCustomTagWidget::IsAllowChildrenTagChecked, InItem)
                .Visibility(this, &SCustomTagWidget::DetermineAllowChildrenVisible, InItem)
            ]

            // Add Subtag
            //+SHorizontalBox::Slot()
            //.AutoWidth()
            //.HAlign(HAlign_Right)
            //[
            //    SNew( SButton )
            //    .ToolTipText( LOCTEXT("AddSubtag", "Add Subtag") )
            //    .Visibility(this, &SCustomTagWidget::DetermineAddNewSubTagWidgetVisibility, InItem)
            //    .ButtonStyle(FEditorStyle::Get(), "HoverHintOnly")
            //    .OnClicked( this, &SCustomTagWidget::OnAddSubtagClicked, InItem )
            //    .DesiredSizeScale(FVector2D(0.75f, 0.75f))
            //    .ContentPadding(4.0f)
            //    .ForegroundColor(FSlateColor::UseForeground())
            //    .IsEnabled( !bReadOnly )
            //    .IsFocusable( false )
            //    [
            //        SNew( SImage )
            //        .Image(FEditorStyle::GetBrush("PropertyWindow.Button_AddToArray"))
            //        .ColorAndOpacity(FSlateColor::UseForeground())
            //    ]
            //]

            // More Actions Menu
            +SHorizontalBox::Slot()
            .AutoWidth()
            .HAlign(HAlign_Right)
            [
                SNew( SComboButton )
                .ToolTipText( LOCTEXT("MoreActions", "More Actions...") )
                .ButtonStyle(FEditorStyle::Get(), "HoverHintOnly")
                .ContentPadding(0)
                .ForegroundColor(FSlateColor::UseForeground())
                .HasDownArrow(true)
                .MenuContent()
                [
                    MakeTagActionsMenu(InItem)
                ]
            ]
        ];
}

void SCustomTagWidget::OnGetChildren(TSharedPtr<FGameplayTagNode> InItem, TArray< TSharedPtr<FGameplayTagNode> >& OutChildren)
{
    TArray< TSharedPtr<FGameplayTagNode> > FilteredChildren;
    TArray< TSharedPtr<FGameplayTagNode> > Children = InItem->GetChildTagNodes();

    for (int32 iChild = 0; iChild < Children.Num(); ++iChild)
    {
        if (FilterChildrenCheck(Children[iChild]))
        {
            FilteredChildren.Add(Children[iChild]);
        }
    }
    OutChildren += FilteredChildren;
}

void SCustomTagWidget::OnTagCheckStatusChanged(ECheckBoxState NewCheckState, TSharedPtr<FGameplayTagNode> NodeChanged)
{
    if (NewCheckState == ECheckBoxState::Checked)
    {
        OnTagChecked(NodeChanged);
    }
    else if (NewCheckState == ECheckBoxState::Unchecked)
    {
        OnTagUnchecked(NodeChanged);
    }
}

void SCustomTagWidget::OnTagChecked(TSharedPtr<FGameplayTagNode> NodeChecked)
{
    FScopedTransaction Transaction(LOCTEXT("GameplayTagWidget_AddTags", "Add Gameplay Tags"));

    UGameplayTagsManager& TagsManager = UGameplayTagsManager::Get();

    for (int32 ContainerIdx = 0; ContainerIdx < TagContainers.Num(); ++ContainerIdx)
    {
        TSharedPtr<FGameplayTagNode> CurNode(NodeChecked);
        UObject* OwnerObj = TagContainers[ContainerIdx].TagContainerOwner.Get();
        FGameplayTagContainer* Container = TagContainers[ContainerIdx].TagContainer;

        if (Container)
        {
            FGameplayTagContainer EditableContainer = *Container;

            bool bRemoveParents = false;

            while (CurNode.IsValid())
            {
                FGameplayTag GameplayTag = CurNode->GetCompleteTag();

                if (bRemoveParents == false)
                {
                    bRemoveParents = true;
                    if (bMultiSelect == false)
                    {
                        EditableContainer.Reset();
                    }
                    EditableContainer.AddTag(GameplayTag);
                }
                else
                {
                    EditableContainer.RemoveTag(GameplayTag);
                }

                CurNode = CurNode->GetParentTagNode();
            }
            SetContainer(Container, &EditableContainer, OwnerObj);
        }
    }
}

void SCustomTagWidget::OnTagUnchecked(TSharedPtr<FGameplayTagNode> NodeUnchecked)
{
    FScopedTransaction Transaction(LOCTEXT("GameplayTagWidget_RemoveTags", "Remove Gameplay Tags"));
    if (NodeUnchecked.IsValid())
    {
        UGameplayTagsManager& TagsManager = UGameplayTagsManager::Get();

        for (int32 ContainerIdx = 0; ContainerIdx < TagContainers.Num(); ++ContainerIdx)
        {
            UObject* OwnerObj = TagContainers[ContainerIdx].TagContainerOwner.Get();
            FGameplayTagContainer* Container = TagContainers[ContainerIdx].TagContainer;
            FGameplayTag GameplayTag = NodeUnchecked->GetCompleteTag();

            if (Container)
            {
                FGameplayTagContainer EditableContainer = *Container;
                EditableContainer.RemoveTag(GameplayTag);

                TSharedPtr<FGameplayTagNode> ParentNode = NodeUnchecked->GetParentTagNode();
                if (ParentNode.IsValid())
                {
                    // Check if there are other siblings before adding parent
                    bool bOtherSiblings = false;
                    for (auto It = ParentNode->GetChildTagNodes().CreateConstIterator(); It; ++It)
                    {
                        GameplayTag = It->Get()->GetCompleteTag();
                        if (EditableContainer.HasTagExact(GameplayTag))
                        {
                            bOtherSiblings = true;
                            break;
                        }
                    }
                    // Add Parent
                    if (!bOtherSiblings)
                    {
                        GameplayTag = ParentNode->GetCompleteTag();
                        EditableContainer.AddTag(GameplayTag);
                    }
                }

                // Uncheck Children
                for (const auto& ChildNode : NodeUnchecked->GetChildTagNodes())
                {
                    UncheckChildren(ChildNode, EditableContainer);
                }

                SetContainer(Container, &EditableContainer, OwnerObj);
            }

        }
    }
}

void SCustomTagWidget::UncheckChildren(TSharedPtr<FGameplayTagNode> NodeUnchecked, FGameplayTagContainer& EditableContainer)
{
    UGameplayTagsManager& TagsManager = UGameplayTagsManager::Get();

    FGameplayTag GameplayTag = NodeUnchecked->GetCompleteTag();
    EditableContainer.RemoveTag(GameplayTag);

    // Uncheck Children
    for (const auto& ChildNode : NodeUnchecked->GetChildTagNodes())
    {
        UncheckChildren(ChildNode, EditableContainer);
    }
}

ECheckBoxState SCustomTagWidget::IsTagChecked(TSharedPtr<FGameplayTagNode> Node) const
{
    int32 NumValidAssets = 0;
    int32 NumAssetsTagIsAppliedTo = 0;

    if (Node.IsValid())
    {
        UGameplayTagsManager& TagsManager = UGameplayTagsManager::Get();

        for (int32 ContainerIdx = 0; ContainerIdx < TagContainers.Num(); ++ContainerIdx)
        {
            FGameplayTagContainer* Container = TagContainers[ContainerIdx].TagContainer;
            if (Container)
            {
                NumValidAssets++;
                FGameplayTag GameplayTag = Node->GetCompleteTag();
                if (GameplayTag.IsValid())
                {
                    if (Container->HasTag(GameplayTag))
                    {
                        ++NumAssetsTagIsAppliedTo;
                    }
                }
            }
        }
    }

    if (NumAssetsTagIsAppliedTo == 0)
    {
        return ECheckBoxState::Unchecked;
    }
    else if (NumAssetsTagIsAppliedTo == NumValidAssets)
    {
        return ECheckBoxState::Checked;
    }
    else
    {
        return ECheckBoxState::Undetermined;
    }
}

bool SCustomTagWidget::IsExactTagInCollection(TSharedPtr<FGameplayTagNode> Node) const
{
    if (Node.IsValid())
    {
        UGameplayTagsManager& TagsManager = UGameplayTagsManager::Get();

        for (int32 ContainerIdx = 0; ContainerIdx < TagContainers.Num(); ++ContainerIdx)
        {
            FGameplayTagContainer* Container = TagContainers[ContainerIdx].TagContainer;
            if (Container)
            {
                FGameplayTag GameplayTag = Node->GetCompleteTag();
                if (GameplayTag.IsValid())
                {
                    if (Container->HasTagExact(GameplayTag))
                    {
                        return true;
                    }
                }
            }
        }
    }

    return false;
}

void SCustomTagWidget::OnAllowChildrenTagCheckStatusChanged(ECheckBoxState NewCheckState, TSharedPtr<FGameplayTagNode> NodeChanged)
{
    IGameplayTagsEditorModule& TagsEditor = IGameplayTagsEditorModule::Get();

    //if (TagsEditor.UpdateTagInINI(NodeChanged->GetCompleteTagString(), NodeChanged->DevComment, NodeChanged->bIsRestrictedTag, NewCheckState == ECheckBoxState::Checked))
    //{
    //    if (NewCheckState == ECheckBoxState::Checked)
    //    {
    //        NodeChanged->bAllowNonRestrictedChildren = true;
    //    }
    //    else if (NewCheckState == ECheckBoxState::Unchecked)
    //    {
    //        NodeChanged->bAllowNonRestrictedChildren = false;
    //    }
    //}
}

ECheckBoxState SCustomTagWidget::IsAllowChildrenTagChecked(TSharedPtr<FGameplayTagNode> Node) const
{
    if (Node->GetAllowNonRestrictedChildren())
    {
        return ECheckBoxState::Checked;
    }

    return ECheckBoxState::Unchecked;
}

EVisibility SCustomTagWidget::DetermineAllowChildrenVisible(TSharedPtr<FGameplayTagNode> Node) const
{
    // We do not allow you to modify nodes that have a conflict or inherit from a node with a conflict
    //if (Node->bNodeHasConflict || Node->bAncestorHasConflict)
    //{
    //    return EVisibility::Hidden;
    //}

    if (bRestrictedTags)
    {
        return EVisibility::Visible;
    }

    return EVisibility::Collapsed;
}

FReply SCustomTagWidget::OnClearAllClicked()
{
    FScopedTransaction Transaction(LOCTEXT("GameplayTagWidget_RemoveAllTags", "Remove All Gameplay Tags"));

    for (int32 ContainerIdx = 0; ContainerIdx < TagContainers.Num(); ++ContainerIdx)
    {
        UObject* OwnerObj = TagContainers[ContainerIdx].TagContainerOwner.Get();
        FGameplayTagContainer* Container = TagContainers[ContainerIdx].TagContainer;

        if (Container)
        {
            FGameplayTagContainer EmptyContainer;
            SetContainer(Container, &EmptyContainer, OwnerObj);
        }
    }
    return FReply::Handled();
}

FSlateColor SCustomTagWidget::GetTagTextColour(TSharedPtr<FGameplayTagNode> Node) const
{
    static const FLinearColor DefaultTextColour = FLinearColor::White;
    static const FLinearColor DescendantConflictTextColour = FLinearColor(1.f, 0.65f, 0.f); // orange
    static const FLinearColor NodeConflictTextColour = FLinearColor::Red;
    static const FLinearColor AncestorConflictTextColour = FLinearColor(1.f, 1.f, 1.f, 0.5f);

    //if (Node->bNodeHasConflict)
    //{
    //    return NodeConflictTextColour;
    //}
    //
    //if (Node->bDescendantHasConflict)
    //{
    //    return DescendantConflictTextColour;
    //}
    //
    //if (Node->bAncestorHasConflict)
    //{
    //    return AncestorConflictTextColour;
    //}

    return DefaultTextColour;
}

FReply SCustomTagWidget::OnExpandAllClicked()
{
    SetTagTreeItemExpansion(true);
    return FReply::Handled();
}

FReply SCustomTagWidget::OnCollapseAllClicked()
{
    SetTagTreeItemExpansion(false);
    return FReply::Handled();
}

FReply SCustomTagWidget::OnAddSubtagClicked(TSharedPtr<FGameplayTagNode> InTagNode)
{
    //if (!bReadOnly && InTagNode.IsValid())
    //{
    //    UGameplayTagsManager& Manager = UGameplayTagsManager::Get();
    //
    //    FString TagName = InTagNode->GetCompleteTagString();
    //    FString TagComment;
    //    FName TagSource;
    //    bool bTagIsExplicit;
    //    bool bTagIsRestricted;
    //    bool bTagAllowsNonRestrictedChildren;
    //
    //    Manager.GetTagEditorData(InTagNode->GetCompleteTagName(), TagComment, TagSource, bTagIsExplicit, bTagIsRestricted, bTagAllowsNonRestrictedChildren);
    //
    //    if (!bRestrictedTags && AddNewTagWidget.IsValid())
    //    {
    //        bAddTagSectionExpanded = true;
    //        AddNewTagWidget->AddSubtagFromParent(TagName, TagSource);
    //    }
    //    else if (bRestrictedTags && AddNewRestrictedTagWidget.IsValid())
    //    {
    //        bAddTagSectionExpanded = true;
    //        AddNewRestrictedTagWidget->AddSubtagFromParent(TagName, TagSource, bTagAllowsNonRestrictedChildren);
    //    }
    //}
    return FReply::Handled();
}

TSharedRef<SWidget> SCustomTagWidget::MakeTagActionsMenu(TSharedPtr<FGameplayTagNode> InTagNode)
{
    bool bShowManagement = (GameplayTagUIMode == EGameplayTagUIMode::ManagementMode && !bReadOnly);
    UGameplayTagsManager& Manager = UGameplayTagsManager::Get();

    if (!Manager.ShouldImportTagsFromINI())
    {
        bShowManagement = false;
    }

    // You can't modify restricted tags in the normal tag menus
    if (!bRestrictedTags && InTagNode->IsRestrictedGameplayTag())
    {
        bShowManagement = false;
    }

    // we can only rename or delete tags if they came from an ini file
    //if (!InTagNode->SourceName.ToString().EndsWith(TEXT(".ini")))
    //{
    //    bShowManagement = false;
    //}

    FMenuBuilder MenuBuilder(true, nullptr);

    // Rename
    //if (bShowManagement)
    //{
    //    FExecuteAction RenameAction = FExecuteAction::CreateSP(this, &SCustomTagWidget::OnRenameTag, InTagNode);
    //
    //    MenuBuilder.AddMenuEntry(LOCTEXT("GameplayTagWidget_RenameTag", "Rename"), LOCTEXT("GameplayTagWidget_RenameTagTooltip", "Rename this tag"), FSlateIcon(), FUIAction(RenameAction));
    //}
    //
    //// Delete
    //if (bShowManagement)
    //{
    //    FExecuteAction DeleteAction = FExecuteAction::CreateSP(this, &SCustomTagWidget::OnDeleteTag, InTagNode);
    //
    //    MenuBuilder.AddMenuEntry(LOCTEXT("GameplayTagWidget_DeleteTag", "Delete"), LOCTEXT("GameplayTagWidget_DeleteTagTooltip", "Delete this tag"), FSlateIcon(), FUIAction(DeleteAction));
    //}
    //
    //if (IsExactTagInCollection(InTagNode))
    //{
    //    FExecuteAction RemoveAction = FExecuteAction::CreateSP(this, &SCustomTagWidget::OnRemoveTag, InTagNode);
    //    MenuBuilder.AddMenuEntry(LOCTEXT("GameplayTagWidget_RemoveTag", "Remove Exact Tag"), LOCTEXT("GameplayTagWidget_RemoveTagTooltip", "Remove this exact tag, Parent and Child Tags will not be effected."), FSlateIcon(), FUIAction(RemoveAction));
    //}
    //else
    //{
    //    FExecuteAction AddAction = FExecuteAction::CreateSP(this, &SCustomTagWidget::OnAddTag, InTagNode);
    //    MenuBuilder.AddMenuEntry(LOCTEXT("GameplayTagWidget_AddTag", "Add Exact Tag"), LOCTEXT("GameplayTagWidget_AddTagTooltip", "Add this exact tag, Parent and Child Child Tags will not be effected."), FSlateIcon(), FUIAction(AddAction));
    //}

    // Search for References
    if (FEditorDelegates::OnOpenReferenceViewer.IsBound())
    {
        FExecuteAction SearchForReferencesAction = FExecuteAction::CreateSP(this, &SCustomTagWidget::OnSearchForReferences, InTagNode);
        MenuBuilder.AddMenuEntry(LOCTEXT("GameplayTagWidget_SearchForReferences", "Search For References"), LOCTEXT("GameplayTagWidget_SearchForReferencesTooltip", "Find references for this tag"), FSlateIcon(), FUIAction(SearchForReferencesAction));
    }

    return MenuBuilder.MakeWidget();
}

void SCustomTagWidget::OnRenameTag(TSharedPtr<FGameplayTagNode> InTagNode)
{
    if (InTagNode.IsValid())
    {
        OpenRenameGameplayTagDialog(InTagNode);
    }
}

void SCustomTagWidget::OnDeleteTag(TSharedPtr<FGameplayTagNode> InTagNode)
{
    if (InTagNode.IsValid())
    {
        IGameplayTagsEditorModule& TagsEditor = IGameplayTagsEditorModule::Get();

        const bool bDeleted = TagsEditor.DeleteTagFromINI(InTagNode);

        if (bDeleted)
        {
            OnTagChanged.ExecuteIfBound();
        }
    }
}

void SCustomTagWidget::OnAddTag(TSharedPtr<FGameplayTagNode> InTagNode)
{
    if (InTagNode.IsValid())
    {
        for (int32 ContainerIdx = 0; ContainerIdx < TagContainers.Num(); ++ContainerIdx)
        {
            FGameplayTagContainer* Container = TagContainers[ContainerIdx].TagContainer;
            Container->AddTag(InTagNode->GetCompleteTag());
        }

        OnTagChanged.ExecuteIfBound();
    }
}

void SCustomTagWidget::OnRemoveTag(TSharedPtr<FGameplayTagNode> InTagNode)
{
    if (InTagNode.IsValid())
    {
        for (int32 ContainerIdx = 0; ContainerIdx < TagContainers.Num(); ++ContainerIdx)
        {
            FGameplayTagContainer* Container = TagContainers[ContainerIdx].TagContainer;
            Container->RemoveTag(InTagNode->GetCompleteTag());
        }

        OnTagChanged.ExecuteIfBound();
    }
}

void SCustomTagWidget::OnSearchForReferences(TSharedPtr<FGameplayTagNode> InTagNode)
{
    if (InTagNode.IsValid())
    {
        TArray<FAssetIdentifier> AssetIdentifiers;
        AssetIdentifiers.Add(FAssetIdentifier(FGameplayTag::StaticStruct(), InTagNode->GetCompleteTagName()));
        FEditorDelegates::OnOpenReferenceViewer.Broadcast(AssetIdentifiers, FReferenceViewerParams());
    }
}

void SCustomTagWidget::SetTagTreeItemExpansion(bool bExpand)
{
    TArray< TSharedPtr<FGameplayTagNode> > TagArray;
    UGameplayTagsManager::Get().GetFilteredGameplayRootTags(TEXT(""), TagArray);
    for (int32 TagIdx = 0; TagIdx < TagArray.Num(); ++TagIdx)
    {
        SetTagNodeItemExpansion(TagArray[TagIdx], bExpand);
    }

}

void SCustomTagWidget::SetTagNodeItemExpansion(TSharedPtr<FGameplayTagNode> Node, bool bExpand)
{
    if (Node.IsValid() && TagTreeWidget.IsValid())
    {
        TagTreeWidget->SetItemExpansion(Node, bExpand);

        const TArray< TSharedPtr<FGameplayTagNode> >& ChildTags = Node->GetChildTagNodes();
        for (int32 ChildIdx = 0; ChildIdx < ChildTags.Num(); ++ChildIdx)
        {
            SetTagNodeItemExpansion(ChildTags[ChildIdx], bExpand);
        }
    }
}

void SCustomTagWidget::VerifyAssetTagValidity()
{
    FGameplayTagContainer LibraryTags;

    // Create a set that is the library of all valid tags
    TArray< TSharedPtr<FGameplayTagNode> > NodeStack;

    UGameplayTagsManager& TagsManager = UGameplayTagsManager::Get();

    TagsManager.GetFilteredGameplayRootTags(TEXT(""), NodeStack);

    while (NodeStack.Num() > 0)
    {
        TSharedPtr<FGameplayTagNode> CurNode = NodeStack.Pop();
        if (CurNode.IsValid())
        {
            LibraryTags.AddTag(CurNode->GetCompleteTag());
            NodeStack.Append(CurNode->GetChildTagNodes());
        }
    }

    // Find and remove any tags on the asset that are no longer in the library
    for (int32 ContainerIdx = 0; ContainerIdx < TagContainers.Num(); ++ContainerIdx)
    {
        UObject* OwnerObj = TagContainers[ContainerIdx].TagContainerOwner.Get();
        FGameplayTagContainer* Container = TagContainers[ContainerIdx].TagContainer;

        if (Container)
        {
            FGameplayTagContainer EditableContainer = *Container;

            // Use a set instead of a container so we can find and remove None tags
            TSet<FGameplayTag> InvalidTags;

            for (auto It = Container->CreateConstIterator(); It; ++It)
            {
                FGameplayTag TagToCheck = *It;

                // Check redirectors, these will get fixed on load time
                UGameplayTagsManager::Get().RedirectSingleGameplayTag(TagToCheck, nullptr);

                if (!LibraryTags.HasTagExact(TagToCheck))
                {
                    InvalidTags.Add(*It);
                }
            }
            if (InvalidTags.Num() > 0)
            {
                FString InvalidTagNames;

                for (auto InvalidIter = InvalidTags.CreateConstIterator(); InvalidIter; ++InvalidIter)
                {
                    EditableContainer.RemoveTag(*InvalidIter);
                    InvalidTagNames += InvalidIter->ToString() + TEXT("\n");
                }
                SetContainer(Container, &EditableContainer, OwnerObj);

                FFormatNamedArguments Arguments;
                Arguments.Add(TEXT("Objects"), FText::FromString(InvalidTagNames));
                FText DialogText = FText::Format(LOCTEXT("GameplayTagWidget_InvalidTags", "Invalid Tags that have been removed: \n\n{Objects}"), Arguments);
                FText OutPutText = LOCTEXT("GameplayTagWidget_Warning", "Warning");
                FMessageDialog::Open(EAppMsgType::Ok, DialogText, &OutPutText);
            }
        }
    }
}

void SCustomTagWidget::LoadSettings()
{
    TArray< TSharedPtr<FGameplayTagNode> > TagArray;
    UGameplayTagsManager::Get().GetFilteredGameplayRootTags(TEXT(""), TagArray);
    for (int32 TagIdx = 0; TagIdx < TagArray.Num(); ++TagIdx)
    {
        LoadTagNodeItemExpansion(TagArray[TagIdx]);
    }
}

void SCustomTagWidget::SetDefaultTagNodeItemExpansion(TSharedPtr<FGameplayTagNode> Node)
{
    if (Node.IsValid() && TagTreeWidget.IsValid())
    {
        bool bExpanded = false;

        if (IsTagChecked(Node) == ECheckBoxState::Checked)
        {
            bExpanded = true;
        }
        TagTreeWidget->SetItemExpansion(Node, bExpanded);

        const TArray< TSharedPtr<FGameplayTagNode> >& ChildTags = Node->GetChildTagNodes();
        for (int32 ChildIdx = 0; ChildIdx < ChildTags.Num(); ++ChildIdx)
        {
            SetDefaultTagNodeItemExpansion(ChildTags[ChildIdx]);
        }
    }
}

void SCustomTagWidget::LoadTagNodeItemExpansion(TSharedPtr<FGameplayTagNode> Node)
{
    if (Node.IsValid() && TagTreeWidget.IsValid())
    {
        bool bExpanded = false;

        if (GConfig->GetBool(*SettingsIniSection, *(TagContainerName + Node->GetCompleteTagString() + TEXT(".Expanded")), bExpanded, GEditorPerProjectIni))
        {
            TagTreeWidget->SetItemExpansion(Node, bExpanded);
        }
        else if (IsTagChecked(Node) == ECheckBoxState::Checked) // If we have no save data but its ticked then we probably lost our settings so we shall expand it
        {
            TagTreeWidget->SetItemExpansion(Node, true);
        }

        const TArray< TSharedPtr<FGameplayTagNode> >& ChildTags = Node->GetChildTagNodes();
        for (int32 ChildIdx = 0; ChildIdx < ChildTags.Num(); ++ChildIdx)
        {
            LoadTagNodeItemExpansion(ChildTags[ChildIdx]);
        }
    }
}

void SCustomTagWidget::OnExpansionChanged(TSharedPtr<FGameplayTagNode> InItem, bool bIsExpanded)
{
    // Save the new expansion setting to ini file
    GConfig->SetBool(*SettingsIniSection, *(TagContainerName + InItem->GetCompleteTagString() + TEXT(".Expanded")), bIsExpanded, GEditorPerProjectIni);
}

void SCustomTagWidget::SetContainer(FGameplayTagContainer* OriginalContainer, FGameplayTagContainer* EditedContainer, UObject* OwnerObj)
{
    if (PropertyHandle.IsValid() && bMultiSelect)
    {
        // Case for a tag container 
        PropertyHandle->SetValueFromFormattedString(EditedContainer->ToString());
    }
    else if (PropertyHandle.IsValid() && !bMultiSelect)
    {
        // Case for a single Tag		
        FString FormattedString = TEXT("(TagName=\"");
        FormattedString += EditedContainer->First().GetTagName().ToString();
        FormattedString += TEXT("\")");
        PropertyHandle->SetValueFromFormattedString(FormattedString);
    }
    else
    {
        // Not sure if we should get here, means the property handle hasnt been setup which could be right or wrong.
        if (OwnerObj)
        {
            OwnerObj->PreEditChange(PropertyHandle.IsValid() ? PropertyHandle->GetProperty() : nullptr);
        }

        *OriginalContainer = *EditedContainer;

        if (OwnerObj)
        {
            OwnerObj->PostEditChange();
        }
    }

    //if (!PropertyHandle.IsValid())//always notify.
    {
        OnTagChanged.ExecuteIfBound();
    }
}

void SCustomTagWidget::OnGameplayTagAdded(const FString& TagName, const FString& TagComment, const FName& TagSource)
{
    UGameplayTagsManager& Manager = UGameplayTagsManager::Get();

    RefreshTags();
    TagTreeWidget->RequestTreeRefresh();

    if (GameplayTagUIMode == EGameplayTagUIMode::SelectionMode)
    {
        TSharedPtr<FGameplayTagNode> TagNode = Manager.FindTagNode(FName(*TagName));
        if (TagNode.IsValid())
        {
            OnTagChecked(TagNode);
        }

        // Filter on the new tag
        SearchTagBox->SetText(FText::FromString(TagName));

        // Close the Add New Tag UI
        bAddTagSectionExpanded = false;
    }
}

void SCustomTagWidget::RefreshTags()
{
    UGameplayTagsManager& Manager = UGameplayTagsManager::Get();
    Manager.GetFilteredGameplayRootTags(RootFilterString, TagItems);

    if (bRestrictedTags)
    {
        // We only want to show the restricted gameplay tags
        for (int32 Idx = TagItems.Num() - 1; Idx >= 0; --Idx)
        {
            if (!TagItems[Idx]->IsRestrictedGameplayTag())
            {
                TagItems.RemoveAtSwap(Idx);
            }
        }
    }

    TagTreeWidget->SetTreeItemsSource(&TagItems);
}

EVisibility SCustomTagWidget::DetermineExpandableUIVisibility() const
{
    UGameplayTagsManager& Manager = UGameplayTagsManager::Get();

    if (!Manager.ShouldImportTagsFromINI())
    {
        // If we can't support adding tags from INI files, we should never see this widget
        return EVisibility::Collapsed;
    }

    return EVisibility::Visible;
}

EVisibility SCustomTagWidget::DetermineAddNewSourceExpandableUIVisibility() const
{
    if (bRestrictedTags)
    {
        return EVisibility::Collapsed;
    }

    return DetermineExpandableUIVisibility();
}

EVisibility SCustomTagWidget::DetermineAddNewTagWidgetVisibility() const
{
    UGameplayTagsManager& Manager = UGameplayTagsManager::Get();

    if (!Manager.ShouldImportTagsFromINI() || !bAddTagSectionExpanded || bRestrictedTags)
    {
        // If we can't support adding tags from INI files, we should never see this widget
        return EVisibility::Collapsed;
    }

    return EVisibility::Visible;
}

EVisibility SCustomTagWidget::DetermineAddNewRestrictedTagWidgetVisibility() const
{
    UGameplayTagsManager& Manager = UGameplayTagsManager::Get();

    if (!Manager.ShouldImportTagsFromINI() || !bAddTagSectionExpanded || !bRestrictedTags)
    {
        // If we can't support adding tags from INI files, we should never see this widget
        return EVisibility::Collapsed;
    }

    return EVisibility::Visible;
}

EVisibility SCustomTagWidget::DetermineAddNewSourceWidgetVisibility() const
{
    UGameplayTagsManager& Manager = UGameplayTagsManager::Get();

    if (!Manager.ShouldImportTagsFromINI() || !bAddSourceSectionExpanded || bRestrictedTags)
    {
        // If we can't support adding tags from INI files, we should never see this widget
        return EVisibility::Collapsed;
    }

    return EVisibility::Visible;
}

EVisibility SCustomTagWidget::DetermineAddNewSubTagWidgetVisibility(TSharedPtr<FGameplayTagNode> Node) const
{
    EVisibility LocalVisibility = DetermineExpandableUIVisibility();
    if (LocalVisibility != EVisibility::Visible)
    {
        return LocalVisibility;
    }

    // We do not allow you to add child tags under a conflict
    //if (Node->bNodeHasConflict || Node->bAncestorHasConflict)
    //{
    //    return EVisibility::Hidden;
    //}

    // show if we're dealing with restricted tags exclusively or restricted tags that allow non-restricted children
    if (Node->GetAllowNonRestrictedChildren() || bRestrictedTags)
    {
        return EVisibility::Visible;
    }

    return EVisibility::Hidden;
}

EVisibility SCustomTagWidget::DetermineClearSelectionVisibility() const
{
    return CanSelectTags() ? EVisibility::Visible : EVisibility::Collapsed;
}

bool SCustomTagWidget::CanSelectTags() const
{
    return !bReadOnly && GameplayTagUIMode == EGameplayTagUIMode::SelectionMode;
}

bool SCustomTagWidget::IsAddingNewTag() const
{
    return false;
    //return AddNewTagWidget.IsValid() && AddNewTagWidget->IsAddingNewTag();
}

ECheckBoxState SCustomTagWidget::GetAddTagSectionExpansionState() const
{
    return bAddTagSectionExpanded ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
}

void SCustomTagWidget::OnAddTagSectionExpansionStateChanged(ECheckBoxState NewState)
{
    bAddTagSectionExpanded = NewState == ECheckBoxState::Checked;
}

ECheckBoxState SCustomTagWidget::GetAddSourceSectionExpansionState() const
{
    return bAddSourceSectionExpanded ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
}

void SCustomTagWidget::OnAddSourceSectionExpansionStateChanged(ECheckBoxState NewState)
{
    bAddSourceSectionExpanded = NewState == ECheckBoxState::Checked;
}

void SCustomTagWidget::RefreshOnNextTick()
{
    bDelayRefresh = true;
}

void SCustomTagWidget::OnGameplayTagRenamed(FString OldTagName, FString NewTagName)
{
    OnTagChanged.ExecuteIfBound();
}

void SCustomTagWidget::OpenRenameGameplayTagDialog(TSharedPtr<FGameplayTagNode> GameplayTagNode) const
{
    //TSharedRef<SWindow> RenameTagWindow =
    //    SNew(SWindow)
    //    .Title(LOCTEXT("RenameTagWindowTitle", "Rename Gameplay Tag"))
    //    .ClientSize(FVector2D(320.0f, 110.0f))
    //    .SizingRule(ESizingRule::FixedSize)
    //    .SupportsMaximize(false)
    //    .SupportsMinimize(false);
    //
    //TSharedRef<SRenameGameplayTagDialog> RenameTagDialog =
    //    SNew(SRenameGameplayTagDialog)
    //    .GameplayTagNode(GameplayTagNode)
    //    .OnGameplayTagRenamed(const_cast<SCustomTagWidget*>(this), &SCustomTagWidget::OnGameplayTagRenamed);
    //
    //RenameTagWindow->SetContent(RenameTagDialog);
    //
    //TSharedPtr<SWindow> CurrentWindow = FSlateApplication::Get().FindWidgetWindow(AsShared());
    //
    //FSlateApplication::Get().AddModalWindow(RenameTagWindow, CurrentWindow);
}

TSharedPtr<SWidget> SCustomTagWidget::GetWidgetToFocusOnOpen()
{
    return SearchTagBox;
}

#undef LOCTEXT_NAMESPACE

