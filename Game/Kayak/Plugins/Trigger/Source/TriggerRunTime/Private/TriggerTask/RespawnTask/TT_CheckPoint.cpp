#include "TT_CheckPoint.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework//Character.h"

#include "TriggerDefinition.h"
#include "TriggerManager.h"
#include "TriggerTaskManager.h"
#include "Record/TriggerRecordBase.h"

FPotentialRespawnGroups UTT_CheckPoint::GroupInfo;

UTT_CheckPoint::UTT_CheckPoint(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}

void UTT_CheckPoint::Finished(UOperationInformationBase* FinishOperationInfo)
{
	Super::Finished(FinishOperationInfo);
}

void UTT_CheckPoint::GeneratePotentialRespawnedPawn(TArray<APawn*>& OutPawns, APawn* ToggledPawn)
{
	OutPawns.Empty();

	int Index = UTT_CheckPoint::GroupInfo.FindGroupPawns(ToggledPawn);

	GetTeammates(OutPawns, ToggledPawn);

	//This is new pawn in the pool, add one empty group to hold all teammates
	if (Index == INDEX_NONE)
	{
		Index = UTT_CheckPoint::GroupInfo.FindEmptySlotIndex();

		if (Index == INDEX_NONE)
		{
			Index = UTT_CheckPoint::GroupInfo.Add(FPotentialRespawnedPawnGroup());
		}
	}

	if (UTT_CheckPoint::GroupInfo[Index].IsVaildCheckPointToRespawn(this))
	{
		//Update all teammates data
		for (int i = 0; i < OutPawns.Num(); i++)
		{
			UTT_CheckPoint::GroupInfo.UpdatePawnGroupInfo(Index, OutPawns[i], this);
		}

		if (RecordTemplate != nullptr)
		{
			FRecordInstigatorInfo Info;
			Info.Instigator = this;

			RecordTemplate->StartRecord(Info);
		}

		NewCheckPointActivated.Broadcast(ToggledPawn, OutPawns);

		FTriggerDelegate::NewCheckPointActivatedNativeEvent.Broadcast(this, ToggledPawn, OutPawns);
	}
	else
	{
		//for (int i = 0; i < OutPawns.Num(); i++)
		//{
		//	int PawnIndex = UTT_CheckPoint::GroupInfo[Index].FindPawnInfo(OutPawns[i]);

		//	//This pawn is new to the group which ToggledPawn at, update this pawn
		//	if (PawnIndex == INDEX_NONE)
		//	{
		//		UTT_CheckPoint::GroupInfo.UpdatePawnGroupInfo(Index, OutPawns[i], UTT_CheckPoint::GroupInfo[Index].CheckPointTask);
		//	}
		//}

		OutPawns.Empty();
	}
}

//The check point will make other check point sleep, just redirect the event callback to this task
void UTT_CheckPoint::StopOtherRespawnTasks(const TArray<APawn*>& NewToggledPawns)
{
	if (GetTriggerManager() != nullptr &&
		GetTriggerManager()->GetTriggerTaskManager() != nullptr)
	{
		for (auto TriggerTask : GetTriggerManager()->GetTriggerTaskManager()->GetTriggerTasks())
		{
			UTT_Respawn* RespawnTask = Cast<UTT_Respawn>(TriggerTask);

			if (RespawnTask != this && RespawnTask != nullptr)
			{
				for (int i = 0; i < NewToggledPawns.Num(); i++)
				{
					for (int PawnIndex = 0; PawnIndex < RespawnTask->ToggledPawns.Num(); PawnIndex++)
					{
						if (RespawnTask->ToggledPawns[PawnIndex].Pawn == NewToggledPawns[i])
						{
							RespawnTask->RemoveToggledPawn(RespawnTask->ToggledPawns[PawnIndex].Pawn);
						}
					}
				}
			}

			UTT_CheckPoint* CheckPointTask = Cast<UTT_CheckPoint>(TriggerTask);

			if (CheckPointTask != nullptr)
			{
				if (CheckPointTask->RecordTemplate != nullptr)
				{
					FRecordInstigatorInfo Info;
					Info.Instigator = CheckPointTask;
					CheckPointTask->RecordTemplate->EndRecord(Info, EEndRecordType::EEndRecordType_ClearRecordInfo);
				}
			}
		}
	}
}

