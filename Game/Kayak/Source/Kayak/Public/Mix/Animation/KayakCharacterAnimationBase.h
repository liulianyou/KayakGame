#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/5
* Purpose:	The base class used to control the animation in the character, include player and AI
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "KayakAnimationScriptBase.h"

#include "KayakCharacterAnimationBase.generated.h"

UCLASS(Blueprintable, BlueprintType, Abstract, Category = "Kayak|Animation")
class KAYAK_API UKayakCharacterAnimationBase : public UKayakAnimaitonScriptBase
{
	GENERATED_UCLASS_BODY()

public:

};
