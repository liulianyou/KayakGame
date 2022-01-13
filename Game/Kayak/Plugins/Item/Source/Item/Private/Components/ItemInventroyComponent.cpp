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

bool FItemQueryFilter::IsMatchedForItemClass(const FItemContainer::ConstIterator& IT) const
{
	if(ItemClass == nullptr)
		return true;

	if(!IT && !(*IT))
		return false;

	return ItemClass== nullptr || IT.GetValue()->Item.GetObject()->GetClass() == ItemClass;
}

bool FItemQueryFilter::IsMatchedForItemDataClass(const FItemContainer::ConstIterator& IT) const
{
	if(ItemRuntimeDataClass == nullptr)
		return false;

	if (!IT && !(*IT))
		return false;
	
	UItemComponentBase* ItemComponent = IT.GetValue()->Item->GetItemComponent();

	if(ItemComponent == nullptr)
		return false;

	for (auto RuntimeDataIT = ItemComponent->GetItemRuntimeDataContainer().CreateConstIterator(); RuntimeDataIT; ++RuntimeDataIT)
	{
		if(RuntimeDataIT.GetValue()->RuntimeData->GetItemData()->GetClass() == ItemClass)
			return true;
	}

	return false;
}

bool FItemQueryFilter::IsMatchedForItemRuntimeDataClass(const FItemContainer::ConstIterator& IT) const
{
	if(ItemRuntimeDataClass == nullptr)
		return false;

	if (!IT && !(*IT))
		return false;

	UItemComponentBase* ItemComponent = IT.GetValue()->Item->GetItemComponent();

	if(ItemComponent == nullptr)
		return false;

	for (auto RuntimeDataIT = ItemComponent->GetItemRuntimeDataContainer().CreateConstIterator(); RuntimeDataIT; ++RuntimeDataIT)
	{
		if (RuntimeDataIT.GetValue()->RuntimeData->GetClass() == ItemRuntimeDataClass)
			return true;
	}

	return false;
}

bool FItemQueryFilter::IsMatchedForIndex(const FItemContainer::ConstIterator& IT) const 
{
	if(ItemIndex == INDEX_NONE)
		return false;

	if (!IT && !(*IT))
		return false;

	return IT.GetIndex() == ItemIndex;
}

bool FItemQueryFilter::IsMatchedForRuntimeDataInstance(const FItemContainer::ConstIterator& IT) const
{
	if(ItemRuntimeDataInstance == nullptr)
		return false;

	if (!IT && !(*IT))
		return false;

	UItemComponentBase* ItemComponent = IT.GetValue()->Item->GetItemComponent();

	if (ItemComponent == nullptr)
		return false;

	for (auto RuntimeDataIT = ItemComponent->GetItemRuntimeDataContainer().CreateConstIterator(); RuntimeDataIT; ++RuntimeDataIT)
	{
		if (RuntimeDataIT.GetValue()->RuntimeData == ItemRuntimeDataInstance)
			return true;
	}

	return false;
}

void FItemQueryFilter::GetItems(const UItemInventoryComponent* const InventoryComponent, TArray<TScriptInterface<IItemInterface>>& Items) const
{
	Items.Empty();

	if(InventoryComponent == nullptr)
		return;

	uint32 TargetMatchGole = GenerateQueryInfo();

	for (auto IT = InventoryComponent->ItemContainer.CreateConstIterator(); IT; ++IT)
	{
		uint32 LocalMatchResult = 0;

		LocalMatchResult |= IsMatchedForIndex(IT)					? EQueryFlag::EItemIndex				: ~EQueryFlag::EItemIndex;
		LocalMatchResult |= IsMatchedForItemClass(IT)				? EQueryFlag::EItemClass				: ~EQueryFlag::EItemClass;
		LocalMatchResult |= IsMatchedForItemDataClass(IT)			? EQueryFlag::EItemDataClass			: ~EQueryFlag::EItemDataClass;
		LocalMatchResult |= IsMatchedForItemRuntimeDataClass(IT)	? EQueryFlag::EItemRuntimeDataClass		: ~EQueryFlag::EItemRuntimeDataClass;
		LocalMatchResult |= IsMatchedForRuntimeDataInstance(IT)		? EQueryFlag::EItemRuntimeDataInstance	: ~EQueryFlag::EItemRuntimeDataInstance;
	
		if (LocalMatchResult == TargetMatchGole)
		{
			Items.Add((*IT).Item);
		}
	}	
}

uint32 FItemQueryFilter::GenerateQueryInfo() const
{
	uint32 Result = 0;
	Result |= ItemIndex != 0						? EQueryFlag::EItemIndex				: ~EQueryFlag::EItemIndex;
	Result |= ItemClass != nullptr					? EQueryFlag::EItemClass				: ~EQueryFlag::EItemClass;
	Result |= ItemDataClass != nullptr				? EQueryFlag::EItemDataClass			: ~EQueryFlag::EItemDataClass;
	Result |= ItemRuntimeDataClass != nullptr		? EQueryFlag::EItemRuntimeDataClass		: ~EQueryFlag::EItemRuntimeDataClass;
	Result |= ItemRuntimeDataInstance != nullptr	? EQueryFlag::EItemRuntimeDataInstance	: ~EQueryFlag::EItemRuntimeDataInstance;

	return Result;
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

void UItemInventoryComponent::GetItems(TArray<TScriptInterface<IItemInterface>>& OutItems, const FItemQueryFilter& ItemQueryFilter) const
{
	OutItems.Empty();

	ItemQueryFilter.GetItems(this, OutItems);
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