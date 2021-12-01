#include "TT_Respawn.h"
#include "TriggerTaskComponent.h"
#include "TriggerManager.h"
#include "TriggerTaskManager.h"
#include "RespawnPostProcess/RespawnPostProcessBase.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Character.h"
#include "AIModule/Classes/AIController.h"
#include "TriggerDefinition.h"
#include "TriggerTaskStartInformationBase.h"
#include "EvaluatorOperation.h"
#include "EvaluatorDataForRespawnPoint.h"
#include "CheckTaskRepeatWithNum.h"
#include "TriggerEvaluator_OR.h"
#include "RespawnData/RespawnTaskGroupData.h"
#include "Engine/World.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/PlayerController.h"
#include "TTSS_AnyConditionMeet.h"
#include "TriggerTaskStopCommonOperationInfos.h"

UTT_Respawn::UTT_Respawn(const FObjectInitializer& ObjectInitializer):
	Super(ObjectInitializer)
{
	CanEverTick = false;

	RunType = ERunType::ERunType_RunOnServer;
	ExecuteAutomatically = true;
	TransferType = ETaskTransferType::ETaskTransferType_Notify;
	RespawnType = ERespawnType::ERespawnType_UseOldPawn;

	PendingToRespawn.Empty();
}


void UTT_Respawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	//DOREPLIFETIME(UTT_Respawn, RespawnInfo);
}

void UTT_Respawn::BeginDestroy()
{
	Super::BeginDestroy();

	if (RespawnTemplateData)
	{
		RespawnTemplateData->Reset(nullptr);
	}
}

void UTT_Respawn::InitializeTask(UTriggerTaskComponentBase* Owner, bool AsTemplate, bool IsDynamicTask)
{
	Super::InitializeTask(Owner, AsTemplate, IsDynamicTask);

	//By default the respawn task can be reactivated for infinity times
	if (GetRepeatConditions() == nullptr)
	{
		SetRepeatConditions(NewObject<UTTSS_AnyConditionMeet>(this));

		UTriggerEvaluator_OR* Operator = NewObject<UTriggerEvaluator_OR>(this, UTriggerEvaluator_OR::StaticClass());
		UCheckTaskRepeatWithNum* NewCondition = NewObject<UCheckTaskRepeatWithNum>(this, UCheckTaskRepeatWithNum::StaticClass());
		Operator->Condtions.Add(NewCondition);

		if (NewCondition != nullptr)
		{
			NewCondition->RepeatTaskData.MaxCount = -1;
			NewCondition->RepeatTaskData.State = ETriggerTaskState::ETriggerTaskState_Finished;
			NewCondition->RepeatTaskData.TriggerTask.SoftTaskObject = this;
			NewCondition->RepeatTaskData.TriggerTask.UpdateTriggerTask();
		}

		GetRepeatConditions()->AddNewConditionAndStyle(Operator, nullptr);
	}

	if (CanExecuteAutomatically() && CanBeToggled())
	{
		RegisterPotentialRespawnedPawn();
	}

	if (RespawnTemplateData != nullptr)
	{
		RespawnTemplateData->InitializeData(this);
	}
}

bool UTT_Respawn::Prepare()
{
	if(!Super::Prepare()) 
		return false;

	return true;

}

