#include "TriggerTaskComponentBase.h"

#include "TriggerManager.h"
#include "TriggerTaskManager.h"
#include "OperationInformationManager.h"
#include "NewTriggerBase.h"
#include "TriggerTaskBase.h"
#include "TriggerBlueprintLib.h"
#include "TriggerNetPlayerSupportComponent.h"
#include "TriggerTaskStart_StartTaskByTaskComponent.h"
#include "OperationInformationManager.h"
#include "GameFramework/PlayerController.h"
#include "TriggerTaskStartInformationBase.h"
#include "ReplicateTypeBase.h"
#include "TriggerCategory.h"
#include "TriggerEventChainBase.h"
#include "GameplayTags.h"
#include "TriggerConfig.h"
#include "TriggerTaskRunHelp.h"

#include "Serialization/ObjectWriter.h"
#include "Serialization/ObjectReader.h"
#include "Misc/EnumClassFlags.h"
#include "Engine/ActorChannel.h"
#include "Net/UnrealNetwork.h"
#include "Engine/Engine.h"


UTriggerTaskComponentBase::UTriggerTaskComponentBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer),
	RunType(ERunType::ERunType_RunOnServer)
{
	if (HasAnyFlags(RF_ClassDefaultObject))
	{
		PrimaryComponentTick.bCanEverTick = false;
		//Set this component default to be replicated
		SetIsReplicatedByDefault(false);
	}
	else
	{
		PrimaryComponentTick.bCanEverTick = true;
		//Set this component default to be replicated
		SetIsReplicatedByDefault(true);
	}
}

bool UTriggerTaskComponentBase::IsMatchedForCurrentRunTimeContent_Implementation() const
{
	for (auto Category : GetConstCategories())
	{
		if (Category == nullptr && !Category->IsValidCategory())
			continue;

		if (Category->IsMathcedForCurrrentRuntimeContent())
		{
			return true;
		}
	}
	//Default is false
	return false;
}

void UTriggerTaskComponentBase::GetChildTaskInternal( TArray<UTriggerTaskBase*>& OuterTasks, UTriggerTaskBase* RootTask) const
{
	if(RootTask == nullptr)
		return;

	TArray<UTriggerTaskBase*> Tasks = RootTask->GetChildTasks();

	OuterTasks.Append(Tasks);

	for (int i = 0; i < Tasks.Num(); i++)
	{
		GetChildTaskInternal(OuterTasks, Tasks[i]);
	}

}

void UTriggerTaskComponentBase::GetAllTriggerTasks(TArray<UTriggerTaskBase*>& OutTasks, bool IncludeChildTask) const
{
	OutTasks.Empty();

	for (auto Task: TriggerTasks)
	{
		OutTasks.AddUnique(Task);

		if (IncludeChildTask)
		{
			GetChildTaskInternal(OutTasks, Task);
		}
	}

	for (auto Task : ReplicatedTasks)
	{
		OutTasks.AddUnique(Task);

		if (IncludeChildTask)
		{
			GetChildTaskInternal(OutTasks, Task);
		}
	}

	for (auto Task : UnReplicatedTasks)
	{
		OutTasks.AddUnique(Task);

		if (IncludeChildTask)
		{
			GetChildTaskInternal(OutTasks, Task);
		}
	}
}

void UTriggerTaskComponentBase::GetCanActivatedTasks(TArray<UTriggerTaskBase*>& OutTasks)
{
	OutTasks.Empty();

	//All template task should be can activated tasks
	OutTasks.Append(TriggerTasks);

	auto FilterTask = [&OutTasks](TArray<UTriggerTaskBase*>& Tasks) {
		for (auto Task : Tasks)
		{
			if (Task->IsTemplateTask())
			{
				OutTasks.AddUnique(Task);
			}
			//If the instance task have no template task then this task is a dynamic instanced task which is added at runtime by others manually
			else if (Task->GetTemplate() == nullptr)
			{
				OutTasks.AddUnique(Task);
			}
		}
	};

	FilterTask(ReplicatedTasks);
	FilterTask(UnReplicatedTasks);
}

void UTriggerTaskComponentBase::GetCanRunningTasks(TArray<UTriggerTaskBase*>& OutTasks)
{
	OutTasks.Empty();

	OutTasks.Append(ReplicatedTasks);
	OutTasks.Append(UnReplicatedTasks);
	for (auto Task : TriggerTasks)
	{
		if (Task->InstanceType == ETaskInstanceType::ETaskInstanceType_NoNewInstance)
		{
			OutTasks.AddUnique(Task);
		}
	}
}

void UTriggerTaskComponentBase::UpdateRuntimeContent( UTriggerTaskBase* SenderTask, UTriggerTaskComponentBase* TargetTaskComponent, UTriggerTaskBase* TargetTask, UOperationInformationBase* StartOperationInfo)
{
	if (TargetTaskComponent == nullptr)
	{
		TargetTaskComponent = TargetTask == nullptr ? nullptr : TargetTask->GetTriggerOwner();
	}

	if (TargetTaskComponent == nullptr)
		return;

	if (GetTriggerManager() == nullptr || GetTriggerManager()->GetRuntimeContent() == nullptr)
		return;

	UTriggerRuntimeContent* RuntimeContent = GetTriggerManager()->GetRuntimeContent();

	TArray<APlayerController*> Players;
	Players.Empty();

	UTriggerTaskStartInformationBase* ExternalData = Cast<UTriggerTaskStartInformationBase>(StartOperationInfo);

	if (ExternalData != nullptr)
	{
		APlayerController* Player = Cast<APlayerController>(ExternalData->GetToggledActor());

		if (Player != nullptr)
		{
			Players.Add(Player);
		}
	}

	for (auto Category : TargetTaskComponent->GetCategories())
	{
		if(Category == nullptr)
			continue;

		if(!Category->IsValidCategory())
			continue;

		for (auto GameplayTag : Category->Categories)
		{
			RuntimeContent->AddSceneario(GameplayTag, Players);
		}
	}
}

bool UTriggerTaskComponentBase::CanBeToggled() const
{
	bool Result = true;

	//When this trigger is on client and the target trigger task component is not run on the client then this trigger should do nothing 
	if (GetNetMode() == ENetMode::NM_Client && RunType == ERunType::ERunType_RunOnServer)
		Result = Result && false;

	//When this trigger is run on the server but the target component is run on the client then we should check 
	if ((GetNetMode() == ENetMode::NM_DedicatedServer || GetNetMode() == ENetMode::NM_ListenServer) &&
		(RunType == ERunType::ERunType_RunOnClient))
		Result = Result && false;

	return Result;
}

void UTriggerTaskComponentBase::SetInstigator(AActor* Insigator, UTriggerTaskBase* Task /* = nullptr */)
{
	TArray<UTriggerTaskBase*> Tasks;
	GetAllTriggerTasks(Tasks);

	for (auto TriggerTask : Tasks)
	{
		if (TriggerTask == nullptr)
			continue;

		if (TriggerTask == Task || Task == nullptr)
		{
			TriggerTask->SetInstigator(Insigator);
		}
	}
}

bool UTriggerTaskComponentBase::DispatchTask(bool ForceStart, UOperationInformationBase* StartOpeationInfo)
{
	bool Result = false;

	TArray<UTriggerTaskBase*> Tasks;
	GetAllTriggerTasks(Tasks);

	if (Tasks.Num() == 0)
		return Result;

	if (StaticClass()->IsFunctionImplementedInScript("OnDispatchTask"))
	{
		if (OnDispatchTask(ForceStart, StartOpeationInfo))
			return true;
	}

	for (auto TriggerTask : Tasks)
	{	
		//When this component want to start the task forcedly then the target trigger task should reset first.
		if (ForceStart)
		{
			TriggerTask->Reset(nullptr);
		}

		if (TriggerTask->ReceiveNotifyFromOthersComponent(this, TriggerTask, StartOpeationInfo))
		{
			Result = true;
		}
	}

	return Result;
}

