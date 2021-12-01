#pragma once

/*
* Author:	Liulianyou
* Time:		2021/8/19
* Purpose:	This style can be used for all trigger styles
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerStyleBase.h"

#include "TriggerCommonStyleBase.generated.h"

UCLASS(BlueprintType, Blueprintable, Category = "TriggerRuntime|Style|Common")
class TRIGGERRUNTIME_API UTriggerCommonStyleBase : public UTriggerStyleBase
{
	GENERATED_UCLASS_BODY()
};
