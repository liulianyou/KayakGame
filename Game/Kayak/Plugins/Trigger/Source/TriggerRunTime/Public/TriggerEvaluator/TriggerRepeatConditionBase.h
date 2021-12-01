#pragma once

/*
* Author:	Liulianyou
* Time:		2020/12/16
* Purpose:	The repeat condition for trigger task to run for more than one time.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "EvaluatorCondition.h"

#include "TriggerRepeatConditionBase.generated.h"

class UTriggerRepeatStyleBase;

#define INFINIT_COUNT -1

UCLASS(BlueprintType, Blueprintable, DefaultToInstanced, editinlinenew, hidedropdown)
class TRIGGERRUNTIME_API UTriggerTaskRepeatCondtionBase : public UEvaluatorCondition
{
	GENERATED_UCLASS_BODY()

public:

	//Override EvaluatorBase
	virtual void NativeInitialize(UObject* OwnerObject) override;
	//Override EvaluatorBase

public:
	
	//Get the count of repeat.
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerTaskRepeatCondition")
	int GetRepeatCount();

	/*
	* Try to repeat target object
	* 
	* #return true means the target object's repeat action have been delegated by the the repeat style.
	*/ 
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerTaskRepeatCondition")
	bool TryToRepeat( UObject* Object );
};
