#pragma once

/*
* Author:	Liulianyou
* Time		2021/12/30
* Purpose:	The base class of character, this class should be used for all pawns which is used in our game include Player And AI
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "ItemInventoryInterface.h"

#include "KayakCharacterBase.generated.h"

class UAbilitySystemComponent;
class UItemInventoryComponent;

namespace KayakCharacterSubObjectName
{
	static FName AbilitySystemName = TEXT("KayakAbilitySystem");
	static FName ItemInventoryName = TEXT("KayakItemSystem");
};

/*
* All pawns which is used to show some local appearance should derived from this class, include player and AI
*/
UCLASS(Blueprintable, BlueprintType, Abstract, Category = "Kayak|Player")
class KAYAK_API AKayakCharacterBase : public ACharacter, public IAbilitySystemInterface, public IItemInventoryInterface
{
	GENERATED_UCLASS_BODY()

public:

	//Override AActor
	virtual void PostInitializeComponents() override;
	//Override AActor


public:

	/*
	* Get the ability system component;
	*/
	UFUNCTION(BlueprintCallable, Category = "Ability")
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const { return AbilityComponent; }

	/*
	* Get the item inventory component to use the item system
	*/
	UFUNCTION(BlueprintCallable, Category = "Ability")
	virtual UItemInventoryComponent* GetItemInventoryComponent() const { return ItemInventoryComponent; }

public:

	/**
	 * Input callback to move forward in local space (or backward if Val is negative).
	 * @param Val Amount of movement in the forward direction (or backward if negative).
	 * @see APawn::AddMovementInput()
	 */
	UFUNCTION(BlueprintCallable, Category = "Pawn")
	virtual void MoveForward(float Val);

	/**
	 * Input callback to strafe right in local space (or left if Val is negative).
	 * @param Val Amount of movement in the right direction (or left if negative).
	 * @see APawn::AddMovementInput()
	 */
	UFUNCTION(BlueprintCallable, Category = "Pawn")
	virtual void MoveRight(float Val);

	/**
	 * Input callback to move up in world space (or down if Val is negative).
	 * @param Val Amount of movement in the world up direction (or down if negative).
	 * @see APawn::AddMovementInput()
	 */
	UFUNCTION(BlueprintCallable, Category = "Pawn")
	virtual void MoveUp_World(float Val);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	UFUNCTION(BlueprintCallable, Category = "Pawn")
	virtual void TurnAtRate(float Rate);

	/**
	* Called via input to look up at a given rate (or down if Rate is negative).
	* @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	*/
	UFUNCTION(BlueprintCallable, Category = "Pawn")
	virtual void LookUpAtRate(float Rate);

private:

	/*
	* The instance of ability components
	* One character should only have one ability component.
	*/
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Kayak|Ability", meta = (AllowPrivateAccess = true))
	UAbilitySystemComponent* AbilityComponent;

	/*
	* The inventory component used to hold all operations and manipulations for item system
	*/
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Kayak|Ability", meta = (AllowPrivateAccess = true))
	UItemInventoryComponent* ItemInventoryComponent;
};