#include "ItemDataBase.h"
#include "Net/UnrealNetwork.h"
#include "ItemBlueprintLib.h"
#include "ItemGlobal.h"
#include "ItemComponentBase.h"
#include "ItemNetworkSupportComponent.h"
#include "ItemDataSnippetBase.h"

FItemDataSnippetInfo FItemDataSnippetInfo::InvalidData;

UItemDataBase::UItemDataBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	Datas.Empty();
}

bool UItemDataBase::IsValidItemData() const
{
	return !(IsPendingKill() || RuntimdDataClass == nullptr);
}

void UItemDataBase::Initialize()
{
	if(bInitialized)
		return;

	OnInitialize();

	for (int i = 0; i < DataTypes.Num(); i++)
	{
		if(DataTypes[i] == nullptr)
			continue;

		UItemDataSnippetBase* DataSnippet = NewObject<UItemDataSnippetBase>(this, DataTypes[i]);

		DataSnippet->SetItemDataOwner(this);

		Datas.Add(DataSnippet);
	}

	bInitialized = true;
}

void UItemDataBase::Finialize()
{
	if(!IsUnreachable())
		OnFinialize();

	for (auto IT = GetReferencedItemComponents_Mutable().CreateIterator(); IT; ++IT)
	{
		RemoveReferencedComponent(*IT);
	}

	GetReferencedItemComponents_Mutable().Empty();
}

void UItemDataBase::BeginDestroy()
{
	Super::BeginDestroy();

	for (auto It = GetReferencedItemComponents().CreateConstIterator(); It; ++It)
	{
		RemoveReferencedComponent(*It);
	}

	UItemManager* ItemManager =	UItemBlueprintLib::GetItemManager();

	if (ItemManager != nullptr)
	{
		ItemManager->RemoveItemData(this);
	}
}

void UItemDataBase::AddReferencedComponent(UItemComponentBase* ItemComponent)
{
	if (ItemComponent == nullptr)
		return;

	if (GetReferencedItemComponents().Find(ItemComponent) == INDEX_NONE)
	{
		//Add this compoment before any other operation to avoid infinity loop
		GetReferencedItemComponents_Mutable().Add(ItemComponent);

		ItemComponent->AddNewItemData(this);

		OnAddReferencedComponent(ItemComponent);
	}
}

void UItemDataBase::RemoveReferencedComponent(UItemComponentBase* ItemComponent)
{
	if(ItemComponent == nullptr)
		return;

	for (auto IT = GetReferencedItemComponents_Mutable().CreateIterator(); IT; ++IT)
	{
		if (*IT == ItemComponent)
		{
			//Remove this element before the item component action to avoid infinity loop
			IT.RemoveCurrent();

			ItemComponent->RemoveItemData(this);

			if (!IsUnreachable())
				OnRemoveReferencedComponent(ItemComponent);

			break;
		}
	}
}

UItemRuntimeDataBase* UItemDataBase::CreateNewRuntimeData(UItemComponentBase* ItemComponentOwner)
{
	if(ItemComponentOwner == nullptr || !IsValidItemData())
		return nullptr;

	//Only the authority component can get the new runtime data or the runtime data will be replicated
	check(ItemComponentOwner->HasAuthority());

	UItemRuntimeDataBase* Result = nullptr;

	if (GetClass()->IsFunctionImplementedInScript(GET_FUNCTION_NAME_CHECKED(UItemDataBase, OnCreateNewRuntimeData)))
	{
		Result = OnCreateNewRuntimeData(ItemComponentOwner);

		if (Result == nullptr)
		{
			UE_LOG(LogItem, Warning, TEXT("Trying to create new runtime data in the BP function: OnCreateNewRuntimeData in class %s which returned nullptr, pleack check BP function or rmeove it, let native class to create new runtime Data"), *GetClass()->GetName());
		}
	}

	Result = NewObject<UItemRuntimeDataBase>(ItemComponentOwner, GetRuntimeDataClass().Get());

	if (Result != nullptr)
	{
		Result->Initialize(this);

		Result->SetItemComponentOwner(ItemComponentOwner);

		AddReferencedComponent(ItemComponentOwner);
	}

	return Result;
}

bool FItemDataSnippetInfo::IsValid() const
{
	return Item != nullptr || !Item->IsValidLowLevel();
}

void FItemDataSnippetInfo::PreReplicatedRemove(const struct FItemDataSnippetContainer& InArray)
{
	
}

void FItemDataSnippetInfo::PostReplicatedAdd(const struct FItemDataSnippetContainer& InArray)
{
	
}

