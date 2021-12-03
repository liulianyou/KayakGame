#include "KayakPlayerCharacterBase.h"
#include "KayakPlayerAbilitySystemComponent.h"

AKayakPlayerCharacterBase::AKayakPlayerCharacterBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer.SetDefaultSubobjectClass<UKayakPlayerAbilitySystemComponent>(KayakCharacterSubObjectName::AbilitySystemName))
{

}

