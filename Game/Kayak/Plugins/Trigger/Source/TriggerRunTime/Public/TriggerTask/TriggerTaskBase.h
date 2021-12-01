#pragma once
/*
* Author:	Liulianyou
* Time:		2020/7/6
* Purpose:	The trigger task means when the target trigger active (overlap or hit), there must be something happen.
*			And this task is used to describe the things which is happed
*			There two kinds of task in this system: Template task, Instance task.
*			Template task is task which definition has been configured by designer or any other ways before runtime.
*			Instance task is task which is created by template task at runtime or just created directly at runtime.
*			Part of the template task will not do the task content when it is rise up by the trigger task component, and it will notify its instance task to do the task content.
*			While all Instance task will always do the task content.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/UObjectGlobals.h"

#include "TriggerTaskInterface.h"
#include "TaskActiveInformation.h"
#include "TriggerDefinition.h"
#include "TriggerInterface.h"

//#include "Misc/EnumClassFlags.h"
#include "Engine/EngineTypes.h"

#include "TriggerTaskBase.generated.h"

class UTriggerTaskExternalDataBase;
class UTriggerTaskStateSwitchBase;
class UTriggerStyleBase;
class UTriggerTaskManager;
class UEvaluatorOperation;
class UReplicateTypeBase;
class UTriggerTaskBase;
class UTriggerManager;
class ATriggerBase;
class AActor;
class UWorld;

UENUM(BlueprintType)
enum class ETaskTransferType : uint8
{
	//This trigger has no information to others
	ETaskTransferType_None		UMETA(Hidden),
	//The task's owner will not change, it only notify other triggers
	ETaskTransferType_Notify	UMETA(DisplayName = "Notify"),
	//Will give other trigger new copy instance of this task
	ETaskTransferType_Copy		UMETA(DisplayName = "copy"),
	//The original task will be removed form the trigger and Its content will be stored in the target trigger,
	ETaskTransferType_Move		UMETA(DisplayName = "Move")
};

/*
* The instance type when new trigger task need to be activated.
* ETaskInstanceType_NoNewInstance && ETaskInstanceType_CDO will not create new task instance
*/
UENUM(BlueprintType)
enum class ETaskInstanceType : uint8
{
	/*
	* Each time to run the target task I need to create new one to do the task content when the task is treated as template
	* The template task with this flag will not do any task content instead it will notify its instanced task to do task content
	*/
	ETaskInstanceType_CreateNewInstance				UMETA(DisplayName = "Create new instance from this task"),
	//I will use the instanced which is already instanced by the designer 
	ETaskInstanceType_NoNewInstance					UMETA(DisplayName = "Use this task directly"),
	//Just use the CDO the this task, this will ignore all configured value in the map
	ETaskInstanceType_CDO							UMETA( Hidden, DisplayName = "Use the CDO of this task"),
};

#define  DefineDeletegateFunction( EngineFunction ) \
	template< class UserClass >\
	void InvokeEngineFunction##EngineFunction( ETriggerTaskState EventType, UserClass* InUserObject, typename FTriggerTaskState::FDelegate::template TMethodPtrResolver< UserClass >::FMethodPtr InMethodPtr, FName InFunctionName) \
	{\
		if(StateEvent.IsValidIndex(int(EventType)))\
		{\
			StateEvent[int(EventType)]->EngineFunction(InUserObject, InMethodPtr, InFunctionName);\
		}\
	}

#define  DefineDeletegateFunctionWithReturnType(  EngineFunction, ReturnType ) \
	template< class UserClass >\
	ReturnType InvokeEngineFunctionWithReturnType##EngineFunction( ETriggerTaskState EventType, UserClass* InUserObject, typename FTriggerTaskState::FDelegate::template TMethodPtrResolver< UserClass >::FMethodPtr InMethodPtr, FName InFunctionName) \
	{\
		if(StateEvent.IsValidIndex(int(EventType)))\
		{\
			return StateEvent[int(EventType)]->EngineFunction( InUserObject, InMethodPtr, InFunctionName );\
		}\
		return ReturnType(0);\
	}

#define  InvokeDelegateFunction( EventType, UserObject, FuncName, EngineFunction ) InvokeEngineFunction##EngineFunction( EventType, UserObject, FuncName, STATIC_FUNCTION_FNAME( TEXT( #FuncName ) ))
#define  InvokeDelegateFunctionWithReturnType( EventType, UserObject, FuncName, EngineFunction ) InvokeEngineFunctionWithReturnType##EngineFunction(EventType, UserObject, FuncName, STATIC_FUNCTION_FNAME( TEXT( #FuncName ) ))

#define ConditionOperation( FunctionName ) \
template<class Condition = class UTriggerTaskStateSwitchBase*, class ...Conditions> \
void FunctionName(Condition FirstCondition, Conditions&... ConditionParamaters)\
{\
	FunctionName(FirstCondition);\
	FunctionName(ConditionParamaters...);\
}\
void FunctionName(class UTriggerTaskStateSwitchBase* Condition);\
void FunctionName() {}

USTRUCT()
struct FPendingToExecuteInfo
{
	GENERATED_BODY()

	UPROPERTY()
	FActiationInfoHandle ActivationHandle;

public:
	void Reset();
};

