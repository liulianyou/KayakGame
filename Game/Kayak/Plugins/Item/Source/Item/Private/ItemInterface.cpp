#include "ItemInterface.h"
#include "ItemComponent.h"

void IItemInterface::Initialize(UItemDataBase* NewData)
{
	UItemComponentBase* Component = GetItemComponent();

	Component->SetNewItemData(NewData);

	OnInitialize(NewData);
}