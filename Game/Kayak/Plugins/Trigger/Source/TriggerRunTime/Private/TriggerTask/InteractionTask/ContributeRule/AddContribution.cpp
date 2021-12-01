#include "AddContribution.h"
#include "TT_Interaction.h"
#include "TriggerNetPlayerSupportComponent.h"

UAddContribution::UAddContribution(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	
}

void UAddContribution::AddContributeToRemote(UTriggerNetPlayerSupportComponent* NPSC, UTriggerTaskBase* InteractionTask)
{
	Super::AddContributeToRemote(NPSC, InteractionTask);

	if(NPSC ==  nullptr)
		return;

	NPSC->Client_CommitAddInteraction(Cast<UTT_Interaction>(InteractionTask), Contributor, CanEverTick, TickGradualTime, CanExecutedWhenAdded);
}