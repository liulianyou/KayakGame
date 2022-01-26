#include "TriggerTaskBase.h"
#include "TriggerTaskComponentBase.h"
#include "TriggerManager.h"
#include "TriggerTaskManager.h"
#include "OperationInformationManager.h"
#include "EvaluatorOperation.h"
#include "TriggerBlueprintLib.h"
#include "TriggerSkipStyleBase.h"
#include "TriggerResetStyleBase.h"
#include "TriggerTaskStart_TaskInternalExecuteInfoBase.h"
#include "TriggerTaskSleepCommonOperationInfos.h"
#include "TriggerTaskStopCommonOperationInfos.h"
#include "TriggerTaskSkipCommonOperationInfos.h"
#include "TriggerTaskPauseCommonOperationInfos.h"
#include "TriggerTaskResumeCommonOperationInfos.h"
#include "TriggerTaskResetInformationBase.h"
#include "ReplicateTypeBase.h"
#include "NewTriggerBase.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "Engine/NetDriver.h"
#include "Engine/ActorChannel.h"
#include "Engine/BlueprintGeneratedClass.h"
#include "Net/UnrealNetwork.h"
#include "Templates/UnrealTemplate.h"
#include "TriggerTaskExternalDataBase.h"
#include "TriggerTaskStateSwitchBase.h"
#include "TimerManager.h"

#pragma region TaskHandle

FTriggerTaskHandle FTriggerTaskHandle::InvaildHand;

void FTriggerTaskHandle::Invalidate()
{
	Handle = INDEX_NONE;
}

bool FTriggerTaskHandle::IsValid()
{
	return Handle != INDEX_NONE;
}

bool FTriggerTaskHandle::IsTemplate()
{
	return (Handle | TaskIntrinsicAttribute::ETemplate) != 0;
}

bool FTriggerTaskHandle::IsDynamic()
{
	return (Handle | TaskIntrinsicAttribute::EDynamic) != 0;
}

void FTriggerTaskHandle::SetNewHandle(int Value)
{
	Handle = Value;
}

FTriggerTaskHandle FTriggerTaskHandle::GenerateNewHandle( bool isDynamic, bool isTemplate )
{
	static int StaticData = INDEX_NONE;

	int Value = ++StaticData;

	if (isDynamic)
	{
		Value |= TaskIntrinsicAttribute::EDynamic;
	}

	if (isTemplate)
	{
		Value |= TaskIntrinsicAttribute::ETemplate;
	}

	return FTriggerTaskHandle(Value);
}

void FTriggerTaskHandle::operator=(const FTriggerTaskHandle& Other)
{
	Handle = Other.Handle;
}

bool operator==(const FTriggerTaskHandle& Left, const FTriggerTaskHandle& Right)
{
	return Left.Handle == Right.Handle;
}
#pragma endregion TaskHandle


UTriggerTaskBase::UTriggerTaskBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer),
	State(ETriggerTaskState::ETriggerTaskState_Max),
	HasBeenRegisted(false),
	CanEverTick(false),
	ExecuteAutomatically(false),
	TransferType(ETaskTransferType::ETaskTransferType_Notify),
	RunType(ERunType::ERunType_MutiCast),
	InstanceType(ETaskInstanceType::ETaskInstanceType_NoNewInstance),
	ActivatedCount(0)
{
	StateEvent.Empty();

	//The following order should correspond to the ETriggerTaskState enumeration
	StateEvent.Add(&StartEvent);
	StateEvent.Add(&PrepareEvent);
	StateEvent.Add(&ActiveEvent);
	StateEvent.Add(&SkipEvent);
	StateEvent.Add(&TickEvent);
	StateEvent.Add(&ResumeEvent);
	StateEvent.Add(&ResetEvent);
	StateEvent.Add(&FinishedEvent);
	StateEvent.Add(&PauseEvent);
	StateEvent.Add(&StopEvent);
	StateEvent.Add(&PostFinishedEvent);
	StateEvent.Add(&EndEvent);
	StateEvent.Add(&SleepingEvent);

#if WITH_EDITORONLY_DATA
	checkSlow(StateEvent.Num() == int(ETriggerTaskState::ETriggerTaskState_Max));
#endif
}

void UTriggerTaskBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	/*
	* Make the replicator to inspect the replicated properties in the BP task
	*/
	UBlueprintGeneratedClass* BPClass = Cast<UBlueprintGeneratedClass>(GetClass());
	if (BPClass != NULL)
	{
		BPClass->GetLifetimeBlueprintReplicationList(OutLifetimeProps);
	}

	DOREPLIFETIME(UTriggerTaskBase, TaskHandle);
	DOREPLIFETIME(UTriggerTaskBase, InstigatorOwner);
	DOREPLIFETIME(UTriggerTaskBase, TriggerOwner);
	DOREPLIFETIME(UTriggerTaskBase, State);
	DOREPLIFETIME(UTriggerTaskBase, LastState);
	DOREPLIFETIME(UTriggerTaskBase, ImmediateActivationInformation);
	DOREPLIFETIME(UTriggerTaskBase, UserDatas);
	DOREPLIFETIME(UTriggerTaskBase, PendingToExecuteInfo);
	DOREPLIFETIME(UTriggerTaskBase, ID);
	DOREPLIFETIME_CONDITION_NOTIFY(UTriggerTaskBase, ActivatedCount, COND_Custom, REPNOTIFY_OnChanged);
}

void UTriggerTaskBase::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker)
{
	DOREPLIFETIME_ACTIVE_OVERRIDE(UTriggerTaskBase, ActivatedCount, CanReplicateExecuteCount());
}

#pragma region RemovedAtNextUpdate
//This header should be remove at next update
#include "TriggerRepeatConditionBase.h"
#pragma endregion RemovedAtNextUpdate


void UTriggerTaskBase::InitializeTask(UTriggerTaskComponentBase* Owner, bool AsTemplate, bool IsDynamicTask)
{
	if (HasBeenInitialized)
		return;

	 TriggerOwner = Owner; 

	 //Set the state to default value
	 State = ETriggerTaskState::ETriggerTaskState_Max;

	 //Generate new ID for this task if it is valid
	 if (!ID.IsValid())
	 {
		 ID = FGuid::NewGuid();
	 }

	 /*
	 * Generate handle for this task
	 * This task handle should be different for different runtime
	 */
	 if (!TaskHandle.IsValid())
	 {
		 TaskHandle = FTriggerTaskHandle::GenerateNewHandle(IsDynamicTask, AsTemplate);
	 }

	 InitializeUserData();

	 HasBeenInitialized = true;
}

void UTriggerTaskBase::Register()
{
	/*
	* Skip SKELand REINST instance.
	*/
	if (GetName().StartsWith(TEXT("SKEL_")) || GetName().StartsWith(TEXT("REINST_")) || HasAnyFlags(RF_ClassDefaultObject | RF_ArchetypeObject)
		|| GetClass()->GetName().StartsWith(TEXT("SKEL_")) || GetClass()->GetName().StartsWith(TEXT("REINST_")))
	{
		return;
	}

	if (!HasBeenInitialized)
	{
		UE_LOG(LogTrigger, Warning, TEXT("Try to register the task %s while it have not been initialized!"), *GetPathName());
		return;
	}

	//As this task have been registered I don't need to register it again
	if (HasBeenRegisted)
	{
		return;
	}

	if (GetTriggerManager() == nullptr || GetTriggerManager()->GetTriggerTaskManager() == nullptr)
	{
		//Skip the log at cooking stage, as at cooking stage the GetTriggerManager always null
		if (!GIsCookerLoadingPackage)
		{
			UE_LOG(LogTrigger, Error, TEXT("Try to register the task %s while there is valid trigger manager or task manager!"), *GetPathName());
		}
		return;
	}

	GetTriggerManager()->GetTriggerTaskManager()->RegisterTask(this);

	RegisterChildTaskRecursively();

	HasBeenRegisted = true;
}

