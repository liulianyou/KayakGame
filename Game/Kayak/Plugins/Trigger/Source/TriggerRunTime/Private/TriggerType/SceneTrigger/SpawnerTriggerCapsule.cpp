// CopyrightNotice=CopyrightNotice=Copyright 1998-2099 Epic Games, Inc. All Rights Reserved.


#include "TriggerType/SceneTrigger/SpawnerTriggerCapsule.h"
#include "Components/CapsuleComponent.h"
#include "Components/BillboardComponent.h"
#include "TriggerTaskComponent/TriggerTaskComponent.h"


ASpawnerTriggerCapsule::ASpawnerTriggerCapsule(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer.SetDefaultSubobjectClass<UCapsuleComponent>(TEXT("CollisionComp")))
{
    UCapsuleComponent* CapsuleCollisionComponent = Cast<UCapsuleComponent>(GetCollisionComponent());
    if (CapsuleCollisionComponent)
    {
        CapsuleCollisionComponent->ShapeColor = FColor(100, 255, 100, 255);
        CapsuleCollisionComponent->InitCapsuleSize(+40.0f, +80.0f);
        CapsuleCollisionComponent->SetCollisionProfileName(TEXT("Trigger"));
        CapsuleCollisionComponent->SetupAttachment(TriggerTaskComponent);

        CapsuleCollisionComponent->OnComponentHit.AddDynamic(this, &ASpawnerTriggerCapsule::ComponentHit);
        CapsuleCollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &ASpawnerTriggerCapsule::ComponentBeginOverlap);
        CapsuleCollisionComponent->OnComponentEndOverlap.AddDynamic(this, &ASpawnerTriggerCapsule::ComponentEndOverlap);
        CapsuleCollisionComponent->SetHiddenInGame(true, true);
    }

    bCollideWhenPlacing = true;
    SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
#if WITH_EDITORONLY_DATA
    if (UBillboardComponent* TriggerSpriteComponent = GetSpriteComponent())
    {
        TriggerSpriteComponent->SetupAttachment(CapsuleCollisionComponent);
        TriggerSpriteComponent->SetHiddenInGame(true);
    }
#endif
}