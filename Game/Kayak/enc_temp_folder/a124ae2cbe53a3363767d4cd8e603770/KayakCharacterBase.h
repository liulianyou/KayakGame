#pragma once

/*
* Author:	Liulianyou
* Time		2021/12/30
* Purpose:	The base class of character, this class should be used for all pawns which is used in our game include Player And AI
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "GameFramework/Character.h"

#include "KayakCharacterBase.generated.h"

/*
* All pawns which is used to show some local appearance should derived from this class, include player and AI
*/
UCLASS(Blueprintable, BlueprintType, Abstract, Category = "Kayak|Player")
class KAYAK_API AKayakCharacterBase : public ACharacter
{
	GENERATED_UCLASS_BODY()

public:

};