void UTriggerTaskBase::UnRegister()
{
	/*
	* Skip SKELand REINST instance.
	*/ 
	//if (GetName().StartsWith(TEXT("SKEL_")) || GetName().StartsWith(TEXT("REINST_")) || HasAnyFlags(RF_ClassDefaultObject | RF_ArchetypeObject) 
	//	|| GetClass()->GetName().StartsWith(TEXT("SKEL_")) || GetClass()->GetName().StartsWith(TEXT("REINST_")))
	//{
	//	return;
	//}

	if (!HasBeenRegisted)
	{
		//UE_LOG(LogTrigger, Warning, TEXT("Try to unregister the task %s while it have not been registered!"), *GetPathName());
		return;
	}
	
	EndCondition(StartConditions, FinishConditions, SleepConditions, ResetConditions, SkipConditions, PauseConditions, ResumeConditions, RepeatConditions);

	if (GetTriggerManager() == nullptr || GetTriggerManager()->GetTriggerTaskManager() == nullptr)
	{
		UE_LOG(LogTrigger, Error, TEXT("Try to register the task %s while there is valid trigger manager or task manager!"), *GetPathName());
		return;
	}

	GetTriggerManager()->GetTriggerTaskManager()->UnRegisterTask(this);

	UnRegisterRegisterChildTaskRecursively();

	HasBeenRegisted = false;
}

void UTriggerTaskBase::BeginPlay()
{
	if (!HasAnyFlags(RF_ClassDefaultObject))
	{		
		InitializeCondition(StartConditions, FinishConditions, StopConditions, SleepConditions, ResetConditions, SkipConditions, PauseConditions, ResumeConditions, RepeatConditions);

		OnBeginPlay();

		//First try to start this task
		if (ExecuteAutomatically && UTriggerBlueprintLib::GetOperationInfoManager() != nullptr)
		{
			UTriggerTaskStart_BeginPlay* ToggleInformation = Cast<UTriggerTaskStart_BeginPlay>(UTriggerBlueprintLib::GetOperationInfoManager()->AddNewOperationByClass(this, UTriggerTaskStart_BeginPlay::StaticClass()).Operation);

			if (ToggleInformation)
			{
				ReceiveNotifyFromOthersComponent(GetTriggerOwner(), this, ToggleInformation);
			}
		}
	}
}

void UTriggerTaskBase::Reset(UOperationInformationBase* ResetOperationInfo)
{
	ToggleStateEvent(ETriggerTaskState::ETriggerTaskState_Reset);

	Execute_OnReset(this, ResetOperationInfo);

	//Forward to user data directly
	ResetUserData(ResetOperationInfo);

	UTriggerTaskResetInformationBase* RestInformation = Cast<UTriggerTaskResetInformationBase>(ResetOperationInfo);

	/*
	* When the reset operation info is null means it will forces the task to clear any thing
	*/
	if (RestInformation != nullptr || ResetOperationInfo == nullptr)
	{
		if (ResetOperationInfo == nullptr || EnumHasAnyFlags(RestInformation->ResetType, ETriggerTaskResetType::ETriggerTaskResetType_ClearData))
		{
			ActivatedCount = 0;

			PendingToExecuteInfo.Reset();

			/*
			* Do not empty the ImmediateActivationInformation,
			* As this value should only be emptied at end task, after RESET I maybe want to repeat this task according to confined value,
			* Such as reset at finished state, and repeat at post finished state
			*/
			//ImmediateActivationInformation.EmptyContainer();

			ResetCondition(ResetConditions, StartConditions, StopConditions, PauseConditions, FinishConditions, SkipConditions, ResumeConditions, SleepConditions, RepeatConditions);
		}

		if (ResetOperationInfo == nullptr || EnumHasAnyFlags(RestInformation->ResetType, ETriggerTaskResetType::ETriggerTaskResetType_ResetContent))
		{
			if (ExecuteAutomatically)
			{
				//Prepare();
			}
		}
	}

	EndCondition(ResetConditions);
}

bool UTriggerTaskBase::Prepare()
{
	ToggleStateEvent(ETriggerTaskState::ETriggerTaskState_Prepare);

	Execute_OnPrepare(this);

	return true;
}

void UTriggerTaskBase::Active( bool ForceActive )
{	
	ActivatedCount++;

	ToggleStateEvent(ETriggerTaskState::ETriggerTaskState_Active);

	Execute_OnActive(this);

	UE_LOG(LogTrigger, Log, TEXT("Active Task Name: %s, Identification:%s, TriggerName: %s, TriggerPosition: X=%f,Y=%f, Z=%f"), 
		*GetName(),
		*ID.ToString(),
		GetTriggerOwner() != nullptr ? *GetTriggerOwner()->GetOwner()->GetName() : TEXT(""),
		GetTriggerOwner() != nullptr ? (Cast<AActor>(GetTriggerOwner()->GetOwner()) != nullptr ? Cast<AActor>(GetTriggerOwner()->GetOwner())->GetActorLocation().X : -1.0f) : -1.0f,
		GetTriggerOwner() != nullptr ? (Cast<AActor>(GetTriggerOwner()->GetOwner()) != nullptr ? Cast<AActor>(GetTriggerOwner()->GetOwner())->GetActorLocation().Y : -1.0f) : -1.0f,
		GetTriggerOwner() != nullptr ? (Cast<AActor>(GetTriggerOwner()->GetOwner()) != nullptr ? Cast<AActor>(GetTriggerOwner()->GetOwner())->GetActorLocation().Z : -1.0f) : -1.0f
	);

}

void UTriggerTaskBase::Skip(UOperationInformationBase* SkipOperationInfo)
{	
	ToggleStateEvent(ETriggerTaskState::ETriggerTaskState_Skip);

	Execute_OnSkipped(this, SkipOperationInfo);

	EndCondition(SkipConditions);
}

void UTriggerTaskBase::Finished(UOperationInformationBase* FinishOperationInfo)
{
	/*
	* Do not end the ResetCondition as the task maybe need to reset at sometime to make it can rerun.
	* Do not end the StopCondition as the stop condition can make this task never run again except reset this task
	*/
	EndCondition(StartConditions, /*ResetConditions, StopConditions,*/ SleepConditions, FinishConditions, PauseConditions, ResumeConditions, SkipConditions);

	ToggleStateEvent(ETriggerTaskState::ETriggerTaskState_Finished);

	Execute_OnFinished(this, FinishOperationInfo);

	EnterPostFinishedState();
}

void UTriggerTaskBase::EnterPostFinishedState()
{
	//Cashed the immediate active information
	FTaskActivationInfoContainer LastActiveInfo = ImmediateActivationInformation;

	bool HasValidChildTask = false;

	if (ChildTask.Num() != 0)
	{
		for (auto Task : ChildTask)
		{
			if (Task == nullptr)
			{
				UE_LOG(LogTrigger, Error, TEXT("Please check the data in the trigger!! As there is one none value in the child task"));
				continue;
			}

			HasValidChildTask = true;

			if (GetTriggerOwner() && UTriggerBlueprintLib::GetOperationInfoManager() != nullptr)
			{
				//Make the child directly get the notifications
				UTriggerTaskStart_TaskFinishedToNotifyChild* ToggleInformation = Cast<UTriggerTaskStart_TaskFinishedToNotifyChild>(UTriggerBlueprintLib::GetOperationInfoManager()->AddNewOperationByClass(this, UTriggerTaskStart_TaskFinishedToNotifyChild::StaticClass()).Operation);

				if (ToggleInformation)
				{
					FTaskActivationInfo& ActiveInfo = LastActiveInfo.FindActiveInfoByTriggerTask(this);

					ToggleInformation->CopyFromActiveInfo(ActiveInfo);

					Task->ReceiveNotifyFromOthersComponent(GetTriggerOwner(), this, ToggleInformation);
				}
			}
		}
	}

	//If there is no valid child task then just go to post finished state directly
	if (!HasValidChildTask)
	{
		PostFinished();
	}
}

