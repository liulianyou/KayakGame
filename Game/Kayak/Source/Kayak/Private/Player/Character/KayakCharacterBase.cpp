#include "KayakCharacterBase.h"

AKayakCharacterBase::AKayakCharacterBase( const FObjectInitializer& ObjectInitializer )
	:Super(ObjectInitializer)
{
	AbilityComponent = CreateDefaultSubobject<UKayakAbilitySystemComponentBase>(KayakCharacterSubObjectName::AbilitySystemName);
}

void AKayakCharacterBase::PostInitializeComponents()
{
	Super::PostInitializeComponents();


}

