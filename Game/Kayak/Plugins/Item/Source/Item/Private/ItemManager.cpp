#include "ItemManager.h"
#include "ItemDataBase.h"
#include "ItemDefinition.h"
#include "ItemComponent.h"
#include "GameFramework/Actor.h"

UItemManager::UItemManager(const FObjectInitializer& ObjectInitialzier)
	:Super(ObjectInitialzier)
{
	
}

void UItemManager::Initialize()
{
	OnInitialize();
}

UItemDataBase* UItemManager::FindOrCreateNewItemData(TSubclassOf<UItemDataBase> ItemDataClass)
{
	if (ItemDataClass == nullptr)
	{
		return nullptr;
	}

	for (auto IT = ItemDatas.CreateConstIterator(); IT; ++IT)
	{
		if ((*IT)->GetClass() == ItemDataClass)
		{
			return *IT;
		}
	}

	UItemDataBase* NewItemData = NewObject<UItemDataBase>(this, ItemDataClass);

	if (NewItemData)
	{
		NewItemData->Initialize();
		ItemDatas.Add(NewItemData);
	}

	return NewItemData;
}

void UItemManager::RemoveItemDataByClass(TSubclassOf<UItemDataBase> ItemDataClass, bool IgnoreChildClasses/* = false*/)
{
	for (auto IT = ItemDatas.CreateIterator(); IT; ++IT)
	{
		if (ItemDataClass == nullptr||
			(*IT)->GetClass() == ItemDataClass||
			(!IgnoreChildClasses && (*IT)->GetClass()->IsChildOf(ItemDataClass)))
		{
			(*IT)->Finialize();
			IT.RemoveCurrent();
		}
	}
}

void UItemManager::RemoveItemDataByInstance(UItemDataBase* ItemData)
{
	for (auto IT = ItemDatas.CreateIterator(); IT; ++IT)
	{
		if (ItemData == nullptr || 
			(*IT) == ItemData)
		{
			(*IT)->Finialize();
			IT.RemoveCurrent();
		}
	}
}

TScriptInterface<IItemInterface> UItemManager::CreateNewItem(TSubclassOf<UObject> ItemClass)
{
	if(ItemClass == nullptr)
		return nullptr;

	if (!ItemClass->ImplementsInterface(UItemInterface::StaticClass()))
	{
		UE_LOG(LogItem, Warning, TEXT("Try to create new Item with class:%s do not inherited from ItemInterface!! "), *ItemClass->GetName());
		return nullptr;
	}

	UObject* NewItem = nullptr;

	if (ItemClass->IsChildOf(AActor::StaticClass()))
	{
		 NewItem = GetWorld()->SpawnActor<AActor>(ItemClass);
	}
	else
	{
		NewItem = NewObject<UObject>( this, ItemClass);
	}

	if (NewItem == nullptr)
	{
		return nullptr;
	}

	TScriptInterface<IItemInterface> Result;

	IItemInterface* ItemInterface = Cast<IItemInterface>(NewItem);

	if (ItemInterface == nullptr)
	{
		ItemInterface = static_cast<IItemInterface*>(NewItem->GetInterfaceAddress(UItemInterface::StaticClass()));
	}

	if(ItemInterface == nullptr)
		return nullptr;

	ItemInterface->GetItemComponent()->Initialzie(NewItem);

	Result.SetObject(NewItem);
	Result.SetInterface(ItemInterface);

	return NewItem;
}

void UItemManager::RegisterItem(TScriptInterface<IItemInterface> NewItem)
{
	
}

void UItemManager::UnregisterItem(TScriptInterface<IItemInterface> OldItem)
{
	
}

void UItemManager::GetAllItemDatas(TArray<UItemDataBase*>& OuterDatas) const
{
	
}

void UItemManager::GetAllItems(TArray<TScriptInterface<IItemInterface>>& OuterItems) const
{
	
}