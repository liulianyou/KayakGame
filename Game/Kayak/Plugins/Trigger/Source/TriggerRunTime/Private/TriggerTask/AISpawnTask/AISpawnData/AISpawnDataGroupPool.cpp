#include "AISpawnDataGroupPool.h"

FInfinityRound FInfinityRound::InvalidValue;
FPendingSpawnNewAIInfo FPendingSpawnNewAIInfo::InvaildValue;

bool FInfinityRound::IsValid() const
{
	return IsInfinityPool && RoundIndex > INDEX_NONE && 
		(MaxDurationTime < AISPawnDataGroupPool::MINIMALVALIDDURATIONTIME || (MaxDurationTime >= AISPawnDataGroupPool::MINIMALVALIDDURATIONTIME && DurationTime <= MaxDurationTime));
}

void FInfinityRound::IncreaseEscapedTime(float DeltaTime)
{
	if(StartToCalculateDurationTime)
		DurationTime += DeltaTime;
}

bool FPendingSpawnNewAIInfo::CanbeUsedToSpawnAI(int RoundIndexParam)
{
	if (RoundIndex == RoundIndexParam && !IsSpawned())
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool FPendingSpawnNewAIInfo::IsValid()
{
	if (RoundIndex == INDEX_NONE)
		return false;
	else
		return true;
}

UAISpawnDataGroupPool::UAISpawnDataGroupPool(const FObjectInitializer& ObjectIntializer)
	:Super(ObjectIntializer)
{

}

void UAISpawnDataGroupPool::GetCurrentVaildAIInfoToSpawn(float DeltaTime, TArray<FAIInfo>& AIInfos, bool& BreakSpawnChain, bool& SkipCurrentSpawn)
{
	Super::GetCurrentVaildAIInfoToSpawn(DeltaTime, AIInfos, BreakSpawnChain, SkipCurrentSpawn);

	if (InfinityInfos.Num() == 0)
		return;

	for (int i = 0; i < InfinityInfos.Num(); i++)
	{
		/*
		* If the infinity info is valid then this task will never finished automatically
		* If you want to finish this task which used this data you should invoke the TrytoStop function
		*/
		if (IsInfinityInfoValid(InfinityInfos[i]))
		{
			BreakSpawnChain = false;
			break;
		}
	}

	BreakSpawnChain = BreakSpawnChain && IsAllPendingSpawnedAIDead();

	//If current AI should be skipped, the new AI should not be skipped
	if (SkipCurrentSpawn)
	{
		AIInfos.Empty();
		SkipCurrentSpawn = false;
	}

	TrySpawnAppendAI(DeltaTime, AIInfos);

}

void UAISpawnDataGroupPool::TrySpawnAppendAI(float DeltaTime, TArray<FAIInfo>& AIInfos)
{
	for (int i = 0; i < InfinityInfos.Num(); i++)
	{
		//If this infinity info is not valid then just skip it
		if(!IsInfinityInfoValid(InfinityInfos[i]))
			continue;

		/*
		* If the left number of pending spawned AI larger then the populate threshold value then spawn all AIs in the pending info
		*/

		if (GetPendingSpawnedAINum(InfinityInfos[i].RoundIndex) >= (InfinityInfos[i].PopulateThreshold < AISPawnDataGroupPool::MINIALCOUNT ? AISPawnDataGroupPool::MINIALCOUNT : InfinityInfos[i].PopulateThreshold))
		{
			while (GetPendingSpawnedAINum(InfinityInfos[i].RoundIndex) > 0)
			{
				StartToProcessRound(InfinityInfos[i], AIInfos, DeltaTime);
			}

			InfinityInfos[i].MarkDurationTimeStarted();
		}

		InfinityInfos[i].IncreaseEscapedTime(DeltaTime);
	}
}

bool UAISpawnDataGroupPool::StartToProcessRound(FInfinityRound& InfinityInfo, TArray<FAIInfo>& AIInfos, float DeltaTime)
{
	int PointNumber = 0;

	bool NewAINeedToSpawned = true;

	if (InfinityInfo.DefaultMaxRemainPointToSpawnPendAI == INDEX_NONE)
	{
		for (int i = 0; i < RoundInfos[InfinityInfo.RoundIndex].GroupSpawnDatas.Num(); i++)
		{
			InfinityInfo.DefaultMaxRemainPointToSpawnPendAI += RoundInfos[InfinityInfo.RoundIndex].GroupSpawnDatas[i].AIDatas.Num();
		}
	}

	if (InfinityInfo.RemainPointToSpawnPendingAI == INDEX_NONE)
	{
		InfinityInfo.RemainPointToSpawnPendingAI = InfinityInfo.DefaultMaxRemainPointToSpawnPendAI;
	}

	for (int i = 0; i < RoundInfos[InfinityInfo.RoundIndex].GroupSpawnDatas.Num(); i++)
	{
		PointNumber += RoundInfos[InfinityInfo.RoundIndex].GroupSpawnDatas[i].AIDatas.Num();

		int SpawnedCount = InfinityInfo.DefaultMaxRemainPointToSpawnPendAI - InfinityInfo.RemainPointToSpawnPendingAI;

		if (PointNumber < SpawnedCount)
		{
			continue;
		}

		NewAINeedToSpawned = StartToProcessGroup(InfinityInfo, i, AIInfos, DeltaTime);
	}

	return NewAINeedToSpawned;
}

bool UAISpawnDataGroupPool::StartToProcessGroup(FInfinityRound& InfinityInfo, int GroupIndex, TArray<FAIInfo>& AIInfos, float DeltaTime)
{
	int PointNumber = INDEX_NONE;

	bool NewAINeedToSpawned = false;

	for (int i = 0; i < GroupIndex; i++)
	{
		PointNumber += RoundInfos[InfinityInfo.RoundIndex].GroupSpawnDatas[i].AIDatas.Num();
	}

	for (int i = 0; i < RoundInfos[InfinityInfo.RoundIndex].GroupSpawnDatas[GroupIndex].AIDatas.Num(); i++)
	{
		int SpawnedCount = InfinityInfo.DefaultMaxRemainPointToSpawnPendAI - InfinityInfo.RemainPointToSpawnPendingAI;

		PointNumber++;

		if (PointNumber < SpawnedCount)
		{
			continue;
		}

		FPendingSpawnNewAIInfo& PendingInfo = PopPendingSpawnAIInfo(InfinityInfo.RoundIndex);

		//There is no pending AI to be spawned
		if (PendingInfo.IsSpawned() || !PendingInfo.IsValid())
		{
			NewAINeedToSpawned = false;
			break;
		}

		PendingInfo.AIInfo.Location = RoundInfos[InfinityInfo.RoundIndex].GroupSpawnDatas[GroupIndex].AIDatas[i].AITransform.GetLocation();
		PendingInfo.AIInfo.Rotation = RoundInfos[InfinityInfo.RoundIndex].GroupSpawnDatas[GroupIndex].AIDatas[i].AITransform.Rotator();

		FAIInfo AIInfo;

		AIInfo = PendingInfo.AIInfo;

		PendingInfo.MarkSpawned();

		AIInfos.Add(AIInfo);

		InfinityInfo.RemainPointToSpawnPendingAI--;

		NewAINeedToSpawned = true;
	}

	return NewAINeedToSpawned;

}

FPendingSpawnNewAIInfo& UAISpawnDataGroupPool::PopPendingSpawnAIInfo(int RoundIndex)
{
	for (int i = 0; i < PendingSpawnAIInfos.Num(); i++)
	{
		if (PendingSpawnAIInfos[i].CanbeUsedToSpawnAI(RoundIndex))
		{
			return PendingSpawnAIInfos[i];
		}
	}

	return FPendingSpawnNewAIInfo::InvaildValue;
}

int UAISpawnDataGroupPool::GetPendingSpawnedAINum(int RoundIndex)
{
	int Result = 0;

	for (int i = 0; i < PendingSpawnAIInfos.Num(); i++)
	{
		if (PendingSpawnAIInfos[i].CanbeUsedToSpawnAI(RoundIndex))
		{
			Result++;
		}
	}

	return Result;
}


bool UAISpawnDataGroupPool::CanStopSpawnAI()
{
	bool Result = Super::CanStopSpawnAI();

	bool HasValidInfinityInfo = false;

	for (int i = 0; i < InfinityInfos.Num(); i++)
	{
		if (IsInfinityInfoValid(InfinityInfos[i]))
		{
			HasValidInfinityInfo = true;
			break;
		}
	}

	return Result && !HasValidInfinityInfo;
}

void UAISpawnDataGroupPool::ControllerDeadOrDestroyedCallback(bool IsDead, AAIController* Controller)
{
	//Make sure the controller should never be none
	if(Controller == nullptr)
		return;

	bool FindInAIInfosAtCurrentRound = false;

	for (int i = 0; i < AIInfosAtCurrentRound.Num(); i++)
	{
		if (AIInfosAtCurrentRound[i].Controller == Controller && !AIInfosAtCurrentRound[i].IsControllerDeadOrDestroyed())
		{
			//Should never execute this pass
			if (PendingSpawnAIInfos.Num() >= AIInfosAtCurrentRound.Num())
			{
				break;
			}

			FPendingSpawnNewAIInfo AIInfo;

			AIInfo.RoundIndex = AIInfosAtCurrentRound[i].RoundIndex;

			AIInfosAtCurrentRound[i].AIInfo.DuplicateData<FSpawnDataGroup_AIInfo_ExternalData>(AIInfo.AIInfo);

			PendingSpawnAIInfos.Add(AIInfo);

			/*
			* Try to remove the controller which is already in the pending infos.
			* This pass should never work, avoid crash just in case
			*/
			for (int j = 0; j < PendingSpawnAIInfos.Num(); j++)
			{
				if (PendingSpawnAIInfos[j].AIController == Controller)
				{
					PendingSpawnAIInfos.RemoveAt(j--);
				}
			}

			FindInAIInfosAtCurrentRound = true;

			break;
		}
	}

	if (!FindInAIInfosAtCurrentRound)
	{
		int NumOfFindInPendingSpawnAIInfos = 0;

		//If the dead AI is not find in the original info then try to find it in the PendingSpawnAIInfos.
		for (int i = 0; i < PendingSpawnAIInfos.Num(); i++)
		{
			if (PendingSpawnAIInfos[i].AIController == Controller)
			{
				FPendingSpawnNewAIInfo AIInfo;

				if (i < 0 || i >= AIInfosAtCurrentRound.Num())
				{
					UE_LOG(LogTrigger, Warning, TEXT("The lenght of Pending SpawnAIInfos is not equal to the AIInfosAtCurrentRound"));
					continue;
				}

				AIInfo.RoundIndex = AIInfosAtCurrentRound[i].RoundIndex;

				AIInfosAtCurrentRound[i].AIInfo.DuplicateData<FSpawnDataGroup_AIInfo_ExternalData>(AIInfo.AIInfo);

				//Add new one at the last index
				PendingSpawnAIInfos.Add(AIInfo);

				//Remove old one
				PendingSpawnAIInfos.RemoveAt(i--);

				NumOfFindInPendingSpawnAIInfos++;
			}
		}

		if (NumOfFindInPendingSpawnAIInfos == 0 && PendingSpawnAIInfos.Num() > 0)
		{
			if(Controller->GetPawn() != nullptr && Controller->GetPawn()->IsValidLowLevelFast())
				UE_LOG(LogTrigger, Warning, TEXT("The new AI will never be spawned again, with Pawn class:%s"), *Controller->GetPawn()->GetClass()->GetName());
		}

	}

	Super::ControllerDeadOrDestroyedCallback(IsDead, Controller);
}

void UAISpawnDataGroupPool::SpawnAIPostProcess(AAIController* Controller, APawn* Pawn, FAIInfo& AIInfo)
{
	Super::SpawnAIPostProcess(Controller, Pawn, AIInfo);

	bool HaveSetted = false;

	for (int i = 0; i < AIInfosAtCurrentRound.Num(); i++)
	{
		if (AIInfosAtCurrentRound[i].Controller == Controller)
		{
			HaveSetted = true;
			break;
		}
	}

	//If this controller have been inspected then do not add it to pending infos again
	if (!HaveSetted)
	{
		for (int i = 0; i < PendingSpawnAIInfos.Num(); i++)
		{
			if (PendingSpawnAIInfos[i].AIInfo == AIInfo && PendingSpawnAIInfos[i].IsSpawned() &&PendingSpawnAIInfos[i].AIController == nullptr)
			{
				PendingSpawnAIInfos[i].AIController = Controller;
				break;
			}
		}
	}
}

bool UAISpawnDataGroupPool::IsInfinityInfoValid(const FInfinityRound& InfinityInfo) const
{
	bool Result = RoundInfos.IsValidIndex(InfinityInfo.RoundIndex);

	Result = Result && InfinityInfo.IsValid();

	return Result;
}


FInfinityRound& UAISpawnDataGroupPool::GetInifinityInfo(int RoundIndex)
{
	for (int i = 0; i < InfinityInfos.Num(); i++)
	{
		if (InfinityInfos[i].RoundIndex == RoundIndex)
			return InfinityInfos[i];
	}

	return FInfinityRound::InvalidValue;
}


bool UAISpawnDataGroupPool::IsAllPendingSpawnedAIDead()
{
	bool Result = true;

	for (int i = 0; i < PendingSpawnAIInfos.Num(); i++)
	{
		if (PendingSpawnAIInfos[i].IsSpawned() 
			&& PendingSpawnAIInfos[i].AIController != nullptr &&
			PendingSpawnAIInfos[i].AIController->IsValidLowLevel())
		{
			Result = false;
			break;
		}
	}

	return Result;
}