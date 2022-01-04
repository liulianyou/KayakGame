#include "ItemDataBase.h"
#include "Net/UnrealNetwork.h"
#include "ItemBlueprintLib.h"
#include "ItemGlobal.h"
#include "ItemComponent.h"

UItemDataBase::UItemDataBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	
}

void UItemDataBase::BeginDestroy()
{
	Super::BeginDestroy();

	for (auto It = GetReferencedItemComponents().CreateConstIterator(); It; ++It)
	{
		RemoveReferencedComponent(*It);
	}
}

void UItemDataBase::AddReferencedComponent(UItemComponentBase* ItemComponent)
{
	if (ItemComponent == nullptr)
		return;

	if (ReferencedItemComponents.Find(ItemComponent) == INDEX_NONE)
	{
		//Should add first to break the potential infinite loop
		ReferencedItemComponents.AddUnique(ItemComponent);

		OnAddReferencedComponent(ItemComponent);

		ItemComponent->ItemDataChanged(nullptr, this);
	}
}

void UItemDataBase::RemoveReferencedComponent(UItemComponentBase* ItemComponent)
{
	if(ItemComponent == nullptr)
		return;

	if (ReferencedItemComponents.Find(ItemComponent) != INDEX_NONE)
	{
		//Should remove first to break the potential infinite loop
		ReferencedItemComponents.Remove(ItemComponent);

		OnRemoveReferencedComponent(ItemComponent);

		ItemComponent->ItemDataChanged(this, nullptr);
	}
}

UItemRuntimeDataBase::UItemRuntimeDataBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

void UItemRuntimeDataBase::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UItemRuntimeDataBase, ItemOwner);
}

void UItemRuntimeDataBase::Initialize(UItemComponentBase* ItemComponent)
{
	OnInitialzie();

	ItemOwner = ItemComponent;
}

bool UItemRuntimeDataBase::IsActivated() const
{
	/*
	* When the item is be using means this item have been activated
	*/
	if (IsUsing())
		return true;

	return EnumHasAnyFlags(ItemState, EItemState::Activate);
}

bool UItemRuntimeDataBase::IsUsing() const
{
	return EnumHasAnyFlags(ItemState, EItemState::Using);
}

void UItemRuntimeDataBase::ActivateItem()
{
	//When this item have been activate do not activate it again
	if (IsActivated())
		return;

	if (GetClass()->IsFunctionImplementedInScript(GET_FUNCTION_NAME_CHECKED(UItemRuntimeDataBase, OnActivateItem)))
	{
		OnActivateItem();
	}

	ToggleItemStateChanged(EItemState::Activate);
}

void UItemRuntimeDataBase::DeactivateItem()
{
	//When deactive this item make sure this item is not using.
	if (IsUsing())
	{
		StopUse();
	}

	//When this item have never been activated then do not need to deactivate it
	if (!IsActivated())
		return;

	if (GetClass()->IsFunctionImplementedInScript(GET_FUNCTION_NAME_CHECKED(UItemRuntimeDataBase, OnDeactivateItem)))
	{
		OnDeactivateItem();
	}

	ToggleItemStateChanged(EItemState::Deactivated);
}

void UItemRuntimeDataBase::StartUse()
{
	//Make sure this item have been activated when this item start to be use
	if (!IsActivated())
	{
		ActivateItem();
	}

	if (GetClass()->IsFunctionImplementedInScript(GET_FUNCTION_NAME_CHECKED(UItemRuntimeDataBase, OnStartUse)))
	{
		OnStartUse();
	}

	ToggleItemStateChanged(EItemState::Using);
}

void UItemRuntimeDataBase::StopUse()
{
	//This item have not been used, so do not stop it
	if (IsUsing() == false)
		return;

	if (GetClass()->IsFunctionImplementedInScript(GET_FUNCTION_NAME_CHECKED(UItemRuntimeDataBase, StopUse)))
	{
		OnStopUse();
	}

	ToggleItemStateChanged(EItemState::Idel);
}

void UItemRuntimeDataBase::Abandoned(const FItemScopeChangeInfo& AbandonInfo)
{
	//If the scope have changed I need to deactive it first
	if (AbandonInfo.ScopeChangeType != EItemScopeChangeType::NoChange &&
		//When duplicate item the source item will not change, so do not need to deactive
		AbandonInfo.ScopeChangeType != EItemScopeChangeType::Duplicate)
	{
		DeactivateItem();
	}

	if (GetClass()->IsFunctionImplementedInScript(GET_FUNCTION_NAME_CHECKED(UItemRuntimeDataBase, OnAbandoned)))
	{
		OnAbandoned(AbandonInfo);
	}

	ToggleItemStateChanged(EItemState::Abandoned);
}

void UItemRuntimeDataBase::Gained(const FItemScopeChangeInfo& GainedInfo)
{
	if (GetClass()->IsFunctionImplementedInScript(GET_FUNCTION_NAME_CHECKED(UItemRuntimeDataBase, OnGained)))
	{
		OnGained(GainedInfo);
	}

	ToggleItemStateChanged(EItemState::Gained);
}


void UItemRuntimeDataBase::InitializeFromNewDataInternal(UItemDataBase* NewData)
{
	if (GetClass()->IsFunctionImplementedInScript(GET_FUNCTION_NAME_CHECKED(UItemRuntimeDataBase, OnInitializeDataFromNewDataInternal)))
	{
		OnInitializeDataFromNewDataInternal(NewData);
	}
}

void UItemRuntimeDataBase::OnRep_ItemOwner(UItemComponentBase* OldItemOnwer)
{
	
}

void UItemRuntimeDataBase::SetNewItemOwner_Implementation(UItemComponentBase* ItemComponent)
{
	if(ItemOwner == ItemComponent)
		return;
	
	ItemOwner = ItemComponent;
}

void UItemRuntimeDataBase::ToggleItemStateChanged(EItemState NewItemState)
{
	ItemState = NewItemState;

	ItemStateChangedDelegate.Broadcast(this);

	UItemGlobal* ItemGlobal = UItemBlueprintLib::GetItemGlobal();

	if (ItemGlobal)
	{
		ItemGlobal->ItemStateChangedDelegate.Broadcast(this);
	}
}

void UItemRuntimeDataBase::ItemDataChangedInItemOwner(UItemComponentBase* Item, UItemDataBase* OldData, UItemDataBase* NewData)
{
	OnItemDataChangedInItemOwner(Item, OldData, NewData);
}