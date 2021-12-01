#pragma once

/*
* Author:	Liulianyou
* Time:		2021/8/23
* Purpose:	This is the base task to specify how the player move in specific time or space fragment
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerTaskBase.h"

#include "TT_MoveBase.generated.h"

UCLASS(BlueprintType, Blueprintable, Abstract,hidedropdown, Category = "TriggerRuntime")
class TRIGGERRUNTIME_API UTT_MoveBase : public UTriggerTaskBase
{
	GENERATED_UCLASS_BODY()
};
