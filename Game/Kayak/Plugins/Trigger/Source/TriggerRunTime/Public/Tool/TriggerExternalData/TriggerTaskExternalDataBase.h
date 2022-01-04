#pragma once

/*
* Author:	Liulianyou
* Time:		2021/9/29
* Purpose:	This data is used to assigned to the trigger task as external data which will be processed by the trigger task
*			Maybe at the feature we need to add new data to trigger task which need to be confined and processed I don't need to modify the trigger task class.
*			These data should not be the intrinsic data.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Engine/EngineTypes.h"
#include "TriggerTaskInterface.h"

#include "TriggerTaskExternalDataBase.generated.h"

class UTriggerTaskBase;
class UTriggerResetStyleBase;

UCLASS(Blueprintable, BlueprintType, Abstract, editinlinenew, DefaultToInstanced, Category = "TriggerRuntime|ExternalData")
class TRIGGERRUNTIME_API UTriggerTaskExternalDataBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	/*
	* Used to initialize this data
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerTask|Descriptor")
	void OnInitialize(UTriggerTaskBase* Owner);
	virtual void Initialize(UTriggerTaskBase* Owner);

	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerTask|Descriptor")
	void OnReset(UOperationInformationBase* ResetOperationInfo);
	virtual void Reset(UOperationInformationBase* ResetOperationInfo);

	//This should be invoked when the owner don't want to use this data
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerTask|Descriptor")
	void OnFinialize();
	virtual void Finialize();

	//Try to replicate its sub object's properties
	virtual bool ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags);


public:

	/*
	* Get the owner trigger task
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerTask|Descriptor")
	UTriggerTaskBase* GetTriggerTaskOwner() const;

private:

	UTriggerTaskBase* TaskOwner;
};


