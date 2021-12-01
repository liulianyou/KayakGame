#include "TT_AISpawn.h"
#include "NewTriggerBase.h"

#include "Engine/World.h"
#include "Modules/ModuleManager.h"
#include "Math/UnrealMathUtility.h"
#include "Templates/SharedPointer.h"
#include "Engine/World.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/Actor.h"
#include "EngineUtils.h"
#include "Engine/Blueprint.h"
#include "Modules/ModuleManager.h"
#include "AISpawnCreator/AICreatorBase.h"

#include "TriggerTaskComponent/TriggerTaskComponent.h"
#include "TriggerManager.h"
#include "TriggerTaskManager.h"
#include "TriggerConfig.h"
#include "TriggerTaskResetCommonOperationInfos.h"


#if WITH_EDITORONLY_DATA
#include "Editor.h"
#include "WorldBrowserModule.h"
#endif

static FVector CheckPawnSize(FVector& Size)
{
	if (Size == FVector::ZeroVector)
	{
		UE_LOG(LogTrigger, Error, TEXT("The size should never be zero, if you have zero size, you can remove this pawn"));

		Size = FVector(1.0f,1.0f,1.0f);
	}

	return FVector(Size);
}

UTT_AISpawn::UTT_AISpawn(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	CanEverTick = false;

	RunType = ERunType::ERunType_RunOnServer;

#if WITH_EDITORONLY_DATA
	if (HasAnyFlags(RF_ClassDefaultObject))
	{
		FEditorDelegates::MapChange.AddUObject(this, &UTT_AISpawn::OnEndLoadMap);
		FCoreUObjectDelegates::PostLoadMapWithWorld.AddUObject(this, &UTT_AISpawn::OnEndLoadMapInGame);

		FWorldDelegates::LevelAddedToWorld.AddUObject(this, &UTT_AISpawn::OnLevelChangedInWorld);
		FWorldDelegates::LevelRemovedFromWorld.AddUObject(this, &UTT_AISpawn::OnLevelChangedInWorld);
	}
#endif
}

void UTT_AISpawn::InitializeTask(UTriggerTaskComponentBase* Owner, bool AsTemplate, bool IsDynamicTask)
{
	Super::InitializeTask(Owner, AsTemplate, IsDynamicTask);

	//By default it should have one creator which will use the instanced NPC ID
	if (AICreator == nullptr)
	{
		AICreator = NewObject<UAICreatorByID>(this);
	}
}

void UTT_AISpawn::TryToStop(UOperationInformationBase* StopOperationInfo)
{
	Super::TryToStop(StopOperationInfo);
}

bool UTT_AISpawn::CanTick()
{
	return Super::CanTick();
}

void UTT_AISpawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps)const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UTT_AISpawn, TotalDeadAI);
	DOREPLIFETIME(UTT_AISpawn, CurrentRound);

}

void UTT_AISpawn::BeginDestroy()
{
	Super::BeginDestroy();

#if WITH_EDITORONLY_DATA
	for (auto PreviewCharacter : PreviewCharacters)
	{
		if (PreviewCharacter != nullptr)
		{
			PreviewCharacter->Destroy();
		}
	}
#endif

}

#if WITH_EDITORONLY_DATA

void UTT_AISpawn::OnClearTriggerTask()
{

}

void UTT_AISpawn::OnEndLoadMap(uint32 Flag)
{
	ClearWorldInformation(nullptr, GWorld);
}

void UTT_AISpawn::OnEndLoadMapInGame(UWorld* LoadedWorld)
{
	ClearWorldInformation(nullptr, LoadedWorld);
}

void UTT_AISpawn::OnLevelChangedInWorld(ULevel* Level, UWorld* World)
{
	ClearWorldInformation(Level, World);
}

void UTT_AISpawn::PreviewCharacterDestroyed(AAIPreviewCharacter* PreviewCharacter)
{
	for (auto Pawn : PreviewCharacters)
	{
		if (Pawn == PreviewCharacter)
		{
			PreviewCharacters.Remove(PreviewCharacter);
			break;
		}
	}
}

