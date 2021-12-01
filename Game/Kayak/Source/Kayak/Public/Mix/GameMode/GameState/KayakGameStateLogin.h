#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/1
* Purpose:	This is game state only used in login map if other map want to use this state then should create new game state which is derived from this 
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "KayakGameStateBase.h"

#include "KayakGameStateLogin.generated.h"

UCLASS(Blueprintable, BlueprintType, Abstract, Category = "Kayak|Ability|AbilitySet")
class KAYAK_API AKayakGameStateLogin : public AKayakGameStateBase
{
	GENERATED_UCLASS_BODY()

public:


};