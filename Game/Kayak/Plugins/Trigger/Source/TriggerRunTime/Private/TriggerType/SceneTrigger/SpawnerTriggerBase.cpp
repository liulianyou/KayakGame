#include "TriggerType/SceneTrigger/SpawnerTriggerBase.h"
#include "TriggerTask/AISpawnTask/TT_AISpawnBase.h"
#include "TriggerTask/AISpawnTask/AISpawnData/SimpleSpawnDataGroup.h"
#include "TriggerTaskComponent/TriggerTaskComponentBase.h"
#include "TriggerRunTime/Public/Tool/AISpawnerTemplate.h"
#include "TriggerEvaluator/TriggerEvaluator_AND.h"
#include "TriggerEvaluator/CheckActorOverlaped.h"
#include "Tool/Filter/TriggerFilter_Actor.h"
#include "TriggerEvaluator/CheckKilledNumberOfAIInTargetTask.h"
#include "TriggerEvaluator/TriggerEvaluator_OR.h"
#include "Components/BoxComponent.h"
#include "TriggerEvaluator/CheckTaskRepeatWithNum.h"
#include "TriggerTaskComponent/TriggerTaskComponent.h"
#include "TriggerTask/AISpawnTask/AISpawnData/SimpleSpawnDataGroupPool.h"
#include "TriggerTaskStateSwitch/TTSS_AnyConditionMeet.h"

#include "Engine/Engine.h"
#include "Engine/Selection.h"

FSpawnerDetail::FSpawnerDetail()
	: Spawner(nullptr), EnemyGroupID(0), NumberRemaining(0), DelayTime(0.0f), TimeIntervalMin(0.0f), TimeIntervalMax(0.0f)
{
}


FEditInfinityRoundInfo::FEditInfinityRoundInfo()
	: IsInfinityPool(false), PopulateThreshold(0), InfinityRoundIndex(INDEX_NONE)
{

}



namespace
{
	static const FName TriggerOnlyPlayerCollisionProfileName(TEXT("Trigger"));
	static const FName TriggerOnlyAICollisionProfileName(TEXT("TriggerOverlapByAI"));
	static const FName TriggerAIPlayerCollisionProfileName(TEXT("TriggerOverlapByAIAndPlayer"));
}

/*
for SpawnerTriggerBase, when property change, the corresponding property in group data will be synchronized.
the change can divided into tree categories: add, delete, modify.
for add, only duplicate need to be processed: PostDuplicate
for delete, only destroy need to be processed: Destroyed
for modify, the case is complicated.
especially, for array, like SpawnerGroup:
1. the element value is set: PostEditSpawnerProperty
2. the array is copy-paste: PostEditSpawnerGroupProperty-EPropertyChangeType::ValueSet
3. the array is clear: PostEditSpawnerGroupProperty-EPropertyChangeType::ArrayClear
4. the array element is removed : PostEditSpawnerGroupProperty-EPropertyChangeType::ArrayRemove
*/


ASpawnerTriggerBase::ASpawnerTriggerBase(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
#if WITH_EDITORONLY_DATA
	, TriggerCondition(ETriggerCondtionType::ETCT_Touch)
	, bCanRetrigger(false)
	, RepeatCount(1)
	, RepeatTaskState(ETriggerTaskState::ETriggerTaskState_Finished)
	, bSelectedInEditor(false)
#endif
{

}

#if WITH_EDITOR

void ASpawnerTriggerBase::PreEditChange(FProperty* PropertyAboutToChange)
{
	if (PropertyAboutToChange == nullptr)
	{
		Super::PreEditChange(PropertyAboutToChange);
		return;
	}
	static const FName NAME_Spawner(TEXT("Spawner"));
	static const FName NAME_SpawnerGroup(TEXT("SpawnerGroup"));
	static const FName NAME_NextEventInfo(TEXT("NextEventInfo"));
	static const FName NAME_TargetEvent(TEXT("TargetEvent"));
	static const FName NAME_Rounds(TEXT("Rounds"));

	const FName PropertyName = PropertyAboutToChange->GetFName();

	if (PropertyName == NAME_Spawner || PropertyName == NAME_SpawnerGroup || NAME_Rounds == PropertyName)
	{
		//to record spawner pointer before edit, and compare with after edit.
		LastEditSpawnerCountInRounds.Reset(RoundDetails.Rounds.Num());
		for (int32 i = 0; i < RoundDetails.Rounds.Num(); ++i)
		{
			const FEditSigleRoundInfo& RoundInfo = RoundDetails.Rounds[i];
			LastEditSpawnerCountInRounds.Add(RoundInfo.SpawnerGroup.Num());
			for (int32 j = 0; j < RoundInfo.SpawnerGroup.Num(); ++j)
			{
				LastEditSpawnerArr.Add(RoundInfo.SpawnerGroup[j].Spawner);
			}
		}
	}
	if (PropertyName == NAME_NextEventInfo || PropertyName == NAME_TargetEvent)
	{
		//to record next event before edit, and compare with after edit.
		LastEditTargetArr.Reserve(NextEventInfo.Num());
		for (int32 i = 0; i < NextEventInfo.Num(); ++i)
		{
			LastEditTargetArr.Add(NextEventInfo[i].TargetEvent);
		}
	}
	Super::PreEditChange(PropertyAboutToChange);
}

void ASpawnerTriggerBase::PostEditChangeChainProperty(FPropertyChangedChainEvent& PropertyChangedEvent)
{
	Super::PostEditChangeChainProperty(PropertyChangedEvent);
	if (PropertyChangedEvent.Property == nullptr)
	{
		return;
	}
	static const FName SpawnerName("Spawner");
	static const FName SpawnerGroupName("SpawnerGroup");
	static const FName NextEventInfoName(TEXT("NextEventInfo"));
	static const FName TargetEventName(TEXT("TargetEvent"));
	static const FName CanRetriggerName(TEXT("bCanRetrigger"));
	static const FName RepeatCountName(TEXT("RepeatCount"));
	static const FName RepeatTaskStateName(TEXT("RepeatTaskState"));
	static const FName RoundWaitTimeName(TEXT("RoundWaitTime"));
	static const FName RoundDelayTimeName(TEXT("RoundDelayTime"));
	static const FName RoundsName(TEXT("Rounds"));
	static const FName InfinityInfosName(TEXT("InfinityInfos"));
	static const FName IsInfinityPoolName(TEXT("IsInfinityPool"));
	static const FName PopulateThresholdName(TEXT("PopulateThreshold"));
	static const FName InfinityRoundIndexName(TEXT("InfinityRoundIndex"));

	const FName PropertyName = PropertyChangedEvent.Property->GetFName();

	if (PropertyName == SpawnerName)
	{
		PostEditSpawnerProperty(PropertyChangedEvent, true);
		LastEditSpawnerArr.Reset();
	}
	else if (PropertyName == SpawnerGroupName)
	{
		PostEditSpawnerGroupProperty(PropertyChangedEvent);
		LastEditSpawnerArr.Reset();
	}
	else if (RoundsName == PropertyName)
	{
		PostEditRoundsProperty(PropertyChangedEvent);
		LastEditSpawnerArr.Reset();
	}
	else if (PropertyName == NextEventInfoName)
	{
		PostEditNextEventInfoProperty(PropertyChangedEvent);
		LastEditTargetArr.Reset();
	}
	else if (PropertyName == TargetEventName)
	{
		PostEditTargetEventProperty(PropertyChangedEvent);
		LastEditTargetArr.Reset();
	}
	else if (CanRetriggerName == PropertyName || RepeatCountName == PropertyName || RepeatTaskStateName == PropertyName)
	{
		SyncRepeatCondition();
	}
	else if (InfinityInfosName == PropertyName || IsInfinityPoolName == PropertyName || PopulateThresholdName == PropertyName || InfinityRoundIndexName == PropertyName)
	{
		SyncInfinityInfos();
	}
	else if (RoundWaitTimeName == PropertyName || RoundDelayTimeName == PropertyName)
	{
		const int32 RoundArrIndex = PropertyChangedEvent.GetArrayIndex(TEXT("Rounds"));
		SyncRoundOtherDetail(RoundArrIndex);
	}
	else if (PropertyName != GET_MEMBER_NAME_CHECKED(ANewTriggerBase, TriggerTaskComponent))
	{
		if (PropertyChangedEvent.ChangeType != EPropertyChangeType::ArrayClear
			&& PropertyChangedEvent.ChangeType != EPropertyChangeType::ArrayRemove)
		{
			//synchronize to group data.
			SyncConditionToData();

			const int32 SpawnerGroupArrIndex = PropertyChangedEvent.GetArrayIndex(TEXT("SpawnerGroup"));
			const int32 RoundIndex = PropertyChangedEvent.GetArrayIndex(TEXT("Rounds"));
			if (SpawnerGroupArrIndex != INDEX_NONE && RoundIndex != INDEX_NONE)
			{
				SyncSpawnerDetailToTask(RoundIndex, SpawnerGroupArrIndex);
				return;
			}

			const int32 NextEventIndex = PropertyChangedEvent.GetArrayIndex(TEXT("NextEventInfo"));
			SyncNextEventDetailToTrigger(NextEventIndex);
		}
	}
}

void ASpawnerTriggerBase::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	static const FName RelativeLocationName("RelativeLocation");
	if (PropertyChangedEvent.MemberProperty && PropertyChangedEvent.MemberProperty->GetFName() == RelativeLocationName)
	{
		if (IsTriggerSelectedInEditor())
		{
			ShowRelationshipWithSpawner(true);
		}
	}
}