void UTT_AISpawn::ClearWorldInformation(ULevel* Level, UWorld* World)
{
	UWorld* World_ = World;

	if (World_ == nullptr)
	{
		World_ = GWorld;
	}

	for (auto Pawn : PreviewCharacters)
	{
		//Only delete the AIPreview character bind to TT_AISPawn, this will be removed in the feature
		if (Pawn->AISpawnGroupDataTemplate != nullptr)
			continue;

		GetWorld()->RemoveActor(Pawn, true);

		Pawn->Destroy();
	}

	PreviewCharacters.Empty();
}

void UTT_AISpawn::UpdateSpawnData(AAIPreviewCharacter* Character)
{
	if (Character == nullptr)
		return;

	for (auto PreviewInfo : Character->PreviewInfos)
	{
		if ( PreviewInfo.RoundIndex < 0 )
			continue;

		//When the target round is large than the stored data we should add more data
		if (PreviewInfo.RoundIndex >= SpawnData.TotalPawns.Num())
		{
			for (int index = SpawnData.TotalPawns.Num(); index < PreviewInfo.RoundIndex; index++)
			{
				FAICategory Data;
				SpawnData.TotalPawns.Add(Data);
			}
		}

		FAICategory& Round = SpawnData.TotalPawns[PreviewInfo.RoundIndex];

		if (PreviewInfo.PawnIndex >= Round.Pawns.Num() ||
			PreviewInfo.PawnIndex < 0)
			continue;

		FPawnInfo& Pawn = Round.Pawns[PreviewInfo.PawnIndex];

		Pawn.UseCustomizePosition = true;
		Pawn.UseCustomizeRotation = true;
		Pawn.UseCustomizeSize = true;
		Pawn.Position = Character->GetActorLocation();
		Pawn.Rotation = Character->GetActorRotation();
		Pawn.Size = Character->GetActorScale3D();
	}
}

void UTT_AISpawn::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (FProperty* PropertyThatChanged = PropertyChangedEvent.Property)
	{
		const FName PropertyName = PropertyThatChanged->GetFName();

		if (PropertyName == GET_MEMBER_NAME_CHECKED(FPawnInfo, SpawnPoint))//TEXT("SpawnPoint"))
		{
			UpdateDataAfterDataChanged();
		}

		if (PropertyName == GET_MEMBER_NAME_CHECKED(FAICategory, Pawns))
		{
			if (PropertyChangedEvent.ChangeType == EPropertyChangeType::ArrayAdd)
			{
				for (int RoundIndex = 0; RoundIndex < SpawnData.TotalPawns.Num(); RoundIndex++)
				{
					FAICategory& Round = SpawnData.TotalPawns[RoundIndex];

					for (int PawnIndex = 0; PawnIndex < Round.Pawns.Num(); PawnIndex++)
					{
						FPawnInfo& PawnInfo = Round.Pawns[PawnIndex];

						int index = PreviewCharacters.Find(PawnInfo.SpawnPoint);

						if(index != INDEX_NONE) continue;


						AActor* Actor = Cast<AActor>(TriggerOwner);

						if (Actor == nullptr)
						{
							for (UObject* Object = GetOuter(); Object != nullptr; Object = Object->GetOuter())
							{
								Actor = Cast<AActor>(Object);
								if (Actor != nullptr)
								{
									break;
								}
							}
						}

						if (Actor != nullptr)
						{
							SpawnNewPreCharacter(Actor->GetActorLocation(), Actor->GetActorRotation(),Actor->GetActorScale3D(), TEXT(""), RoundIndex, PawnIndex);
						}
						else
						{
							//This task is invalid as It should be sub object of trigger 
						}
					}
				}
			}
		}	
	}

	UpdatePreviewCharacter();
}

