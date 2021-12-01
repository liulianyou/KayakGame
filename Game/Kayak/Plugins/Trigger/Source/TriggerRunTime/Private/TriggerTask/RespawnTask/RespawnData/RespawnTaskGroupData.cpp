#include "RespawnTaskGroupData.h"
#include "TT_Respawn.h"
#include "EvaluatorDataForRespawnPoint.h"
#include "EvaluatorOperation.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "Editor/ResespawnData/RespawnEditorGroupData.h"
#include "RespawnPostProcess/RespawnPostProcessBase.h"

FGroupRespawnPointInfo FGroupRespawnPointInfo::InvalidData;

void FSingleRespawnPointInfo::PopulateSpawnedPawnInfo(FNeedSpawnedPawnInfo& Info)
{
	Info.PostProcess.Append(PostProcess);
	Info.Transform = Transform;
}

bool FSingleRespawnPointInfo::CanbeUsedToSpawnNewPawn(const RespawnTaskGroupData::FRespawInfoExtend& PawnInfo)
{
	if (HasBeenUsed)
		return false;

	if (PreFilterCondition == nullptr)
	{
		return true;
	}

	UED_RespawnPoint* RespawnPointCondition = Cast<UED_RespawnPoint>(PreFilterCondition->GetExternalData());

	RespawnPointCondition->SetPawnInfo(PawnInfo.OldPawn);

	if (PreFilterCondition->Evaluator())
	{
		return true;
	}
	else
	{
		return false;
	}
}

void FSingleRespawnPointInfo::MarkDirty()
{
	HasBeenUsed = true;
}

void FSingleRespawnPointInfo::Clear()
{
	HasBeenUsed = false;

	PreFilterCondition->BP_Reset();
}

void FSingleRespawnPointInfo::AddRespawnPostProcess(const TArray<URespawnPostProcessBase*>& RespawnPostProcess)
{
	for (int i = 0; i < RespawnPostProcess.Num(); i++)
	{
		URespawnPostProcessBase* NewData = NewObject<URespawnPostProcessBase>(RespawnPostProcess[i]->GetOuter(), NAME_None, RF_NoFlags, RespawnPostProcess[i]);

		PostProcess.Add(NewData);
	}
}

void FGroupRespawnPointInfo::FindAppropriatePoints(TArray<int>& ExculdePointIndex, int& MatchedCount,
	TArray<RespawnTaskGroupData::FRespawInfoExtend>& PawnInfo)
{
	if (ExculdePointIndex.Num() >= GroupPoints.Num())
		return;

	TArray<int> PendingToSearchRange;
	for (int i = 0; i < GroupPoints.Num(); i++)
	{
		if (ExculdePointIndex.Find(i) != INDEX_NONE)
		{
			continue;
		}

		PendingToSearchRange.Add(i);
	}

	if (PendingToSearchRange.Num() == 0)
		return;

	TArray<int> ActualNeedToSpawnedPawnIndex;

	for (int i = 0; i < PawnInfo.Num(); i++)
	{
		if (PawnInfo[i].RespawnPointIndex != INDEX_NONE)
		{
			continue;
		}
		ActualNeedToSpawnedPawnIndex.Add(i);
	}

	int LocalMathcedCount = 0;

	for (int i = 0; i < ActualNeedToSpawnedPawnIndex.Num(); i++)
	{
		int RandomPointIndex = FMath::RandRange(0, PendingToSearchRange.Num() -1);

		if (GroupPoints[RandomPointIndex].CanbeUsedToSpawnNewPawn(PawnInfo[ActualNeedToSpawnedPawnIndex[i]]))
		{
			PawnInfo[ActualNeedToSpawnedPawnIndex[i]].RespawnPointIndex = i;
			
			GroupPoints[RandomPointIndex].PopulateSpawnedPawnInfo(PawnInfo[ActualNeedToSpawnedPawnIndex[i]]);

			ExculdePointIndex.Add(i);

			PendingToSearchRange.RemoveAt(RandomPointIndex);

			LocalMathcedCount++;
		}
	}

	if (LocalMathcedCount > 0)
	{
		MatchedCount += LocalMathcedCount;

		if (LocalMathcedCount < ActualNeedToSpawnedPawnIndex.Num())
		{
			FindAppropriatePoints(ExculdePointIndex, MatchedCount, PawnInfo);
		}
	}
}

void FGroupRespawnPointInfo::AddRespawnPostProcess(const TArray<URespawnPostProcessBase*>& RespawnPostProcess)
{
	if (GroupPoints.Num() == 0)
	{
		GroupPoints.Add(FSingleRespawnPointInfo());
	}

	for (int i = 0; i < GroupPoints.Num(); i++)
	{
		GroupPoints[i].AddRespawnPostProcess(RespawnPostProcess);
	}
}

