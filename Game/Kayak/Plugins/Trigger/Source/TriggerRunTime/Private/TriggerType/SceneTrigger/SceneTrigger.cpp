#include "SceneTrigger.h"

#include "TriggerTaskComponent.h"
#include "TriggerManager.h"
#include "TriggerBlueprintLib.h"
#include "OperationInformationManager.h"
#include "TriggerTaskStart_PhysicsToggleInformationBase.h"
#include "TriggerTask/TriggerTaskBase.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/BillboardComponent.h"
#include "Components/ShapeComponent.h"
#include "Engine/Texture2D.h"
#include "Net/UnrealNetwork.h"

ASceneTrigger::ASceneTrigger(const FObjectInitializer& ObjectInitializer):
	Super(ObjectInitializer)
{
	SetHidden(false);
	SetCanBeDamaged(false);

	// ATriggerBase is requesting UShapeComponent which is abstract, however it is responsibility
	// of a derived class to override this type with ObjectInitializer.SetDefaultSubobjectClass.
	CollisionComponent = CreateDefaultSubobject<UShapeComponent>(TEXT("CollisionComp"));
	if (CollisionComponent)
	{
		CollisionComponent->bHiddenInGame = false;
		CollisionComponent->SetupAttachment(TriggerTaskComponent);
	}

#if WITH_EDITORONLY_DATA
	SpriteComponent = CreateEditorOnlyDefaultSubobject<UBillboardComponent>(TEXT("Sprite"));
	if (SpriteComponent)
	{
		// Structure to hold one-time initialization
		struct FConstructorStatics
		{
			ConstructorHelpers::FObjectFinderOptional<UTexture2D> TriggerTextureObject;
			FName ID_Triggers;
			FText NAME_Triggers;
			FConstructorStatics()
				: TriggerTextureObject(TEXT("/Engine/EditorResources/S_Trigger"))
				, ID_Triggers(TEXT("Triggers"))
				, NAME_Triggers(NSLOCTEXT("SpriteCategory", "Triggers", "Triggers"))
			{
			}
		};
		static FConstructorStatics ConstructorStatics;

		SpriteComponent->Sprite = ConstructorStatics.TriggerTextureObject.Get();
		SpriteComponent->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
		SpriteComponent->bHiddenInGame = false;
		SpriteComponent->SpriteInfo.Category = ConstructorStatics.ID_Triggers;
		SpriteComponent->SpriteInfo.DisplayName = ConstructorStatics.NAME_Triggers;
		SpriteComponent->bIsScreenSizeScaled = true;
	}
#endif
}


void ASceneTrigger::BeginDestroy()
{
	Super::BeginDestroy();
}

void ASceneTrigger::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void ASceneTrigger::ComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (!CanbeToggled()) return;

	//TArray<UTriggerTaskComponentBase*> Components;

	//GetTriggerTaskComponents(Components);

	//for (auto Component : Components)
	//{
	//	if(Component == nullptr)
	//		continue;

	//	UTriggerTaskStart_ActorHit* HitInfo = Component->CreateNewOperation<UTriggerTaskStart_ActorHit>();

	//	FScopeOperationInfoSpace ScopeOperationInfoSpace(FOperationInfoSpace(Component, HitInfo));

	//	HitInfo->Actor = this;
	//	HitInfo->OtherActor = OtherActor;
	//	HitInfo->OtherComponent = OtherComp;
	//	HitInfo->Component = HitComponent;
	//	HitInfo->NormalImpulse = NormalImpulse;
	//	HitInfo->Hit = Hit;
	//}

	OnComponentHit(OtherActor);
}

void ASceneTrigger::ComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!CanbeToggled() || UTriggerBlueprintLib::GetOperationInfoManager() == nullptr) return;

	OnComponentBeginOverlap(OtherActor);
	
	TArray<UTriggerTaskComponentBase*> Components;

	GetTriggerTaskComponents(Components);

	for (auto Component : Components)
	{
		if (Component == nullptr)
			continue;

		UTriggerTaskStart_ActorStartOverlap* StartOverInfo = UTriggerTaskStart_ActorStartOverlap::ActorStartOverlap(this, Component, SweepResult, OtherActor, OtherComp, nullptr, this, OverlappedComponent, bFromSweep, OtherBodyIndex);

		if (StartOverInfo != nullptr)
		{
			//FScopeOperationInfoSpace ScopeOperationInfoSpace(FOperationInfoSpace(Component, StartOverInfo));

			Component->TransfereTask(Component, nullptr, StartOverInfo);
		}
	}
}

void ASceneTrigger::ComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (!CanbeToggled() || UTriggerBlueprintLib::GetOperationInfoManager() == nullptr) return;

	OnComponentEndOverlap(OtherActor);

	TArray<UTriggerTaskComponentBase*> Components;

	GetTriggerTaskComponents(Components);

	for (auto Component : Components)
	{
		if (Component == nullptr)
			continue;

		UTriggerTaskEnd_ActorEndOverlap* EndOverInfo = UTriggerTaskEnd_ActorEndOverlap::ActorEndOverlap(this, Component, OtherActor, OtherComp, nullptr, OtherBodyIndex, this, OverlappedComponent);

		//FScopeOperationInfoSpace ScopeOperationInfoSpace(FOperationInfoSpace(Component, EndOverInfo));

		if (EndOverInfo != nullptr)
		{
			Component->EndTask(EndOverInfo);
		}
	}
}

bool ASceneTrigger::CanbeToggled() const
{
	bool Result = Super::CanbeToggled();

	Result = Result && GetConstTriggerTaskComponent()->CanBeToggled();

	return Result;
}

void ASceneTrigger::OnComponentBeginOverlap_Implementation(AActor* OtherActor)
{

}

void ASceneTrigger::OnComponentHit_Implementation(AActor* OtherActor)
{


}

void ASceneTrigger::OnComponentEndOverlap_Implementation(AActor* OtherActor)
{

}
