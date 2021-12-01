#pragma once

/*
* Author:	Liulianyou
* Time:		2020/4/8
* Purpose:	The base class to set the reset style when other trigger task want to reset
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerStyleBase.h"

#include "TriggerResetStyleBase.generated.h"

UCLASS(Blueprintable, BlueprintType, abstract, Category = "TriggerRuntime")
class TRIGGERRUNTIME_API UTriggerResetStyleBase : public UTriggerStyleBase
{
	GENERATED_UCLASS_BODY()

public:

	//Override TriggerStyleBase
	virtual void Execute() override;
	//Override TriggerStyleBase

public:



	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerCustomizeResetStyle")
	void BP_Reset(UObject* Target);

	//Reset target object
	UFUNCTION(BlueprintCallable, Category = "TriggerCustomizeResetStyle")
	virtual void Reset(UObject* Target);

};



