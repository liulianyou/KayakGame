#include "Evaluator_NOT.h"

#include "EvaluatorOperation.h"
#include "EvaluatorCondition.h"
#include "EvaluatorDefinition.h"

UEvaluator_NOT::UEvaluator_NOT(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}

bool UEvaluator_NOT::NativeEvaluator(bool DoLocalCheck /*= false*/)
{
	if (Operators.Num() == 0 && Condtions.Num() == 0)
	{
		UE_LOG(LogEvaluator, Warning, TEXT("As there is no vaild value in the evlautor %s, I think you should remove it."), *GetFullName());
		return false;
	}

	if (Operators.Num() > 1 && Condtions.Num() > 1)
	{
		UE_LOG(LogEvaluator, Warning, TEXT("Only first operation in Evaluator_Not:%s will work, the other evaluator will ignore!!, Please manager the herichary of the condition"), *GetFullName());
	}

	if(IsPassed())
	return true;

	for (auto Operation : Operators)
	{
		if (Operation == nullptr)
			continue;

		//Only process the first valid data
		return !Operation->Evaluator();
	}

	for (auto Condition : Condtions)
	{
		if (Condition == nullptr)
			continue;

		//only process first valid data
		return !Condition->Evaluator();
	}

	return false;
}

bool UEvaluator_NOT::IsPassed() const
{
	for (auto Operation : Operators)
	{
		if (Operation == nullptr)
			continue;

		return !GetCashedResult()[Operation].Result;
	}

	for (auto Condition : Condtions)
	{
		if (Condition == nullptr)
			continue;

		//only process first valid data
		return !GetCashedResult()[Condition].Result;
	}

	return false;
}