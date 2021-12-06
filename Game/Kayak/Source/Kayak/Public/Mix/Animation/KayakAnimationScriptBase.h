#pragma once

/*
* Author:	Liulianyou
* Time:		2021/2/5
* Purpose:	This this the base animation script for all characters which want to use skeletal mesh
*			We can use this class to get all game states and notify the animation system to do correspond effect
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "Animation/AnimInstance.h"

#include "KayakAnimationScriptBase.generated.h"

UCLASS(BlueprintType, Blueprintable, Abstract, Category = "Kayak|Animation")
class KAYAK_API UKayakAnimaitonScriptBase : public UAnimInstance
{
	GENERATED_UCLASS_BODY()

public:

	
};