bool UTriggerTaskComponentBase::PauseTask(UTriggerTaskBase* Task /* = nullptr */, UOperationInformationBase* OperationInfo)
{
	bool Result = true;

	TArray<UTriggerTaskBase*> Tasks;
	GetCanRunningTasks(Tasks);

	if (Task == nullptr)
	{
		for (auto TriggerTask : Tasks)
		{
			TriggerTask->Pause(OperationInfo);
		}
	}
	else
	{
		Task->Pause(OperationInfo);
	}
	return Result;
}

bool UTriggerTaskComponentBase::ResumeTask(UTriggerTaskBase* Task /* = nullptr */, UOperationInformationBase* ResumeOperationInfo)
{
	bool Result = true;

	TArray<UTriggerTaskBase*> Tasks;
	GetAllTriggerTasks(Tasks);

	if (Task == nullptr)
	{
		for (auto TriggerTask : Tasks)
		{
			TriggerTask->Resume(ResumeOperationInfo);
		}
	}
	else
	{
		Task->Resume(ResumeOperationInfo);
	}
	return Result;
}

bool UTriggerTaskComponentBase::StartTask(bool ForceStart, UTriggerTaskBase* Task /* = nullptr */, UOperationInformationBase* StartOperationInfo)
{
	bool Result = false; 

	UTriggerTaskStartInformationBase* ExternalData = Cast<UTriggerTaskStartInformationBase>(StartOperationInfo);

	if (ExternalData == nullptr && UTriggerBlueprintLib::GetOperationInfoManager() != nullptr)
	{
		UTriggerTaskStart_StartTaskByTaskComponent* Info = Cast<UTriggerTaskStart_StartTaskByTaskComponent>(UTriggerBlueprintLib::GetOperationInfoManager()->AddNewOperationByClass(this, UTriggerTaskStart_StartTaskByTaskComponent::StaticClass()).Operation);

		if (Info != nullptr)
		{
			Info->SetTaskComponent(this);
			ExternalData = Info;
		}
	}

	if (Task == nullptr)
	{
		Result = DispatchTask(ForceStart, ExternalData);
	}
	else
	{
		if (ForceStart)
		{
			Task->Reset(nullptr);
		}

		if (Task->ReceiveNotifyFromOthersComponent(this, Task, ExternalData))
		{
			Result = true;
		}
	}
	return Result;
}

bool UTriggerTaskComponentBase::TickTask(float DeltaTime, UTriggerTaskBase* Task /* = nullptr */)
{
	bool Result = true;

	TArray<UTriggerTaskBase*> Tasks;
	GetAllTriggerTasks(Tasks);

	if (Task == nullptr)
	{
		for (auto TriggerTask : Tasks)
		{
			if (TriggerTask == nullptr)
			{
				UE_LOG(LogTrigger, Error, TEXT("Please check the data in %s, There must be not NONE value in the task array"), *(GetOwner()->GetName()));
				continue;
			}

			if (!TriggerTask->CanTick())
			{
				continue;
			}

			TriggerTask->Tick(DeltaTime);
		}
	}
	else
	{
		if (!Task->CanTick())
		{
			return true;
		}
		Task->Tick(DeltaTime);
	}
	return Result;
}

bool UTriggerTaskComponentBase::EndTask(UOperationInformationBase* OperationInfo, bool IsStoped, UTriggerTaskBase* Task /* = nullptr */, ETriggerTaskAutomaticallyEndType EndType)
{
	TArray<UTriggerTaskBase*> Tasks;
	GetCanRunningTasks(Tasks);

	if (IsStoped)
	{
		if (Task == nullptr ||!Task->IsValidLowLevelFast())
		{
			for (auto TriggerTask : Tasks)
			{
				if(TriggerTask== nullptr || !TriggerTask->IsValidLowLevelFast())
					continue;

				TriggerTask->TryToStop(OperationInfo);
			}
		}
		else
		{

			Task->TryToStop(OperationInfo);
		}
	}
	else
	{
		if (Task == nullptr || !Task->IsValidLowLevelFast())
		{
			for (auto TriggerTask : Tasks)
			{
				if (TriggerTask == nullptr || !TriggerTask->IsValidLowLevelFast() 
					//Only when this task is running I will try to make this task sleep
					|| !TriggerTask->IsRunning())
					continue;

				TriggerTask->TryToSleep(OperationInfo);
			}
		}
		else
		{
			//Only when this task is running I will try to make this task sleep
			if(Task->IsRunning())
			{
				Task->TryToSleep(OperationInfo);
			}
		}
	}
	return true;
}


bool UTriggerTaskComponentBase::TryToTransferToDifferentLevel(UTriggerTaskComponentBase* TargetComponent, UTriggerTaskBase* ResouceTask, UOperationInformationBase* StartOperationInfo, UTriggerTaskBase* TargetTask)
{
	bool HaveCorrespondSubLevelTrigger = false;

	UTriggerTaskStartInformationBase* ExternalData = Cast<UTriggerTaskStartInformationBase>(StartOperationInfo);

	if (ExternalData == nullptr)
	{
		if (StartOperationInfo != nullptr)
		{
			UE_LOG(LogTrigger, Warning, TEXT("The UTriggerTaskComponentBase have not process the operation information %s"), *StartOperationInfo->GetPathName());
		}

		return false;
	}
		

	UTriggerTaskComponentBase* LocalTargetComponent = TargetComponent == nullptr ? TargetTask == nullptr ? nullptr : TargetTask->GetTriggerOwner() : TargetComponent;

	FString TargetMapName = LocalTargetComponent->GetTypedOuter<ULevel>()->GetOuter()->GetName();
	FString SendMapName = GetTypedOuter<ULevel>()->GetOuter()->GetName();

	/*
	* When this component try to notify itself to run trigger task, I need to check weather It should run its instanced component
	*/
	if (LocalTargetComponent == this)
	{
		for (auto Catgory : GetConstCategories())
		{
			if (Catgory == nullptr)
				continue;

			if (Catgory->IsMathcedForCurrrentRuntimeContent())
			{
				TArray<FString> MapNames;
				Catgory->GetExportedMapName(MapNames);

				//The level of target component have been loaded, so we can notify it directly
				if (SendMapName != TargetMapName &&
					MapNames.Find(TargetMapName) != INDEX_NONE)
					continue;

				for (auto MapName : MapNames)
				{
					//As the sublevel have been loaded I can notify it directly
					if(SendMapName == MapName)
						continue;

					if (GetTriggerManager() &&
						GetTriggerManager()->GetTriggerTaskManager() &&
						GetTriggerManager()->GetTriggerTaskManager()->GetTriggerTaskRunHelp())
					{
						FTriggerTaskRuntimeInfo RuntimeInfo(this, ResouceTask, TargetComponent, TargetTask, ExternalData);

						RuntimeInfo.TargetComponentMap = MapName;

						GetTriggerManager()->GetTriggerTaskManager()->GetTriggerTaskRunHelp()->RunTriggerTaskWithRuntimeInfo(RuntimeInfo);

						HaveCorrespondSubLevelTrigger = true;
					}
				}
			}
		}
	}

	return HaveCorrespondSubLevelTrigger;
}

