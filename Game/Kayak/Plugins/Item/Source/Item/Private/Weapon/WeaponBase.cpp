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

UItemComponentBase* AWeaponBase::GetItemComponent() const
{
	return ItemComponent;
}

void AWeaponBase::Initialize(UItemDataBase* NewData)
{
	IItemInterface::Initialize(NewData);
}