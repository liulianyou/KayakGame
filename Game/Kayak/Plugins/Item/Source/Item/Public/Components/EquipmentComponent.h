#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/25
* Purpose:	This is the base component which can be equipped by the avatar not only player, but also NPC, 
*			or any other actors which have the specific socket to hold it 
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "ItemComponent.h"

#include "EquipmentComponent.generated.h"

/*
* This is the base component which can be equipped by the avatar not only player, but also NPC,
* or any other actors which have the specific socket to hold it
*/
UCLASS(BlueprintType, Blueprintable, Abstract, Category = "Item|Component|Equipment")
class ITEM_API UEquipmentComponent : public UItemComponentBase
{
	GENERATED_UCLASS_BODY()

public:

	ItemComponentFramework();

	//Override ActorComponent
	virtual void RegisterComponent() override;
	virtual void UnregisterComponent() override;
	//Override ActorComponent

public:

	/*
	* Try to equip this weapon
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "Equipment")
	bool TryToEquip();

	/*
	* Try to unequip this weapon
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "Equipment")
	bool TryToUnequip();

};

