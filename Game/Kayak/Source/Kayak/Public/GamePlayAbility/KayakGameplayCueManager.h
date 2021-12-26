#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/24
* Purpose:	The base manager for our game ability system to manager  all game play cue
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "GameplayCueManager.h"

#include "KayakGameplayCueManager.generated.h"

UCLASS(Blueprintable, BlueprintType, Abstract, Category = "GameplayCue")
class KAYAK_API UKayakGameplayCueManager : public UGameplayCueManager
{
	GENERATED_UCLASS_BODY()

public:

};