bool UTriggerTaskComponentBase::TransfereTask(UTriggerTaskComponentBase* TargetComponent, UTriggerTaskBase* ResouceTask, UOperationInformationBase* StartOperationInfo, UTriggerTaskBase* TargetTask)
{
	if (TargetComponent == nullptr)
		return false;

	if (ResouceTask != nullptr && ResouceTask->TransferType == ETaskTransferType::ETaskTransferType_None) return true;

	if(!CanBeToggled())
		return false;

	if (!TryToTransferToDifferentLevel(TargetComponent, ResouceTask, StartOperationInfo, TargetTask))
	{
		if (TargetComponent->RecevieTaskInformation(this, ResouceTask, StartOperationInfo, TargetTask))
		{
			/*
			* When one of the task in the target target component have been notified to run successfully, then I need to update the runtime content
			*/
			UpdateRuntimeContent(ResouceTask, TargetComponent, TargetTask, StartOperationInfo);
		}
	}

	return true;
}

bool UTriggerTaskComponentBase::TransfereTaskToTargetTask(UTriggerTaskBase* SenderTask, UTriggerTaskBase* TargetTask, UOperationInformationBase* StartOperationInfo)
{
	UTriggerTaskComponentBase* TargetComponent = TargetTask == nullptr ? nullptr : TargetTask->GetTriggerOwner();

	if(TargetComponent == nullptr)
		return false;

	return TransfereTask(TargetComponent, SenderTask, StartOperationInfo, TargetTask);
}

bool UTriggerTaskComponentBase::RecevieTaskInformation(UTriggerTaskComponentBase* ResourceComponent, UTriggerTaskBase* Task, UOperationInformationBase* StartOperationInfo, UTriggerTaskBase* TargetTask)
{
	bool Result = true;

	if (ResourceComponent == nullptr) 
		return false;

	UTriggerTaskBase* TriggerTask = NULL;

	UTriggerManager* TriggerManager = GetTriggerManager();

	TArray<UTriggerTaskBase*> Tasks;

	//If Task is null means all native task should check this information
	if (Task != nullptr)
	{
		switch (Task->TransferType)
		{
		case ETaskTransferType::ETaskTransferType_Move:
			AddTask(Task);
			ResourceComponent->RemoveTask(Task);
			Task->InitializeTask(this, Task->IsTemplateTask(), Task->IsDynamicTask());
			break;
		case ETaskTransferType::ETaskTransferType_Copy:
			TriggerTask = CreateNewTaskByObject(Task);
			break;
		case ETaskTransferType::ETaskTransferType_Notify:
		default:
			break;
		}
	}
	

	{
		if (TargetTask != nullptr)
		{
			GetAllTriggerTasks(Tasks);

			//This task is not in the pool of this component
			if (Tasks.Find(TargetTask) == INDEX_NONE)
			{
				return false;
			}

			Result = RunTaskInternal(ResourceComponent, Task, StartOperationInfo, TargetTask);
		}
		else
		{
			GetCanActivatedTasks(Tasks);

			for (auto NativeTask : Tasks)
			{
				if (NativeTask == nullptr)
				{
					UE_LOG(LogTrigger, Error, TEXT("There is one empty task value in the target Trigger with name: %s"), *GetOuter()->GetName());
					continue;
				}

				Result = RunTaskInternal(ResourceComponent, Task, StartOperationInfo, NativeTask);
			}
		}
	}

	return Result;
}

bool UTriggerTaskComponentBase::RunTaskInternal(UTriggerTaskComponentBase* Component, UTriggerTaskBase* Task, UOperationInformationBase* StartOperationInfo, UTriggerTaskBase* TargetTask)
{
	bool Result = false;

	int TaskRunScope = GetTaskRunType(Task, TargetTask);

	if (CheckIsvalidScope(TaskRunScope))
	{
		if ((TaskRunScope & int(Trigger::ETaskRunType::Local)) != 0)
			Result = RunOnLocal(Component, Task, TargetTask, StartOperationInfo);

		if ((TaskRunScope & int(Trigger::ETaskRunType::Server)) != 0)
			Result = RunOnServer(Component, Task, TargetTask, StartOperationInfo);

		if ((TaskRunScope & int(Trigger::ETaskRunType::Client)) != 0)
			Result = RunOnClient(Component, Task, TargetTask, StartOperationInfo);
	}

	return Result;
}

bool UTriggerTaskComponentBase::CheckIsvalidScope(int TaskRunScope)
{
	//if (GetNetMode() == ENetMode::NM_Client && (TaskRunScope & int(Trigger::ETaskRunType::Client)) == 0)
	//{
	//	return false;
	//}

	//if ((GetNetMode() == ENetMode::NM_ListenServer || GetNetMode() == ENetMode::NM_DedicatedServer)&& (TaskRunScope & int(Trigger::ETaskRunType::Server)) == 0)
	//{
	//	return false;
	//}

	return true;
}

bool UTriggerTaskComponentBase::RunOnLocal(UTriggerTaskComponentBase* SenderComponent, UTriggerTaskBase* SenderTask, UTriggerTaskBase* TargetTask, UOperationInformationBase* StartOperationInfo)
{
	
	if (TargetTask->ReceiveNotifyFromOthersComponent(SenderTask == nullptr ? SenderComponent : SenderTask->GetTriggerOwner(), SenderTask, StartOperationInfo))
	{
		if (SenderTask != nullptr)
		{
			SenderTask->NotifyOtherComponentSuccessed(this, TargetTask);
		}
	}

	return true;
}

bool UTriggerTaskComponentBase::RunOnServer(UTriggerTaskComponentBase* SenderComponent, UTriggerTaskBase* SenderTask, UTriggerTaskBase* TargetTask, UOperationInformationBase* StartOperationInfo)
{
	UTriggerNetPlayerSupportComponent* TNPSC = GetNetSupportComponent(StartOperationInfo, SenderTask);

	if(TNPSC == nullptr)
		return false;

	if (TargetTask == nullptr || TargetTask->GetTriggerOwner() == nullptr)
	{
		return false;
	}

	FTriggerTaskRuntimeInfo RuntimeInfo(SenderComponent, SenderTask, this, TargetTask, StartOperationInfo);

	TNPSC->Server_InvokeServerTask(RuntimeInfo);

	return true;
}

bool UTriggerTaskComponentBase::RunOnClient(UTriggerTaskComponentBase* SenderComponent, UTriggerTaskBase* SenderTask, UTriggerTaskBase* TargetTask, UOperationInformationBase* StartOperationInfo)
{
	FTriggerTaskRuntimeInfo RuntimeInfo(SenderComponent, SenderTask, this, TargetTask, StartOperationInfo);

	NetMulti_StartTask(RuntimeInfo);

	return true;
}

void UTriggerTaskComponentBase::GetChildTriggerTaskComponents(TArray<UTriggerTaskComponentBase*>& OutTriggerTaskComponents, UTriggerTaskBase* Task, UOperationInformationBase* StartOperationInfo)
{
	OutTriggerTaskComponents.Empty();

	/*
	* I will first get the child components from the next component information if this component contains.
	*/
	UTriggerManager* TriggerManager = GetTriggerManager();

	if (TriggerManager != nullptr)
	{
		TArray<UTriggerTaskComponentBase*> LocalComponents;

		TArray<FTriggerTaskComponentInformation> ComponentInfos;

		GetNextComponentInfo(ComponentInfos);

		TriggerManager->GetTriggerTaskComponentsByComponentInfo(LocalComponents, ComponentInfos, this);

		OutTriggerTaskComponents.Append(LocalComponents);
	}

	for (auto EventChain : EventChains)
	{
		if(EventChain == nullptr)
			continue;

		TArray<UTriggerTaskComponentBase*> LocalComponents;

		EventChain->GetChildTriggerTaskComponents(LocalComponents);

		for (auto LocalComponent : LocalComponents)
		{
			if(LocalComponent == nullptr)
				continue;

			OutTriggerTaskComponents.AddUnique(LocalComponent);
		}
	}

	OnGetChildTriggerTaskComponents(OutTriggerTaskComponents, Task, StartOperationInfo);
}

