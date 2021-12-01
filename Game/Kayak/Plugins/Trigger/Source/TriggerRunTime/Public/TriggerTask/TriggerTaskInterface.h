#pragma once

/*
* Author:	Liulianyou
* Time:		2020/7/6
* Purpose:	This file used to hold all tasks that is toggled by the trigger not only the collision trigger also the mission trigger
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/Interface.h"
#include "Misc/EnumClassFlags.h"

#include "TriggerTaskInterface.generated.h"

class UTriggerTaskComponentBase;
class UOperationInformationBase;
class UTriggerStyleBase;
class UTriggerTaskBase;
class AActor;

UENUM(BlueprintType)
enum class ETriggerTaskAutomaticallyEndType : uint8
{
	//This only worked when the target trigger is a scene trigger which have collision box
	ETriggerTaskAutomaticallyEndType_EndOverlap		UMETA("EndOverlap")
};

/*
* The state of the trigger task.
* 
* If you change any element of the enumeration you should also change the UTriggerTaskBase::StateEvent
*/
UENUM(BlueprintType)
enum class ETriggerTaskState : uint8
{
	//Start means this task is notified by the other object and try to do its confined content.
	ETriggerTaskState_NotifyByOthers	UMETA(DisplayName = "Start"),
	//This state usually used to prepare its local content so that the this task can active correctly
	ETriggerTaskState_Prepare			UMETA(DisplayName = "Prepare"),
	ETriggerTaskState_Active			UMETA(DisplayName = "Active"),
	//When in this state means all running content will skipped, the finial skip style should be defined by SkipStyle object
	ETriggerTaskState_Skip				UMETA(DisplayName = "Skip"),
	ETriggerTaskState_Tick				UMETA(DisplayName = "Tick"),
	ETriggerTaskState_Resume			UMETA(DisplayName = "Resume"),
	//Reset status means this task's data is clear, and it is ready to prepare to active.
	//By default This task is not running at this state as its description
	ETriggerTaskState_Reset				UMETA(DisplayName = "Reset"),
	ETriggerTaskState_Finished			UMETA(DisplayName = "Finished"),
	//Pause means all the data in the task will not reset to default
	ETriggerTaskState_Pause				UMETA(DisplayName = "Pause"),
	/*
	* Stop means this task can no way to reactive again
	* By default a task is stopped by other object, I assume this task do not run completely, so the task will not be finished as some goals have not reached.
	* when other object try to stop this task, this task only reset it according its own attribute and goal.
	*/
	ETriggerTaskState_Stop				UMETA(DisplayName = "Stop"),
	ETriggerTaskState_PostFinished		UMETA(DisplayName = "PostFinished"),
	/*
	* The end state is just used to mark all node of code have been executed.
	* The end state do not mean this task is destroyed, and the task can still start again.
	*/
	ETriggerTaskState_End				UMETA(hidden),
	//Sleeping means this task can be reactive again, The data have to reset to default
	ETriggerTaskState_Sleeping			UMETA(DisplayName = "Sleeping"),
	//The default initialize value for state, which means this task have never processed, you can treat it as this task is out trigger scene
	ETriggerTaskState_Max				UMETA(hidden)
};

UENUM(BlueprintType)
enum class ETriggerTaskResetType : uint8
{
	ETriggerTaskResetType_None				=0																		UMETA(DisplayName = "Do not reset"),
	//Only reset the data which created or changed at runtime
	ETriggerTaskResetType_ClearData			= 1 << 0																UMETA(DisplayName = "Clear Data"),
	//Only reset the effect this task created, but keep the runtime data.
	ETriggerTaskResetType_ResetContent		= 1 << 1																UMETA(DisplayName = "Revert Effect"),
	//This should make this ask as original and all effect it created should be reverted
	ETriggerTaskResetType_All				= ETriggerTaskResetType_ClearData | ETriggerTaskResetType_ResetContent	UMETA(DisplayName = "Reset all"),

	/*
	* If the reset type is specified to this type, I will use the confined reset style, This type will not block any other type.
	* When you implement Reset function and do not distinguish the type, and you specify the parameter of Reset with this type.
	* All your code in reset and the customized object code will be executed
	*/
	ETriggerTaskResetType_Customize			= 1 << 2																UMETA(DisplayName = "Customzied")
};

ENUM_CLASS_FLAGS(ETriggerTaskResetType)

UINTERFACE(MinimalAPI,BlueprintType, Category = "Trigger|Task")
class UTriggerTaskInterface : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

class TRIGGERRUNTIME_API ITriggerTaskInterface
{
	GENERATED_IINTERFACE_BODY()

public:

