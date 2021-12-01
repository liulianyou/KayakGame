#include "InteractionRuleData/InteractionRuleData_Number.h"

UInteractionRuleData_Number::UInteractionRuleData_Number(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer),
	Value(0.f),
	CurrentValue(0.f)
{

}

void UInteractionRuleData_Number::PostInitProperties()
{
	Super::PostInitProperties();

	CurrentValue = Value;
}

void UInteractionRuleData_Number::Reset()
{
	CurrentValue = Value;
}

bool UInteractionRuleData_Number::IsProcessing()
{
	return FMath::Abs(CurrentValue - Value) > 0.0001f; 
}