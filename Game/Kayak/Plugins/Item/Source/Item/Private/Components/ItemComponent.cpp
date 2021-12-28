#include "ItemComponent.h"
#include "ItemManager.h"
#include "ItemBlueprintLib.h"
#include "Net/UnrealNetwork.h"
#include "ItemBase.h"
#include "ItemBlueprintLib.h"
#include "ItemGlobal.h"

UItemComponentBase::UItemComponentBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer),
	ItemState(EItemState::Constructed),
	ItemData(nullptr)
{

}

void UItemComponentBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UItemComponentBase, OwnerAvatar);
}

void UItemComponentBase::BeginDestroy()
{
	Super::BeginDestroy();

	UnregisterComponent();
}

void UItemComponentBase::Initialzie(UObject* NewItemOnwer)
{
	ItemOwner = NewItemOnwer;

	OnInitialize(NewItemOnwer);
}

void UItemComponentBase::OnRegister()
{
	Super::OnRegister();

	RegisterComponent();
}

void UItemComponentBase::OnUnregister()
{
	Super::OnUnregister();

	UnregisterComponent();
}

void UItemComponentBase::RegisterComponent()
{
	UItemManager* ItemManager = UItemBlueprintLib::GetItemManager();

	if (ItemManager != nullptr)
	{
		ItemManager->RegisterItem(GetItemOwner());
	}

	OnRegisterComponent();
}

void UItemComponentBase::UnregisterComponent()
{
	UItemManager* ItemManager = UItemBlueprintLib::GetItemManager();

	if (ItemManager != nullptr)
	{
		ItemManager->UnregisterItem(GetItemOwner());
	}

	OnUnregisterComponent();
}

void UItemComponentBase::ActivateItem()
{
	//When this item have been activate do not activate it again
	if(IsActivated())
		return;
	
	if (GetClass()->IsFunctionImplementedInScript(GET_FUNCTION_NAME_CHECKED(UItemComponentBase, OnActivateItem)))
	{
		OnActivateItem();
	}

	ToggleItemStateChanged(EItemState::Activate);
}

void UItemComponentBase::DeactivateItem()
{
	//When deactive this item make sure this item is not using.
	if (IsUsing())
	{
		StopUse();
	}

	//When this item have never been activated then do not need to deactivate it
	if (!IsActivated())
		return;

	if (GetClass()->IsFunctionImplementedInScript(GET_FUNCTION_NAME_CHECKED(UItemComponentBase, OnDeactivateItem)))
	{
		OnDeactivateItem();
	}

	ToggleItemStateChanged(EItemState::Deactivated);
}

void UItemComponentBase::StartUse()
{
	//Make sure this item have been activated when this item start to be use
	if (!IsActivated())
	{
		Activate();
	}

	if (GetClass()->IsFunctionImplementedInScript(GET_FUNCTION_NAME_CHECKED(UItemComponentBase, OnStartUse)))
	{
		OnStartUse();
	}

	ToggleItemStateChanged(EItemState::Using);
}

void UItemComponentBase::StopUse()
{
	//This item have not been used, so do not stop it
	if(IsUsing() == false)
		return;

	if (GetClass()->IsFunctionImplementedInScript(GET_FUNCTION_NAME_CHECKED(UItemComponentBase, StopUse)))
	{
		OnStopUse();
	}

	ToggleItemStateChanged(EItemState::Idel);
}

void UItemComponentBase::Abandoned(const FItemScopeChangeInfo& AbandonInfo)
{
	//If the scope have changed I need to deactive it first
	if (AbandonInfo.ScopeChangeType != EItemScopeChangeType::NoChange && 
		//When duplicate item the source item will not change, so do not need to deactive
		AbandonInfo.ScopeChangeType != EItemScopeChangeType::Duplicate)
	{
		Deactivate();
	}

	if (GetClass()->IsFunctionImplementedInScript(GET_FUNCTION_NAME_CHECKED(UItemComponentBase, OnAbandoned)))
	{
		OnAbandoned(AbandonInfo);
	}

	ToggleItemStateChanged(EItemState::Abandoned);
}

