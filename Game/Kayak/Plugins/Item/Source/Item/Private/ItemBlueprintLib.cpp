#include "ItemBlueprintLib.h"
#include "ItemManager.h"
#include "ItemGlobal.h"
#include "ItemInventoryInterface.h"
#include "ItemInventroyComponent.h"
#include "Item.h"

#include "GameFramework/Actor.h"

UItemBlueprintLib::UItemBlueprintLib(const FObjectInitializer& ObjectInitialzier)
	:Super(ObjectInitialzier)
{

}

UItemManager* UItemBlueprintLib::GetItemManager()
{
	return GetItemGlobal()->GetItemManage();
}

UItemGlobal* UItemBlueprintLib::GetItemGlobal()
{
	return IItemModuleInterface::Get().GetItemGlobal();
}

UItemInventoryComponent* UItemBlueprintLib::GetItemInventoryComponent(UObject* Object)
{
	if (Object == nullptr || !Object->IsValidLowLevel())
	{
		UE_LOG(LogItem, Display, TEXT("Try to get the inentory component from the invalid object!!"));
		return nullptr;
	}
		
	UItemInventoryComponent* Result = nullptr;

	/*
	* If the object don't inherit from item interface, I need to check weather it is one actor and weather there is one item inventory component in it
	*/
	if (!Object->GetClass()->ImplementsInterface(UItemInventoryInterface::StaticClass()))
	{
		AActor* Actor = Cast<AActor>(Object);

		Result = Cast<UItemInventoryComponent>(Actor->GetComponentByClass(UItemInventoryComponent::StaticClass()));

		if (Result == nullptr)
		{
			UE_LOG(LogItem, Display, TEXT("Try to get the inentory component from the actor:%s which have not inventory component in it!!"), *Actor->GetPathName());
		}
	}
	else
	{
		IItemInventoryInterface* ItemInventory = static_cast<IItemInventoryInterface*>(Object->GetInterfaceAddress(UItemInventoryInterface::StaticClass()));

		/*
		* Should never passed
		*/
		if(ItemInventory == nullptr)
			return nullptr;
		
		Result = ItemInventory->GetItemInventoryComponent();
	}

	return Result;
}

UItemComponentBase* UItemBlueprintLib::GetItemComponent(UObject* Object)
{
	if (Object == nullptr || !Object->IsValidLowLevel())
	{
		UE_LOG(LogItem, Display, TEXT("Try to get the item component from the invalid object!!"));
		return nullptr;
	}

	UItemComponentBase* Result = nullptr;

	/*
	* If the object don't inherit from item interface, I need to check weather it is one actor and weather there is one item component in it
	*/
	if (!Object->GetClass()->ImplementsInterface(UItemInterface::StaticClass()))
	{
		AActor* Actor = Cast<AActor>(Object);

		Result = Cast<UItemComponentBase>(Actor->GetComponentByClass(UItemComponentBase::StaticClass()));

		if (Result == nullptr)
		{
			UE_LOG(LogItem, Display, TEXT("Try to get the item component from the actor:%s which have not inventory component in it!!"), *Actor->GetPathName());
		}
	}
	else
	{
		IItemInterface* Item = static_cast<IItemInterface*>(Object->GetInterfaceAddress(UItemInterface::StaticClass()));

		/*
		* Should never passed
		*/
		if (Item == nullptr)
			return nullptr;

		Result = Item->GetItemComponent();
	}

	return Result;
}

UItemNetworkSupportComponent* UItemBlueprintLib::GetItemNetworkSupportComponent(UObject* Object)
{
	UItemNetworkSupportComponent* Result = nullptr;

	if(Object == nullptr)
		return Result;

	AActor* Actor = Cast<AActor>(Object);

	if(Actor == nullptr)
		return Result;

	Result = Cast<UItemNetworkSupportComponent>(Actor->FindComponentByClass(UItemNetworkSupportComponent::StaticClass()));

	if(Result != nullptr)
		return Result;

	APawn* Pawn = Cast<APawn>(Object);

	if(Pawn == nullptr)
		return Result;

	Result = Cast<UItemNetworkSupportComponent>(Pawn->FindComponentByClass(UItemNetworkSupportComponent::StaticClass()));

	return Result;
}