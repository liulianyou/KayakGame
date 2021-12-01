#include "TriggerStatics/TS_AIStatics.h"
#include "TT_AISpawnBase.h"
#include "TriggerDefinition.h"
#include "TriggerBlueprintLib.h"
#include "OperationInformationManager.h"
#include "AISpawnData/AISpawnDataGroup.h"
#include "GameFramework/GameModeBase.h"
#include "TriggerTaskSkipCommonOperationInfos.h"
#include "TriggerBlueprintLib.h"
#include "TSS_GoToFinishedState.h"
#include "AISpawnDataBase.h"
#include "Engine/World.h"

bool operator==(const FAISpawnInformation& Left, const FAISpawnInformation& Right)
{
	if (Left.RoundIndex == Right.RoundIndex)
		return true;
	else
		return false;
}


UTS_AIStatics::UTS_AIStatics(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	InspectorClasses.Add(UTT_AISpawnBase::StaticClass());

	if (!HasAnyFlags(RF_ClassDefaultObject))
	{
		AIStateInspectorHandle = FTriggerDelegate::TriggerTaskStateNativeEvent.AddUObject(this, &UTS_AIStatics::OnAISpawnStateEvent);
		
		//FWorldDelegates::OnWorldBeginTearDown.AddUObject(this, &UTS_AIStatics::OnWorldTearDown);
		//For default object to create new TS_AIStatics.
		FGameModeEvents::OnGameModeInitializedEvent().AddUObject(this, &UTS_AIStatics::OnGameModeInitialize);
	}
}

void UTS_AIStatics::OnAISpawnStateEvent(UTriggerTaskBase* Task)
{
	if(Task == nullptr || !Task->IsValidLowLevel())
		return;

	bool InvaildTarget = false;
	for (int i = 0; i < InspectorClasses.Num(); i++)
	{
		if (Task->IsA(InspectorClasses[i]))
		{
			InvaildTarget = true;
			break;
		}
	}

	if (InvaildTarget == true)
	{
		switch (Task->GetCurrentTriggerTaskState())
		{
		case ETriggerTaskState::ETriggerTaskState_Active:
			AISpawnTaskActiveEvent(Task);
			break;
		case ETriggerTaskState::ETriggerTaskState_Finished:
			AISpawnTaskFinishEvent(Task);
			break;
		default:
			break;
		}
	}
}

void UTS_AIStatics::OnWorldTearDown(UWorld* World)
{
	Reset();
}

void UTS_AIStatics::OnGameModeInitialize(AGameModeBase* GameMode)
{

	UTS_AIStatics* AIStatic = UTriggerBlueprintLib::GetAIStatics(UTS_AIStatics::StaticClass());

	if (AIStatic != nullptr)
	{
		AIStatic->Reset();
	}
	
}

void UTS_AIStatics::Reset()
{
	StartRound = 0;
	CurrentRound = 0;
	NextPredictionRoundIndex = 0;
	CurrentActiveTask.Empty();

#pragma region Liulianyou_Templely
	RegionIndex = 0;
#pragma endregion Liulianyou_Templely
}

void UTS_AIStatics::AISpawnTaskFinishEvent(UTriggerTaskBase* Task)
{
	CurrentActiveTask.Remove(Task);

	UTT_AISpawnBase* AISpawnBase = Cast<UTT_AISpawnBase>(Task);

	if(AISpawnBase == nullptr)
		return;

	if(AISpawnBase->GetSpawnData() == nullptr)
		return;

	if (AISpawnBase->GetSpawnData()->AISpawnFinished.IsAlreadyBound(this, &UTS_AIStatics::OnNewAISpawnedFinished))
	{
		AISpawnBase->GetSpawnData()->AISpawnFinished.RemoveDynamic(this, &UTS_AIStatics::OnNewAISpawnedFinished);
	}
}

void UTS_AIStatics::AISpawnTaskActiveEvent(UTriggerTaskBase* Task)
{
	CurrentActiveTask.Add(Task);

	UTT_AISpawnBase* AISpawnBase = Cast<UTT_AISpawnBase>(Task);

	if (AISpawnBase != nullptr && UTriggerBlueprintLib::GetOperationInfoManager() != nullptr)
	{
		UAISpawnDataGroup* GroupSpawnData = Cast<UAISpawnDataGroup>(AISpawnBase->GetSpawnData());

		if (GroupSpawnData != nullptr)
		{
			int MaxRoundCount = GroupSpawnData->GetMaxRound();

			//Only care about when the current round is less then start round
			if (NextPredictionRoundIndex < StartRound)
			{
				if (MaxRoundCount + NextPredictionRoundIndex <= StartRound)
				{
					CurrentRound += MaxRoundCount;

					UTSS_GoToFinishedState* SkipStyle = NewObject<UTSS_GoToFinishedState>(this, "TTSS_GoToFinishedState");

					UTriggerTaskSkip_AIStaticsSkip* SkipOperation = UTriggerTaskSkip_AIStaticsSkip::AIStaticsSkip(this, Task, nullptr, SkipStyle);

					Task->Skip(SkipOperation);
				}
				else
				{
					int Index = StartRound - NextPredictionRoundIndex;
					//CurrentRound = FMath::Max(CurrentRound, StartRound);

					if (!GroupSpawnData->AISpawnFinished.IsAlreadyBound(this, &UTS_AIStatics::OnNewAISpawnedFinished))
					{
						GroupSpawnData->AISpawnFinished.AddDynamic(this, &UTS_AIStatics::OnNewAISpawnedFinished);
					}

					GroupSpawnData->SetStartRoundIndex(Index);
				}

				NextPredictionRoundIndex += GroupSpawnData->GetMaxRound();
			}
			else
			{
				if (!GroupSpawnData->AISpawnFinished.IsAlreadyBound(this, &UTS_AIStatics::OnNewAISpawnedFinished))
				{
					GroupSpawnData->AISpawnFinished.AddDynamic(this, &UTS_AIStatics::OnNewAISpawnedFinished);
				}
			}
		}
	}
}

void UTS_AIStatics::OnNewAISpawnedFinished(UAISpawnDataBase* SpawnData)
{
	CurrentRound++;
}

int UTS_AIStatics::GetCurrentRound()
{
	return CurrentRound;
}

void UTS_AIStatics::SetStartRound(int Round)
{
	UE_LOG(LogTrigger, Warning, TEXT("AIStatic:: Start to spawn AI form round %d"), Round);

	//Update current Round to target start round
	StartRound = Round;
}

void UTS_AIStatics::SetAISpawnRoundSkipWaitAndDelayTime( bool Value)
{
	UE_LOG(LogTrigger, Warning, TEXT("AIStatic:: Skip Wait and Delay time round %b"), Value);
	SkipAISpawnWaitTimeAndDelayTime = Value;
}

int UTS_AIStatics::GetStartRound( )
{
	return StartRound;
}

void UTS_AIStatics::BeginDestroy()
{
	Super::BeginDestroy();

	if (AIStateInspectorHandle.IsValid())
	{
		FTriggerDelegate::TriggerTaskStateNativeEvent.Remove(AIStateInspectorHandle);
	}
}