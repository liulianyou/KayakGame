#pragma once

/*
* Author:	Liulianyou
* Time:		2021/3/22
* Purpose:	The base class to hold all external data which will be used by other module.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "GameOverConditionDataBase.generated.h"

UCLASS(Abstract)
class TRIGGERRUNTIME_API UGameOverConditionDataBase : public UObject
{
	GENERATED_UCLASS_BODY()

};