/*
* The handle to the trigger task which I can use it to stand for the target trigger task
*/
USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FTriggerTaskHandle
{
	GENERATED_BODY()

public:

	//Only the attributes which can distinguish two task into different category can be treated as Intrinsic Attribute
	enum TaskIntrinsicAttribute
	{
		EDynamic = 1 << 30,
		ETemplate = 1 << 31,
	};

public:
	FTriggerTaskHandle()
	{
		Handle = INDEX_NONE;
	}

	FTriggerTaskHandle( const FTriggerTaskHandle& Other)
	{
		Handle = Other.GetHandle();
	}

	FTriggerTaskHandle(int InHandle) : Handle(InHandle) {}

public:
	bool IsValid();

	//Check weather this handle is stand for the dynamic trigger task
	bool IsDynamic();

	//Check weather this handle is stand for the template trigger task
	bool IsTemplate();

	//Make current handle to be invalid
	void Invalidate();

	int GetHandle() const { return Handle; }
	 
	static FTriggerTaskHandle GenerateNewHandle( bool isTemplate, bool isDynamic );

	/*
	* When you use this function please make sure you are familiar with the task handle.
	* Make sure all task has unique Handle
	*/
	void SetNewHandle( int Value );

	friend bool operator==(const FTriggerTaskHandle& Left, const FTriggerTaskHandle& Right);

	void operator=(const FTriggerTaskHandle& Other);

	static FTriggerTaskHandle InvaildHand;

private:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "TriggerRuntime|Handle")
	int Handle;
};
bool operator==(const FTriggerTaskHandle& Left, const FTriggerTaskHandle& Right);


/*
* The parameter Task can be template task or relative task, you can filter it by invoke IsTemplateTask(). 
*/
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTriggerTaskState, UTriggerTaskBase*, Task );

UCLASS(BlueprintType, Blueprintable, DefaultToInstanced, hidedropdown, editinlinenew, Category="TriggerRuntime|Task")
class TRIGGERRUNTIME_API UTriggerTaskBase : public UObject , public ITriggerTaskInterface
{
	GENERATED_UCLASS_BODY()

public:

	friend class UTriggerResetStyleBase;
	friend class UTriggerSkipStyleBase;

public:

	/*
	* Initialize this task when the instance of task is once it crated at runtime.
	* 
	* @param	Owner		The owner component which contain this task.
	* @param	AsTemplate	Flag to be set to determine weather this task is template task.
	* @param	IsDynamicTask	Flag to check weather this task is dynamic instanced at runtime, part of template task can be dynamic task when it is created at runtime
	*/
	virtual void InitializeTask(UTriggerTaskComponentBase* Owner, bool AsTemplate, bool IsDynamicTask);

	/*
	* Register this task.
	* the difference between InitializeTask and register task is InitializeTask is just used to initialize its local content, 
	* register task is used to notify the other module so that they can access it safely
	*/
	virtual void Register();

	/*
	* Unregister this task, so that no matter weather this task is been destroyed, other module can not access it anymore unless it is registed again
	*/
	virtual void UnRegister();

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "BeginPlay"))
	void OnBeginPlay();
	
	/*
	* This function will only called in the TriggerTaskCompoent' BeginPlay
	* As the UObject don't have any begin play function, I need add it manually
	*/
	virtual void BeginPlay();

	virtual void BeginDestroy() override;
#if WITH_EDITOR

	virtual void PreEditChange(FProperty* PropertyAboutToChange) override;
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	virtual void PostInitProperties() override;
	virtual void Serialize(FArchive& Ar) override;
	virtual UWorld* GetWorld() const override;
	
#pragma region NetSupport
	virtual bool IsSupportedForNetworking() const { return true; }
	/*
	* Although the trigger task support the RPC by default but there are a lot limitation for RPC usage.
	* 1):Most time the task is lie on the Actors which is at the map, and this makes the task only support the multi net RPC.
	* 2):The task is object which may be crated at runtime and at that point the client may not have the correspond task this will make RPC invalid
	* So I suggest you can use property replicate function to do the RPC things, although the property replicate function will take more resource.
	*/
	virtual int32 GetFunctionCallspace(UFunction* Function, FFrame* Stack) override;
	virtual bool CallRemoteFunction(UFunction* Function, void* Parms, struct FOutParmRec* OutParms, FFrame* Stack) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;

	//Local support for network, so that I can customize the replication condition 
	virtual void PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker);

	//Try to check weather we should replicate the target task activation info
	virtual  bool ShouldReplicateActivationInfo(const FTaskActivationInfo& Info) const;

	//Replicate the sub objects in this trigger task
	virtual bool ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags);

