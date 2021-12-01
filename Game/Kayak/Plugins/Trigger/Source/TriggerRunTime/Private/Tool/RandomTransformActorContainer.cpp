// Copyright 1998-2099 Epic Games, Inc. All Rights Reserved.


#include "Tool/RandomTransformActorContainer.h"
#include "Tool/Editor/AI/AIPreviewCharacter.h"


ARandomTransformActorContainer::ARandomTransformActorContainer(const FObjectInitializer& ObjectInitializer)
    :Super(ObjectInitializer)
{

}

void ARandomTransformActorContainer::BeginPlay()
{
    Super::BeginPlay();

    if (HasAuthority())
    {
        FTransform Transform;
        if (GetSpecificTransfrom(Transform))
        {
            SetActorTransform(Transform);
        }
    }
}

bool ARandomTransformActorContainer::GetSpecificTransfrom(FTransform& Transform)
{
    if (TransformPools.Num() == 0)
    {
        return false;
    }

    int32 Index = FMath::RandRange(0, TransformPools.Num() - 1);

    if (!TransformPools.IsValidIndex(Index))
    {
        return false;
    }

    Transform = TransformPools[Index];

    return true;
}

void ARandomTransformActorContainer::PostLoad()
{
    Super::PostLoad();
#if WITH_EDITORONLY_DATA
    RegisterCharacterTransformEditDelegate();
#endif
}

void ARandomTransformActorContainer::PostDuplicate(bool bDuplicateForPIE)
{
    Super::PostDuplicate(bDuplicateForPIE);
#if WITH_EDITORONLY_DATA
    RegisterCharacterTransformEditDelegate();
#endif
}

#if WITH_EDITOR

void ARandomTransformActorContainer::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);

    if (FProperty* PropertyThatChanged = PropertyChangedEvent.Property)
    {
        const FName PropertyName = PropertyThatChanged->GetFName();

        if (PropertyName == GET_MEMBER_NAME_CHECKED(ARandomTransformActorContainer, PickerPools))
        {
            TransformPools.Empty();

            for (AAIPreviewCharacter* PickerPool : PickerPools)
            {
                if (PickerPool == nullptr)
                    continue;

                TransformPools.Add(PickerPool->GetActorTransform());

                if (PickerPool->OnTranslationEdit.IsBoundToObject(this))
                {
                    continue;
                }
                PickerPool->OnTranslationEdit.AddUObject(this, &ARandomTransformActorContainer::OnPreviewTranslationEdit);
                PickerPool->OnRotationEdit.AddUObject(this, &ARandomTransformActorContainer::OnPreviewRotationEdit);
                PickerPool->OnScaleEdit.AddUObject(this, &ARandomTransformActorContainer::OnPreviewScaleEdit);
            }
        }
    }
}

void ARandomTransformActorContainer::OnPreviewTranslationEdit(const AActor* InPreviewCharacter, const FVector& DeltaTranslation, bool bAltDown, bool bShiftDown, bool bCtrlDown)
{
    UpdateTransformByEditedCharacter(InPreviewCharacter);
}

void ARandomTransformActorContainer::OnPreviewRotationEdit(const AActor* InPreviewCharacter, const FRotator& DeltaRotation, bool bAltDown, bool bShiftDown, bool bCtrlDown)
{
    UpdateTransformByEditedCharacter(InPreviewCharacter);
}

void ARandomTransformActorContainer::OnPreviewScaleEdit(const AActor* InPreviewCharacter, const FVector& DeltaScale, const FVector* PivotLocation, bool bAltDown, bool bShiftDown, bool bCtrlDown)
{
    UpdateTransformByEditedCharacter(InPreviewCharacter);
}

void ARandomTransformActorContainer::UpdateTransformByEditedCharacter(const AActor* InPreviewCharacter)
{
    if (InPreviewCharacter == nullptr)
    {
        return;
    }
    //check all picked characters, because there may be one more InPreviewCharacter in PickerPools. 
    for (int32 i = 0; i < PickerPools.Num(); ++i)
    {
        if (InPreviewCharacter != PickerPools[i] || !TransformPools.IsValidIndex(i))
        {
            continue;
        }

        TransformPools[i] = InPreviewCharacter->GetActorTransform();
    }
}

void ARandomTransformActorContainer::RegisterCharacterTransformEditDelegate()
{
    for (AAIPreviewCharacter* PickerPool : PickerPools)
    {
        if (PickerPool == nullptr || PickerPool->OnTranslationEdit.IsBoundToObject(this))
        {
            continue;
        }

        PickerPool->OnTranslationEdit.AddUObject(this, &ARandomTransformActorContainer::OnPreviewTranslationEdit);
        PickerPool->OnRotationEdit.AddUObject(this, &ARandomTransformActorContainer::OnPreviewRotationEdit);
        PickerPool->OnScaleEdit.AddUObject(this, &ARandomTransformActorContainer::OnPreviewScaleEdit);
    }
}

#endif