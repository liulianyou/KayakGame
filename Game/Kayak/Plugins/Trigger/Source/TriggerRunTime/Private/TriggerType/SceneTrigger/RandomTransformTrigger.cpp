// Copyright 1998-2099 Epic Games, Inc. All Rights Reserved.


#include "TriggerType/SceneTrigger/RandomTransformTrigger.h"
#include "Tool/Editor/AI/AIPreviewCharacter.h"
#include "TriggerTaskComponent/TriggerTaskComponent.h"

#include "Components/BoxComponent.h"
#include "Components/BillboardComponent.h"



ARandomTransformTrigger::ARandomTransformTrigger(const FObjectInitializer& ObjectInitializer)
    :Super(ObjectInitializer)
{

}

void ARandomTransformTrigger::BeginPlay()
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

bool ARandomTransformTrigger::GetSpecificTransfrom(FTransform& Transform)
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

void ARandomTransformTrigger::PostLoad()
{
    Super::PostLoad();
#if WITH_EDITORONLY_DATA
    RegisterCharacterTransformEditDelegate();
#endif
}

void ARandomTransformTrigger::PostDuplicate(bool bDuplicateForPIE)
{
    Super::PostDuplicate(bDuplicateForPIE);
#if WITH_EDITORONLY_DATA
    RegisterCharacterTransformEditDelegate();
#endif
}

#if WITH_EDITOR

void ARandomTransformTrigger::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);

    if (FProperty* PropertyThatChanged = PropertyChangedEvent.Property)
    {
        const FName PropertyName = PropertyThatChanged->GetFName();

        if (PropertyName == GET_MEMBER_NAME_CHECKED(ARandomTransformTrigger, PickerPools))
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
                PickerPool->OnTranslationEdit.AddUObject(this, &ARandomTransformTrigger::OnPreviewTranslationEdit);
                PickerPool->OnRotationEdit.AddUObject(this, &ARandomTransformTrigger::OnPreviewRotationEdit);
                PickerPool->OnScaleEdit.AddUObject(this, &ARandomTransformTrigger::OnPreviewScaleEdit);
            }
        }
    }
}

void ARandomTransformTrigger::OnPreviewTranslationEdit(const AActor* InPreviewCharacter, const FVector& DeltaTranslation, bool bAltDown, bool bShiftDown, bool bCtrlDown)
{
    UpdateTransformByEditedCharacter(InPreviewCharacter);
}

void ARandomTransformTrigger::OnPreviewRotationEdit(const AActor* InPreviewCharacter, const FRotator& DeltaRotation, bool bAltDown, bool bShiftDown, bool bCtrlDown)
{
    UpdateTransformByEditedCharacter(InPreviewCharacter);
}

void ARandomTransformTrigger::OnPreviewScaleEdit(const AActor* InPreviewCharacter, const FVector& DeltaScale, const FVector* PivotLocation, bool bAltDown, bool bShiftDown, bool bCtrlDown)
{
    UpdateTransformByEditedCharacter(InPreviewCharacter);
}

void ARandomTransformTrigger::UpdateTransformByEditedCharacter(const AActor* InPreviewCharacter)
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

void ARandomTransformTrigger::RegisterCharacterTransformEditDelegate()
{
    for (AAIPreviewCharacter* PickerPool : PickerPools)
    {
        if (PickerPool == nullptr || PickerPool->OnTranslationEdit.IsBoundToObject(this))
        {
            continue;
        }

        PickerPool->OnTranslationEdit.AddUObject(this, &ARandomTransformTrigger::OnPreviewTranslationEdit);
        PickerPool->OnRotationEdit.AddUObject(this, &ARandomTransformTrigger::OnPreviewRotationEdit);
        PickerPool->OnScaleEdit.AddUObject(this, &ARandomTransformTrigger::OnPreviewScaleEdit);
    }
}

#endif

ARandomTransformTriggerBox::ARandomTransformTriggerBox(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer.SetDefaultSubobjectClass<UBoxComponent>(TEXT("CollisionComp")))
{//copy from ANewTriggerBox::ANewTriggerBox
    UBoxComponent* BoxCollisionComponent = CastChecked<UBoxComponent>(GetCollisionComponent());

    BoxCollisionComponent->ShapeColor = FColor(100, 255, 100, 255);
    BoxCollisionComponent->InitBoxExtent(FVector(40.0f, 40.0f, 40.0f));
    BoxCollisionComponent->SetCollisionProfileName(TEXT("Trigger"));
    BoxCollisionComponent->SetupAttachment(TriggerTaskComponent);

    BoxCollisionComponent->OnComponentHit.AddDynamic(this, &ARandomTransformTriggerBox::ComponentHit);
    BoxCollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &ARandomTransformTriggerBox::ComponentBeginOverlap);
    BoxCollisionComponent->OnComponentEndOverlap.AddDynamic(this, &ARandomTransformTriggerBox::ComponentEndOverlap);
    BoxCollisionComponent->SetHiddenInGame(true, true);

#if WITH_EDITORONLY_DATA
    if (UBillboardComponent* TriggerSpriteComponent = GetSpriteComponent())
    {
        TriggerSpriteComponent->SetupAttachment(BoxCollisionComponent);
        TriggerSpriteComponent->SetHiddenInGame(true);
    }
#endif
}