void UTriggerTaskComponentBase::GetParentTriggerTaskComponents(TArray<UTriggerTaskComponentBase*>& OutTriggerTaskComponents)
{
	OutTriggerTaskComponents.Empty();

	for (auto EventChain : EventChains)
	{
		if (EventChain == nullptr)
			continue;

		TArray<UTriggerTaskComponentBase*> LocalComponents;

		EventChain->GetParentTriggerTaskComponents(LocalComponents);

		for (auto LocalComponent : LocalComponents)
		{
			if (LocalComponent == nullptr)
				continue;

			OutTriggerTaskComponents.AddUnique(LocalComponent);
		}
	}


	OnGetParentTriggerTaskComponents(OutTriggerTaskComponents);
}

void UTriggerTaskComponentBase::RemoveChildNode_Implementation(const TScriptInterface<ITriggerInterface>& ChildNode, const FGameplayTagContainer& Category, bool NeedUpdateParentNodeInChildNode)
{
	for (auto EventChain : EventChains)
	{
		if(EventChain == nullptr)
			continue;

		EventChain->RemoveChildNode(ChildNode, Category, NeedUpdateParentNodeInChildNode);
	}
}

void UTriggerTaskComponentBase::RemoveParentNode_Implementation(const TScriptInterface<ITriggerInterface>& ParentNode, const FGameplayTagContainer& Category, bool NeedUpdateParentNodeInChildNode)
{
	for (auto EventChain : EventChains)
	{
		if (EventChain == nullptr)
			continue;

		EventChain->RemoveParentNode(ParentNode, Category, NeedUpdateParentNodeInChildNode);
	}
}

bool UTriggerTaskComponentBase::AddParentNode_Implementation(
	const TScriptInterface<ITriggerInterface>& ParentNode,
	TSubclassOf<UTriggerEventChainBase> TargetEventChainClass,
	const FGameplayTagContainer& Category,
	bool NeedUpdateEvnetChainInParentNode)
{
	return AddNodeToEventChainInternal(ParentNode, TargetEventChainClass, Category, NeedUpdateEvnetChainInParentNode, true);
}

bool UTriggerTaskComponentBase::AddChildNode_Implementation(
	const TScriptInterface<ITriggerInterface>& ChildNode,
	TSubclassOf<UTriggerEventChainBase> TargetEventChainClass,
	const FGameplayTagContainer& Category,
	bool NeedUpdateEventInfoInChildNode)
{
	return AddNodeToEventChainInternal(ChildNode, TargetEventChainClass, Category, NeedUpdateEventInfoInChildNode, false);
}

bool UTriggerTaskComponentBase::AddNodeToEventChainInternal(
	const TScriptInterface<ITriggerInterface>& Node,
	const TSubclassOf<UTriggerEventChainBase>& TargetEventChainClass,
	const FGameplayTagContainer& Category,
	bool NeedUpdateEventInfo,
	bool IsAddParentNode
)
{
	/*
	* if there is not matched event chain to hold this child node then create new one to hold it
	*/
	bool IsAllCategoryUnmatched = true;

	bool Result = false;

	for (auto EventChain : EventChains)
	{
		if (EventChain == nullptr)
			continue;

		EAddNewNodeResult  AddedResult;
		
		if (IsAddParentNode)
		{
			AddedResult = EventChain->AddParentNode(Node, Category, NeedUpdateEventInfo);
		}
		else
		{
			AddedResult = EventChain->AddChildNode(Node, Category, NeedUpdateEventInfo);
		}

		if (EnumHasAnyFlags(AddedResult, EAddNewNodeResult::EAddNewNodeResult_Matched))
		{
			IsAllCategoryUnmatched = false;
		}

		if (EnumHasAnyFlags(AddedResult, EAddNewNodeResult::EAddNewNodeResult_Successed))
		{
			Result = true;
		}
	}

	if (IsAllCategoryUnmatched && TargetEventChainClass != nullptr)
	{
		UTriggerEventChainBase* EventChain = Cast<UTriggerEventChainBase>(TargetEventChainClass->GetDefaultObject());

		if (!EventChain->CanHoldTargetObject(Node.GetObject()))
			return false;

		EventChain = AddNewEventChain(EventChain);

		EAddNewNodeResult  AddedResult = EAddNewNodeResult::EAddNewNodeResult_PlaceHold;

		if (EventChain != nullptr)
		{
			if (IsAddParentNode)
			{
				AddedResult = EventChain->AddParentNode(Node, Category, NeedUpdateEventInfo);
			}
			else
			{
				AddedResult = EventChain->AddChildNode(Node, Category, NeedUpdateEventInfo);
			}
		}

		if (EnumHasAnyFlags(AddedResult, EAddNewNodeResult::EAddNewNodeResult_Successed))
		{
			Result = Result || true;
		}
	}

	return Result;
}

void UTriggerTaskComponentBase::GetParentTriggers_Implementation(TArray<TScriptInterface<ITriggerInterface>>& OuterTriggers, const FGameplayTagContainer& Category)
{
	OuterTriggers.Empty();

	for (auto EventChain : EventChains)
	{
		if (EventChain == nullptr)
			continue;

		TArray<TScriptInterface<ITriggerInterface>> ParentTriggers;

		EventChain->GetParentTriggers(ParentTriggers, Category);

		OuterTriggers.Append(ParentTriggers);
	}
}

void UTriggerTaskComponentBase::GetChildTriggers_Implementation(TArray<TScriptInterface<ITriggerInterface>>& OuterTriggers, const FGameplayTagContainer& Category)
{
	OuterTriggers.Empty();

	for (auto EventChain : EventChains)
	{
		if (EventChain == nullptr)
			continue;

		TArray<TScriptInterface<ITriggerInterface>> ChildTriggers;

		EventChain->GetChildTriggers(ChildTriggers, Category);

		OuterTriggers.Append(ChildTriggers);
	}
}

void UTriggerTaskComponentBase::RemoveNextComponentInfo(FString MapName, FGuid ComponentID)
{
	for (auto EventChain : EventChains)
	{
		if (EventChain == nullptr)
			continue;

		EventChain->RemoveNextComponentInfo(MapName, ComponentID);
	}
}

void UTriggerTaskComponentBase::AddNextComponentInfo(FString MapName, FGuid ComponentID)
{
	for (auto EventChain : EventChains)
	{
		if (EventChain == nullptr)
			continue;

		EventChain->AddNextComponentInfo(MapName, ComponentID);
	}
}

void UTriggerTaskComponentBase::GetNextComponentInfo(TArray<FTriggerTaskComponentInformation>& OuterInfos)
{
	OuterInfos.Empty();

	for (auto EventChain : EventChains)
	{
		if (EventChain == nullptr)
			continue;

		OuterInfos.Append(EventChain->GetNextComponentInfo());
	}
}

UTriggerManager* UTriggerTaskComponentBase::GetTriggerManager() const
{
	return UTriggerBlueprintLib::GetTriggerManager();
}

UTriggerEventChainBase* UTriggerTaskComponentBase::AddNewEventChain(UTriggerEventChainBase* NewChain, bool CreateNewInstance)
{
	if(NewChain == nullptr)
		return nullptr;

	UTriggerEventChainBase* CopyObject = NewChain;

	if (CreateNewInstance)
	{
		CopyObject = NewObject<UTriggerEventChainBase>(this, NewChain->GetClass(), NAME_None, RF_NoFlags, NewChain);

		CopyObject->InitilaizeByTriggerTaskComponent(this);
	}

	EventChains.AddUnique(CopyObject);

	return CopyObject;
}

