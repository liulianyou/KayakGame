#include "TT_AISpawnBase.h"

#include "Engine/World.h"
#include "TimerManager.h"
#include "EngineUtils.h"
#include "BehaviorTree/BehaviorTree.h"

#include "Editor/AI/AIPreviewCharacter.h"

#include "AIFinishConditionBase.h"
#include "AISpawnDataBase.h"
#include "TriggerTaskComponentBase.h"
#include "TriggerTaskResetInformationBase.h"

#if WITH_EDITORONLY_DATA
#include "Editor.h"
#endif


UTT_AISpawnBase::UTT_AISpawnBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	//Default value is false it will be changed when this task active
	CanEverTick = false;

#if WITH_EDITORONLY_DATA
	if (!HasAnyFlags(RF_ClassDefaultObject))
	{
		//FEditorDelegates::MapChange.AddUObject(this, &UTT_AISpawnBase::OnEndLoadMap);
		//FCoreUObjectDelegates::PostLoadMapWithWorld.AddUObject(this, &UTT_AISpawnBase::OnEndLoadMapInGame);

		//FWorldDelegates::LevelAddedToWorld.AddUObject(this, &UTT_AISpawnBase::OnLevelChangedInWorld);
		//FWorldDelegates::LevelRemovedFromWorld.AddUObject(this, &UTT_AISpawnBase::OnLevelChangedInWorld);
	}
#endif
	
	//It should only run on the server by default when in server/client mode
	RunType = ERunType::ERunType_RunOnServer;


}


void UTT_AISpawnBase::InitializeTask(UTriggerTaskComponentBase* Owner, bool AsTemplate, bool IsDynamicTask)
{
	Super::InitializeTask(Owner, AsTemplate, IsDynamicTask);

	if (AIFinishedCondition != nullptr)
	{
		AIFinishedCondition->NativeInitialize(this);
	}

	if(AISpawnData != nullptr)
		AISpawnData->InitData(this);
}

void UTT_AISpawnBase::Register()
{
	Super::Register();
}

void UTT_AISpawnBase::UnRegister()
{
#if WITH_EDITOR
	if (AISpawnData != nullptr)
		AISpawnData->ClearEditorInformaiton();
#endif

	Super::UnRegister();
}



bool UTT_AISpawnBase::Prepare()
{
	if(!Super::Prepare())
		return false;

	//Before active this task I need to reset its local variable so that its environment is clear.
	ResetLocalValues();

	Active();

	return true;
}

void UTT_AISpawnBase::Active(bool ForceActive )
{
	Super::Active(ForceActive);

	CanEverTick = true;
}

void UTT_AISpawnBase::Finished(UOperationInformationBase* FinishOperationInfo)
{
	Super::Finished(FinishOperationInfo);
}

void UTT_AISpawnBase::Pause(UOperationInformationBase* PauseOperationInfo)
{
	Super::Pause(PauseOperationInfo);
}

void UTT_AISpawnBase::Resume(UOperationInformationBase* ResumeOperationInfo)
{
	Super::Resume(ResumeOperationInfo);
}

void UTT_AISpawnBase::Skip(UOperationInformationBase* SkipOperationInfo)
{
	Super::Skip(SkipOperationInfo);
}

void UTT_AISpawnBase::PostFinished()
{
	Super::PostFinished();

	UE_LOG(LogTrigger, Warning, TEXT("Total number of AI have been spawned by Task:%s is %d"), *GetTriggerOwner()->GetOwner()->GetName(), Debug_SpawnedAICount);
}

void UTT_AISpawnBase::Reset(UOperationInformationBase* Operation /*= nullptr*/)
{
	Super::Reset(Operation);

	UTriggerTaskResetInformationBase* ResetInformation = Cast<UTriggerTaskResetInformationBase>(Operation);

	if (ResetInformation)
	{
		if (EnumHasAnyFlags(ResetInformation->ResetType, ETriggerTaskResetType::ETriggerTaskResetType_ResetContent))
		{
			ResetContentEffect();
		}

		if (EnumHasAnyFlags(ResetInformation->ResetType, ETriggerTaskResetType::ETriggerTaskResetType_ClearData))
		{
			ResetLocalValues();
		}
	}
}

bool UTT_AISpawnBase::CanTick()
{
	bool Result = Super::CanTick();

	return Result;
}

void UTT_AISpawnBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	StartToCreateNewAI(DeltaTime);
}

bool UTT_AISpawnBase::ReceiveNotifyFromOthersComponent(UTriggerTaskComponentBase* OtherComponent, UTriggerTaskBase* SenderTask, UOperationInformationBase* StartOperationInfo)
{
	bool Result = Super::ReceiveNotifyFromOthersComponent(OtherComponent, SenderTask, StartOperationInfo);

	if(!Result)
		return false;

	Prepare();

	return Result;
}

