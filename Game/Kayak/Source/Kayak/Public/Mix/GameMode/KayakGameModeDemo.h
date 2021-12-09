#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/5
* Purpose:	This game mode is only used for the template demo.
*			It only make suer the target player only can move a little space when they have enough engreny
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "KayakGameModeBase.h"

#include "KayakGameModeDemo.generated.h"


UCLASS(BlueprintType, Blueprintable, Abstract, Category = "Kayak|GameMode")
class KAYAK_API AKayakGameModeDemo : public AKayakGameModeBase
{
	GENERATED_UCLASS_BODY()

public:

};