#include "KayakCharacterBase.h"
#include "ItemInventroyComponent.h"


AKayakCharacterBase::AKayakCharacterBase( const FObjectInitializer& ObjectInitializer )
	:Super(ObjectInitializer)
{
	AbilityComponent = CreateDefaultSubobject<UKayakAbilitySystemComponentBase>(KayakCharacterSubObjectName::AbilitySystemName);
	ItemInventoryComponent = CreateDefaultSubobject<UItemInventoryComponent>(KayakCharacterSubObjectName::ItemInventoryName);
}

void AKayakCharacterBase::PostInitializeComponents()
{
	Super::PostInitializeComponents();


}

void AKayakCharacterBase::MoveRight(float Val)
{
	if (Val != 0.f)
	{
		if (Controller)
		{
			FRotator const ControlSpaceRot = Controller->GetControlRotation();

			// transform to world space and add it
			AddMovementInput(FRotationMatrix(ControlSpaceRot).GetScaledAxis(EAxis::Y), Val);
		}
	}
}

void AKayakCharacterBase::MoveForward(float Val)
{
	if (Val != 0.f)
	{
		if (Controller)
		{
			FRotator const ControlSpaceRot = Controller->GetControlRotation();

			// transform to world space and add it
			AddMovementInput(FRotationMatrix(ControlSpaceRot).GetScaledAxis(EAxis::X), Val);
		}
	}
}

void AKayakCharacterBase::MoveUp_World(float Val)
{
	if (Val != 0.f)
	{
		AddMovementInput(FVector::UpVector, Val);
	}
}

void AKayakCharacterBase::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate /** GetWorld()->GetDeltaSeconds() * CustomTimeDilation*/);
}

void AKayakCharacterBase::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate  /** GetWorld()->GetDeltaSeconds() * CustomTimeDilation*/);
}