void UTT_Respawn::Active(bool ForceActive)
{
	if (PendingToRespawn.Num() == 0)
		return;

	Super::Active();

	if (RespawnTemplateData != nullptr)
	{
		RespawnTemplateData->GetRespawnInfo(PendingToRespawn);
	}

	/*
	* The follow code is used to make sure the this task still work when the designer do not assign this value
	*/
	struct FRespawnTransformInfo
	{
		FVector Location;
		FRotator Rotation;
	};

	TArray<FRespawnTransformInfo> Transfroms;

	for (int i = 0; i < PendingToRespawn.Num(); i++)
	{
		FRespawnTransformInfo T;

		T.Location = GetSpawnPosition(PendingToRespawn[i]);
		T.Rotation = GetSpawnRotation(PendingToRespawn[i]);

		Transfroms.Add(T);
	}

	for (int i = 0; i < PendingToRespawn.Num(); i++)
	{
		ACharacter* Pawn = Cast<ACharacter>(PendingToRespawn[i].OldPawn);

		if(Pawn == nullptr)
			continue;

		if (!Pawn->GetClass()->ImplementsInterface(UDeadSupportInterface::StaticClass()))
			continue;

		//Remove the original pawns in the toggled pawns array
		RemoveToggledPawn(Pawn);

		//Create new pawn
		{
			ACharacter* Character = Cast<ACharacter>(Pawn);

			if (!Character) 
				continue;

			APlayerController* AC = Cast<APlayerController>(Character->GetController());

			if (AC == nullptr)
				continue;

			ACharacter* NewCharacter = nullptr;

			if (RespawnType == ERespawnType::ERespawnType_UseOldPawn)
			{
				NewCharacter = Cast<ACharacter>(Character);

				FTransform CharacterNewTransform;
				CharacterNewTransform.SetLocation(Transfroms[i].Location);
				CharacterNewTransform.SetRotation(Transfroms[i].Rotation.Quaternion());
				SetCharacterTransform(NewCharacter, CharacterNewTransform);
				//NewCharacter->SetActorLocation(Transfroms[i].Location);
				//NewCharacter->SetActorRotation(Transfroms[i].Rotation);
			}
			else
			{
				FActorSpawnParameters SpawnParameters;
				SpawnParameters.bNoFail = true;
				SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

				if (RespawnType == ERespawnType::ERespawnType_SpawnCopyPawn)
				{
					SpawnParameters.Template = Character;
				}

				NewCharacter = GetWorld()->SpawnActor<ACharacter>(Character->GetClass(), Transfroms[i].Location, Transfroms[i].Rotation, SpawnParameters);
			}

			if (!NewCharacter->GetClass()->ImplementsInterface(UDeadSupportInterface::StaticClass()))
			{
				return;
			}

			//Make this respawn task to inspect the new character's dead event
			CheckPawnDeadHandCallBack(Pawn);

			//Something wrong we should do some action in the feature
			if (NewCharacter == nullptr) 
				continue;;

			FTriggerDelegate::OnReset.Broadcast(AC);

			AC->Possess(NewCharacter);

			UpdateSpawnedCount(AC, NewCharacter, RespawnInfo);

			for (auto PostProcess : PendingToRespawn[i].PostProcess)
			{
				PostProcess->ApplayPostProcess(Character, NewCharacter);
			}

			RespawnNewPawn(Character, NewCharacter, RespawnType);

			FTriggerDelegate::RespawnFinishEvent.Broadcast(Character, NewCharacter, RespawnType);

			//Add new character to the pawn pool
			AddNewToggledPawn(NewCharacter);
		}
	}

	Finished();
}

void UTT_Respawn::Finished(UOperationInformationBase* FinishOperationInfo)
{
	Super::Finished(FinishOperationInfo);

	PendingToRespawn.Empty();
}

void UTT_Respawn::PostFinished() 
{
	Super::PostFinished();
}

void UTT_Respawn::TryToSleep(UOperationInformationBase* SleepOperationInfo /* = nullptr */)
{
	if (SleepOperationInfo != nullptr)
	{
		TArray<FOperationScope> OuterScopes;
		SleepOperationInfo->FindOperationScope(OuterScopes);

		TArray<UObject*> Causers;

		for (int i = 0; i < OuterScopes.Num(); i++)
		{
			Causers.Add(OuterScopes[i].Causer);
		}

		if (Causers.Num() != 0)
		{
			/*
			* When the function is called by the respawn task means the information of player is moved to the causer
			*/
			UTT_Respawn* RespawnTask = Cast<UTT_Respawn>(Causers[0]);

			if (RespawnTask != nullptr)
			{
				ClearInfo(Causers[0]);
			}
		}
	}

	Super::TryToSleep(SleepOperationInfo);
}

void UTT_Respawn::TryToStop( UOperationInformationBase* StopOerpationInfo )
{
	if (StopOerpationInfo != nullptr)
	{
		TArray<FOperationScope> OuterScopes;
		StopOerpationInfo->FindOperationScope(OuterScopes);

		TArray<UObject*> Causers;

		for (int i = 0; i < OuterScopes.Num(); i++)
		{
			Causers.Add(OuterScopes[i].Causer);
		}

		if (Causers.Num() != 0)
		{
			//For now I just consider the first element.
			ClearInfo(Causers[0]);
		}
	}

	Super::TryToStop(StopOerpationInfo);
}