void UTriggerTaskBase::PostFinished()
{	
	ToggleStateEvent(ETriggerTaskState::ETriggerTaskState_PostFinished);

	Execute_OnPostFinished(this);

	if (ParentTask == nullptr)
	{
		if (GetTriggerOwner() == nullptr)
		{
			UE_LOG(LogTrigger, Error, TEXT("There is no trigger owner for current Trigger Task!!!") );
			return;
		}
		
		bool CanNotifyChild = false;

		//If it is a standalone game then all trigger task can notify the child node
		if (GetTriggerOwner()->GetNetMode() == ENetMode::NM_Standalone)
		{
			CanNotifyChild = true;
		}
		else if (GetTriggerOwner()->GetNetMode() == ENetMode::NM_Client)
		{
			//The task on the client only the one with the run type of ERunType::ERunType_RunOnClient can be executed
			if (GetRunType() == ERunType::ERunType_RunOnClient)
			{
				CanNotifyChild = true;
			}
		}
		else
		{
			//The task on the client only the one with the run type of ERunType::ERunType_RunOnServer can be executed
			if (GetRunType() == ERunType::ERunType_RunOnServer || 
			/*
			* At this point the muti_cast is just like on the server, as the client can not notify the child.
			*/
				GetRunType() == ERunType::ERunType_MutiCast)
			{
				CanNotifyChild = true;
			}
		}

		if (CanNotifyChild && UTriggerBlueprintLib::GetOperationInfoManager() != nullptr)
		{
			UTriggerTaskStart_NotifyChildNode* NotifyChildNodeInfo = Cast<UTriggerTaskStart_NotifyChildNode>(UTriggerBlueprintLib::GetOperationInfoManager()->AddNewOperationByClass(this, UTriggerTaskStart_NotifyChildNode::StaticClass()).Operation);

			if (NotifyChildNodeInfo)
			{
				FTaskActivationInfo& ActiveInfo = ImmediateActivationInformation.FindActiveInfoByTriggerTask(this);
				NotifyChildNodeInfo->CopyFromActiveInfo(ActiveInfo);

				GetTriggerOwner()->TryToNotifyChildNodeToStartRunTask(this, NotifyChildNodeInfo);
			}
			//There is no valid operation info just notify the parent task directly
			else
			{
				ParentTask->NotifyByChildToPostFinish(this);
			}
		}
	}
	else
	{
		ParentTask->NotifyByChildToPostFinish(this);
	}

	////When this task is finished completed then I need to remove it from the trigger task component
	//if (GetTriggerOwner() != nullptr && !IsTemplateTask())
	//{
	//	if (RepeatCondition == nullptr || !RepeatCondition->Evaluator())
	//	{
	//		GetTriggerOwner()->RemoveTask(this);
	//	}
	//}

	EndTask();
}

void UTriggerTaskBase::EndTask()
{
	/*
	* When this task ended I need to make all conditions can evaluate again.
	*/
	MarkConditionEvaluatble(RepeatConditions, FinishConditions, StartConditions, SkipConditions, PauseConditions, ResumeConditions, StopConditions, ResetConditions, StartConditions);

	/*
	* When this task is ended then it should only can listen to the start condition if it has
	* Disable all conditions except the ResetConditions as it can make this task run again
	*/

	//If this task can still be toggled then try to start to evaluator the start conditions
	if (CanBeToggled())
	{
		//Before start to evaluator the start condition, need to reset some conditions
		ResetCondition(StartConditions);

		StartCondition(StartConditions);
	}

	EndCondition(FinishConditions, /*StopConditions, ResetConditions,*/ SleepConditions, SkipConditions, PauseConditions, ResumeConditions, RepeatConditions);

	Execute_OnEnd(this);

	//Store the original info, as the delegate may add new info and I need to remove the old infos
	FTaskActivationInfoContainer CopyContainer(ImmediateActivationInformation);

	ToggleStateEvent(ETriggerTaskState::ETriggerTaskState_End);

	ImmediateActivationInformation.RemoveActiveInfo(CopyContainer);
}

void UTriggerTaskBase::TryToSleep(UOperationInformationBase* SleepOperationInfo /* = nullptr */)
{
	ToggleStateEvent(ETriggerTaskState::ETriggerTaskState_Sleeping);

	Execute_OnSleeping(this, SleepOperationInfo);

	//If this task can still be toggled then start start condition to wait to run again
	if (CanBeToggled())
	{
		StartCondition(StartConditions);
	}
	//When the task is enter sleep state then it only need to check weather it should be stopped or Reset
	StartCondition( StopConditions, ResetConditions);

	EndCondition(PauseConditions, ResumeConditions, SleepConditions, RepeatConditions, SkipConditions);
}


void UTriggerTaskBase::SelectedInEditor( UObject* SelectedObject )
{
	Execute_OnSelectedInEditor(this, SelectedObject);
}


void UTriggerTaskBase::Pause(UOperationInformationBase* PauseOperationInfo)
{
	ToggleStateEvent(ETriggerTaskState::ETriggerTaskState_Pause);

	Execute_OnPause(this, PauseOperationInfo);

	StartConditionEvaluator(ResumeConditions, PauseConditions);
}

void UTriggerTaskBase::Resume(UOperationInformationBase* ResumeOperationInfo)
{
	ToggleStateEvent(ETriggerTaskState::ETriggerTaskState_Resume);

	Execute_OnResume(this, ResumeOperationInfo);

	//Disable Resume 
	StartConditionEvaluator( PauseConditions, ResumeConditions);
}

void UTriggerTaskBase::TryToStop( UOperationInformationBase* StopOperationInfo)
{
	ToggleStateEvent(ETriggerTaskState::ETriggerTaskState_Stop);

	if (!HasAnyFlags(RF_BeginDestroyed) && !IsUnreachable() && GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))
	{
		Execute_OnStop(this, StopOperationInfo);
	}

	//Disable all conditions except the ResetConditions as it can make this task run again
	EndCondition(StartConditions, FinishConditions, StopConditions, SleepConditions, /*ResetConditions,*/ SkipConditions, PauseConditions, ResumeConditions, RepeatConditions);
}

void UTriggerTaskBase::Tick(float DeltaTime)
{
	ToggleStateEvent(ETriggerTaskState::ETriggerTaskState_Tick);

	Execute_OnReceiveTick(this, DeltaTime);
}

bool UTriggerTaskBase::CanBeToggled()
{
	bool Result = true;

	Execute_OnCanBeToggled(this, Result);

	if (TriggerOwner == nullptr) return Result;

	Result = Result && CheckRunTimeType();

	//Check weather this trigger have been toggled more than once
	if (RepeatConditions != nullptr)
	{
		Result = Result && RepeatConditions->IsSwitchOn();
	}
	else
	{
		//This task can not run repeatedly, so if this task have activated then it never activate again
		if (ActivatedCount > 0)
			Result = Result && false;
	}

	//If the task is stopped it should never be toggled
	if(State == ETriggerTaskState::ETriggerTaskState_Stop)
		Result = false;

	return Result;
}

UTriggerTaskComponentBase* UTriggerTaskBase::GetTriggerOwner() const
{
	if(TriggerOwner != nullptr)
		return TriggerOwner;

//#if WITH_EDITOR
//	
//	//As the CDO and AO is always have any outer as its trigger owner
//	if (!HasAnyFlags(RF_ClassDefaultObject | RF_ArchetypeObject))
//	{
//		//The following code should not execute, I add here just make sure no crash.
//		UE_LOG(LogTrigger, Warning, TEXT("Please check the work flow as the target trigger owner have no trigger owner!!!!"));
//	}
//
//#endif

	UTriggerTaskComponentBase* TTC = Cast<UTriggerTaskComponentBase>(GetOuter());

	if (TTC == nullptr)
	{
		UObject* CurrentOuter = GetOuter();

		for ( ; CurrentOuter != nullptr; )
		{
			TTC = Cast<UTriggerTaskComponentBase>(CurrentOuter);

			if(TTC != nullptr)
				break;

			CurrentOuter = CurrentOuter->GetOuter();
		}

		if (TTC && !TTC->GetName().StartsWith(TEXT("TRASH_"), ESearchCase::IgnoreCase) && !TTC->IsRegistered())
		{
			TTC->RegisterTaskComponent();
		}
	}

	return TTC;
}

