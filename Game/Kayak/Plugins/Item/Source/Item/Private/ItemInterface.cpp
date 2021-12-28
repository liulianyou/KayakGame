#include "ItemInterface.h"
#include "ItemComponent.h"

void IItemInterface::Initialize(UItemDataBase* NewData)
{
	TArray<UItemComponentBase*> Components;

	GetItemComponent(Components);

	for (int i = 0; i < Components.Num(); i++)
	{
		if (Components[i] != nullptr)
		{
			Components[i]->SetNewItemData(NewData);
		}
	}

	OnInitialize(NewData);
}