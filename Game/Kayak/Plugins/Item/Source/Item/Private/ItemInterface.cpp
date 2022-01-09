#include "ItemInterface.h"
#include "ItemComponent.h"
#include "ItemDefinition.h"

void IItemInterface::Initialize(UItemDataBase* NewData)
{
	UItemComponentBase* Component = GetItemComponent();

	Component->SetNewItemData(NewData);

	OnInitialize(NewData);
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

	ItemComponent->SetItemOwner(NewOwner);
}