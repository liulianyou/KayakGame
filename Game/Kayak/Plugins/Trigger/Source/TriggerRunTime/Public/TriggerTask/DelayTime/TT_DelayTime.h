#pragma once

/*
* Author:	Liulianyou
* Time:		2021/7/3
* Purpose:	This task used to make a delay time between the trigger tasks.
*			So that one task can start after one period of time when its prerequisite task meet some condition
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerTaskBase.h"

#include "TT_DelayTime.generated.h"


namespace TT_DelayTime
{
	//The data that will be cashed when the DelayTime task is paused, or maybe stopped 
	struct FCashedData
	{
		//The last value of CanEverTick
		bool CashedCanEverTick;
	};
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTriggerTaskDelayTimeUpdate, float, PassedTime);

UCLASS(BlueprintType, Blueprintable, Category = "TriggerRuntime")
class TRIGGERRUNTIME_API UTT_DelayTime : public UTriggerTaskBase
{
	GENERATED_UCLASS_BODY()

	TriggerTaskCommonFrameWorkDeclaration();

public:
	

	UFUNCTION(BlueprintNativeEvent, Category = "DelayTime")
	bool CanBeStopped(UOperationInformationBase* Causer);

	//Invoked when the delay time update
	UFUNCTION(BlueprintImplementableEvent, Category = "DelayTime")
	void OnDelayTimeUpdate(float PassedTime);

public:

	/*
	* How much time need to be delayed
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "DelayTime")
	float DelayTime;

	/*
	* The delegate to be executed how much the time have been delayed
	*/
	UPROPERTY(BlueprintAssignable)
	FTriggerTaskDelayTimeUpdate DelayTimeUpdateDelegate;

private:

	//The time remained to delay
	float RemainDelayTime;

	//The cashed data for this task, I can use it to restore this task
	TT_DelayTime::FCashedData CashedData;
	
};
