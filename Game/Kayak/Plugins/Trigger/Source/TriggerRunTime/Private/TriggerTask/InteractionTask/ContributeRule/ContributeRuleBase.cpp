#include "TriggerTask/InteractionTask/ContributeRule/ContributeRuleBase.h"

UContributeRuleBase::UContributeRuleBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer),
	TickTime(0.0f)
{

}

bool UContributeRuleBase::Execute(float DeltaTime)
{
	TickTime += DeltaTime;

	//When this contribution don't support tick, I assume it always execute successfully
	if (!CanEverTick)
		return true;

	OnExecute(DeltaTime);

	if (TickTime >= TickGradualTime)
	{
		TickTime = 0.0f;
		return true;
	}
	else
	{
		return false;
	}
}


void UContributeRuleBase::AddContributeToRemote(UTriggerNetPlayerSupportComponent* NPSC, UTriggerTaskBase* InteractionTask)
{
	OnAddContributeToRemote(NPSC, InteractionTask);
}