void ASpawnerTriggerBase::EditorApplyTranslation(const FVector& DeltaTranslation, bool bAltDown, bool bShiftDown, bool bCtrlDown)
{
	Super::EditorApplyTranslation(DeltaTranslation, bAltDown, bShiftDown, bCtrlDown);
	if (bSelectedInEditor)
	{
		ShowRelationshipWithSpawner(true);
	}
}


void ASpawnerTriggerBase::SelectedInEditor(UObject* SelectedObject)
{
	if (SelectedObject && SelectedObject->IsA(ASpawnerTriggerBase::StaticClass()))
	{
		if (LastSelectedTrigger.Get() == SelectedObject)
		{
			return;
		}
		if (LastSelectedTrigger.IsValid())
		{
			LastSelectedTrigger->OnSelectedInEditor(false);
			UE_LOG(LogTemp, Log, TEXT("SelectedInEditor Old %s"), *LastSelectedTrigger->GetActorLabel());
		}
		else
		{
			UE_LOG(LogTemp, Log, TEXT("SelectedInEditor Old null"));
		}

		LastSelectedTrigger = Cast<ASpawnerTriggerBase>(SelectedObject);
		LastSelectedTrigger->OnSelectedInEditor(true);
		UE_LOG(LogTemp, Log, TEXT("SelectedInEditor New %s"), *LastSelectedTrigger->GetActorLabel());
	}
	else
	{
		if (LastSelectedTrigger.IsValid())
		{
			LastSelectedTrigger->OnSelectedInEditor(false);
			UE_LOG(LogTemp, Log, TEXT("DisSelectedInEditor Old %s"), *LastSelectedTrigger->GetActorLabel());
			LastSelectedTrigger.Reset();
		}
		UE_LOG(LogTemp, Log, TEXT("DisSelectedInEditor null"));
	}
}

void ASpawnerTriggerBase::SyncSpawnerDetailToTask(const int32 RoundIndex, const int32 SpawnerIndex)
{// do synchronize the spawner info to group data.
	if (RoundIndex < 0 || RoundDetails.Rounds.Num() <= RoundIndex ||
		SpawnerIndex < 0 || SpawnerIndex >= RoundDetails.Rounds[RoundIndex].SpawnerGroup.Num())
	{
		return;
	}
	FSpawnerDetail& Spawner = RoundDetails.Rounds[RoundIndex].SpawnerGroup[SpawnerIndex];
	USimpleSpawnDataGroupPool* DataGroupPool = GetDataGroupPool();
	if (DataGroupPool == nullptr)
	{
		return;
	}
	DataGroupPool->UpdateSpawnerInfo(RoundIndex, SpawnerIndex, &Spawner, false);
}

bool ASpawnerTriggerBase::IsTriggerSelectedInEditor() const
{
	return bSelectedInEditor || IsSelectedInEditor();
}

void ASpawnerTriggerBase::RemoveSpawnerFromGroup(AAISpawnerTemplate* ToRemovedSpawner)
{
	for (int16 RoundIndex = 0; RoundIndex < RoundDetails.Rounds.Num(); ++RoundIndex)
	{
		FEditSigleRoundInfo& Round = RoundDetails.Rounds[RoundIndex];
		for (int32 i = 0; i < Round.SpawnerGroup.Num(); ++i)
		{
			if (Round.SpawnerGroup[i].Spawner != ToRemovedSpawner)
			{
				continue;
			}
			//remove from data group.
			USimpleSpawnDataGroupPool* DataGroupPool = GetDataGroupPool();
			if (DataGroupPool)
			{
				DataGroupPool->RemoveSpawner(RoundIndex, i);
			}
			Round.SpawnerGroup.RemoveAt(i);
			--i;
		}
	}
}

bool ASpawnerTriggerBase::IsUsedSpawner(AAISpawnerTemplate* InSpawner) const
{
	if (InSpawner == nullptr)
	{
		return false;
	}
	for (int16 RoundIndex = 0; RoundIndex < RoundDetails.Rounds.Num(); ++RoundIndex)
	{
		const FEditSigleRoundInfo& Round = RoundDetails.Rounds[RoundIndex];
		for (int32 i = 0; i < Round.SpawnerGroup.Num(); ++i)
		{
			if (Round.SpawnerGroup[i].Spawner == InSpawner)
			{
				return true;
			}
		}
	}
	return false;
}

void ASpawnerTriggerBase::UpdateOnPointRemvedInSpawner(AAISpawnerTemplate* InSpawner, int32 PointIndex)
{//called by spawner.
	for (int16 RoundIndex = 0; RoundIndex < RoundDetails.Rounds.Num(); ++RoundIndex)
	{
		FEditSigleRoundInfo& Round = RoundDetails.Rounds[RoundIndex];
		for (int32 i = 0; i < Round.SpawnerGroup.Num(); ++i)
		{
			if (Round.SpawnerGroup[i].Spawner != InSpawner)
			{
				continue;
			}
			//remove from data group.
			USimpleSpawnDataGroupPool* DataGroupPool = GetDataGroupPool();
			if (DataGroupPool)
			{
				DataGroupPool->RemovePointFromSpawner(RoundIndex, i, PointIndex);
			}
		}
	}
}

void ASpawnerTriggerBase::UpdateOnPointUpdateInSpawner(AAISpawnerTemplate* InSpawner, int32 PointIndex)
{//called by spawner.
	for (int16 RoundIndex = 0; RoundIndex < RoundDetails.Rounds.Num(); ++RoundIndex)
	{
		FEditSigleRoundInfo& Round = RoundDetails.Rounds[RoundIndex];
		for (int32 i = 0; i < Round.SpawnerGroup.Num(); ++i)
		{
			if (Round.SpawnerGroup[i].Spawner != InSpawner)
			{
				continue;
			}
			//remove from data group.
			USimpleSpawnDataGroupPool* DataGroupPool = GetDataGroupPool();
			if (DataGroupPool)
			{
				DataGroupPool->UpdatePointFromSpawner(RoundIndex, i, &Round.SpawnerGroup[i], PointIndex);
			}
		}
	}
}

