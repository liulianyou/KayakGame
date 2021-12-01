#include "TriggerTask/InteractionTask/InteractionDefinition.h"


FInteractionInfo FInteractionInfo::InvaildValue;

bool operator==(const FInteractionInfo& Left, const FInteractionInfo& Right)
{
	if (Left.Actor == Right.Actor && Left.InteractStage == Right.InteractStage && Left.Layer == Right.Layer)
		return true;
	else
		return false;
}

bool operator==(const FInteractionInfo& Left, const AActor*& Right)
{
	if (Left.Actor == Right)
		return true;
	else
		return false;
}