void UTriggerTaskBase::SetInstigator(AActor* Instigator)
{
	InstigatorOwner = Instigator;
}


void UTriggerTaskBase::ClearChildTask()
{
	for (auto Child : ChildTask)
	{
		if(Child->ParentTask == nullptr)
			continue;
		
		if (!Child->ParentTask->GetChildTasks().Contains(Child))
		{
			Child->ParentTask->AddChildTask(Child);
		}
	}

	ChildTask.Empty();
}

bool UTriggerTaskBase::CanTick()
{
	bool Result = CanEverTick && CheckRunTimeType();

	//If this task has finished we should never tick this task
	if (State == ETriggerTaskState::ETriggerTaskState_Finished ||
		State == ETriggerTaskState::ETriggerTaskState_PostFinished||
		State == ETriggerTaskState::ETriggerTaskState_End ||
		State == ETriggerTaskState::ETriggerTaskState_Sleeping ||
		State == ETriggerTaskState::ETriggerTaskState_Stop ||
		/*
		* Reset state is a immediate state, It just reset one attribute to original value, maybe it will change the word point but it should not determine the work attribute directly.
		* If a task is reseted, not not changed CanEverTick then I thick you just want this task want to tick
		*/
		/*State == ETriggerTaskState::ETriggerTaskState_Reset ||*/
		State == ETriggerTaskState::ETriggerTaskState_Max)
	{
		Result = false;
	}

	//Give the BP access to determine weather this task can tick
	if (GetClass()->IsFunctionImplementedInScript(TEXT("OnCanTick")))
	{
		Result = OnCanTick();
	}

	return Result;
}

void UTriggerTaskBase::AddChildTask(UTriggerTaskBase* LocalChildTask)
{
	if (LocalChildTask == nullptr)
		return;

	if (LocalChildTask == this)
	{
		UE_LOG( LogTrigger, Warning, TEXT("You have make the task self as its child task!! you can get this feature by add repeat condition with infinite loop count and repat style as wait until finished!!"));
	}

	if (LocalChildTask->ParentTask != nullptr)
	{
		LocalChildTask->ParentTask->RemoveChildTask(LocalChildTask);
	}

	LocalChildTask->ParentTask = this;

	ChildTask.Add(LocalChildTask);
}

void UTriggerTaskBase::RemoveChildTask(UTriggerTaskBase* LocalChildTask)
{
	if (LocalChildTask == nullptr)
		return;

	if (LocalChildTask->ParentTask == this)
	{
		LocalChildTask->ParentTask = nullptr;
	}

	if (LocalChildTask->ParentTask != nullptr &&
		!LocalChildTask->ParentTask->GetChildTasks().Contains(LocalChildTask))
	{
		//If the trigger task's parent don't have it as its child then we should add it to child parent to make sure each parent should have the correspond child in the children pool
		LocalChildTask->ParentTask->AddChildTask(LocalChildTask);
	}

	ChildTask.Remove(LocalChildTask);
}

bool UTriggerTaskBase::IsRunning(bool IgnorePauseState)
{
	//Only when this task is in active state means this task is running,
	if (State != ETriggerTaskState::ETriggerTaskState_End 
		&& State != ETriggerTaskState::ETriggerTaskState_Max
		&& State != ETriggerTaskState::ETriggerTaskState_Sleeping
		&& State != ETriggerTaskState::ETriggerTaskState_Stop)
		return true;

	return false;
}

bool UTriggerTaskBase::IsCompletelyFinished() const
{
	if(State == ETriggerTaskState::ETriggerTaskState_End ||
		LastState == ETriggerTaskState::ETriggerTaskState_End)
		return true;
	else
		return false;
}

bool UTriggerTaskBase::IsFinished() const
{
	if (State == ETriggerTaskState::ETriggerTaskState_PostFinished ||
		State == ETriggerTaskState::ETriggerTaskState_Finished)
		return true;
	else
		return false;
}

