#include "ItemManager.h"
#include "ItemDataBase.h"
#include "ItemDefinition.h"
#include "ItemComponentBase.h"
#include "ItemInventroyComponent.h"
#include "GameFramework/Actor.h"

UItemManager::UItemManager(const FObjectInitializer& ObjectInitialzier)
	:Super(ObjectInitialzier)
{
	
}

void UItemManager::Initialize()
{
	OnInitialize();
}

UItemDataBase* UItemManager::CreateNewItemData(TSubclassOf<UItemDataBase> ItemDataClass)
{
	if (ItemDataClass == nullptr)
	{
		return nullptr;
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
	TArray<UItemDataBase*> RemovedItems;

	for (auto IT = ItemDatas.CreateIterator(); IT; ++IT)
	{
		if (ItemDataClass == nullptr||
			(*IT)->GetClass() == ItemDataClass||
			(!IgnoreChildClasses && (*IT)->GetClass()->IsChildOf(ItemDataClass)))
		{
			RemovedItems.Add(*IT);
		}
	}

	for (int i = 0; i < RemovedItems.Num(); i++)
	{
		RemoveItemData(RemovedItems[i]);
	}
}

void UItemManager::RemoveItemData(UItemDataBase* ItemData)
{
	if(ItemData == nullptr)
		return;

	ItemData->Finialize();

	ItemDatas.Remove(ItemData);
}

UObject* UItemManager::CreateNewItem(TSubclassOf<UObject> ItemClass, UItemInventoryComponent* ItemOwner, UObject* WorldContent  /*= nullptr*/)
{
	if (ItemClass == nullptr)
	{
		UE_LOG(LogItem, Warning, TEXT("Try to create item with none class!!"));
		return nullptr;
	}

	if (!ItemClass->ImplementsInterface(UItemInterface::StaticClass()))
	{
		UE_LOG(LogItem, Warning, TEXT("Try to create item with class %s do not inherit from IItemInterface!!"), *ItemClass->GetName());

		return nullptr;
	}

	bool IsActor = ItemClass->IsChildOf(AActor::StaticClass());

	FActorSpawnParameters Parameters;
	Parameters.bNoFail = true;

	if (ItemOwner == nullptr)
	{
		if (!IsActor)
		{
			UE_LOG(LogItem, Warning, TEXT("Try to create item with class %s to the world which is not one actor!!"), *ItemClass->GetName());

			return nullptr;
		}
	}

	UObject* NewItemObject = nullptr;

	if (IsActor)
	{
		if (ItemOwner != nullptr)
		{
			AActor* OwnerActor = Cast<AActor>(ItemOwner->GetInventoryOwner());

			if (OwnerActor == nullptr)
			{
				Parameters.Owner = ItemOwner->GetOwner();
			}
			else
			{
				Parameters.Owner = OwnerActor;
			}
		}

		UWorld* World = GEngine->GetWorldFromContextObject(WorldContent, EGetWorldErrorMode::LogAndReturnNull);

		//Should never pass
		if (World == nullptr)
			return nullptr;

		NewItemObject = World->SpawnActor<AActor>(ItemClass);
	}
	else
	{
		NewItemObject = NewObject<UObject>(ItemOwner, ItemClass);
	}

	if (NewItemObject == nullptr)
	{
		UE_LOG(LogItem, Warning, TEXT("Three is not enough memeory to create new item object!!"));
		return nullptr;
	}
		
	IItemInterface* ItemInterface = Cast<IItemInterface>(NewItemObject);

	if (ItemInterface == nullptr)
	{
		IItemInterface::Execute_OnInitialize( NewItemObject, ItemOwner );
	}
	else
	{
		ItemInterface->Initialize(ItemOwner);
	}

	RegisterItem(NewItemObject);

	return NewItemObject;
}

void UItemManager::RegisterItem(UObject* NewItem)
{
	if(NewItem == nullptr  
		|| !NewItem->GetClass()->ImplementsInterface(UItemInterface::StaticClass()) 
		|| Items.Find(NewItem) != INDEX_NONE)
		return ;

	IItemInterface* ItemInterface = Cast<IItemInterface>(NewItem);

	UItemComponentBase* ItemComponent = nullptr;

	if (ItemInterface == nullptr)
	{
		ItemComponent = IItemInterface::Execute_OnGetItemComponent(NewItem);
	}
	else
	{
		ItemComponent = ItemInterface->GetItemComponent();
	}

	if (ItemComponent == nullptr)
	{
		UE_LOG(LogItem, Warning, TEXT("The target item %s should have one Item component and use GetItemComponent to get it!!"),  *NewItem->GetPathName());
		return;
	}

	Items.Add(NewItem);
}

void UItemManager::UnregisterItem(UObject* RemovedItem)
{
	if (RemovedItem == nullptr 
		|| !RemovedItem->GetClass()->ImplementsInterface(UItemInterface::StaticClass())
		|| Items.Find(RemovedItem) == INDEX_NONE)
		return;

	IItemInterface* ItemInterface = Cast<IItemInterface>(RemovedItem);

	UItemComponentBase* ItemComponent = nullptr;

	if (ItemInterface == nullptr)
	{
		ItemComponent = IItemInterface::Execute_OnGetItemComponent(RemovedItem);
	}
	else
	{
		ItemComponent = ItemInterface->GetItemComponent();
	}

	if (ItemComponent == nullptr)
	{
		UE_LOG(LogItem, Warning, TEXT("The target item %s should have one Item component and use GetItemComponent to get it!!"), *RemovedItem->GetPathName());
		return;
	}

	Items.Remove(RemovedItem);
}