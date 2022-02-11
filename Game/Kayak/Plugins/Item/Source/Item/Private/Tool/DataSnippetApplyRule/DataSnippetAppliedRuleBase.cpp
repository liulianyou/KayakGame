#include "DataSnippetAppliedRuleBase.h"
#include "ItemDefinition.h"

UDataSnippetAppliedRuleBase::UDataSnippetAppliedRuleBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	
}

void UDataSnippetAppliedRuleBase::GetTargets_Implementation(TArray<UObject*>& Targets) const
{
	Targets.Empty();

	UE_LOG(LogItem, Warning, TEXT("Please implement GetTargets in the child class %s."), *GetClass()->GetName());
}

void UDataSnippetAppliedRuleBase::ApplyData_Implementation()
{
	UE_LOG(LogItem, Warning, TEXT("Please implement ApplyData in the child class %s."), *GetClass()->GetName());
}

void UDataSnippetAppliedRuleBase::Initialize(UItemDataSnippetBase* DataSnippet)
{
	DataSnippetOwner = DataSnippet;
}