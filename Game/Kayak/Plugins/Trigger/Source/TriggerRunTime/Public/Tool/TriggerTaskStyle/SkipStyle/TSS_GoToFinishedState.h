#pragma once
/*
* Author:	Liulianyou
* Time:		2020/12/29
* Purpose:	This skip method will make target task go to finish directly
*/


#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerSkipStyleBase.h"

#include "TSS_GoToFinishedState.generated.h"

UCLASS(Blueprintable, BlueprintType, meta = (DisplayName = "GoToFinishedStateDirectly"))
class TRIGGERRUNTIME_API UTSS_GoToFinishedState : public UTriggerSkipStyleBase
{
	GENERATED_UCLASS_BODY()

public:
	virtual void Execute();


};