void UTT_Respawn::Reset(UOperationInformationBase* Operation /*= nullptr*/)
{
	Super::Reset(Operation);

	RespawnInfo.Reset();

	PendingToRespawn.Empty();

	if (RespawnTemplateData)
		RespawnTemplateData->Reset(Operation);

}

bool UTT_Respawn::CanTick()
{
	bool Result = Super::CanTick();

	//When the still some pawns have none player controller, I need this task to tick to get the right player
	if (Result == false && DeferredProcessPawns.Num() != 0 && CheckRunTimeType())
	{
		Result = true;
	}

	return Result;
}


void UTT_Respawn::Tick(float DeltaTime) 
{
	Super::Tick(DeltaTime);
	
	//when there is no differed process pawns we should close tick 
	if (DeferredProcessPawns.Num() == 0)
	{
		CanEverTick = false;
		return;
	}

	//As the us4 container do not support remove the element when is still interacting.
	TArray<APawn*> CopyArray = DeferredProcessPawns;

	//for (int Index = 0; Index < CopyArray.Num(); ++Index)
	for(auto It = CopyArray.CreateIterator(); It; ++It)
	{
		if ((*It) == nullptr || !(*It)->IsValidLowLevel())
		{
			DeferredProcessPawns.Remove(*It);
			continue;
		}

		AController* Controller = /*CopyArray[Index]*/(*It)->GetController();

		if (Controller != nullptr && Controller->IsValidLowLevel())
		{
			APlayerController* PlayerController = Cast<APlayerController>(Controller);

			if (PlayerController != nullptr)
			{
				CheckRespawnInfoData(RespawnInfo, PlayerController,/* CopyArray[Index]*/(*It)->GetClass());
			}

			//No matter which controller the pawn own we should remove form the deferred process array
			DeferredProcessPawns.Remove(*It);
		}
	}

}

void UTT_Respawn::ClearInfo(UObject* Causer)
{
	auto RemoveConfirmedDeadDelegate = [&](APawn* Pawn) {

		for (int i = 0; i < ToggledPawns.Num(); i++)
		{
			if (ToggledPawns[i].Pawn == Pawn)
			{
				if (ToggledPawns[i].Pawn->GetClass()->ImplementsInterface(UDeadSupportInterface::StaticClass()))
				{
					if (ToggledPawns[i].ConfirmedDeadHandle.IsValid())
					{
						IDeadSupportInterface* RespawnSupport = Cast<IDeadSupportInterface>(Pawn);

						if (RespawnSupport)
						{
							RespawnSupport->OnCharacterConfirmDead.Remove(ToggledPawns[i].ConfirmedDeadHandle);
							ToggledPawns[i].ConfirmedDeadHandle.Reset();
						}
					}
				}
			}
		}
	};

	if(Causer == nullptr)
		return;

	UTT_Respawn* RespawnTask = Cast<UTT_Respawn>(Causer);

	//If the cause is the other respawn task then just remove all toggled pawns which also in the causer
	if (RespawnTask != nullptr)
	{
		//Clear the dead callback for the same pawns between this task and causer
		for (int i = 0; i < RespawnTask->ToggledPawns.Num(); i++)
		{
			{
				for (auto It = DeferredProcessPawns.CreateIterator(); It; ++It)
				{
					if (*It == RespawnTask->ToggledPawns[i].Pawn)
					{
						RemoveConfirmedDeadDelegate(*It);
					}

					DeferredProcessPawns.Remove(RespawnTask->ToggledPawns[i].Pawn);
				}

				//Clear all events for target controller
				for (auto Iterator = RespawnInfo.ControllerData.CreateIterator(); Iterator; ++Iterator)
				{
					APlayerController* Controller = Iterator.Key();

					if (Controller == nullptr) continue;

					if (Controller->GetPawn() == RespawnTask->ToggledPawns[i].Pawn)
					{
						if (Controller->GetOnNewPawnNotifier().IsBoundToObject(this))
						{
							Controller->GetOnNewPawnNotifier().Remove(Iterator.Value().SpawnNewPawnHandle);
							Iterator.Value().SpawnNewPawnHandle.Reset();
						}

						RemoveConfirmedDeadDelegate(Controller->GetPawn());
					}
				}

				int index = FindToggledPawnIndex(RespawnTask->ToggledPawns[i].Pawn);

				if (index != INDEX_NONE)
				{
					FDelegateHandle InvaildHandle;
					InvaildHandle.Reset();
					//When toggle other trigger we should make sure the other spawn task will not have the new pawn listener
					UpdateControllerNewPawnEventHandle(Cast<APlayerController>(RespawnTask->ToggledPawns[i].Pawn->GetController()), Cast<ACharacter>(RespawnTask->ToggledPawns[i].Pawn), RespawnInfo, InvaildHandle);

					RemoveToggledPawn(RespawnTask->ToggledPawns[i].Pawn);
				}
			}
		}
	}
	else
	{
		//Clear all other ActorSpawn handle in the world
		if (ActorSpawnHandle.IsValid())
		{
			if (GetWorld() != nullptr)
			{
				GetWorld()->RemoveOnActorSpawnedHandler(ActorSpawnHandle);
			}

			ActorSpawnHandle.Reset();
		}

		//Clear all events for target controller
		for (auto Iterator = RespawnInfo.ControllerData.CreateIterator(); Iterator; ++Iterator)
		{
			APlayerController* Controller = Iterator.Key();

			if (Controller == nullptr) continue;

			if (Controller->GetOnNewPawnNotifier().IsBoundToObject(this))
			{
				Controller->GetOnNewPawnNotifier().Remove(Iterator.Value().SpawnNewPawnHandle);
				Iterator.Value().SpawnNewPawnHandle.Reset();
			}

			RemoveConfirmedDeadDelegate(Controller->GetPawn());
		}

		for (auto It = DeferredProcessPawns.CreateIterator(); It; ++It)
		{
			if (*It != nullptr)
			{
				RemoveConfirmedDeadDelegate(*It);
			}
		}

		DeferredProcessPawns.Empty();
	}
}

