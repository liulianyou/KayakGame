#pragma once

/*
* Author:	Liulianyou
* Time:		2021/11/10
* Purpose:	This is the common HUD which is used for the kayak game.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "KayakHUDBase.h"

#include "KayakHUD.generated.h"

/*
* The common HUD is used for kayak game
*/
UCLASS(Blueprintable, BlueprintType, Category = "Kayak|UI|HUD")
class KAYAK_API AKayakHUD : public AKayakHUDBase
{
	GENERATED_UCLASS_BODY()

public:

};