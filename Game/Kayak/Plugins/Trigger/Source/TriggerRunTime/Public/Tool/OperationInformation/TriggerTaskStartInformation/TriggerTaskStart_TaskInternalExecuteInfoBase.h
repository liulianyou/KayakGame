#pragma once

/*
* Author:	Liulianyou
* Time:		2021/3/17
* Purpose:	This is the base class used to store each toggle information for task execution when this execution is occurred in the task internal
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerTaskStartInformationBase.h"

#include "TriggerTaskStart_TaskInternalExecuteInfoBase.generated.h"

UCLASS(BlueprintType, Blueprintable, hidedropdown, Abstract, Category = "TriggerRuntime")
class TRIGGERRUNTIME_API UTriggerTaskStart_TaskInternalExecutionInfoBase : public UTriggerTaskStartInformationBase
{
	GENERATED_UCLASS_BODY()

public:

	//Get the actor who toggle this trigger
	virtual AActor* GetToggledActor_Implementation() const;
	virtual void CopyFromActiveInfo_Implementation(const FTaskActivationInfo& ActiveInfo);

	UFUNCTION(BlueprintCallable)
	virtual void SetParentOperationInfo(UOperationInformationBase* OperationInformation);

	UFUNCTION(BlueprintCallable)
	UOperationInformationBase* GetParentOperationInfo() const { return ParentOperationInfo; }

private:

	/*
	* The parent toggle information who own this info as this owner task of this info is restarted when this task finished
	*/
	UPROPERTY()
	UOperationInformationBase* ParentOperationInfo;

};

/*
* This information used to store the the target trigger task running at begin play
*/
UCLASS(BlueprintType, Blueprintable, Config = Game, Category = "TriggerRuntime", meta = (DisplayName = "BeginPlay"))
class TRIGGERRUNTIME_API UTriggerTaskStart_BeginPlay : public UTriggerTaskStart_TaskInternalExecutionInfoBase
{
public:
	GENERATED_UCLASS_BODY()

public:
	/*
	* Created new operation to start the trigger task at begin play state
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Operations", meta = (AdvancedDisplay = 1))
	static UTriggerTaskStart_BeginPlay* StartTaskAtBeginPlay(UTriggerTaskBase* StartedTask, UOperationInformationBase* ParentOperation = nullptr, UTriggerStyleBase* OperationStyle = nullptr);
};

/*
* this information stands for when the task is finished and try to restart due to some conditions
*/
UCLASS(BlueprintType, Blueprintable, Config = Game, Category = "TriggerRuntime", meta = (DisplayName = "StartTaskByStartConditions"))
class TRIGGERRUNTIME_API UTriggerTaskStart_StartTaskByStartConditions : public UTriggerTaskStart_TaskInternalExecutionInfoBase
{
public:
	GENERATED_UCLASS_BODY()

public:
	/*
	* Created new operation to start the trigger task when the start condition passed
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Operations", meta = (AdvancedDisplay = 1))
	static UTriggerTaskStart_StartTaskByStartConditions* StartTaskByStartConditions(UTriggerTaskBase* StartedTask, UOperationInformationBase* ParentOperation = nullptr, UTriggerStyleBase* OperationStyle = nullptr);
};

/*
* This information will be generated when the task is finished and try to notify the child task to run
*/
UCLASS(BlueprintType, Blueprintable, Config = Game, Category = "TriggerRuntime", meta = (DisplayName = "TaskFinishedToNotifyChild"))
class TRIGGERRUNTIME_API UTriggerTaskStart_TaskFinishedToNotifyChild : public UTriggerTaskStart_TaskInternalExecutionInfoBase
{
public:
	GENERATED_UCLASS_BODY()

public:
	/*
	* Created new operation to start the trigger task when its parent task is finished and try to notify the child task
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Operations", meta = (AdvancedDisplay = 2))
	static UTriggerTaskStart_TaskFinishedToNotifyChild* TaskFinishedToNotifyChild(UTriggerTaskBase* ParentTask, UTriggerTaskBase* ChildTask, UOperationInformationBase* ParentOperation = nullptr, UTriggerStyleBase* OperationStyle = nullptr);

};

/*
* This is class used to store the information when the task is finished and want to notify the trigger owner to notify other trigger to run trigger task
*/
UCLASS(BlueprintType, Blueprintable, Category = "TriggerRuntime", meta = (DisplayName = "NotifyChildNode"))
class TRIGGERRUNTIME_API UTriggerTaskStart_NotifyChildNode : public UTriggerTaskStart_TaskInternalExecutionInfoBase
{
	GENERATED_UCLASS_BODY()

public:

	/*
	* Create new operation to start task in the child nodes of the trigger task component
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Operations", meta = (AdvancedDisplay = 2))
	static UTriggerTaskStart_NotifyChildNode* NotifyChildNode(UTriggerTaskBase* FinishedTask, UOperationInformationBase* ParentOperation = nullptr, UTriggerStyleBase* OperationStyle = nullptr);

};

/*
* This information will be generated when the task run repeatedly
*/
UCLASS(BlueprintType, Blueprintable, hidedropdown, Abstract, Config = Game, Category = "TriggerRuntime")
class TRIGGERRUNTIME_API UTriggerTaskStart_RepeatTaskBase : public UTriggerTaskStart_TaskInternalExecutionInfoBase
{
public:
	GENERATED_UCLASS_BODY()
};

/*
* This operation should occurred when the the repeat condition has meet the condition, then the repeat conditions have no specific styles then go to start the target task directly
*/
UCLASS(BlueprintType, Blueprintable, Config = Game, Category = "TriggerRuntime")
class TRIGGERRUNTIME_API UTriggerTaskStart_RepeatConditionsWithNoStyles : public UTriggerTaskStart_TaskInternalExecutionInfoBase
{

	GENERATED_UCLASS_BODY()

public:
	/*
	* Create new operation to start the trigger task when there is no specific styles in the repeat condition
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Operations", meta = (AdvancedDisplay = 3))
	static UTriggerTaskStart_RepeatConditionsWithNoStyles* RepeatConditionsWithNoStyles( UObject* Causer, UTriggerTaskBase* TargetTask, UTriggerStyleBase* OperationStyle = nullptr);

};


/*
* this information stands for when the task is finished and try to restart due to some conditions
*/
UCLASS(BlueprintType, Blueprintable, Config = Game, Category = "TriggerRuntime", meta = (DisplayName = "RepeatTaskWhenReachState"))
class TRIGGERRUNTIME_API UTriggerTaskStart_RepeatTaskWhenReachState : public UTriggerTaskStart_RepeatTaskBase
{
public:
	GENERATED_UCLASS_BODY()

public:

	/*
	* Create new operation when the target trigger task reach to the target state
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Operations", meta = (AdvancedDisplay = 3))
	static UTriggerTaskStart_RepeatTaskWhenReachState* RepeatTaskWhenReachState(UObject* Causer, UTriggerTaskBase* TargetTask, ETriggerTaskState TargetState, UOperationInformationBase* ParentOperation = nullptr, UTriggerStyleBase* OperationStyle = nullptr);

public:

	UFUNCTION(BlueprintCallable)
	void SetTaskState(ETriggerTaskState value) { TaskState = value; };

	UFUNCTION(BlueprintCallable)
	ETriggerTaskState GetTaskState() { return TaskState; }

private:
	//When this toggle information is created 
	ETriggerTaskState TaskState;
};