bool UTriggerTaskBase::IsNetReplicatedTask()
{
	if (ReplicateType == nullptr || ReplicateType->CanReplicate())
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool UTriggerTaskBase::NotifyOtherComponentSuccessed(UTriggerTaskComponentBase* OtherComponent, UTriggerTaskBase* ReceivedTask)
{
	bool Result = true;

	Result = Execute_OnNotifyOtherTriggerSuccessed(this, OtherComponent, ReceivedTask);

	return Result;
}

bool UTriggerTaskBase::ReceiveNotifyFromOthersComponent(UTriggerTaskComponentBase* OtherComponent, UTriggerTaskBase* Task, UOperationInformationBase* StartOperationInfo)
{ 
	ImmediateActiveInfo.OtherTaskComponent = OtherComponent;
	ImmediateActiveInfo.OtherTask = Task;
	ImmediateActiveInfo.ProcessedExternalData = nullptr;
	ImmediateActiveInfo.OwnerTask = this;

	UTriggerTaskStartInformationBase* ExternalData = Cast<UTriggerTaskStartInformationBase>(StartOperationInfo);

	if (ExternalData != nullptr)
	{
		ImmediateActiveInfo.ProcessedExternalData = StartOperationInfo;
	}

	//Each time some one want to active this task I need to store all new activation info.
	int Index = ImmediateActivationInformation.FindOrAddNewActiveInfo(ImmediateActiveInfo);

	FTaskActivationInfo& ActiavtionInfo = ImmediateActivationInformation.FindActiveInfoByIndex(Index);

	{
		TGuardValue<int> ScopedIndexRestore(CurrentActiveInfoIndex, Index);

		if (!CanBeToggled())
		{
			//End the start condition when this task can not be toggled to avoid crash while the start condition will work once it meet its conditions
			EndCondition(StartConditions);

			return false;
		}
	}

	//When this start command is come from the start condition then means the start condition is meted, so do not need to evaluator it again
	if (ExternalData != nullptr && ExternalData->GetNeedToEvaluateStartConditions())
	{
		StartConditionEvaluator(StartConditions);

		if (StartConditions != nullptr && !StartConditions->IsSwitchOn())
		{
			return false;
		}
	}

	EndCondition(StartConditions);

	/*
	* When the task begins I need to reset some conditions so that they can have the default value
	* 
	* Don't reset repeat conditions as it should only can be reseted at reset function
	*/
	ResetCondition(SleepConditions, StopConditions, SkipConditions, PauseConditions, ResumeConditions, FinishConditions/*, RepeatConditions*/);

	/*
	* As the start condition have meet, the other condition should start to inspect except Resume as it should opposite to the  Pause
	*/
	EndConditionEvaluator(ResumeConditions, StopConditions, SleepConditions, ResetConditions, SkipConditions, PauseConditions, FinishConditions, RepeatConditions);

	if (!ImmediateActivationInformation.GetItems().IsValidIndex(Index))
	{
		UE_LOG(LogTrigger, Error, TEXT("Something is wrong at the conditions which clear the ImmediateActivationInformation!!"));

		return false;
	}

	bool Result = true;

	/*
	* When the instance type of this task is not ETaskInstanceType_NoNewInstance then I need to skip this task as the actual running content should be on the target instance
	*/
	if (TryToCreateNewInstance(GetImmediateActivationInformation_Mutable().FindActiveInfoByIndex(Index)))
	{
		//New instance is crated by this template task so this template task should not run any confined content
		Result = false;

		MarkCurrentActivationInfo(false);
	}
	else
	{
		if (
			//This task must be notified by one component, so the other component must not be none.
			OtherComponent == nullptr ||
			//If the notified component is just one component and have not register to any other trigger then this component is invalid.
			OtherComponent->GetOwner() == nullptr)
		{
			return false;
		}

		LastState = State;
		State = ETriggerTaskState::ETriggerTaskState_NotifyByOthers;

		ToggleStateEvent(ETriggerTaskState::ETriggerTaskState_NotifyByOthers);

		CurrentActiveInfoIndex = Index;

		MarkCurrentActivationInfo(true);

		Result = true;

		Execute_OnReceiveNotifyOthers(this, OtherComponent, Task, ExternalData);
	}

	return Result;
}

void UTriggerTaskBase::MarkCurrentActivationInfo(bool Successed)
{
	if(CurrentActiveInfoIndex == INDEX_NONE)
		return;

	FTaskActivationInfo& ActiavtionInfo = ImmediateActivationInformation.FindActiveInfoByIndex(CurrentActiveInfoIndex);

	if (ActiavtionInfo != FTaskActivationInfo::InvaildTaskActiveInfo)
	{
		ActiavtionInfo.ActiveSuccessed = Successed;
	}
}

UTriggerTaskBase* UTriggerTaskBase::FindOrAddNewInstance_Implementation(FTaskActivationInfo& ActivationInfo)
{
	UTriggerTaskBase* Result = nullptr;

	if (!IsTemplateTask())
	{
		return Result;
	}

	TArray<UTriggerTaskBase*> InstancedTasks;

	ActivationInfo.GetAllInstancedTask(InstancedTasks);

	//First try to check weather this task is template and there is no instanced task belong to it
	if (GetTriggerOwner() != nullptr 
		&& InstancedTasks.Num() == 0)
	{
		{
			Result = GetTriggerOwner()->CreateNewTaskByObject(this, false);
			
			ActivationInfo.AddTask(Result);

			//Use this new task directly
			return Result;
		}
	}


	//Second Try to find one task exist in the instanced task which have not been activated or have been finished already
	for (auto Task : InstancedTasks)
	{
		if(Task == nullptr)
			continue;

		//If this task is not running then use it
		if (!Task->IsRunning()
			//When this task have enough space to repeat then use it
			&& (Task->GetRepeatConditions() != nullptr && Task->GetRepeatConditions()->IsSwitchOn())
			)
		{
			Result = Task;
			break;
		}
	}

	return Result;
}

bool UTriggerTaskBase::TryToCreateNewInstance(FTaskActivationInfo& ActivationInfo)
{
	bool Result = false;

	UTriggerTaskBase* PendingNewAddedTask = nullptr;

	switch (InstanceType)
	{
	case ETaskInstanceType::ETaskInstanceType_CreateNewInstance:
	{
		if (IsTemplateTask())
		{
			if (GetTriggerOwner())
			{
				UTriggerTaskBase* LocalTask = ActivationInfo.FindOrAddNewInstance();

				if (LocalTask != nullptr)
				{
					LocalTask->SetTemplate(this);
					TryToExecuteInstanceTask(LocalTask, ActivationInfo);
				}

				PendingNewAddedTask = LocalTask;
				Result = true;
			}
		}
		else
		{
			//If this task is not template and want to create new instance, just use it self
			PendingNewAddedTask = this;
		}
		break;
	}
	case ETaskInstanceType::ETaskInstanceType_CDO:
	{
		if (IsTemplateTask())
		{
			UTriggerTaskBase* LoalTask = Cast<UTriggerTaskBase>(GetClass()->GetDefaultObject());
			//TaskActiveInfo.RepliactedRunningTask.Add(LoalTask);
			LoalTask->ReceiveNotifyFromOthersComponent(ActivationInfo.OtherTaskComponent, ActivationInfo.OtherTask, ActivationInfo.ProcessedExternalData);
			PendingNewAddedTask = LoalTask;
			Result = true;
		}
		else
		{
			UE_LOG(LogTrigger, Log, TEXT("Try to use CDO form none templete task is forbidden, Please make sure Task is template."));
		}
		break;
	}
	case ETaskInstanceType::ETaskInstanceType_NoNewInstance:
	default:
	{
		ActivationInfo.OwnerTask = this;
		PendingNewAddedTask = nullptr;
		//Default I will use this task directly
		break;
	}
	}

	if (GetTriggerOwner() == nullptr)
		return Result;

	GetTriggerOwner()->AddTask(PendingNewAddedTask);
	
	return Result;
}

void UTriggerTaskBase::TryToExecuteInstanceTask(UTriggerTaskBase* InstanceTask, FTaskActivationInfo& ActivationInfo)
{
	if (InstanceTask == nullptr || GetTriggerOwner() == nullptr)
		return;

	if (GetTriggerOwner()->GetNetMode() == ENetMode::NM_Standalone || 
		GetTriggerOwner()->GetNetMode() == ENetMode::NM_Client ||
		!InstanceTask->IsNetReplicatedTask())
	{
		ActivationInfo.OtherTaskComponent->TransfereTask(GetTriggerOwner(), ActivationInfo.OtherTask, ActivationInfo.ProcessedExternalData, InstanceTask);
	}
	else
	{
		if(InstanceTask->RunType == ERunType::ERunType_RunOnServer)
		{
			ActivationInfo.OtherTaskComponent->TransfereTask(GetTriggerOwner(), ActivationInfo.OtherTask, ActivationInfo.ProcessedExternalData, InstanceTask);
		}
		else
		{
			PendingToExecuteInfo.ActivationHandle = ActivationInfo.Handle;
		}
	}
}

void UTriggerTaskBase::TryToNotifyTemplateStateChanged(ETriggerTaskState CurrentState)
{
	//If this task is template task then just return
	if (IsTemplateTask())
		return;

	//This is a singleton task and created by runtime
	if (Template == nullptr)
		return;

	Template->ReceiveInstanceTaskStateChanged(this, CurrentState);
}

void UTriggerTaskBase::ReceiveInstanceTaskStateChanged(UTriggerTaskBase* InstanceTask, ETriggerTaskState LocalState)
{
	if (!IsTemplateTask())
	{
		UE_LOG(LogTrigger, Log, TEXT("only template task can receive notification form instance task"));
		return;
	}

	if (StateEvent[int(LocalState)]->IsBound())
	{
		StateEvent[int(LocalState)]->Broadcast(InstanceTask);
	}
}

void UTriggerTaskBase::Muticast_ReceiveNotifyFromOthersComponent_Implementation(UTriggerTaskComponentBase* OtherComponent, UTriggerTaskBase* SenderTask, UOperationInformationBase* StartOperationInfo)
{
	if(GetTriggerOwner() == nullptr)
		return ;

	//Only the remote client can run this task
	if (GetTriggerOwner()->GetOwnerRole() == ENetRole::ROLE_Authority)
	{
		return;
	}

	ReceiveNotifyFromOthersComponent(OtherComponent, SenderTask, StartOperationInfo);
}

bool UTriggerTaskBase::Muticast_ReceiveNotifyFromOthersComponent_Validate(UTriggerTaskComponentBase* OtherComponent, UTriggerTaskBase* SenderTask, UOperationInformationBase* StartOperationInfo)
{
	return true;
}

void UTriggerTaskBase::BeginDestroy()
{
	//TryToStop();

	for (int i = 0; i < StateEvent.Num(); i++)
	{
		if (StateEvent[i]->IsBound())
		{
			StateEvent[i]->Clear();
		}
	}

	if (ParentTask != nullptr)
	{
		ParentTask->RemoveChildTask(this);
	}

	//When this task is destroyed all condition should be ended
	EndCondition(StartConditions, FinishConditions, StopConditions, SleepConditions, ResetConditions, SkipConditions, PauseConditions, ResumeConditions, RepeatConditions);

	UnRegister();

	Super::BeginDestroy();
}

#if WITH_EDITOR

void UTriggerTaskBase::PreEditChange(FProperty* PropertyAboutToChange)
{
	Super::PreEditChange(PropertyAboutToChange);
}

void UTriggerTaskBase::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (FProperty* PropertyThatChanged = PropertyChangedEvent.Property)
	{
		const FName PropertyName = PropertyThatChanged->GetFName();

		if (PropertyName == GET_MEMBER_NAME_CHECKED(UTriggerTaskBase, ChildTask))
		{
			for (int i = 0; i < ChildTask.Num(); i++)
			{
				if (ChildTask[i] != nullptr)
				{
					//This is done in the editor so I assume all of the tasks is template
					ChildTask[i]->InitializeTask(GetTriggerOwner(), true, false);

					ChildTask[i]->Register();

					AddChildTask(ChildTask[i]);
				}
			}
		}

		//Once new data is assigned to this task I need initialize it
		if (PropertyName == GET_MEMBER_NAME_CHECKED(UTriggerTaskBase, UserDatas))
		{
			for (int i = 0; i < UserDatas.Num(); i++)
			{
				if (UserDatas[i] != nullptr)
				{
					UserDatas[i]->Initialize(this);
				}
			}
		}
	}
} 
#endif

