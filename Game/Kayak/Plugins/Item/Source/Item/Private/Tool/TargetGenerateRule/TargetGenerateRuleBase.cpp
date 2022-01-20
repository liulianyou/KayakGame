#include "TargetGenerateRuleBase.h"
#include "ItemDefinition.h"

UTargetGenerateRuleBase::UTargetGenerateRuleBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	
}

void UTargetGenerateRuleBase::GetTargets_Implementation(TArray<UObject*>& Targets, const UItemRuntimeData* RuntimeData) const
{
	Targets.Empty();

	UE_LOG(LogItem, Warning, TEXT("Please implement GetTargets in the child class %s."), *GetClass()->GetName());
}