int FGroupRespawnPointInfo::TryToGetRespawnInfo(TArray<RespawnTaskGroupData::FRespawInfoExtend>& PawnInfo)
{
	TArray<int> ExculdePointIndex;
	ExculdePointIndex.Empty();

	int MatchedCount = INDEX_NONE;

	FindAppropriatePoints(ExculdePointIndex, MatchedCount, PawnInfo);

	return MatchedCount + 1;
}

int FGroupRespawnPointInfo::GetNumOfValidCandidatePoint()
{
	return GroupPoints.Num();
}

bool FGroupRespawnPointInfo::IsValid()
{
	return GroupPoints.Num() != 0;
}

void FRespawnTemplateData::FindAppropiateGroupPointIndex(TArray<int>& ExcudeGroupIndex,
	TArray<RespawnTaskGroupData::FRespawInfoExtend>& PawnInfos)
{
	//No empty group point to spawn new pawn
	if (ExcudeGroupIndex.Num() >= GruopInfos.Num())
	{
		return;
	}

	/*
	* The actual research range of group point
	* 
	* When the number of pawn who need to be respawned is large then the max point number in the target group then I need to search another group to respawn.
	*/
	TArray<int> PendingToSearch;
	PendingToSearch.Empty();

	for (int i = 0; i < GruopInfos.Num(); i++)
	{
		int Index = ExcudeGroupIndex.Find(i);

		if (Index == INDEX_NONE)
		{
			PendingToSearch.Add(i);
		}
	}

	if (PendingToSearch.Num() == 0)
		return;

	int LocalIndex = FMath::RandRange(0, PendingToSearch.Num() - 1);

	int Result = PendingToSearch[LocalIndex];

	int MathcedNum = GruopInfos[Result].TryToGetRespawnInfo(PawnInfos);
	if (MathcedNum > 0)
	{
		for (int i = 0; i < PawnInfos.Num(); i++)
		{
			if (PawnInfos[i].RespawnPointIndex != INDEX_NONE)
			{
				PawnInfos[i].RespawnGruopIndex = Result;
			}
		}
		ExcudeGroupIndex.Add(Result);
	}

	//There is still some pawn need to respawn
	if (MathcedNum < PawnInfos.Num())
	{
		FindAppropiateGroupPointIndex(ExcudeGroupIndex, PawnInfos);
	}
}

void FRespawnTemplateData::FindAppropiateGroupPoint(TArray<RespawnTaskGroupData::FRespawInfoExtend>& PawnInfos)
{
	TArray<int> ExcudeGroupIndex;
	ExcudeGroupIndex.Empty();

	FindAppropiateGroupPointIndex(ExcudeGroupIndex, PawnInfos);

}

int FRespawnTemplateData::GetNumOfCandidateRespawnPoint()
{
	int Result = 0;

	for (int i = 0; i < GruopInfos.Num(); i++)
	{
		Result += GruopInfos[i].GetNumOfValidCandidatePoint();
	}

	return Result;
}

void FRespawnTemplateData::SetData(int GroupIndex, int PointIndex, const FSingleRespawnPointInfo& RespawnData)
{
	if (GruopInfos.IsValidIndex(GroupIndex))
	{
		if (GruopInfos[GroupIndex].GroupPoints.IsValidIndex(PointIndex))
		{
			FSingleRespawnPointInfo& Data = GruopInfos[GroupIndex].GroupPoints[PointIndex];

			Data.Transform = RespawnData.Transform;

			for (int i = 0; i < Data.PostProcess.Num(); i++)
			{
				if (Data.PostProcess[i] != nullptr)
				{
					Data.PostProcess[i]->MarkPendingKill();
				}
			}

			Data.PostProcess.Empty();

			for (int i = 0; i < RespawnData.PostProcess.Num(); i++)
			{
				if (RespawnData.PostProcess[i] != nullptr)
				{
					URespawnPostProcessBase* NewPostProcessObject = NewObject<URespawnPostProcessBase>(RespawnRuntimeData, RespawnData.PostProcess[i]->GetClass(), *RespawnData.PostProcess[i]->GetName(), RF_NoFlags, RespawnData.PostProcess[i]);
					Data.PostProcess.Add(NewPostProcessObject);
				}
			}

			if (Data.PreFilterCondition != nullptr)
			{
				Data.PreFilterCondition->MarkPendingKill();
				Data.PreFilterCondition = nullptr;
			}
			
			if (RespawnData.PreFilterCondition != nullptr)
			{
				Data.PreFilterCondition = NewObject<UEvaluatorOperation>(RespawnRuntimeData, RespawnData.PreFilterCondition->GetClass(), *RespawnData.PreFilterCondition->GetName(), RF_NoFlags, RespawnData.PreFilterCondition);
			}
		}
	}
}