void UTT_Respawn::RemoveToggledPawn(APawn* Pawn)
{
	if (Pawn == nullptr)
		return;

	for (int i = 0; i < ToggledPawns.Num(); i++)
	{
		if (ToggledPawns[i].Pawn == Pawn)
		{
			if (Pawn->OnDestroyed.IsAlreadyBound(this, &UTT_Respawn::ActorDestroyedEvent))
			{
				Pawn->OnDestroyed.RemoveDynamic(this, &UTT_Respawn::ActorDestroyedEvent);
			}

			IDeadSupportInterface* Support = Cast<IDeadSupportInterface>(ToggledPawns[i].Pawn);

			if (Support != nullptr && Support->OnCharacterConfirmDead.IsBoundToObject(this))
			{
				Support->OnCharacterConfirmDead.Remove(ToggledPawns[i].ConfirmedDeadHandle);

				ToggledPawns[i].ConfirmedDeadHandle.Reset();
			}

			FDelegateHandle InvaildHandle;
			InvaildHandle.Reset();
			UpdateControllerNewPawnEventHandle(Cast<APlayerController>(Pawn->GetController()), Cast<ACharacter>(Pawn), RespawnInfo, InvaildHandle);

			ToggledPawns.RemoveAt(i--);
		}
	}
}

int UTT_Respawn::AddNewToggledPawn(APawn* Pawn)
{
	int Index = FindToggledPawnIndex(Pawn);

	if (Index == INDEX_NONE)
	{
		FToggledPawnInfo NewTogglePawn;
		NewTogglePawn.Pawn = Pawn;
		
		if (!Pawn->OnDestroyed.IsAlreadyBound(this, &UTT_Respawn::ActorDestroyedEvent))
		{
			Pawn->OnDestroyed.AddDynamic(this, &UTT_Respawn::ActorDestroyedEvent);
		}

		Index = ToggledPawns.Add(NewTogglePawn);
	}

	IDeadSupportInterface* Support = Cast<IDeadSupportInterface>(ToggledPawns[Index].Pawn);

	if (Support != nullptr && ToggledPawns[Index].ConfirmedDeadHandle.IsValid())
	{
		Support->OnCharacterConfirmDead.Remove(ToggledPawns[Index].ConfirmedDeadHandle);
		ToggledPawns[Index].ConfirmedDeadHandle.Reset();
	}

	ToggledPawns[Index].ConfirmedDeadHandle = Support->OnCharacterConfirmDead.AddUObject(this, &UTT_Respawn::PawnDeadEvent);

	if (Pawn->GetController() == nullptr)
	{
		DeferredProcessPawns.AddUnique(Pawn);

		CanEverTick = true;
	}
	else
	{
		FDelegateHandle Handle = Pawn->GetController()->GetOnNewPawnNotifier().AddUObject(this, &UTT_Respawn::RegisterPawnSapwnEvent);

		UpdateControllerNewPawnEventHandle(Cast<APlayerController>(Pawn->GetController()), Cast<ACharacter>(Pawn), RespawnInfo, Handle);
	}

	return Index;
}

