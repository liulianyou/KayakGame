#pragma once
/*
* Author:	Liulianyou
* Time:		2020/7/6
* Purpose:	The interface of the trigger
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/Interface.h"

#include "SceneTriggerInterface.generated.h"

UINTERFACE(MinimalAPI, BlueprintType, Category = "GaiaTrigger")
class USceneTriggerInterface : public UInterface
{
	GENERATED_UINTERFACE_BODY()
public:


};

class TRIGGERRUNTIME_API ISceneTriggerInterface
{
	GENERATED_IINTERFACE_BODY()

public:
};