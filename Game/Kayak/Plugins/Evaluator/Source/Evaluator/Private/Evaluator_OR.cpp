#include "Evaluator_OR.h"
#include "EvaluatorCondition.h"
#include "EvaluatorDefinition.h"

UEvaluator_OR::UEvaluator_OR(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}

bool UEvaluator_OR::NativeEvaluator(bool DoLocalCheck /*= false*/)
{
	if (Operators.Num() == 0 && Condtions.Num() == 0)
	{
		UE_LOG(LogEvaluator, Warning, TEXT("As there is no vaild value in the evlautor %s, I think you should remove it."), *GetFullName());
		return false;
	}

	if(IsPassed())
		return true;

	for (auto Operator : Operators)
	{
		if (Operator->Evaluator())
		{
			return true;
		}
	}

	for (auto Condition : Condtions)
	{
		if (Condition->Evaluator())
		{
			return true;
		}
	}

	return false;
}

bool UEvaluator_OR::IsPassed() const
{
	for (auto CashedResultIT = GetCashedResult().CreateConstIterator(); CashedResultIT; ++CashedResultIT)
	{
		if (CashedResultIT.Value().Result)
		{
			return true;
		}
	}

	return false;
}