#pragma once

/*
* Author:	Liulianyou
* Time:		2021/10/15
* Purpose:	The information class which is used for trigger event system.
*			I will use this class hold some information and do some replication for the public information for trigger event system
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "GameplayTags.h"

#include "GameFramework/Info.h"
#include "OperationInformationContainer.h"

#include "TriggerEventSystemInfoBase.generated.h"

class AGameModeBase;

/*
* One game instance should only exist one TriggerEventSystemInfo at one time
*/
UCLASS(BlueprintType, Blueprintable, hidedropdown, Category = "TriggerRuntime")
class TRIGGERRUNTIME_API ATriggerEventSystemInfoBase : public AInfo
{
	GENERATED_UCLASS_BODY()

public:
	
	//Override UObject
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void BeginDestroy() override;
	//Override UObject

	//Override AActor
	virtual bool ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags) override;
	virtual void PostInitializeComponents() override;
	//Override AActor

public:

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|SystemInfo")
	FOperationInfoContainer& GetOperationContainer() { return OperationContainer; }

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|SystemInfo")
	FGameplayTagContainer& GetTriggerTags() { return TriggerTags; }



public:

	UFUNCTION()
	virtual void OnRep_OperationContainer( const FOperationInfoContainer& OldValue );

	UFUNCTION()
	virtual void OnRep_TriggerTags(const FGameplayTagContainer& OldValue);

private:
	
	/*
	* The operation informations which will be replicated
	*/
	UPROPERTY(Transient, ReplicatedUsing=OnRep_OperationContainer)
	FOperationInfoContainer OperationContainer;

	/*
	* The tags that is created by the trigger task when they run at specific state
	*/
	UPROPERTY(Transient, ReplicatedUsing = OnRep_TriggerTags)
	FGameplayTagContainer TriggerTags;
};

