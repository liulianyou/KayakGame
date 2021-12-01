#pragma once

/*
* Author:	Liulianyou
* Time:		2021/10/19
* Purpose:	This is the base class for the actor which will try to use the event system.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "GameFramework/Actor.h"
#include "TriggerInterface.h"

#include "TriggerActorBase.generated.h"

class UTriggerInterfaceSupportBase;
class UTriggerTaskComponentBase;
class UTriggerTaskBase;

UCLASS(Blueprintable, BlueprintType, Abstract, hidedropdown, Category = "TriggerRuntime")
class TRIGGERRUNTIME_API ATriggerActorBase : public AActor, public ITriggerInterface
{
	GENERATED_UCLASS_BODY()

public:

	//Override ITriggerInterface
	virtual void GetTriggerTaskComponents(TArray<UTriggerTaskComponentBase*>& TaskComponents) const override;
	virtual bool RemoveTriggerTaskComponent(const FGuid& ComponentID, bool IncludeChildrenComponent = false) override;
	virtual UTriggerTaskComponentBase* AddTriggerTaskComponent(UTriggerTaskComponentBase* NewComponent) override;
	virtual bool GetBoxBounds(FVector& Origin, FVector& HalfBoxExtent) const override;
	virtual bool GetUniqueRuntimeID(int& OutId) const override;
	virtual bool CanBeToggled() const override;
	//Override ITriggerInterface

public:


	/*
	* The implementation to support the interface
	*/
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced, Category = "TriggerActor|InterfaceSupport")
	UTriggerInterfaceSupportBase* InterfaceSupport;
};