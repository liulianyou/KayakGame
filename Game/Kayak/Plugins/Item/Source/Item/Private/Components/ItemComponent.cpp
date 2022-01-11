#include "ItemComponent.h"
#include "ItemManager.h"
#include "ItemBlueprintLib.h"
#include "Net/UnrealNetwork.h"
#include "Engine/ActorChannel.h"
#include "ItemDataBase.h"
#include "ItemBlueprintLib.h"
#include "ItemDefinition.h"
#include "ItemGlobal.h"

FRuntimeDataItem::FRuntimeDataItem()
	:PendingRemoved(false)
{
	
}

FRuntimeDataItem::FRuntimeDataItem(UItemRuntimeDataBase* _RuntimeData, FRuntimeDataItem* _PreElement, FRuntimeDataItem* _NextElement)
	: PendingRemoved(false),
	RuntimeData(_RuntimeData),
	PreElement(_PreElement),
	NextElement(_NextElement)
{
	
}

~FRuntimeDataItem::FRuntimeDataItem()
{
	if (RuntimeData != null && RuntimeData->IsValidLowLevel())
	{
		RuntimeData->Finalize();
		RuntimeData->MarkForPendingKill();
	}
}

bool FRuntimeDataItem::IsValid() const
{
	if(RuntimeData == nullptr || !RuntimeData->IsValidLowLevel())
		return false;

	if(PendingRemoved)
		return false;

	return true;
}

void FRuntimeDataItem::PreReplicatedRemove(const struct FItemRuntimeDataContainer& InArray)
{
	PendingRemoved = true;
}

void FRuntimeDataItem::PostReplicatedAdd(const struct FItemRuntimeDataContainer& InArray)
{
	
}

void FRuntimeDataItem::PostReplicatedChange(const struct FItemRuntimeDataContainer& InArray)
{
	
}

FItemRuntimeDataContainer::FItemRuntimeDataContainer()
	:FFastArraySerializer()
{
	Items.Empty();
	SetDeltaSerializationEnabled(true);

	EndPendingElementPtr = &HeadPendingElement;
}

void FItemRuntimeDataContainer::RegiseterComponentOwner(UItemComponentBase* ComponentOwner)
{
	ItemOwner = ComponentOwner;
}


bool FItemRuntimeDataContainer::IsValid()
{
	if(RuntimeData == nullptr)
		return false;

	return true;
}

void FItemRuntimeDataContainer::AddNewItem(UItemRuntimeDataBase* NewItem)
{
	if(NewItem == nullptr)
		return;
	
	bool IsExist = true;

	for (const FRuntimeDataItem& Item : this)
	{
		if (Item == NewItem)
		{
			Item.PendingRemoved = false;
			IsExist = true;
			break;
		}
	}

	if (!IsExist)
	{
		//This is the first element try to added to array
		if (EndPendingElementPtr == nullptr)
		{
			*EndPendingElementPtr = new FRuntimeDataItem(NewItem);
		}
		else
		{
			**EndPendingElementPtr = new FRuntimeDataItem(NewItem);
		}

		EndPendingElementPtr = &((*EndPendingElementPtr)->NextElement);
	}
}

void FItemRuntimeDataContainer::RemoveItem(UItemRuntimeDataBase* OldItem)
{
	for (const FRuntimeDataItem& Item : this)
	{
		if (Item == OldItem)
		{
			//The actual remove action will be occurred at the DecrementLock
			Item.PendingRemoved = true;
			break;
		}
	}
}

int FItemRuntimeDataContainer::GetIndexOfItem(UItemRuntimeDataBase* RuntimeData)
{
	for (auto IT = CreateIterator(0, true); IT; ++IT)
	{
		if (IT->RuntimeData == RuntimeData)
			return IT->GetIndex();
	}
}

UItemRuntimeDataBase* GetItemByIndex(int Index)
{
	for (auto IT = CreateIterator(0, true); IT; ++IT)
	{
		if (IT.GetIndex() == Index)
			return IT.GetValue();
	}

	return nullptr;
}

