#include "ItemDataBase.h"
#include "Net/UnrealNetwork.h"
#include "ItemBlueprintLib.h"
#include "ItemGlobal.h"
#include "ItemComponent.h"

UItemDataBase::UItemDataBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	
}

bool UItemDataBase::IsValidItemData()
{
	return !(IsPendingKill() || RuntimdDataClass == nullptr);
}

void UItemDataBase::InitializeInternal()
{
	if (!ID.IsValid())
	{
		ID = FGuid::NewGuid();
	}
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

	if (RuntimdDataClass != nullptr)
	{
		UItemRuntimeDataBase* NewItemRunttmeData = NewObject<UItemRuntimeDataBase>(ItemComponent, RuntimdDataClass);

		if (NewItemRunttmeData)
		{
			ItemComponent->AddNewRuntimeData(NewItemRunttmeData);

			GetReferencedItemComponents_Mutable().Add(ItemComponent, NewItemRunttmeData);

			OnAddReferencedComponent(ItemComponent);
		}
	}
}

void UItemDataBase::RemoveReferencedComponent(UItemComponentBase* ItemComponent)
{
	if(ItemComponent == nullptr)
		return;

	for (auto IT = GetReferencedItemComponents_Mutable().CreateIterator(); IT; ++IT)
	{
		if (IT.Key() == ItemComponent)
		{
			IT.Key()->RemoveItemRuntimeData(IT.Value());

			OnRemoveReferencedComponent(ItemComponent);

			IT.RemoveCurrent();
		}
	}
}

UItemRuntimeDataBase::UItemRuntimeDataBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

void UItemRuntimeDataBase::BeginPlay()
{
	OnBeginPlay();
}

void UItemRuntimeDataBase::BeginDestroy()
{
	Super::BeginDestroy();
}

bool UItemRuntimeDataBase::IsNameStableForNetworking() const
{
	return bNetAddressable :: Super::IsNameStableForNetworking();
}

bool UItemRuntimeDataBase::IsSupportedForNetworking() const
{
	return true;
}

int32 UItemRuntimeDataBase::GetFunctionCallspace(UFunction* Function, FFrame* Stack)
{
	if (GetItemOwner() == nullptr)
	{
		return FunctionCallspace::Local;
	}

	AActor* MyOwner = GetItemOwner()->GetOwner();
	return (MyOwner ? MyOwner->GetFunctionCallspace(Function, Stack) : FunctionCallspace::Local);
}

bool UItemRuntimeDataBase::CallRemoteFunction(UFunction* Function, void* Parms, struct FOutParmRec* OutParms, FFrame* Stack)
{
	bool bProcessed = false;

	if (AActor* MyOwner = GetItemOwner()->GetOwner())
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

bool UItemRuntimeDataBase::ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags);
{
	//To replicate sub objects in this data
	/*
	bool WroteSomething = false;

	if (SubObject->IsSupportedForNetworking())
	{
		SubObject->ReplicateSubobjects(Channel, Bunch, RepFlags);

		WroteSomething |= Channel->ReplicateSubobject(const_cast<SubObjectClass*>(SubObject), *Bunch, *RepFlags);
	}

	return WroteSomething;
	*/
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
	else if (GetItemOwner() != nullptr)
	{
		return GetItemOwner()->GetWorld();
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

	DOREPLIFETIME(UItemRuntimeDataBase, ItemOwner);
}

void UItemRuntimeDataBase::Initialize(UItemComponentBase* ItemComponent)
{
	OnInitialzie(ItemComponent);

	ItemOwner = ItemComponent;
}

void UItemRuntimeDataBase::Finialize()
{
	OnFinialize();

	ItemOwner = nullptr;
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


void UItemRuntimeDataBase::InitializeFromNewDataInternal(UItemDataBase* NewData)
{
	if (GetClass()->IsFunctionImplementedInScript(GET_FUNCTION_NAME_CHECKED(UItemRuntimeDataBase, OnInitializeDataFromNewDataInternal)))
	{
		OnInitializeDataFromNewDataInternal(NewData);
	}
}

void UItemRuntimeDataBase::AvatarOwnerChanged(UItemInventoryComponent* NewAvatarOwner)
{
	if (GetClass()->IsFunctionImplementedInScript(GET_FUNCTION_NAME_CHECKED(UItemRuntimeDataBase, OnAvatarOwnerChanged)))
	{
		OnAvatarOwnerChanged(NewAvatarOwner);
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

void UItemRuntimeDataBase::MarkDataPrepared()
{
	bDataPrepared = true;

	DataPreparedEvent.Broadcast(this);
}