void UTriggerTaskBase::PostInitProperties()
{
	Super::PostInitProperties();
}

void UTriggerTaskBase::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);
}

UWorld* UTriggerTaskBase::GetWorld() const
{
	if (HasAnyFlags(RF_ClassDefaultObject))
	{
		//When we open the defaulat object of this class then just return null to fool the UObject::ImplementsGetWorld by make the bGetWorldOverridden to be
		return nullptr;
	}
	else if (GetTriggerOwner() != nullptr)
	{
		return GetTriggerOwner()->GetWorld();
	}
	else
	{
		return GetOuter()->GetWorld();
	}

	return nullptr;
}

int32 UTriggerTaskBase::GetFunctionCallspace(UFunction* Function, FFrame* Stack)
{

	if (GetTriggerOwner() == nullptr)
	{
		return FunctionCallspace::Local;
	}

	AActor* MyOwner = GetTriggerOwner()->GetOwner();
	return (MyOwner ? MyOwner->GetFunctionCallspace(Function, Stack) : FunctionCallspace::Local);
}

bool UTriggerTaskBase::CallRemoteFunction(UFunction* Function, void* Parms, struct FOutParmRec* OutParms, FFrame* Stack)
{
	bool bProcessed = false;

	if (AActor* MyOwner = GetTriggerOwner()->GetOwner())
	{
		FWorldContext* const Context = GEngine->GetWorldContextFromWorld(GetWorld());
		if (Context != nullptr)
		{
			for (FNamedNetDriver& Driver : Context->ActiveNetDrivers)
			{
				if (Driver.NetDriver != nullptr && Driver.NetDriver->ShouldReplicateFunction(MyOwner, Function))
				{
					Driver.NetDriver->ProcessRemoteFunction(MyOwner, Function, Parms, OutParms, Stack, this);
					bProcessed = true;
				}
			}
		}
	}

	return bProcessed;
}

void UTriggerTaskBase::NotifyByChildToPostFinish(UTriggerTaskBase* Child)
{
	bool Result = true;

	for (auto Task : ChildTask)
	{
		if (Task->GetCurrentTriggerTaskState() != ETriggerTaskState::ETriggerTaskState_PostFinished)
		{
			Result = false;
			break;
		}
	}

	if (Result)
	{
		PostFinished();
	}
}

void UTriggerTaskBase::RegisterChildTaskRecursively()
{
	for (auto LocalChildTask : GetChildTasks())
	{
		if (LocalChildTask == nullptr) continue;

		/*
		* As the parent task have been registered, this task should be skipped.
		* If the the parent task have itself as its child task, this means this task need to be restart repeatedly.
		* You should change the parent task have the repeat condition which with the infinite loop count and set repeat style as wait utile finished
		*/
		if (LocalChildTask == this) continue;

		LocalChildTask->InitializeTask(GetTriggerOwner(), IsTemplateTask(), IsDynamicTask());

		LocalChildTask->Register();

		LocalChildTask->RegisterChildTaskRecursively();
	}
}

void UTriggerTaskBase::UnRegisterRegisterChildTaskRecursively()
{
	for (auto LocalChildTask : GetChildTasks())
	{
		if (LocalChildTask == nullptr) continue;

		/*
		* As the parent task have been unregistered, this task should be skipped.
		* If the the parent task have itself as its child task, this means this task need to be restart repeatedly.
		* You should change the parent task have the repeat condition which with the infinite loop count and set repeat style as wait utile finished
		*/
		if (LocalChildTask == this) continue;

		LocalChildTask->UnRegister();

		LocalChildTask->UnRegisterRegisterChildTaskRecursively();
	}
}

void UTriggerTaskBase::ToggleStateEvent(ETriggerTaskState CurrentState)
{
	LastState = State;
	State = CurrentState;

	//The max means this task will be reseted
	if (CurrentState == ETriggerTaskState::ETriggerTaskState_Max)
		return;

	StateEvent[int(CurrentState)]->Broadcast(this);

	//Notify other scope code this task
	FTriggerDelegate::TriggerTaskStateNativeEvent.Broadcast(this);

	TryToNotifyTemplateStateChanged(CurrentState);
}

int UTriggerTaskBase::GetCurrentExecuteCount() const
{

	if (GetRepeatConditions() == nullptr)
	{
		return ActivatedCount;
	}
	else
	{
		TArray<UEvaluatorCondition*> Conditions;
		GetRepeatConditions()->GetAllEvaluatorConditions(Conditions);

		for (auto Condition : Conditions)
		{
			if (Condition == nullptr)
				continue;

			UTriggerTaskRepeatCondtionBase* RC = Cast<UTriggerTaskRepeatCondtionBase>(Condition);

			if (RC != nullptr)
			{
				return RC->GetRepeatCount();
			}
		}
	}

	return 0;
}

UTriggerManager* UTriggerTaskBase::GetTriggerManager() const
{
	if (GetTriggerOwner() != nullptr)
		return GetTriggerOwner()->GetTriggerManager();

	return UTriggerBlueprintLib::GetTriggerManager();;
}

UTriggerTaskManager* UTriggerTaskBase::GetTriggerTaskManager() const
{
	UTriggerManager* TriggerManager = GetTriggerManager();

	if (TriggerManager != nullptr)
		return TriggerManager->GetTriggerTaskManager();

	return nullptr;
}

AActor* UTriggerTaskBase::TryToGetOwnerActor()
{
	if (GetTriggerOwner() != nullptr && Cast<AActor>(GetTriggerOwner()->GetOwner()) != nullptr)
	{
		return Cast<AActor>(GetTriggerOwner()->GetOwner());
	}

	UObject* CurrentOuter = GetOuter();
	AActor* Actor = nullptr;
	for (; CurrentOuter != nullptr; )
	{
		Actor = Cast<AActor>(CurrentOuter);
		if (Actor == nullptr)
		{
			CurrentOuter = CurrentOuter->GetOuter();	
		}
		else
		{
			return Actor;
		}
	}

	return Actor;
}

void UTriggerTaskBase::AddStateEventListener(ETriggerTaskState StateType, FScriptDelegate NewDelegate)
{
	if(!NewDelegate.IsBound())
		return;

	StateEvent[int(StateType)]->Add(NewDelegate);
}

void UTriggerTaskBase::RemoveStateEventListener(ETriggerTaskState StateType, FScriptDelegate NewDelegate)
{
	if (NewDelegate.IsBound() && StateEvent[int(StateType)]->Contains(NewDelegate))
	{
		StateEvent[int(StateType)]->Remove(NewDelegate);
	}
}

bool UTriggerTaskBase::ShouldReplicateActivationInfo(const FTaskActivationInfo& Info) const
{
	return Info.ActiveSuccessed;
}

