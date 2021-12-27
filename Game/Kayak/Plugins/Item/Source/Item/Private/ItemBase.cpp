#include "ItemBase.h"

UItemDataBase::UItemDataBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	
}

void UItemDataBase::AddReferencedComponent(UItemComponentBase* ItemComponent)
{
	OnAddReferencedComponent(ItemComponent);
}

void UItemDataBase::RemoveReferencedComponent(UItemComponentBase* ItemComponent)
{
	OnRemoveReferencedComponent(ItemComponent);
}