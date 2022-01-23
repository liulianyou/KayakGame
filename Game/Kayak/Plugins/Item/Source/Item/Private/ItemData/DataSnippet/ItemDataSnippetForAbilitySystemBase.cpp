#include "ItemDataSnippetForAbilitySystemBase.h"
#include "Net/UnrealNetwork.h"

UItemDataSnippetForAbilitySystemBase::UItemDataSnippetForAbilitySystemBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

void UItemDataSnippetForAbilitySystemBase::BeginDestroy()
{
	Super::BeginDestroy();
}

void UItemDataSnippetForAbilitySystemBase::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UItemDataSnippetForAbilitySystemBase, Abilities);
	DOREPLIFETIME(UItemDataSnippetForAbilitySystemBase, Effects);
	DOREPLIFETIME(UItemDataSnippetForAbilitySystemBase, Attributes);
}

void UItemDataSnippetForAbilitySystemBase::OnRep_Effects(const TArray<TSubclassOf<UGameplayEffect>>& OldValue )
{
	ITEMPROPERYREPNOTIFY(UItemDataSnippetForAbilitySystemBase, TArray<TSubclassOf<UGameplayEffect>>, Effects, OldValue);
}

void UItemDataSnippetForAbilitySystemBase::OnRep_Abilities( const TArray<TSubclassOf<UGameplayAbility>>& OldValue )
{
	ITEMPROPERYREPNOTIFY(UItemDataSnippetForAbilitySystemBase, TArray<TSubclassOf<UGameplayAbility>>, Abilities, OldValue);
}

void UItemDataSnippetForAbilitySystemBase::OnRep_Attributes(const TArray<TSubclassOf<UAttributeSet>>& OldValue)
{
	ITEMPROPERYREPNOTIFY(UItemDataSnippetForAbilitySystemBase, TArray<TSubclassOf<UAttributeSet>>, Attributes, OldValue);
}