void UTT_CheckPoint::TryToRespawnNewPawn(APawn* Pawn)
{
	if (Pawn == nullptr)
		return;

	int GroupIndex = GroupInfo.FindGroupPawns(Pawn);

	if (GroupIndex == INDEX_NONE)
		return;

	//Only all teammates dead, they can respawn
	if (GroupInfo[GroupIndex].NeedToRespawnAll())
	{
		PendingToRespawn.Add(Pawn);

		if (RecordTemplate != nullptr)
		{
			FRecordInstigatorInfo Info;
			Info.Instigator = this;
			RecordTemplate->Execute(Info);
		}

		Active();
	}
}

void UTT_CheckPoint::RespawnNewPawn(APawn* OldPawn, APawn* NewPawn, ERespawnType LocalRespawnType)
{
	int GroupIndex = UTT_CheckPoint::GroupInfo.FindGroupPawns(OldPawn);

	if (GroupIndex == INDEX_NONE)
	{
		return;
	}

	int PawnIndex = GroupInfo[GroupIndex].FindPawnInfo(OldPawn);

	if (PawnIndex == INDEX_NONE)
	{
		return;
	}

	GroupInfo[GroupIndex][PawnIndex].OldPawn = NewPawn;
	GroupInfo[GroupIndex][PawnIndex].HaveRespawned = true;
	GroupInfo[GroupIndex][PawnIndex].CheckPointTask = this;

	RemoveEnterDeadEvent(OldPawn);

	AddEnterDeadEvent( NewPawn );

	//if all teammates have respawned then I need to reset pawn runtime info
	if (GroupInfo[GroupIndex].AllPawnsSpawned(GroupIndex))
	{
		for (int i = 0; i < UTT_CheckPoint::GroupInfo[GroupIndex].Num(); i++)
		{
			GroupInfo[GroupIndex][PawnIndex].HaveRespawned = false;
		}
	}
}

void UTT_CheckPoint::RemoveEnterDeadEvent(APawn* Pawn)
{
	int GroupIndex = GroupInfo.FindGroupPawns(Pawn);

	if (GroupIndex == INDEX_NONE)
		return;

	int PawnIndex = GroupInfo[GroupIndex].FindPawnInfo(Pawn);

	if (GroupInfo[GroupIndex][PawnIndex].OldPawn->GetClass()->ImplementsInterface(UDeadSupportInterface::StaticClass()))
	{
		if (GroupInfo[GroupIndex][PawnIndex].EnterDeadHandle.IsValid())
		{
			IDeadSupportInterface* DeadSupport = Cast<IDeadSupportInterface>(GroupInfo[GroupIndex][PawnIndex].OldPawn);

			DeadSupport->OnCharacterEnterDead.Remove(GroupInfo[GroupIndex][PawnIndex].EnterDeadHandle);
		}
	}
}

void UTT_CheckPoint::AddEnterDeadEvent(APawn* Pawn)
{
	RemoveEnterDeadEvent(Pawn);

	int GroupIndex = GroupInfo.FindGroupPawns(Pawn);

	if (GroupIndex == INDEX_NONE)
		return;

	int PawnIndex = GroupInfo[GroupIndex].FindPawnInfo(Pawn);

	if (PawnIndex == INDEX_NONE)
		return;

	if (GroupInfo[GroupIndex][PawnIndex].OldPawn->GetClass()->ImplementsInterface(UDeadSupportInterface::StaticClass()))
	{
		if (GroupInfo[GroupIndex][PawnIndex].EnterDeadHandle.IsValid())
		{
			IDeadSupportInterface* DeadSupport = Cast<IDeadSupportInterface>(GroupInfo[GroupIndex][PawnIndex].OldPawn);

			if (DeadSupport)
			{
				DeadSupport->OnCharacterEnterDead.AddUObject(this, &UTT_CheckPoint::OnCharacterEnterDeadCallBack);
			}
		}
	}
}


/*
* As there is no suitable to access the teammate for target player, I will just use all players in the map, and treat them as teammates
*/
void UTT_CheckPoint::GetTeammates(TArray<APawn*>& OutPawns, APawn* ToggledPawn)
{
	OutPawns.Empty();

	//For now there is no interface to support teammate function, so I just iterator all pawns in the world

	FConstPlayerControllerIterator PlayerControllerInterator = GetWorld()->GetPlayerControllerIterator();

	for (FConstPlayerControllerIterator Iterator = PlayerControllerInterator; Iterator; ++Iterator)
	{
		APlayerController* PlayerController = Cast<APlayerController>(Iterator->Get());

		if (PlayerController != nullptr && PlayerController->GetPawn())
		{
			OutPawns.Add(PlayerController->GetPawn());
		}
	}
}

