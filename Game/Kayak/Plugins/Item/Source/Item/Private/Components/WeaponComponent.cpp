#include "WeaponComponent.h"

UWeaponComponent::UWeaponComponent(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

void UWeaponComponent::RegisterComponent()
{
	Super::RegisterComponent();
}

void UWeaponComponent::UnregisterComponent()
{
	Super::UnregisterComponent();
}

void UWeaponComponent::ActivateItem(const FItemRuntimeDataQueryFilter& QueryFilter)
{
	Super::ActivateItem(QueryFilter);
}

void UWeaponComponent::DeactivateItem(const FItemRuntimeDataQueryFilter& QueryFilter)
{
	Super::DeactivateItem(QueryFilter);
}

void UWeaponComponent::StartUse(const FItemRuntimeDataQueryFilter& QueryFilter)
{
	Super::StartUse(QueryFilter);
}

void UWeaponComponent::StopUse(const FItemRuntimeDataQueryFilter& QueryFilter)
{
	Super::StopUse(QueryFilter);
}

void UWeaponComponent::Abandoned(const FItemScopeChangeInfo& AbandonInfo, const FItemRuntimeDataQueryFilter& QueryFilter)
{
	Super::Abandoned(AbandonInfo, QueryFilter);
}

void UWeaponComponent::Gained(const FItemScopeChangeInfo& GainedInfo, const FItemRuntimeDataQueryFilter& QueryFilter)
{
	Super::Gained(GainedInfo, QueryFilter);
}

void UWeaponComponent::Reload_Implementation()
{
	
}

void UWeaponComponent::StartFire_Implementation()
{
	
}

void UWeaponComponent::StopFire_Implementation()
{
	
}

void UWeaponComponent::StartAim_Implementation()
{
	
}

void UWeaponComponent::EndAim_Implementation()
{

}

bool UWeaponComponent::TryToEquip_Implementation()
{
	return Super::TryToEquip_Implementation();
}

bool UWeaponComponent::TryToUnequip_Implementation()
{
	return Super::TryToUnequip_Implementation();
}