#pragma endregion NetSupport

	/*
	* Called when the task reset
	*
	* @param ResetOperationInfo the operation which apply to this task, if null means this task should be forced to reset all
	*/
	UFUNCTION(BlueprintCallable, meta = (AdvancedDisplay = 1), Category = "TriggerRuntime|Task")
	virtual void Reset(UOperationInformationBase* ResetOperationInfo = nullptr);

	//Prepare to execute this task, this function should be execute once in this task one execution life
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	virtual bool Prepare();

	/*
	* This task is in active state, has been initialized/prepared but not finished
	* 
	* @param ActiveInfo		who, where and how to active this task
	* @param ForceActive true means it will active this task without check any other conditions and active this task directly
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	virtual void Active( bool ForceActive = true);

	/*
	* Try to skip running content of this task
	* 
	* @param OperationInfo the information to identify this operation
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	virtual void Skip(UOperationInformationBase* OperationInfo = nullptr);

	/*
	* When this task have finished immediately this function will be invoked
	* 
	* @param OperationInfo the information to identify this operation
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	virtual void Finished(UOperationInformationBase* OperationInfo = nullptr);

	/*
	* Pause this task
	* 
	* @param OperationInfo the information to identify this operation
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	virtual void Pause(UOperationInformationBase* OperationInfo = nullptr);

	/*
	* Resume this task
	* 
	* @paralm OperationInfo the information to identify this operation
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	virtual void Resume(UOperationInformationBase* OperationInfo = nullptr);

	/*
	* Stop this task, this is not the same as the Finished() as finished is the state of this task
	* but stop is the command of the task which can be used by other object
	* If other object stop this task, this task should reset all its data, and it will not go into the finish state.
	*
	* @param Cause	  Who want to stop this task
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	virtual void TryToStop( UOperationInformationBase* Operation = nullptr);

	//All task should not tick itself, it should be controlled by the component,
	//So I don't use the tick function in the UObject to avoid tick automatically
	UFUNCTION()
	virtual void Tick(float DeltaTime);

	//Try to make the this task go int sleep status
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	virtual void TryToSleep( UOperationInformationBase* Operation = nullptr );

	//When the owner of this task is selected in the editor, we should show some debug information for designer
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	virtual void SelectedInEditor(UObject* SelectedActor);


	/*
	* When some other receive information form this task successfully, we should do some actions here
	*
	* @param ReceivedTask	the task which receive the notification from this task
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	virtual bool NotifyOtherComponentSuccessed(UTriggerTaskComponentBase* OtherComponent, UTriggerTaskBase* ReceivedTask);

	/*
	* Invoked When this task receive information from other task,
	* Most time you can treat it as awake function
	*
	* @param OtherComponent The component which send this notify, most time it is the SendTask's owner
	* @param SenderTask		The notification which is send by, This value maybe null if this task is invoked by the component
	* @param ExternalData	The external data which the sender task will not storage that this task will process
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	virtual bool ReceiveNotifyFromOthersComponent(UTriggerTaskComponentBase* OtherComponent, UTriggerTaskBase* SenderTask, UOperationInformationBase* StartOperationInfo);
	
	/*
	* NetMuticast when the server notify the client task to run
	*
	* Notice: As it is the NetMutlicast function I must make sure the parameter is net serialized 
	*/
	UFUNCTION(NetMulticast, Reliable, WithValidation)
	virtual void Muticast_ReceiveNotifyFromOthersComponent(UTriggerTaskComponentBase* OtherComponent, UTriggerTaskBase* SenderTask, UOperationInformationBase* StartOperationInfo);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	UTriggerManager* GetTriggerManager() const;

	//Check weather this task can be toggled
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	virtual bool CanBeToggled();

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	UTriggerTaskComponentBase* GetTriggerOwner() const;

	/*
	* Try to get the owner actor if this task has
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	AActor* TryToGetOwnerActor();

	//Set the Instigator of this task
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	virtual void SetInstigator(AActor* Instigator);

	/*
	* Instigator is the owner actor which own this task, it maybe not the same as GetOwner() of this object
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	AActor* GetInstigator() { return InstigatorOwner; }

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	void AddChildTask(UTriggerTaskBase* ChildTask);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	void RemoveChildTask(UTriggerTaskBase* ChildTask);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	void ClearChildTask();

	/*
	* This is the final implementation to check weather this task can use the tick function 
	* The difference between the member CanEverTick and CanTick() is CanTick can ditinguish the server and client,
	* And it can support customize tick condition
	* CanEverTick is just one property of condition to check tick, it is a simple way to control tick 
	*
	* Notice:	Try to make the OnCanTick in the BP is the final result of the Tick we should make sure the function in the base class should 
 	*			be processed after the derived class
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	virtual bool CanTick();

	/*
	* Check weather this task is running.
	* 
	* @param IgnorePauseState true means when we pause this task this function will return false even if the original state is in active;
	* */
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	bool IsRunning( bool IgnorePauseState = false);

	/*
	* Check weather all the task include the child task in the chain have finished
	* */
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	bool IsCompletelyFinished() const;

	/*
	* Check weather this task have finished, maybe the child task have not finished
	* */
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	bool IsFinished() const;

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	ETriggerTaskState GetTriggerState() { return State; }

	//Get the execute count of current task
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	int GetCurrentExecuteCount() const;

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	UTriggerTaskManager* GetTriggerTaskManager() const;

	/*
	* The difference between IsDynamic and IsTemplate is Dynamic task is instanced at runtime.
	* Dynamic task should be created from one template task. the template task is the task which is confined before runtime which is controlled by the LD designer
	*/

	/*
	* Flag to check weather this task is just used as template which will be used to create new instance.
	*
	* a template task will not run any content except Instance type is specify to ETaskInstanceType_NoNewInstance
	*
	* This member should be intrinsic attribute, so it should be changed any more after it has been set
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	bool IsTemplateTask() { return TaskHandle.IsTemplate(); }

	/*
	* Flag to check weather this task is created at runtime dynamically
	*
	* Dynamic means this task is not instanced in the editor mode and it is created at runtime.
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	bool IsDynamicTask() { return TaskHandle.IsDynamic(); }

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	UTriggerTaskBase* GetTemplate() { return Template; }

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	void SetTemplate(UTriggerTaskBase* value) { Template = value; }

	/*
	* Check the run type of this task weather it is match for current net role
	* #return true means the run type of this task is match for current net role
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	bool CheckRunTimeType();

	/*
	* Enter the post finish state regard of the original state.
	* Please tack care to use as it may be cause some external information.
	* If should be invoked after Finish state.
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	void EnterPostFinishedState();

	/*
	* Try to get valid instance task form the instanced task pool, if there is no valid instance task then just create new one
	* 
	* @param ActivationInfo the target activated instanced task pool
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime")
	UTriggerTaskBase* FindOrAddNewInstance(FTaskActivationInfo& ActivationInfo);

	//Get the immediate information for activate, this can be changed when the this task is activated by different ways
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	FTaskActivationInfoContainer& GetImmediateActivationInformation();

	/*
	* Get all instanced tasks which is created by this template
	* if this task is not used as template then this out array only contain its self
	*/
	void GetAllInstacedTask(TArray<UTriggerTaskBase*>& InstanceTask);

	/*
	* Check weather the execute count can be replicated to client.
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime")
	bool CanReplicateExecuteCount();

	UFUNCTION()
	virtual void Rep_ActivatedCount();

	UFUNCTION()
	virtual void Rep_State();

	UFUNCTION()
	virtual void Rep_ImmediateActivationInformation();

	UFUNCTION()
	virtual void Rep_PendingToExecuteInfo();

public:
#pragma region MemberGetterFunction

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	UTriggerTaskStateSwitchBase* GetStartConditions() const { return StartConditions; }
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	UTriggerTaskStateSwitchBase* GetFinishConditions() const { return FinishConditions; }
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	UTriggerTaskStateSwitchBase* GetStopConditions() const { return StopConditions; }
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	UTriggerTaskStateSwitchBase* GetSkipConditions() const { return SkipConditions; }
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	UTriggerTaskStateSwitchBase* GetSleepConditions() const { return SleepConditions; }
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	UTriggerTaskStateSwitchBase* GetResetConditions() const { return ResetConditions; }
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	UTriggerTaskStateSwitchBase* GetResumeConditions() const { return ResumeConditions; }
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	UTriggerTaskStateSwitchBase* GetRepeatConditions() const { return RepeatConditions; }
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	UTriggerTaskStateSwitchBase* GetPauseConditions() const { return PauseConditions; }

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	const FGuid& GetConstID() const { return ID; }
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	FGuid& GetID() { return ID; }
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	FGuid GetCopyID() const { return ID; }

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	const FTriggerTaskHandle& GetConstTaskHandle() const { return TaskHandle; }
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	FTriggerTaskHandle& GetTaskHandle() { return TaskHandle; }
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	FTriggerTaskHandle GetCopyTaskHandle() const { return TaskHandle; }

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	TArray<UTriggerTaskBase*>& GetChildTasks() { return ChildTask; }
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	const TArray<UTriggerTaskBase*>& GetConstChildTasks() const { return ChildTask; }
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	TArray<UTriggerTaskBase*> GetCopyChildTasks() const { return ChildTask; }

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	UReplicateTypeBase* GetReplicateType() const { return ReplicateType; }

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	ETriggerTaskState GetCurrentTriggerTaskState() { return State; }

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	ERunType GetRunType() { return RunType; }

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	int GetCurrentActiveInfoIndex() { return CurrentActiveInfoIndex; }

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	bool CanExecuteAutomatically() { return ExecuteAutomatically; }

#pragma endregion MemberGetterFunction
#pragma region MemberSetterFunction

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	void SetStartConditions(UTriggerTaskStateSwitchBase* Switch, bool CreateNewInstance = false);
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	void SetFinishConditions(UTriggerTaskStateSwitchBase* Switch, bool CreateNewInstance = false);
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	void SetStopConditions(UTriggerTaskStateSwitchBase* Switch, bool CreateNewInstance = false);
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	void SetSkipConditions(UTriggerTaskStateSwitchBase* Switch, bool CreateNewInstance = false);
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	void SetSleepConditions(UTriggerTaskStateSwitchBase* Switch, bool CreateNewInstance = false);
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	void SetPauseConditions(UTriggerTaskStateSwitchBase* Switch, bool CreateNewInstance = false);
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	void SetResumeConditions(UTriggerTaskStateSwitchBase* Switch, bool CreateNewInstance = false);
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	void SetResetConditions(UTriggerTaskStateSwitchBase* Switch, bool CreateNewInstance = false);
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	void SetRepeatConditions(UTriggerTaskStateSwitchBase* Switch, bool CreateNewInstance = false);

#pragma endregion MemberSetterFunction

#pragma region ExternalData
	
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|UserData")
	const TArray<UTriggerTaskExternalDataBase*>& GetConstUserDatas() const { return UserDatas; };
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|UserData")
	TArray<UTriggerTaskExternalDataBase*>& GetUserDatas() { return UserDatas; }

	//Try to check weather this task contain the target user data with the specific class
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|UserData")
	bool HasTargetUserDate( TSubclassOf<UTriggerTaskExternalDataBase> ExternalDataClass );

	/*
	* Get the target user data which has the specific class type
	* 
	* @param ExternalDataClass the type of target user data
	* @param Index if the number of user data with the external data type more then one then this index will specify the data
	* 
	* #return this can return null.
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|UserData")
	UTriggerTaskExternalDataBase* GetTargetUserData(TSubclassOf<UTriggerTaskExternalDataBase> ExternalDataClass, int Index = 0);

	//Try to add user data according to the data type, this will create new data to this task.
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|UserData")
	UTriggerTaskExternalDataBase* AddNewUserDataByClass(TSubclassOf<UTriggerTaskExternalDataBase> ExternalDataClass);

	//Try to add user data according to template data, and it will create new data according to parameter CreateNew
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|UserData")
	UTriggerTaskExternalDataBase* AddNewUserDataByInstance(UTriggerTaskExternalDataBase* TemplateData, bool CreateNew = true);

	//Remove all user data which the specific data type
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|UserData")
	void RemoveUserDataByClass(TSubclassOf<UTriggerTaskExternalDataBase> ExternalDataClass);

	//Remove the specific data
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|UserData")
	void RemoveUserDataByInstance(UTriggerTaskExternalDataBase* TemplateData);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|UserData")
	void InitializeUserData();

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|UserData")
	void FinializeUserData();

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|UserData")
	void ResetUserData(UOperationInformationBase* OperationInfo = nullptr);

#pragma endregion ExternalData

public:
	/*
	* Just used to debug the call stack in native codes
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	void DebugBreak();


protected:

	/*
	* Mark current activation information successful or failed
	* 
	* @param Successed true means current activation information successful, vices verse
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	void MarkCurrentActivationInfo( bool Successed );

private:

	//The hock function in the time manager when we want to run this task but the specific conditions are not meet.
	UFUNCTION()
	void SwitchEventStartConditions();
	UFUNCTION()
	void SwitchEventFinishConditions();
	UFUNCTION()
	void SwitchEventStopConditions();
	UFUNCTION()
	void SwitchEventSleepConditions();
	UFUNCTION()
	void SwitchEventResetConditions();
	UFUNCTION()
	void SwitchEventSkipConditions();
	UFUNCTION()
	void SwitchEventPauseConditions();
	UFUNCTION()
	void SwitchEventResumeConditions();
	UFUNCTION()
	void SwitchEventRepeatConditions();

public:

	/*
	* Add new listener to this task so that it can do something according to the state of this task
	* 
	* Before you add new event you should check this event has already in the event graph.
	* 
	*/
	void AddStateEventListener(ETriggerTaskState StateType, FScriptDelegate NewDelegate);

	void RemoveStateEventListener(ETriggerTaskState StateType, FScriptDelegate NewDelegate);

	DefineDeletegateFunction(  __Internal_AddDynamic) 
	DefineDeletegateFunction(  __Internal_AddUniqueDynamic)
	DefineDeletegateFunctionWithReturnType(  __Internal_IsAlreadyBound, bool)
	DefineDeletegateFunction(  __Internal_RemoveDynamic)

