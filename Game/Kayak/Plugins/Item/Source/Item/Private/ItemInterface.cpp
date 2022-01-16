#include "ItemInterface.h"
#include "ItemComponent.h"
#include "ItemDefinition.h"

UItemComponentBase* IItemInterface::GetItemComponent() const
{
	if (_getUObject()->GetClass()->IsFunctionImplementedInScript(GET_FUNCTION_NAME_CHECKED(IItemInterface, OnGetItemComponent)))
	{
		return OnGetItemComponent();
	}

	return nullptr;
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

	ItemComponent->SetAvatarOwner(NewOwner);
}

bool IItemInterface::HasAuthority() const
{
	if (_getUObject()->GetClass()->IsFunctionImplementedInScript(GET_FUNCTION_NAME_CHECKED(IItemInterface, OnHasAuthority)))
	{
		return OnHasAuthority();
	}

	return false;
}