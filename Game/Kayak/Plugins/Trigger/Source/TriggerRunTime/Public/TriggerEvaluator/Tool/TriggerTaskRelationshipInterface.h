#pragma once

/*
* Author:	Liulianyou
* Time:		2021/3/11
* Purpose:	This class is used to identify weather the evaluator condition will change the the relationship for the trigger task
*/

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TriggerTaskRelationshipInterface.generated.h"


// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UTriggerTaskRelationshipInterface : public UInterface
{
	GENERATED_BODY()
};

//Interface for Evaluator Condition to determine weather the target condition will change the relation ship for trigger tasks
class TRIGGERRUNTIME_API ITriggerTaskRelationshipInterface
{
	GENERATED_BODY()
};
