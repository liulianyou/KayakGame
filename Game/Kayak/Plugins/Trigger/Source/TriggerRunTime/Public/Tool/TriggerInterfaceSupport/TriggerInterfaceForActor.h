#pragma once

/*
* Author:	Liulianyou
* Time:		2021/9/15
* Purpose:	This is used for Actor to implement the trigger interface
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Engine/EngineTypes.h"

#include "TriggerInterfaceSupportBase.h"

#include "TriggerInterfaceForActor.generated.h"

class UTriggerInterfaceSupportBase;
class UTriggerTaskComponentBase;
class UTriggerTaskStartInformationBase;

UCLASS(Blueprintable, BlueprintType,Category = "TriggerInterfaceSupport")
class TRIGGERRUNTIME_API UTriggerInterfaceForActor : public UTriggerInterfaceSupportBase
{
	GENERATED_UCLASS_BODY()

public:

	//Override UTriggerInterfaceSupportBase
	virtual void Initialize( UObject* ObjectOwner ) override;
	virtual void GetTriggerTaskComponents(TArray<UTriggerTaskComponentBase*>& TaskComponents) const  override;
	virtual bool RemoveTriggerTaskComponent(const FGuid& ComponentID, bool IncludeChildrenComponent = false) override;
	virtual UTriggerTaskComponentBase* AddTriggerTaskComponent(UTriggerTaskComponentBase* NewComponent) override;
	virtual bool GetBoxBounds(FVector& Origin, FVector& HalfBoxExtent) const override;
	virtual bool GetUniqueRuntimeID(int& OutId) const override;
	virtual bool CanbeToggled() const;
	//Override UTriggerInterfaceSupportBase

public:
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	AActor* GetActorOwner() const;


public:

	UFUNCTION()
	virtual void ActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
	UFUNCTION()
	virtual void ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
	UFUNCTION()
	virtual void ActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor);

protected:
	//Internal to remove trigger task component
	bool RemoveTriggerTaskComponentInternal(USceneComponent* ParentComponent, bool IncludeChildrenComponent = false);

};