#pragma  once

/*
* Author:	Liulianyou
* Time:		2021/11/30
* Purpose:	This is the player state which only be used at the main city.
*			The main city is a dedicated server, so this state will use full aspects of player state
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "KayakPlayerStateBase.h"

#include "KayakPlayerStateMainCityBase.generated.h"

/*
* This is the state which is only used at main city.
* If other game mode instead of KayakGameModeMainCity want to use this state it should create one new instance which derived from it
*/
UCLASS(Blueprintable, BlueprintType, Abstract, Category = "Kayak|Player|PlayerState|MainCity")
class KAYAK_API AKayakPlayerStateMainCityBase : public AKayakPlayerStateBase
{
	GENERATED_UCLASS_BODY()

public:


};

