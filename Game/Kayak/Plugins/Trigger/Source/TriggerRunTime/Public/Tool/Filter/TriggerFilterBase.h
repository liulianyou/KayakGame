#pragma once

/*
* Author:	Liulianyou
* Time:		2020/9/18
* Purpose:	The filters rules which will be used by the trigger module
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "FilterBase.h"

#include "TriggerFilterBase.generated.h"

/*
* Filter rule for the Trigger task UCheckActorOverlaped
*/
UCLASS(BlueprintType, Blueprintable, DefaultToInstanced, editinlinenew, abstract)
class TRIGGERRUNTIME_API UTriggerFilterBase : public UFilterBase
{
	GENERATED_UCLASS_BODY()
};