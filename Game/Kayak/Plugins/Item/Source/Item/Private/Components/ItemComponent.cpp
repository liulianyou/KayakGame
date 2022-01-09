#include "ItemComponent.h"
#include "ItemManager.h"
#include "ItemBlueprintLib.h"
#include "Net/UnrealNetwork.h"
#include "ItemDataBase.h"
#include "ItemBlueprintLib.h"
#include "ItemGlobal.h"

UItemComponentBase::UItemComponentBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer),
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
	if(NewItemOnwer == nullptr || NewItemOnwer->GetClass()->ImplementsInterface(UItemInterface::StaticClass()))
		return;

	OnInitialize(NewItemOnwer);

	IItemInterface* Item = Cast<IItemInterface>(NewItemOnwer);

	if (Item == nullptr)
	{
		ComponentOwner.SetInterface(NewItemOnwer->GetInterfaceAddress(UItemInterface::StaticClass()));
		ComponentOwner.SetObject(NewItemOnwer);
	}
	else
	{
		ComponentOwner = NewItemOnwer;
	}
}

void UItemComponentBase::Initialzie(TScriptInterface<IItemInterface> NewItemOwner)
{
	Initialzie(NewItemOwner.GetObject());
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

	for (int i = 0; i < ItemDatas.Num(); i++)
	{
		if (ItemDatas[i] == nullptr)
			continue;

		ItemDatas[i]->AddReferencedComponent(this);
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

	for (int i = 0; i < ItemDatas.Num(); i++)
	{
		if(ItemDatas[i] == nullptr)
			continue;

		ItemDatas[i]->RemoveReferencedComponent(this);
	}

	OnUnregisterComponent();
}

void UItemComponentBase::ActivateItem()
{

	RuntimeData->ActivateItem();
}

void UItemComponentBase::DeactivateItem()
{

	RuntimeData->DeactivateItem();
}

void UItemComponentBase::StartUse()
{

	RuntimeData->StartUse();
}

void UItemComponentBase::StopUse()
{

	RuntimeData->StopUse();
}

void UItemComponentBase::Abandoned(const FItemScopeChangeInfo& AbandonInfo)
{

	RuntimeData->Abandoned(AbandonInfo);
}

void UItemComponentBase::Gained(const FItemScopeChangeInfo& GainedInfo)
{
	
	RuntimeData->Gained(GainedInfo);
}

TScriptInterface<IItemInterface> UItemComponentBase::GetItemOwner() const
{
	TScriptInterface<IItemInterface> Result;

	//First I check my own owner
	if (ComponentOwner)
	{
		return ComponentOwner;
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

	ComponentOwner = Result;

	return Result;
}

bool UItemComponentBase::IsWorldOwned() const
{
	//If this item is pending to be destroyed nobody can own it
	if(IsPendingKill())
		return false;

	return OwnerAvatar == nullptr;
}

void UItemComponentBase::SetAvatarOwner(UItemInventoryComponent* NewAvatar)
{
	UItemInventoryComponent* OldAvatarOnwer =OwnerAvatar;

	OwnerAvatar = NewAvatar;

	for (int i = 0; i < RuntimeDatas.Num(); i++)
	{
		if (RuntimeDatas[i] == nullptr)
			continue;

		RuntimeDatas[i]->AvatarOwnerChanged(OldAvatarOnwer, NewAvatar);
	}

	AvatarOwnerChanged.Broadcast(OldAvatarOnwer, NewAvatar);

	FItemNativeDelegate::AvatarOwnerChanged.Broadcast(this, OldAvatarOnwer, NewAvatar);

	UItemGlobal* ItemGlobal = UItemBlueprintLib::GetItemGlobal();

	if (ItemGlobal)
	{
		ItemGlobal->AvatarOwnerChanged.Broadcast(this, OldAvatarOnwer, NewAvatar);
	}
}

void UItemComponentBase::AddNewItemData(UItemDataBase* NewData)
{
	if(NewData == nullptr || !NewData->IsValidItemData() ||  GetItemDatas().Find(NewData) != INDEX_NONE)
		return;

	NewData->AddReferencedComponent(this);
}

void UItemComponentBase::OnRep_OwnerAvatar(UItemInventoryComponent* OldAvatar)
{
	//At this point the the owner avatar have been changed
	{
		UItemInventoryComponent* NewAvatarOwner = OwnerAvatar;
		TGuardValue< UItemInventoryComponent* > GuardValue(OwnerAvatar, OldAvatar);
		SetAvatarOwner(NewAvatarOwner);
	}
}

void UItemComponentBase::ItemDataChanged(UItemDataBase* RemovedData/* = nullptr*/, UItemDataBase* NewData /*= nullptr*/)
{
	OnItemDataChanged(RemovedData, NewData);

	ItemDataChangedDelegate.Broadcast(this, RemovedData, NewData);

	UItemGlobal* ItemGlobal = UItemBlueprintLib::GetItemGlobal();

	if (ItemGlobal)
	{
		ItemGlobal->ItemDataChangedDelegate.Broadcast(this, RemovedData, NewData);
	}
}

void UItemComponentBase::AddNewRuntimeData(UItemRuntimeDataBase* NewRuntimeData)
{
	//This runtime data have been added
	if( GetItemRuntimeDatas().Find(NewRuntimeData) != INDEX_NONE)
		return;

	ItemDatas.Add(NewRuntimeData);

	NewRuntimeData->Initialize(this);
}

void UItemComponentBase::RemoveItemRuntimeData(UItemRuntimeDataBase* RuntimeDataClass)
{
	for (auto IT = RuntimeDatas.CreateIterator(); IT; ++IT)
	{
		if (IT == nullptr || IT == RuntimeDataClass)
		{
			IT->Finialize();
			IT.RemoveCurrent();
			continue;
		}
	}
}