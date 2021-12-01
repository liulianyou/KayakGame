// Copyright 1998-2099 Epic Games, Inc. All Rights Reserved.


#include "TriggerTask/AISpawnTask/AISpawnData/SimpleSpawnDataGroupPool.h"
#include "TriggerType/SceneTrigger/SpawnerTriggerBase.h"
#include "TriggerRunTime/Public/Tool/AISpawnerTemplate.h"
#include "TriggerRunTime/Public/Tool/AISpawnPointActor.h"

USimpleSpawnDataGroupPool::USimpleSpawnDataGroupPool(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{

}


void USimpleSpawnDataGroupPool::InitData(UTriggerTaskBase* InTaskOwner)
{
    //remove UAISpawnDataGroup::UpdateAIGroupSpawnDataTemplate
    UAISpawnDataBase::InitData(InTaskOwner);
}

void USimpleSpawnDataGroupPool::UpdateSpawnerInfo(int32 RoundIndex, int32 SpawnerIndex, const FSpawnerDetail* SpawnerDetail, bool bAllUpdate)
{//spawner index is the index in GroupSpawnDatas.
    if (SpawnerDetail == nullptr)
    {
        return;
    }

    if (RoundInfos.Num() == RoundIndex)
    {//add round info, if there no.
        RoundInfos.Add(FSingleGroupSpawnRoundInfo());
    }

    //only use one Round, at present.
    FSingleGroupSpawnRoundInfo& RoundInfo = RoundInfos[RoundIndex];
    const int32 CurrentSpawnerNum = RoundInfo.GroupSpawnDatas.Num();
    if (CurrentSpawnerNum < SpawnerIndex)
    {//there are something wrong.
        return;
    }
    else if (CurrentSpawnerNum == SpawnerIndex)
    {//add a spawner.
        RoundInfo.GroupSpawnDatas.Add(FSingleGroupDataInfo());
    }
    FSingleGroupDataInfo& SpawnerData = RoundInfo.GroupSpawnDatas[SpawnerIndex];
    SpawnerData.WaitTime = SpawnerDetail->DelayTime;
    SpawnerData.EnemyGroupID = SpawnerDetail->EnemyGroupID;
    SpawnerData.NumberRemaining = SpawnerDetail->NumberRemaining;
    SpawnerData.SingleAISpawnWaitTimeRange.Max = SpawnerDetail->TimeIntervalMax;
    SpawnerData.SingleAISpawnWaitTimeRange.Min = SpawnerDetail->TimeIntervalMin;

    //when new spawner or bAllUpdate is true, update point info.
    if ((SpawnerIndex == CurrentSpawnerNum || bAllUpdate) && SpawnerDetail->Spawner)
    {// first add, init group points.
        TArray<FPointActor>& PointsGroup = SpawnerDetail->Spawner->GetSpawnPointsGroup();
        for (int32 i = 0; i < PointsGroup.Num(); ++i)
        {
            ApplyDataFromAIPoint(SpawnerData, PointsGroup[i].Point, i);
        }
    }
}

void USimpleSpawnDataGroupPool::RemoveSpawner(int32 RoundIndex, int32 SpawnerIndex)
{
    if (RoundInfos.Num() == 0 || RoundInfos.Num() <= RoundIndex || RoundIndex < 0)
    {//something is wrong.
        return;
    }

    //only use one Round, at present.
    FSingleGroupSpawnRoundInfo& RoundInfo = RoundInfos[RoundIndex];

    if (SpawnerIndex < 0)
    {
        RoundInfo.GroupSpawnDatas.Reset();
    }
    else if (RoundInfo.GroupSpawnDatas.Num() > SpawnerIndex)
    {
        RoundInfo.GroupSpawnDatas.RemoveAt(SpawnerIndex);
    }
}

void USimpleSpawnDataGroupPool::RemoveRound(int32 RoundIndex)
{
    if (RoundInfos.Num() == 0)
    {//something is wrong.
        return;
    }
    if (RoundIndex < 0)
    {
        RoundInfos.Reset();
    }
    else if (RoundInfos.Num() > RoundIndex)
    {
        RoundInfos.RemoveAt(RoundIndex);
    }
}

void USimpleSpawnDataGroupPool::RemovePointFromSpawner(int32 RoundIndex, int32 SpawnerIndex, int32 PointIndex)
{
    if (RoundInfos.Num() == 0 || RoundInfos.Num() <= RoundIndex || RoundIndex < 0)
    {
        return;
    }

    //only use one Round, at present.
    FSingleGroupSpawnRoundInfo& RoundInfo = RoundInfos[RoundIndex];
    const int32 CurrentSpawnerNum = RoundInfo.GroupSpawnDatas.Num();
    if (CurrentSpawnerNum <= SpawnerIndex)
    {//there are something wrong.
        return;
    }

    FSingleGroupDataInfo& SpawnerData = RoundInfo.GroupSpawnDatas[SpawnerIndex];

    if (SpawnerData.AIDatas.Num() <= PointIndex)
    {//there are something wrong.
        return;
    }
    if (PointIndex < 0)
    {
        SpawnerData.AIDatas.Reset();
    }
    else
    {
        SpawnerData.AIDatas.RemoveAt(PointIndex);
    }
}

void USimpleSpawnDataGroupPool::UpdatePointFromSpawner(int32 RoundIndex, int32 SpawnerIndex, const FSpawnerDetail* SpawnerDetail, int32 PointIndex)
{
    if (RoundInfos.Num() == 0 || RoundInfos.Num() <= RoundIndex || RoundIndex < 0)
    {
        return;
    }
    //only use one Round, at present.
    FSingleGroupSpawnRoundInfo& RoundInfo = RoundInfos[RoundIndex];
    const int32 CurrentSpawnerNum = RoundInfo.GroupSpawnDatas.Num();
    if (CurrentSpawnerNum <= SpawnerIndex)
    {//there are something wrong.
        return;
    }
    FSingleGroupDataInfo& SpawnerData = RoundInfo.GroupSpawnDatas[SpawnerIndex];
    if (SpawnerDetail == nullptr)
    {
        return;
    }
    TArray<FPointActor>& PointsGroup = SpawnerDetail->Spawner->GetSpawnPointsGroup();
    if (PointIndex < 0)
    {
        for (int32 i = 0; i < PointsGroup.Num(); ++i)
        {
            ApplyDataFromAIPoint(SpawnerData, PointsGroup[i].Point, i);
        }
    }
    else if (PointIndex < PointsGroup.Num())
    {
        ApplyDataFromAIPoint(SpawnerData, PointsGroup[PointIndex].Point, PointIndex);
    }
}

void USimpleSpawnDataGroupPool::UpdateRoundOtherDetail(int16 RoundIndex, const FEditSpawnRoundInfo& RoundsInfo)
{
    if (RoundIndex < 0)
    {
        RoundInfos.Reserve(RoundsInfo.Rounds.Num());
        for (int16 i = 0; i < RoundsInfo.Rounds.Num(); ++i)
        {
            if (i == RoundInfos.Num())
            {
                RoundInfos.Add(FSingleGroupSpawnRoundInfo());
            }
            FSingleGroupSpawnRoundInfo& RoundInfo = RoundInfos[i];
            RoundInfo.WaitTime = RoundsInfo.Rounds[i].RoundWaitTime;
            RoundInfo.DelayTime = RoundsInfo.Rounds[i].RoundDelayTime;
        }
        return;
    }
    else if (RoundInfos.Num() == RoundIndex)
    {//add round info, if there no.
        RoundInfos.Add(FSingleGroupSpawnRoundInfo());
    }
    if (RoundInfos.Num() < RoundIndex)
    {//there are something wrong.
        return;
    }
    FSingleGroupSpawnRoundInfo& RoundInfo = RoundInfos[RoundIndex];
    RoundInfo.WaitTime = RoundsInfo.Rounds[RoundIndex].RoundWaitTime;
    RoundInfo.DelayTime = RoundsInfo.Rounds[RoundIndex].RoundDelayTime;
}

void USimpleSpawnDataGroupPool::UpdateRoundInfinityInfos(const FEditSpawnRoundInfo& RoundInfinityInfos)
{
    InfinityInfos.Init(FInfinityRound(), RoundInfinityInfos.InfinityInfos.Num());
    for (int16 i = 0; i < RoundInfinityInfos.InfinityInfos.Num(); ++i)
    {
        InfinityInfos[i].IsInfinityPool = RoundInfinityInfos.InfinityInfos[i].IsInfinityPool;
        InfinityInfos[i].PopulateThreshold = RoundInfinityInfos.InfinityInfos[i].PopulateThreshold;
        InfinityInfos[i].RoundIndex = RoundInfinityInfos.InfinityInfos[i].InfinityRoundIndex;
    }
}

#if WITH_EDITOR

void USimpleSpawnDataGroupPool::SelectedInEditor(UObject* SelectedObject)
{

}

void USimpleSpawnDataGroupPool::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
    //remove UAISpawnDataGroup::UpdateAIGroupSpawnDataTemplate
    UAISpawnDataBase::PostEditChangeProperty(PropertyChangedEvent);
}

#endif

void USimpleSpawnDataGroupPool::ApplyDataFromAIPoint(FSingleGroupDataInfo& SingleGroupDataInfo, AAISpawnPointActor* PointActor, int32 ActorIndex)
{//synchronize the point info to group data, like point Transform, SpawnMontages.
    for (int16 i = SingleGroupDataInfo.AIDatas.Num(); i <= ActorIndex; ++i)
    {
        SingleGroupDataInfo.AIDatas.Add(FSinglePawnData());
    }
    if (PointActor == nullptr)
    {
        return;
    }

    FSinglePawnData& AIData = SingleGroupDataInfo.AIDatas[ActorIndex];

    AIData.AISpawnBehaviorCommand.bSetAllPlayerToAIThreat = PointActor->IsSetAllPlayerToAIThreat();
    AIData.AISpawnBehaviorCommand.SpawnMontages = PointActor->GetSpawnMontages();
    AIData.AITransform = PointActor->GetActorTransform();
    AIData.DelayTime = 0.0f;
    AIData.WaitTime = 0.0f;
}

