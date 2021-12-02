#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/1
* Purpose:	This is the base character class for player.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMarcos.h"

#include "KayakCharacterBase.h"

#include "KayakPlayerCharacterBase.generated.h"

/*
* The base character of player
*/
UCLASS(Blueprintable, BlueprintType, Abstract, Category = "Kayak|Player")
class KAYAK_API AKayakPlayerCharacterBase : public AKayakCharacterBase
{
	GENERATED_UCLASS_BODY()

public:

};

