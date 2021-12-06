#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/5
* Purpose:	The base class only used to control the animation of Item.
*			The item is different form the AI as it only have some simple specific logic for them.
*			Such weapon it can fire, reload, but it don't use BT and any other AI specific logic
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "KayakCharacterAnimationBase.h"

#include "KayakItemAnimationBase.generated.h"

UCLASS(Blueprintable, BlueprintType, Abstract, Category = "Kayak|Animation")
class KAYAK_API UKayakItemAnimationBase : public UKayakAnimaitonScriptBase
{
	GENERATED_UCLASS_BODY()

public:
	


};
