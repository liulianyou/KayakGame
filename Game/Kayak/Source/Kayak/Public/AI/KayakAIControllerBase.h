#pragma once

/*
* Author:	Liulianyou
* Time:		2021/11/30
* Purpose:	This is the base controller for AI which is derived from AIController
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "AIController.h"

#include "KayakAIControllerBase.generated.h"

UCLASS(Blueprintable, BlueprintType, Abstract, Category = "Kayak|AI|Controller")
class KAYAK_API AKayakControllerBase : public AAIController
{
	GENERATED_UCLASS_BODY()

public:

};