	//Called before active, and mostly used to do some preparation actions.
	UFUNCTION(BlueprintImplementableEvent)
	bool OnPrepare();

	//Called when this task start to run.
	UFUNCTION(BlueprintImplementableEvent)
	void OnActive();

	/*
	* Called when we need to skip the running content for the task
	* 
	* @paran SkipStyle the style how to skip this running content
	*/
	UFUNCTION(BlueprintImplementableEvent)
	void OnSkipped(UOperationInformationBase* SkipStyle = nullptr);

	//Called when this task finished
	UFUNCTION(BlueprintImplementableEvent)
	void OnFinished(UOperationInformationBase* FinishOperationInfo = nullptr);

	//Called when the task has been paused
	//@param Operation	the information to hold all data to identify this operation
	UFUNCTION(BlueprintImplementableEvent)
	void OnPause(UOperationInformationBase* Operation = nullptr);

	//Called when we resume the task to the target state
	//@param Operation	the information to hold all data to identify this operation
	UFUNCTION(BlueprintImplementableEvent)
	void OnResume(UOperationInformationBase* Operation = nullptr);

	//At this state the task will notify other module to notify them to do something
	UFUNCTION(BlueprintImplementableEvent)
	void OnPostFinished();

	//Invoked when all content in this task have been executed.
	UFUNCTION(BlueprintImplementableEvent)
	void OnEnd();

	/*
	* Called when the task form other states into sleeping
	* 
	* @param Operation 
	*/
	UFUNCTION(BlueprintImplementableEvent)
	void OnSleeping(UOperationInformationBase* SleepOperation = nullptr);

	/*
	* Stop this task, this is not the same as the Finished() as finished is the state of this task
	* but stop is the command of the task which can be used by other object
	* If other object stop this task, this task should reset all its data, and it will not go into the finish state.
	*
	* @param Operation	  the information to hold all data to identify this operation
	*/
	UFUNCTION(BlueprintImplementableEvent)
	void OnStop(UOperationInformationBase* StopOperation = nullptr);

	/*
	* Called when the task reset
	* 
	* @param Operation	  the information to hold all data to identify this operation
	*/
	UFUNCTION(BlueprintImplementableEvent, meta=(AdvancedDisplay = 1))
	void OnReset(UOperationInformationBase* ResetOperationInfo = nullptr);

	/*
	* When some other receive information form this task successfully, we should do some actions here
	*
	* @param ReceivedTask	the task which receive the notification from this task
	*/
	UFUNCTION(BlueprintImplementableEvent)
	bool OnNotifyOtherTriggerSuccessed(UTriggerTaskComponentBase* TargetTaskComponent, UTriggerTaskBase* Task );

	/*
	* Invoked When this task receive information from other task
	*
	* @param SenderTask		the notification which is send by
	* @param ExternalData	The external data which the send task will not storage.
	*/
	UFUNCTION(BlueprintImplementableEvent)
	bool OnReceiveNotifyOthers(UTriggerTaskComponentBase* TargetTaskComponent, UTriggerTaskBase* SendTask, UOperationInformationBase* StartOperationInfo = nullptr);

	////Define the style how to notify other triggers
	////@return true means the BP notify style function works wheel, and we will ignore native implementation
	//UFUNCTION(BlueprintImplementableEvent)
	//bool OnNotifyStyle();


	//Tick function to 
	UFUNCTION(BlueprintImplementableEvent)
	bool OnReceiveTick(float DeltaTime);

	//Called by BP when the owner of this task is selected in the editor
	UFUNCTION(BlueprintImplementableEvent)
	void OnSelectedInEditor(UObject* SelectedActor);

	/*
	* This is one way for BP to check weather current task can tick.
	* The difference between the member CanEverTick and CanTick() is CanTick can ditinguish the server and client,
	* And it can support customize tick condition
	* CanEverTick is just one property of condition to check tick, it is a simple way to control tick.
	*/
	UFUNCTION(BlueprintImplementableEvent)
	bool OnCanTick();

	/*
	* @param Toggled this is the return value, you should change it in this function
	*/
	UFUNCTION(BlueprintImplementableEvent)
	void OnCanBeToggled(bool& Result);

	/*
	* When something happed weather this task can end automatically 
	*/
	UFUNCTION(BlueprintImplementableEvent)
	void OnCanEndTaskAutomaically(bool& Result, ETriggerTaskAutomaticallyEndType EndType);

	/*
	* Convert the path which just use copy reference form the content in editor to valid path that we can use
	* LoadClass to load the content form the browser content.
	*/
	FString ConvertPathReferencValueToVaild(FString ReferencePath, bool Add_CSuffix = false);
};

