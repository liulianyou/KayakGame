#include "ItemComponent.h"
#include "ItemManager.h"
#include "ItemBlueprintLib.h"
#include "Net/UnrealNetwork.h"

UItemComponentBase::UItemComponentBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

void UItemComponentBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UItemComponentBase, OwnerAvatar);
}

void UItemComponentBase::Initialzie(UObject* NewItemOnwer)
{
	ItemOwner = NewItemOnwer;

	OnInitialize(NewItemOnwer);
}

void UItemComponentBase::OnRegister()
{
	Super::OnRegister();

	UItemManager* ItemManager = UItemBlueprintLib::GetItemManager();

	if (ItemManager != nullptr)
	{
		ItemManager->RegisterItem(GetItemOwner());
	}
}

void UItemComponentBase::OnUnregister()
{
	Super::OnUnregister();

	UItemManager* ItemManager = UItemBlueprintLib::GetItemManager();

	if (ItemManager != nullptr)
	{
		ItemManager->UnregisterItem(GetItemOwner());
	}
}

void UItemComponentBase::Actvie()
{
	if (GetClass()->IsFunctionImplementedInScript(TEXT("OnActvie")))
	{
		OnActive();
	}
}

void UItemComponentBase::Deactive()
{
	if (GetClass()->IsFunctionImplementedInScript(TEXT("OnDeactive")))
	{
		OnDeactive();
	}
}

void UItemComponentBase::StartUse()
{
	if (GetClass()->IsFunctionImplementedInScript(TEXT("OnStartUse")))
	{
		OnStartUse();
	}
}

void UItemComponentBase::StopUse()
{
	if (GetClass()->IsFunctionImplementedInScript(TEXT("OnStopUse")))
	{
		OnStopUse();
	}
}

void UItemComponentBase::Abandoned(const FItemScopeChangeInfo& AbandonInfo)
{
	if (GetClass()->IsFunctionImplementedInScript(TEXT("OnAbandoned")))
	{
		Abandoned(AbandonInfo);
	}
}

void UItemComponentBase::Gained(const FItemScopeChangeInfo& GainedInfo)
{
	if (GetClass()->IsFunctionImplementedInScript(TEXT("OnGained")))
	{
		OnGained(GainedInfo);
	}
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

void UItemComponentBase::OnRep_OwnerAvatar(UObject* OldAvatar)
{
	
}