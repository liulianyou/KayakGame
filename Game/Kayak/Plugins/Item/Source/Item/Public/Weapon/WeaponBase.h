#pragma once

/*
* Author:	Liulianyou
* Purpose:	This is the base class of weapon which is used in our game
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "GameFramework/Actor.h"
#include "ItemInterface.h"

#include "WeaponBase.generated.h"

/*
* The base class for weapon 
*/
UCLASS(BlueprintType, Blueprintable, Config = Weapon, Abstract, Category = "Item|Weapon")
class ITEM_API AWeaponBase : public AActor, public IItemInterface
{
	GENERATED_UCLASS_BODY()

public:
	
	//Override ItemInterface
	ItemFramework();
	//Override ItemInterface

protected:

	//the name of item component
	static FName ItemComponentName;

private:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ItemComponent", meta = (AllowPrivateAccess = true))
	UItemComponentBase* ItemComponent;

};