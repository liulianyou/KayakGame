// Copyright 1998-2099 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "TriggerType/SceneTrigger/SceneTrigger.h"
#include "RandomTransformTrigger.generated.h"

class AAIPreviewCharacter;

/**
 * the trigger that random transform base on PickerPools. copy from ATriggerAIBase, but has different parent class.
 */
UCLASS()
class TRIGGERRUNTIME_API ARandomTransformTrigger : public ASceneTrigger
{
    GENERATED_UCLASS_BODY()

public:

    //Override AActor
    virtual void BeginPlay() override;
    //Override AActor

    //Try to get the transform to set to this actor when this AI begin play
    virtual bool GetSpecificTransfrom(FTransform& Transform);

    //Override UObject
    virtual void PostLoad() override;
    virtual void PostDuplicate(bool bDuplicateForPIE) override;
#if WITH_EDITOR
    virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
    //Override UObject

private:
    void OnPreviewTranslationEdit(const AActor* InPreviewCharacter, const FVector& DeltaTranslation, bool bAltDown, bool bShiftDown, bool bCtrlDown);
    void OnPreviewRotationEdit(const AActor* InPreviewCharacter, const FRotator& DeltaRotation, bool bAltDown, bool bShiftDown, bool bCtrlDown);
    void OnPreviewScaleEdit(const AActor* InPreviewCharacter, const FVector& DeltaScale, const FVector* PivotLocation, bool bAltDown, bool bShiftDown, bool bCtrlDown);

    void UpdateTransformByEditedCharacter(const AActor* InPreviewCharacter);
    void RegisterCharacterTransformEditDelegate();
#endif

public:
    
#if WITH_EDITORONLY_DATA
    //The actors which will used to generated the informations which will be used for this pawn
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category = "Editor")
    TArray<AAIPreviewCharacter*> PickerPools;
#endif

public:
    //The transform pool that this pawn will be transfered randomly
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category = "Transfrom")
    TArray<FTransform> TransformPools;
};

UCLASS()
class TRIGGERRUNTIME_API ARandomTransformTriggerBox : public ARandomTransformTrigger
{
    GENERATED_UCLASS_BODY()

public:
};