bool UTriggerTaskBase::ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags)
{
	bool WroteSomething = false;

	for (auto UseData : UserDatas)
	{
		if (UseData == nullptr || !UseData->IsValidLowLevel())
			continue;

		if (UseData->IsSupportedForNetworking())
		{
			UseData->ReplicateSubobjects(Channel, Bunch, RepFlags);

			WroteSomething |= Channel->ReplicateSubobject(const_cast<UTriggerTaskExternalDataBase*>(UseData), *Bunch, *RepFlags);
		}
	}

	return WroteSomething;
}

void UTriggerTaskBase::GetAllInstacedTask(TArray<UTriggerTaskBase*>& InstanceTasks)
{
	InstanceTasks.Empty();

	if (IsTemplateTask())
	{
		InstanceTasks.Add(this);
	}
	else
	{
		for (auto IT = GetImmediateActivationInformation().CreateConstIterator(false); IT; ++IT)
		{
			TArray<UTriggerTaskBase*> LocalInstanceTasks;
			(*IT).GetAllInstancedTask(LocalInstanceTasks);
			InstanceTasks.Append(InstanceTasks);
		}
	}
}

bool UTriggerTaskBase::CanReplicateExecuteCount_Implementation()
{
	return true;
}

void UTriggerTaskBase::Rep_State()
{
	ToggleStateEvent(State);
}

void UTriggerTaskBase::Rep_ActivatedCount()
{
	if (ActivatedCount > 0)
	{
		if (GetSkipConditions() != nullptr)
		{
			TArray<UTriggerStyleBase*> Styles;
			GetSkipConditions()->GetPassedStyles(Styles);

			for (auto Style : Styles)
			{
				//Skip(Cast<UTriggerSkipStyleBase>(Style));
			}
		}
	}
}

void UTriggerTaskBase::Rep_ImmediateActivationInformation()
{
	PendingToExecuteTask();
}

void UTriggerTaskBase::Rep_PendingToExecuteInfo()
{
	PendingToExecuteTask();
}

void UTriggerTaskBase::PendingToExecuteTask()
{
	if (PendingToExecuteInfo.ActivationHandle.IsValid())
	{
		FTaskActivationInfo& ActivationInfo = GetImmediateActivationInformation_Mutable().FindActiveInfoByActivationInfoHandle(PendingToExecuteInfo.ActivationHandle);

		if (ActivationInfo.IsValid() && ActivationInfo.OtherTaskComponent != nullptr)
		{
			ActivationInfo.OtherTaskComponent->TransfereTask(GetTriggerOwner(), ActivationInfo.OtherTask, ActivationInfo.ProcessedExternalData, ActivationInfo.OwnerTask);
		}

		PendingToExecuteInfo.ActivationHandle.Invalidate();
	}
}

#pragma region ConditionSwitchEvent
void UTriggerTaskBase::SwitchEventStartConditions()
{
	if (StartConditions == nullptr)
		return;

	if (StartConditions->IsSwitchOn() && UTriggerBlueprintLib::GetOperationInfoManager() != nullptr)
	{
		UTriggerTaskStart_StartTaskByStartConditions* ToggleInformation = Cast<UTriggerTaskStart_StartTaskByStartConditions>(UTriggerBlueprintLib::GetOperationInfoManager()->AddNewOperationByClass(this, UTriggerTaskStart_StartTaskByStartConditions::StaticClass()).Operation);

		if (ToggleInformation)
		{
			//Forbid the infinite loop when the condition is always true
			ToggleInformation->SetNeedToEvaluateStartConditions(false);

			ReceiveNotifyFromOthersComponent(GetTriggerOwner(), this, ToggleInformation);
		}
	}
}

void UTriggerTaskBase::SwitchEventFinishConditions()
{
	if (FinishConditions == nullptr)
		return;

	if (FinishConditions->IsSwitchOn())
	{
		Finished();
	}
}

void UTriggerTaskBase::SwitchEventStopConditions()
{
	if (StopConditions == nullptr)
		return;

	if (StopConditions->IsSwitchOn() && UTriggerBlueprintLib::GetOperationInfoManager())
	{
		UTriggerTaskStop_StopCondition* StopOperation  =  Cast<UTriggerTaskStop_StopCondition>(UOperationInformationBase::CreateNewOperationInfo(UTriggerTaskStop_StopCondition::StaticClass(), this, this, this, nullptr ));

		TryToStop(StopOperation);
	}
}

void UTriggerTaskBase::SwitchEventSleepConditions()
{
	if(SleepConditions == nullptr)
		return;

	if (SleepConditions->IsSwitchOn() && UTriggerBlueprintLib::GetOperationInfoManager())
	{
		UTriggerTaskSleep_SleepConditions* SleepOperation = Cast<UTriggerTaskSleep_SleepConditions>(UOperationInformationBase::CreateNewOperationInfo(UTriggerTaskSleep_SleepConditions::StaticClass(), this, this, this, nullptr));

		TryToSleep(SleepOperation);
	}
}

void UTriggerTaskBase::SwitchEventResetConditions()
{
	if(ResetConditions == nullptr)
		return;

	TArray<UTriggerStyleBase*> Styles;
	GetResetConditions()->GetPassedStyles(Styles);
	//When there is no passed styles in the reset condition then just reset this trigger task forcedly
	if (Styles.Num() == 0)
	{
		Reset(nullptr);
	}

	EndCondition(ResetConditions);
}

void UTriggerTaskBase::SwitchEventSkipConditions()
{
	if (SkipConditions == nullptr)
		return;

	if (SkipConditions->IsSwitchOn())
	{
		TArray<UTriggerStyleBase*> Styles;
		SkipConditions->GetPassedStyles(Styles);

		if (Styles.Num() == 0)
		{
			Skip();
		}
		else 
		{
			UTriggerTaskSkip_SkipConditions* SkipOperations = UTriggerTaskSkip_SkipConditions::SkipConditions(this, nullptr, Styles[0]);

			Skip(SkipOperations);
		}
	}
}

void UTriggerTaskBase::SwitchEventPauseConditions()
{
	if (PauseConditions == nullptr)
		return;

	if (PauseConditions->IsSwitchOn() && UTriggerBlueprintLib::GetOperationInfoManager())
	{
		UTriggerTaskPause_PauseConditions* PauseOperation =  Cast<UTriggerTaskPause_PauseConditions>(UOperationInformationBase::CreateNewOperationInfo(UTriggerTaskPause_PauseConditions::StaticClass(), this, this, this, nullptr));

		Pause(PauseOperation);
	}
}

void UTriggerTaskBase::SwitchEventResumeConditions()
{
	if (ResumeConditions == nullptr)
		return;

	if (ResumeConditions->IsSwitchOn() && UTriggerBlueprintLib::GetOperationInfoManager())
	{
		UTriggerTaskResume_ResumeConditions* ResumeOperation = Cast<UTriggerTaskResume_ResumeConditions>(UOperationInformationBase::CreateNewOperationInfo(UTriggerTaskResume_ResumeConditions::StaticClass(), this, this, this, nullptr));

		Resume(ResumeOperation);
	}
}

void UTriggerTaskBase::SwitchEventRepeatConditions()
{
	if (GetRepeatConditions() == nullptr)
		return;

	/*
	* Do nothing except to end the repeat condition.
	* As if theres is no style the repeat condition is only used to check weather this task can be toggled more then once.
	* If there are some styles bind with the repeat condition then the styles will be processed at the conditions
	*/
	EndCondition(GetRepeatConditions());
}

#pragma endregion ConditionSwitchEvent

