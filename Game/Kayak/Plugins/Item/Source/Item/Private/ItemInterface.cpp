#include "ItemInterface.h"
#include "ItemComponentBase.h"
#include "ItemDefinition.h"

UItemComponentBase* IItemInterface::GetItemComponent() const
{
	UItemComponentBase* Result = nullptr;

	if (_getUObject()->GetClass()->IsFunctionImplementedInScript(GET_FUNCTION_NAME_CHECKED(IItemInterface, OnGetItemComponent)))
	{
		Result = OnGetItemComponent();

		if (Result == nullptr)
		{
			UE_LOG(LogItem, Warning, TEXT("Can not get item component from BP function GetItemComponent in class: %s"), *_getUObject()->GetClass()->GetName());
		}
	}

	return Result;
}

void IItemInterface::Initialize(UItemInventoryComponent* InventoryOwner)
{
	OnInitialize(InventoryOwner);
}

void IItemInterface::SetItemOwner(UItemInventoryComponent* NewOwner)
{
	UItemComponentBase* ItemComponent = GetItemComponent();

	if (ItemComponent == nullptr)
	{
		UE_LOG(LogItem, Warning, TEXT("The item:%s must have one item component!!!"), *_getUObject()->GetPathName());

		return;
	}

	//skip when the new owner is the same the original
	if (ItemComponent->GetItemOwner() == NewOwner)
	{
		return;
	}

	ItemComponent->SetInventoryOwner(NewOwner);
}

bool IItemInterface::HasAuthority() const
{
	if (_getUObject()->GetClass()->IsFunctionImplementedInScript(GET_FUNCTION_NAME_CHECKED(IItemInterface, OnHasAuthority)))
	{
		return OnHasAuthority();
	}

	return false;
}