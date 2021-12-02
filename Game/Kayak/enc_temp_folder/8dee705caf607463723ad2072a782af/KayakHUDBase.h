#pragma once

/*
* Author:	Liulianyou
* Time:		2021/11/30
* Purpose:	This the base HUD which is used for our game
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "GameFramework/HUD.h"

#include "KayakHUDBase.generated.h"

UCLASS(Blueprintable, BlueprintType, Abstract, Category = "Kayak|UI|HUD")
class KAYAK_API AKayakHUDBase : public AHUD
{
	GENERATED_UCLASS_BODY()

public:

};