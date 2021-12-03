#include "TTSS_AnyConditionMeet.h"
#include "EvaluatorOperation.h"
#include "EvaluatorCondition.h"
#include "TriggerStyleBase.h"
#include "TriggerEvaluator_OR.h"


UTTSS_AnyConditionMeet::UTTSS_AnyConditionMeet(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	Switches.Empty();
}

void UTTSS_AnyConditionMeet::Initialize(UTriggerTaskBase* Owner)
{
	Super::Initialize(Owner);

	for (int i = 0; i < Switches.Num(); i++)
	{
		if (Switches[i].Condition != nullptr)
		{
			Switches[i].Condition->NativeInitialize(this);
		}

		for (auto Style : Switches[i].Styles)
		{
			if (Style != nullptr)
			{
				Style->InitializeStyle(this);
			}
		}
	}
}

void UTTSS_AnyConditionMeet::StartEvaluator()
{
	Super::StartEvaluator();

	for (int i = 0; i < Switches.Num(); i++)
	{
		if(Switches[i].Condition == nullptr)
			continue;

		Switches[i].Condition->EvaluatorDelegate.AddUniqueDynamic(this, &UTTSS_AnyConditionMeet::OnCondtionContentChanged);
	}
}

void UTTSS_AnyConditionMeet::EndEvaluator()
{
	Super::EndEvaluator();

	for (int i = 0; i < Switches.Num(); i++)
	{
		if (Switches[i].Condition == nullptr)
			continue;

		Switches[i].Condition->EvaluatorDelegate.RemoveDynamic(this, &UTTSS_AnyConditionMeet::OnCondtionContentChanged);
	}
}


void UTTSS_AnyConditionMeet::OnCondtionContentChanged(UEvaluatorBase* Eval, bool EvaluatorResult)
{
	if(EvaluatorResult)
		Evaluator();
}

void UTTSS_AnyConditionMeet::SwitchState_Implementation()
{
	Super::SwitchState_Implementation();

	for (int i = 0; i < Switches.Num(); i++)
	{
		if (Switches[i].Condition == nullptr || Switches[i].Condition->GetLastEvaluatorResult())
		{
			for (int j = 0; j < Switches[i].Styles.Num(); j++)
			{
				if (Switches[i].Styles[j] != nullptr)
				{
					Switches[i].Styles[j]->Execute();
				}
			}
		}
	}
}

void UTTSS_AnyConditionMeet::Reset_Implementation()
{
	for (int i = 0; i < Switches.Num(); i++)
	{
		if (Switches[i].Condition != nullptr )
		{
			Switches[i].Condition->BP_Reset();
		}
	}
}

void UTTSS_AnyConditionMeet::MarkEvaluateable_Implementation()
{
	for (int i = 0; i < Switches.Num(); i++)
	{
		if (Switches[i].Condition != nullptr)
		{
			Switches[i].Condition->MarkEvaluateable();
		}
	}
}

void UTTSS_AnyConditionMeet::AddNewConditionAndStyle_Implementation(UEvaluatorBase* Condition, UTriggerStyleBase* Style /*= nullptr*/, bool CondtionAndStyleMapped /*= false*/)
{
	if(Condition == nullptr && Style ==nullptr)
		return;

	FTriggerTaskStyleMap NewMap;

	if (Switches.Num() == 0)
	{
		Switches.Add(NewMap);
	}

	UEvaluatorOperation* LocalOperation = Cast<UEvaluatorOperation>(Condition);
	UEvaluatorCondition* LocalCondition = Cast<UEvaluatorCondition>(Condition);

	bool Added = false;

	for (int i = 0; i < Switches.Num(); i++)
	{
		bool CanAddCondition = Condition != nullptr;
		bool CanAddStyle = Style != nullptr;

		if (CondtionAndStyleMapped == true)
		{
			UTriggerStyleBase** DataPtr = Switches[i].Styles.FindByPredicate( [&](const UTriggerStyleBase* Data){
				if(Style == nullptr || Data == Style)
					return true;
				else
					return false;
			} );

			if(DataPtr == nullptr)
				CanAddCondition = false;

			if(Condition != nullptr && Switches[i].Condition != Condition)
				CanAddStyle = false;
		}

		if (CanAddCondition)
		{
			if (LocalOperation != nullptr && Switches[i].Condition == nullptr)
			{
				Switches[i].Condition = LocalOperation;

				Added = true;
			}

			if (LocalCondition != nullptr)
			{
				if (Switches[i].Condition == nullptr)
				{
					Switches[i].Condition = NewObject<UTriggerEvaluator_OR>(this);
				}

				Switches[i].Condition->Condtions.Add(LocalCondition);

				Added = true;
			}
		}

		if (CanAddStyle)
		{
			Switches[i].Styles.Add(Style);

			Added = true;
		}
	}

	if (Added == false)
	{
		Switches.Add(NewMap);

		AddNewConditionAndStyle(Condition, Style, CondtionAndStyleMapped);
	}
}

