#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/23
* Purpose:	This component is only used for weapon
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "ItemComponentBase.h"

#include "WeaponComponent.generated.h"

/*
* The component which is used for weapon.
*/
UCLASS(BlueprintType, Blueprintable, Category = "Item|Component")
class ITEM_API UWeaponComponent : public UEquipmentComponent
{
	GENERATED_UCLASS_BODY()

public:

	ItemComponentFramework();

	//Override ActorComponent
	virtual void RegisterComponent() override;
	virtual void UnregisterComponent() override;
	//Override ActorComponent

	//Override EquipmentComponent
	virtual bool TryToEquip_Implementation() override;
	virtual bool TryToUnequip_Implementation() override;
	//Override EquipmentComponent

public:

	/*
	* Reload this weapon to fill with bullet
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "Equipment|Weapon")
	void Reload();

	/*
	* Start to fire this weapon
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "Equipment|Weapon")
	void StartFire();

	/*
	* Stop to fire this weapon
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "Equipment|Weapon")
	void StopFire();

	/*
	* Start to aim to search the enemy
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "Equipment|Weapon")
	void StartAim();

	/*
	* End aim state
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "Equipment|Weapon")
	void EndAim();

private:

	

};
