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
	if(NewItem == nullptr || Items.Find(NewItem) != INDEX_NONE)
		return ;

	UItemComponentBase* ItemComponent = NewItem->GetItemComponent();

	if (ItemComponent == nullptr)
	{
		UE_LOG(LogItem, Warning, TEXT("The target item %s should have one Item component and use GetItemComponent to get it!!"), 
				NewItem.GetObject() == nullptr ? *(static_cast<IItemInterface*>(NewItem.GetInterface()))->_getUObject()->GetName() : *NewItem.GetObject()->GetName());
		return;
	}

	//Only the server can use the item data to create runtime data. the client only get the runtime data through property replicated
	if (ItemComponent->HasAuthority())
	{
		for (int i = 0; i < ItemComponent->GetDefaultItemRuntimeDataClass().Num(); i++)
		{
			UItemDataBase* ItemData = FindOrCreateNewItemData(ItemComponent->GetDefaultItemRuntimeDataClass()[i]);

			if (ItemData == nullptr)
				continue;

			ItemComponent->AddNewItemData(ItemData);
		}
	}

	Items.Add(NewItem);
}

void UItemManager::UnregisterItem(TScriptInterface<IItemInterface> RemovedItem)
{

	if (RemovedItem == nullptr || Items.Find(RemovedItem) != INDEX_NONE)
		return;

	UItemComponentBase* ItemComponent = RemovedItem->GetItemComponent();

	if (ItemComponent == nullptr)
	{
		UE_LOG(LogItem, Warning, TEXT("The target item %s should have one Item component and use GetItemComponent to get it!!"),
			RemovedItem.GetObject() == nullptr ? *(static_cast<IItemInterface*>(RemovedItem.GetInterface()))->_getUObject()->GetName() : *RemovedItem.GetObject()->GetName());
		return;
	}

	for (auto IT = ItemDatas.CreateIterator(); IT; ++IT)
	{
		if((*IT) == nullptr)
			continue;

		(*IT)->RemoveReferencedComponent(ItemComponent);
	}

	Items.Remove(RemovedItem);
}