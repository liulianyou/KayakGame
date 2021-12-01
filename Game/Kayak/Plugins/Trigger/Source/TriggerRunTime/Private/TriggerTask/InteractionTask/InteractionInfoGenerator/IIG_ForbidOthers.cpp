#include "IIG_ForbidOthers.h"
#include "GameFramework/Actor.h"

UIIG_ForbidOthersWhenInteracting::UIIG_ForbidOthersWhenInteracting(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

bool UIIG_ForbidOthersWhenInteracting::GenerateInteractionInfo(FInteractionInfo& OutData, FString& InteractState, UTT_Interaction* Task, AActor* Actor)
{
	if (IsInteracting())
	{
		return false;
	}

	return Super::GenerateInteractionInfo(OutData, InteractState, Task, Actor);
}

bool UIIG_ForbidOthersWhenInteracting::IsInteracting()
{
	TArray<FInteractionInfo>& Infos = GetinteractionInfo();

	for (auto Info : Infos)
	{
		if (Info.InteractStage == TriggerInteractionStage::InteractingSatge && Info.Actor != nullptr && Info.Actor->IsValidLowLevel())
		{
			return true;
		}
	}

	return false;
}


UIIG_ForbidOthersWhenActive::UIIG_ForbidOthersWhenActive(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

bool UIIG_ForbidOthersWhenActive::GenerateInteractionInfo(FInteractionInfo& OutData, FString& InteractState, UTT_Interaction* Task, AActor* Actor)
{
	if(IsActivatingInteraction())
		return false;

	return Super::GenerateInteractionInfo(OutData, InteractState, Task, Actor);
}

bool UIIG_ForbidOthersWhenActive::IsActivatingInteraction()
{
	TArray<FInteractionInfo>& Infos = GetinteractionInfo();

	for (auto Info : Infos)
	{
		if (Info.InteractStage == TriggerInteractionStage::ActiveInteractStage && Info.Actor != nullptr && Info.Actor->IsValidLowLevel())
		{
			return true;
		}
	}

	return false;
}