void ASpawnerTriggerBase::PostEditSpawnerProperty(FPropertyChangedChainEvent& PropertyChangedEvent, bool bOnlyChangeSpawner)
{//construct spawner to trigger connection.
	const int32 SpawnerGroupArrIndex = PropertyChangedEvent.GetArrayIndex(TEXT("SpawnerGroup"));
	int32 RoundIndex = PropertyChangedEvent.GetArrayIndex(TEXT("Rounds"));
	if (SpawnerGroupArrIndex == INDEX_NONE || RoundIndex == INDEX_NONE)
	{
		return;
	}
	AAISpawnerTemplate* OldSpawner = nullptr;
	int32 SpanwerIndex = SpawnerGroupArrIndex;
	for (int16 i = 0; i < RoundIndex; ++i)
	{
		SpanwerIndex += LastEditSpawnerCountInRounds[i];
	}
	if (LastEditSpawnerArr.Num() > SpanwerIndex)
	{
		OldSpawner = LastEditSpawnerArr[SpanwerIndex];
	}
	AAISpawnerTemplate* CurSpawner = GetSpawnerInGroupByIndex(RoundIndex, SpawnerGroupArrIndex);
	if (CurSpawner == OldSpawner)
	{
		return;
	}

	if (OldSpawner)
	{//remove old connection.
		OldSpawner->RemovedInTrigger(this);
		USimpleSpawnDataGroupPool* DataGroupPool = GetDataGroupPool();
		if (DataGroupPool)
		{//remove old spawner points
			DataGroupPool->RemovePointFromSpawner(RoundIndex, SpawnerGroupArrIndex, -1);
		}
	}

	if (CurSpawner)
	{//construct new connection.
		CurSpawner->UsedInTrigger(this);
		USimpleSpawnDataGroupPool* DataGroupPool = GetDataGroupPool();
		if (DataGroupPool)
		{//update all points info by new spawner.
			if (bOnlyChangeSpawner)
			{
				DataGroupPool->UpdatePointFromSpawner(RoundIndex, SpawnerGroupArrIndex, &RoundDetails.Rounds[RoundIndex].SpawnerGroup[SpawnerGroupArrIndex], -1);
			}
			else
			{//when edit from spawner group, all spawner info maybe update.
				DataGroupPool->UpdateSpawnerInfo(RoundIndex, SpawnerGroupArrIndex, &RoundDetails.Rounds[RoundIndex].SpawnerGroup[SpawnerGroupArrIndex], true);
			}
		}
	}
}

void ASpawnerTriggerBase::PostEditSpawnerGroupProperty(FPropertyChangedChainEvent& PropertyChangedEvent)
{
	int32 InRoundIndex = PropertyChangedEvent.GetArrayIndex(TEXT("Rounds"));
	if (PropertyChangedEvent.ChangeType == EPropertyChangeType::ArrayRemove)
	{//on SpawnerGroup element is removed, remove the spawner info in data group.
		int32 RemovedIndex = PropertyChangedEvent.GetArrayIndex(TEXT("SpawnerGroup"));

		USimpleSpawnDataGroupPool* DataGroupPool = GetDataGroupPool();
		if (DataGroupPool)
		{
			DataGroupPool->RemoveSpawner(InRoundIndex, RemovedIndex);
		}
		//remove old connection.
		RemoveLastEditSpawnerInRound(InRoundIndex, RemovedIndex);
	}
	else if (PropertyChangedEvent.ChangeType == EPropertyChangeType::ArrayClear)
	{//clear spawner info in data group.
		if (InRoundIndex == INDEX_NONE)
		{
			InRoundIndex = GetChangedRoundIndex();
		}
		USimpleSpawnDataGroupPool* DataGroupPool = GetDataGroupPool();
		if (DataGroupPool)
		{
			DataGroupPool->RemoveSpawner(InRoundIndex, -1);
		}
		//clear old connection.
		ClearLastEditSpawnerInRound(InRoundIndex);
	}
	else if (PropertyChangedEvent.ChangeType == EPropertyChangeType::ValueSet)
	{//set SpawnerGroup by copy-paste in property editor.
		int32 SetIndex = PropertyChangedEvent.GetArrayIndex(TEXT("SpawnerGroup"));
		if (SetIndex != INDEX_NONE)
		{//set element.
			PostEditSpawnerProperty(PropertyChangedEvent, false);
			return;
		}
		//clear all spawner info in data group.
		USimpleSpawnDataGroupPool* DataGroupPool = GetDataGroupPool();
		if (DataGroupPool)
		{
			DataGroupPool->RemoveSpawner(InRoundIndex, -1);
		}
		//clear old connection.
		ClearLastEditSpawnerInRound(InRoundIndex);

		FEditSigleRoundInfo& Round = RoundDetails.Rounds[InRoundIndex];
		//construct connection to spawner.
		for (int16 i = 0; i < Round.SpawnerGroup.Num(); ++i)
		{
			AAISpawnerTemplate* CurSpawner = Round.SpawnerGroup[i].Spawner;
			if (CurSpawner)
			{
				CurSpawner->UsedInTrigger(this);
			}
			SyncSpawnerDetailToTask(InRoundIndex, i);
		}
	}
	else if (PropertyChangedEvent.ChangeType == EPropertyChangeType::ArrayAdd)
	{
		const int32 SpawnerGroupArrIndex = PropertyChangedEvent.GetArrayIndex(TEXT("SpawnerGroup"));
		SyncSpawnerDetailToTask(InRoundIndex, SpawnerGroupArrIndex);
	}
}

void ASpawnerTriggerBase::PostEditRoundsProperty(FPropertyChangedChainEvent& PropertyChangedEvent)
{
	if (PropertyChangedEvent.ChangeType == EPropertyChangeType::ArrayRemove)
	{//on SpawnerGroup element is removed, remove the spawner info in data group.
		int32 RemovedIndex = PropertyChangedEvent.GetArrayIndex(TEXT("Rounds"));

		USimpleSpawnDataGroupPool* DataGroupPool = GetDataGroupPool();
		if (DataGroupPool)
		{
			DataGroupPool->RemoveRound(RemovedIndex);
		}
		//remove old connection.
		ClearLastEditSpawnerInRound(RemovedIndex);
	}
	else if (PropertyChangedEvent.ChangeType == EPropertyChangeType::ArrayClear)
	{//clear spawner info in data group.
		USimpleSpawnDataGroupPool* DataGroupPool = GetDataGroupPool();
		if (DataGroupPool)
		{
			DataGroupPool->RemoveRound(-1);
		}
		//clear old connection.
		ClearAllLastEditSpawnerInRounds();
	}
	else if (PropertyChangedEvent.ChangeType == EPropertyChangeType::ValueSet)
	{//set Round by copy-paste in property editor.
		int32 SetIndex = PropertyChangedEvent.GetArrayIndex(TEXT("Rounds"));
		if (SetIndex != INDEX_NONE)
		{//set element.
			PostEditSpawnerGroupProperty(PropertyChangedEvent);
			SyncRoundOtherDetail(SetIndex);
			return;
		}
		//clear all spawner info in data group.
		USimpleSpawnDataGroupPool* DataGroupPool = GetDataGroupPool();
		if (DataGroupPool)
		{
			DataGroupPool->RemoveRound(-1);
		}
		//clear old connection.
		ClearAllLastEditSpawnerInRounds();

		//construct connection to spawner.
		for (int16 i = 0; i < RoundDetails.Rounds.Num(); ++i)
		{
			FEditSigleRoundInfo& Round = RoundDetails.Rounds[i];
			for (int16 j = 0; j < Round.SpawnerGroup.Num(); ++j)
			{
				AAISpawnerTemplate* CurSpawner = Round.SpawnerGroup[j].Spawner;
				if (CurSpawner)
				{
					CurSpawner->UsedInTrigger(this);
				}
				SyncSpawnerDetailToTask(i, j);
			}
		}
		SyncRoundOtherDetail(-1);
	}
	else if (PropertyChangedEvent.ChangeType == EPropertyChangeType::ArrayAdd)
	{
		//only sync other detail, because the spawner group is empty.
		const int32 RoundsArrIndex = PropertyChangedEvent.GetArrayIndex(TEXT("Rounds"));
		SyncRoundOtherDetail(RoundsArrIndex);
	}
}

