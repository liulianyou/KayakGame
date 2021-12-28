#include "EquipmentComponent.h"

UEquipmentComponent::UEquipmentComponent(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

void UEquipmentComponent::RegisterComponent()
{
	Super::RegisterComponent();
}

void UEquipmentComponent::UnregisterComponent()
{
	Super::UnregisterComponent();
}

bool UEquipmentComponent::TryToEquip_Implementation()
{
	return false;
}

bool UEquipmentComponent::TryToUnequip_Implementation()
{
	return false;
}


void UEquipmentComponent::ActivateItem()
{
	Super::ActivateItem();
}

void UEquipmentComponent::DeactivateItem()
{
	Super::DeactivateItem();
}

void UEquipmentComponent::StartUse()
{
	Super::StartUse();
}

void UEquipmentComponent::StopUse()
{
	Super::StopUse();
}

void UEquipmentComponent::Abandoned(const FItemScopeChangeInfo& AbandonInfo)
{
	Super::Abandoned(AbandonInfo);
}

void UEquipmentComponent::Gained(const FItemScopeChangeInfo& GainedInfo)
{
	Super::Gained(GainedInfo);
}