AAIPreviewCharacter* UTT_AISpawn::SpawnNewPreCharacter(FVector Location, FRotator Rotation, FVector Size, FString Name, int RoundIndex, int PawnIndex)
{
	FActorSpawnParameters Parameters;
	Parameters.bNoFail = true;
	Parameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	if (Name != TEXT(""))
	{
		Parameters.Name = *Name;
	}
	
	UClass* PCC = AAIPreviewCharacter::StaticClass();

	UTriggerConfig* TriggerConfig = Cast<UTriggerConfig>(UTriggerConfig::StaticClass()->GetDefaultObject());

	if (TriggerConfig != nullptr && TriggerConfig->PreviewCharacterPath.IsValid())
	{
		UObject* Object = TriggerConfig->PreviewCharacterPath.TryLoad();

		if (Object != nullptr)
		{
			if (UBlueprint* GeneratedObject = Cast<UBlueprint>(Object))
			{
				if (GeneratedObject->GeneratedClass->IsChildOf<AAIPreviewCharacter>())
				{
					PCC = GeneratedObject->GeneratedClass;
				}
			}
		}
	}

	FTransform Transform(Rotation.Quaternion(), Location, Size);


	AAIPreviewCharacter* PreviewCharacter = GetWorld()->SpawnActor<AAIPreviewCharacter>(PCC, Transform, Parameters);

	//Something is wrong
	if (PreviewCharacter == nullptr)
		return nullptr;


	PreviewCharacter->InitializeData(this, RoundIndex, PawnIndex);

	SpawnData.TotalPawns[RoundIndex].Pawns[PawnIndex].SpawnPoint = PreviewCharacter;
	SpawnData.TotalPawns[RoundIndex].Pawns[PawnIndex].UseCustomizePosition = true;
	SpawnData.TotalPawns[RoundIndex].Pawns[PawnIndex].Position = PreviewCharacter->GetActorLocation();
	SpawnData.TotalPawns[RoundIndex].Pawns[PawnIndex].UseCustomizeRotation = true;
	SpawnData.TotalPawns[RoundIndex].Pawns[PawnIndex].Rotation = PreviewCharacter->GetActorRotation();
	SpawnData.TotalPawns[RoundIndex].Pawns[PawnIndex].UseCustomizeSize = true;
	SpawnData.TotalPawns[RoundIndex].Pawns[PawnIndex].Size = PreviewCharacter->GetActorScale3D();
	SpawnData.TotalPawns[RoundIndex].Pawns[PawnIndex].PreviewName = PreviewCharacter->GetName();

	PreviewCharacters.Add(PreviewCharacter);

	return PreviewCharacter;
}

void UTT_AISpawn::UpdateDataAfterDataChanged()
{
	for (int RoundIndex = 0; RoundIndex < SpawnData.TotalPawns.Num();RoundIndex++)
	{
		FAICategory& Round = SpawnData.TotalPawns[RoundIndex];

		for (int PawnIndex = 0; RoundIndex < Round.Pawns.Num(); RoundIndex++)
		{
			FPawnInfo& Pawn = Round.Pawns[PawnIndex];

			AAIPreviewCharacter* PreviewCharacter = Cast<AAIPreviewCharacter>(Pawn.SpawnPoint);

			if (Pawn.SpawnPoint == nullptr || PreviewCharacter == nullptr)
			{
				Pawn.UseCustomizePosition = false;
				Pawn.UseCustomizeRotation = false;
				Pawn.UseCustomizeSize = false;
			}
			else
			{
				Pawn.UseCustomizePosition = true;
				Pawn.UseCustomizeRotation = true;
				Pawn.UseCustomizeSize = true;
				Pawn.Position = Cast<AActor>(Pawn.SpawnPoint)->GetActorLocation();
				Pawn.Rotation = Cast<AActor>(Pawn.SpawnPoint)->GetActorRotation();
				Pawn.Size = Cast<AActor>(Pawn.SpawnPoint)->GetActorScale3D();
				Pawn.NPCID = Pawn.SpawnPoint->NPCID;
			}

			//Check the internal preview info
			for (auto Data : PreviewCharacters)
			{
				for (int PVIndex = 0; PVIndex < Data->PreviewInfos.Num(); PVIndex++)
				{
					if ( SpawnData.TotalPawns[Data->PreviewInfos[PVIndex].PawnIndex].Pawns[Data->PreviewInfos[PVIndex].RoundIndex].SpawnPoint != Data)
					{
						Data->PreviewInfos.RemoveAt(PVIndex);
					}
				}
			}

			FPreviewInfo PreviewInfo;
			PreviewInfo.RoundIndex = RoundIndex;
			PreviewInfo.PawnIndex = PawnIndex;

			//Update the new Preview Info in to the preview characters
			PreviewCharacter->PreviewInfos.Add(PreviewInfo);

		}
	}
}