#define AddTriggerTaskStateListener(EventType, UserObject, FuncName)   InvokeDelegateFunction(EventType, UserObject, FuncName, __Internal_AddDynamic)
#define AddTriggerTaskStateUniqueListener(EventType, UserObject, FuncName) InvokeDelegateFunction(EventType, UserObject, FuncName, __Internal_AddUniqueDynamic)
#define HasAlreayBind(EventType, UserObject, FuncName) InvokeDelegateFunctionWithReturnType(EventType, UserObject, FuncName, __Internal_IsAlreadyBound)
#define RemoveTriggerTaskStateListener(EventType, UserObject, FuncName)  InvokeDelegateFunction(EventType, UserObject, FuncName, __Internal_RemoveDynamic)

protected:

	/*
	* When child tasks  have post finished its content it will notify its parent try to go into post finished state.
	*/
	void NotifyByChildToPostFinish( UTriggerTaskBase* Child );

	/*
	* When this function invoked means all child class have finished its tasks, we can notify the parent try to invoke post finish function
	*
	* This function should never be invoked by any other module, as you can treat as after this task have done the content it need to do it owner clean up or other things
	*/
	virtual void PostFinished();

	//Check weather this task should be replicated to client
	bool IsNetReplicatedTask();

	ConditionOperation(StartCondition);
	ConditionOperation(EndCondition);
	ConditionOperation(InitializeCondition);
	ConditionOperation(ResetCondition);
	//Make the target conditions can be evaluate
	ConditionOperation(MarkConditionEvaluatble);

	/*
	* Register some evaluator event to check weather the target condition is valid
	*
	* @param RegisterEvaluator the evaluator which should be resisted which stands for the target condition should be check each frame
	* @param UnRegisterEvalutors the evaluators which stands for the condition should stop to be check each frame
	*/
	template<class RegisterConditiionEvaluator, class ...UnRegisterConditionEvaluator>
	void StartConditionEvaluator(RegisterConditiionEvaluator& RegisterEvaluator, UnRegisterConditionEvaluator&... UnRegisterEvalutors)
	{
		StartCondition(RegisterEvaluator);

		EndCondition(UnRegisterEvalutors...);
	};

	/*
	* Unregister the target evaluator which means the target condition should not be checked each frame
	*/
	template<class UnRegisterConditionEvaluator, class ...RegisterConditiionEvaluator>
	void EndConditionEvaluator(UnRegisterConditionEvaluator& RegisterEvaluator, RegisterConditiionEvaluator&... UnRegisterEvalutors)
	{
		EndCondition(RegisterEvaluator);

		StartCondition(UnRegisterEvalutors...);
	};

