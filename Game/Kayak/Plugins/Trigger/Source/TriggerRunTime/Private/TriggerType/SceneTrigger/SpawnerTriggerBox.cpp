// CopyrightNotice=CopyrightNotice=Copyright 1998-2099 Epic Games, Inc. All Rights Reserved.


#include "TriggerType/SceneTrigger/SpawnerTriggerBox.h"
#include "Components/BoxComponent.h"
#include "Components/BillboardComponent.h"
#include "TriggerTaskComponent/TriggerTaskComponent.h"


ASpawnerTriggerBox::ASpawnerTriggerBox(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer.SetDefaultSubobjectClass<UBoxComponent>(TEXT("CollisionComp")))
{
    UBoxComponent* BoxCollisionComponent = Cast<UBoxComponent>(GetCollisionComponent());
    if (BoxCollisionComponent)
    {
        BoxCollisionComponent->ShapeColor = FColor(100, 255, 100, 255);
        BoxCollisionComponent->InitBoxExtent(FVector(40.0f, 40.0f, 40.0f));
        BoxCollisionComponent->SetCollisionProfileName(TEXT("Trigger"));
        BoxCollisionComponent->SetupAttachment(TriggerTaskComponent);
        BoxCollisionComponent->OnComponentHit.AddDynamic(this, &ASpawnerTriggerBox::ComponentHit);
        BoxCollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &ASpawnerTriggerBox::ComponentBeginOverlap);
        BoxCollisionComponent->OnComponentEndOverlap.AddDynamic(this, &ASpawnerTriggerBox::ComponentEndOverlap);
        BoxCollisionComponent->SetHiddenInGame(true, true);
    }

#if WITH_EDITORONLY_DATA
    if (UBillboardComponent* TriggerSpriteComponent = GetSpriteComponent())
    {
        TriggerSpriteComponent->SetupAttachment(BoxCollisionComponent);
        TriggerSpriteComponent->SetHiddenInGame(true);
    }
#endif
}