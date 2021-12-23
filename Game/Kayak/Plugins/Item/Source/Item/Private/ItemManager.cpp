#include "ItemManager.h"


UItemManager::UItemManager(const FObjectInitializer& ObjectInitialzier)
	:Super(ObjectInitialzier)
{
	
}

UItemDataBase* UItemManager::CreateNewItemData(TSubclassOf<UItemDataBase> ItemDataClass)
{
	return nullptr;
}

void UItemManager::RemoveItemDataByClass(TSubclassOf<UItemDataBase> ItemDataClass, bool IgnoreChildClasses/* = false*/)
{

}

void UItemManager::RemoveItemDataByInstance(UItemDataBase* ItemData)
{
	
}

TScriptInterface<IItemInterface> UItemManager::CreateNewItem(TSubclassOf<UItemDataBase> ItemDataClass)
{
	return nullptr;
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