void ASpawnerTriggerBase::PostEditTargetEventProperty(FPropertyChangedChainEvent& PropertyChangedEvent)
{
	const int32 NextEventInfoArrIndex = PropertyChangedEvent.GetArrayIndex(TEXT("NextEventInfo"));
	if (NextEventInfoArrIndex == INDEX_NONE)
	{
		return;
	}
	ASceneTrigger* OldTargetTrigger = nullptr;
	if (LastEditTargetArr.Num() > NextEventInfoArrIndex)
	{
		OldTargetTrigger = LastEditTargetArr[NextEventInfoArrIndex];
	}
	ASceneTrigger* CurTargetTrigger = nullptr;
	if (NextEventInfo.Num() > NextEventInfoArrIndex)
	{
		CurTargetTrigger = NextEventInfo[NextEventInfoArrIndex].TargetEvent;
	}
	if (CurTargetTrigger == OldTargetTrigger)
	{
		return;
	}

	if (OldTargetTrigger)
	{//remove condition in old trigger.
		RemoveNextEventConditionFromTrigger(OldTargetTrigger);
	}
	if (CurTargetTrigger == nullptr)
	{//not null
		return;
	}
	else if (CurTargetTrigger == this)
	{// and not same with others and self.
		UE_LOG(LogTemp, Warning, TEXT("PostEditTargetEventProperty:: next event not allow self."));
		NextEventInfo[NextEventInfoArrIndex].TargetEvent = nullptr;
	}
	else if (LastEditTargetArr.Find(CurTargetTrigger) != INDEX_NONE)
	{
		UE_LOG(LogTemp, Warning, TEXT("PostEditTargetEventProperty:: There has next event %s."), *CurTargetTrigger->GetActorLabel());
		NextEventInfo[NextEventInfoArrIndex].TargetEvent = nullptr;
	}
	//add condition to new trigger.
	SyncNextEventDetailToTrigger(NextEventInfoArrIndex);
}

void ASpawnerTriggerBase::PostEditNextEventInfoProperty(FPropertyChangedChainEvent& PropertyChangedEvent)
{
	if (PropertyChangedEvent.ChangeType == EPropertyChangeType::ArrayRemove)
	{//on NextEventInfo element is removed, remove condition in old trigger.
		int32 RemovedIndex = PropertyChangedEvent.GetArrayIndex(TEXT("NextEventInfo"));

		if (LastEditTargetArr.Num() > RemovedIndex)
		{
			ASceneTrigger* OldTargetTrigger = LastEditTargetArr[RemovedIndex];
			if (OldTargetTrigger)
			{
				RemoveNextEventConditionFromTrigger(OldTargetTrigger);
			}
		}
	}
	else if (PropertyChangedEvent.ChangeType == EPropertyChangeType::ArrayClear)
	{
		//remove condition in all old trigger.
		for (int16 i = 0; i < LastEditTargetArr.Num(); ++i)
		{
			ASceneTrigger* OldTargetTrigger = LastEditTargetArr[i];
			if (OldTargetTrigger)
			{
				RemoveNextEventConditionFromTrigger(OldTargetTrigger);
			}
		}
	}
	else if (PropertyChangedEvent.ChangeType == EPropertyChangeType::ValueSet)
	{//set NextInfo by copy-paste in property editor.
		int32 SetIndex = PropertyChangedEvent.GetArrayIndex(TEXT("NextEventInfo"));
		if (SetIndex != INDEX_NONE)
		{//set element.
			PostEditTargetEventProperty(PropertyChangedEvent);
			return;
		}

		//remove condition in all old trigger.
		for (int16 i = 0; i < LastEditTargetArr.Num(); ++i)
		{
			ASceneTrigger* OldTargetTrigger = LastEditTargetArr[i];
			if (OldTargetTrigger)
			{
				RemoveNextEventConditionFromTrigger(OldTargetTrigger);
			}
		}

		//add condition for all trigger.
		TSet<ASceneTrigger*> NextEventTargetSet;
		for (int16 i = 0; i < NextEventInfo.Num(); ++i)
		{
			ASceneTrigger* CurTargetTrigger = NextEventInfo[i].TargetEvent;
			if (CurTargetTrigger == nullptr || NextEventTargetSet.Contains(CurTargetTrigger))
			{//exclude the same set to trigger, because it is not valid for now in trigger.
				continue;
			}
			NextEventTargetSet.Add(CurTargetTrigger);
			SyncNextEventDetailToTrigger(i);
		}
	}
	else if (PropertyChangedEvent.ChangeType == EPropertyChangeType::ArrayAdd)
	{
		const int32 NextEventArrIndex = PropertyChangedEvent.GetArrayIndex(TEXT("NextEventInfo"));
		SyncNextEventDetailToTrigger(NextEventArrIndex);
	}
	else if (PropertyChangedEvent.ChangeType == EPropertyChangeType::Duplicate)
	{
		const int32 NextEventArrIndex = PropertyChangedEvent.GetArrayIndex(TEXT("NextEventInfo")) + 1;
		if (NextEventInfo[NextEventArrIndex].TargetEvent)
		{
			UE_LOG(LogTemp, Warning, TEXT("PostEditTargetEventProperty:: There has next event %s."), *NextEventInfo[NextEventArrIndex].TargetEvent->GetActorLabel());
			NextEventInfo[NextEventArrIndex].TargetEvent = nullptr;
		}
	}
	//do not handle the case for insert.
}

void ASpawnerTriggerBase::RemoveLastEditSpawnerInRound(int32 RoundIndex, int32 SpawnerIndex)
{
	//remove spawner connection with trigger.
	if (LastEditSpawnerCountInRounds.Num() <= RoundIndex
		|| RoundIndex < 0 || SpawnerIndex < 0)
	{
		return;
	}
	//calculate the removed spawner index.
	for (int16 i = 0; i < RoundIndex; ++i)
	{
		SpawnerIndex += LastEditSpawnerCountInRounds[i];
	}
	if (SpawnerIndex >= LastEditSpawnerArr.Num())
	{
		return;
	}
	AAISpawnerTemplate* OldSpawner = LastEditSpawnerArr[SpawnerIndex];
	if (OldSpawner)
	{
		OldSpawner->RemovedInTrigger(this);
	}
}

void ASpawnerTriggerBase::ClearLastEditSpawnerInRound(int32 RoundIndex)
{
	//remove spawner connection with trigger.
	if (LastEditSpawnerCountInRounds.Num() <= RoundIndex
		|| RoundIndex < 0)
	{
		return;
	}
	int32 SpanwerIndex = 0;
	//calculate the removed spawner index in round.
	for (int16 i = 0; i < RoundIndex; ++i)
	{
		SpanwerIndex += LastEditSpawnerCountInRounds[i];
	}
	//remove the spawner.
	for (int16 i = 0; i < LastEditSpawnerCountInRounds[RoundIndex]; ++i)
	{
		AAISpawnerTemplate* OldSpawner = LastEditSpawnerArr[SpanwerIndex];
		if (OldSpawner)
		{
			OldSpawner->RemovedInTrigger(this);
		}
		++SpanwerIndex;
	}
}

void ASpawnerTriggerBase::ClearAllLastEditSpawnerInRounds()
{
	//clear spawner connection with trigger.
	int32 SpanwerIndex = 0;
	for (int16 i = 0; i < LastEditSpawnerCountInRounds.Num(); ++i)
	{
		for (int16 j = 0; j < LastEditSpawnerCountInRounds[i]; ++j)
		{
			AAISpawnerTemplate* OldSpawner = LastEditSpawnerArr[SpanwerIndex];
			if (OldSpawner)
			{
				OldSpawner->RemovedInTrigger(this);
			}
			++SpanwerIndex;
		}
	}
}

AAISpawnerTemplate* ASpawnerTriggerBase::GetSpawnerInGroupByIndex(int16 RoundIndex, int16 Index)
{
	if (RoundIndex >= 0 && RoundDetails.Rounds.Num() > RoundIndex && Index >= 0 && RoundDetails.Rounds[RoundIndex].SpawnerGroup.Num() > Index)
	{
		return RoundDetails.Rounds[RoundIndex].SpawnerGroup[Index].Spawner;
	}
	else
	{
		return nullptr;
	}
}

