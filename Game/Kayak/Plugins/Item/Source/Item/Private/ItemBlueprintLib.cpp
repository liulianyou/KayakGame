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

		if (Actor != nullptr)
		{
			Result = Cast<UItemInventoryComponent>(Actor->GetComponentByClass(UItemInventoryComponent::StaticClass()));

			if (Result == nullptr)
			{
				UE_LOG(LogItem, Display, TEXT("Try to get the inentory component from the actor:%s which have no inventory component in it!!"), *Actor->GetPathName());
				
				Actor = Actor->GetOwner();

				Result = GetItemInventoryComponent(Actor);
			}
			
		}
		
		if(Result == nullptr)
		{
			UActorComponent* ActorComponent = Cast<UActorComponent>(Object);

			if (ActorComponent != nullptr)
			{
				Actor = ActorComponent->GetOwner();

				Result = GetItemInventoryComponent(Actor);
			}
		}

		if (Result == nullptr)
		{
			Result = GetItemInventoryComponent(Object->GetOuter());
		}
	}
	else
	{
		IItemInventoryInterface* ItemInventory = static_cast<IItemInventoryInterface*>(Object->GetInterfaceAddress(UItemInventoryInterface::StaticClass()));


		if (ItemInventory == nullptr)
		{
			Result = IItemInventoryInterface::Execute_OnGetItemInventoryComponent(Object);
		}
		else
		{
			Result = ItemInventory->GetItemInventoryComponent();
		}
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

		if (Actor != nullptr)
		{
			Result = Cast<UItemComponentBase>(Actor->GetComponentByClass(UItemComponentBase::StaticClass()));

			if (Result == nullptr)
			{
				UE_LOG(LogItem, Display, TEXT("Try to get the item component from the actor:%s which have not item component in it!!"), *Actor->GetPathName());
			}
		}
		else
		{
			UE_LOG(LogItem, Display, TEXT("Try to get the item component from object:%s do not inhterited IItemInterface and is not one actor!!"), *Object->GetPathName());
		}
	}
	else
	{
		IItemInterface* ItemInterface = static_cast<IItemInterface*>(Object->GetInterfaceAddress(UItemInterface::StaticClass()));

		/*
		* Should never passed
		*/
		if (ItemInterface == nullptr)
		{
			Result = IItemInterface::Execute_OnGetItemComponent(Object);
		}
		else
		{
			Result = ItemInterface->GetItemComponent();
		}
		
		if (Result == nullptr)
		{
			UE_LOG(LogItem, Display, TEXT("Try to get the item component from object:%s do not impelement GetItemComonent!!"), *Object->GetPathName());
		}
	}

	return Result;
}

UItemNetworkSupportComponent* UItemBlueprintLib::GetItemNetworkSupportComponent(UObject* Object, UObject* WorldContent)
{
	UItemNetworkSupportComponent* Result = nullptr;

	if(Object == nullptr)
		return Result;

	AActor* Actor = Cast<AActor>(Object);

	if (Actor != nullptr)
	{
		Result = Cast<UItemNetworkSupportComponent>(Actor->FindComponentByClass(UItemNetworkSupportComponent::StaticClass()));
	}
	
	if(Result != nullptr)
		return Result;

	APawn* Pawn = Cast<APawn>(Object);

	if (Pawn != nullptr)
	{
		Result = Cast<UItemNetworkSupportComponent>(Pawn->FindComponentByClass(UItemNetworkSupportComponent::StaticClass()));
	}

	if(Result != nullptr)
		return Result;

	AController* Controller = nullptr;

	if (Pawn != nullptr)
	{
		Controller = Pawn->GetController();

		if (Controller != nullptr)
		{
			Result = Cast<UItemNetworkSupportComponent>(Controller->FindComponentByClass(UItemNetworkSupportComponent::StaticClass()));
		}
	}

	if(Result != nullptr)
		return Result;

	UWorld * World = GEngine->GetWorldFromContextObject(WorldContent, EGetWorldErrorMode::LogAndReturnNull);

	if (World != nullptr)
	{
		Controller = World->GetFirstPlayerController();

		if (Controller != nullptr)
		{
			Result = Cast<UItemNetworkSupportComponent>(Controller->FindComponentByClass(UItemNetworkSupportComponent::StaticClass()));
		}
	}

	return Result;
}