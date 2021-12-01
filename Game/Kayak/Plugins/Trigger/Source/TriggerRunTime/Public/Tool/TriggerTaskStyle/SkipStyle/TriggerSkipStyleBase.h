#pragma once

/*
* Author:	Liulianyou
* Time:		2020/12/29
* Purpose:	The base class to define the implementation to skip the target task,
*			This skip style should be treated as the common implementation to skip the task,
*			Or we can treat it as the skip type just like enumeration
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerStyleBase.h"

#include "TriggerSkipStyleBase.generated.h"

class UTriggerTaskBase;

UCLASS(Blueprintable, BlueprintType, abstract, hidedropdown, DefaultToInstanced, editinlinenew, Category = "TriggerRuntime|SkipStyle")
class TRIGGERRUNTIME_API UTriggerSkipStyleBase : public UTriggerStyleBase
{
	GENERATED_UCLASS_BODY()
	
};