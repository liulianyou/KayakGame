#pragma once

/*
* Author:	Liulianyou
* Time:		2021/11/30
* Purpose:	This is the player state which is only used in login game mode
*			As login is stand along game, I just used one aspect of game state which is store some internal player state which can be accessed by other module or character
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "KayakPlayerStateBase.h"

#include "KayakPlayerStateLogin.generated.h"

UCLASS(Blueprintable, BlueprintType, Category = "Kayak|Player|PlayerState|Login")
class KAYAK_API AKayakPlayerStateLogin : public AKayakPlayerStateBase
{
	GENERATED_UCLASS_BODY()

public:



};