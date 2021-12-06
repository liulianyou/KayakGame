#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/5
* Purpose:	The base class only used to control the animation of Weapon.
*			The weapon have fire, reload, and any other specif animation effect.
*			And the weapon is the major feature for our game so lift it out.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "KayakItemAnimationBase.h"

#include "KayakWeaponAnimation.generated.h"

UCLASS(Blueprintable, BlueprintType, Category = "Kayak|Animation")
class KAYAK_API UKayakWeaponAnimation : public UKayakItemAnimationBase
{
	GENERATED_UCLASS_BODY()

public:

	

};
