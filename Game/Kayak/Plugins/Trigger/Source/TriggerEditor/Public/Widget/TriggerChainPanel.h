// Copyright 1998-2099 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blutility/Classes/EditorUtilityWidget.h"
#include "TriggerChainPanel.generated.h"

class ANewTriggerBase;
class UTreeView;
class UTriggerTreeViewObject;
class UTriggerDetailsView;
class UTriggerRadioButton;

/**
 * trigger chain panel, to show trigger chain relationship, run in editor.
 */
UCLASS()
class TRIGGEREDITOR_API UTriggerChainPanel : public UEditorUtilityWidget
{
    GENERATED_UCLASS_BODY()

public:
#if WITH_EDITOR

    //get all triggers in level, copy from UEditorLevelLibrary::GetAllLevelActors
    UFUNCTION(BlueprintCallable, Category = Editor)
    void GetTriggersInLevel(TArray<ANewTriggerBase*>& Result);
    
    UFUNCTION(BlueprintCallable, Category = Editor)
    void OnTriggerTreeExpansionChanged();

#endif

protected:
    virtual void NativeConstruct() override;

#if WITH_EDITOR
    void OnGetItemChildren(UObject* Item, TArray<UObject*>& Children);

    void OnEntryWidgetGenerated(UUserWidget& EntryWidget);

    void OnTreeViewScrolled(float, float);

    void OnTreeViewExpanded(UObject* Item, bool bIsExpanded);

    UFUNCTION()
    void OnSelectedTrigger(UTriggerTreeViewObject* TriggerData);

    void InitTreeView();

    void InitDetailsView();

    void InitComponentsRadioButton();

    void UpdateSelectedEntryWidgetState();

    UFUNCTION()
    void OnSelectComponents(int32 Index);

#endif
protected:
#if WITH_EDITOR
    UPROPERTY(Transient)
    UTreeView* TreeView;
    
    UPROPERTY(Transient)
    UTriggerTreeViewObject* CurSelectedTrigger;
    
    UPROPERTY(Transient)
    TArray<UTriggerTreeViewObject*> TreeViewObjectArr;

    UPROPERTY(Transient)
    UTriggerDetailsView* DetailsView;
    
    UPROPERTY(Transient)
    UTriggerRadioButton* RadioButton;
#endif
};
