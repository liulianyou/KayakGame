#include "ItemDataSnippetBase.h"
#include "Net/UnrealNetwork.h"
#include "ItemDataBase.h"

UItemDataSnippetBase::UItemDataSnippetBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	
}

void UItemDataSnippetBase::BeginDestroy()
{
	SetItemRuntimeDataOwner(nullptr);
	SetItemDataOwner(nullptr);

	Super::BeginDestroy();
}

bool UItemDataSnippetBase::IsNameStableForNetworking() const
{
	return bNetAddressable || Super::IsNameStableForNetworking();
}

int32 UItemDataSnippetBase::GetFunctionCallspace(UFunction* Function, FFrame* Stack)
{
	/*
	* As data snippet should only existed on the item data, and item runtime data
	* The item data only exist on the server, the data snippet in it will not use RPC function
	* I just use the function call space in the item runtime data
	*/
	if ( RuntimeDataOwner == nullptr || RuntimeDataOwner->GetComponentOwner() == nullptr)
	{
		return FunctionCallspace::Local;
	}

	AActor* MyOwner = RuntimeDataOwner->GetComponentOwner()->GetOwner();
	return (MyOwner ? MyOwner->GetFunctionCallspace(Function, Stack) : FunctionCallspace::Local);
}

bool UItemDataSnippetBase::CallRemoteFunction(UFunction* Function, void* Parms, struct FOutParmRec* OutParms, FFrame* Stack)
{
	bool bProcessed = false;

	if(GetItemRuntimeDataOwner() == nullptr)
		return bProcessed;

	if (AActor* MyOwner = GetItemRuntimeDataOwner()->GetComponentOwner()->GetOwner())
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

bool UItemDataSnippetBase::ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags)
{
	//To replicate sub objects in this data
	/*
	bool WroteSomething = false;

	if (SubObject->IsSupportedForNetworking())
	{
		WroteSomething |= SubObject->ReplicateSubobjects(Channel, Bunch, RepFlags);

		WroteSomething |= Channel->ReplicateSubobject(const_cast<SubObjectClass*>(SubObject), *Bunch, *RepFlags);
	}

	return WroteSomething;
	*/
	return false;
}

//Make sure the BP can use the global functions
UWorld* UItemDataSnippetBase::GetWorld() const
{
	if (HasAnyFlags(RF_ClassDefaultObject))
	{
		//When we open the defaulat object of this class then just return null to fool the UObject::ImplementsGetWorld by make the bGetWorldOverridden to be
		return nullptr;
	}
	else if ( GetItemRuntimeDataOwner() != nullptr && GetItemRuntimeDataOwner()->GetComponentOwner() != nullptr)
	{
		return GetItemRuntimeDataOwner()->GetComponentOwner()->GetWorld();
	}
	else
	{
		return GetOuter()->GetWorld();
	}

	return nullptr;
}

void UItemDataSnippetBase::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
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

	DOREPLIFETIME(UItemDataSnippetBase, RuntimeDataOwner);
}

void UItemDataSnippetBase::PreNetReceive()
{
	Super::PreNetReceive();
}

void UItemDataSnippetBase::PostNetReceive()
{
	Super::PostNetReceive();

	MarkDataPrepared();
}

void UItemDataSnippetBase::MarkDataPrepared()
{
	//If this data have been prepared do not mark it again
	if (bDataPrepared)
		return;

	bDataPrepared = true;

	if (RuntimeDataOwner != nullptr)
	{
		
	}
}

bool UItemDataSnippetBase::HasAuthority() const
{
	if(GetItemDataOwner() == nullptr && GetItemRuntimeDataOwner() == nullptr)
		return false;

	if (GetItemRuntimeDataOwner() != nullptr)
	{
		return GetItemRuntimeDataOwner()->HasAuthority();
	}
		return true;
}

bool UItemDataSnippetBase::HasProperty(const FItemDataSnippetProperty& Property) const
{
	return Property.IsValid() && 
	(GetClass()->IsChildOf(CastChecked<UClass>(Property.GetProperty()->GetOwner<UObject>())) ||
		CastChecked<UClass>(Property.GetProperty()->GetOwner<UObject>())->IsChildOf(GetClass()));
}

FItemDataSnippetProperty UItemDataSnippetBase::GetItemDataSnippetPropertyByName(const FString& PropertyName) const
{
	FProperty* Prop = FindFieldChecked<FProperty>(GetClass(), *PropertyName);
	return FItemDataSnippetProperty(Prop, const_cast<UItemDataSnippetBase*>(this));
}

void UItemDataSnippetBase::SetItemDataOwner(UItemDataBase* ItemData)
{
	if(ItemDataOwner == ItemData)
		return;

	ItemDataOwner = ItemData;

	if(!IsUnreachable())
		OnSetItemRuntimeDataOwner(RuntimeDataOwner);
}

void UItemDataSnippetBase::SetItemRuntimeDataOwner(UItemRuntimeDataBase* ItemRuntimeData)
{
	if(RuntimeDataOwner == ItemRuntimeData)
		return;

	if (ItemRuntimeData != nullptr && ItemRuntimeData->IsValidLowLevel())
	{
		ItemRuntimeData->RemoveDataSnippet(this);
	}

	RuntimeDataOwner = ItemRuntimeData;

	if (ItemRuntimeData != nullptr && ItemRuntimeData->IsValidLowLevel())
	{
		ItemRuntimeData->AddDataSnippet(this);
	}

	if (!IsUnreachable())
		OnSetItemRuntimeDataOwner(RuntimeDataOwner);
}

void UItemDataSnippetBase::Activate()
{
	OnActivate();
}

void UItemDataSnippetBase::Deactivate()
{
	OnDeactivate();
}

void UItemDataSnippetBase::Initialized()
{
	if(bInitialized)
		return;

	OnInitialized();

	MarkDataPrepared();
}

void UItemDataSnippetBase::OnRep_RuntimeDataOwner(UItemRuntimeDataBase* OldValue)
{
	UItemRuntimeDataBase* NewRuntimeDataValue = RuntimeDataOwner;

	TGuardValue<UItemRuntimeDataBase*> GuardValue( RuntimeDataOwner, OldValue );

	SetItemRuntimeDataOwner(NewRuntimeDataValue);
}

void UItemDataSnippetBase::OnRep_DataApplyRule(const TSubclassOf<UDataAppliedRuleBase>& OldValue)
{
}