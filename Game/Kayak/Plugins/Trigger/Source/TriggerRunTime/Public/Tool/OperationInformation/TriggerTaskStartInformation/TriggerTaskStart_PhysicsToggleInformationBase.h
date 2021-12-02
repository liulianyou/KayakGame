#pragma once

/*
* Author:		Liulianyou
* Time:			2020/11/6
* Purpose:		The base class to generate toggle information once other actor collide with the target trigger
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerTaskStartInformationBase.h"

#include "TriggerTaskStart_PhysicsToggleInformationBase.generated.h"

/*
* The toggle information which is generated by the physics collide
*/
UCLASS(BlueprintType, Blueprintable, abstract, Config = Game, Category = "TriggerRuntime")
class TRIGGERRUNTIME_API UTriggerTaskStart_PhysicsToggleInformationBase : public UTriggerTaskStartInformationBase
{
public:
	GENERATED_UCLASS_BODY()

public:

	//Get the actor who toggle this trigger
	virtual AActor* GetToggledActor_Implementation() const ;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;
public:
	//The other actor who overlap this trigger
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Category = "TriggerRunTime")
	AActor* OtherActor;

	//The component in other actor who overlap this trigger
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Category = "TriggerRunTime")
	UPrimitiveComponent* OtherComponent;

	//The actor who overlap with the OtherActor
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Category = "TriggerRunTime")
	AActor* Actor;

	//The component who overlap with the OtherComponent
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Category = "TriggerRunTime")
	UPrimitiveComponent* Component;
};


/*
* The data which hold all the information which recorde the hit events for different actors
*/
UCLASS(BlueprintType, Blueprintable, Category = "TriggerRuntime")
class TRIGGERRUNTIME_API UTriggerTaskStart_ActorHit : public UTriggerTaskStart_PhysicsToggleInformationBase
{
public:
	GENERATED_UCLASS_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Operations", meta = (AdvancedDisplay = 4, AutoCreateRefTerm = "HitResult"))
	static UTriggerTaskStart_ActorHit* ActorHit(
		UObject* Owner,
		UObject* Target,
		AActor* InOtherActor,
		FHitResult& HitResult,
		UPrimitiveComponent* InOtherComponent = nullptr,
		UTriggerStyleBase* InOperationStyle = nullptr,
		FVector InNormalImpulse = FVector::ZeroVector,
		AActor* InActor = nullptr,
		UPrimitiveComponent* InComponent = nullptr);

public:

	//The normal impulse which applay on the Actor
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRunTime")
	FVector NormalImpulse;

	//The hit result for current overlap event
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRunTime")
	FHitResult Hit;
};

/*
* The data which hold all the information which recorde the start overlap events for different actors
*/
UCLASS(BlueprintType, Blueprintable, Category = "TriggerRuntime")
class TRIGGERRUNTIME_API UTriggerTaskStart_ActorStartOverlap : public UTriggerTaskStart_PhysicsToggleInformationBase
{
public:
	GENERATED_UCLASS_BODY()

public:

	/*
	* Create new operator when the actor is move out the target actor
	*
	* @param Owner				The place where to create this operation
	* @param Target				The target object which this operation will apply to
	* @param InOtherActor			Who move out the target actor, which will be treated as causer
	* @param InOtherComponent		The component in the target actor which move out the actor
	* @param InOperationStyle		how the target apply this operation
	* @param InActor				The actor which the other actor move out
	* @param InComponent			The component in the actor which the other actor move out
	* @param InOtherBodyIndex		The body index of the other component in the other actor
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Operations", meta = (AdvancedDisplay = 4, AutoCreateRefTerm = "HitResult"))
	static UTriggerTaskStart_ActorStartOverlap* ActorStartOverlap(
		UObject* Owner, 
		UObject* Target,
		const FHitResult& HitResult,
		AActor* InOtherActor,
		UPrimitiveComponent* InOtherComponent = nullptr,
		UTriggerStyleBase* InOperationStyle = nullptr, 
		AActor* InActor = nullptr,
		UPrimitiveComponent* InComponent = nullptr,
		bool InFromSweep = true, 
		int InOtherBodyIndex = -1
		);

public:

	//Check weather this overlap is from sweep result
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRunTime")
	bool FromSweep;

	//The index of the physic collision object
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRunTime")
	int OtherBodyIndex;

	//The hit result for current overlap event
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRunTime")
	FHitResult Hit;
};

/*
* The data which hold all the information which recored the end overlap events for different actors
*/
UCLASS(BlueprintType, Blueprintable, Category = "TriggerRuntime")
class TRIGGERRUNTIME_API UTriggerTaskEnd_ActorEndOverlap : public UTriggerTaskStart_PhysicsToggleInformationBase
{
public:
	GENERATED_UCLASS_BODY()

public:

	/*
	* Create new operator when the actor is move out the target actor
	* 
	* @param Owner				The place where to create this operation
	* @param Target				The target object which this operation will apply to
	* @param InOtherActor			Who move out the target actor, which will be treated as causer
	* @param InOtherComponent		The component in the target actor which move out the actor
	* @param InOperationStyle		how the target apply this operation
	* @param InActor				The actor which the other actor move out
	* @param InComponent			The component in the actor which the other actor move out
	* @param InOtherBodyIndex		The body index of the other component in the other actor
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Operations", meta = (AdvancedDisplay = 3))
	static UTriggerTaskEnd_ActorEndOverlap* ActorEndOverlap( 
		UObject* Owner, 
		UObject* Target, 
		AActor* InOtherActor,
		UPrimitiveComponent* InOtherComponent = nullptr,
		UTriggerStyleBase* InOperationStyle = nullptr,
		int InOtherBodyIndex = -1,
		AActor* InActor = nullptr,
		UPrimitiveComponent* InComponent = nullptr);

public:

	//The index of the physic collision object
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRunTime")
	int OtherBodyIndex;
};