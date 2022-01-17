#include "ItemNetworkSupportComponent.h"
#include "ItemDataBase.h"
#include "ItemComponentBase.h"
#include "ItemDefinition.h"

UItemNetworkSupportComponent::UItemNetworkSupportComponent(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

void UItemNetworkSupportComponent::Server_AddNewItemData_Implementation(UItemDataBase* ItemData, UItemComponentBase* ItemComponent)
{
	if(ItemData == nullptr 
		|| !ItemData->IsValidLowLevel()
		|| ItemComponent == nullptr 
		|| !ItemComponent->IsValidLowLevel())
		return;

	ItemComponent->AddNewItemData(ItemData);
}

void UItemNetworkSupportComponent::Server_RemoveItemData_Implementation(UItemDataBase* ItemData, UItemComponentBase* ItemComponent)
{
	if (ItemData == nullptr
		|| !ItemData->IsValidLowLevel()
		|| ItemComponent == nullptr
		|| !ItemComponent->IsValidLowLevel())
		return;

	ItemComponent->RemoveItemData(ItemData);
}

void UItemNetworkSupportComponent::Server_RemoveItemRuntimeData_Implementation(UItemRuntimeDataBase* ItemRuntimeData, UItemComponentBase* ItemComponent)
{
	if (ItemRuntimeData == nullptr
		|| !ItemRuntimeData->IsValidLowLevel()
		|| ItemComponent == nullptr
		|| !ItemComponent->IsValidLowLevel())
		return;

	if (ItemRuntimeData->GetReferencedItemData() == nullptr)
	{
		UE_LOG(LogItem, Warning, TEXT("Try to remove the target runtime data: %s which have no referenced item data from item compoment"), *ItemRuntimeData->GetPathName())
		return;
	}	

	ItemComponent->RemoveItemData(ItemRuntimeData->GetReferencedItemData());
}

void UItemNetworkSupportComponent::Server_AddItemRuntimeData_Implementation(UItemRuntimeDataBase* ItemRuntimeData, UItemComponentBase* ItemComponent)
{
	if (ItemRuntimeData == nullptr
		|| !ItemRuntimeData->IsValidLowLevel()
		|| ItemComponent == nullptr
		|| !ItemComponent->IsValidLowLevel())
		return;

	if (ItemRuntimeData->GetReferencedItemData() == nullptr)
	{
		UE_LOG(LogItem, Warning, TEXT("Try to remove the target runtime data: %s which have no referenced item data from item compoment"), *ItemRuntimeData->GetPathName());
		return;
	}

	ItemComponent->AddNewItemData(ItemRuntimeData->GetReferencedItemData());
}