#pragma once

/*
* Author:	Liulianyou
* Time:		2020/9/7
* Purpose:	The base class for the operations of the logic just like &&， || ， !
*/


#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "EvaluatorBase.h"

#include "EvaluatorOperation.generated.h"

class UEvaluatorDataBase;
class UEvaluatorCondition;

/*
* Internal data to hold the information for evaluation
*/
USTRUCT(BlueprintType)
struct FEvaluatEventInfo
{
	GENERATED_BODY()

public:

	//The last immediate result of evaluation
	UPROPERTY(BlueprintReadOnly) 
	bool Result = false;

public:

	void Reset();
};

UCLASS(BlueprintType, Abstract)
class EVALUATOR_API UEvaluatorOperation : public UEvaluatorBase
{
	GENERATED_UCLASS_BODY()

public:
	//Override EvaluatorBase
	virtual void NativeInitialize(UObject* OwnerObject) override;
	virtual void NativeReset() override;
	virtual void SetExternalData(UEvaluatorDataBase* NewData);
	virtual void MarkEvaluateable() override;
	virtual void BeginDestroy() override;
	//Override EvaluatorBase

public:

	/*
	* Get all conditions in this evaluator
	*/
	UFUNCTION(BlueprintCallable, Category = "Evaluator")
	virtual void GetAllConditions(TArray<UEvaluatorCondition*>& Conditions) const;

	/*
	* Get all evaluators which is passed the evaluator
	*/
	UFUNCTION(BlueprintCallable, Category = "Evaluator")
	virtual void GetAllPassedEvaluators(TArray<UEvaluatorBase*>& Conditions, bool IncludeOperators) const;

	/*
	* Get cashed result of each evaluator
	*/
	UFUNCTION(BlueprintCallable, Category = "Evaluator")
	const TMap<UEvaluatorBase*, FEvaluatEventInfo>& GetCashedResult() const { return CashedResult; }

public:

	UFUNCTION()
	void OnEvaluatorCallback(UEvaluatorBase* Evaluator, bool Result);

private:

	void GetPassedConditionInternal(UEvaluatorOperation* Operator, TArray<UEvaluatorBase*>& Conditions, bool ContainOperators = false) const;

public:
	//The evaluator which should be run before this evaluator,
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Category = "Evaluator")
	TArray<UEvaluatorOperation*> Operators;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Category = "Evaluator")
	TArray<UEvaluatorCondition*> Condtions;


private:
	
	/*
	* The cashed value for each evaluator, so that I don't need to evaluate each evaluator when this operation is marked successfully.
	*/
	TMap<UEvaluatorBase*, FEvaluatEventInfo> CashedResult;

};