void UTriggerTaskComponentBase::RemoveEventChain(UTriggerEventChainBase* OldChain)
{
	if (OldChain == nullptr)
		return;

	EventChains.Remove(OldChain);
}


void UTriggerTaskComponentBase::RegisterTaskComponent()
{
	//Only register the instanced trigger
	if (!IsTemplate())
	{
		TScriptInterface<ITriggerInterface> Trigger = GetTriggerObjectOwner();

		if (Trigger)
		{
			if (GetTriggerManager() != nullptr)
			{
				GetTriggerManager()->RegisterTrigger(Trigger);
			}
		}
	}

	if (!ID.IsValid())
	{
		ID = FGuid::NewGuid();
	}

	for (int i = 0; i < EventChains.Num(); i++)
	{
		if (EventChains[i] == nullptr)
			continue;

		EventChains[i]->InitilaizeByTriggerTaskComponent(this);
	}

	RegisterTasks();
}

void UTriggerTaskComponentBase::UnRegisterTaskComponent()
{
	//Only unregister the instanced trigger
	if (!IsTemplate())
	{
		TScriptInterface<ITriggerInterface> Trigger = GetTriggerObjectOwner();

		if (Trigger)
		{
			if (GetTriggerManager() != nullptr)
			{
				GetTriggerManager()->UnRegisterTrigger(Trigger);
			}
		}
	}

	UnRegisterTasks();
}

void UTriggerTaskComponentBase::RegisterTasks()
{
	RemoveTask(nullptr);

	auto RegisterLamboda = [&](const TArray<UTriggerTaskBase*>& Tasks, bool IsTemplate, bool IsDynamic)
	{
		for (auto Task : Tasks)
		{
			if (Task == nullptr || !Task->IsValidLowLevel())
				continue;

			Task->InitializeTask(this, IsTemplate, IsDynamic);

			Task->Register();
		}
	};

	//Make all tasks in the trigger tasks as template task
	RegisterLamboda(TriggerTasks, true, false);

	RegisterLamboda(ReplicatedTasks, false, true);

	RegisterLamboda(UnReplicatedTasks, false, true);
}

void UTriggerTaskComponentBase::UnRegisterTasks()
{
	auto UnRegisterLamboda = [&](const TArray<UTriggerTaskBase*>& Tasks) 
	{
		for (auto Task : Tasks)
		{
			if (Task == nullptr)continue;

			Task->UnRegister();
		}
	};

	//Make all tasks in the trigger tasks as template task
	UnRegisterLamboda(TriggerTasks);

	UnRegisterLamboda(ReplicatedTasks);

	UnRegisterLamboda(UnReplicatedTasks);
}


