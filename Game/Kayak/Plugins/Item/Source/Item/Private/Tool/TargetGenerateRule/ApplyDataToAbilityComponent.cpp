#include "ApplyDataToAbilityComponent.h"
#include "ItemComponentBase.h"

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
	}
}

void UDAR_AbilityComponentsInAvaratorOwner::GetTargets_Implementation(TArray<UObject*>& Targets) const
{
	Targets.Empty();

	if(GetItemRuntimeData() == nullptr)
		return;

	AActor* Actor = nullptr;

	AController* Controller = GetItemRuntimeData()->GetAvatarOwner();

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

	if (GetItemRuntimeData() == nullptr)
		return;

	UItemInventoryComponent* InventoryComponent = GetItemRuntimeData()->GetInventoryOwner();
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

	if (GetItemRuntimeData() == nullptr)
		return;

	UItemComponentBase* ItemComponent = GetItemRuntimeData()->GetComponentOwner();

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