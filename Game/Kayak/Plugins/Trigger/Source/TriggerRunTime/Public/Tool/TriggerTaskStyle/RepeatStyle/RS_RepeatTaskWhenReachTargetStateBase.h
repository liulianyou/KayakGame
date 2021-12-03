#pragma once

/*
* Author:		Liulianyou
* Time:			2021/5/13
* Purpose:		This is the base class to identify the behavior to repeat task when the task has reached to the confined state.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerRepeatStyleBase.h"
#include "CheckTaskState.h"

#include "RS_RepeatTaskWhenReachTargetStateBase.generated.h"

class UEvaluatorBase;
class UTriggerTaskBase;

UCLASS(Blueprintable, BlueprintType, Abstract, DefaultToInstanced, hidedropdown, editinlinenew)
class TRIGGERRUNTIME_API URS_RepeatTaskWhenReachTargetStateBase : public UTriggerRepeatStyleBase
{
	GENERATED_UCLASS_BODY()

#if WITH_EDITOR

	void PreEditChange(FProperty* PropertyAboutToChange) override;

#endif


public:
	
	//Override UObject
	virtual void BeginDestroy() override;
	virtual void PostLoad() override;
	virtual void Serialize(FArchive& Ar) override;
	virtual void PostInitProperties() override;
	//Override UObject

	//Override RepeatStyleBase
	virtual void InitializeStyle( UObject* OwnerObject ) override;

	/*
	* This object should be UTriggerTaskBase
	*/
	virtual bool TryToRepeat_Implementation(UObject* Object) override;
	//Override RepeatStyleBase

protected:

	//Invoked when the target task have reach the confined state.
	virtual void ReachTargetTriggerState(UTriggerTaskBase* Task) {};


	/*
	* Callback function for the trigger task state.
	* This callback is remove until this object is destroyed
	*/
	UFUNCTION()
	void TriggerTaskStateCallbackForLoop( UEvaluatorBase* Evaluator, bool EvaluatorResult );

	/*
	* #return false means repeat failed
	*/
	bool RepeatTask( UTriggerTaskBase* Task );

private:
	void TryToRepeatTaskInternal();

public:

	/*
	* Flag to check weather it will repeat the target object automatically.
	* Please use it carefully as this maybe cause infinity loop of task execution
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerTaskRepeatCondition")
	bool RepeatAutomatically = false;

	//Used to check weather this task has reached the target state
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, Category = "TriggerTaskRepeatCondition", meta= (DisplayAfter="RepeatAutomatically"))
	UCheckTaskState* CheckTaskState = nullptr;

private:

	/*
	* When reach to target target state and try to repeat I need to cashed the activation informations of the trigger task outer
	* So that when repeat task I can get the valid activation information no matter the task have reach to the end state which will empty its activation information
	*/
	FTaskActivationInfoContainer CashedActivationInfos;
};