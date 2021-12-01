#include "EvaluatorOperation.h"
#include "EvaluatorCondition.h"

void FEvaluatEventInfo::Reset()
{
	Result = false;
}

UEvaluatorOperation::UEvaluatorOperation(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	CashedResult.Empty();
}

void UEvaluatorOperation::NativeInitialize(UObject* OwnerObject)
{
	Super::NativeInitialize(OwnerObject);

	for (auto Operator : Operators)
	{
		if (Operator != nullptr)
		{
			Operator->NativeInitialize(OwnerObject);

			FEvaluatEventInfo NewInfo;

			Operator->EvaluatorDelegate.AddUniqueDynamic(this, &UEvaluatorOperation::OnEvaluatorCallback);

			CashedResult.Add(Operator, NewInfo);
		}
	}

	for (auto Condition : Condtions)
	{
		if (Condition != nullptr)
		{
			Condition->NativeInitialize(OwnerObject);

			FEvaluatEventInfo NewInfo;

			Condition->EvaluatorDelegate.AddUniqueDynamic(this, &UEvaluatorOperation::OnEvaluatorCallback);

			CashedResult.Add(Condition, NewInfo);
		}
	}
}

void UEvaluatorOperation::NativeReset()
{
	Super::NativeReset();

	for (auto Operator : Operators)
	{
		if (Operator != nullptr)
		{
			Operator->BP_Reset();

			if (CashedResult.Find(Operator) != nullptr)
			{
				CashedResult[Operator].Reset();
			}
		}
	}

	for (auto Condition : Condtions)
	{
		if (Condition != nullptr)
		{
			Condition->BP_Reset();

			if (CashedResult.Find(Condition) != nullptr)
			{
				CashedResult[Condition].Reset();
			}
		}
	}
}

void UEvaluatorOperation::SetExternalData(UEvaluatorDataBase* NewData)
{
	for (auto Operator : Operators)
	{
		Operator->SetExternalData(NewData);
	}

	for (auto Condition : Condtions)
	{
		Condition->SetExternalData(NewData);
	}
}

void UEvaluatorOperation::MarkEvaluateable()
{
	Super::MarkEvaluateable();

	for (auto Operator : Operators)
	{
		if (Operator == nullptr)
			continue;

		Operator->MarkEvaluateable();

		if (CashedResult.Find(Operator) != nullptr)
		{
			CashedResult[Operator].Reset();
		}
	}

	for (auto Condtion : Condtions)
	{
		if (Condtion == nullptr)
			continue;

		Condtion->MarkEvaluateable();

		if (CashedResult.Find(Condtion) != nullptr)
		{
			CashedResult[Condtion].Reset();
		}
	}
}

void static GetAllConditionsInternal(const TArray<UEvaluatorOperation*>& Operations, TArray<UEvaluatorCondition*>& Conditions)
{
	for (int i = 0; i < Operations.Num(); i++)
	{
		GetAllConditionsInternal(Operations[i]->Operators, Conditions);

		Conditions.Append(Operations[i]->Condtions);
	}
}


void UEvaluatorOperation::GetAllConditions(TArray<UEvaluatorCondition*>& Conditions) const
{
	Conditions.Empty();

	for (int i = 0; i < Operators.Num(); i++)
	{
		if (Operators[i] == nullptr)
			continue;

		GetAllConditionsInternal(Operators[i]->Operators, Conditions);
	}

	Conditions.Append(Conditions);
}

void UEvaluatorOperation::GetAllPassedEvaluators(TArray<UEvaluatorBase*>& Conditions, bool IncludeOperators) const
{
	Conditions.Empty();

	for (int i = 0; i < Operators.Num(); i++)
	{
		if (Operators[i] == nullptr)
			continue;

		if (IncludeOperators)
		{
			if (Operators[i]->GetLastEvaluatorResult())
			{
				Conditions.Add(Operators[i]);
			}
		}

		GetPassedConditionInternal(Operators[i], Conditions, IncludeOperators);
	}

	for (int i = 0; i < Condtions.Num(); i++)
	{
		if (Condtions[i] == nullptr)
			continue;

		if (Condtions[i]->GetLastEvaluatorResult())
		{
			Conditions.Add(Condtions[i]);
		}
	}
}

void UEvaluatorOperation::GetPassedConditionInternal(UEvaluatorOperation* Operator, TArray<UEvaluatorBase*>& Conditions, bool ContainOperators /* = false */) const
{
	if (Operator == nullptr)
		return;

	for (int i = 0; i < Operator->Operators.Num(); i++)
	{
		if (Operator->Operators[i] == nullptr)
			continue;

		if (ContainOperators)
		{
			if (Operator->Operators[i]->GetLastEvaluatorResult())
			{
				Conditions.Add(Operator->Operators[i]);
			}
		}

		GetPassedConditionInternal(Operator->Operators[i], Conditions, ContainOperators);
	}

	for (int i = 0; i < Operator->Condtions.Num(); i++)
	{
		if (Operator->Condtions[i] == nullptr)
			continue;

		if (Operator->Condtions[i]->GetLastEvaluatorResult())
		{
			Conditions.Add(Operator->Condtions[i]);
		}
	}
}

void UEvaluatorOperation::OnEvaluatorCallback(UEvaluatorBase* Evaluator, bool Result)
{
	if(CashedResult.Find(Evaluator) == nullptr)
		return;

	CashedResult[Evaluator].Result = Result;

	//If one of the child evaluator passed then this operation will evaluate
	if (Result)
	{
		NotifyToEvaluate();
	}
}

void UEvaluatorOperation::BeginDestroy()
{
	Super::BeginDestroy();

	for (auto CashedResultIt = GetCashedResult().CreateConstIterator(); CashedResultIt; ++CashedResultIt)
	{
		if(CashedResultIt.Key() == nullptr || !CashedResultIt.Key()->IsValidLowLevel())
			continue;

		CashedResultIt.Key()->EvaluatorDelegate.RemoveDynamic(this, &UEvaluatorOperation::OnEvaluatorCallback);
	}

	CashedResult.Empty();
}