void FItemRuntimeDataContainer::GetItemCount() const
{
	int Count = Items.Num();

	FRuntimeDataItem* Current = HeadPendingElement;
	FRuntimeDataItem* Stop = *EndPendingElementPtr;

	while (Current != Stop)
	{
		Count++;
		Current = Current->NextElement;
	}

	return Count;
}

void FItemRuntimeDataContainer::IncrementLock()
{
	LockCount++;
}

void FItemRuntimeDataContainer::DecrementLock()
{
	if(--LockCount != 0)
		return;
	
	int RemoveCount = 0;
	bool ModifiedArray = false;

	for (auto IT = CreateIterator(); IT; ++IT)
	{
		if (!(*IT))
		{
			IT.RemoveCurrent();

			ModifiedArray = true;
		}
	}

	//Reset the end element so that the add and remove  operation will occurs when the the elements has been changed
	EndPendingElementPtr = &HeadPendingElement;

	if (ModifiedArray)
	{
		MarkArrayDirty();
	}
}

UItemComponentBase::UItemComponentBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	RuntimeDataContainer.RegiseterComponentOwner(this);
}

void UItemComponentBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UItemComponentBase, OwnerAvatar);
	DOREPLIFETIME(UItemComponentBase, RuntimeDataContainer);
}

bool UItemComponentBase::ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags)
{
	bool WroteSomething = Super::ReplicateSubobjects(Channel, Bunch, RepFlags);

	for (const FRuntimeDataItem& Item : RuntimeDataContainer)
	{
		WroteSomething |= Item.RuntimeData->ReplicateSubobjects(Channel, Bunch, RepFlags);

		WroteSomething |= Channel->ReplicateSubobject(const_cast<UItemRuntimeDataBase*>(Item.RuntimeData), *Bunch, *RepFlags);
	}

	return WroteSomething;
}

void UItemComponentBase::PreNetReceive()
{
	Super::PreNetReceive();

	RuntimeDataContainer.IncrementLock();
}

void UItemComponentBase::PostNetReceive()
{
	Super::PostNetReceive();

	//Try to release the resources for the runtime data
	RuntimeDataContainer.DecrementLock();
}

void UItemComponentBase::BeginPlay()
{
	Super::BeginPlay();
	
	for (const FRuntimeDataItem& Item: RuntimeDataContainer)
	{
		Item.RuntimeData->BeginPlay();
	}
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

int UItemComponentBase::FindRuntimeDataIndex(UItemRuntimeDataBase* RuntimeData)
{
	return RuntimeDataContainer.GetIndexOfItem(RuntimeData);
}

void UItemComponentBase::ActivateItem(int Index /*= INDEX_NONE*/)
{
	if (Index == INDEX_NONE)
	{
		
	}
}

void UItemComponentBase::DeactivateItem(int Index /*= INDEX_NONE*/)
{
	if (Index == INDEX_NONE)
	{

	}

	//RuntimeData->DeactivateItem();
}

void UItemComponentBase::StartUse(int Index /*= INDEX_NONE*/)
{
	//RuntimeData->StartUse();
}

void UItemComponentBase::StopUse(int Index/* = INDEX_NONE*/)
{
	//RuntimeData->StopUse();
}

void UItemComponentBase::Abandoned(const FItemScopeChangeInfo& AbandonInfo)
{
	//RuntimeData->Abandoned(AbandonInfo);
}

void UItemComponentBase::Gained(const FItemScopeChangeInfo& GainedInfo)
{
	//RuntimeData->Gained(GainedInfo);
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

	AvatarOwnerChanged.Broadcast(this, OldAvatarOnwer, NewAvatar);

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

void UItemComponentBase::RemoveItemData(UItemDataBase* ItemData)
{
	
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

void UItemComponentBase::AddNewRuntimeData(UItemRuntimeDataBase* NewRuntimeData)
{
	NewRuntimeData->SetItemComponentOwner(this);

	RuntimeDataContainer.AddNewItem(NewRuntimeData);
}

void UItemComponentBase::RemoveItemRuntimeData(UItemRuntimeDataBase* RuntimeData)
{
	RuntimeDataContainer.RemoveItem(RuntimeData);
}