private:

	/*
	* This function will always be invoked after PostFinished.
	* This function should put in the private scope as it only can be invoked by the PostFinished.
	* The difference between PostFinished and EndTask is PostFinished is used to notify other module to do something.
	* EndTask is just used to mark all content have been executed.
	* The difference between EndTask and Sleep is EndTask state is still can be treated as Awake state, but sleeping is just sleep state.
	*/
	virtual void EndTask();

	//Register the child task of the target task recursively
	void RegisterChildTaskRecursively();

	//Register all the trigger tasks in this component
	void UnRegisterRegisterChildTaskRecursively();

	//Toggle state changed event for other module to get access to inspire this task
	void ToggleStateEvent( ETriggerTaskState State );

	//Hock function to check weather this task has finished 
	void CheckTaskFinishedEvent();

	//Clear the evaluator handle which is used for prerequisite condition
	void ClearEvaluatorHandle( FTimerHandle& Param_EvaluatorHandle );

	/*
	* Try to create new instance which will use this task as its template
	* 
	* #return true means new instance is created
	*/
	bool TryToCreateNewInstance( FTaskActivationInfo& ActivationInfo);

	//When the state is changed in the instanced task it will notify the template task this task have been changed
	void TryToNotifyTemplateStateChanged( ETriggerTaskState CurrentState);

	//Template will process the instanced task changed
	void ReceiveInstanceTaskStateChanged(UTriggerTaskBase* InstanceTask, ETriggerTaskState CurrentState);

	/*
	* When new instance task is created by the template task, the instance task can not execute immediately at Server/Client mode as the client may not have this object.
	* I need to wait the server to replicate the instance task to client. So that net function can work
	*/
	void TryToExecuteInstanceTask(UTriggerTaskBase* InstanceTask, FTaskActivationInfo& ActivationInfo);

	//When the server want to client to run this task, this function will check all conditions to run this task in client, Only be invoked on client
	void PendingToExecuteTask();