void UTT_CheckPoint::PawnDestroyedEventCallback(AActor* Actor)
{
	int GroupIndex = UTT_CheckPoint::GroupInfo.FindGroupPawns(Cast<APawn>(Actor));

	if (GroupIndex == INDEX_NONE)
		return;

	int PawnIndex = UTT_CheckPoint::GroupInfo[GroupIndex].FindPawnInfo(Cast<APawn>(Actor));

	if (PawnIndex == INDEX_NONE)
		return;

	UTT_CheckPoint::GroupInfo[GroupIndex].RemoveAt(PawnIndex);

	if (UTT_CheckPoint::GroupInfo[GroupIndex].Num() == 0)
	{
		UTT_CheckPoint::GroupInfo.RemoveAt(GroupIndex);
	}
}

void UTT_CheckPoint::PawnOnEndPlay(AActor* Actor, EEndPlayReason::Type EndPlayReason)
{
	PawnDestroyedEventCallback(Actor);
}

void UTT_CheckPoint::OnCharacterEnterDeadCallBack(AActor* Acotr)
{
	int GroupIndex = GroupInfo.FindGroupPawns(Cast<APawn>(Acotr));

	if (GroupIndex == INDEX_NONE)
		return;

	UTT_CheckPoint::GroupInfo.RangeCheck(GroupIndex);

	int PawnIndex = GroupInfo[GroupIndex].FindPawnInfo(Cast<APawn>(Acotr));

	if (PawnIndex == INDEX_NONE)
		return;

	UTT_CheckPoint::GroupInfo[GroupIndex][PawnIndex].NeedToRespawn = true;
}

FPotentialRespawnedPawnInfo::~FPotentialRespawnedPawnInfo()
{
	if (OldPawn != nullptr && CheckPointTask != nullptr)
	{
		if (OldPawn->OnDestroyed.IsAlreadyBound(CheckPointTask, &UTT_CheckPoint::PawnDestroyedEventCallback))
		{
			OldPawn->OnDestroyed.RemoveDynamic(CheckPointTask, &UTT_CheckPoint::PawnDestroyedEventCallback);
		}

		if (OldPawn->OnEndPlay.IsAlreadyBound(CheckPointTask, &UTT_CheckPoint::PawnOnEndPlay))
		{
			OldPawn->OnEndPlay.RemoveDynamic(CheckPointTask, &UTT_CheckPoint::PawnOnEndPlay);
		}

		if (OldPawn->GetClass()->ImplementsInterface(UDeadSupportInterface::StaticClass()))
		{
			IDeadSupportInterface* DeadSupport = Cast<IDeadSupportInterface>(OldPawn);

			if (EnterDeadHandle.IsValid())
			{
				DeadSupport->OnCharacterEnterDead.Remove(EnterDeadHandle);
			}
		}
	}
}

bool FPotentialRespawnedPawnGroup::NeedToRespawnAll()
{
	bool Result = true;

	for (int i = 0; i < Num(); i++)
	{
		if (!GetData()[i].NeedToRespawn)
		{
			Result = false;
			break;
		}
	}

	return Result;
}

bool FPotentialRespawnedPawnGroup::AllPawnsSpawned(int GroupIndex)
{
	bool Result = true;

	for (int i = 0; i < Num(); i++)
	{
		if (!GetData()[i].HaveRespawned)
		{
			Result = false;
			break;
		}
	}

	return Result;
}

int FPotentialRespawnedPawnGroup::FindPawnInfo(APawn* Pawn)
{
	int Index = INDEX_NONE;

	for (int i = 0; i < Num(); i++)
	{
		if (GetData()[i].OldPawn == Pawn)
		{
			Index = i;
			break;
		}
	}

	return Index;
}

bool FPotentialRespawnedPawnGroup::IsVaildCheckPointToRespawn(const UTT_CheckPoint* TargetCheckPoint) const
{
	if (TargetCheckPoint == nullptr)
		return false;

	//Check weather current task is the same as TargetCheckPoint
	if (TargetCheckPoint == CheckPointTask)
	{
		return true;
	}

	//If the CheckPointTask is not valid then use the CheckPointLevel to check weather target check point's level is larger then it
	if (CheckPointTask == nullptr || !CheckPointTask->IsValidLowLevel())
	{
		if (TargetCheckPoint->Level > CheckPointLevel)
		{
			return true;
		}
	}
	else
	{
		//If the level of target check point is larger then existed CheckPointTask then use this task
		if (TargetCheckPoint->Level > CheckPointTask->Level)
		{
			return true;
		}
	}

	return false;
}


