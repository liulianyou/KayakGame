#pragma once
/*
* Author:	Liulianyou
* Time:		2020/7/16
* Purpose:	This notify template task is just used to notify other triggers
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerTask/TriggerTaskBase.h"

#include "TT_Notify.generated.h"

UCLASS(BlueprintType, Blueprintable, abstract, hidedropdown,  Category="Trigger")
class  UTT_NotifyBase : public UTriggerTaskBase
{
	GENERATED_UCLASS_BODY()

public:




};