public:

	UPROPERTY(BlueprintAssignable, Transient)
	FTriggerTaskState	StartEvent;
	UPROPERTY(BlueprintAssignable, Transient)
	FTriggerTaskState	PrepareEvent;
	UPROPERTY(BlueprintAssignable, Transient)
	FTriggerTaskState	ActiveEvent;
	UPROPERTY(BlueprintAssignable, Transient)
	FTriggerTaskState	SkipEvent;
	UPROPERTY(BlueprintAssignable, Transient)
	FTriggerTaskState	TickEvent;
	UPROPERTY(BlueprintAssignable, Transient)
	FTriggerTaskState	ResumeEvent;
	UPROPERTY(BlueprintAssignable, Transient)
	FTriggerTaskState	ResetEvent;
	UPROPERTY(BlueprintAssignable, Transient)
	FTriggerTaskState	FinishedEvent;
	UPROPERTY(BlueprintAssignable, Transient)
	FTriggerTaskState	PauseEvent;
	UPROPERTY(BlueprintAssignable, Transient)
	FTriggerTaskState	StopEvent;
	UPROPERTY(BlueprintAssignable, Transient)
	FTriggerTaskState	PostFinishedEvent;
	UPROPERTY(BlueprintAssignable, Transient)
	FTriggerTaskState	EndEvent;
	UPROPERTY(BlueprintAssignable, Transient)
	FTriggerTaskState	SleepingEvent;

public:

	//The owner of this trigger, if this task don't need to instance, there value should be null
	UPROPERTY(Transient, Replicated)
	UTriggerTaskComponentBase* TriggerOwner;

	UPROPERTY(Transient, ReplicatedUsing=Rep_State)
	ETriggerTaskState State;

	UPROPERTY(Transient, Replicated)
	ETriggerTaskState LastState;

	//When this task is finished it will try to run its child task
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, Category = "Child Tasks")
	TArray<UTriggerTaskBase*> ChildTask;

	/*
	* The parent task which will always run before this task, Each task only have one parent task, but may be have more than one child
	* This is different form the PreRequest as the prerequisite may not a task it maybe some condition
	* When Parent Task is null and all child task have finished we should notify the owner of this task to notify the child component to run its tasks
	* */
	UPROPERTY()
	UTriggerTaskBase* ParentTask;

	UPROPERTY(Transient)
	bool HasBeenRegisted = false;

	//Flag to check weather this task can use the tick function
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime")
	bool CanEverTick;

	//Flag to check weather this task can be executed automatically without any other conditions
	UPROPERTY(BlueprintReadOnly, EditAnywhere, AdvancedDisplay, Category = "TriggerRuntime")
	bool ExecuteAutomatically;

	//Flag to check weather the states of this task should be saved to another files, so that it can be resumed when next execute
	UPROPERTY(BlueprintReadOnly, EditAnywhere, AdvancedDisplay, Category = "TriggerRuntime")
	bool ShouldBeSaved;

	//The transfer style of this task when some information need transfer to other triggers
	UPROPERTY(BlueprintReadOnly, EditAnywhere, AdvancedDisplay, Category = "TriggerRuntime")
	ETaskTransferType TransferType;

	//Determine where this task will run
	UPROPERTY(BlueprintReadOnly, EditAnywhere, AdvancedDisplay, Category = "TriggerRuntime")
	ERunType RunType;

	//Determine how to run this task when this task is prepare to run
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, AdvancedDisplay, Category = "TriggerRuntime")
	ETaskInstanceType InstanceType;

