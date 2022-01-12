#include "ItemInventroyComponent.h"
#include "ItemComponent.h"
#include "ItemDataBase.h"
#include "Net/UnrealNetwork.h"

bool FItemInfo::IsValid() const
{
	return !!Item && !PendingRemoved && Item->GetItemComponent() != nullptr;
}

int FItemContainer::AddNewItem(TScriptInterface<IItemInterface>)
{
	return INDEX_NONE;
}

int FItemContainer::RemoveItem(TScriptInterface<IItemInterface>)
{
	return INDEX_NONE;
}

int FItemContainer::GetItemNum()
{
	return INDEX_NONE;
}

void FItemContainer::IncrementLock()
{
	LockCount++;
}

void FItemContainer::DecrementLock()
{
	if(--LockCount != 0)
		return;
}


UItemInventoryComponent::UItemInventoryComponent(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	SetIsReplicatedByDefault(true);


}

void UItemInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UItemInventoryComponent, ItemContainer);
}

void UItemInventoryComponent::OnRegister()
{
	Super::OnRegister();
}

void UItemInventoryComponent::OnUnregister()
{
	for (auto IT = ItemContainer.CreateIterator(); IT; ++IT)
	{
		(*IT).Item->GetItemComponent()->SetAvatarOwner(nullptr);
	}

	Super::OnUnregister();
}

void UItemInventoryComponent::GetAllItems(TArray<TScriptInterface<IItemInterface>>& OutItems) const
{
	OutItems.Empty();

	for (auto IT = ItemContainer.CreateConstIterator(); IT; ++IT)
	{
		OutItems.Add((*IT).Item);
	}
}

void UItemInventoryComponent::GetAllItemsWithClass(TSubclassOf<UItemRuntimeData> ItemType, TArray<TScriptInterface<IItemInterface>>& OutItems) const
{
	OutItems.Empty();


	for (auto IT = ItemContainer.CreateConstIterator(); IT; ++IT)
	{
		UItemComponentBase* ItemComponent = (*IT).Item->GetItemComponent();

		if(ItemComponent == nullptr)
			continue;

		//UItemRuntimeDataBase* RuntimeData = ItemComponent->GetItemRuntimeData();

		//if(RuntimeData == nullptr)
		//	continue;

		//if (ItemType.Get() == nullptr || ItemType->IsA(RuntimeData->GetClass()))
		//{
		//	OutItems.AddUnique(*IT);
		//}
	}
}

int UItemInventoryComponent::AddNewItem(TScriptInterface<IItemInterface> NewItem)
{
	if (NewItem == nullptr)
	{
		return INDEX_NONE;
	}

	return ItemContainer.AddNewItem(NewItem);
}


int UItemInventoryComponent::AddNewItemWithItemClass(TSubclassOf<UObject> ItemType)
{
	if(ItemType == nullptr)
		return INDEX_NONE;

	if (!ItemType->ImplementsInterface(UItemInterface::StaticClass()))
		return INDEX_NONE;

	UObject* NewItemObject = NewObject<UObject>( this, ItemType );

	if(NewItemObject == nullptr)
		return INDEX_NONE;

	TScriptInterface<IItemInterface> NewItem;
	NewItem.SetObject(NewItemObject);
	NewItem.SetInterface( ItemType->GetInterfaceAddress(UItemInterface::StaticClass()) );

	return ItemContainer.AddNewItem(NewItem);
}

int UItemInventoryComponent::RemoveItem(TScriptInterface<IItemInterface> RemovedItem, bool DestroyItem /*= false*/)
{
	//If this is invalid item then do nothing
	if(RemovedItem == nullptr)
		return INDEX_NONE;

	int Result = ItemContainer.RemoveItem(RemovedItem);

	return Result;
}

/*
* If the item type is null means it will remove all item
* As the item type will not be invalid if you set at common situation
* the nullptr is user want to use it null
*/
int UItemInventoryComponent::RemoveItemWithDataClass(TSubclassOf<UItemDataBase> ItemType, bool CheckExactClass /*= false*/, bool DestroyItem /*= false*/)
{
	return INDEX_NONE;
}


int UItemInventoryComponent::RemoveItemWithItemClass(TSubclassOf<UObject> ItemType, bool CheckExactClass /*= false*/, bool DestroyItem /*= false*/)
{
	return INDEX_NONE;
}