void UTT_AISpawn::UpdatePreviewCharacter()
{
	for (int i = 0; i < PreviewCharacters.Num(); i++)
	{
		if (PreviewCharacters[i]->PreviewInfos.Num() == 0)
		{
			PreviewCharacters.RemoveAt(i);
		}
	}
}

void UTT_AISpawn::SelectedInEditor(UObject* SelectedActor)
{
	Super::SelectedInEditor(SelectedActor);

	ANewTriggerBase* Trigger = Cast<ANewTriggerBase>(SelectedActor);
	AAIPreviewCharacter* Character = Cast<AAIPreviewCharacter>(SelectedActor);
	
	if ((Trigger == nullptr && Character == nullptr) ||
		//when the player select the other trigger
		(Character == nullptr && TriggerOwner != nullptr && Trigger != TriggerOwner->GetOwner()))
	{

		for (auto Pawn : PreviewCharacters)
		{
			GetWorld()->RemoveActor(Pawn, true);

			Pawn->Destroy();
		}
		
		PreviewCharacters.Empty();

		return;
	}

	if (Trigger == nullptr && Character != nullptr)
	{
		//Current the designer want to change the transform of the spawn point
		return;
	}

	if (Trigger != nullptr)
	{
		if (PreviewCharacters.Num() != 0)
		{
			return;
		}

		for (int RoundIndex = 0; RoundIndex < SpawnData.TotalPawns.Num(); RoundIndex++)
		{
			FAICategory& Round = SpawnData.TotalPawns[RoundIndex];
			for (int PawnIndex = 0; PawnIndex < Round.Pawns.Num(); PawnIndex++)
			{
				FPawnInfo& Pawn = Round.Pawns[PawnIndex];

				Pawn.Size = CheckPawnSize(Pawn.Size);

				if(SpawnNewPreCharacter(Pawn.Position, Pawn.Rotation, Pawn.Size, Pawn.PreviewName, RoundIndex, PawnIndex) == nullptr)
					continue;
			}
		}
	}

	void UpdatePreviewCharacter();
}
#endif

bool UTT_AISpawn::Prepare()
{
	if (!Super::Prepare())
	{
		return false;
	}

	UTriggerTaskReset_CommonReset* ResetInformation = UTriggerTaskReset_CommonReset::CommonReset(ETriggerTaskResetType::ETriggerTaskResetType_ClearData, this, this);

	Reset(ResetInformation);

	Active();

	return true;
}

void UTT_AISpawn::Active(bool ForceActive)
{
	CanEverTick = true;

	Super::Active();

	//When this task active we should immediately spawn one new AI
	//TryToSpawnNewAIController(0, 0);

}

