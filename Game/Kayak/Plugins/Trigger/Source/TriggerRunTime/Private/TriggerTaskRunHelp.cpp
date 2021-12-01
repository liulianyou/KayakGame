#include "TriggerTaskRunHelp.h"
#include "TriggerBlueprintLib.h"
#include "TriggerManager.h"
#include "TriggerTaskBase.h"
#include "TriggerConfig.h"
#include "Engine.h"
#include "TriggerTaskComponentBase.h"

UTriggerTaskRunHelp::UTriggerTaskRunHelp(const FObjectInitializer& ObjectInitialzier)
	:Super(ObjectInitialzier)
{
	
}

void UTriggerTaskRunHelp::InitializeTriggerTaskRunHelp()
{
	TriggerMapLoad.BindDynamic(this, &UTriggerTaskRunHelp::NewMapLoaded);
	FWorldDelegates::OnWorldBeginTearDown.AddUObject(this, &UTriggerTaskRunHelp::WorldTearDownCallback);
}

void UTriggerTaskRunHelp::RunTriggerTask( UTriggerTaskComponentBase* SenderComponent, UTriggerTaskBase* SenderTask,
	UTriggerTaskComponentBase* TargetComponent, UTriggerTaskBase* TargetTask,
	UOperationInformationBase* StartOperationInfo)
{
	if(SenderComponent == nullptr || TargetComponent == nullptr)
		return;

	FTriggerTaskRuntimeInfo RuntimeInfo;

	RuntimeInfo.ToggleInformation = StartOperationInfo;

	RuntimeInfo.SendComponentID = SenderComponent == nullptr ? FGuid() : SenderComponent->GetComponentID();

	RuntimeInfo.SendTaskID = SenderTask == nullptr ? FGuid() : SenderTask->GetID();

	RuntimeInfo.TargetComponentID = TargetComponent == nullptr ? FGuid() : TargetComponent->GetComponentID();

	RuntimeInfo.TargetTaskID = TargetTask == nullptr ? FGuid() : TargetTask->GetID();

	ULevel* Level = SenderComponent->GetTypedOuter<ULevel>();
	RuntimeInfo.SendMapAssetPath = Level->GetOutermost()->GetName();
	RuntimeInfo.SendComponentMap = Level == nullptr ? TEXT("") : Level->GetOuter()->GetName();

	Level = TargetComponent->GetTypedOuter<ULevel>();
	RuntimeInfo.TargetMapAssetPath = Level->GetOutermost()->GetName();
	RuntimeInfo.TargetComponentMap = Level == nullptr ? TEXT("") : Level->GetOuter()->GetName();

	RunTriggerTaskWithRuntimeInfo(RuntimeInfo);

}


void UTriggerTaskRunHelp::RunTriggerTaskByTaskIndex( UTriggerTaskComponentBase* SenderComponent, int SenderTaskIndex,
	UTriggerTaskComponentBase* TargetComponent, int TargetTaskIndex,
	UOperationInformationBase* StartOperationInfo)
{
	if (SenderComponent == nullptr || TargetComponent == nullptr)
		return;

	FTriggerTaskRuntimeInfo RuntimeInfo;

	RuntimeInfo.ToggleInformation = StartOperationInfo;

	RuntimeInfo.SendComponentID = SenderComponent->GetComponentID();

	UTriggerTaskBase* Task = SenderComponent == nullptr ? nullptr : SenderComponent->GetTriggerTaskByIndex(SenderTaskIndex);
	RuntimeInfo.SendTaskID = Task == nullptr ? FGuid() : Task->GetID();

	RuntimeInfo.TargetComponentID = TargetComponent->GetComponentID();

	Task = TargetComponent == nullptr ? nullptr : TargetComponent->GetTriggerTaskByIndex(TargetTaskIndex);
	RuntimeInfo.TargetTaskID = Task == nullptr ? FGuid() : Task->GetID();

	ULevel* Level = SenderComponent->GetTypedOuter<ULevel>();
	RuntimeInfo.SendMapAssetPath = Level->GetOutermost()->GetName();
	RuntimeInfo.SendComponentMap = Level == nullptr ? TEXT("") : Level->GetOuter()->GetName();

	Level = TargetComponent->GetTypedOuter<ULevel>();
	RuntimeInfo.TargetMapAssetPath = Level->GetOutermost()->GetName();
	RuntimeInfo.TargetComponentMap = Level == nullptr ? TEXT("") : Level->GetOuter()->GetName();

	RunTriggerTaskWithRuntimeInfo(RuntimeInfo);
}

