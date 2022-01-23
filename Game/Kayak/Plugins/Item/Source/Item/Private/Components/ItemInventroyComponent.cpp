#include "ItemInventroyComponent.h"
#include "ItemComponentBase.h"
#include "ItemDataBase.h"
#include "ItemBlueprintLib.h"

#include "Net/UnrealNetwork.h"
#include "Net/Core/PushModel/PushModel.h"
#include "Templates/UnrealTemplate.h"

FItemInfo FItemInfo::InvalidItemInfo;

bool FItemInfo::IsValid() const
{
	if(Item == nullptr 
		|| !Item->IsValidLowLevel()
		|| PendingRemoved 
		|| !Item->GetClass()->ImplementsInterface(UItemInterface::StaticClass()))
		return false;

	return UItemBlueprintLib::GetItemComponent(Item) != nullptr;
}

void FItemInfo::PreReplicatedRemove(const struct FItemContainer& InArray)
{
	const_cast<FItemContainer&>(InArray).RemoveItem(Item);
}

void FItemInfo::PostReplicatedAdd(const struct FItemContainer& InArray)
{
	const_cast<FItemContainer&>(InArray).AddNewItem(Item);
}

void FItemInfo::PostReplicatedChange(const struct FItemContainer& InArray)
{
	int i = 0;
	i++;
}

FItemContainer::FItemContainer()
{
	EndPendingElementPtr = &HeadPendingElement;
}

void FItemContainer::RegisterInventoryComponent(UItemInventoryComponent* _InventoryComponent)
{
	InventoryOwner = _InventoryComponent;
}

int FItemContainer::AddNewItem(UObject* NewItem)
{
	if(NewItem == nullptr 
		|| !NewItem->GetClass()->ImplementsInterface(UItemInterface::StaticClass()))
		return INDEX_NONE;

	int Result = GetItemIndex(NewItem);

	if (Result != INDEX_NONE)
	{
		//Make the target item do not removed as it is added again
		GetItemInfoByIndex(Result).PendingRemoved = false;
		return Result;
	}

	FItemInfo* NewItemInfo = nullptr;

	//There is no more memory to hold the new item so create ne heap memory to hold it
	if (LockCount > 0 && Items.GetSlack() <= 0)
	{
		check(EndPendingElementPtr);
		if (*EndPendingElementPtr == nullptr)
		{
			NewItemInfo = new FItemInfo(NewItem);
			*EndPendingElementPtr = NewItemInfo;
		}
		else
		{
			**EndPendingElementPtr = FItemInfo(NewItem);
			NewItemInfo = *EndPendingElementPtr;
		}

		NewItemInfo->PreElement = *EndPendingElementPtr;
		EndPendingElementPtr = &NewItemInfo->NextElement;
	}
	else
	{
		Result = Items.Add(FItemInfo(NewItem));
	}

	MarkItemDirty(Items[Result]);

	return InventoryOwner->AddNewItem(NewItem);
}

void FItemContainer::RemoveItem(UObject* RemovedItem)
{
	if (RemovedItem == nullptr
		|| !RemovedItem->GetClass()->ImplementsInterface(UItemInterface::StaticClass()))
		return;

	int Result = GetItemIndex(RemovedItem);

	//When this item have been removed or marked as removed just return.
	if(Result == INDEX_NONE)
		return;

	//When this data container is locked this final remove will occurred at the end
	if (LockCount > 0)
	{
		PendingRemovedCount++;

		//Just mark the target item info  removed
		FItemInfo& ItemInfo = GetItemInfoByIndex(Result);

		ItemInfo.PendingRemoved = true;
	}
	else
	{
		int Index = GetItemIndex(RemovedItem);

		if (Items.IsValidIndex(Index))
		{
			Items.RemoveAtSwap(Index);
		}
	}

	MarkArrayDirty();
}

int FItemContainer::GetItemNum() const
{
	int Result = Items.Num();

	FItemInfo* Start = HeadPendingElement;
	FItemInfo* Stop = *EndPendingElementPtr;

	while (Start != Stop)
	{
		Result++;
		Start = Start->NextElement;
	}

	return Result;
}

int FItemContainer::GetItemIndex(UObject* Item) const
{
	if(Item == nullptr || !Item->IsValidLowLevel() || !Item->GetClass()->ImplementsInterface(UItemInterface::StaticClass()))
		return INDEX_NONE;

	for (auto IT = CreateConstIterator(0, true); IT; ++IT)
	{
		if (IT.GetValue()->Item == Item)
		{
			return IT.GetIndex();
		}
	}

	return INDEX_NONE;
}