int UTT_Respawn::FindToggledPawnIndex(APawn* Pawn)
{
	int Index = INDEX_NONE;

	for (int i = 0; i < ToggledPawns.Num(); i++)
	{
		if (ToggledPawns[i].Pawn == Pawn)
		{
			Index = i;
			break;
		}
	}

	return Index;
}

bool UTT_Respawn:: CanBeToggled() 
{
	bool Result = true;

	if(!Super::CanBeToggled())
		return false;

	return Result;
}

void UTT_Respawn::Pause(UOperationInformationBase* PauseOperationInfo)
{
	Super::Pause(PauseOperationInfo);
}

void UTT_Respawn::Resume(UOperationInformationBase* ResumeOperationInfo)
{
	Super::Resume(ResumeOperationInfo);
}

void UTT_Respawn::Skip(UOperationInformationBase* SkipOperationInfo)
{
	Super::Skip(SkipOperationInfo);
}

bool UTT_Respawn::ReceiveNotifyFromOthersComponent(UTriggerTaskComponentBase* Component, UTriggerTaskBase* SenderTask, UOperationInformationBase* StartOperationInfo)
{
	if (!Super::ReceiveNotifyFromOthersComponent(Component, SenderTask, StartOperationInfo))
		return false;

	UTriggerTaskStartInformationBase* ExternalData = Cast<UTriggerTaskStartInformationBase>(StartOperationInfo);

	if(ExternalData == nullptr)
		return false;

	ACharacter* OtherPawn = Cast<ACharacter>(ExternalData->GetToggledActor());

	if (OtherPawn == nullptr || !OtherPawn->GetClass()->ImplementsInterface(UDeadSupportInterface::StaticClass()))
	{
		return false;
	}

	auto TryToPrepare = [&]()->bool {
	
		if (OtherPawn != nullptr)
		{
			AAIController* AIController = Cast<AAIController>(OtherPawn->GetController());

			if (AIController != nullptr)
			{
				return false;
			}
		}

		TArray<APawn*> Pawns;
		GeneratePotentialRespawnedPawn(Pawns, OtherPawn);

		//If there are no pawns need to be respawned in the task then just return to make this task do not inspect this pawns
		if (Pawns.Num() == 0)
		{
			return false;
		}

		for (int i = 0; i < Pawns.Num(); i++)
		{
			AddNewToggledPawn(Pawns[i]);
		}

		StopOtherRespawnTasks(Pawns);

		CheckPawnDeadHandCallBack(OtherPawn);

		Prepare(); 

		return true;
	};

	return TryToPrepare();
}

void UTT_Respawn::SelectedInEditor(UObject* SelectedActor)
{
	Super::SelectedInEditor(SelectedActor);

	if (RespawnTemplateData != nullptr)
	{
#if WITH_EDITOR
		RespawnTemplateData->UpdateEditorViewInfo();
#endif
	}
}

FVector UTT_Respawn::GetSpawnPosition(const FNeedSpawnedPawnInfo& PawnInfo)
{
	FTransform Result;

	if (!PawnInfo.IsOutValueValid)
	{
		Result = GetTriggerOwner()->GetComponentTransform();
	}
	else
	{
		Result = PawnInfo.Transform;
	}

	return Result.GetLocation();
}

FRotator UTT_Respawn::GetSpawnRotation(const FNeedSpawnedPawnInfo& PawnInfo)
{
	FTransform Result;

	if (!PawnInfo.IsOutValueValid)
	{
		Result = GetTriggerOwner()->GetComponentTransform();
	}
	else
	{
		Result = PawnInfo.Transform;
	}

	return Result.GetRotation().Rotator();
}