void UTT_AISpawn::Reset(UOperationInformationBase* Operation /*= nullptr*/)
{
	Super::Reset(Operation);

	UTriggerTaskResetInformationBase* RestInformation = Cast<UTriggerTaskResetInformationBase>(Operation);

	if(RestInformation == nullptr)
		return;

	if (EnumHasAnyFlags(RestInformation->ResetType, ETriggerTaskResetType::ETriggerTaskResetType_ClearData))
	{
		TotalDeadAI = 0;
		CurrentRound = 0;
		RoundInfo.Empty();

		CanEverTick = false;

		RoundInfo.SetNum(SpawnData.TotalPawns.Num());

		for (int i = 0; i < SpawnData.TotalPawns.Num(); i++)
		{
			FAICategory& ActiveCategory = SpawnData.TotalPawns[i];

			for (int j = 0; j < ActiveCategory.Pawns.Num(); j++)
			{
				ActiveCategory.Pawns[j].Reset();
			}
		}
	}
}


void UTT_AISpawn::Pause(UOperationInformationBase* OperationInfo /* = nullptr */)
{
	Super::Pause(OperationInfo);
}

void UTT_AISpawn::Resume(UOperationInformationBase* OperationInfo /* = nullptr */)
{
	Super::Resume(OperationInfo);
}

void UTT_AISpawn::Skip(UOperationInformationBase* OperationInfo /* = nullptr */)
{
	Super::Skip(OperationInfo);
}


void UTT_AISpawn::Finished(UOperationInformationBase* FinishOperationInfo)
{
	Super::Finished(FinishOperationInfo);

	{
		CanEverTick = false;
	}

}

void UTT_AISpawn::PostFinished()
{
	Super::PostFinished();
}

void UTT_AISpawn::TryToSleep(UOperationInformationBase* Causer /* = nullptr */)
{
	//This task can not go in to sleep state if this task is in tick state which means this task is doing something
	if (GetTriggerState() == ETriggerTaskState::ETriggerTaskState_Tick)
	{
		return;
	}

	Super::TryToSleep(Causer);
}

void UTT_AISpawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (RoundInfo.Num() == 0 ||CurrentRound >= RoundInfo.Num()) return;

	RoundInfo[CurrentRound].RunningTime += DeltaTime;

	int Index = 0;

	FPawnInfo& PawnInfo = GetPawnInfo(CurrentRound, Index);

	bool HaveSpawnedAI = false;

	if (IsSpawnConditionCommit(RoundInfo[CurrentRound], PawnInfo ))
	{
		if (TryToSpawnNewAIController( CurrentRound, Index ))
		{
			HaveSpawnedAI = true;

			PawnInfo.CurrentTickTime = 0.0f;
		}
	}

	if (!HaveSpawnedAI)
	{
		//When current frame have spawned new AI we should not add the delta time
		PawnInfo.CurrentTickTime += DeltaTime;
	}

	static bool StartToSpawnNextRound = true;

	if (GetCurrentRoundDeadAI() == GetNumberOfPendingSpawnedAI(CurrentRound) && StartToSpawnNextRound)
	{
		StartToSpawnNextRound = false;

		RoundInfo[CurrentRound].RunningTime = 0.0f;
	}

	if (RoundInfo[CurrentRound].RunningTime >= SpawnData.TotalPawns[CurrentRound].DelayTime && !StartToSpawnNextRound)
	{
		RoundInfo[CurrentRound].RunningTime = 0.0f;

		StartToSpawnNextRound = true;

		AIKilledInOneRound();
	}

}

bool UTT_AISpawn::ReceiveNotifyFromOthersComponent(UTriggerTaskComponentBase* OtherComponent, UTriggerTaskBase* SenderTask, UOperationInformationBase* StartOperationInfo)
{
	bool Result = Super::ReceiveNotifyFromOthersComponent(OtherComponent, SenderTask, StartOperationInfo);

	if (Result)
		Prepare();

	return Result;
}

bool UTT_AISpawn::IsSpawnConditionCommit( FCurrentRoundSpawnInfor& RI, FPawnInfo& PawnInfo)
{

	if (RI.RunningTime < SpawnData.TotalPawns[CurrentRound].WaitTime)
	{
		return false;
	}
	
	if (PawnInfo.CurrentTickTime < PawnInfo.DelayTime)
	{
		return false;
	}

	if (RI.GetTotalSpawnedAINumber() == GetNumberOfPendingSpawnedAI(CurrentRound))
	{
		return false;
	}
	
	return true;
}