const FItemInfo& FItemContainer::GetItemInfoByIndex(int Index) const
{
	for (auto IT = CreateConstIterator(0, true); IT; ++IT)
	{
		if (IT.GetIndex() == Index)
		{
			return *IT.GetValue() ;
		}
	}

	return FItemInfo::InvalidItemInfo;
}

FItemInfo& FItemContainer::GetItemInfoByIndex(int Index)
{
	for (auto IT = CreateIterator(0, true); IT; ++IT)
	{
		if (IT.GetIndex() == Index)
		{
			return *IT.GetValue();
		}
	}

	return FItemInfo::InvalidItemInfo;
}

void FItemContainer::IncrementLock()
{
	LockCount++;
}

void FItemContainer::DecrementLock()
{
	if(--LockCount != 0)
		return;

	FItemInfo* Start = HeadPendingElement;
	FItemInfo* Stop = *EndPendingElementPtr;
	bool ModifiedArray = false;

	while (Start != Stop)
	{
		if (!Start->PendingRemoved)
		{
			Items.Add(MoveTemp(*Start));
			ModifiedArray = true;
		}
		else
		{
			PendingRemovedCount--;
		}

		Start = Start->NextElement;
	}

	for (int i = 0; i < Items.Num() && PendingRemovedCount > 0; i++)
	{
		if (bool(Items[i]) == false)
		{
			PendingRemovedCount--;

			Items.RemoveAt(i--);

			ModifiedArray = true;
		}
	}

	//Reset the end element so that the add and remove  operation will occurs when the the elements has been changed
	EndPendingElementPtr = &HeadPendingElement;

	if (!ensure(PendingRemovedCount == 0))
	{
		UE_LOG(LogItem, Error, TEXT("There are still %d elements in item container  need to be removed! which will cause memery leak"), PendingRemovedCount);
		PendingRemovedCount = 0;
	}

	if (ModifiedArray)
	{
		MarkArrayDirty();
	}
}

bool FItemQueryFilter::IsMatchedForItemClass(const FItemContainer::ConstIterator& IT) const
{
	if(ItemClass == nullptr)
		return true;

	if(!IT && !(*IT))
		return false;

	return ItemClass== nullptr || IT.GetValue()->Item->GetClass() == ItemClass;
}

bool FItemQueryFilter::IsMatchedForItemDataClass(const FItemContainer::ConstIterator& IT) const
{
	if(ItemRuntimeDataClass == nullptr)
		return false;

	if (!IT && !(*IT))
		return false;

	UItemComponentBase* ItemComponent = UItemBlueprintLib::GetItemComponent(IT.GetValue()->Item);

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

	UItemComponentBase* ItemComponent = UItemBlueprintLib::GetItemComponent(IT.GetValue()->Item);

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

	UItemComponentBase* ItemComponent = UItemBlueprintLib::GetItemComponent(IT.GetValue()->Item);

	if (ItemComponent == nullptr)
		return false;

	TArray<UItemRuntimeDataBase*> RuntimeData;

	ItemComponent->GetItemRuntimeData(FItemRuntimeDataQueryFilter(ItemRuntimeDataInstance), RuntimeData);

	return RuntimeData.Num() != 0;
}

void FItemQueryFilter::GetItems(const UItemInventoryComponent* const InventoryComponent, TArray<UObject*>& Items) const
{
	Items.Empty();

	if(InventoryComponent == nullptr)
		return;

	uint32 TargetMatchGole = GenerateQueryInfo( ItemClass != nullptr, ItemDataClass != nullptr, ItemIndex != INDEX_NONE, ItemRuntimeDataInstance != nullptr, ItemRuntimeDataClass != nullptr );

	for (auto IT = InventoryComponent->GetItemContainer().CreateConstIterator(); IT; ++IT)
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
		if((*IT).Item == nullptr 
			//As the actor has it own channel to replicate its properties
			|| (*IT).Item->GetClass()->IsChildOf(AActor::StaticClass()))
			continue;

		//Only replicate the native class which is inherited from IItemInterface
		IItemInterface* ItemInterface = Cast<IItemInterface>((*IT).Item);

		if (ItemInterface != nullptr)
		{
			WroteSomething |= ItemInterface->ReplicateSubobjects(Channel, Bunch, RepFlags);
		}

		WroteSomething |= Channel->ReplicateSubobject((*IT).Item, *Bunch, *RepFlags);
	}

	return WroteSomething;
}

void UItemInventoryComponent::PreNetReceive()
{
	Super::PreNetReceive();

	ItemContainer.IncrementLock();
}

void UItemInventoryComponent::PostNetReceive()
{
	Super::PostNetReceive();

	ItemContainer.DecrementLock();
}

