#pragma once

/*
* Author:		Liulianyou
* Time :		2020 / 2 / 9
* Purpose :		The base class to generate start information once one trigger task start to active
*/


#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerDefinition.h"
#include "TaskActiveInformation.h"
#include "OperationInformationBase.h"

#include "TriggerTaskStartInformationBase.generated.h"

/*
* The base class to generate start information once one trigger task is tart to active
*
* As the UE4 BP only support the class which derived form the UObject or struct,
* I want this data can correspond to different status to gather different data,
* I need to make it derived from the UObject
*/
UCLASS(BlueprintType, Blueprintable, abstract, Config = Game, Category = "TriggerRuntime")
class TRIGGERRUNTIME_API UTriggerTaskStartInformationBase : public UOperationInformationBase
{
public:
	GENERATED_UCLASS_BODY()

public:
	virtual bool IsSupportedForNetworking() const { return true; }

public:

	//Get the actor who toggle this trigger
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime")
	AActor* GetToggledActor() const;

	//Copy data from activation information
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime")
	void CopyFromActiveInfo( const FTaskActivationInfo& ActiveInfo );

	//check weather two toggle information is the same, Default true when the two info has the same toggled actor and class
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime")
	bool Equal(const UTriggerTaskStartInformationBase* OtherInfo) const;

	friend bool operator==(const UTriggerTaskStartInformationBase& Left, const UTriggerTaskStartInformationBase& Right);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	void SetWaitRelatedComponentLoaded(bool NewValue); 

	/*
	* Try to check weather when this information occurred, the target component need to wait all related components have been loaded.
	* 
	* @param ComponentInfo The information of related component.
	* 
	* #return true means all related component should be loaded
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime")
	bool NeedWaitTargetComponentLoaded( const FTriggerTaskComponentInformation& ComponentInfo = FTriggerTaskComponentInformation()) const;

	
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	void SetNeedToEvaluateStartConditions( bool Value );

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	bool GetNeedToEvaluateStartConditions() const { return NeedToEvaluateStartConditions;}

private:

	/*
	* True this toggle information need the related task component to be loaded first.
	* False means this toggle information do not care weather the related component have been loaded.
	* If the related component have been loaded then it work, or it will do nothing.
	* 
	* This is used for designer to confine the default behavior. the final behavior should be defined in the function: NeedWaitTargetComponentLoaded.
	*/
	UPROPERTY(EditAnywhere, Category = "TriggerRuntime", meta=( AllowPrivateAccess = "true"))
	bool WaitRelatedComponentLoaded = true;

	/*
	* Flag to check weather this toggle information should make the trigger task to evaluator the start conditions
	*/
	UPROPERTY(EditAnywhere, Category = "TriggerRuntime", meta = (AllowPrivateAccess = "true"))
	bool NeedToEvaluateStartConditions = true;

};

bool operator==(const UTriggerTaskStartInformationBase& Left, const UTriggerTaskStartInformationBase& Right);


