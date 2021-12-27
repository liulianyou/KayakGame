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

void UWeaponComponent::ActivateItem()
{
	Super::ActivateItem();
}

void UWeaponComponent::DeactivateItem()
{
	Super::DeactivateItem();
}

void UWeaponComponent::StartUse()
{
	Super::StartUse();
}

void UWeaponComponent::StopUse()
{
	Super::StopUse();
}

void UWeaponComponent::Abandoned(const FItemScopeChangeInfo& AbandonInfo)
{
	Super::Abandoned(AbandonInfo);
}

void UWeaponComponent::Gained(const FItemScopeChangeInfo& GainedInfo)
{
	Super::Gained(GainedInfo);
}