USimpleSpawnDataGroupPool* ASpawnerTriggerBase::GetDataGroupPool()
{
	TArray<UTriggerTaskComponentBase*> TaskComponents;
	GetTriggerTaskComponents(TaskComponents);
	if (TaskComponents.Num() < 1)
	{
		return nullptr;
	}

	//only use one task component, at present.
	UTriggerTaskComponentBase* TaskComponent = TaskComponents[0];
	TArray<UTriggerTaskBase*> TriggerTasks;
	TaskComponent->GetAllTriggerTasks(TriggerTasks);
	if (TriggerTasks.Num() < 1)
	{
		return nullptr;
	}
	//only use one task.
	UTT_AISpawnBase* TriggerTask = Cast<UTT_AISpawnBase>(TriggerTasks[0]);
	if (TriggerTask == nullptr)
	{
		return nullptr;
	}
	return Cast<USimpleSpawnDataGroupPool>(TriggerTask->GetSpawnData());
}

USimpleSpawnDataGroup* ASpawnerTriggerBase::GetDataGroup()
{
	TArray<UTriggerTaskComponentBase*> TaskComponents;
	GetTriggerTaskComponents(TaskComponents);
	if (TaskComponents.Num() < 1)
	{
		return nullptr;
	}

	//only use one task component, at present.
	UTriggerTaskComponentBase* TaskComponent = TaskComponents[0];
	TArray<UTriggerTaskBase*> TriggerTasks;
	TaskComponent->GetAllTriggerTasks(TriggerTasks);
	if (TriggerTasks.Num() < 1)
	{
		return nullptr;
	}
	//only use one task.
	UTT_AISpawnBase* TriggerTask = Cast<UTT_AISpawnBase>(TriggerTasks[0]);
	if (TriggerTask == nullptr)
	{
		return nullptr;
	}
	return Cast<USimpleSpawnDataGroup>(TriggerTask->GetSpawnData());
}

void ASpawnerTriggerBase::OnSelectedInEditor(bool bInSelected)
{
	if (bSelectedInEditor == bInSelected)
	{
		return;
	}
	bSelectedInEditor = bInSelected;
	ShowRelationshipWithSpawner(bSelectedInEditor);
}

void ASpawnerTriggerBase::ShowRelationshipWithSpawner(bool bToShow)
{
	for (int16 RoundIndex = 0; RoundIndex < RoundDetails.Rounds.Num(); ++RoundIndex)
	{
		FEditSigleRoundInfo& Round = RoundDetails.Rounds[RoundIndex];
		for (int16 i = 0; i < Round.SpawnerGroup.Num(); ++i)
		{
			if (Round.SpawnerGroup[i].Spawner == nullptr)
			{
				continue;
			}
			if (bToShow)
			{
				Round.SpawnerGroup[i].Spawner->ShowSpawnerRelationshipTo(GetActorLocation());
			}
			else
			{
				Round.SpawnerGroup[i].Spawner->HideSpawnerRelationShip();
			}
		}
	}
}

void ASpawnerTriggerBase::SyncConditionToData()
{
	TArray<UTriggerTaskComponentBase*> TaskComponents;
	GetTriggerTaskComponents(TaskComponents);
	if (TaskComponents.Num() < 1)
	{
		return;
	}

	//only use one task component, at present.
	UTriggerTaskComponentBase* TaskComponent = TaskComponents[0];
	TArray<UTriggerTaskBase*> TriggerTasks;
	TaskComponent->GetAllTriggerTasks(TriggerTasks);
	if (TriggerTasks.Num() < 1)
	{
		return;
	}
	//only use one task.
	UTT_AISpawnBase* TriggerTask = Cast<UTT_AISpawnBase>(TriggerTasks[0]);
	if (TriggerTask == nullptr)
	{
		return;
	}

	int32 IndexCondition = -1;
	UTriggerEvaluator_AND* PrerequestOp = GetEvaluatorForOverlapBySwitch(IndexCondition, TriggerTask, TriggerCondition != ETriggerCondtionType::ETCT_Auto);

	if (PrerequestOp == nullptr)
	{
        return;
	}

	//default can not automatically.
	TriggerTask->ExecuteAutomatically = false;

	if (TriggerCondition == ETriggerCondtionType::ETCT_Auto)
	{
		if (IndexCondition >= 0)
		{
			PrerequestOp->Condtions.RemoveAt(IndexCondition);
		}
		RemoveTriggerPrerequestIfEmpty(TriggerTask);
		TriggerTask->ExecuteAutomatically = true;
	}
	else if (TriggerCondition == ETriggerCondtionType::ETCT_Touch)
	{
		if (Player.Get() == nullptr && AI.Get() == nullptr)
		{
			if (IndexCondition >= 0)
			{
				PrerequestOp->Condtions.RemoveAt(IndexCondition);
			}
			RemoveTriggerPrerequestIfEmpty(TriggerTask);
			SetTriggerCollisionProfileName(TriggerOnlyPlayerCollisionProfileName);
			return;
		}
		UCheckActorOverlaped* Condition = nullptr;
		if (IndexCondition < 0)
		{
			Condition = NewObject<UCheckActorOverlaped>(this);
			PrerequestOp->Condtions.Add(Condition);
			Condition->TargetActor = this;
		}
		else
		{
			Condition = Cast<UCheckActorOverlaped>(PrerequestOp->Condtions[IndexCondition]);
		}
		UTriggerFilter_Actor* FilterActor = nullptr;
		if (Condition->OverlapFilters.Num() > 0)
		{
			FilterActor = Cast<UTriggerFilter_Actor>(Condition->OverlapFilters[0]);
		}
		if (FilterActor == nullptr)
		{
			Condition->OverlapFilters.Reset();
			FilterActor = NewObject<UTriggerFilter_Actor>(this);
			Condition->OverlapFilters.Add(FilterActor);
		}

		FilterActor->ActorClasses.Reset();
		if (Player.Get())
		{
			FilterActor->ActorClasses.Add(Player);
		}

		if (AI.Get())
		{
			FilterActor->ActorClasses.Add(AI);
			if (Player.Get())
			{
				SetTriggerCollisionProfileName(TriggerAIPlayerCollisionProfileName);
			}
			else
			{
				SetTriggerCollisionProfileName(TriggerOnlyAICollisionProfileName);
			}
		}
		else
		{
			SetTriggerCollisionProfileName(TriggerOnlyPlayerCollisionProfileName);
		}
	}

}

