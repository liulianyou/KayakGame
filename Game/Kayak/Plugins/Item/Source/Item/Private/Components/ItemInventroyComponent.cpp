#include "ItemInventroyComponent.h"
#include "ItemComponent.h"
#include "ItemDataBase.h"
#include "Net/UnrealNetwork.h"
#include "Templates/UnrealTemplate.h"

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

	TArray<UItemRuntimeDataBase*> RuntimeData;

	ItemComponent->GetItemRuntimeData(FItemRuntimeDataQueryFilter( TSubclassOf<UItemDataBase>(ItemDataClass) ), RuntimeData);
	
	return RuntimeData.FindByPredicate([&](const UItemRuntimeDataBase* Data){
			if(Data == nullptr)
				return false;

			if(Data->GetClass() == ItemRuntimeDataClass->GetDefaultObject<UItemDataBase>()->GetRuntimeDataClass())
				return true;
			else
				return false;
		}) != nullptr;

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

	TArray<UItemRuntimeDataBase*> RuntimeData;

	ItemComponent->GetItemRuntimeData(FItemRuntimeDataQueryFilter(ItemRuntimeDataClass), RuntimeData);

	return RuntimeData.Num() != 0;
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

	TArray<UItemRuntimeDataBase*> RuntimeData;

	ItemComponent->GetItemRuntimeData(FItemRuntimeDataQueryFilter(ItemRuntimeDataInstance), RuntimeData);

	return RuntimeData.Num() != 0;
}

void FItemQueryFilter::GetItems(const UItemInventoryComponent* const InventoryComponent, TArray<TScriptInterface<IItemInterface>>& Items) const
{
	Items.Empty();

	if(InventoryComponent == nullptr)
		return;

	uint32 TargetMatchGole = GenerateQueryInfo( ItemClass != nullptr, ItemDataClass != nullptr, ItemIndex != INDEX_NONE, ItemRuntimeDataInstance != nullptr, ItemRuntimeDataClass != nullptr );

	for (auto IT = InventoryComponent->ItemContainer.CreateConstIterator(); IT; ++IT)
	{
		uint32 LocalMatchResult = GenerateQueryInfo(
			IsMatchedForItemClass(IT),
			IsMatchedForItemDataClass(IT),
			IsMatchedForIndex(IT),
			IsMatchedForRuntimeDataInstance(IT),
			IsMatchedForItemRuntimeDataClass(IT));
	
		if (LocalMatchResult == TargetMatchGole)
		{
			Items.Add((*IT).Item);
		}
	}	
}

uint32 FItemQueryFilter::GenerateQueryInfo(bool IsMatchedItemClass, bool IsItemClassMatched, bool IsIndexMatched, bool IsRuntimeDataMatched, bool IsRuntimeDataClassMathced) const
{
	uint32 Result = 0;

	Result |= IsIndexMatched						? EQueryFlag::EItemIndex				: ~EQueryFlag::EItemIndex;
	Result |= IsMatchedItemClass					? EQueryFlag::EItemClass				: ~EQueryFlag::EItemClass;
	Result |= IsItemClassMatched					? EQueryFlag::EItemDataClass			: ~EQueryFlag::EItemDataClass;
	Result |= IsRuntimeDataClassMathced				? EQueryFlag::EItemRuntimeDataClass		: ~EQueryFlag::EItemRuntimeDataClass;
	Result |= IsRuntimeDataMatched					? EQueryFlag::EItemRuntimeDataInstance	: ~EQueryFlag::EItemRuntimeDataInstance;

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
	DOREPLIFETIME(UItemInventoryComponent, InventoryOwner);
}

bool UItemInventoryComponent::ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags)
{
	bool WroteSomething = Super::ReplicateSubobjects(Channel, Bunch, RepFlags);

	for (auto IT = ItemContainer.CreateIterator(); IT; ++IT)
	{
		if((*IT).Item.GetObject() == nullptr 
			//As the actor has it own channel to replicate its properties
			|| (*IT).Item.GetObject()->GetClass()->IsChildOf(AActor::StaticClass()))
			continue;

		WroteSomething |= (*IT).Item->ReplicateSubobjects(Channel, Bunch, RepFlags);

		WroteSomething |= Channel->ReplicateSubobject((*IT).Item.GetObject(), *Bunch, *RepFlags);
	}

	return WroteSomething;
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

void UItemInventoryComponent::Initialize()
{
	OnInitialize();
}

void UItemInventoryComponent::SetItemOwner(UObject* NewOwner)
{
	if(NewOwner == InventoryOwner)
		return;

	OnSetItemOwner(NewOwner);

	InventoryOwner = NewOwner;
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


void UItemInventoryComponent::OnRep_InventoryOwner(UObject* OldOwner)
{
	UObject* NewItemOwner = InventoryOwner;

	TGuardValue<UObject*>(InventoryOwner, OldOwner);

	SetItemOwner(NewItemOwner);
}