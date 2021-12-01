#pragma once

/*
* Author:	Liulianyou
* Time:		2020/12/21
* Purpose:	This condition is used to check weather the game is failed
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "GameOverCondition/CheckGameOverBase.h"

#include "CheckGameOverFailedBase.generated.h"

/*
* Abstract class to check weather the player is failed
*/
UCLASS(Abstract, Blueprintable, BlueprintType)
class TRIGGERRUNTIME_API UCheckGameOverFailedBase : public UCheckGameOverBase
{
	GENERATED_UCLASS_BODY()

};