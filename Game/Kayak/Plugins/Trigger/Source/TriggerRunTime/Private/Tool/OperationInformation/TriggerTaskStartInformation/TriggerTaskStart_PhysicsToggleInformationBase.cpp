#include "TriggerTaskStart_PhysicsToggleInformationBase.h"
#include "Net/UnrealNetwork.h"
#include "TriggerBlueprintLib.h"
#include "OperationInformationManager.h"
#include "GameFramework/Actor.h"

UTriggerTaskStart_PhysicsToggleInformationBase::UTriggerTaskStart_PhysicsToggleInformationBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	
}

AActor* UTriggerTaskStart_PhysicsToggleInformationBase::GetToggledActor_Implementation() const
{
	return OtherActor;
}

void UTriggerTaskStart_PhysicsToggleInformationBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME/*_CONDITION*/(UTriggerTaskStart_PhysicsToggleInformationBase, OtherActor			/*, COND_InitialOnly*/);
	DOREPLIFETIME/*_CONDITION*/(UTriggerTaskStart_PhysicsToggleInformationBase, OtherComponent		/*, COND_InitialOnly*/);
	DOREPLIFETIME/*_CONDITION*/(UTriggerTaskStart_PhysicsToggleInformationBase, Actor					/*, COND_InitialOnly*/);
	DOREPLIFETIME/*_CONDITION*/(UTriggerTaskStart_PhysicsToggleInformationBase, Component				/*, COND_InitialOnly*/);
}

UTriggerTaskStart_ActorHit::UTriggerTaskStart_ActorHit(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}

UTriggerTaskStart_ActorStartOverlap::UTriggerTaskStart_ActorStartOverlap(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}

UTriggerTaskEnd_ActorEndOverlap::UTriggerTaskEnd_ActorEndOverlap(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}

UTriggerTaskEnd_ActorEndOverlap* UTriggerTaskEnd_ActorEndOverlap::ActorEndOverlap(
	UObject* Owner,
	UObject* Target,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComponent/* = nullptr*/,
	UTriggerStyleBase* OperationStyle /*= nullptr*/,
	int OtherBodyIndex /*= INDEX_NONE*/,
	AActor* Actor /*= nullptr*/,
	UPrimitiveComponent* Component /*= nullptr*/)
{
	UTriggerTaskEnd_ActorEndOverlap* Result = Cast<UTriggerTaskEnd_ActorEndOverlap>(UTriggerBlueprintLib::GetOperationInfoManager()->AddNewOperationByClass(Owner, UTriggerTaskEnd_ActorEndOverlap::StaticClass()).Operation);

	if (Result == nullptr)
		return nullptr;

	Result->AddNewOperation(OtherActor, OperationStyle, Target);

	Result->OtherBodyIndex = OtherBodyIndex;
	Result->Actor = Actor;
	Result->Component = Component;
	Result->OtherComponent = OtherComponent;
	Result->OtherActor = OtherActor;
	return Result;
}

UTriggerTaskStart_ActorStartOverlap* UTriggerTaskStart_ActorStartOverlap::ActorStartOverlap(
	UObject* Owner,
	UObject* Target,
	const FHitResult& HitResult,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComponent /*= nullptr*/,
	UTriggerStyleBase* OperationStyle /*= nullptr*/,
	AActor* Actor /*= nullptr*/,
	UPrimitiveComponent* Component /*= nullptr*/,
	bool FromSweep /*= true*/,
	int OtherBodyIndex /*= INDEX_NONE*/
	)
{
	UTriggerTaskStart_ActorStartOverlap* Result = Cast<UTriggerTaskStart_ActorStartOverlap>(UTriggerBlueprintLib::GetOperationInfoManager()->AddNewOperationByClass(Owner, UTriggerTaskStart_ActorStartOverlap::StaticClass()).Operation);

	if (Result == nullptr)
		return nullptr;

	Result->AddNewOperation(OtherActor, OperationStyle, Target);

	Result->FromSweep = FromSweep;
	Result->OtherBodyIndex = OtherBodyIndex;
	Result->Actor = Actor;
	Result->Component = Component;
	Result->OtherActor = OtherActor;
	Result->OtherComponent = OtherComponent;
	Result->Hit = HitResult;

	return Result;
}

UTriggerTaskStart_ActorHit* UTriggerTaskStart_ActorHit::ActorHit(
	UObject* Owner,
	UObject* Target,
	AActor* OtherActor,
	FHitResult& HitResult,
	UPrimitiveComponent* OtherComponent /*= nullptr*/,
	UTriggerStyleBase* OperationStyle /*= nullptr*/,
	FVector NormalImpulse /*= FVector::ZeroVector*/,
	AActor* Actor /*= nullptr*/,
	UPrimitiveComponent* Component /*= nullptr*/
	)
{
	UTriggerTaskStart_ActorHit* Result = Cast<UTriggerTaskStart_ActorHit>(UTriggerBlueprintLib::GetOperationInfoManager()->AddNewOperationByClass(Owner, UTriggerTaskStart_ActorHit::StaticClass()).Operation);

	if (Result == nullptr)
		return nullptr;

	Result->AddNewOperation(OtherActor, OperationStyle, Target);

	Result->NormalImpulse = NormalImpulse;
	Result->Actor = Actor;
	Result->Component = Component;
	Result->OtherActor = OtherActor;
	Result->OtherComponent = OtherComponent;
	Result->Hit = HitResult;

	return Result;
}