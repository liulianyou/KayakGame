#include "WeaponBase.h"
#include "WeaponComponent.h"

FName AWeaponBase::ItemComponentName = TEXT("ItemComponent");

AWeaponBase::AWeaponBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	ItemComponent = CreateDefaultSubobject<UWeaponComponent>(ItemComponentName);

	if (ItemComponent)
	{
		ItemComponent->Initialzie(this);
	}
}

void AWeaponBase::GetItemComponent(TArray<UItemComponentBase*>& OuterComponents) const
{
	IItemInterface::GetItemComponent(OuterComponents);

	OuterComponents.Add(ItemComponent);
}

void AWeaponBase::Initialize(UItemDataBase* NewData)
{
	IItemInterface::Initialize(NewData);
}