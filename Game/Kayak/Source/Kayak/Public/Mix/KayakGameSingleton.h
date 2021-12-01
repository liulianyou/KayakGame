#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/1
* Purpose:	This is the game singleton of our game. You can treat it as the manager of the game singleton.
*			You can use GEngine->GameSingleton->XXXXXX to access the specific member.
*			NOTICE: As this object will be created as the engine setup so it will never destroy until this engine tear down,
*					If you do something collection in the game and you start too many game instance in the Editor, Maybe your
*					singleton will collect too many useless data, so TAKE CARE to put you singleton class in the class.
*					If your singleton is just used in the game I suggest you put it in the GaiaGameInstace.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "KayakGameSingleton.generated.h"

UCLASS(Blueprintable, BlueprintType, Abstract, Category = "Kayak")
class KAYAK_API UKayakGameSingleton : public UObject
{
	GENERATED_UCLASS_BODY()

public:


};