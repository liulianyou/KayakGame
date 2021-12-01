#pragma once

#include "CoreMinimal.h"
#include "Tool/Editor/TriggerEditorActorBase.h"
#include "AISpawnerTemplate.generated.h"

class AAISpawnPointActor;
class UAnimMontage;
class ASpawnerTriggerBase;
class USplineComponent;
class UBillboardComponent;


USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FPointActor
{
    GENERATED_BODY()
public:
    FPointActor();
    FPointActor(AAISpawnPointActor* InPoint);

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PointActor")
    AAISpawnPointActor* Point;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PointActor")
    TArray<UAnimMontage*> SpawnMontages;
};

/**
 * the spawner is different with parent class. it can add point dynamically. and different spawner maybe have same point.
 * see detail at https://ztgame.feishu.cn/docs/doccnMJqEX3JNtkgkUzicSfcS8E
 */
UCLASS()
class TRIGGERRUNTIME_API AAISpawnerTemplate : public ATriggerEditorActorBase
{
    GENERATED_UCLASS_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SpawnPointsGroup")
    TArray<FPointActor> SpawnPointsGroup;

public:
    TArray<FPointActor>& GetSpawnPointsGroup();

    virtual void PostLoad() override;
    virtual void PostDuplicate(bool bDuplicateForPIE) override;
    virtual void Destroyed() override;
#if WITH_EDITOR
    virtual void EditorApplyTranslation(const FVector& DeltaTranslation, bool bAltDown, bool bShiftDown, bool bCtrlDown);
    void AddPointActor(AAISpawnPointActor* InPointActor);

    bool IsUsedPoint(AAISpawnPointActor* InPointActor) const;

    void UsedInTrigger(ASpawnerTriggerBase* InTrigger);

    void RemovedInTrigger(ASpawnerTriggerBase* InTrigger);

    void ShowSpawnerRelationshipTo(FVector Endposition);

    void HideSpawnerRelationShip();
    virtual void PreEditChange(FProperty* PropertyAboutToChange) override;
    virtual void PostEditChangeChainProperty(FPropertyChangedChainEvent& PropertyChangedEvent) override;
    virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
    bool IsSpawnerSelectedInEditor() const;

    void SelectedInEditor(UObject* SelectedObject);

    void RemovePointFromGroup(AAISpawnPointActor* ToRemovedPoint);

    void UpdateInfoByPoint(AAISpawnPointActor* InPoint);
protected:
    void PostEditPointProperty(FPropertyChangedChainEvent& PropertyChangedEvent);
    void PostEditPointGroupProperty(FPropertyChangedChainEvent& PropertyChangedEvent);
    void OnSelectedInEditor(bool bInSelected);
    void ShowRelationshipWithPoint(bool bToShow);

    AAISpawnPointActor* GetPointInGroupByIndex(int32 Index);

    void SynchronizeOnPointChange(bool bRemoved, int32 PointIndex);

    void UpdatePointIndexAfterEdit();
#endif

protected:
	//use this component to show the relation ship between the other spawner and trigger in editor
	UPROPERTY()
	USplineComponent* RelationShipLine;

	UPROPERTY()
	UBillboardComponent* SpriteComponent;

    //to store triggers which use the spawner, the value is the use times.
	UPROPERTY(VisibleAnywhere, Category = "UsedInTrigger", meta = (DisplayName = "Trigger And Reference Count"))
	TMap<ASpawnerTriggerBase*, int32> TriggerAndCountMap;
    
    UPROPERTY(Transient)
    TArray<AAISpawnPointActor*> LastEditPointArr;

    TWeakObjectPtr<AAISpawnerTemplate> LastSelectedSpawner;
    bool bIsAddingPoints;
    bool bSelectedInEditor;
};
