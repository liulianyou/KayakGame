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

void UWeaponComponent::ActivateItem(int Index)
{
	Super::ActivateItem(Index);
}

void UWeaponComponent::DeactivateItem(int Index)
{
	Super::DeactivateItem(Index);
}

void UWeaponComponent::StartUse(int Index)
{
	Super::StartUse(Index);
}

void UWeaponComponent::StopUse(int Index)
{
	Super::StopUse(Index);
}

void UWeaponComponent::Abandoned(const FItemScopeChangeInfo& AbandonInfo)
{
	Super::Abandoned(AbandonInfo);
}

void UWeaponComponent::Gained(const FItemScopeChangeInfo& GainedInfo)
{
	Super::Gained(GainedInfo);
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