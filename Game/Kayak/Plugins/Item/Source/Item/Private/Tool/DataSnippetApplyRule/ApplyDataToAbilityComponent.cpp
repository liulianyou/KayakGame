#include "ApplyDataToAbilityComponent.h"
#include "ItemComponentBase.h"
#include "ItemDataSnippetBase.h"

#include "GameFramework/Controller.h"
#include "GameFramework/Pawn.h"
#include "AbilitySystemComponent.h"

UDAR_AbilityComponents::UDAR_AbilityComponents(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

UDAR_AbilityComponentsInAvaratorOwner::UDAR_AbilityComponentsInAvaratorOwner(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

UDAR_AbilityComponentsInInventoryOwner::UDAR_AbilityComponentsInInventoryOwner(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

UDAR_AbilityComponentsInItemOwner::UDAR_AbilityComponentsInItemOwner(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

void UDAR_AbilityComponents::GetTargets_Implementation(TArray<UObject*>& Targets) const
{
	Super::GetTargets_Implementation( Targets );
}

void UDAR_AbilityComponents::ApplyData_Implementation()
{
	TArray<UObject*> Targets;
	GetTargets(Targets);

	TArray<UAbilitySystemComponent*> AbilitySystemComponents;

	if (AbilitySystemComponents.Num() == 0)
		return;

	for (int Index = 0; Index < AbilitySystemComponents.Num(); Index++)
	{
		if (AbilitySystemComponents[Index] == nullptr)
			continue;

		for (int EffectIndex = 0; EffectIndex < GetEffects().Num(); EffectIndex)
		{
			AbilitySystemComponents[Index]->ApplyGameplayEffectSpecToSelf(FGameplayEffectSpec(Cast<UGameplayEffect>(GetEffects()[Index]->GetDefaultObject()), FGameplayEffectContextHandle()));
		}

		for (int AbilityIndex = 0; AbilityIndex < GetAbilities().Num(); AbilityIndex)
		{
			if (GetAbilities()[AbilityIndex] == nullptr)
				continue;

		    FGameplayAbilitySpec* AbilitySpec =	AbilitySystemComponents[AbilityIndex]->FindAbilitySpecFromClass( GetAbilities()[AbilityIndex]);

			if (AbilitySpec == nullptr)
			{
				FGameplayAbilitySpec NewAbilitySpec(GetAbilities()[AbilityIndex]);
				FGameplayAbilitySpecHandle AbilitySpecHandle = AbilitySystemComponents[AbilityIndex]->GiveAbilityAndActivateOnce(NewAbilitySpec);
			}
		}

		for (int AttributeIndex = 0; AttributeIndex < GetAttributes().Num(); AttributeIndex)
		{
			if(GetAttributes()[AttributeIndex] == nullptr)
				continue;

			AbilitySystemComponents[Index]->InitStats(GetAttributes()[AttributeIndex], nullptr);
		}
	}
}

void UDAR_AbilityComponentsInAvaratorOwner::GetTargets_Implementation(TArray<UObject*>& Targets) const
{
	Targets.Empty();

	if(GetItemDataSnippet() == nullptr || GetItemDataSnippet()->GetItemRuntimeDataOwner() == nullptr)
		return;

	AActor* Actor = nullptr;

	AController* Controller = GetItemDataSnippet()->GetItemRuntimeDataOwner()->GetAvatarOwner();

	if (Controller != nullptr)
	{
		Actor = Controller->GetPawn();
	}

	if (Actor != nullptr)
	{
		UAbilitySystemComponent* AbilityComponent = Cast<UAbilitySystemComponent>(Actor->GetComponentByClass(UAbilitySystemComponent::StaticClass()));

		if (AbilityComponent != nullptr)
		{
			Targets.Add(AbilityComponent);
		}
	}
}

void UDAR_AbilityComponentsInAvaratorOwner::ApplyData_Implementation()
{
	Super::ApplyData_Implementation();
}

void UDAR_AbilityComponentsInInventoryOwner::GetTargets_Implementation(TArray<UObject*>& Targets) const
{
	Targets.Empty();

	if (GetItemDataSnippet() == nullptr || GetItemDataSnippet()->GetItemRuntimeDataOwner() == nullptr)
		return;

	UItemInventoryComponent* InventoryComponent = GetItemDataSnippet()->GetItemRuntimeDataOwner()->GetInventoryOwner();
	AActor* Actor = nullptr;

	if (InventoryComponent != nullptr)
	{
		Actor = Cast<AActor>(InventoryComponent->GetInventoryOwner());

		if (Actor == nullptr)
		{
			Actor = InventoryComponent->GetOwner();

			if (Actor == nullptr)
			{
				Actor = InventoryComponent->GetTypedOuter<AActor>();
			}
		}
	}

	if (Actor != nullptr)
	{
		UAbilitySystemComponent* AbilityComponent = Cast<UAbilitySystemComponent>(Actor->GetComponentByClass(UAbilitySystemComponent::StaticClass()));

		if (AbilityComponent != nullptr)
		{
			Targets.Add(AbilityComponent);
		}
	}
}

void UDAR_AbilityComponentsInInventoryOwner::ApplyData_Implementation()
{
	Super::ApplyData_Implementation();
}

void UDAR_AbilityComponentsInItemOwner::GetTargets_Implementation(TArray<UObject*>& Targets) const
{
	Targets.Empty();

	if (GetItemDataSnippet() == nullptr || GetItemDataSnippet()->GetItemRuntimeDataOwner() == nullptr)
		return;

	UItemComponentBase* ItemComponent = GetItemDataSnippet()->GetItemRuntimeDataOwner()->GetComponentOwner();

	AActor* Actor = nullptr;

	if (ItemComponent != nullptr)
	{
		Actor = Cast<AActor>(ItemComponent->GetItemOwner());

		if (Actor == nullptr)
		{
			Actor = ItemComponent->GetOwner();

			if (Actor == nullptr)
			{
				Actor = ItemComponent->GetTypedOuter<AActor>();
			}
		}
	}

	if (Actor != nullptr)
	{
		UAbilitySystemComponent* AbilityComponent = Cast<UAbilitySystemComponent>(Actor->GetComponentByClass(UAbilitySystemComponent::StaticClass()));

		if (AbilityComponent != nullptr)
		{
			Targets.Add(AbilityComponent);
		}
	}
}

void UDAR_AbilityComponentsInItemOwner::ApplyData_Implementation()
{
	Super::ApplyData_Implementation();
}