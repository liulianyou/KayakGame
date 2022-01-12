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


void UEquipmentComponent::ActivateItem(int Index)
{
	Super::ActivateItem(Index);
}

void UEquipmentComponent::DeactivateItem(int Index)
{
	Super::DeactivateItem(Index);
}

void UEquipmentComponent::StartUse(int Index)
{
	Super::StartUse(Index);
}

void UEquipmentComponent::StopUse(int Index)
{
	Super::StopUse(Index);
}

void UEquipmentComponent::Abandoned(const FItemScopeChangeInfo& AbandonInfo)
{
	Super::Abandoned(AbandonInfo);
}

void UEquipmentComponent::Gained(const FItemScopeChangeInfo& GainedInfo)
{
	Super::Gained(GainedInfo);
}