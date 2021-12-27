#include "ItemInterface.h"

void IItemInterface::Initialize(UItemDataBase* NewData)
{
	if (GetItemComponent())
	{
		GetItemComponent()->SetNewItemData(NewData);
	}

	OnInitialize(NewData);
}