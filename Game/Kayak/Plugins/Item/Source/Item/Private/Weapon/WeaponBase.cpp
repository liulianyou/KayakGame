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

void AWeaponBase::Actvie()
{
	IItemInterface::Actvie();
}

void AWeaponBase::Deactive()
{
	IItemInterface::Deactive();
}

void AWeaponBase::StartUse()
{
	IItemInterface::StartUse();
}

void AWeaponBase::StopUse()
{
	IItemInterface::StopUse();
}

void AWeaponBase::Abandoned(const FItemScopeChangeInfo& AbandonInfo)
{
	IItemInterface::Abandoned(AbandonInfo);
}

void AWeaponBase::Gained(const FItemScopeChangeInfo& GainedInfo)
{
	IItemInterface::Gained(GainedInfo);
}
