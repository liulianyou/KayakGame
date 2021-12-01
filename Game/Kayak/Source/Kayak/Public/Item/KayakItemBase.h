#pragma once

/*
* Author:	Liulianyou
* Time		2021/12/30
* Purpose:	The base class of Item
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "KayakItemBase.generated.h"

UCLASS(Blueprintable, BlueprintType, Abstract, Category = "KayakGame|GameMode")
class KAYAK_API UKayakItemBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:

};
