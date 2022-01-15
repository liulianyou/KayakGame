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


void UEquipmentComponent::ActivateItem(const FItemRuntimeDataQueryFilter& QueryFilter)
{
	Super::ActivateItem(QueryFilter);
}

void UEquipmentComponent::DeactivateItem(const FItemRuntimeDataQueryFilter& QueryFilter)
{
	Super::DeactivateItem(QueryFilter);
}

void UEquipmentComponent::StartUse(const FItemRuntimeDataQueryFilter& QueryFilter)
{
	Super::StartUse(QueryFilter);
}

void UEquipmentComponent::StopUse(const FItemRuntimeDataQueryFilter& QueryFilter)
{
	Super::StopUse(QueryFilter);
}

void UEquipmentComponent::Abandoned(const FItemScopeChangeInfo& AbandonInfo, const FItemRuntimeDataQueryFilter& QueryFilter)
{
	Super::Abandoned(AbandonInfo, QueryFilter);
}

void UEquipmentComponent::Gained(const FItemScopeChangeInfo& GainedInfo, const FItemRuntimeDataQueryFilter& QueryFilter)
{
	Super::Gained(GainedInfo, QueryFilter);
}