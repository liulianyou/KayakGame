#pragma once

#include "CoreMinimal.h"
#include "TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroup.h"
#include "SimpleSpawnDataGroup.generated.h"


struct FSpawnerDetail;
class AAISpawnPointActor;

/**
 * Simple AISpawnDataGroup for ASpawnerTriggerBase. not spawn AISpawnGroupDataTemplate. 
 */
UCLASS()
class TRIGGERRUNTIME_API USimpleSpawnDataGroup : public UAISpawnDataGroup
{
    GENERATED_UCLASS_BODY()

public:
    virtual void InitData(UTriggerTaskBase* InTaskOwner) override;
    //spawner index is the index for GroupSpawnDatas in RoundInfos.
    void UpdateSpawnerInfo(int32 SpawnerIndex, const FSpawnerDetail* SpawnerDetail);

    // SpawnerIndex, < 0 means clear.
    void RemoveSpawner(int32 SpawnerIndex);

    // PointIndex, < 0 means clear.
    void RemovePointFromSpawner(int32 SpawnerIndex, int32 PointIndex);

    // PointIndex, < 0 means update all.
    void UpdatePointFromSpawner(int32 SpawnerIndex, const FSpawnerDetail* SpawnerDetail, int32 PointIndex);
#if WITH_EDITOR
	virtual void SelectedInEditor( UObject* SelectedObject ) override;

	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;

#endif
protected:
    //ActorIndex is the index for AIDatas in SingleGroupDataInfo.
    void ApplyDataFromAIPoint(FSingleGroupDataInfo& SingleGroupDataInfo, AAISpawnPointActor* PointActor, int32 ActorIndex);
};
