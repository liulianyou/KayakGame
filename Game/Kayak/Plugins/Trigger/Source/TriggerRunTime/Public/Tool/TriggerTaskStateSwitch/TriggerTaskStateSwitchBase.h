#pragma once

/*
* Author:	Liulianyou
* Time:		2021/8/26
* Purpose:	This the base class used to define when and how the trigger task can switch to target state
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Engine/EngineTypes.h"

#include "TriggerTaskStateSwitchBase.generated.h"

class UEvaluatorBase;
class UEvaluatorCondition;
class UTriggerStyleBase;
class UTriggerTaskBase;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTriggerTaskStateSwitchEvent);

UCLASS(BlueprintType, Blueprintable, Abstract, hidedropdown, editinlinenew, DefaultToInstanced, Within="TriggerTaskBase")
class TRIGGERRUNTIME_API UTriggerTaskStateSwitchBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime|SwitchState")
	void OnInitialzie(UTriggerTaskBase* Owner);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|SwitchState")
	virtual void Initialize( UTriggerTaskBase* Owner );

	//Define how to start this evaluator
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime|SwitchState")
	void OnStartEvaluator();

	//Start to evaluator when the task can switch to target state
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|SwitchState")
	virtual void StartEvaluator();

	//Define how to stop this evaluator
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime|SwitchState")
	void OnEndEvaluator();

	//Stop this evaluator
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|SwitchState")
	virtual void EndEvaluator();

	//Check weather this switch is running to wait some conditions to be meet
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|SwitchState")
	bool IsRunning() const;

	//Check weather this switch have meet some conditions
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|SwitchState")
	virtual bool IsSwitchOn() const;

	/*
	* @param MatchedToCondition True means the condition and style should be mapped
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime|SwitchState")
	void AddNewConditionAndStyle( UEvaluatorBase* Condition, UTriggerStyleBase* Style = nullptr, bool CondtionAndStyleMapped = false);

	/*
	* Get passed condition for the target state condition
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	virtual void GetPassedCondition(TArray<UEvaluatorBase*>& Conditions, bool ContainOperators = false) const;

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	virtual void GetAllConditions(TArray<UEvaluatorBase*>& Conditions) const;

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	virtual void GetAllStyles(TArray<UTriggerStyleBase*>& Styles) const;

	//Get call evaluator conditions in this switch
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	virtual void GetAllEvaluatorConditions(TArray<UEvaluatorCondition*>& EvaluatorConditions) const;

	/*
	* Get all the styles which condition meet the requisite
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	virtual void GetPassedStyles(TArray<UTriggerStyleBase*>& Styles) const;

	/*
	* Reset this switch
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime|SwitchState")
	void Reset();

	/*
	* Describe how to switch the trigger task state.
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime|SwitchState")
	void SwitchState();

	/*
	* Make this switch can be evaluate again
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime|SwitchState")
	void MarkEvaluateable();

	FTriggerTaskStateSwitchEvent& GetStateSwitchEvent() { return TriggerTaskStateSwitchEvent;}

public:

	/*
	* The delegate event to the trigger task, when the switch state is invoked then it will be executed
	*/
	UPROPERTY(BlueprintAssignable)
	FTriggerTaskStateSwitchEvent TriggerTaskStateSwitchEvent;

private:

	//All the evaluator should be check at this function
	UFUNCTION()
	virtual void Evaluator();

private:

	//Flag to check weather this switch is running
	uint8 bIsRunning : 1;

	UTriggerTaskBase* TaskOwner;
};
