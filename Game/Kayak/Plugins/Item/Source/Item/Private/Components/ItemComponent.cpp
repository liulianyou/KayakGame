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

	if (ItemData)
	{
		ItemData->AddReferencedComponent(this);
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

	if (ItemData)
	{
		ItemData->RemoveReferencedComponent(this);
	}

	OnUnregisterComponent();
}

void UItemComponentBase::ActivateItem()
{
	check(RuntimeData);

	RuntimeData->ActivateItem();
}

void UItemComponentBase::DeactivateItem()
{
	check(RuntimeData);

	RuntimeData->DeactivateItem();
}

void UItemComponentBase::StartUse()
{
	check(RuntimeData);

	RuntimeData->StartUse();
}

void UItemComponentBase::StopUse()
{
	check(RuntimeData);

	RuntimeData->StopUse();
}

void UItemComponentBase::Abandoned(const FItemScopeChangeInfo& AbandonInfo)
{
	check(RuntimeData);

	RuntimeData->Abandoned(AbandonInfo);
}

void UItemComponentBase::Gained(const FItemScopeChangeInfo& GainedInfo)
{
	check(RuntimeData);

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

void UItemComponentBase::SetAvatarOwner(UObject* NewAvatar)
{
	if(OwnerAvatar == NewAvatar)
		return;

	OwnerAvatar = NewAvatar;
}

void UItemComponentBase::SetNewItemData(UItemDataBase* NewData)
{
	//Nothing changed
	if(ItemData == NewData)
		return;

	auto AssignNewData = [&](){
		UItemDataBase* OldData = ItemData;

		if (ItemData)
			ItemData->RemoveReferencedComponent(this);

		//Add new data
		ItemData = NewData;

		if (ItemData)
			ItemData->AddReferencedComponent(this);

		ItemDataChanged(OldData, NewData);
	};

	//When this component's runtime data have not been prepared then just assign the new data
	if (RuntimeData == nullptr)
	{
		AssignNewData();

		return;
	}

	bool NeedActiveAfterDataChanged = false;
	bool NeedStartUseAfterDataChanged = false;

	if (RuntimeData->IsActivated())
		NeedActiveAfterDataChanged = true;
	
	if (RuntimeData->IsUsing())
		NeedStartUseAfterDataChanged = true;

	//Deactivate it
	DeactivateItem();

	AssignNewData();

	// Activate it again
	if (NeedStartUseAfterDataChanged)
		ActivateItem();

	//Start to use it again
	if (NeedStartUseAfterDataChanged)
		StartUse();
}

void UItemComponentBase::OnRep_OwnerAvatar(UObject* OldAvatar)
{
	
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

void UItemComponentBase::SetRuntimeData(UItemRuntimeDataBase* NewRuntimeData)
{
	if(RuntimeData == NewRuntimeData)
		return;

	ItemDataChangedDelegate.RemoveDynamic(RuntimeData, &UItemRuntimeDataBase::ItemDataChangedInItemOwner);

	RuntimeData = NewRuntimeData;

	if (!ItemDataChangedDelegate.IsAlreadyBound(RuntimeData, &UItemRuntimeDataBase::ItemDataChangedInItemOwner))
	{
		ItemDataChangedDelegate.AddDynamic(RuntimeData, &UItemRuntimeDataBase::ItemDataChangedInItemOwner);
	}
}