void ASpawnerTriggerBase::SyncNextEventDetailToTrigger(const int32 EventIndex)
{
	if (EventIndex < 0 || EventIndex >= NextEventInfo.Num())
	{
		return;
	}
	ASceneTrigger* TargetTrigger = NextEventInfo[EventIndex].TargetEvent;
	if (TargetTrigger == nullptr)
	{
		return;
	}
	TArray<UTriggerTaskComponentBase*> TaskComponents;
	TargetTrigger->GetTriggerTaskComponents(TaskComponents);
	if (TaskComponents.Num() < 1)
	{
		return;
	}

	//only use one task component, at present.
	UTriggerTaskComponentBase* TaskComponent = TaskComponents[0];
	TArray<UTriggerTaskBase*> TriggerTasks;
	TaskComponent->GetAllTriggerTasks(TriggerTasks);
	if (TriggerTasks.Num() < 1)
	{
		return;
	}
	//only use one task.
	UTriggerTaskBase* TriggerTask = TriggerTasks[0];
	if (TriggerTask == nullptr)
	{
		return;
    }
    UTriggerTaskStateSwitchBase* StartCondition = TriggerTask->GetStartConditions();
    if (StartCondition == nullptr)
    {
        StartCondition = NewObject<UTTSS_AnyConditionMeet>(TriggerTask);
        TriggerTask->SetStartConditions(StartCondition);
    }

    UTTSS_AnyConditionMeet* AnyConditionMeet = Cast<UTTSS_AnyConditionMeet>(StartCondition);
    if (AnyConditionMeet == nullptr)
    {//only use UTTSS_AnyConditionMeet, for now.
        return;
    }
    TArray<FTriggerTaskStyleMap>& Switches = AnyConditionMeet->GetSwitches();
    if (Switches.Num() == 0)
    {
        Switches.Add(FTriggerTaskStyleMap());
    }
    //only use the first style in Switches, for now.
    FTriggerTaskStyleMap& TaskStyle = Switches[0];
    if (TaskStyle.Condition == nullptr)
    {
        TaskStyle.Condition = NewObject<UTriggerEvaluator_OR>(TargetTrigger);
    }
    else if (!TaskStyle.Condition->IsA(UTriggerEvaluator_OR::StaticClass()))
    {//for now, only use UTriggerEvaluator_OR as NextEvent trigger operator.
        UEvaluatorOperation* LastPrerequisite = TaskStyle.Condition;
        TaskStyle.Condition = NewObject<UTriggerEvaluator_OR>(TargetTrigger);
        TaskStyle.Condition->Operators.Add(LastPrerequisite);
    }

	UTriggerTaskBase* SelfTask = GetTaskOfTrigger(this);
	UCheckKilledNumberOfAIInTargetTask* Condition = nullptr;
	FKilledAIData* KillAIData = nullptr;
	if (TaskStyle.Condition->Condtions.Num() > 0)
	{
		for (int32 i = 0; i < TaskStyle.Condition->Condtions.Num(); ++i)
		{
			Condition = Cast<UCheckKilledNumberOfAIInTargetTask>(TaskStyle.Condition->Condtions[i]);
			if (Condition == nullptr)
			{
				continue;
			}
			//get the condition, if exists, by compare with self task.
			for (int32 IndexOfCondition = 0; IndexOfCondition < Condition->TaskDatas.Num(); ++IndexOfCondition)
			{
				if (Condition->TaskDatas[IndexOfCondition].TriggerTask.GetTriggerTask() == SelfTask)
				{
					KillAIData = &Condition->TaskDatas[IndexOfCondition];
					break;
				}
			}
			if (KillAIData != nullptr)
			{
				break;
			}
			Condition = nullptr;
		}
	}
	if (Condition == nullptr)
	{
		Condition = NewObject<UCheckKilledNumberOfAIInTargetTask>(TargetTrigger);
        TaskStyle.Condition->Condtions.Add(Condition);
	}
	if (KillAIData == nullptr)
	{
		FKilledAIData TaskKillData;
		TaskKillData.TriggerTask.SoftTaskObject = SelfTask;
		TaskKillData.KilledNumber = NextEventInfo[EventIndex].DeadCount;
		Condition->TaskDatas.Add(TaskKillData);
	}
	else
	{
		KillAIData->KilledNumber = NextEventInfo[EventIndex].DeadCount;
	}

	//add TargetTrigger to ChildNodes in TaskComponents.
	//only use one task component, at present.
	TaskComponents.Reset();
	GetTriggerTaskComponents(TaskComponents);
	if (TaskComponents.Num() < 1)
	{
		return;
	}
	UTriggerTaskComponent* CurTriggerTaskComponent = Cast<UTriggerTaskComponent>(TaskComponents[0]);
	if (CurTriggerTaskComponent)
	{
		CurTriggerTaskComponent->AddChildNode((UTriggerInterface*)(TargetTrigger->GetInterfaceAddress(UTriggerInterface::StaticClass())));
	}
}

void ASpawnerTriggerBase::RemoveNextEventConditionFromTrigger(ASceneTrigger* InTrigger)
{
	if (InTrigger == nullptr)
	{
		return;
	}
	TArray<UTriggerTaskComponentBase*> TaskComponents;
	InTrigger->GetTriggerTaskComponents(TaskComponents);
	if (TaskComponents.Num() < 1)
	{
		return;
	}

	//only use one task component, at present.
	UTriggerTaskComponentBase* TaskComponent = TaskComponents[0];
	TArray<UTriggerTaskBase*> TriggerTasks;
	TaskComponent->GetAllTriggerTasks(TriggerTasks);
	if (TriggerTasks.Num() < 1)
	{
		return;
	}
	//only use one task.
	UTriggerTaskBase* TriggerTask = TriggerTasks[0];
	if (TriggerTask == nullptr)
	{
		return;
    }
    UTriggerTaskStateSwitchBase* StartCondition = TriggerTask->GetStartConditions();
    if (StartCondition == nullptr)
    {
        return;
    }
    UTTSS_AnyConditionMeet* AnyConditionMeet = Cast<UTTSS_AnyConditionMeet>(StartCondition);
    if (AnyConditionMeet == nullptr)
    {//only use UTTSS_AnyConditionMeet, for now.
        return;
    }
    TArray<FTriggerTaskStyleMap>& Switches = AnyConditionMeet->GetSwitches();
    if (Switches.Num() == 0)
    {
        return;
    }
    //only use the first style in Switches, for now.
    FTriggerTaskStyleMap& TaskStyle = Switches[0];
    if (TaskStyle.Condition == nullptr || !TaskStyle.Condition->IsA(UTriggerEvaluator_OR::StaticClass()))
    {
        return;
    }

	//remove InTrigger to ChildNodes in TaskComponents.
	TaskComponents.Reset();
	GetTriggerTaskComponents(TaskComponents);
	if (TaskComponents.Num() > 0)
	{
		//only use one task component, at present.
		UTriggerTaskComponent* CurTriggerTaskComponent = Cast<UTriggerTaskComponent>(TaskComponents[0]);
		if (CurTriggerTaskComponent)
		{
			CurTriggerTaskComponent->RemoveChildNode(InTrigger);
		}
	}

	if (TaskStyle.Condition->Condtions.Num() == 0)
	{
		return;
    }
    UTriggerTaskBase* SelfTask = GetTaskOfTrigger(this);
	//remove condition in Prerequisite.
	for (int32 i = 0; i < TaskStyle.Condition->Condtions.Num(); ++i)
	{
		UCheckKilledNumberOfAIInTargetTask* Condition = Cast<UCheckKilledNumberOfAIInTargetTask>(TaskStyle.Condition->Condtions[i]);
		if (Condition == nullptr)
		{
			continue;
		}
		//get the condition, if exists, by compare with self task.
		for (int32 IndexOfCondition = 0; IndexOfCondition < Condition->TaskDatas.Num(); ++IndexOfCondition)
		{
			if (Condition->TaskDatas[IndexOfCondition].TriggerTask.GetTriggerTask() != SelfTask)
			{
				continue;
			}
			if (Condition->TaskDatas.Num() == 1)
			{//remove the condition.
                TaskStyle.Condition->Condtions.RemoveAt(i);
				RemoveTriggerPrerequestIfEmpty(TriggerTask);
			}
			else
			{//remove the task data.
				Condition->TaskDatas.RemoveAt(IndexOfCondition);
			}
			return;
		}
	}
}