void UTriggerTaskRunHelp::RunTriggerTaskByID(
	const FString& SendMapAssetPath, const FString& SendMapName, const FGuid& SenderComponentID, const FGuid& SenderTaskID,
	const FString& TargetMapAssetPath, const FString& TargetMapName, const FGuid& TargetComponentID, const FGuid& TargetTaskID,
	const UOperationInformationBase* StartOperationInfo)
{
	FTriggerTaskRuntimeInfo RuntimeInfo;

	RuntimeInfo.ToggleInformation = const_cast<UOperationInformationBase*>(StartOperationInfo);

	RuntimeInfo.SendComponentID = SenderComponentID;

	RuntimeInfo.SendTaskID = SenderTaskID;

	RuntimeInfo.TargetComponentID = TargetComponentID;

	RuntimeInfo.TargetTaskID = TargetTaskID;

	RuntimeInfo.SendMapAssetPath = SendMapAssetPath;
	RuntimeInfo.SendComponentMap = SendMapName;
	RuntimeInfo.TargetMapAssetPath = TargetMapAssetPath;
	RuntimeInfo.TargetComponentMap = TargetMapName;

	RunTriggerTaskWithRuntimeInfo(RuntimeInfo);
}


void UTriggerTaskRunHelp::TryToRemovePendingRuntimeInfo(FGuid ID)
{
	if(!ID.IsValid())
		return;

	for (int i = 0; i < PendingTriggerRuntimeInfos.Num(); i++)
	{
		if (PendingTriggerRuntimeInfos[i].RuntimeInfo.SendComponentID == ID || 
			PendingTriggerRuntimeInfos[i].RuntimeInfo.SendTaskID == ID ||
			PendingTriggerRuntimeInfos[i].RuntimeInfo.TargetComponentID == ID ||
			PendingTriggerRuntimeInfos[i].RuntimeInfo.TargetTaskID == ID )
		{
			PendingTriggerRuntimeInfos.RemoveAt(i--);
		}
	}
}


bool UTriggerTaskRunHelp::TriggerMapHaseBeenLoaded(FPendingTriggerTaskRuntimeInfo& PendingInfo)
{
	bool Result = true;

	UTriggerConfig* TriggerConfig = UTriggerConfig::StaticClass()->GetDefaultObject<UTriggerConfig>();

	//There is not another trigger map need to be considered
	if (TriggerConfig != nullptr &&
		!TriggerConfig->CanDivideComponentToAnotherMap)
	{
		return Result;
	}

	enum EComponentIDValidation
	{
		//The component ID is invalid
		Invalid,
		//The map who own the component with this ID need to be loaded
		NeedToLoadNewMap,
		//We can use this component ID safely
		Valid
	};

	auto CheckComponentIDValidation = [&](const FGuid& ComponentID, const FString& MapName) -> EComponentIDValidation {

		EComponentIDValidation LocalResult;

		if (!ComponentID.IsValid())
		{
			LocalResult = EComponentIDValidation::Invalid;
		}
		else
		{
			TArray<UTriggerTaskComponentBase*> AllComponents;

			UTriggerBlueprintLib::GetTriggerManager()->GetTriggerController()->GetAllTriggerComponentsByID(AllComponents, PendingInfo.RuntimeInfo.SendComponentID);

			bool HasVaildComponent = false;

			for (auto Component : AllComponents)
			{
				if (Component != nullptr  && Component->GetTypedOuter<ULevel>()->GetOuter() != nullptr
					&& Component->GetTypedOuter<ULevel>()->GetOuter()->GetName() == MapName 
					&& Component->GetWorld() == PendingInfo.RuntimeInfo.World
				)
				{
					HasVaildComponent = true;
				}
			}

			if (HasVaildComponent)
			{
				LocalResult = EComponentIDValidation::Valid;
			}
			else
			{
				LocalResult = EComponentIDValidation::NeedToLoadNewMap;
			}
		}

		return LocalResult;
	};

	EComponentIDValidation SendComponentValidation = CheckComponentIDValidation(PendingInfo.RuntimeInfo.SendComponentID, PendingInfo.RuntimeInfo.SendComponentMap);
	EComponentIDValidation TargetComponentValidation = CheckComponentIDValidation(PendingInfo.RuntimeInfo.TargetComponentID, PendingInfo.RuntimeInfo.TargetComponentMap);

	if (SendComponentValidation == EComponentIDValidation::Valid)
	{
		PendingInfo.SendComponentMapLoaded = true;
	}

	if (TargetComponentValidation == EComponentIDValidation::Valid)
	{
		PendingInfo.TargetComponentMapLoaded = true;
	}

	auto LoadNewMap = [&](const FString& MapName, const FGuid& ComponentID, const FString& MapAssetPath) {
		FTriggerTaskComponentInformation ComponentInfo;
		ComponentInfo.MapName = MapName;
		ComponentInfo.ComponentIDs.Add(ComponentID);

		UTriggerBlueprintLib::GetTriggerManager()->TryToLoadNewTriggerMap(MapAssetPath, ComponentInfo, TriggerMapLoad, PendingInfo.RuntimeInfo.World);
	};

	if (!PendingInfo.SendComponentMapLoaded)
	{
		LoadNewMap(PendingInfo.RuntimeInfo.SendComponentMap, PendingInfo.RuntimeInfo.SendComponentID, PendingInfo.RuntimeInfo.SendMapAssetPath);

		Result = false;
	}

	if (!PendingInfo.TargetComponentMapLoaded)
	{
		LoadNewMap(PendingInfo.RuntimeInfo.TargetComponentMap, PendingInfo.RuntimeInfo.TargetComponentID, PendingInfo.RuntimeInfo.TargetMapAssetPath);
		Result = false;
	}

	return Result;
}

