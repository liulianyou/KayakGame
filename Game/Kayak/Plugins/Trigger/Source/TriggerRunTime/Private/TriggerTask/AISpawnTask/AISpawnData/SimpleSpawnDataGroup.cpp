#include "TriggerTask/AISpawnTask/AISpawnData/SimpleSpawnDataGroup.h"
#include "TriggerType/SceneTrigger/SpawnerTriggerBase.h"
#include "TriggerRunTime/Public/Tool/AISpawnerTemplate.h"
#include "TriggerRunTime/Public/Tool/AISpawnPointActor.h"

USimpleSpawnDataGroup::USimpleSpawnDataGroup(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{

}


void USimpleSpawnDataGroup::InitData(UTriggerTaskBase* InTaskOwner)
{
    //remove UAISpawnDataGroup::UpdateAIGroupSpawnDataTemplate
    UAISpawnDataBase::InitData(InTaskOwner);
}

void USimpleSpawnDataGroup::UpdateSpawnerInfo(int32 SpawnerIndex, const FSpawnerDetail* SpawnerDetail)
{//spawner index is the index in GroupSpawnDatas.
    if (SpawnerDetail == nullptr)
    {
        return;
    }

    if (RoundInfos.Num() == 0)
    {//add round info, if there no.
        RoundInfos.Add(FSingleGroupSpawnRoundInfo());
    }

    //only use one Round, at present.
    FSingleGroupSpawnRoundInfo& RoundInfo = RoundInfos[0];
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

    if (SpawnerIndex == CurrentSpawnerNum && SpawnerDetail->Spawner)
    {// first add, init group points.
        TArray<FPointActor>& PointsGroup = SpawnerDetail->Spawner->GetSpawnPointsGroup();
        for (int32 i = 0; i < PointsGroup.Num(); ++i)
        {
            ApplyDataFromAIPoint(SpawnerData, PointsGroup[i].Point, i);
        }
    }
}

void USimpleSpawnDataGroup::RemoveSpawner(int32 SpawnerIndex)
{
    if (RoundInfos.Num() == 0)
    {//something is wrong.
        return;
    }

    //only use one Round, at present.
    FSingleGroupSpawnRoundInfo& RoundInfo = RoundInfos[0];

    if (SpawnerIndex < 0)
    {
        RoundInfo.GroupSpawnDatas.Reset();
    }
    else if (RoundInfo.GroupSpawnDatas.Num() > SpawnerIndex)
    {
        RoundInfo.GroupSpawnDatas.RemoveAt(SpawnerIndex);
    }
}

void USimpleSpawnDataGroup::RemovePointFromSpawner(int32 SpawnerIndex, int32 PointIndex)
{
    if (RoundInfos.Num() < 1)
    {
        return;
    }

    //only use one Round, at present.
    FSingleGroupSpawnRoundInfo& RoundInfo = RoundInfos[0];
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

void USimpleSpawnDataGroup::UpdatePointFromSpawner(int32 SpawnerIndex, const FSpawnerDetail* SpawnerDetail, int32 PointIndex)
{
    if (RoundInfos.Num() < 1)
    {
        return;
    }
    //only use one Round, at present.
    FSingleGroupSpawnRoundInfo& RoundInfo = RoundInfos[0];
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

#if WITH_EDITOR

void USimpleSpawnDataGroup::SelectedInEditor(UObject* SelectedObject)
{

}

void USimpleSpawnDataGroup::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
    //remove UAISpawnDataGroup::UpdateAIGroupSpawnDataTemplate
    UAISpawnDataBase::PostEditChangeProperty(PropertyChangedEvent);
}

#endif

void USimpleSpawnDataGroup::ApplyDataFromAIPoint(FSingleGroupDataInfo& SingleGroupDataInfo, AAISpawnPointActor* PointActor, int32 ActorIndex)
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