void FItemDataSnippetInfo::PostReplicatedChange(const struct FItemDataSnippetContainer& InArray)
{
	
}

void FItemDataSnippetContainer::AddNewItem(UItemDataSnippetBase* NewItem)
{
	if(NewItem == nullptr)
		return;

	Items.AddUnique(FItemDataSnippetInfo(NewItem));

	if(GetRuntimeDataOwner() == nullptr)
		return;

	GetRuntimeDataOwner()->AddDataSnippet(NewItem);
}

void FItemDataSnippetContainer::RemoveItem(UItemDataSnippetBase* RemovedItem)
{
	Items.Remove(FItemDataSnippetInfo(RemovedItem));
}

void FItemDataSnippetContainer::RegisterItemRuntimeData(UItemRuntimeDataBase* ItemRuntimeDataOwner)
{
	ItemRuntimeData = ItemRuntimeDataOwner;
}

UItemDataSnippetBase* FItemDataSnippetContainer::GetDataSnippetByIndex( int Index ) const
{
	if(!Items.IsValidIndex(Index))
		return nullptr;

	return Items[Index].Item;
}

int FItemDataSnippetContainer::Num() const 
{
	return Items.Num();
}

const FItemDataSnippetInfo& FItemDataSnippetContainer::operator[](int index) const
{
	if(!Items.IsValidIndex(index))
		return FItemDataSnippetInfo::InvalidData;

	return Items[index];
}

FItemDataSnippetInfo& FItemDataSnippetContainer::operator[](int index)
{
	if (!Items.IsValidIndex(index))
		return FItemDataSnippetInfo::InvalidData;

	return Items[index];
}

int FItemDataSnippetContainer::GetIndex(UItemDataSnippetBase* DataSnippet) const
{
	return Items.Find(FItemDataSnippetInfo(DataSnippet));
}

void FItemDataSnippetContainer::Clear( bool JustEmpty /*bJustEmpty = false*/)
{
	if (JustEmpty)
	{
		Items.Empty();

		return;
	}

	/*
	* As the loop content may change the items length so I use while 
	*/
	while (Items.Num() > 0)
	{
		if (bool(Items[Items.Num()-1]))
		{
			Items[Items.Num() - 1].Item->SetItemRuntimeDataOwner(nullptr);
		}
	}
}

UItemRuntimeDataBase::UItemRuntimeDataBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	DataSnippetContainer.RegisterItemRuntimeData(this);
}

void UItemRuntimeDataBase::BeginPlay()
{
	OnBeginPlay();
}

void UItemRuntimeDataBase::BeginDestroy()
{
	SetItemComponentOwner(nullptr);

	Super::BeginDestroy();
}

bool UItemRuntimeDataBase::IsNameStableForNetworking() const
{
	return bNetAddressable || Super::IsNameStableForNetworking();
}

int32 UItemRuntimeDataBase::GetFunctionCallspace(UFunction* Function, FFrame* Stack)
{
	if (GetComponentOwner() == nullptr)
	{
		return FunctionCallspace::Local;
	}

	AActor* MyOwner = GetComponentOwner()->GetOwner();
	return (MyOwner ? MyOwner->GetFunctionCallspace(Function, Stack) : FunctionCallspace::Local);
}

bool UItemRuntimeDataBase::CallRemoteFunction(UFunction* Function, void* Parms, struct FOutParmRec* OutParms, FFrame* Stack)
{
	bool bProcessed = false;

	if (AActor* MyOwner = GetComponentOwner()->GetOwner())
	{
		FWorldContext* const Context = GEngine->GetWorldContextFromWorld(GetWorld());
		if (Context != nullptr)
		{
			for (FNamedNetDriver& Driver : Context->ActiveNetDrivers)
			{
				if (Driver.NetDriver != nullptr && Driver.NetDriver->ShouldReplicateFunction(MyOwner, Function))
				{
					Driver.NetDriver->ProcessRemoteFunction(MyOwner, Function, Parms, OutParms, Stack, this);
					bProcessed = true;
				}
			}
		}
	}

	return bProcessed;
}

bool UItemRuntimeDataBase::ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags)
{
	//To replicate sub objects in this data

	bool WroteSomething = false;

	for (int i = 0; i < GetItemDataSnippetContanier().Num(); i++)
	{
		if (bool(GetItemDataSnippetContanier()[i]) != false && GetItemDataSnippetContanier().GetDataSnippetByIndex(i)->IsSupportedForNetworking())
		{
			WroteSomething |= GetItemDataSnippetContanier().GetDataSnippetByIndex(i)->ReplicateSubobjects(Channel, Bunch, RepFlags);

			WroteSomething |= Channel->ReplicateSubobject(const_cast<UItemDataSnippetBase*>(GetItemDataSnippetContanier().GetDataSnippetByIndex(i)), *Bunch, *RepFlags);
		}
	}

	return WroteSomething;

	return false;
}

