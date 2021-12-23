#include "WeaponComponent.h"

UWeaponComponent::UWeaponComponent(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

void UWeaponComponent::OnRegister()
{
	Super::OnRegister();
}

void UWeaponComponent::OnUnregister()
{
	Super::OnUnregister();
}