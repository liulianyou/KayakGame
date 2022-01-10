#include "DataActiveRuleBase.h"

UDataActiveRuleBase::UDataActiveRuleBase(const FObjectInitializer& ObjectInitilaier)
	:Super(ObjectInitilaier)
{
	
}

bool UDataActiveRuleBase::CanActive() const
{
	bool Reuslt = true;

	if (GetClass()->IsFunctionImplementedInScript(GET_FUNCTION_NAME_CHECKED(UDataActiveRuleBase, OnCanActive)))
	{
		Reuslt = OnCanActive();
	}

	return Reuslt;
}

void UDataActiveRuleBase::Initialize(UTriggerEffectDataBase* Owner)
{
	if (GetClass()->IsFunctionImplementedInScript(GET_FUNCTION_NAME_CHECKED(UDataActiveRuleBase, OnInitialize)))
	{
		OnInitialize(Owner);
	}

	OwnerTriggerEffectData = Owner;
}