int UTT_AISpawn::GetNumberOfPendingSpawnedAI(int Round)
{
	int Result = 0;

	int PawnsNumber = SpawnData.TotalPawns[Round].Pawns.Num();

	for (int i = 0; i < PawnsNumber; i++)
	{
		if (SpawnData.TotalPawns[Round].Pawns[i].Number <= 0)
		{
			Result += 1;
		}
		else
		{
			Result += SpawnData.TotalPawns[Round].Pawns[i].Number;
		}
	}

	return Result;
}

void UTT_AISpawn::AIKilledInOneRound()
{
	if (CurrentRound + 1 >= SpawnData.TotalPawns.Num())
	{
		Finished();

		return;
	}

	StartNewAISpawnRound(CurrentRound + 1);
}

void UTT_AISpawn::StartNewAISpawnRound(int TargetRound)
{
	if (TargetRound >= GetTotalRound())
		return;

	CurrentRound = FMath::Clamp(TargetRound, 0, GetTotalRound());

	RoundInfo[CurrentRound] = FCurrentRoundSpawnInfor();
}

void UTT_AISpawn::AddAIDeadDelegate(AAIController* Controller)
{
	if (Controller == nullptr)
		return;

	if (Controller->GetClass()->ImplementsInterface(UAISpawnSupportInterface::StaticClass()))
	{
		IAISpawnSupportInterface* AISpawnSupport = Cast<IAISpawnSupportInterface>(Controller);

		if (AISpawnSupport == nullptr)
		{

		}
		else
		{
			AISpawnSupport->AICharacterDeadHandle = AISpawnSupport->OnAICharacterDead.AddUObject(this, &UTT_AISpawn::OnActorDestoryCallback);
		}

	}
}


bool UTT_AISpawn::TryToSpawnNewAIController( int Round, int PawnIndex )
{
	if (AICreator == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("Please assign one creator for the AISpawn Task %s "), *GetPathName());

		return false;
	}

	int ActualIndex = PawnIndex;
	int ActualRound = Round;

	if(SpawnData.TotalPawns.Num() == 0)
		return true;

	if (SpawnData.TotalPawns[Round].Pawns[PawnIndex].IsSpawnedAll())
	{
		ActualIndex = PawnIndex + 1;
	}
	else
	{
		ActualIndex = PawnIndex;
	}

	if (ActualIndex >= SpawnData.TotalPawns[Round].Pawns.Num())
	{
		//All spawn data of current round have spawned
		return false;
	}

	FPawnInfo& PawnInfo = SpawnData.TotalPawns[ActualRound].Pawns[ActualIndex];

	if (GetWorld() == nullptr)
	{
		UE_LOG(LogTrigger, Error, TEXT("There is vaild world to spawn the AI!!!!"));
		return false;
	}

	AICreator->SetPawnInfo(PawnInfo);

	FTransform Transform;
	Transform.SetLocation(GetSpawnPosition(ActualRound, ActualIndex));
	Transform.SetRotation(GetSpawnRotation(ActualRound, ActualIndex).Quaternion());
	Transform.SetScale3D(GetSpawnSize(ActualRound, ActualIndex));
	AICreator->SetTransfrom(Transform);

	APawn* NewPawn;
	AAIController* Controller = AICreator->CreateNewAI(NewPawn);

	AddAIDeadDelegate(Controller);

	if (Controller == nullptr)
	{
		return false;
	}

	RoundInfo[ActualRound].SpawnedAIControll.Add(Controller);

	SpawnData.TotalPawns[ActualRound].Pawns[ActualIndex].AddCount();

	return true;
}

