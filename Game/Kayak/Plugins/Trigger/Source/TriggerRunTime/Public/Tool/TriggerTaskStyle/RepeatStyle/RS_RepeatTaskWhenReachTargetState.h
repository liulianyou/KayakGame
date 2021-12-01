#pragma once

/*
* Author:		Liulianyou
* Time:			2021/5/13
* Purpose:		This class is used to define the repeat behavior when the target task had reached the target state immediate.
*				At this moment the task must first reset it self before repeat.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "RepeatStyle/RS_RepeatTaskWhenReachTargetStateBase.h"

#include "RS_RepeatTaskWhenReachTargetState.generated.h"

class UTriggerResetStyleBase;

UCLASS(Blueprintable, BlueprintType, meta = (DisplayName = "RepeatImmediatly"))
class TRIGGERRUNTIME_API URS_RepeatTaskWhenReachTargetStateImmediately : public URS_RepeatTaskWhenReachTargetStateBase
{
	GENERATED_UCLASS_BODY()

public:

	//Override RepeatStyleBase
	virtual bool TryToRepeat_Implementation(UObject* Object) override;
	//Override RepeatStyleBase


	virtual void ReachTargetTriggerState(UTriggerTaskBase* Task) override;
	
public:
	
	/*
	* The reset type to reset the target task before repeat target task
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerTaskRepeatCondition")
	ETriggerTaskResetType ResetType = ETriggerTaskResetType::ETriggerTaskResetType_None;

	/*
	* This only work when the ResetType is ETriggerTaskResetType::ETriggerTaskResetType_Customize.
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Category = "TriggerTaskRepeatCondition")
	UTriggerResetStyleBase* CustomizeResetStyle = nullptr;

};

UCLASS(Blueprintable, BlueprintType, meta = (DisplayName = "RepeatWhenTaskFinished"))
class TRIGGERRUNTIME_API URS_RepeatTaskUntilCompleteFinished : public URS_RepeatTaskWhenReachTargetStateBase
{
	GENERATED_UCLASS_BODY()

public:

	virtual void ReachTargetTriggerState(UTriggerTaskBase* Task) override;

protected:

	UFUNCTION()
	void TaskPostFinishedCallback(UTriggerTaskBase* Task);

public:

	/*
	* Flag to check weather the repeat command will be stacked.
	* If the one task do not finish and another repeat command is send then this command will be stacked if this value is true,
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerTaskRepeatCondition")
	bool CanStacked;


private:

	//Tasks which is need to repeat
	TArray<UTriggerTaskBase*> PendingToRepeatTasks;

};
