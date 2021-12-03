#pragma once

/*
* Author:		Liulianyou
* Time:			2021/5/10
* Purpose:		This the base class to identify how to repeat some thing
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "FTriggerTask.h"

#include "TriggerStyleBase.h"

#include "TriggerRepeatStyleBase.generated.h"

UCLASS(Abstract, DefaultToInstanced, editinlinenew)
class TRIGGERRUNTIME_API UTriggerRepeatStyleBase : public UTriggerStyleBase
{
	GENERATED_UCLASS_BODY()

public:

	//Override UTriggerStyleBase
	virtual void Execute() override;
	virtual void InitializeStyle(UObject* OwnerObject) override;
	//Override UTriggerStyleBase

	/*
	* Try to repeat target object
	* 
	* #return false means this repeat style do not process target object, and the target object need to define the repeat behavior by itself
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerTaskRepeatCondition")
	bool TryToRepeat(UObject* Object);

	/*
	* Get the potential trigger task that this style will try to repeat
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerTaskRepeatCondition")
	UTriggerTaskBase* GetRepeatedTriggerTask();

public:

	/*
	* The target task that need to be repeated.
	* By default it should be the outer which type is trigger task base
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerTaskRepeatCondition")
	FTriggerTask RepeatedTask;
};