//Make sure the BP can use the global functions
UWorld* UItemRuntimeDataBase::GetWorld() const
{
	if (HasAnyFlags(RF_ClassDefaultObject))
	{
		//When we open the defaulat object of this class then just return null to fool the UObject::ImplementsGetWorld by make the bGetWorldOverridden to be
		return nullptr;
	}
	else if (GetComponentOwner() != nullptr)
	{
		return GetComponentOwner()->GetWorld();
	}
	else
	{
		return GetOuter()->GetWorld();
	}

	return nullptr;
}

void UItemRuntimeDataBase::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	/*
	* Make the replicator to inspect the replicated properties in the BP task
	*/
	UBlueprintGeneratedClass* BPClass = Cast<UBlueprintGeneratedClass>(GetClass());
	if (BPClass != NULL)
	{
		BPClass->GetLifetimeBlueprintReplicationList(OutLifetimeProps);
	}

	DOREPLIFETIME(UItemRuntimeDataBase, ItemOwner);
}

void UItemRuntimeDataBase::PreNetReceive()
{
	Super::PreNetReceive();
}

void UItemRuntimeDataBase::PostNetReceive()
{
	Super::PostNetReceive();
}

void UItemRuntimeDataBase::SetItemComponentOwner(UItemComponentBase* ItemComponent)
{
	if(ItemComponent == ItemOwner)
		return;

	if (ItemOwner != nullptr)
	{
		if (GetReferencedItemData() == nullptr)
		{
			AController* Controller = ItemOwner->GetAvatarOwner();

			if (Controller == nullptr && GetWorld())
			{
				Controller = GetWorld()->GetFirstPlayerController();

				if (Controller != nullptr)
				{
					UItemNetworkSupportComponent* NetSupport = UItemBlueprintLib::GetItemNetworkSupportComponent(Controller, GetWorld());

					if (NetSupport != nullptr)
					{
						NetSupport->Server_RemoveItemRuntimeData(this, ItemOwner);
					}
				}
			}
		}
		else
		{
			ItemOwner->RemoveItemData(GetReferencedItemData());
		}
	}

	ItemOwner = ItemComponent;

	if (ItemComponent != nullptr)
	{
		if (GetReferencedItemData() == nullptr)
		{
			AController* Controller = ItemOwner->GetAvatarOwner();

			if (Controller == nullptr)
			{
				Controller = GetWorld()->GetFirstPlayerController();

				if (Controller != nullptr)
				{
					UItemNetworkSupportComponent* NetSupport = UItemBlueprintLib::GetItemNetworkSupportComponent(Controller, GetWorld());

					if (NetSupport != nullptr)
					{
						NetSupport->Server_AddItemRuntimeData(this, ItemComponent);
					}
				}
			}
		}
		else
		{
			ItemComponent->AddNewItemData(GetReferencedItemData());
		}
	}
}

void UItemRuntimeDataBase::Initialize(UItemDataBase* ItemData)
{
	if(bInitialized)
		return;

	if(ItemData == nullptr)
		return;

	for (int i = 0; i < ItemData->GetDatas().Num(); i++)
	{
		UItemDataSnippetBase* SnippetData = DuplicateObject<UItemDataSnippetBase>(ItemData->GetDatas()[i], this);

		SnippetData->SetItemRuntimeDataOwner(this);

		DataSnippetContainer.AddNewItem(SnippetData);
	}

	OnInitialize(ItemData);

	bInitialized = true;
}

