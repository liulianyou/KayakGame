// Copyright 1998-2099 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroupPool.h"
#include "SimpleSpawnDataGroupPool.generated.h"


struct FSpawnerDetail;
struct FEditSpawnRoundInfo;
class AAISpawnPointActor;

/**
 * Simple AISpawnDataGroupPool, like USimpleSpawnDataGroup.
 */
UCLASS()
class TRIGGERRUNTIME_API USimpleSpawnDataGroupPool : public UAISpawnDataGroupPool
{
    GENERATED_UCLASS_BODY()

public:
    virtual void InitData(UTriggerTaskBase* InTaskOwner) override;
    //spawner index is the index for GroupSpawnDatas in RoundInfos.
    void UpdateSpawnerInfo(int32 RoundIndex, int32 SpawnerIndex, const FSpawnerDetail* SpawnerDetail, bool bAllUpdate);

    // SpawnerIndex, < 0 means clear.
    void RemoveSpawner(int32 RoundIndex, int32 SpawnerIndex);

    // RoundIndex, < 0 means clear.
    void RemoveRound(int32 RoundIndex);

    // PointIndex, < 0 means clear.
    void RemovePointFromSpawner(int32 RoundIndex, int32 SpawnerIndex, int32 PointIndex);

    // PointIndex, < 0 means update all.
    void UpdatePointFromSpawner(int32 RoundIndex, int32 SpawnerIndex, const FSpawnerDetail* SpawnerDetail, int32 PointIndex);

    // RoundIndex, < 0 means update all.
    void UpdateRoundOtherDetail(int16 RoundIndex, const FEditSpawnRoundInfo& RoundsInfo);

    void UpdateRoundInfinityInfos( const FEditSpawnRoundInfo& RoundInfinityInfos);
#if WITH_EDITOR
	virtual void SelectedInEditor( UObject* SelectedObject ) override;

	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;

#endif
protected:
    //ActorIndex is the index for AIDatas in SingleGroupDataInfo.
    void ApplyDataFromAIPoint(FSingleGroupDataInfo& SingleGroupDataInfo, AAISpawnPointActor* PointActor, int32 ActorIndex);
};
