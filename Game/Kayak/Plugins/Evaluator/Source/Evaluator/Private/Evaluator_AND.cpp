#include "Evaluator_AND.h"
#include "EvaluatorCondition.h"
#include "EvaluatorDefinition.h"

UEvaluator_AND::UEvaluator_AND(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}

void UEvaluator_AND::NativeInitialize(UObject* OwnerObject)
{
	Super::NativeInitialize(OwnerObject);
}

bool UEvaluator_AND::NativeEvaluator(bool DoLocalCheck /*= false*/)
{
	if (Operators.Num() == 0 && Condtions.Num() == 0)
	{
		UE_LOG(LogEvaluator, Warning, TEXT("As there is no vaild value in the evlautor %s, I think you should remove it."), *GetFullName());
		return false;
	}

	/*
	* As this evaluator has been passed I don't need to check all the evaluators
	*/
	if(IsPassed())
		return true;

	for (auto Operator : Operators)
	{
		if (Operator == nullptr)
			continue;

		if (!Operator->Evaluator())
		{
			return false;
		}
	}

	for (auto Condtion : Condtions)
	{
		if (Condtion == nullptr)
			continue;

		if (!Condtion->Evaluator())
		{
			return  false;
		}
	}

	return true;
}

void UEvaluator_AND::NativeReset()
{
	Super::NativeReset();
}

void UEvaluator_AND::BeginDestroy()
{
	Super::BeginDestroy();
}

bool UEvaluator_AND::IsPassed() const
{
	if(GetCashedResult().Num() == 0)
		return false;

	for (auto CashedResultIT = GetCashedResult().CreateConstIterator(); CashedResultIT; ++CashedResultIT)
	{
		if (CashedResultIT.Value().Result == false)
		{
			return false;
		}
	}

	return true;
}