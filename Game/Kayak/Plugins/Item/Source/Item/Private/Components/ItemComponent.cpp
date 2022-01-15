#include "ItemComponent.h"
#include "ItemManager.h"
#include "ItemBlueprintLib.h"
#include "Net/UnrealNetwork.h"
#include "Engine/ActorChannel.h"
#include "ItemDataBase.h"
#include "ItemBlueprintLib.h"
#include "ItemDefinition.h"
#include "ItemGlobal.h"
#include "ItemInventroyComponent.h"

FRuntimeDataItem::FRuntimeDataItem()
	: RuntimeData(nullptr)
	, PendingRemoved(false)
	, PreElement(nullptr)
	, NextElement(nullptr)
{
	
}

FRuntimeDataItem::FRuntimeDataItem(UItemRuntimeDataBase* _RuntimeData, FRuntimeDataItem* _PreElement, FRuntimeDataItem* _NextElement)
	: RuntimeData(_RuntimeData)
	, PendingRemoved(false)
	, PreElement(_PreElement)
	, NextElement(_NextElement)
{
	
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

void FItemRuntimeDataContainer::AddNewItem(UItemRuntimeDataBase* NewItem)
{
	if(NewItem == nullptr)
		return;
	
	bool IsExist = true;

	for (auto IT = CreateIterator(0, false); IT; ++IT)
	{
		if ((*IT).RuntimeData == NewItem)
		{
			(*IT).PendingRemoved = false;
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
			**EndPendingElementPtr = FRuntimeDataItem(NewItem);
		}

		EndPendingElementPtr = &((*EndPendingElementPtr)->NextElement);
	}
}

void FItemRuntimeDataContainer::RemoveItem(UItemRuntimeDataBase* OldItem)
{
	for (auto IT = CreateIterator(); IT; ++IT)
	{
		if ((*IT).RuntimeData == OldItem)
		{
			//The actual remove action will be occurred at the DecrementLock
			(*IT).PendingRemoved = true;
			break;
		}
	}
}

int FItemRuntimeDataContainer::GetIndexOfItem(UItemRuntimeDataBase* RuntimeData)
{
	for (auto IT = CreateIterator(0, true); IT; ++IT)
	{
		if ((*IT).RuntimeData == RuntimeData)
			return IT.GetIndex();
	}

	return INDEX_NONE;
}

UItemRuntimeDataBase* FItemRuntimeDataContainer::GetRuntimeDataByIndex(int Index)
{
	for (auto IT = CreateIterator(0, true); IT; ++IT)
	{
		if (IT.GetIndex() == Index)
			return IT.GetValue()->RuntimeData;
	}

	return nullptr;
}

int FItemRuntimeDataContainer::GetItemCount() const
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

	for (auto IT = CreateIterator(0, false); IT; ++IT)
	{
		if (!(*IT))
		{
			if (IT.GetValue()->RuntimeData)
			{
				IT.GetValue()->RuntimeData->Finialize();
			}
			
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

void FItemRuntimeDataQueryFilter::GetRuntimeDatas( const UItemComponentBase* ItemComponent, TArray<UItemRuntimeDataBase*>& OuterRuntimeDatas) const
{
	OuterRuntimeDatas.Empty();

	uint8 QueryParameter = GenerateQueryParameter( Index != INDEX_NONE, ItemRuntimeDataClass != nullptr, ItemRuntimeDataInstance != nullptr, ItemDataClass != nullptr);

	if(ItemComponent == nullptr)
		return;

	for (auto IT = ItemComponent->GetItemRuntimeDataContainer().CreateConstIterator(); IT; ++IT)
	{
		uint8 LocalParameter = GenerateQueryParameter(
			IsMatchedForIndex(IT), 
			IsMatchedForItemRuntimeDataClass(IT), 
			IsMatchedForItemRuntimeDataInstance(IT),
			IsMatchedForItemDataClass(IT));

		if (LocalParameter == QueryParameter)
		{
			OuterRuntimeDatas.Add(IT.GetValue()->RuntimeData);
		}
	}
}

uint8 FItemRuntimeDataQueryFilter::GenerateQueryParameter(bool IsValidIndex, bool IsValidRuntimeDataClass, bool IsValidRuntimeDataInstance, bool IsValidItemDataClass) const
{
	uint8 Result = 0;

	Result |= !IsValidIndex					? ~EQueryParameter::EIndex						: EQueryParameter::EIndex;
	Result |= !IsValidRuntimeDataClass		? ~EQueryParameter::EItemRuntimeDataClass		: EQueryParameter::EItemRuntimeDataClass;
	Result |= !IsValidRuntimeDataInstance 	? ~EQueryParameter::EItemRunntimeDataInstance	: EQueryParameter::EItemRunntimeDataInstance;
	Result |= !IsValidItemDataClass			? ~EQueryParameter::EItemDataClass				: EQueryParameter::EItemDataClass;

	return Result;
}

bool FItemRuntimeDataQueryFilter::IsMatchedForIndex(const FItemRuntimeDataContainer::ConstIterator& IT) const
{
	if(!IT )
		return false;

	return (IT.GetIndex() == Index);
}

bool FItemRuntimeDataQueryFilter::IsMatchedForItemRuntimeDataClass(const FItemRuntimeDataContainer::ConstIterator& IT) const
{
	if (!IT)
		return false;

	if (IT.GetValue()->RuntimeData == nullptr)
		return false;

	return ItemRuntimeDataClass != IT.GetValue()->RuntimeData->GetClass();
}

bool FItemRuntimeDataQueryFilter::IsMatchedForItemRuntimeDataInstance(const FItemRuntimeDataContainer::ConstIterator& IT) const
{
	if (!IT)
		return false;

	return ItemRuntimeDataInstance != IT.GetValue()->RuntimeData;
}

bool FItemRuntimeDataQueryFilter::IsMatchedForItemDataClass(const FItemRuntimeDataContainer::ConstIterator& IT) const
{
	if (!IT)
		return false;

	if (IT.GetValue()->RuntimeData == nullptr || IT.GetValue()->RuntimeData->GetItemData() == nullptr)
		return false;


	return IT.GetValue()->RuntimeData->GetItemData()->GetClass() == ItemDataClass;
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

	for (auto IT = RuntimeDataContainer.CreateIterator(); IT; ++IT)
	{
		WroteSomething |= (*IT).RuntimeData->ReplicateSubobjects(Channel, Bunch, RepFlags);

		WroteSomething |= Channel->ReplicateSubobject(const_cast<UItemRuntimeDataBase*>((*IT).RuntimeData), *Bunch, *RepFlags);
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
	
	for (auto IT = RuntimeDataContainer.CreateIterator(); IT; ++IT)
	{
		(*IT).RuntimeData->BeginPlay();
	}
}

void UItemComponentBase::BeginDestroy()
{
	Super::BeginDestroy();
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

	OnRegisterComponent();
}

void UItemComponentBase::UnregisterComponent()
{
	UItemManager* ItemManager = UItemBlueprintLib::GetItemManager();

	if (ItemManager != nullptr)
	{
		ItemManager->UnregisterItem(GetItemOwner());
	}

	for (auto IT = RuntimeDataContainer.CreateIterator(); IT; ++IT)
	{
		IT.GetValue()->RuntimeData->Finialize();

		IT.RemoveCurrent();
	}

	OnUnregisterComponent();
}

void UItemComponentBase::GetItemRuntimeData(const FItemRuntimeDataQueryFilter& QueryFilter, TArray<UItemRuntimeDataBase*>& OuterRuntimeData) const
{
	QueryFilter.GetRuntimeDatas(this, OuterRuntimeData);
}

void UItemComponentBase::ActivateItem(const FItemRuntimeDataQueryFilter& QueryFilter)
{
	TArray<UItemRuntimeDataBase*> RuntimeData;

	GetItemRuntimeData(QueryFilter, RuntimeData);

	for (int i = 0; i < RuntimeData.Num(); i++)
	{
		RuntimeData[i]->ActivateItem();
	}
}

void UItemComponentBase::DeactivateItem(const FItemRuntimeDataQueryFilter& QueryFilter)
{
	TArray<UItemRuntimeDataBase*> RuntimeData;

	GetItemRuntimeData(QueryFilter, RuntimeData);

	for (int i = 0; i < RuntimeData.Num(); i++)
	{
		RuntimeData[i]->DeactivateItem();
	}
}

void UItemComponentBase::StartUse(const FItemRuntimeDataQueryFilter& QueryFilter)
{
	TArray<UItemRuntimeDataBase*> RuntimeData;

	GetItemRuntimeData(QueryFilter, RuntimeData);

	for (int i = 0; i < RuntimeData.Num(); i++)
	{
		RuntimeData[i]->StartUse();
	}
}

void UItemComponentBase::StopUse(const FItemRuntimeDataQueryFilter& QueryFilter)
{
	TArray<UItemRuntimeDataBase*> RuntimeData;

	GetItemRuntimeData(QueryFilter, RuntimeData);

	for (int i = 0; i < RuntimeData.Num(); i++)
	{
		RuntimeData[i]->StopUse();
	}
}

void UItemComponentBase::Abandoned(const FItemScopeChangeInfo& AbandonInfo, const FItemRuntimeDataQueryFilter& QueryFilter)
{
	TArray<UItemRuntimeDataBase*> RuntimeData;

	GetItemRuntimeData(QueryFilter, RuntimeData);

	for (int i = 0; i < RuntimeData.Num(); i++)
	{
		RuntimeData[i]->Abandoned(AbandonInfo);
	}
}

void UItemComponentBase::Gained(const FItemScopeChangeInfo& GainedInfo, const FItemRuntimeDataQueryFilter& QueryFilter)
{
	TArray<UItemRuntimeDataBase*> RuntimeData;

	GetItemRuntimeData(QueryFilter, RuntimeData);

	for (int i = 0; i < RuntimeData.Num(); i++)
	{
		RuntimeData[i]->Gained(GainedInfo);
	}
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

bool UItemComponentBase::HasAuthority() const
{
	if (GetOwner() != nullptr)
	{
		return GetOwner()->HasAuthority();
	}
	else if(GetItemOwner() != nullptr)
	{
		return GetItemOwner()->HasAuthority();
	}
	else if (GetAvatarOwner() != nullptr && GetAvatarOwner()->GetOwner() != nullptr)
	{
		return GetAvatarOwner()->GetOwner()->HasAuthority();
	}

	return false;
}

void UItemComponentBase::SetAvatarOwner(UItemInventoryComponent* NewAvatar)
{
	UItemInventoryComponent* OldAvatarOnwer =OwnerAvatar;

	OwnerAvatar = NewAvatar;

	int RuntimeNum = RuntimeDataContainer.GetItemCount();

	for (auto IT = RuntimeDataContainer.CreateIterator(0, true); IT; ++IT)
	{
		(*IT).RuntimeData->AvatarOwnerChanged(OldAvatarOnwer, NewAvatar);
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
	if(NewData == nullptr || !NewData->IsValidItemData())
		return;

	TArray<UItemRuntimeDataBase*> RuntimeData;

	GetItemRuntimeData(FItemRuntimeDataQueryFilter(TSubclassOf<UItemRuntimeDataBase>(GetClass())), RuntimeData);

	//If the target item component already have this item runtime data which is bind to data, just skip this action
	if (RuntimeData.Num() != 0)
	{
		UE_LOG(LogItem, Display, TEXT("The compoment %s already have the target item data %s"), GetItemOwner() == nullptr ? TEXT("Invalid component") : GetItemOwner().GetObject() == nullptr ? TEXT("Invalid component") : *GetItemOwner().GetObject()->GetName() );
		return;
	}

	UItemRuntimeDataBase* NewItemRunttmeData = NewObject<UItemRuntimeDataBase>(this, NewData->GetRuntimeDataClass().Get());

	if (NewItemRunttmeData)
	{
		NewItemRunttmeData->Initialize(NewData);
	}

	AddNewRuntimeData(NewItemRunttmeData);

	NewData->AddReferencedComponent(this);
}

void UItemComponentBase::RemoveItemData(UItemDataBase* ItemData)
{
	if (ItemData == nullptr || !ItemData->IsValidItemData())
		return;

	ItemData->RemoveReferencedComponent(this);

	TArray<UItemRuntimeDataBase*> ItemRuntimeData;

	GetItemRuntimeData( FItemRuntimeDataQueryFilter( TSubclassOf<UItemDataBase>(ItemData->GetClass()) ), ItemRuntimeData);

	for (int i = 0; i < ItemRuntimeData.Num(); i++)
	{
		RemoveItemRuntimeData(ItemRuntimeData[i]);
	}
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

void UItemComponentBase::RemoveItemRuntimeData(UItemRuntimeDataBase* ItemRuntimeData)
{
	if(ItemRuntimeData == nullptr)
		return;

	RuntimeDataContainer.RemoveItem(ItemRuntimeData);

	ItemRuntimeData->Finialize();
}