void ASpawnerTriggerBase::SyncRepeatCondition()
{
	TArray<UTriggerTaskComponentBase*> TaskComponents;
	GetTriggerTaskComponents(TaskComponents);
	if (TaskComponents.Num() < 1)
	{
		return;
	}

	//only use one task component, at present.
	UTriggerTaskComponentBase* TaskComponent = TaskComponents[0];
	TArray<UTriggerTaskBase*> TriggerTasks;
	TaskComponent->GetAllTriggerTasks(TriggerTasks);
	if (TriggerTasks.Num() < 1)
	{
		return;
	}
	//only use one task.
	UTT_AISpawnBase* TriggerTask = Cast<UTT_AISpawnBase>(TriggerTasks[0]);
	if (TriggerTask == nullptr)
	{
		return;
	}

    UTriggerTaskStateSwitchBase* RepeatCondition = TriggerTask->GetRepeatConditions();
    if (RepeatCondition == nullptr)
    {
        if (bCanRetrigger == false)
        {
            return;
        }
        RepeatCondition = NewObject<UTTSS_AnyConditionMeet>(TriggerTask);
        TriggerTask->SetRepeatConditions(RepeatCondition);
    }

    UTTSS_AnyConditionMeet* AnyConditionMeet = Cast<UTTSS_AnyConditionMeet>(RepeatCondition);
    if (AnyConditionMeet == nullptr)
    {//only use UTTSS_AnyConditionMeet, for now.
        return;
    }
    TArray<FTriggerTaskStyleMap>& Switches = AnyConditionMeet->GetSwitches();
    if (Switches.Num() == 0)
    {
        if (bCanRetrigger == false)
        {
            return;
        }
        Switches.Add(FTriggerTaskStyleMap());
    }
    //only use the first style in Switches, for now.
    FTriggerTaskStyleMap& TaskStyle = Switches[0];
    if (TaskStyle.Condition == nullptr)
    {
        if (bCanRetrigger == false)
        {
            if (RemoveOperationConditionIfEmpty(TaskStyle.Condition))
            {
                Switches.RemoveAt(0);
            }
            return;
        }
        UTriggerEvaluator_OR* OrPrerequisite = NewObject<UTriggerEvaluator_OR>(this);
        TaskStyle.Condition = OrPrerequisite;
    }
    else if (!TaskStyle.Condition->IsA(UTriggerEvaluator_OR::StaticClass()))
    {
        if (bCanRetrigger == false)
        {
            return;
        }
        UEvaluatorOperation* LastPrerequisite = TaskStyle.Condition;
        TaskStyle.Condition = NewObject<UTriggerEvaluator_OR>(this);
        TaskStyle.Condition->Operators.Add(LastPrerequisite);
    }

    for (int32 i = 0; i < TaskStyle.Condition->Condtions.Num(); ++i)
    {
        UCheckTaskRepeatWithNum* RepeatConditionForTask = Cast<UCheckTaskRepeatWithNum>(TaskStyle.Condition->Condtions[i]);
        if (RepeatConditionForTask == nullptr)
        {
            continue;
        }
        //find and return.
        if (bCanRetrigger == false)
        {//remove.
            TaskStyle.Condition->Condtions.RemoveAt(i);
            if (RemoveOperationConditionIfEmpty(TaskStyle.Condition))
            {
                Switches.RemoveAt(0);
            }
            return;
        }
        //update.
        RepeatConditionForTask->RepeatTaskData.State = RepeatTaskState;
        RepeatConditionForTask->RepeatTaskData.MaxCount = RepeatCount;
        RepeatConditionForTask->RepeatTaskData.TriggerTask.SoftTaskObject = TriggerTask;
        return;
    }

    //not find and bCanRetrigger, add.
    if (bCanRetrigger)
    {
        UCheckTaskRepeatWithNum* RepeatTask = NewObject<UCheckTaskRepeatWithNum>(this);
        RepeatTask->RepeatTaskData.State = RepeatTaskState;
        RepeatTask->RepeatTaskData.MaxCount = RepeatCount;
        RepeatTask->RepeatTaskData.TriggerTask.SoftTaskObject = TriggerTask;
        TaskStyle.Condition->Condtions.Add(RepeatTask);
    }
}

void ASpawnerTriggerBase::SyncInfinityInfos()
{
	USimpleSpawnDataGroupPool* DataGroupPool = GetDataGroupPool();
	if (DataGroupPool == nullptr)
	{
		return;
	}
	DataGroupPool->UpdateRoundInfinityInfos(RoundDetails);
}

void ASpawnerTriggerBase::SyncRoundOtherDetail(const int16 RoundIndex)
{
	USimpleSpawnDataGroupPool* DataGroupPool = GetDataGroupPool();
	if (DataGroupPool == nullptr)
	{
		return;
	}
	DataGroupPool->UpdateRoundOtherDetail(RoundIndex, RoundDetails);
}

UTriggerTaskBase* ASpawnerTriggerBase::GetTaskOfTrigger(ASceneTrigger* InTrigger)
{
	TArray<UTriggerTaskComponentBase*> TaskComponents;
	InTrigger->GetTriggerTaskComponents(TaskComponents);
	if (TaskComponents.Num() < 1)
	{
		return nullptr;
	}

	//only use one task component, at present.
	UTriggerTaskComponentBase* TaskComponent = TaskComponents[0];
	TArray<UTriggerTaskBase*> TriggerTasks;
	TaskComponent->GetAllTriggerTasks(TriggerTasks);
	if (TriggerTasks.Num() < 1)
	{
		return nullptr;
	}
	//only use one task.
	return TriggerTasks[0];
}

UTriggerEvaluator_AND* ASpawnerTriggerBase::GetEvaluatorForOverlap(int32& Index, UEvaluatorOperation* InRootPrerequisite, UEvaluatorOperation* InPrerequisite)
{//only check conditions in UTriggerEvaluator_AND and UTriggerEvaluator_OR.
    if (InPrerequisite->IsA(UTriggerEvaluator_AND::StaticClass()))
    {
        //first check conditions.
        for (int32 i = 0; i < InPrerequisite->Condtions.Num(); ++i)
        {
            if (InPrerequisite->Condtions[i]->IsA(UCheckActorOverlaped::StaticClass()))
            {
                Index = i;
                break;
            }
        }
        if (Index >= 0)
        {//find and return.
            return Cast<UTriggerEvaluator_AND>(InPrerequisite);
        }
        else
        {//recursive the operators.
            for (int32 i = 0; i < InPrerequisite->Operators.Num(); ++i)
            {
                UTriggerEvaluator_AND* InCondition = GetEvaluatorForOverlap(Index, InRootPrerequisite, InPrerequisite->Operators[i]);
                if (Index >= 0)
                {
                    return InCondition;
                }
            }
        }

        return Cast<UTriggerEvaluator_AND>(InPrerequisite);
    }
    else if (InPrerequisite->IsA(UTriggerEvaluator_OR::StaticClass()))
    {
        int16 AndOperatorIndex = -1;
        //check operators directly.
        for (int32 i = 0; i < InPrerequisite->Operators.Num(); ++i)
        {
            UTriggerEvaluator_AND* InCondition = GetEvaluatorForOverlap(Index, InRootPrerequisite, InPrerequisite->Operators[i]);
            if (Index >= 0)
            {
                return InCondition;
            }
            if (InCondition && AndOperatorIndex < 0)
            {//get first UTriggerEvaluator_AND index.
                AndOperatorIndex = i;
            }
        }
        if (InRootPrerequisite == InPrerequisite)
        {//at the root Prerequisite.
            if (AndOperatorIndex >= 0)
            {//use the first UTriggerEvaluator_AND child.
                return Cast<UTriggerEvaluator_AND>(InPrerequisite->Operators[AndOperatorIndex]);
            }
            UTriggerEvaluator_AND* AndPrerequisite = NewObject<UTriggerEvaluator_AND>(this);
            InPrerequisite->Operators.Add(AndPrerequisite);
            return AndPrerequisite;
        }
        return nullptr;
    }
    else
    {
        return nullptr;
    }
}

