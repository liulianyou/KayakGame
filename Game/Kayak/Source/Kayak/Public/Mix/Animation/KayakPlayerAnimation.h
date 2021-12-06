#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/5
* Purpose:	The base class only used to control the animation in the player
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "KayakCharacterAnimationBase.h"

#include "KayakPlayerAnimation.generated.h"

UCLASS(Blueprintable, BlueprintType, Category = "Kayak|Animation")
class KAYAK_API UKayakPlayerAnimation : public UKayakCharacterAnimationBase
{
	GENERATED_UCLASS_BODY()

public:

};
