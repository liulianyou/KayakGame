#include "DataAppliedRuleBase.h"
#include "ItemDefinition.h"

UDataAppliedRuleBase::UDataAppliedRuleBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	
}

void UDataAppliedRuleBase::GetTargets_Implementation(TArray<UObject*>& Targets) const
{
	Targets.Empty();

	UE_LOG(LogItem, Warning, TEXT("Please implement GetTargets in the child class %s."), *GetClass()->GetName());
}

void UDataAppliedRuleBase::ApplyData_Implementation()
{
	UE_LOG(LogItem, Warning, TEXT("Please implement ApplyData in the child class %s."), *GetClass()->GetName());
}

void UDataAppliedRuleBase::Initialize(UItemDataSnippetBase* DataSnippet)
{
	DataSnippetOwner = DataSnippet;
}