void FRespawnTemplateData::RemoveData(int GroupIndex, int PointIndex)
{
	if (GroupIndex == INDEX_NONE)
	{
		GruopInfos.Empty();
	}
	else if (PointIndex == INDEX_NONE)
	{
		if (!GruopInfos.IsValidIndex(GroupIndex))
			return;

		GruopInfos[GroupIndex].GroupPoints.Empty();
	}
	else
	{
		if (!GruopInfos.IsValidIndex(GroupIndex))
			return;

		if (GruopInfos[GroupIndex].GroupPoints.IsValidIndex(PointIndex))
			return;

		GruopInfos[GroupIndex].GroupPoints.RemoveAt(PointIndex);
	}

#if WITH_EDITOR
	RespawnRuntimeData->UpdateEditorViewInfo();
#endif
}

void FRespawnTemplateData::AddRespawnPostProcess(const TArray<URespawnPostProcessBase*>& RespawnPostProcess)
{
	if (GruopInfos.Num() == 0)
	{
		GruopInfos.Add(FGroupRespawnPointInfo());
	}

	for (int i = 0; i < GruopInfos.Num(); i++)
	{
		GruopInfos[i].AddRespawnPostProcess(RespawnPostProcess);
	}

}

URespawnTaskGroupData::URespawnTaskGroupData(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	Data.SetRuntimeDataOwner(this);

#if WITH_EDITORONLY_DATA

	EditorRespawnDataClass = ARespawnEditorGroupData::StaticClass();

#endif
}

void URespawnTaskGroupData::BeginDestroy()
{
	Super::BeginDestroy();

	Reset(nullptr);
}

#if WITH_EDITOR
void URespawnTaskGroupData::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (FProperty* PropertyThatChanged = PropertyChangedEvent.Property)
	{
		UpdateEditorViewInfo();
	}
}
#endif

void URespawnTaskGroupData::GetRespawnInfo(TArray<FNeedSpawnedPawnInfo>& RespawnInfo)
{
	TArray<RespawnTaskGroupData::FRespawInfoExtend> LocalRespawnInfomations;

	for (int i = 0; i < RespawnInfo.Num(); i++)
	{
		LocalRespawnInfomations.Add(RespawnTaskGroupData::FRespawInfoExtend(RespawnInfo[i]));
	}

	Data.FindAppropiateGroupPoint(LocalRespawnInfomations);

	for (int i = 0; i < LocalRespawnInfomations.Num(); i++)
	{
		RespawnInfo[i].PostProcess.Append(LocalRespawnInfomations[i].PostProcess);

		if (LocalRespawnInfomations[i].Transform.Equals(FTransform::Identity))
		{
			AActor* OuterActor = GetTypedOuter<AActor>();

			if (OuterActor != nullptr)
			{
				RespawnInfo[i].Transform = OuterActor->GetActorTransform();
			}
			else
			{
				UE_LOG(LogTrigger, Error, TEXT("There is no valid transform to respawn the target pawn, This will cause the pawn will be respawned at wrong location!!"));
			}
		}
		else
		{
			RespawnInfo[i].Transform = LocalRespawnInfomations[i].Transform;
		}
		
		RespawnInfo[i].IsOutValueValid = true;
	}
}

void URespawnTaskGroupData::Reset(UOperationInformationBase* ResetOperation)
{
	if (ResetOperation == nullptr)
	{
#if WITH_EDITORONLY_DATA
		ClearEditorData();
#endif
	}
}

int URespawnTaskGroupData::GetTeammateImmediateRespawnGroupIndex(const APawn* Pawn)
{
	int Result = INDEX_NONE;

	TArray<APawn*> Teammates;
	GetTeammates(Teammates, Pawn);

	//There is no teammate for the target pawn then just return.
	if (Teammates.Num() == 0)
		return Result;

	Result = FindAppropriateRespawnInfo(Teammates);

	return Result;
}

void URespawnTaskGroupData::GetTeammates(TArray<APawn*> Teammates, const APawn* Pawn)
{
	Teammates.Empty();

	if (Pawn == nullptr)
		return;

	//For now there is no interface to support teammate function, so I just iterator all pawns in the world
	FConstPlayerControllerIterator PlayerControllerInterator = Pawn->GetWorld()->GetPlayerControllerIterator();

	for (FConstPlayerControllerIterator Iterator = PlayerControllerInterator; Iterator; ++Iterator)
	{
		APlayerController* PlayerController = Cast<APlayerController>(Iterator->Get());

		if (PlayerController != nullptr && PlayerController->GetPawn() && PlayerController->GetPawn() != Pawn)
		{
			Teammates.Add(PlayerController->GetPawn());
		}
	}
}