FTransform UTT_Respawn::GetSpawnTransform(const FNeedSpawnedPawnInfo& PawnInfo)
{
	FTransform Result;

	if (!PawnInfo.IsOutValueValid)
	{
		Result = GetTriggerOwner()->GetComponentTransform();
	}
	else
	{
		Result = PawnInfo.Transform;
	}

	return Result;
}

void UTT_Respawn::RegisterPawnSapwnEvent(APawn* NewPawn)
{
	if (NewPawn == nullptr)return;

	ACharacter* Character = Cast<ACharacter>(NewPawn);

	if (Character == nullptr) return;

	if (!Character->GetClass()->ImplementsInterface(UDeadSupportInterface::StaticClass()))
	{
		return;
	}

	//If this task can execute automatically then add the new pawn to the toggled pawns, and inspect the dead event
	if (CanAddNewSpawnedPawn(NewPawn))
	{
		AddNewToggledPawn(NewPawn);

		APlayerController* PlayerController = Cast<APlayerController>(NewPawn->GetController());

		if (PlayerController == nullptr) return;

		CheckRespawnInfoData(RespawnInfo, PlayerController, NewPawn->GetClass());

		CheckPawnDeadHandCallBack(Character);
	}
}

bool UTT_Respawn::CanAddNewSpawnedPawn(APawn* Pawn)
{
	bool Result = CanExecuteAutomatically();

	return Result;
}

void UTT_Respawn::ActorCreateEvent(AActor* Actor)
{
	if (!CanBeToggled())
		return;

	APlayerController* AC = Cast<APlayerController>(Actor);

	if (AC != nullptr)
	{
		CheckRespawnInfoData(RespawnInfo, AC, nullptr);

		if (!AC->GetOnNewPawnNotifier().IsBoundToObject(this))
		{
			FDelegateHandle Handle = AC->GetOnNewPawnNotifier().AddUObject(this, &UTT_Respawn::RegisterPawnSapwnEvent);

			UpdateControllerNewPawnEventHandle(AC, nullptr, RespawnInfo, Handle);

		}
	}
	
	ACharacter* Character = Cast<ACharacter>(Actor);

	AAIController* AIController = nullptr;

	if (Character != nullptr)
	{
		AIController = Cast<AAIController>(Character->GetController());
	}

	if (Character != nullptr && AIController == nullptr)
	{
		//Only focue the pawn which support respawn
		if (!Character->GetClass()->ImplementsInterface(UDeadSupportInterface::StaticClass()))
		{
			return;
		}

		AC = Cast<APlayerController>(Character->GetController());

		//Each Character should have one player controller
		if (AC == nullptr)
		{
			//Start to make this task to tick to wait the pawn have its own controller
			CanEverTick = true;
			
			if (!Character->OnDestroyed.IsAlreadyBound(this, &UTT_Respawn::DeferredPawnDestroyed))
			{
				Character->OnDestroyed.AddDynamic(this, &UTT_Respawn::DeferredPawnDestroyed);
			}

			DeferredProcessPawns.AddUnique(Character);
		}
		else
		{
			CheckRespawnInfoData(RespawnInfo, AC, Character->GetClass());
		}

		//If this task can execute automatically then add the new pawn to the toggled pawns, and inspecte the dead event
		if (CanAddNewSpawnedPawn(Character))
		{
			AddNewToggledPawn(Character);

			CheckPawnDeadHandCallBack(Character);
		}
	}
}

void UTT_Respawn::DeferredPawnDestroyed(AActor* DestroyedActor)
{
	int Index = DeferredProcessPawns.Find(Cast<ACharacter>(DestroyedActor));

	if (Index != INDEX_NONE)
	{
		DeferredProcessPawns.RemoveAt(Index);

		RemoveToggledPawn(Cast<APawn>(DestroyedActor));
	}
}

void UTT_Respawn::PawnDeadEvent(AActor* DestroyedActor)
{
	ACharacter* Pawn = Cast<ACharacter>(DestroyedActor);

	//Should never happen
	if (Pawn == nullptr) return;

	TryToRespawnNewPawn(Pawn);
	  
	DeferredPawnDestroyed(Pawn);
}

void UTT_Respawn::ActorDestroyedEvent(AActor* DestroyedActor)
{
	ACharacter* Pawn = Cast<ACharacter>(DestroyedActor);

	//Should never happen
	if (Pawn == nullptr) return;

	//Just remove the pawn form the toggled pawn, and clear all it delegate which bind to this object
	RemoveToggledPawn(Pawn);

	DeferredPawnDestroyed(Pawn);
}