void UItemComponentBase::Gained(const FItemScopeChangeInfo& GainedInfo)
{
	if (GetClass()->IsFunctionImplementedInScript(GET_FUNCTION_NAME_CHECKED(UItemComponentBase, OnGained)))
	{
		OnGained(GainedInfo);
	}

	ToggleItemStateChanged(EItemState::Gained);
}

bool UItemComponentBase::IsActivated() const
{
	/*
	* When the item is be using means this item have been activated
	*/
	if(IsUsing())
		return true;

	return EnumHasAnyFlags( ItemState, EItemState::Activate );
}

bool UItemComponentBase::IsUsing() const
{
	return EnumHasAnyFlags(ItemState, EItemState::Using);
}

TScriptInterface<IItemInterface> UItemComponentBase::GetItemOwner() const
{
	TScriptInterface<IItemInterface> Result;

	//First I check my own owner
	if (ItemOwner != nullptr)
	{
		Result = ItemOwner;

		if (Result)
		{
			return Result;
		}
		else
		{
			if (ItemOwner->GetClass()->ImplementsInterface(UItemInterface::StaticClass()))
			{
				Result.SetInterface(ItemOwner->GetClass()->GetInterfaceAddress(UItemInterface::StaticClass()));
				Result.SetObject(ItemOwner);

				return Result;
			}
		}
	}

	AActor* Actor = GetOwner();

	//Second I need to check the engine owner of this component
	if(Actor != nullptr)
	{
		Result = Actor;

		if (!Result)
		{
			if (Actor->GetClass()->ImplementsInterface(UItemInterface::StaticClass()))
			{
				Result.SetInterface(Actor->GetClass()->GetInterfaceAddress(UItemInterface::StaticClass()));
				Result.SetObject(Actor);
			}
		}
	}
	else
	//If the owner actor is not exist I need to check all the outer of this component
	{
		UObject* Outer = GetOuter();

		while (Outer)
		{
			Result = Outer;

			if (!Result)
			{
				if (Outer->GetClass()->ImplementsInterface(UItemInterface::StaticClass()))
				{
					Result.SetInterface(Outer->GetClass()->GetInterfaceAddress(UItemInterface::StaticClass()));
					Result.SetObject(Outer);
				}
			}
			else
			{
				break;
			}
		}
	}

	return Result;
}

void UItemComponentBase::SetAvatarOwner(UObject* NewAvatar)
{
	if(OwnerAvatar == NewAvatar)
		return;

	OwnerAvatar = NewAvatar;
}

void UItemComponentBase::InitializeFromNewDataInternal(UItemDataBase* NewData)
{
	if (GetClass()->IsFunctionImplementedInScript(GET_FUNCTION_NAME_CHECKED(UItemComponentBase, OnInitializeDataFromNewDataInternal)))
	{
		OnInitializeDataFromNewDataInternal(NewData);
	}
}

void UItemComponentBase::SetNewItemData(UItemDataBase* NewData)
{
	//Nothing changed
	if(ItemData == NewData)
		return;

	bool NeedActiveAfterDataChanged = false;
	bool NeedStartUseAfterDataChanged = false;

	if (IsActivated())
		NeedActiveAfterDataChanged = true;
	
	if (IsUsing())
		NeedStartUseAfterDataChanged = true;

	//Stop use it
	StopUse();

	//Deativate it
	DeactivateItem();

	InitializeFromNewDataInternal(NewData);

	if (ItemData)
		ItemData->RemoveReferencedComponent(this);

	//Add new data
	ItemData = NewData;

	if (ItemData)
		ItemData->AddReferencedComponent(this);

	// Activate it again
	if (NeedStartUseAfterDataChanged)
		ActivateItem();

	//Start to use it again
	if (NeedStartUseAfterDataChanged)
		StartUse();
}

void UItemComponentBase::ToggleItemStateChanged(EItemState NewItemState)
{
	ItemState = NewItemState;

	ItemStateChanged.Broadcast(this);

	if (UItemBlueprintLib::GetItemGlobal())
	{
		UItemBlueprintLib::GetItemGlobal()->ItemStateChanged.Broadcast(this);
	}
}

void UItemComponentBase::OnRep_OwnerAvatar(UObject* OldAvatar)
{
	
}