bool UTT_AISpawnBase::CanBeToggled()
{
	bool Result = Super::CanBeToggled();

	return Result;
}

void UTT_AISpawnBase::TryToStop(UOperationInformationBase* Causer /* = nullptr */)
{
	Super::TryToStop(Causer);

	CanEverTick = false;

	if (AISpawnData)
	{
		AISpawnData->Reset(ETriggerTaskResetType::ETriggerTaskResetType_ClearData);
	}
}

void UTT_AISpawnBase::TryToSleep(UOperationInformationBase* Causer /* = nullptr */)
{
	/*
	* If the data still have some external AIs to spawn then do not go into sleep state, as the sleep state will not tick
	*/
	if (AISpawnData && CheckRunTimeType())
	{
		if (AISpawnData->CanStopSpawnAI()) 
		{
			Super::TryToSleep(Causer);
		}
	}
	else
	{
		Super::TryToSleep(Causer);
	}
}

void UTT_AISpawnBase::OnActorDestoryCallback(AActor* DestroyedActor)
{
	if(AISpawnData == nullptr)
		return;

	AISpawnData->ControllerDeadOrDestroyedCallback(true, Cast<AAIController>(DestroyedActor));
}


void UTT_AISpawnBase::AddAIDeadDelegate(AAIController* Controller)
{
	if(Controller == nullptr)
		return;

	if (Controller->GetClass()->ImplementsInterface(UAISpawnSupportInterface::StaticClass()))
	{
		IAISpawnSupportInterface* AISpawnSupport = Cast<IAISpawnSupportInterface>(Controller);

		if (AISpawnSupport == nullptr)
		{
			
		}
		else
		{
			AISpawnSupport->AICharacterDeadHandle = AISpawnSupport->OnAICharacterDead.AddUObject(this, &UTT_AISpawnBase::OnActorDestoryCallback);
		}

	}
}

void UTT_AISpawnBase::StartToCreateNewAI(float DeltaTime)
{
	bool StopSpawn = false;
	bool SkipCurrentSapwn = false;
	TArray<FAIInfo> AIInfos;

	AISpawnData->GetCurrentVaildAIInfoToSpawn(DeltaTime, AIInfos, StopSpawn, SkipCurrentSapwn);

	if ((AIFinishedCondition != nullptr && AIFinishedCondition->Evaluator()))
	{
		ResetLocalValues();

		Finished();

		return;
	}

	Debug_SpawnedAICount += AIInfos.Num();

	for (int i = 0; i < AIInfos.Num(); i++)
	{
		APawn* NewPawn;
		AAIController* Controller = AISpawnData->CreateNewAI(AIInfos[i], NewPawn);

		AISpawnData->SpawnAIPostProcess(Controller, NewPawn, AIInfos[i]);

		AddAIDeadDelegate(Controller);
	}
	
	if (StopSpawn)
	{
		Finished();
	}
}

void UTT_AISpawnBase::ResetLocalValues()
{
	if(AIFinishedCondition)
		AIFinishedCondition->BP_Reset();

	if(AISpawnData)
		AISpawnData->Reset(ETriggerTaskResetType::ETriggerTaskResetType_ClearData);

	CanEverTick = false;
}

void UTT_AISpawnBase::ResetContentEffect()
{
	if (AISpawnData)
		AISpawnData->Reset(ETriggerTaskResetType::ETriggerTaskResetType_ResetContent);
}

#if WITH_EDITORONLY_DATA

void UTT_AISpawnBase::SelectedInEditor(UObject* SelectedActor)
{
	Super::SelectedInEditor(SelectedActor);

	if (AISpawnData != nullptr)
	{
		AISpawnData->SelectedInEditor(SelectedActor);
	}
}

void UTT_AISpawnBase::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	
}

void UTT_AISpawnBase::OnEndLoadMap(uint32 Flag)
{
	ClearWorldInformation();
}

void UTT_AISpawnBase::OnEndLoadMapInGame(UWorld* LoadedWorld)
{
	ClearWorldInformation(nullptr, LoadedWorld);
}

void UTT_AISpawnBase::OnLevelChangedInWorld(ULevel* Level, UWorld* World)
{
	ClearWorldInformation(Level, World);
}

void UTT_AISpawnBase::ClearWorldInformation(ULevel* Level /* = nullptr */, UWorld* World /* = nullptr */)
{
	if(AISpawnData != nullptr)
		AISpawnData->ClearEditorInformaiton();
}

#endif