UTriggerNetPlayerSupportComponent* UTriggerTaskComponentBase::GetNetSupportComponent(UOperationInformationBase* StartOperationInfo, UTriggerTaskBase* SenderTask)
{
	AActor* Actor = nullptr;
	UTriggerNetPlayerSupportComponent* TNPSC = nullptr;

	UTriggerTaskStartInformationBase* ExternalData = Cast<UTriggerTaskStartInformationBase>(StartOperationInfo);

	if (ExternalData == nullptr)
	{
		if (StartOperationInfo != nullptr)
		{
			UE_LOG(LogTrigger, Warning, TEXT("The GaiaTT_AudioAmbience have not process the operation information %s"), *StartOperationInfo->GetPathName());
		}

		return nullptr;
	}

	//First try to search form the extern data
	if (ExternalData != nullptr)
	{
		Actor = ExternalData->GetToggledActor();

		TNPSC = UTriggerBlueprintLib::GetTriggerNetPlayerSupportFromActor(Actor);
		
		//If the target actor don't contain TriggerNetPlayerSupportComponent then make this actor invalid
		if (TNPSC == nullptr)
		{
			Actor = nullptr;
		}
		else
		{
			return TNPSC;
		}
	}
		
	//Second try to search from the task chain to get the immediate valid actor 
	if (Actor == nullptr)
	{
		if(SenderTask != nullptr)
		{
			FTaskActivationInfoContainer& Container = SenderTask->GetImmediateActivationInformation();
			
			for (int i = 0; i < Container.GetItems().Num(); i++)
			{
				if (Container.GetItems()[i].ProcessedExternalData != nullptr)
				{
					UTriggerTaskStartInformationBase* LocalStartOperationInfo = Cast<UTriggerTaskStartInformationBase>(Container.GetItems()[i].ProcessedExternalData);

					if (LocalStartOperationInfo != nullptr)
					{
						Actor = LocalStartOperationInfo->GetToggledActor();
					}
					
					TNPSC = UTriggerBlueprintLib::GetTriggerNetPlayerSupportFromActor(Actor);

					if (TNPSC != nullptr)
					{
						return TNPSC;
					}
				}
				else
					continue;
			}

			Actor = Cast<AActor>(SenderTask->GetInstigator());

			TNPSC = UTriggerBlueprintLib::GetTriggerNetPlayerSupportFromActor(Actor);

			if (TNPSC != nullptr)
			{
				return TNPSC;
			}

			Actor = nullptr;
			
		}
	}

	//Third just use the default first valid player which contain the UTriggerNetPlayerSupportComponent in the world to do the net work
	if (Actor == nullptr)
	{
		for (auto It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
		{
			APlayerController* PlayerController = It->Get();

			TNPSC = UTriggerBlueprintLib::GetTriggerNetPlayerSupportFromActor(PlayerController);

			if (TNPSC != nullptr)
			{
				return TNPSC;
			}
		}
	}

	if (Actor == nullptr)
	{
		UE_LOG(LogTrigger, Error, TEXT("Try to run the task on the server from the client, but there is no vaild Actor to do the RPC!!!"));

		return nullptr;
	}

	return nullptr;
}


Trigger::ETaskRunType UTriggerTaskComponentBase::GetTaskRunType(UTriggerTaskBase* SenderTask, UTriggerTaskBase* TargetTask)
{
	ERunType LocalRunType = SenderTask == nullptr ? ERunType::ERunType_MAX : SenderTask->RunType;

	return GetTaskRunTypeInternal(LocalRunType, TargetTask);
}

Trigger::ETaskRunType UTriggerTaskComponentBase::GetTaskRunType(UTriggerTaskBase* TriggerTask)
{
	return GetTaskRunTypeInternal(UTriggerBlueprintLib::ConvertNetModeToRunType(GetNetMode()), TriggerTask);
}

Trigger::ETaskRunType UTriggerTaskComponentBase::GetTaskRunTypeInternal(ERunType LocalRunType, UTriggerTaskBase* TriggerTask)
{

	Trigger::ETaskRunType Result = Trigger::ETaskRunType(0);

	if (TriggerTask == nullptr)
	{
		return Result;
	}

	if (LocalRunType == ERunType::ERunType_MAX)
	{
		if (TriggerTask == nullptr)
			return Trigger::ETaskRunType::Local;
		else if (TriggerTask->RunType == ERunType::ERunType_MutiCast)
			return Trigger::ETaskRunType::Local;
		else if (TriggerTask->RunType == ERunType::ERunType_RunOnClient)
		{
			if (GetNetMode() == ENetMode::NM_Client || GetNetMode() == ENetMode::NM_Standalone)
				return Trigger::ETaskRunType::Local;
			else
				return Trigger::ETaskRunType::Client;
		}
		else if (TriggerTask->RunType == ERunType::ERunType_RunOnServer)
		{
			if (GetNetMode() == ENetMode::NM_Client)
				return Trigger::ETaskRunType::Server;
			else
				return Trigger::ETaskRunType::Local;
		}
	}


	//When this task is run on the server
	if (LocalRunType == ERunType::ERunType_RunOnServer)
	{
		if (TriggerTask->RunType == ERunType::ERunType_RunOnServer)
			//When the target task is also run on the server means we can invoke the server task directly
			Result = Trigger::ETaskRunType::Local;
		else if (TriggerTask->RunType == ERunType::ERunType_RunOnClient)
			//When the target task is only run on the client means we should active this task on the client by call NetMutiCast function
			Result = Trigger::ETaskRunType::Client;
		else if (TriggerTask->RunType == ERunType::ERunType_MutiCast)
		{
			//The target trigger should active the task both on the client and server
			Result = Trigger::ETaskRunType::Local | Trigger::ETaskRunType::Client;
		}
	}
	//When the invoker task is run on the client
	else if (LocalRunType == ERunType::ERunType_RunOnClient)
	{
		//when the target task is run on the client then we can just active the task directly
		if (TriggerTask->RunType == ERunType::ERunType_RunOnClient)
			Result = Trigger::ETaskRunType::Local;
		//When the target task is run on the server then we should go the player controller RPC to make the target trigger component to run this task
		else if (TriggerTask->RunType == ERunType::ERunType_RunOnServer)
			Result = Trigger::ETaskRunType::Server;
		//When the target task should run on both one the client and server then we should do both the RPC and local function
		else if (TriggerTask->RunType == ERunType::ERunType_MutiCast)
			Result = Trigger::ETaskRunType::Local | Trigger::ETaskRunType::Server;
	}
	else if (LocalRunType == ERunType::ERunType_MutiCast)
	{
		//The invoker task is MutiCast means the client and server will invoke the target task respectably 
		Result = Trigger::ETaskRunType::Local;
	}

	return Result;
}

UTriggerTaskBase* UTriggerTaskComponentBase::CreateNewTaskByObject(UTriggerTaskBase* Task, bool AsTemplate)
{
	if (GetTriggerManager() == nullptr) return nullptr;

	UTriggerTaskBase* NewTask = GetTriggerManager()->GetTriggerTaskManager()->CreateNewTaskByObject(this, Task, AsTemplate);

	if (NewTask != nullptr)
	{
		AddTask(NewTask);

		NewTask->InitializeTask(this, AsTemplate, true);
	}

	return NewTask;
}

UTriggerTaskBase* UTriggerTaskComponentBase::CreateNewTaskByClass(TSubclassOf<UTriggerTaskBase> Task, bool AsTemplate)
{
	UTriggerTaskBase* NewInstance = nullptr;
#if WITH_EDITOR
	//When we use editor tool to create new task we should not access the Trigger Manager;
	NewInstance = Cast<UTriggerTaskBase>(Task->GetDefaultObject());
	switch (NewInstance->InstanceType)
	{
	case ETaskInstanceType::ETaskInstanceType_CreateNewInstance:
		NewInstance = NewObject<UTriggerTaskBase>(this, Task);
		NewInstance->InitializeTask(this, AsTemplate, true);
		AddTask(NewInstance);
		return NewInstance;
	case ETaskInstanceType::ETaskInstanceType_NoNewInstance:
	case ETaskInstanceType::ETaskInstanceType_CDO:
	default:
		return NewInstance;
	} 
#endif

	if (GetTriggerManager() == nullptr) return nullptr;

	NewInstance = GetTriggerManager()->GetTriggerTaskManager()->CreateNewTaskByClass(this, Task, AsTemplate);

	if (NewInstance != nullptr)
	{
		NewInstance->InitializeTask(this, AsTemplate, true);
	}

	return NewInstance;
}

bool UTriggerTaskComponentBase::IsAllTaskFinished()
{
	bool Result = true;

	TArray<UTriggerTaskBase*> Tasks;
	GetCanRunningTasks(Tasks);

	for (int i = 0; i < Tasks.Num(); i++)
	{
		if(Tasks[i] == nullptr)
			continue;

		if (!Tasks[i]->IsCompletelyFinished())
		{
			Result = false;
			break;
		}
	}
	return Result;
}

void UTriggerTaskComponentBase::TryToNotifyChildNodeToStartRunTask( UTriggerTaskBase* Task, UOperationInformationBase* StartOperationInfo)
{
	if (Task == nullptr)
	{
		UE_LOG(LogTrigger, Error, TEXT("When you want to notify the child node to run, the notifier Task is invalid!!!"));
		return;
	}

	ULevel* Level = GetTypedOuter<ULevel>();
	FString MapName;
	if (Level != nullptr)
	{
		MapName = Level->GetOuter()->GetName();
	}

	bool NotifyChildNodeDirectly = true;

	if (GetTriggerManager() &&
		GetTriggerManager()->GetTriggerTaskManager() &&
		GetTriggerManager()->GetTriggerTaskManager()->GetTriggerTaskRunHelp())
	{
		TArray<FTriggerTaskComponentInformation> NextComponentInfos;

		GetNextComponentInfo(NextComponentInfos);

		for (auto NextComponentInfo : NextComponentInfos)
		{
			//If the component info can not be used at current runtime status then skip it
			if(	GetTriggerManager()->GetRuntimeContent() == nullptr ||
				!GetTriggerManager()->GetRuntimeContent()->CanUseComponentInfo(NextComponentInfo))
				continue;

			for (auto ComponentID : NextComponentInfo.ComponentIDs)
			{
				FTriggerTaskRuntimeInfo RuntimeInfo( this, Task, nullptr, nullptr, StartOperationInfo);

				RuntimeInfo.TargetMapAssetPath = RuntimeInfo.SendMapAssetPath;
				RuntimeInfo.TargetComponentMap = NextComponentInfo.MapName;
				RuntimeInfo.TargetComponentID = ComponentID;

				GetTriggerManager()->GetTriggerTaskManager()->GetTriggerTaskRunHelp()->RunTriggerTaskWithRuntimeInfo(RuntimeInfo);
			}

			NotifyChildNodeDirectly = false;
		}
	}
	
	/*
	* As there is no additional component need to be notified, just to notify the child node directly
	*/
	if(NotifyChildNodeDirectly)
	{
		TArray<UTriggerTaskComponentBase*> ChildComponents;

		GetChildTriggerTaskComponents(ChildComponents, Task, StartOperationInfo);

		//if (IsAllTaskFinished())
		{
			//when the parent task is null means we can notify the child nodes in the trigger owner to start to prepare 
			for (auto ChildComponent : ChildComponents)
			{
				TransfereTask(ChildComponent, Task, StartOperationInfo);
			}
		}
	}
}

TScriptInterface<ITriggerInterface> UTriggerTaskComponentBase::GetTriggerObjectOwner() const
{
	TScriptInterface<ITriggerInterface> Result;

	UObject* Outer = GetOuter();

	while (Outer != nullptr)
	{
		void* InterfaceAddress = Outer->GetInterfaceAddress(UTriggerInterface::StaticClass());

		if (InterfaceAddress != nullptr)
		{
			Result.SetObject(Outer);
			Result.SetInterface(InterfaceAddress);

			return Result;
		}

		Outer = Outer->GetOuter();
	}

	return Result;
}

UTriggerTaskBase* UTriggerTaskComponentBase::GetTriggerTaskByIndex(int Index, bool SearchInTemplateTask)
{
	TArray<UTriggerTaskBase*> Tasks;
	
	Tasks.Empty();

	if (SearchInTemplateTask)
	{
		Tasks.Append(TriggerTasks);
	}
	else
	{
		GetAllTriggerTasks(Tasks);
	}

	if (Index >= Tasks.Num() || Index < 0)
	{
		return nullptr;
	}

	return Tasks[Index];
}

UTriggerTaskBase* UTriggerTaskComponentBase::GetTriggerTaskByID(FGuid TaskID, bool SearchInTemplateTask)
{
	TArray<UTriggerTaskBase*> Tasks;

	Tasks.Empty();

	if (SearchInTemplateTask)
	{
		Tasks.Append(TriggerTasks);
	}
	else
	{
		GetAllTriggerTasks(Tasks);
	}

	for (int i = 0; i < Tasks.Num(); i++)
	{
		if (Tasks[i]->GetID() == TaskID)
		{
			return Tasks[i];
		}
	}

	return nullptr;
}

int UTriggerTaskComponentBase::GetTaskIndex(UTriggerTaskBase* Task, bool SearchInTemplateTask)
{
	int Result = -1;

	TArray<UTriggerTaskBase*> Tasks;

	if (SearchInTemplateTask)
	{
		Tasks = TriggerTasks;
	}
	else
	{
		GetAllTriggerTasks(Tasks);
	}

	for (int i = 0; i < Tasks.Num(); i++)
	{
		if (Tasks[i] == Task)
		{
			Result = i;
			break;
		}
	}

	return Result;
}

void UTriggerTaskComponentBase::GetTriggerTaskByClass(TArray<UTriggerTaskBase*>& OutTasks, TSubclassOf<UTriggerTaskBase> TaskClass, bool SearchInConfiguredTask)
{
	OutTasks.Empty();

	TArray<UTriggerTaskBase*> Tasks;

	if (SearchInConfiguredTask)
	{
		Tasks = TriggerTasks;
	}
	else
	{
		GetAllTriggerTasks(Tasks);
	}

	if (*TaskClass == nullptr)
	{
		for (auto Task : Tasks)
		{
			OutTasks.Add(Task);
		}
	}

	for (int i = 0; i < Tasks.Num(); i++)
	{
		if (Tasks[i] == nullptr)
			continue;

		if (Tasks[i]->GetClass() == *TaskClass)
		{
			OutTasks.Add(Tasks[i]);
		}
	}
}

int UTriggerTaskComponentBase::GetTaskIndexByTaskClass(TSubclassOf<UTriggerTaskBase> TaskClass, bool SearchInConfiguredTask)
{
	int Result = -1;

	TArray<UTriggerTaskBase*> Tasks;

	if (SearchInConfiguredTask)
	{
		Tasks = TriggerTasks;
	}
	else
	{
		GetAllTriggerTasks(Tasks);
	}

	for (int i = 0; i < Tasks.Num(); i++)
	{
		if (Tasks[i] == nullptr)
			continue;

		if (Tasks[i]->GetClass() == *TaskClass)
		{
			Result = i;
			break;
		}
	}

	return Result;
}

void UTriggerTaskComponentBase::AddTask(UTriggerTaskBase* Task)
{
	if (Task == nullptr)
		return;

	if (Task->IsTemplateTask())
	{
		TriggerTasks.AddUnique(Task);
	}
	else if (Task->GetReplicateType() == nullptr || Task->GetReplicateType()->CanReplicate())
	{
		ReplicatedTasks.AddUnique(Task);
	}
	else
	{
		UnReplicatedTasks.AddUnique(Task);
	}
}

void UTriggerTaskComponentBase::RemoveTask(UTriggerTaskBase* TriggerTask)
{
	/*
	* The trigger tasks is used for designer to configure in the map and is used as one template task
	for (int i = 0; i < TriggerTasks.Num(); i++)
	{
		if (TriggerTasks[i] == TriggerTask)
		{
			TriggerTasks.RemoveAt(i--);
		}
	}
	*/


	for (int i = 0; i < ReplicatedTasks.Num(); i++)
	{
		if (ReplicatedTasks[i] == TriggerTask)
		{
			ReplicatedTasks.RemoveAt(i--);
		}
	}

	for (int i = 0; i < UnReplicatedTasks.Num(); i++)
	{
		if (UnReplicatedTasks[i] == TriggerTask)
		{
			UnReplicatedTasks.RemoveAt(i--);
		}
	}

}

bool UTriggerTaskComponentBase::DuplicateTaskComponent(UTriggerTaskComponentBase* SourceComponent)
{
	bool Result = false;

	if(SourceComponent == nullptr)
		return Result;

	TArray<uint8> Data;

	FObjectWriter Write(SourceComponent, Data, false, false, false);

	FObjectReader Read(this,Data);

	return Result;
}


int UTriggerTaskComponentBase::AddNewCategory(UTaskComponentCategory* NewCategory, bool CreateCopy)
{
	int Result = INDEX_NONE;

	if(NewCategory == nullptr && !NewCategory->IsValidCategory())
		return Result;

	if (CreateCopy)
	{
		UTaskComponentCategory* NewCategoryCopy = NewObject<UTaskComponentCategory>(this, NewCategory->GetClass(), *NewCategory->GetName(), RF_NoFlags, NewCategory);

		if (NewCategoryCopy != nullptr)
		{
			Result = Categories.Add(NewCategoryCopy);
		}
	}
	else
	{
		Result = Categories.AddUnique(NewCategory);
	}

	return Result;
}

bool UTriggerTaskComponentBase::RemoveCategory(UTaskComponentCategory* OldCategory)
{
	if (OldCategory == nullptr)
	{
		Categories.Empty();
	}

	return Categories.Remove(OldCategory) != INDEX_NONE;
}

bool UTriggerTaskComponentBase::IsChildNodeOfComponent(const UTriggerTaskComponentBase* ParentNode) const
{
	bool Result = false;

	if(ParentNode == nullptr)
		return Result;

	//First check weather the the two component match the category
	for (auto Category : Categories)
	{
		if(Category == nullptr)
			continue;

		for (auto ParentCategory : ParentNode->GetConstCategories())
		{
			if(ParentCategory == nullptr)
				continue;

			if (Category->IsChildCategoryOfTriggerCategory(ParentCategory))
			{
				Result = true;
				break;
			}
		}

		if (Result)
		{
			break;
		}
	}

	//Second if the category is matched then check weather the parent node hold this component as its child node
	if (Result)
	{
		bool ActualContain = false;

		for (auto EventInfo : ParentNode->GetConstEventChains())
		{
			if (IsChildNodeOfEventInfo(EventInfo))
			{
				ActualContain = true;
				break;
			}
		}

		Result = Result && ActualContain;
	}

	return Result;
}

bool UTriggerTaskComponentBase::IsParentNodeOfComponent(const UTriggerTaskComponentBase* ChildNode) const
{
	if(ChildNode == nullptr)
		return false;

	return ChildNode->IsChildNodeOfComponent(this);
}


bool UTriggerTaskComponentBase::IsChildNodeOfEventInfo( const UTriggerEventChainBase* CheckedEventInfo, bool IgnoreDiffentLevel) const
{
	if(CheckedEventInfo == nullptr)
		return false;

	for (auto EventInfo : EventChains)
	{
		if(EventInfo == nullptr)
			continue;

		if(EventInfo->IsChildForEventInfo(CheckedEventInfo, IgnoreDiffentLevel))
			return true;
	}

	return false;
}

bool UTriggerTaskComponentBase::IsParentNodeOfEventInfo(const UTriggerEventChainBase* CheckedEventInfo, bool IgnoreDiffentLevel /* = true */) const
{
	if(CheckedEventInfo == nullptr)
		return false;

	//When the component owner of the event info is not the parent component of this component then return false;
	if (!IsParentNodeOfComponent(CheckedEventInfo->GetComponentOwner()))
		return false;


	for (auto EventChain : EventChains)
	{
		if(EventChain == nullptr)
			continue;

		if (CheckedEventInfo->IsChildForEventInfo(EventChain, IgnoreDiffentLevel))
		{
			return true;
		}
	}

	return false;
}

void UTriggerTaskComponentBase::BeginPlay()
{
	Super::BeginPlay();

	TArray<UTriggerTaskBase*> Tasks;
	GetAllTriggerTasks(Tasks);

	for (auto Task : Tasks)
	{
		if (Task == nullptr)
		{
			UE_LOG(LogTrigger, Error, TEXT("There is one empty value in the trigger task of the TriggerName:%s"), *GetOwner()->GetName());
			continue;
		}
			

		Task->BeginPlay();
	}
}

void UTriggerTaskComponentBase::BeginDestroy()
{
	Super::BeginDestroy();

	UnRegisterTaskComponent();
}

void UTriggerTaskComponentBase::OnComponentCreated()
{
	Super::OnComponentCreated();
}

void UTriggerTaskComponentBase::OnRegister()
{
	Super::OnRegister();

	if (GetName().Find(TEXT("TRASH_")) == INDEX_NONE && GetName().Find(TEXT("REINST_")) == INDEX_NONE && !IsTemplate())
	{
		RegisterTaskComponent();
	}
}

void UTriggerTaskComponentBase::OnUnregister()
{
	Super::OnUnregister();

	if (GetName().Find(TEXT("TRASH_")) == INDEX_NONE && GetName().Find(TEXT("REINST_")) == INDEX_NONE && !IsTemplate())
	{
		UnRegisterTaskComponent();
	}
}

void UTriggerTaskComponentBase::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);
}

