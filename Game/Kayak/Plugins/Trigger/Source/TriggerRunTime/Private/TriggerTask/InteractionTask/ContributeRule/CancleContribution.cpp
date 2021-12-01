#include "CancleContribution.h"
#include "TT_Interaction.h"
#include "TriggerNetPlayerSupportComponent.h"

UCancleContribution::UCancleContribution(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer),
	RemoveLastContributionCount(0),
	RuntimeRemoveCount(-1)
{
	//Cancel Contribution should never tick
	CanEverTick = false;
	NeedToCheckGamePlayAbility = false;
}

bool UCancleContribution::Execute(float DeltaTime)
{
	return Super::Execute(DeltaTime);
}

void UCancleContribution::AddContributeToRemote(UTriggerNetPlayerSupportComponent* NPSC, UTriggerTaskBase* InteractionTask)
{
	Super::AddContributeToRemote(NPSC, InteractionTask);

	if(NPSC == nullptr)
		return;

	NPSC->Client_CommitCancleInteraction(Cast<UTT_Interaction>(InteractionTask), Contributor, RemoveLastContributionCount, CanEverTick, TickGradualTime, CanExecutedWhenAdded);
}