int FPotentialRespawnGroups::FindGroupPawns(APawn* Pawn)
{
	int Result = INDEX_NONE;

	for (int i = 0; i < Num(); i++)
	{
		if (GetData()[i].FindPawnInfo(Pawn) != INDEX_NONE)
		{
			Result = i;
			break;
		}
	}

	return Result;
}

int FPotentialRespawnGroups::UpdatePawnGroupInfo(int GroupIndex, APawn* Pawn, UTT_CheckPoint* CPTask)
{
	if (!IsValidIndex(GroupIndex))
		return INDEX_NONE;

	int LocalGroupIndex = FindGroupPawns(Pawn);

	FPotentialRespawnedPawnInfo NewData;
	NewData.OldPawn = Pawn;
	NewData.NeedToRespawn = false;
	NewData.HaveRespawned = false;
	NewData.CheckPointTask = CPTask;

	//This is a new pawn in the pool, then add this pawn to target group
	if (LocalGroupIndex == INDEX_NONE)
	{
		GetData()[GroupIndex].Add(NewData);
	}
	else
	{
		//The pawn should be moved to new group
		if (LocalGroupIndex != GroupIndex)
		{
			int PawnIndex = GetData()[LocalGroupIndex].FindPawnInfo(Pawn);

			//This pass should never work
			if (PawnIndex == INDEX_NONE)
				return INDEX_NONE;

			GetData()[LocalGroupIndex].RemoveAt(PawnIndex);

			PawnIndex = GetData()[GroupIndex].Add(NewData);
		}
	}

	UTT_CheckPoint* VaildCheckPointObject = CPTask;

	int Result = INDEX_NONE;

	if (CPTask == nullptr || !CPTask->IsValidLowLevel())
	{
		VaildCheckPointObject = Cast<UTT_CheckPoint>(UTT_CheckPoint::StaticClass()->GetDefaultObject());
	}
	else
	{
		VaildCheckPointObject = CPTask;

		if ( GetData()[GroupIndex].CheckPointTask != CPTask)
		{
			GetData()[GroupIndex].CheckPointTask = CPTask;
		}

		if ( GetData()[GroupIndex].CheckPointLevel < CPTask->Level)
		{
			GetData()[GroupIndex].CheckPointLevel = CPTask->Level;
		}

		Result = GetData()[GroupIndex].FindPawnInfo(Pawn);
	}
	
	if (VaildCheckPointObject)
	{
		if (!Pawn->OnDestroyed.IsAlreadyBound(VaildCheckPointObject, &UTT_CheckPoint::PawnDestroyedEventCallback))
		{
			Pawn->OnDestroyed.AddDynamic(VaildCheckPointObject, &UTT_CheckPoint::PawnDestroyedEventCallback);
		}

		if (!Pawn->OnEndPlay.IsAlreadyBound(VaildCheckPointObject, &UTT_CheckPoint::PawnOnEndPlay))
		{
			Pawn->OnEndPlay.AddDynamic(VaildCheckPointObject, &UTT_CheckPoint::PawnOnEndPlay);
		}

		//Add enter dead delegate to target pawn
		if (Pawn->GetClass()->ImplementsInterface(UDeadSupportInterface::StaticClass()))
		{
			int PawnIndex = GetData()[GroupIndex].FindPawnInfo(Pawn);

			GetData()[GroupIndex][PawnIndex].CheckPointTask = VaildCheckPointObject;

			if (PawnIndex != INDEX_NONE)
			{
				IDeadSupportInterface* RespawnSupport = Cast<IDeadSupportInterface>(Pawn);

				if (RespawnSupport != nullptr)
				{
					if (GetData()[GroupIndex][PawnIndex].EnterDeadHandle.IsValid())
					{
						RespawnSupport->OnCharacterEnterDead.Remove(GetData()[GroupIndex][PawnIndex].EnterDeadHandle);
						GetData()[GroupIndex][PawnIndex].EnterDeadHandle.Reset();
					}

					if (!RespawnSupport->OnCharacterEnterDead.IsBoundToObject(VaildCheckPointObject))
					{
						GetData()[GroupIndex][PawnIndex].EnterDeadHandle = RespawnSupport->OnCharacterEnterDead.AddUObject(VaildCheckPointObject, &UTT_CheckPoint::OnCharacterEnterDeadCallBack);
					}
				}
			}
		}
	}

	return Result;
}

int FPotentialRespawnGroups::FindEmptySlotIndex()
{
	int Result = INDEX_NONE;

	for (int i = 0; i < Num(); i++)
	{
		if (GetData()[i].Num() == 0)
		{
			Result = i;
		}
	}

	return Result;
}