void UTriggerTaskComponentBase::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	//if (!HasAnyFlags(RF_BeginDestroyed) && !IsUnreachable() && GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))
	{
		TArray<UTriggerTaskBase*> Tasks;
		GetAllTriggerTasks(Tasks);

		for (auto Task : Tasks)
		{
			if (Task == nullptr || !Task->IsValidLowLevel())
				continue;

			Task->TryToStop();

		}
	}

	UnRegisterTaskComponent();

	Super::EndPlay(EndPlayReason);
}

void UTriggerTaskComponentBase::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	TickTask(DeltaTime);

}

void UTriggerTaskComponentBase::PostInitProperties()
{
	Super::PostInitProperties();

}

#pragma region Net
bool UTriggerTaskComponentBase::IsSupportedForNetworking() const
{
	return Super::IsSupportedForNetworking();
}

void UTriggerTaskComponentBase::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker)
{
	Super::PreReplication(ChangedPropertyTracker);

	TArray<UTriggerTaskBase*> Tasks;
	GetAllTriggerTasks(Tasks);

	for (int i = 0; i < Tasks.Num(); i++)
	{
		if (Tasks[i] == nullptr)
		{
			UE_LOG(LogTrigger, Warning, TEXT("There is one task is null when do PreReplication function in %s"), *GetOwner()->GetName());
			continue;
		}
		Tasks[i]->PreReplication(ChangedPropertyTracker);
	}
}

