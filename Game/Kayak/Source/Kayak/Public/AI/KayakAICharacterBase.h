#pragma once

/*
* Author:	Liulianyou
* Time:		2021/11/30
* Purpose:	This is the base class for AI character which is derived from AKayakCharacterBase
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "KayakCharacterBase.h"

#include "KayakAICharacterBase.generated.h"

UCLASS(Blueprintable, BlueprintType, Abstract, Category = "Kayak|AI|Character")
class KAYAK_API AKayakAICharacterBase : public AKayakCharacterBase
{
	GENERATED_UCLASS_BODY()

public:


};