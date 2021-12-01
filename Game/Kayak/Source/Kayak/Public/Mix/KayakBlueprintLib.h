#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/1
* Purpose:	The global static function for blueprint library. we can treat it as one accessor to get all implementations in our game
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "Kismet/BlueprintFunctionLibrary.h"

#include "KayakBlueprintLib.generated.h"

UCLASS(Blueprintable, BlueprintType, Abstract, Category = "Kayak")
class KAYAK_API UKayakBlueprintLib : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:


};