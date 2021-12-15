#pragma once

/*
* Author:	Liulianyou
* Time:		2020/7/28
* Purpose:	Purpose to evaluate the condition when the children can notify others or affect other tasks or triggers
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Templates/SubclassOf.h"
#include "EvaluatorDataBase.h"

#include "EvaluatorBase.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvaluatorDelegate, UEvaluatorBase*, Evaluator, bool, EvaluatorResult);

UCLASS(Blueprintable, BlueprintType, DefaultToInstanced, hidedropdown, editinlinenew)
class TRIGGERRUNTIME_API UEvaluatorBase : public UObject
{

	GENERATED_UCLASS_BODY()

public:

	/*
	* The primer accessor function to define how this evaluation works.
	* 
	* If this evaluator has passed then this evaluator will nothing.
	* If you want to reevaluate this evaluator you should reset this evaluator.
	* 
	* As this function will broadcast some events to other module, and this may cause infinity loop.
	* You should use the EvaluatorDelegate for common cases
	* 
	* @param DoLocalCheck This function only is only used to check weather this evaluator is passed.
	*/
	virtual bool Evaluator( bool DoLocalCheck = false );

	/*
	* Allow one chance to the BP to override the native implementation
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime|Evaluator")
	bool BP_Evaluator();

	/*
	* Let the sub class to override this function to implement final evaluator implementation
	*
	* Try to evaluate the triggers (can be Trigger or Trigger tasks) to determine weather the current trigger should be toggled
	*/
	virtual bool NativeEvaluator();

	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime|Evaluator")
	void BP_Reset();

	//Reset all the local variables
	virtual void NativeReset();

	//Initialize the local variables this function only be called in the BeginPlaye stage
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime|Evaluator")
	void BP_Initialize(UObject* OwnerObject);
	virtual void NativeInitialize(UObject* OwnerObject);

	//UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime")
	void BP_Destroyed(){};
	virtual void BeginDestroy() override;

	//Get the last result of evaluator
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Evaluator")
	bool GetLastEvaluatorResult() const { return CashedValue; };

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Evaluator")
	int GetEvaluateCount() const { return EvaluateCount; };

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Evaluator")
	UEvaluatorDataBase* GetExternalData() const { return ExternalData; }

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Evaluator")
	virtual void SetExternalData(UEvaluatorDataBase* NewData) { ExternalData = NewData;}

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Evaluator")
	UEvaluatorDataBase* CreateNewExternalData(TSubclassOf<UEvaluatorDataBase> EvaluatorClass);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Evaluator")
	UObject* GetOwner() { return Owner; }

	/*
	* Invoked in MarkEvaluateable.
	* Make the evaluator can be evaluate again.
	* As when this evaluator is passed the result will be cashed, and when I invoke evaluate function it will only return the last cashed value
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime|Evaluator")
	void OnMarkEvaluateable();

	/*
	* Make the evaluator can be evaluate again.
	* As when this evaluator is passed the result will be cashed, and when I invoke evaluate function it will only return the last cashed value
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Evaluator")
	virtual void MarkEvaluateable();

protected:

	/*
	* This function should also be invoked when some conditions of this evaluator have changed,
	* so that the outer module can know the result of changed immediately.
	* 
	* #return the result for current evaluate
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Evaluator")
	bool NotifyToEvaluate();

public:

	//Flag used to inverse the final result of the Evaluator
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Evaluator")
	bool InverseResult;

	/*
	* The delegate will be used to be broadcast when this evaluator is successful
	*/
	UPROPERTY(BlueprintAssignable)
	FEvaluatorDelegate EvaluatorDelegate;

private:

	/*
	* The data should be processed in this evaluator.
	* when this evaluator evaluate it will first check it own evaluator,
	* if this evaluator failed then it will check weather the external data will make this evaluator success.
	* This means if Evaluator function return true, I will ignore the external data.
	* So we can treat the external data is additional condition to supplement this evaluator when the evaluator is failed
	*/
	UPROPERTY(Transient)
	UEvaluatorDataBase* ExternalData;

	/*
	* The owner of this object. some times it is differ from the outer of this object
	*/
	UPROPERTY(Transient)
	UObject* Owner;

private:
	//Cashed value for each evaluator, I will use it get this evaluator is true or false, this will avoid evaluator repeatedly
	bool CashedValue;

	//Flag to check weather this evaluator have been evaluated
	int EvaluateCount = 0;
};

#define EvaluatorFramement()	\
	virtual bool NativeEvaluator();\
	virtual void NativeReset();\
	virtual void NativeInitialize(UObject* OwnerObject);\
	virtual void BeginDestroy() override;