void UItemRuntimeDataBase::Finialize()
{
	if (IsUnreachable())
		OnFinialize();

	DeactivateItem();

	SetItemComponentOwner(nullptr);
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

bool UItemRuntimeDataBase::HasAuthority() const
{
	//By default this data has not authority
	if(GetComponentOwner() == nullptr)
		return false;

	return GetComponentOwner()->HasAuthority();
}

void UItemRuntimeDataBase::RemoveDataSnippet(UItemDataSnippetBase* DataSnippet)
{
	if(DataSnippet == nullptr || FindDataSnippet(DataSnippet) != INDEX_NONE)
		return;

	if (HasAuthority())
	{
		InternalRemoveDataSnippet(DataSnippet);

		return;
	}

	UItemNetworkSupportComponent* NetSupportComponent = UItemBlueprintLib::GetItemNetworkSupportComponent(this, GetWorld());

	if (NetSupportComponent == nullptr)
	{
		UE_LOG(LogItem, Warning, TEXT("Try to remove data snippet on the chilet while there is no ItemNetworkSupprotComponent in it. You can add this component to the lacal player controller!!!"));
		return ;
	}

	NetSupportComponent->Server_AddDataSnippet(this, DataSnippet);
}

void UItemRuntimeDataBase::AddDataSnippet(UItemDataSnippetBase* DataSnippet)
{
	if (DataSnippet == nullptr || FindDataSnippet(DataSnippet) != INDEX_NONE)
		return;

	if (HasAuthority())
	{
		InternalAddDataSnippet(DataSnippet);

		return;
	}

	UItemNetworkSupportComponent* NetSupportComponent = UItemBlueprintLib::GetItemNetworkSupportComponent(this, GetWorld());

	if (NetSupportComponent == nullptr)
	{
		UE_LOG(LogItem, Warning, TEXT("Try to add data snippet on the chilet while there is no ItemNetworkSupprotComponent in it. You can add this component to the lacal player controller!!!"));
		return ;
	}

	NetSupportComponent->Server_AddDataSnippet(this, DataSnippet);
}

int UItemRuntimeDataBase::FindDataSnippet(UItemDataSnippetBase* DataSnippet)
{
	if(DataSnippet == nullptr)
		return INDEX_NONE;

	return GetItemDataSnippetContanier().GetIndex(DataSnippet);
}

bool UItemRuntimeDataBase::HasData(const FString& PropertyName, TSubclassOf<UItemDataSnippetBase> DataSnippetType/* = nullptr*/)
{
	return false;
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

	ToggleItemStateChanged(EItemState::Holding);
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

void UItemRuntimeDataBase::AvatarOwnerChanged(UItemInventoryComponent* OldAvatarOwner, UItemInventoryComponent* NewAvatarOwner)
{
	if (GetClass()->IsFunctionImplementedInScript(GET_FUNCTION_NAME_CHECKED(UItemRuntimeDataBase, OnAvatarOwnerChanged)))
	{
		OnAvatarOwnerChanged(OldAvatarOwner, NewAvatarOwner);
	}
}

void UItemRuntimeDataBase::OnRep_ItemOwner(UItemComponentBase* OldItemOnwer)
{
	if(OldItemOnwer == ItemOwner)
		return;

	SetItemComponentOwner(ItemOwner);
}

void UItemRuntimeDataBase::OnRep_DataSnippetContainer(const FItemDataSnippetContainer& OldData)
{

}

void UItemRuntimeDataBase::ToggleItemStateChanged(EItemState NewItemState)
{
	ItemState = NewItemState;
}

void UItemRuntimeDataBase::InternalRemoveDataSnippet(UItemDataSnippetBase* DataSnippet)
{
	if(DataSnippet == nullptr || FindDataSnippet(DataSnippet) != INDEX_NONE)
		return;

	GetItemDataSnippetContanier_Mutable().AddNewItem(DataSnippet);

	//Set the owner of the data snippet to be nullptr.
	DataSnippet->SetItemRuntimeDataOwner(nullptr);
}

void UItemRuntimeDataBase::InternalAddDataSnippet(UItemDataSnippetBase* DataSnippet)
{
	if (DataSnippet == nullptr || FindDataSnippet(DataSnippet) != INDEX_NONE)
		return;

	GetItemDataSnippetContanier_Mutable().RemoveItem(DataSnippet);

	//Set the owner of the data snippet to be this runtime data
	DataSnippet->SetItemRuntimeDataOwner(this);
}

void UItemRuntimeDataBase::ItemDataChangedInItemOwner(UItemComponentBase* Item, UItemDataBase* OldData, UItemDataBase* NewData)
{
	OnItemDataChangedInItemOwner(Item, OldData, NewData);
}

AController* UItemRuntimeDataBase::GetAvatarOwner() const
{
	if(GetComponentOwner() == nullptr)
		return nullptr;

	return GetComponentOwner()->GetAvatarOwner();
}

UItemInventoryComponent* UItemRuntimeDataBase::GetInventoryOwner() const
{
	if (GetComponentOwner() == nullptr)
		return nullptr;

	return GetComponentOwner()->GetInventoryOwner();
}

void UItemRuntimeDataBase::OnRep_ID()
{
	
}

