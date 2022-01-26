#include "TriggerEvaluator_OR.h"
#include "EvaluatorCondition.h"
#include "TriggerDefinition.h"

UTriggerEvaluator_OR::UTriggerEvaluator_OR(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}

bool UTriggerEvaluator_OR::NativeEvaluator(bool DoLocalCheck /*= false*/)
{
	if (Operators.Num() == 0 && Condtions.Num() == 0)
	{
		UE_LOG(LogTrigger, Warning, TEXT("As there is no vaild value in the evlautor %s, I think you should remove it."), *GetFullName());
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

bool UTriggerEvaluator_OR::IsPassed() const
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