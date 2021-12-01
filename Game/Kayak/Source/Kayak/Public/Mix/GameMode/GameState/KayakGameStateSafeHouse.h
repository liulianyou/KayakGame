#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/1
* Purpose:	This is state is used for safe house, the difference between safe house and login map is safe house maybe have a lot players, but login map is just standalone map
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "KayakGameStateMainCityBase.h"

#include "KayakGameStateSafeHouse.generated.h"

/*
* This is state is used for safe house, the difference between safe house and login map is safe house maybe have a lot players, but login map is just standalone map
*/
UCLASS(Blueprintable, BlueprintType, Abstract, Category = "Kayak|GameState")
class KAYAK_API AKayakGameStateSafeHouse : public AKayakGameStateMainCityBase
{
	GENERATED_UCLASS_BODY()

public:


};