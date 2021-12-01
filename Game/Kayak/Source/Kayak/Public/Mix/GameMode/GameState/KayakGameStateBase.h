#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/1
* Purpose:	This is the base class for game state in our game
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "GameFramework/GameState.h"

#include "KayakGameStateBase.generated.h"

UCLASS(Blueprintable, BlueprintType, Abstract, Category = "Kayak|GameState")
class KAYAK_API AKayakGameStateBase : public AGameState
{
	GENERATED_UCLASS_BODY()

public:


};