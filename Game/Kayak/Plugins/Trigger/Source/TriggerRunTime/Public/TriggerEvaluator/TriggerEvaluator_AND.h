#pragma once

/*
* Author:	Liulianyou
* Time:		2020/8/2
* Purpose:	When all triggers toggle the "successed" condition, than they can notify or affect other triggers 
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "Evaluator_AND.h"

#include "TriggerEvaluator_AND.generated.h"


/*
* The operation just like &&, which means all the sub triggers toggled the condition,
* than they can notify or affect other triggers
*/
UCLASS(hidedropdown)
class TRIGGERRUNTIME_API UTriggerEvaluator_AND : public UEvaluator_AND
{
	GENERATED_UCLASS_BODY()
};


