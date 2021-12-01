// Copyright 1998-2099 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "GameplayTagContainer.h"
#include "TriggerTagWidget.generated.h"

class SCustomTagWidget;

/**
 * Custom tag widget for trigger, just wrap SCustomTagWidget.
 */
UCLASS()
class TRIGGEREDITOR_API UTriggerTagWidget : public UWidget
{
    GENERATED_UCLASS_BODY()

    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTriggerTagChanged, const FGameplayTagContainer&, TriggerTags);
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Style")
    FString FilterTag;

public:
#if WITH_EDITOR
    // UWidget interface
    virtual const FText GetPaletteCategory() override;
    // End UWidget interface
#endif

    virtual void ReleaseSlateResources(bool bReleaseChildren) override;

protected:
    // UWidget interface
    virtual TSharedRef<SWidget> RebuildWidget() override;
    // End of UWidget interface

    void OnTagChanged();
public:
    /** Called when the checked state has changed */
    UPROPERTY(BlueprintAssignable, Category="TriggerTagWidget|Event")
    FOnTriggerTagChanged OnTriggerTagChanged;
protected:
    /** Tag Container used for the GameplayTagWidget. */
    TSharedPtr<FGameplayTagContainer> TagContainer;
    TSharedPtr<SCustomTagWidget> TagWidget;
};