void UTT_Respawn::CheckRespawnInfoData(FRespawnInfo& RespawnInfoParamater, APlayerController* PlayerController, UClass* PawnClass)
{
	if (PlayerController == nullptr) return;

	FControllerData* ControllerData = RespawnInfoParamater.ControllerData.Find(PlayerController);

	//Should never happen as all controller created should be register in the ActorCreateEvent, or the prepare function
	if (ControllerData == nullptr)
	{
		//If the controller is new we should add it
		RespawnInfoParamater.ControllerData.Add(PlayerController, FControllerData());

		ControllerData = RespawnInfoParamater.ControllerData.Find(PlayerController);

		//Should Never happened
		if (ControllerData == nullptr) return;
	}

	if (PawnClass == nullptr) return;

	FCharacterData* CharacterData = ControllerData->CharacterData.FindByPredicate([&PawnClass](FCharacterData Data) {
		if (PawnClass == Data.PawnClass)
			return true;
		else
			return false;
	});

	if (CharacterData == nullptr)
	{
		FCharacterData CD;
		CD.PawnClass = PawnClass;
		ControllerData->CharacterData.Add(CD);
	}
}

void UTT_Respawn::CheckPawnDeadHandCallBack(APawn* Pawn)
{
	if (Pawn == nullptr)
		return;

	FToggledPawnInfo* PawnInfo = ToggledPawns.FindByPredicate([&](const FToggledPawnInfo& Data) {
		if (Data.Pawn == Pawn)
			return true;
		else
			return false;
	});

	if (PawnInfo == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("The target pawn is not insepcted by this task but this task want to update the dead event of this pawn, this will cause the pawn will not been respawned correctly!!"));
		return;
	}
		
	if (Pawn->GetClass()->ImplementsInterface(UDeadSupportInterface::StaticClass()))
	{
		IDeadSupportInterface* SpawnInterface = Cast<IDeadSupportInterface>(Pawn);

		if (SpawnInterface != nullptr)
		{
			if (SpawnInterface->OnCharacterConfirmDead.IsBoundToObject(this))
			{
				 SpawnInterface->OnCharacterConfirmDead.Remove(PawnInfo->ConfirmedDeadHandle);
				 PawnInfo->ConfirmedDeadHandle.Reset();
			}

			if (!SpawnInterface->OnCharacterConfirmDead.IsBoundToObject(this))
			{
				PawnInfo->ConfirmedDeadHandle = SpawnInterface->OnCharacterConfirmDead.AddUObject(this, &UTT_Respawn::PawnDeadEvent);
				SpawnInterface->RepawnTask = this;
			}
		}
	}
}

void UTT_Respawn::GeneratePotentialRespawnedPawn(TArray<APawn*>& OutPawns, APawn* ToggledPawn)
{
	OutPawns.Empty();

	OutPawns.Add(ToggledPawn);
}

void UTT_Respawn::RegisterPotentialRespawnedPawn()
{
	if(GetWorld() == nullptr)
		return;

	FConstPlayerControllerIterator PlayerControllerInterator = GetWorld()->GetPlayerControllerIterator();

	if (PlayerControllerInterator)
	{
		for (FConstPlayerControllerIterator Iterator = PlayerControllerInterator; Iterator; ++Iterator)
		{
			APlayerController* PlayerController = Cast<APlayerController>(Iterator->Get());

			if (PlayerController == nullptr) continue;

			CheckRespawnInfoData(RespawnInfo, PlayerController, nullptr);

			if (!PlayerController->GetOnNewPawnNotifier().IsBoundToObject(this))
			{
				FDelegateHandle Handle = PlayerController->GetOnNewPawnNotifier().AddUObject(this, &UTT_Respawn::RegisterPawnSapwnEvent);

				UpdateControllerNewPawnEventHandle(PlayerController, nullptr, RespawnInfo, Handle);
			}

			ACharacter* Character = Cast<ACharacter>(PlayerController->GetPawn());

			AAIController* AIController = Cast<AAIController>(PlayerController);

			//Make sure this is not a AI 
			if (Character != nullptr && AIController == nullptr)
			{
				if (!Character->GetClass()->ImplementsInterface(UDeadSupportInterface::StaticClass()))
				{
					continue;;
				}

				CheckPawnDeadHandCallBack(Character);
			}
		}

	}

	ActorSpawnHandle = GetWorld()->AddOnActorSpawnedHandler(FOnActorSpawned::FDelegate::CreateUObject(this, &UTT_Respawn::ActorCreateEvent));

	for (auto It = DeferredProcessPawns.CreateIterator(); It; ++It)
	{
		if (*It != nullptr)
		{
			if (!(*It)->GetClass()->ImplementsInterface(UDeadSupportInterface::StaticClass()))
			{
				continue;
			}

			CheckPawnDeadHandCallBack(*It);
		}
	}
}

