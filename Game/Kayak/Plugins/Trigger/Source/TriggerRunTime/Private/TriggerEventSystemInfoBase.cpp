#include "TriggerEventSystemInfoBase.h"
#include "Engine/ActorChannel.h"
#include "Net/UnrealNetwork.h"
#include "OperationInformationBase.h"
#include "GameFramework/GameModeBase.h"
#include "TriggerDefinition.h"
#include "TriggerBlueprintLib.h"
#include "TriggerManager.h"
#include "OperationInformationManager.h"

ATriggerEventSystemInfoBase::ATriggerEventSystemInfoBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	SetReplicates(true);
	bAlwaysRelevant = true;
	SetReplicatingMovement(false);

	bNetLoadOnClient = false;

	OperationContainer.Initialzie(this);
}

void ATriggerEventSystemInfoBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ATriggerEventSystemInfoBase, OperationContainer);
}

void ATriggerEventSystemInfoBase::BeginDestroy()
{
	if (UTriggerBlueprintLib::GetTriggerManager() != nullptr)
	{
		UTriggerBlueprintLib::GetTriggerManager()->SetTriggerEventSystemInfo(nullptr, this);

		UTriggerBlueprintLib::GetOperationInfoManager()->Empty();
	}

	Super::BeginDestroy();
}

bool ATriggerEventSystemInfoBase::ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags)
{
	bool WrtoeSomething = Super::ReplicateSubobjects(Channel, Bunch, RepFlags);

	for (int i = 0; i < OperationContainer.GetItems().Num(); i++)
	{
		if (OperationContainer.GetItems()[i].ReplicatedOperationInfo != nullptr && OperationContainer.GetItems()[i].ReplicatedOperationInfo->IsValidLowLevel())
		{
			OperationContainer.GetItems()[i].ReplicatedOperationInfo->ReplicateSubobjects(Channel, Bunch, RepFlags);

			WrtoeSomething |= Channel->ReplicateSubobject(OperationContainer.GetItems()[i].ReplicatedOperationInfo, *Bunch, *RepFlags);
		}
	}

	return WrtoeSomething;
}

void ATriggerEventSystemInfoBase::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	if (UTriggerBlueprintLib::GetTriggerManager() != nullptr)
	{
		UTriggerBlueprintLib::GetTriggerManager()->SetTriggerEventSystemInfo(this);
	}
}

void ATriggerEventSystemInfoBase::OnRep_TriggerTags(const FGameplayTagContainer& OldValue)
{
	
}

void ATriggerEventSystemInfoBase::OnRep_OperationContainer(const FOperationInfoContainer& OldValue)
{
	
}