void UTriggerTaskBase::InitializeCondition(UTriggerTaskStateSwitchBase* Condition)
{
	if(Condition == nullptr)
		return;

	Condition->Initialize(this);



	/*
	* Try to get the actual conditions and register the switch event to it so that this task can switch state automatically
	*/
#define CheckToAddStateSwitchFunction( ComparedCondtion )\
	if (ComparedCondtion == Condition)\
	{\
		if(!Condition->GetStateSwitchEvent().IsAlreadyBound(this, &UTriggerTaskBase::SwitchEvent##ComparedCondtion))\
			Condition->GetStateSwitchEvent().AddDynamic(this, &UTriggerTaskBase::SwitchEvent##ComparedCondtion);\
	}\

	CheckToAddStateSwitchFunction(StartConditions);
	CheckToAddStateSwitchFunction(FinishConditions);
	CheckToAddStateSwitchFunction(StopConditions);
	CheckToAddStateSwitchFunction(SleepConditions);
	CheckToAddStateSwitchFunction(ResetConditions);
	CheckToAddStateSwitchFunction(SkipConditions);
	CheckToAddStateSwitchFunction(PauseConditions);
	CheckToAddStateSwitchFunction(ResumeConditions);
	CheckToAddStateSwitchFunction(RepeatConditions);

	MarkConditionEvaluatble(Condition);

}

void  UTriggerTaskBase::StartCondition(UTriggerTaskStateSwitchBase* Condition)
{
	if (Condition == nullptr)
		return;

	Condition->StartEvaluator();
}

void UTriggerTaskBase::EndCondition(UTriggerTaskStateSwitchBase* Condition)
{
	if (Condition == nullptr)
		return;

	Condition->EndEvaluator();
}

void UTriggerTaskBase::ResetCondition(UTriggerTaskStateSwitchBase* Condition)
{
	if (Condition == nullptr)
		return;

	Condition->Reset();
}

void UTriggerTaskBase::MarkConditionEvaluatble(UTriggerTaskStateSwitchBase* Condition)
{
	if (Condition == nullptr)
		return;

	Condition->MarkEvaluateable();
}

#define ConditionSetImplementation( Condition )\
void UTriggerTaskBase::Set##Condition(UTriggerTaskStateSwitchBase* Switch, bool CreateNewInstance /*= false*/)\
{\
	UTriggerTaskStateSwitchBase* TargetSwitch = Switch;\
	if (CreateNewInstance)\
	{\
		TargetSwitch = NewObject<UTriggerTaskStateSwitchBase>(this, UTriggerTaskStateSwitchBase::StaticClass(), NAME_None, RF_NoFlags, Switch);\
	}\
	Condition = TargetSwitch;\
}

ConditionSetImplementation(StartConditions)
ConditionSetImplementation(FinishConditions)
ConditionSetImplementation(StopConditions)
ConditionSetImplementation(SleepConditions)
ConditionSetImplementation(ResetConditions)
ConditionSetImplementation(SkipConditions)
ConditionSetImplementation(PauseConditions)
ConditionSetImplementation(ResumeConditions)
ConditionSetImplementation(RepeatConditions)

bool UTriggerTaskBase::CheckRunTimeType()
{
	if(GetTriggerOwner() == nullptr)
		return true;

	bool Result = false;

	//If this is a standalone game we should always run this task
	if (GetTriggerOwner()->GetNetMode() == ENetMode::NM_Standalone)
	{
		Result = true;
	}
	//When this machine is the client
	else if(GetTriggerOwner()->GetNetMode() == ENetMode::NM_Client)
	{
		//Only when the component and task can be active on the client
		if (GetTriggerOwner()->RunType == ERunType::ERunType_RunOnClient || GetTriggerOwner()->RunType == ERunType::ERunType_MutiCast)
		{
			if (RunType == ERunType::ERunType_RunOnClient || RunType == ERunType::ERunType_MutiCast)
			{
				Result = true;
			}
		}
	}
	else
	{
		if(GetTriggerOwner()->RunType == ERunType::ERunType_RunOnServer || GetTriggerOwner()->RunType == ERunType::ERunType_MutiCast)
		{
			if (RunType == ERunType::ERunType_RunOnServer || RunType == ERunType::ERunType_MutiCast)
			{
				Result = true;
			}
		}
	}

	return Result;
}

bool UTriggerTaskBase::HasTargetUserDate(TSubclassOf<UTriggerTaskExternalDataBase> ExternalDataClass)
{
	if(ExternalDataClass.Get() == nullptr)
		return false;

	bool Result = false;

	for (auto UserData : GetConstUserDatas())
	{
		if(UserData == nullptr)
			continue;

		if (UserData->IsA(ExternalDataClass))
		{
			Result = true;
			break;
		}
	}

	return Result;
}

UTriggerTaskExternalDataBase* UTriggerTaskBase::GetTargetUserData(TSubclassOf<UTriggerTaskExternalDataBase> ExternalDataClass, int Index)
{
	int LocalMatchedIndex = INDEX_NONE;

	for (int i = 0; i < GetConstUserDatas().Num(); i++)
	{
		if(GetConstUserDatas()[i] == nullptr || !GetConstUserDatas()[i]->IsValidLowLevel())
			continue;

		if (GetConstUserDatas()[i]->IsA(ExternalDataClass))
		{
			LocalMatchedIndex++;

			if (LocalMatchedIndex == Index)
			{
				return GetConstUserDatas()[i];
			}
		}
	}

	return nullptr;
}

UTriggerTaskExternalDataBase* UTriggerTaskBase::AddNewUserDataByClass(TSubclassOf<UTriggerTaskExternalDataBase> ExternalDataClass)
{
	if(ExternalDataClass == nullptr)
		return nullptr;

	UTriggerTaskExternalDataBase* NewData = NewObject<UTriggerTaskExternalDataBase>(this,  ExternalDataClass);

	if (NewData)
	{
		GetUserDatas().Add(NewData);

		NewData->Initialize(this);

		return NewData;
	}

	return nullptr;
}

UTriggerTaskExternalDataBase* UTriggerTaskBase::AddNewUserDataByInstance(UTriggerTaskExternalDataBase* TemplateData, bool CreateNew)
{
	if(TemplateData == nullptr)
		return nullptr;

	UTriggerTaskExternalDataBase* NewData = TemplateData;

	if (CreateNew)
	{
		NewData = NewObject<UTriggerTaskExternalDataBase>(this, TemplateData->GetClass(), NAME_None, RF_NoFlags, TemplateData);
	}

	if (NewData)
	{
		GetUserDatas().Add(NewData);

		NewData->Initialize(this);

		return NewData;
	}

	return nullptr;
}

void UTriggerTaskBase::RemoveUserDataByClass(TSubclassOf<UTriggerTaskExternalDataBase> ExternalDataClass)
{
	if(ExternalDataClass == nullptr)
		return;
	
	for (int i = 0; i < GetConstUserDatas().Num(); i++)
	{
		if (GetConstUserDatas()[i] == nullptr || 
			!GetConstUserDatas()[i]->IsValidLowLevel() ||
			GetConstUserDatas()[i]->IsA(ExternalDataClass))
		{
			GetUserDatas().RemoveAt(i--);
		}
	}
}

void UTriggerTaskBase::RemoveUserDataByInstance(UTriggerTaskExternalDataBase* TemplateData)
{
	GetUserDatas().Remove(TemplateData);
}

void UTriggerTaskBase::InitializeUserData()
{
	for (int i = 0; i < GetUserDatas().Num(); i++)
	{
		if(GetUserDatas()[i] == nullptr || !GetUserDatas()[i]->IsValidLowLevel())
			continue;

		GetUserDatas()[i]->Initialize(this);
	}
}

void UTriggerTaskBase::FinializeUserData()
{
	for (int i = 0; i < GetUserDatas().Num(); i++)
	{
		if (GetUserDatas()[i] == nullptr || !GetUserDatas()[i]->IsValidLowLevel())
			continue;

		GetUserDatas()[i]->Finialize();
	}
}

void UTriggerTaskBase::ResetUserData(UOperationInformationBase* OperationInfo /*= nullptr*/)
{
	for (int i = 0; i < GetUserDatas().Num(); i++)
	{
		if (GetUserDatas()[i] == nullptr || !GetUserDatas()[i]->IsValidLowLevel())
			continue;

		GetUserDatas()[i]->Reset(OperationInfo);
	}
}

void FPendingToExecuteInfo::Reset()
{
	ActivationHandle.Invalidate();
}

void UTriggerTaskBase::DebugBreak()
{
	UTriggerBlueprintLib::DebugBreak();
}