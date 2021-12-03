#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/3
* Purpose:	The base controller class which is used for player
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "GameFramework/PlayerController.h"

#include "KayakPlayerControllerBase.generated.h"

UCLASS(Blueprintable, BlueprintType, Abstract, Category = "Kayak|PlayerController")
class KAYAK_API AKayakPlayerControllerBase : public APlayerController
{
	GENERATED_UCLASS_BODY()

public:


};