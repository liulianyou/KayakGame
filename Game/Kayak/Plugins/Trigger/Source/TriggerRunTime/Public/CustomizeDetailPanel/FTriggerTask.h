#pragma once

/*
* Author:		Liulianyou
* Time:			2020/9/8
* Purpose:		Help struct to refer to the existed tasks in the level
*				In the TriggerEditor I will customize its details appearance in the Detail panel when the other class use this struct
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/SoftObjectPtr.h"

#include "FTriggerTask.generated.h"


class UTriggerTaskBase;

/*
* All Trigger task that need to search form the task pool instead of creating new one should use it to replace UTriggerTaskBase*.
* As I will customize this details in the panel
*/
USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FTriggerTask
{
	GENERATED_BODY()

public:

	//Get the point to trigger task
	UTriggerTaskBase* GetTriggerTask() const;

	//Update the value in this struct
	void UpdateTriggerTask(UTriggerTaskBase* TriggerTask = nullptr);

public:

	/*
	* The soft point to the trigger task 
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSoftObjectPtr<UTriggerTaskBase> SoftTaskObject;

	/*
	* When you use TSoftObjectPtr in BeginDestroy it will cause crash, as GC forbid this usage.
	* So I restore the hard point to the trigger task, so that we can use it in BeginDestroy function
	*/
	UPROPERTY( Transient )
	UTriggerTaskBase* CashedTask = nullptr;

};