private:

	/*
	* These conditions will define how the task change state automatically
	*/
#pragma region RuntimeCondition

	/*
	* The condition to check how to active this task
	* 
	* if one of the conditions is valid then go to START state directly
	*/
	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category = "RuntimeCondition", meta=(AllowPrivateAccess = "true"))
	UTriggerTaskStateSwitchBase* StartConditions;

	/*
	* The condition to check how to active this task
	* 
	* if one of the conditions is valid then go to FINISH state directly
	*/
	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category = "RuntimeCondition", meta = (AllowPrivateAccess = "true"))
	UTriggerTaskStateSwitchBase* FinishConditions;

	/*
	* The condition to check when to stop this task
	* 
	* if one of the conditions is valid then go to STOP state directly
	*/
	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category = "RuntimeCondition", meta = (AllowPrivateAccess = "true"))
	UTriggerTaskStateSwitchBase* StopConditions;

	//
	/*
	* The condition to check when to make this task sleep
	*
	* if one of the conditions is valid then go to SLEEP state directly
	*/
	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category = "RuntimeCondition", meta = (AllowPrivateAccess = "true"))
	UTriggerTaskStateSwitchBase* SleepConditions;

	/*
	* The condition to check when to RESET this task
	*
	* if one of the conditions is valid then go to RESET state directly
	*/
	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category = "RuntimeCondition", meta = (AllowPrivateAccess = "true"))
	UTriggerTaskStateSwitchBase* ResetConditions;

	/*
	* The condition to check when to SKIP this task
	*
	* if one of the conditions is valid then go to SKIP state directly
	*/
	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category = "RuntimeCondition", meta = (AllowPrivateAccess = "true"))
	UTriggerTaskStateSwitchBase* SkipConditions;

	/*
	* The condition to check when to PAUSE this task
	*
	* if one of the conditions is valid then go to PAUSE state directly
	*/
	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category = "RuntimeCondition", meta = (AllowPrivateAccess = "true"))
	UTriggerTaskStateSwitchBase* PauseConditions;

	/*
	* The condition to check when to RESUME this task
	*
	* if one of the conditions is valid then go to RESUME state directly
	*/
	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category = "RuntimeCondition", meta = (AllowPrivateAccess = "true"))
	UTriggerTaskStateSwitchBase* ResumeConditions;

	/*
	* The condition to check when to REPEAT this task
	*
	* if one of the conditions is valid then go to REPEAT state directly
	*/
	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category = "RuntimeCondition", meta = (AllowPrivateAccess = "true"))
	UTriggerTaskStateSwitchBase* RepeatConditions;

#pragma endregion RuntimeCondition

	/*
	* All the data which are used to support the external requirements.
	*/
	UPROPERTY(BlueprintReadOnly, EditAnywhere, AdvancedDisplay, Instanced, Replicated, Category = "UserDatas", meta = (AllowPrivateAccess = "true"))
	TArray<UTriggerTaskExternalDataBase*> UserDatas;

	/*
	* The type for other object which want to replicate this task as its subObject
	* This member should be used by its outer which regard it as its subobject and want to replicate subobjects
	* If this value is not set already then the default replicate style is UReplicate_Yes.
	*/
	UPROPERTY(BlueprintReadOnly, EditAnywhere, AdvancedDisplay, Instanced, Category = "TriggerRuntime", meta = (AllowPrivateAccess = "true"))
	UReplicateTypeBase* ReplicateType;

	/*
	* The difference between ID and TaskHandle is ID is a intrinsic attribute of task, 
	* it can be used offline which means if a task has been instanced it should have the static ID for it and I can use it anywhere to find the correspond task.
	* TaskHandle is the runtime ID which can be different for different runtime environment
	*/

	/*
	* The static identification for trigger task, each trigger task have different ID, This ID can be used off line.
	*/
	UPROPERTY(BlueprintReadOnly, Replicated, SaveGame, meta = (AllowPrivateAccess = true), Category = "TriggerRuntime")
	FGuid ID;

	/*
	* The handle for this task, it should be initialized when this task is crated for the first time.
	* this is the runtime identification for this task, so different environment may crate different task handle.
	* The handle will contain base intrinsic attribute for the task
	*/
	UPROPERTY(Transient, BlueprintReadOnly, Replicated, meta = (AllowPrivateAccess = true), Category = "TriggerRuntime")
	FTriggerTaskHandle TaskHandle;

	/*
	* Who created this task or this task belong to who.
	* This value can be nullptr as this task is deployed by the world or system
	*/
	UPROPERTY(Replicated, SaveGame)
	AActor* InstigatorOwner;

	/*
	* The active count is different form the RepeatCondition. while the repeat condition can be null and the repeat state can be any trigger state
	* This member is just used for calculate how may times this task have been activated
	*/
	UPROPERTY(Transient, SaveGame, ReplicatedUsing = Rep_ActivatedCount /*BlueprintReadOnly, Transient, Category = "TriggerRuntime"*/)
	int ActivatedCount = 0;

	/*
	* The activation information for this task, this container will hold who and where and how to active this task
	* I don't put this in to the trigger task component as the component only store the shared data between different tasks, but each task should its only activation information
	*/
	UPROPERTY(Transient, ReplicatedUsing = Rep_ImmediateActivationInformation)
	FTaskActivationInfoContainer ImmediateActivationInformation;

	//Flag to check weather this task is pending to execute in client
	UPROPERTY(Transient, ReplicatedUsing = Rep_PendingToExecuteInfo)
	FPendingToExecuteInfo PendingToExecuteInfo;