bool UTriggerTaskComponentBase::ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags)
{
	bool WroteSomething = Super::ReplicateSubobjects(Channel, Bunch, RepFlags);

	//All template should be treat as client Net loaded object and is net stable
	for (int i = 0; i < TriggerTasks.Num(); i++)
	{
		UTriggerTaskBase* Task = TriggerTasks[i];

		if (Task && !Task->IsPendingKill())
		{
			WroteSomething |= Task->ReplicateSubobjects(Channel, Bunch, RepFlags);

			WroteSomething |= Channel->ReplicateSubobject(const_cast<UTriggerTaskBase*>(Task), *Bunch, *RepFlags);
		}
	}

	for (int i = 0; i < ReplicatedTasks.Num(); i++)
	{
		UTriggerTaskBase* Task = ReplicatedTasks[i];

		if (Task && !Task->IsPendingKill())
		{
			WroteSomething |= Task->ReplicateSubobjects(Channel, Bunch, RepFlags);

			WroteSomething |= Channel->ReplicateSubobject(const_cast<UTriggerTaskBase*>(Task), *Bunch, *RepFlags);
		}
	}

	//TODO: just for compile
	return WroteSomething;
}

void UTriggerTaskComponentBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	//DOREPLIFETIME(UTriggerTaskComponentBase, ReplicatedTasks);
}

void UTriggerTaskComponentBase::NetMulti_StartTask_Implementation(const FTriggerTaskRuntimeInfo& RuntimeInfo,bool CanRunOnServer,bool CanRunOnClient)
{
	if (GetTriggerManager() &&
		GetTriggerManager()->GetTriggerTaskManager() &&
		GetTriggerManager()->GetTriggerTaskManager()->GetTriggerTaskRunHelp())
	{
		if (GetNetMode() == ENetMode::NM_Standalone ||
			(CanRunOnServer && (GetNetMode() == ENetMode::NM_DedicatedServer || GetNetMode() == ENetMode::NM_ListenServer)) ||
			(CanRunOnClient && GetNetMode() == ENetMode::NM_Client))
		{
			GetTriggerManager()->GetTriggerTaskManager()->GetTriggerTaskRunHelp()->RunTriggerTaskWithRuntimeInfo(RuntimeInfo);
		}

	}
}

bool UTriggerTaskComponentBase::NetMulti_StartTask_Validate(const FTriggerTaskRuntimeInfo& RuntimeInfo,bool CanRunOnServer,bool CanRunOnClient)
{
	return true;
}

#pragma endregion Net

void UTriggerTaskComponentBase::InitializeComponent()
{
	Super::InitializeComponent();

	RegisterTaskComponent();
}


#if WITH_EDITORONLY_DATA

void UTriggerTaskComponentBase::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	//If this component is temp object do not change anything
	if (GetName().Find(TEXT("TRASH_")) != INDEX_NONE || GetName().Find(TEXT("REINST_")) != INDEX_NONE || IsTemplate())
	{
		return;
	}

	if (FProperty* PropertyThatChanged = PropertyChangedEvent.Property)
	{
		const FName PropertyName = PropertyThatChanged->GetFName();

		if (PropertyName == GET_MEMBER_NAME_CHECKED(UTriggerTaskComponentBase, TriggerTasks) 
			//When add new task I need to initialize it first
			&& PropertyChangedEvent.ChangeType == EPropertyChangeType::ArrayAdd)
		{		
			for (int i = 0;  i < TriggerTasks.Num(); i++)
			{
				if (TriggerTasks[i] != nullptr)
				{
					//These tasks is only be instanced at editor mode
					TriggerTasks[i]->InitializeTask(this, true, false);
				}
			}

			if (TriggerTasks.Num() == 0 && PropertyChangedEvent.ChangeType == EPropertyChangeType::ArrayClear)
			{

			}
		}

		if (PropertyName == GET_MEMBER_NAME_CHECKED(UTriggerTaskComponentBase, Categories))
		{
			for (int i = 0; i < Categories.Num(); i++)
			{
				if (Categories[i] == nullptr)
				{
					continue;
				}

				Categories[i]->InitializeCategory(this);
			}

			//UpdateNextComponentInfo();
		}
	}
}

void UTriggerTaskComponentBase::SelectedInEditor(UObject* Selctor)
{
	for (auto TriggerTask : TriggerTasks)
	{
		if (TriggerTask == nullptr)
			continue;

		TriggerTask->SelectedInEditor(Selctor);
	}
}

#endif