#include "AbilityComponentsGenerate.h"
#include "ItemComponentBase.h"

#include "GameFramework/Controller.h"
#include "GameFramework/Pawn.h"
#include "AbilitySystemComponent.h"

UAbilityComponentsGenerate::UAbilityComponentsGenerate(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

UAbilityComponentsInAvaratorOwner::UAbilityComponentsInAvaratorOwner(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

UAbilityComponentsInInventoryOwner::UAbilityComponentsInInventoryOwner(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

UAbilityComponentsInItemOwner::UAbilityComponentsInItemOwner(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

UAbilityComponentsCustomize::UAbilityComponentsCustomize(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

void UAbilityComponentsGenerate::GetTargets_Implementation(TArray<UObject*>& Targets, const UItemRuntimeData* RuntimeData) const
{
	Super::GetTargets_Implementation( Targets, RuntimeData );
}

void UAbilityComponentsInAvaratorOwner::GetTargets_Implementation(TArray<UObject*>& Targets, const UItemRuntimeData* RuntimeData) const
{
	Targets.Empty();

	if(RuntimeData == nullptr)
		return;

	AActor* Actor = nullptr;

	AController* Controller = RuntimeData->GetAvatarOwner();

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

void UAbilityComponentsInInventoryOwner::GetTargets_Implementation(TArray<UObject*>& Targets, const UItemRuntimeData* RuntimeData) const
{
	Targets.Empty();

	if (RuntimeData == nullptr)
		return;

	UItemInventoryComponent* InventoryComponent = RuntimeData->GetInventoryOwner();
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

void UAbilityComponentsInItemOwner::GetTargets_Implementation(TArray<UObject*>& Targets, const UItemRuntimeData* RuntimeData) const
{
	Targets.Empty();

	if (RuntimeData == nullptr)
		return;

	UItemComponentBase* ItemComponent = RuntimeData->GetComponentOwner();

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

void UAbilityComponentsCustomize::GetTargets_Implementation(TArray<UObject*>& Targets, const UItemRuntimeData* RuntimeData) const
{
	
}