void UItemInventoryComponent::OnRegister()
{
	Super::OnRegister();

	ItemContainer.RegisterInventoryComponent(this);
}

void UItemInventoryComponent::OnUnregister()
{
	for (auto IT = ItemContainer.CreateIterator(); IT; ++IT)
	{
		UItemComponentBase* ItemComponent  = UItemBlueprintLib::GetItemComponent((*IT).Item);

		if (ItemComponent != nullptr)
		{
			ItemComponent->SetInventoryOwner(nullptr);
		}
	}

	Super::OnUnregister();
}

void UItemInventoryComponent::SetInventoryOwner(UObject* NewOwner)
{
	if(NewOwner == InventoryOwner)
		return;

	OnSetInventoryOwner(NewOwner);

	InventoryOwner = NewOwner;
	MARK_PROPERTY_DIRTY_FROM_NAME(UItemInventoryComponent, InventoryOwner, this);
}

AController* UItemInventoryComponent::GetAvatarOwner() const
{
	AController* Result = GetTypedOuter<AController>();

	if (Result == nullptr)
	{
		APawn* Pawn = GetTypedOuter<APawn>();

		if (Pawn != nullptr)
		{
			Result = Pawn->GetController();
		}
	}

	if (Result == nullptr)
	{
		Result = Cast<AController>( GetInventoryOwner());

		if (Result == nullptr)
		{
			APawn* Pawn = Cast<APawn>(GetInventoryOwner());

			if (Pawn != nullptr)
			{
				Result = Pawn->GetController();
			}
		}
	}

	return Result;
}

void UItemInventoryComponent::GetItems(TArray<UObject*>& OutItems, const FItemQueryFilter& ItemQueryFilter) const
{
	OutItems.Empty();

	ItemQueryFilter.GetItems(this, OutItems);
}

int UItemInventoryComponent::AddNewItem(UObject* NewItem)
{
	if (NewItem == nullptr 
		|| !NewItem->GetClass()->ImplementsInterface(UItemInterface::StaticClass()))
	{
		return INDEX_NONE;
	}

	int Result = GetItemContainer().GetItemIndex(NewItem);

	if (Result != INDEX_NONE)
		return Result;

	UItemComponentBase* ItemComponent = UItemBlueprintLib::GetItemComponent(NewItem);

	if (ItemComponent == nullptr)
	{
		return INDEX_NONE;
	}
		
	Result = ItemContainer.AddNewItem(NewItem);

	ItemComponent->SetInventoryOwner(this);

	ItemComponent->Gained(FItemScopeChangeInfo(), FItemRuntimeDataQueryFilter());

	return Result;
}


int UItemInventoryComponent::AddNewItemWithItemClass(TSubclassOf<UObject> ItemType)
{
	if(ItemType == nullptr)
		return INDEX_NONE;

	if (!ItemType->ImplementsInterface(UItemInterface::StaticClass()))
		return INDEX_NONE;

	UObject* NewItemObject =  UItemBlueprintLib::GetItemManager()->CreateNewItem(ItemType, this, GetWorld());

	return AddNewItem(NewItemObject);
}

void UItemInventoryComponent::RemoveItem(UObject* RemovedItem, bool DestroyItem /*= false*/)
{
	//If this is invalid item then do nothing
	if(RemovedItem == nullptr || ItemContainer.GetItemIndex(RemovedItem) == INDEX_NONE)
		return;

	ItemContainer.RemoveItem(RemovedItem);

	UItemComponentBase* ItemComponent = UItemBlueprintLib::GetItemComponent(RemovedItem);

	if (ItemComponent != nullptr)
	{
		ItemComponent->SetInventoryOwner(nullptr);

		ItemComponent->Abandoned(FItemScopeChangeInfo(DestroyItem?EItemScopeChangeType::Destroyed:EItemScopeChangeType::NoChange), FItemRuntimeDataQueryFilter());
	}
}


void UItemInventoryComponent::OnRep_InventoryOwner(UObject* OldOwner)
{
	UObject* NewItemOwner = InventoryOwner;

	TGuardValue<UObject*>(InventoryOwner, OldOwner);

	SetInventoryOwner(NewItemOwner);
}

void UItemInventoryComponent::OnRep_ItemContainer(const FItemContainer& OldItemContaner)
{
	/*
	* As some items which are actor type, they may be replicated after this inventory component replicated.
	* At this point there are some invalid value in this item container.
	* I need to remove them first
	*/

	for (auto IT = ItemContainer.CreateIterator(); IT; ++IT)
	{
		if ((*IT) == false)
		{
			if (IT.GetValue()->Item == nullptr || !IT.GetValue()->Item->IsValidLowLevel())
			{
				IT.RemoveCurrent();
			}
		}
	}
}