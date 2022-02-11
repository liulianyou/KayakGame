#pragma once

/*
* Author:	Liulianyou
* Time:		2020/9/18
* Purpose:	Just filter the actors which is one of the template actors
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "Filter_Actor.h"

#include "TriggerFilter_Actor.generated.h"

UCLASS(BlueprintType, Blueprintable, DefaultToInstanced, editinlinenew)
class TRIGGERRUNTIME_API UTriggerFilter_Actor : public UFilter_Actor
{
	GENERATED_UCLASS_BODY()
};