UTriggerEvaluator_AND* ASpawnerTriggerBase::GetEvaluatorForOverlapBySwitch(int32& Index, UTriggerTaskBase* InTriggerTask, bool bAdd)
{
    UTriggerTaskStateSwitchBase* StartCondition = InTriggerTask->GetStartConditions();
    if (StartCondition == nullptr)
    {
        if (bAdd == false)
        {
            return nullptr;
        }
        UTTSS_AnyConditionMeet* StateSwitch = NewObject<UTTSS_AnyConditionMeet>(InTriggerTask);
        UTriggerEvaluator_AND* AndPrerequisite = NewObject<UTriggerEvaluator_AND>(this);
        FTriggerTaskStyleMap TaskStyle;
        TaskStyle.Condition = AndPrerequisite;
        TArray<FTriggerTaskStyleMap>& Switches = StateSwitch->GetSwitches();
        Switches.Add(TaskStyle);
        InTriggerTask->SetStartConditions(StateSwitch);
        return AndPrerequisite;
    }

    UTTSS_AnyConditionMeet* AnyConditionMeet = Cast<UTTSS_AnyConditionMeet>(StartCondition);
    if(AnyConditionMeet == nullptr)
    {//only use UTTSS_AnyConditionMeet, for now.
        return nullptr;
    }
    TArray<FTriggerTaskStyleMap>& Switches = AnyConditionMeet->GetSwitches();
    if (Switches.Num() == 0)
    {
        if (bAdd == false)
        {
            return nullptr;
        }
        UTriggerEvaluator_AND* AndPrerequisite = NewObject<UTriggerEvaluator_AND>(this);
        FTriggerTaskStyleMap TaskStyle;
        TaskStyle.Condition = AndPrerequisite;
        Switches.Add(TaskStyle);
        return AndPrerequisite;
    }
    //only use the first style in Switches, for now.
    FTriggerTaskStyleMap& TaskStyle = Switches[0];
    if (TaskStyle.Condition == nullptr)
    {
        if (bAdd == false)
        {
            return nullptr;
        }
        UTriggerEvaluator_AND* AndPrerequisite = NewObject<UTriggerEvaluator_AND>(this);
        TaskStyle.Condition = AndPrerequisite;
        return AndPrerequisite;
    }

    UTriggerEvaluator_AND* PrerequestOp = GetEvaluatorForOverlap(Index, TaskStyle.Condition, TaskStyle.Condition);

    if (PrerequestOp == nullptr)
    {
        if (bAdd == false)
        {
            return nullptr;
        }
        if (Index >= 0)
        {
            UE_LOG(LogTemp, Error, TEXT("ASpawnerTriggerBase::GetEvaluatorForOverlapBySwitch:: Error %s."), *GetActorLabel());
            return nullptr;
        }
        UEvaluatorOperation* OldRootPrerequisite = TaskStyle.Condition;
        PrerequestOp = NewObject<UTriggerEvaluator_AND>(this);
        TaskStyle.Condition = PrerequestOp;
        if (OldRootPrerequisite)
        {
            PrerequestOp->Operators.Add(OldRootPrerequisite);
        }
    }
    return PrerequestOp;
}

void ASpawnerTriggerBase::SetTriggerCollisionProfileName(FName InCollisionProfileName)
{
	UShapeComponent* CurCollisionComponent = GetCollisionComponent();

	if (CurCollisionComponent)
	{
		CurCollisionComponent->SetCollisionProfileName(InCollisionProfileName);
	}
}

void ASpawnerTriggerBase::RemoveTriggerPrerequestIfEmpty(UTriggerTaskBase* InTriggerTask)
{
    if (InTriggerTask == nullptr)
    {
        return;
    }
    UTTSS_AnyConditionMeet* AnyConditionMeet = Cast<UTTSS_AnyConditionMeet>(InTriggerTask->GetStartConditions());
    if (AnyConditionMeet == nullptr)
    {
        return;
    }
    TArray<FTriggerTaskStyleMap>& Switches = AnyConditionMeet->GetSwitches();
    if (Switches.Num() == 0)
    {
        return;
    }
    FTriggerTaskStyleMap& TaskStyle = Switches[0];
    if (TaskStyle.Condition == nullptr)
    {
        return;
    }

    if (RemoveOperationConditionIfEmpty(TaskStyle.Condition))
    {
        //clear Prerequisite, if the operator and condition is empty.
        TaskStyle.Condition = nullptr;
        if (TaskStyle.Styles.Num() == 0)
        {//all conditions and styles are removed, so remove the switch.
            Switches.RemoveAt(0);
        }
    }
}

bool ASpawnerTriggerBase::RemoveOperationConditionIfEmpty(UEvaluatorOperation* InPrerequisite)
{
	if (InPrerequisite == nullptr)
	{
		return true;
	}
	for (int32 i = 0; i < InPrerequisite->Operators.Num(); ++i)
	{
		if (RemoveOperationConditionIfEmpty(InPrerequisite->Operators[i]))
		{
			//remove the operator if the operator and condition is empty.
			InPrerequisite->Operators.RemoveAt(i);
			--i;
		}
	}
	return InPrerequisite->Operators.Num() == 0 && InPrerequisite->Condtions.Num() == 0;
}

int32 ASpawnerTriggerBase::GetChangedRoundIndex() const
{
	//only checked the spawner number in round.
	for (int16 i = 0; i < RoundDetails.Rounds.Num(); ++i)
	{
		const FEditSigleRoundInfo& Round = RoundDetails.Rounds[i];
		if (Round.SpawnerGroup.Num() != LastEditSpawnerCountInRounds[i])
		{
			return i;
		}
	}
	return -1;
}

#endif


void ASpawnerTriggerBase::PostDuplicate(bool bDuplicateForPIE)
{
	Super::PostDuplicate(bDuplicateForPIE);

#if WITH_EDITOR
	//construct connection to spawner.

	for (int16 RoundIndex = 0; RoundIndex < RoundDetails.Rounds.Num(); ++RoundIndex)
	{
		FEditSigleRoundInfo& Round = RoundDetails.Rounds[RoundIndex];
		for (int16 i = 0; i < Round.SpawnerGroup.Num(); ++i)
		{
			AAISpawnerTemplate* CurSpawner = Round.SpawnerGroup[i].Spawner;
			if (CurSpawner)
			{
				CurSpawner->UsedInTrigger(this);
			}
		}
	}

	//add condition for all trigger.
	TSet<ASceneTrigger*> NextEventTargetSet;
	for (int16 i = 0; i < NextEventInfo.Num(); ++i)
	{
		ASceneTrigger* CurTargetTrigger = NextEventInfo[i].TargetEvent;
		if (CurTargetTrigger == nullptr || NextEventTargetSet.Contains(CurTargetTrigger))
		{//exclude the same set to trigger, because it is not valid for now in trigger.
			continue;
		}
		NextEventTargetSet.Add(CurTargetTrigger);
		SyncNextEventDetailToTrigger(i);
	}

	UE_LOG(LogTemp, Log, TEXT("PostDuplicate %s"), *GetActorLabel());

	if (IsTriggerSelectedInEditor())
	{//the object is duplicate, the selected delegate is not work here.
		//so switch the selected object if need.
		ASpawnerTriggerBase* DefaultTrigger = ASpawnerTriggerBase::StaticClass()->GetDefaultObject<ASpawnerTriggerBase>();
		if (DefaultTrigger)
		{
			DefaultTrigger->SelectedInEditor(this);
		}
	}
#endif
}

void ASpawnerTriggerBase::PostInitProperties()
{
	Super::PostInitProperties();
#if WITH_EDITOR

	if (HasAnyFlags(RF_ClassDefaultObject) && GetClass() == ASpawnerTriggerBase::StaticClass())
	{
		GEditor->GetSelectedActors()->SelectObjectEvent.AddUObject(this, &ASpawnerTriggerBase::SelectedInEditor);
	}
#endif
}

void ASpawnerTriggerBase::Destroyed()
{
#if WITH_EDITOR

	//clear connection to spawner.
	for (int16 RoundIndex = 0; RoundIndex < RoundDetails.Rounds.Num(); ++RoundIndex)
	{
		FEditSigleRoundInfo& Round = RoundDetails.Rounds[RoundIndex];
		for (int16 i = 0; i < Round.SpawnerGroup.Num(); ++i)
		{
			AAISpawnerTemplate* CurSpawner = Round.SpawnerGroup[i].Spawner;
			if (CurSpawner)
			{
				CurSpawner->RemovedInTrigger(this);
			}
		}
	}

	//remove condition from all trigger.
	for (int16 i = 0; i < NextEventInfo.Num(); ++i)
	{
		ASceneTrigger* CurTargetTrigger = NextEventInfo[i].TargetEvent;
		if (CurTargetTrigger)
		{
			RemoveNextEventConditionFromTrigger(CurTargetTrigger);
		}
	}

#endif
	Super::Destroyed();
}