private:

	//Just used to access to the state event more easily, it should never be changed after constructor 
	TArray<FTriggerTaskState*> StateEvent;

	//Check weather this task has been initialized. this is different from the UObject:Initialized;
	bool HasBeenInitialized = false;

	//The template which is used to create this task, if the Member IsTemplate is false then this value should be none
	UTriggerTaskBase* Template = nullptr;

	/*
	* This activation information is just used to store the last information which try to notify this task
	* It maybe not valid for this trigger task to activate.
	*/
	mutable FTaskActivationInfo ImmediateActiveInfo;

	//The index of current active information
	mutable int CurrentActiveInfoIndex = INDEX_NONE;
};

/*
* Easy marco to define the framework of trigger task, so that I do not need to copy these function for each subclass to override
*/
#define TriggerTaskCommonFrameWorkDeclaration() \
	virtual bool CanBeToggled() override;\
	virtual bool Prepare() override;\
	virtual void Active(bool ForceActive = true) override;\
	virtual bool ReceiveNotifyFromOthersComponent(UTriggerTaskComponentBase* OtherComponent, UTriggerTaskBase* SenderTask, UOperationInformationBase* StartOperationInfo) override;\
	virtual void Finished(UOperationInformationBase* FinishOperationInfo = nullptr) override;\
	virtual void PostFinished() override;\
	virtual void TryToSleep(UOperationInformationBase* Operation = nullptr) override;\
	virtual void TryToStop(UOperationInformationBase* Operation = nullptr) override;\
	virtual void Reset(UOperationInformationBase* Operation = nullptr) override;\
	virtual void Tick(float DeltaTime) override;\
	virtual bool CanTick() override;\
	virtual void InitializeTask(UTriggerTaskComponentBase* Owner, bool AsTemplate, bool IsDynamicTask) override;\
	virtual void Pause(UOperationInformationBase* PauseOperation) override;\
	virtual void Resume(UOperationInformationBase* ResumeOperation) override;\
	virtual void Skip(UOperationInformationBase* ResumeOperation) override;

/*
* When you use TriggerTaskCommonFrameWorkDeclaration Marco, you can copy the follow code to the .cpp file
*/

//bool UTT_UIBase::CanBeToggled()
//{
//	return Super::CanBeToggled();
//}
//
//bool UTT_UIBase::Prepare()
//{
//	return Super::Prepare();
//}
//
//void UTT_UIBase::Active(bool ForceActive /* = true */)
//{
//	Super::Active(ForceActive);
//}
//
//bool UTT_UIBase::ReceiveNotifyFromOthersComponent(UTriggerTaskComponentBase* OtherComponent, UTriggerTaskBase* SenderTask, UOperationInformationBase* StartOperationInfo)
//{
//	return Super::ReceiveNotifyFromOthersComponent(OtherComponent, SenderTask, ExternalData);
//}
//
//void UTT_UIBase::Finished(UOperationInformationBase* FinishOperationInfo)
//{
//	Super::Finished(FinishOperationInfo);
//}
//
//void UTT_UIBase::PostFinished()
//{
//	Super::PostFinished();
//}
//
//void UTT_UIBase::TryToSleep(UOperationInformationBase* Operation /*= nullptr*/)
//{
//	Super::TryToSleep(Causer);
//}
//
//void UTT_EffectBase::TryToStop(UOperationInformationBase* Operation /* = nullptr */)
//{
//	Super::TryToStop(Causer);
//}
//void UTT_EffectBase::Skip(UOperationInformationBase* SkipOperationInfo /* = nullptr */)
//{
//	Super::Skip(SkipOperationInfo);
//}
//
//void UTT_UIBase::Reset(UOperationInformationBase* Operation /*= nullptr*/)
//{
//	Super::Reset(Operation);;
//}
//void UTT_UIBase::Pause(UOperationInformationBase* PauseOperationInfo)
//{
//	Super::Reset(Operation);
//}
// 
//void UTT_UIBase::Reset(UOperationInformationBase* ResetOperationInfo)
//{
//	Super::Reset(Operation);
//}
//
//void UTT_UIBase::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//}
//
//bool UTT_UIBase::CanTick()
//{
//	return Super::CanTick();
//}
//
//void UTT_UIBase::InitializeTask(UTriggerTaskComponentBase* Owner, bool AsTemplate, bool IsDynamicTask)
//{
//	Super::InitializeTask(Owner, AsTemplate, IsDynamicTask);
//}
