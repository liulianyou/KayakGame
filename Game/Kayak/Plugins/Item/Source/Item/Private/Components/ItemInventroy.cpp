#include "ItemInventroyComponent.h"
#include "ItemComponent.h"
#include "ItemDataBase.h"
#include "Net/UnrealNetwork.h"

TScriptInterface<IItemInterface> FItemContainer::operator[](int index)
{
	return Items[i];
}

int FItemContainer::AddNewItem(TScriptInterface<IItemInterface>)
{
	
}

int FItemContainer::RemoveItem(TScriptInterface<IItemInterface>)
{
	
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
		if(IT == nullptr || IT->GetItemComponent() == nullptr)
			continue;
	
		IT->GetItemComponent()->SetAvatarOwner(nullptr);
	}

	Super::OnUnregister();
}

void UItemInventoryComponent::GetAllItems(TArray<TScriptInterface<IItemInterface>>& OutItems) const
{
	OutItems.Empty();

	for (auto IT = ItemContainer.CreateConstIterator(); IT; ++IT)
	{
		if(!(*IT).IsValid())
			continue;

		OutItems.Add(*IT);
	}
}

void UItemInventoryComponent::GetAllItemsWithClass(TSubclassOf<UItemRuntimeData> ItemType, TArray<TScriptInterface<IItemInterface>>& OutItems) const
{
	OutItems.Empty();


	for (auto IT = ItemContainer.CreateConstIterator(); IT; ++IT)
	{
		if (!(*IT).IsValid())
			continue;

		UItemComponentBase* ItemComponent = (*IT)->GetItemComponent();

		if(ItemComponent == nullptr)
			continue;

		UItemRuntimeDataBase* RuntimeData = ItemComponent->GetItemRuntimeData();

		if(RuntimeData == nullptr)
			continue;

		if (ItemType.Get() == nullptr || ItemType->IsA(RuntimeData->GetClass()))
		{
			OutItems.AddUnique(*IT);
		}
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

	UObject* NewItem = NewObject<UObject>( this, ItemType );

	if(NewItem == nullptr)
		return INDEX_NONE;

	TScriptInterface<IItemInterface> NewItem;
	NewItem.SetObject(NewItem);
	NewItem.SetInterface( ItemType->GetInterfaceAddress() );

	return ItemContainer.AddNewItem(NewItem);
}

int UItemInventoryComponent::RemoveItem(TScriptInterface<IItemInterface> RemovedItem, bool DestroyItem /*= false*/)
{
	//If this is invalid item then do nothing
	if(RemovedItem == nullptr)
		return INDEX_NONE;

	int Result = ItemContainer.RemoveItem(RemovedItem);

	RemovedItem->Destroy();

	return Result;
}

/*
* If the item type is null means it will remove all item
* As the item type will not be invalid if you set at common situation
* the nullptr is user want to use it null
*/
int UItemInventoryComponent::RemoveItemWithDataClass(TSubclassOf<UItemRuntimeData> ItemType, bool CheckExactClass /*= false*/, bool DestroyItem /*= false*/)
{
	for (auto IT = ItemContainer.CreateIterator(); IT; ++IT)
	{
		if (IT == nullptr)
		{
			IT.RemoveCurrent();

			continue;
		}

		if (IT->GetItemComponent() == nullptr)
		{
			UE_LOG(LogItem, Warning, TEXT(" The target item:%s must have one item component "), *IT->GetClass()->GetName());

			IT.RemoveCurrent();

			continue;
		}

		if (IT->GetItemComponent()->GetItemRuntimeData() == nullptr)
		{
			UE_LOG(LogItem, Warning, TEXT(" The target item:%s must have one runtime data!! "), *IT->GetPathName());

			IT.RemoveCurrent();

			continue;
		}

		bool IsMatchedItem = false;

		if (ItemType == nullptr)
		{
			IsMatchedItem = true;
		}
		else
		{
			if (CheckExactClass )
			{
				if (IT->GetItemComponent()->GetItemRuntimeData()->GetClass() == ItemType)
				{
					IsMatchedItem = true;
				}
			}
			else if(IT->GetItemComponent()->GetItemRuntimeData()->GetClass()->IsChildOf(ItemType))
			{
				IsMatchedItem = true;
			}
		}

		if (IsMatchedItem)
		{
			IT->Destroy();

			IT.RemoveCurrent();
		}
	}

	return ItemContainer.GetItemNum();
}


int UItemInventoryComponent::RemoveItemWithItemClass(TSubclassOf<UObject> ItemType, bool CheckExactClass /*= false*/, bool DestroyItem /*= false*/)
{
	for (auto IT = ItemContainer.CreateIterator(); IT; ++IT)
	{
		if (IT == nullptr)
		{
			IT.RemoveCurrent();

			continue;
		}

		bool IsMatchedItem = false;

		if (CheckExactClass)
		{
			if (IT->GetItemComponent()->GetClass() == ItemType)
			{
				IsMatchedItem = true;
			}
		}
		else if (IT->GetClass()->IsChildOf(ItemType))
		{
			IsMatchedItem = true;
		}

		if (IsMatchedItem)
		{
			IT->Destroy();
			IT.RemoveCurrent();
		}
	}

	return ItemContainer.GetItemNum();
}