//By default respawn task it will make all other respawn task sleep
void UTT_Respawn::StopOtherRespawnTasks(const TArray<APawn*>& NewToggledPawns)
{
	if (GetTriggerManager() != nullptr &&
		GetTriggerManager()->GetTriggerTaskManager() != nullptr)
	{
		for (auto TriggerTask : GetTriggerManager()->GetTriggerTaskManager()->GetTriggerTasks())
		{
			UTT_Respawn* RespawnTask = Cast<UTT_Respawn>(TriggerTask);

			if (RespawnTask == nullptr || RespawnTask == this)
				continue;

			UOperationInformationBase* OperationInfo = UOperationInformationBase::CreateNewOperationInfo(UTriggerTaskStop_StopOtherRespawnTasks::StaticClass(), this, this, RespawnTask,nullptr);

			RespawnTask->TryToSleep(OperationInfo);
		}
	}

}

void UTT_Respawn::TryToRespawnNewPawn(APawn* Pawn)
{
	FNeedSpawnedPawnInfo PawnInfo;

	PawnInfo.OldPawn = Pawn;

	PendingToRespawn.Add(PawnInfo);

	Active();
}

void UTT_Respawn::RespawnNewPawn(APawn* OldPawn, APawn* NewPawn, ERespawnType LocalRespawnType)
{
	UE_LOG(LogTrigger, Warning, TEXT("Please implementate RespawnNewPawn at child class"));
}

void UTT_Respawn::UpdateSpawnedCount(APlayerController* PlayerController, ACharacter* NewCharacter, FRespawnInfo& RespawnInfoParamater, int DeltaCount)
{
	if (!CanBeToggled()) return;

	if (PlayerController == nullptr || NewCharacter == nullptr)
		return;

	CheckRespawnInfoData(RespawnInfoParamater, PlayerController, NewCharacter->GetClass());

	FControllerData* CD = RespawnInfoParamater.ControllerData.Find(PlayerController);

	if (CD == nullptr)
		return;

	FCharacterData* CharacterData = CD->CharacterData.FindByPredicate([&NewCharacter](FCharacterData& Data) {
		if (NewCharacter->GetClass() == Data.PawnClass)
			return true;
		else
			return false;
	});

	//Should never happen
	if (CharacterData == nullptr)
		return;

	CharacterData->SpawnedCount += DeltaCount;
}

void UTT_Respawn::UpdateControllerNewPawnEventHandle(APlayerController* PlayerController, ACharacter* NewCharacter, FRespawnInfo& RespawnInfoParamater, FDelegateHandle& NewHandle)
{
	if (PlayerController == nullptr)
		return;

	CheckRespawnInfoData(RespawnInfoParamater, PlayerController, NewCharacter != nullptr ? NewCharacter->GetClass() : nullptr);

	FControllerData* CD = RespawnInfoParamater.ControllerData.Find(PlayerController);

	if (CD == nullptr) return;

	//Not matter what the new Handel is we should always remove the original listener
	if (CD->SpawnNewPawnHandle.IsValid())
	{
		PlayerController->GetOnNewPawnNotifier().Remove(CD->SpawnNewPawnHandle);
		CD->SpawnNewPawnHandle.Reset();
	}

	CD->SpawnNewPawnHandle = NewHandle;
}

void UTT_Respawn::SetCharacterTransform_Implementation(ACharacter* Character, FTransform Transform)
{
	if(Character == nullptr)
		return;

	Character->SetActorTransform(Transform);
}

void FRespawnInfo::Reset()
{
	ControllerData.Empty();
}