#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/23
* Purpose:	This component is only used for weapon
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "ItemComponent.h"

#include "WeaponComponent.generated.h"

/*
* The component which is used for item.
*/
UCLASS(BlueprintType, Blueprintable, Category = "Item|Component")
class ITEM_API UWeaponComponent : public UItemComponentBase
{
	GENERATED_UCLASS_BODY()

public:

	ItemComponentFramework();

	//Override ActorComponent
	virtual void RegisterComponent() override;
	virtual void UnregisterComponent() override;
	//Override ActorComponent

public:


private:

};