FPawnInfo& UTT_AISpawn::GetPawnInfo(int Round, int& OutPawnIndex)
{
	int TotalSpawnedPawn = RoundInfo[Round].GetTotalSpawnedAINumber();

	for (OutPawnIndex = 0; OutPawnIndex < SpawnData.TotalPawns[Round].Pawns.Num(); OutPawnIndex++)
	{
		TotalSpawnedPawn -= SpawnData.TotalPawns[Round].Pawns[OutPawnIndex].Number;

		if (TotalSpawnedPawn <= 0)
		{
			break;
		}
	}

	if (OutPawnIndex == SpawnData.TotalPawns[Round].Pawns.Num())
	{
		--OutPawnIndex;
	}

	return SpawnData.TotalPawns[Round].Pawns[OutPawnIndex];
}

void UTT_AISpawn::GetTotalNPCID(TArray<int>& NPCID)
{
	NPCID.Empty();

	for (int GroupIndex = 0; GroupIndex < GetConstSpawnData().TotalPawns.Num(); GroupIndex++)
	{
		for (int PawnIndex = 0; PawnIndex < GetConstSpawnData().TotalPawns[GroupIndex].Pawns.Num(); PawnIndex++)
		{
			NPCID.Add(GetConstSpawnData().TotalPawns[GroupIndex].Pawns[PawnIndex].NPCID);
		}
	}
}

void UTT_AISpawn::OnActorDestoryCallback(AActor* DestroyedActor)
{
	AAIController* AC = Cast<AAIController>(DestroyedActor);

	if (AC == nullptr) return;

	for (int i = 0; i < RoundInfo.Num(); i++)
	{
		int Index = RoundInfo[i].SpawnedAIControll.Find(AC);

		if (Index != INDEX_NONE)
		{
			RoundInfo[i].SpawnedAIControll.RemoveAt(Index);
			RoundInfo[i].AIDeadIncurrentRound++;
		}
	}

	TotalDeadAI++;
}

int UTT_AISpawn::GetCurrentRoundDeadAI()
{
	return RoundInfo[CurrentRound].AIDeadIncurrentRound;
}


bool UTT_AISpawn::CanBeToggled()
{
	bool Result = Super::CanBeToggled();

	return Result;
}

FVector UTT_AISpawn::GetSpawnPosition(int RoundIndex, int PawnIndex)
{
	FAICategory& AICategory = SpawnData.TotalPawns[RoundIndex];
	FPawnInfo& PawnInfo = AICategory.Pawns[PawnIndex];
	
	if (!PawnInfo.UseCustomizePosition)
	{
		return AICategory.DefaultPosition;
	}
	else
	{
		return PawnInfo.Position;
	}
}

FRotator UTT_AISpawn::GetSpawnRotation(int RoundIndex, int PawnIndex)
{
	FAICategory& AICategory = SpawnData.TotalPawns[RoundIndex];

	FPawnInfo& PawnInfo = AICategory.Pawns[PawnIndex];

	if (!PawnInfo.UseCustomizeRotation)
	{
		return AICategory.DefaultRotation;
	}
	else
	{
		return PawnInfo.Rotation;
	}
}

FVector UTT_AISpawn::GetSpawnSize(int RoundIndex, int PawnIndex)
{
	FAICategory& AICategory = SpawnData.TotalPawns[RoundIndex];

	FPawnInfo& PawnInfo = AICategory.Pawns[PawnIndex];

	FVector ResultSize;

	if (!PawnInfo.UseCustomizeSize)
	{
		ResultSize = AICategory.DefaultSize;
	}
	else
	{
		ResultSize = PawnInfo.Size;
	}

	ResultSize = CheckPawnSize(ResultSize);
	return ResultSize;
}

FTransform UTT_AISpawn::GetSpawnTransform(int RoundIndex, int PawnIndex)
{
	FTransform Transform;
	Transform.SetLocation(GetSpawnPosition(RoundIndex, PawnIndex));
	Transform.SetRotation(GetSpawnRotation(RoundIndex, PawnIndex).Quaternion());
	Transform.SetScale3D(GetSpawnSize(RoundIndex, PawnIndex));
	return Transform;
}