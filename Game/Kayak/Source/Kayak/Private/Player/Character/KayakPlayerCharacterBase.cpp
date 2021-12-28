#include "KayakPlayerCharacterBase.h"
#include "KayakPlayerAbilitySystemComponent.h"


AKayakPlayerCharacterBase::AKayakPlayerCharacterBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer.SetDefaultSubobjectClass<UKayakPlayerAbilitySystemComponent>(KayakCharacterSubObjectName::AbilitySystemName))
{
	
}

void AKayakPlayerCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	//Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AKayakPlayerCharacterBase::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AKayakPlayerCharacterBase::MoveRight);
	PlayerInputComponent->BindAxis("MoveUp", this, &AKayakPlayerCharacterBase::MoveUp_World);
	PlayerInputComponent->BindAxis("Turn", this, &AKayakPlayerCharacterBase::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AKayakPlayerCharacterBase::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &AKayakPlayerCharacterBase::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AKayakPlayerCharacterBase::LookUpAtRate);
}


void AKayakPlayerCharacterBase::MoveRight(float Val)
{
	Super::MoveRight(Val);
}

void AKayakPlayerCharacterBase::MoveForward(float Val)
{
	Super::MoveForward(Val);
}

void AKayakPlayerCharacterBase::MoveUp_World(float Val)
{
	Super::MoveUp_World(Val);
}

void AKayakPlayerCharacterBase::TurnAtRate(float Rate)
{
	Super::TurnAtRate(Rate);
}

void AKayakPlayerCharacterBase::LookUpAtRate(float Rate)
{
	Super::LookUpAtRate(Rate);
}