void UTriggerTaskRunHelp::RunTriggerTaskWithRuntimeInfo(const FTriggerTaskRuntimeInfo& RuntimeInfo)
{
	FPendingTriggerTaskRuntimeInfo PendingInfo;
	PendingInfo.RuntimeInfo = RuntimeInfo;

	if (!TriggerMapHaseBeenLoaded(PendingInfo))
	{
		PendingTriggerRuntimeInfos.Add(PendingInfo);
	}
	else
	{
		RunTriggerTaskInternal(RuntimeInfo);
	}
}

void UTriggerTaskRunHelp::RunTriggerTaskInternal(const FTriggerTaskRuntimeInfo& RuntimeInfo)
{
	if (UTriggerBlueprintLib::GetTriggerManager()
		&& UTriggerBlueprintLib::GetTriggerManager()->GetTriggerController())
	{
		TArray<UTriggerTaskComponentBase*> SendComponents;

		UTriggerBlueprintLib::GetTriggerManager()->GetTriggerController()->GetAllTriggerComponentsByID(SendComponents, RuntimeInfo.SendComponentID);

		for (auto SendComponent : SendComponents)
		{
			if (SendComponent == nullptr ||
				SendComponent->GetTypedOuter<ULevel>()->GetOuter()->GetName() != RuntimeInfo.SendComponentMap ||
				SendComponent->GetWorld() != RuntimeInfo.World )
				continue;

			TArray<UTriggerTaskComponentBase*> TargetComponents;

			UTriggerBlueprintLib::GetTriggerManager()->GetTriggerController()->GetAllTriggerComponentsByID(TargetComponents, RuntimeInfo.TargetComponentID);

			UTriggerTaskBase* SenerTask = SendComponent->GetTriggerTaskByID(RuntimeInfo.SendTaskID);

			for (auto TargetComponent : TargetComponents)
			{
				if (TargetComponent == nullptr ||
					TargetComponent->GetTypedOuter<ULevel>()->GetOuter()->GetName() != RuntimeInfo.TargetComponentMap ||
					TargetComponent->GetWorld() != RuntimeInfo.World)
					continue;

				UTriggerTaskBase* TargetTask = TargetComponent->GetTriggerTaskByID(RuntimeInfo.TargetTaskID);

				if (TargetTask == nullptr)
				{
					TArray<UTriggerTaskBase*> Tasks;

					TargetComponent->GetAllTriggerTasks(Tasks);

					for (auto Task : Tasks)
					{
						if(Task == nullptr)
							continue;

						SendComponent->TransfereTaskToTargetTask(SenerTask, Task, RuntimeInfo.ToggleInformation);
					}
				}
				else
				{
					SendComponent->TransfereTaskToTargetTask(SenerTask, TargetTask, RuntimeInfo.ToggleInformation);
				}
			}
		}
	}
}

void UTriggerTaskRunHelp::NewMapLoaded(FString MapName)
{
	for (int i = 0; i < PendingTriggerRuntimeInfos.Num(); i++)
	{
		if (PendingTriggerRuntimeInfos[i].RuntimeInfo.SendComponentMap == MapName)
		{
			PendingTriggerRuntimeInfos[i].SendComponentMapLoaded = true;
		}

		if (PendingTriggerRuntimeInfos[i].RuntimeInfo.TargetComponentMap == MapName)
		{
			PendingTriggerRuntimeInfos[i].TargetComponentMapLoaded = true;
		}

		//If all the related map have been loaded then run the target task
		if (PendingTriggerRuntimeInfos[i].TargetComponentMapLoaded && PendingTriggerRuntimeInfos[i].SendComponentMapLoaded)
		{
			FTriggerTaskRuntimeInfo RuntimeInfo = PendingTriggerRuntimeInfos[i].RuntimeInfo;

			PendingTriggerRuntimeInfos.RemoveAt(i--);

			RunTriggerTaskWithRuntimeInfo(RuntimeInfo);
		}
	}
}

void UTriggerTaskRunHelp::WorldTearDownCallback(UWorld* World)
{
	if(World == nullptr)
		return;

	PendingTriggerRuntimeInfos.Empty();
}