void UTTSS_AnyConditionMeet::Evaluator()
{
	for (int i = 0; i < Switches.Num(); i++)
	{
		//if any of the switch satisfy the condition, the trigger task should switch to target state
		if (Switches[i].Condition == nullptr || 
			//When the condition has not passed I need to evaluate it again
			Switches[i].Condition->Evaluator(true))
		{
			SwitchState();

			break;
		}
	}
}

bool UTTSS_AnyConditionMeet::IsSwitchOn() const
{
	bool HasNoValidCondition = true;

	for (auto Switch : Switches)
	{
		if(Switch.Condition == nullptr)
			continue;

		HasNoValidCondition = false;

		//When the condition has not passed I need to evaluate it again
		if (Switch.Condition->Evaluator(true))
		{
			return true;
		}
	}

	if(HasNoValidCondition)
		return true;
	else
		return false;
}

void UTTSS_AnyConditionMeet::GetPassedCondition(TArray<UEvaluatorBase*>& Conditions, bool ContainOperators /* = false */) const
{
	Conditions.Empty();

	for (int StateConditionIndex = 0; StateConditionIndex < Switches.Num(); StateConditionIndex++)
	{
		if (Switches[StateConditionIndex].Condition == nullptr)
			continue;

		TArray<UEvaluatorBase*> LocalConditions;

		Switches[StateConditionIndex].Condition->GetAllPassedEvaluators(LocalConditions, ContainOperators);

		Conditions.Append(LocalConditions);
	}
}

void UTTSS_AnyConditionMeet::GetAllStyles(TArray<UTriggerStyleBase*>& Styles) const
{
	Styles.Empty();

	for (auto Switch : Switches)
	{
		if (Switch.Condition != nullptr)
		{
			Styles.Append(Switch.Styles);
		}
	}
}

void UTTSS_AnyConditionMeet::GetAllConditions(TArray<UEvaluatorBase*>& Conditions) const
{
	Conditions.Empty();

	for (auto Switch : Switches)
	{
		if (Switch.Condition != nullptr)
		{
			Conditions.Add(Switch.Condition);
		}
	}
}

void UTTSS_AnyConditionMeet::GetAllEvaluatorConditions(TArray<UEvaluatorCondition*>& Conditions) const
{
	Conditions.Empty();

	for (int i = 0; i < Switches.Num(); i++)
	{
		if (Switches[i].Condition == nullptr)
			continue;

		TArray<UEvaluatorCondition*> LocalConditions;

		Switches[i].Condition->GetAllConditions(LocalConditions);

		Conditions.Append(LocalConditions);
	}
}

void UTTSS_AnyConditionMeet::GetPassedStyles(TArray<UTriggerStyleBase*>& Styles) const
{
	Styles.Empty();

	for (auto Switche : Switches)
	{
		if (Switche.Condition == nullptr 
			//When the condition has not passed I need to evaluate it again
			|| Switche.Condition->Evaluator())
		{
			Styles.Append(Switche.Styles);
		}
	}
}