int URespawnTaskGroupData::FindAppropriateRespawnInfo(const TArray<APawn*>& Teammates)
{
	for (int i = 0; i < Teammates.Num(); i++)
	{
		for (int j = 0; j < RespawnInfomations.Num(); j++)
		{
			//When the pawn have been respawned
			if (Teammates[i] == RespawnInfomations[j].OldPawn)
			{
				int UsedCount = 1;
				//try to check the target group have enough space to spawn new pawn
				for (int k = 0; k < RespawnInfomations.Num(); k++)
				{
					//With the same group index but different pawn index for different elements
					if (RespawnInfomations[j].RespawnGruopIndex == RespawnInfomations[k].RespawnGruopIndex && 
						j != k &&
						RespawnInfomations[j].RespawnPointIndex != RespawnInfomations[k].RespawnPointIndex)
					{
						UsedCount++;
					}
				}

				//There is enough points in the target group to spawn the pawn
				if (UsedCount < Data.GruopInfos[RespawnInfomations[j].RespawnGruopIndex].GroupPoints.Num())
					return j;
			}
		}
	}

	return INDEX_NONE;
}

#if WITH_EDITOR
void URespawnTaskGroupData::ApplyEditorConfigData(ARespawnEditorPointBase* PointInfo)
{
	for (int i = 0; i < EditorRespawnDatas.Num(); i++)
	{
		EditorRespawnDatas[i]->ApplyEditorConfigData(PointInfo);
	}
}

#endif


#if WITH_EDITORONLY_DATA
void URespawnTaskGroupData::CreateEditorViewInfo()
{
	if (GetRespawnTaskOwner() == nullptr)
		return;

	for (int i = 0; i < Data.GruopInfos.Num(); i++)
	{
		GetRespawnEditorData(i)->UpdateEditorViewInfo(this);
	}
}

void URespawnTaskGroupData::UpdateEditorViewInfo()
{
	if (GetRespawnTaskOwner() == nullptr)
		return;

	for (int i = 0; i < Data.GruopInfos.Num(); i++)
	{
		GetRespawnEditorData(i)->UpdateEditorViewInfo(this);
	}
}

void URespawnTaskGroupData::GetBelongedEditorDataActor(TArray<AActor*>& BelongedActors, ARespawnEditorPointBase* RespawnPoint)
{
	BelongedActors.Empty();

	for (int i = 0; i < EditorRespawnDatas.Num(); i++)
	{
		int Index = EditorRespawnDatas[i]->IsContainRespawnPoint(RespawnPoint);

		if (Index != INDEX_NONE)
		{
			BelongedActors.Add(EditorRespawnDatas[i]);
		}
	}
}


ARespawnEditorDataBase* URespawnTaskGroupData::GetRespawnEditorData(int Index)
{
	if (Index < 0)
		return nullptr;

	if (Index >= EditorRespawnDatas.Num())
	{
		EditorRespawnDatas.Reserve(Index + 1);
		EditorRespawnDatas.SetNum(Index + 1);
		EditorRespawnDatas[Index] = nullptr;
	}

	if (EditorRespawnDatas[Index] == nullptr)
	{
		ARespawnEditorDataBase* RespawnDataActor = GetWorld()->SpawnActor<ARespawnEditorDataBase>(EditorRespawnDataClass,
			GetRespawnTaskOwner()->TryToGetOwnerActor()->GetActorLocation(), 
			GetRespawnTaskOwner()->TryToGetOwnerActor()->GetActorRotation());

		ARespawnEditorGroupData* RespawnEditorGroupDataActor = Cast<ARespawnEditorGroupData>(RespawnDataActor);
		if (RespawnEditorGroupDataActor != nullptr)
		{
			RespawnEditorGroupDataActor->InitializeEditorGroupData(this, Index);
		}
		else
		{
			RespawnDataActor->InitializeData(this);
		}

		EditorRespawnDatas[Index] = RespawnDataActor;
	}

	return EditorRespawnDatas[Index];
}

void URespawnTaskGroupData::ClearEditorData()
{
	for (int Index = 0; Index < EditorRespawnDatas.Num(); Index++)
	{
		if(EditorRespawnDatas[Index] == nullptr)
			continue;

		EditorRespawnDatas[Index]->ClearData(this);
	}

	EditorRespawnDatas.Empty();
}

#endif
