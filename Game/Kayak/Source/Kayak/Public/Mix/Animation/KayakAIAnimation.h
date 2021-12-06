#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/5
* Purpose:	The base class only used to control the animation in the AI
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "KayakCharacterAnimationBase.h"

#include "KayakAIAnimation.generated.h"

UCLASS(Blueprintable, BlueprintType, Category = "Kayak|Animation")
class KAYAK_API UKayakAIAnimation : public UKayakCharacterAnimationBase
{
	GENERATED_UCLASS_BODY()

public:

};
