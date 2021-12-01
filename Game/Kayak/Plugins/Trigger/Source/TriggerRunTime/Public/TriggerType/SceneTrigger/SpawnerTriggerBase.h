#pragma once

#include "CoreMinimal.h"
#include "TriggerType/SceneTrigger/SceneTrigger.h"
#include "SpawnerTriggerBase.generated.h"


class AAISpawnerTemplate;
class USimpleSpawnDataGroup;
class ACharacter;
class UTriggerEvaluator_AND;
class UTriggerTaskBase;
class UEvaluatorOperation;
enum class ETriggerTaskState : uint8;
class USimpleSpawnDataGroupPool;

USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FSpawnerDetail
{
    GENERATED_USTRUCT_BODY()

    FSpawnerDetail();

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Spawner")
    AAISpawnerTemplate* Spawner;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Spawner")
    int32 EnemyGroupID;

    /* the condition to trigger next spawner, means that the left enemy number is NumberRemaining, then start the next spawner.*/
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Spawner")
    int32 NumberRemaining;
    
    /*the spawner start to spawn enemy after DelayTime.*/
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Spawner")
    float DelayTime;

    /* spawn enemy min time interval. */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Spawner")
    float TimeIntervalMin;

    /* spawn enemy max time interval. */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Spawner")
    float TimeIntervalMax;
};

USTRUCT(BlueprintType)
struct FEditInfinityRoundInfo
{
    GENERATED_USTRUCT_BODY()

    FEditInfinityRoundInfo();

public:
	/*
	* Flag to check weather this round is a pool which will spawn infinity AI.
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InfinityRound", meta = (DisplayName = "IsEnemyPool"))
	bool IsInfinityPool;

	/*
	* The threshold value to populate the AI to the pool.
    * This value should never be less then 1 which is insignificance
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InfinityRound", meta = (EditCondition = "IsInfinityPool", DisplayName = "AdditionCount"))
	int PopulateThreshold;

	/*
	* The target round that will be used to spawn infinite AI
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InfinityRound", meta = (EditCondition = "IsInfinityPool"))
	int InfinityRoundIndex;
};

USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FEditSigleRoundInfo
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RoundInfo", meta = (ShowOnlyInnerProperties))
    TArray<FSpawnerDetail> SpawnerGroup;
    
	//When to start to spawn this group AI we will use this 
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RoundInfo")
	float RoundWaitTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RoundInfo")
	float RoundDelayTime;
};

USTRUCT(BlueprintType)
struct FEditSpawnRoundInfo
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RoundInfo")
    TArray<FEditSigleRoundInfo> Rounds;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RoundInfo")
    TArray<FEditInfinityRoundInfo> InfinityInfos;
};

/** Trigger Condition Type*/
UENUM()
enum class ETriggerCondtionType : uint8
{
    ETCT_Auto UMETA(DisplayName = "Auto"),

    ETCT_Touch UMETA(DisplayName = "Touch"),
};

USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FSpanwerTriggerNextEventInfo
{
    GENERATED_USTRUCT_BODY()

public:
    //killed enemy count, then trigger next event. if 0, trigger directly.
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Next")
    int32 DeadCount;

    //next event.
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Next")
    ASceneTrigger* TargetEvent;
};


/**
 * new trigger type, special for spawner and point, just more features for editor, compared with ASceneTrigger.
 * see detail at https://ztgame.feishu.cn/docs/doccnMJqEX3JNtkgkUzicSfcS8E
 */
UCLASS(Blueprintable, BlueprintType)
class TRIGGERRUNTIME_API ASpawnerTriggerBase : public ASceneTrigger
{
    GENERATED_UCLASS_BODY()

#if WITH_EDITOR
public:
    virtual void PreEditChange(FProperty* PropertyAboutToChange) override;

    virtual void PostEditChangeChainProperty(FPropertyChangedChainEvent& PropertyChangedEvent) override;

    virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

    virtual void EditorApplyTranslation(const FVector& DeltaTranslation, bool bAltDown, bool bShiftDown, bool bCtrlDown);

    void SelectedInEditor(UObject* SelectedObject);

    bool IsTriggerSelectedInEditor() const;

    void RemoveSpawnerFromGroup(AAISpawnerTemplate* ToRemovedSpawner);
    bool IsUsedSpawner(AAISpawnerTemplate* InSpawner) const;

    // PointIndex, < 0 means clear all.
    void UpdateOnPointRemvedInSpawner(AAISpawnerTemplate* InSpawner, int32 PointIndex);
    // PointIndex, < 0 means all point.
    void UpdateOnPointUpdateInSpawner(AAISpawnerTemplate* InSpawner, int32 PointIndex);
protected:
    void SyncSpawnerDetailToTask(const int32 RoundIndex, const int32 SpawnerIndex);

    void PostEditSpawnerProperty(FPropertyChangedChainEvent& PropertyChangedEvent, bool bOnlyChangeSpawner);
    void PostEditSpawnerGroupProperty(FPropertyChangedChainEvent& PropertyChangedEvent);
    void PostEditRoundsProperty(FPropertyChangedChainEvent& PropertyChangedEvent);
    void PostEditTargetEventProperty(FPropertyChangedChainEvent& PropertyChangedEvent);
    void PostEditNextEventInfoProperty(FPropertyChangedChainEvent& PropertyChangedEvent);

    void RemoveLastEditSpawnerInRound(int32 RoundIndex, int32 SpanwerIndex);
    void ClearLastEditSpawnerInRound(int32 RoundIndex);
    void ClearAllLastEditSpawnerInRounds();
    AAISpawnerTemplate* GetSpawnerInGroupByIndex(int16 RoundIndex, int16 Index);

    USimpleSpawnDataGroupPool* GetDataGroupPool();
    USimpleSpawnDataGroup* GetDataGroup();
    void OnSelectedInEditor(bool bInSelected);
    void ShowRelationshipWithSpawner(bool bToShow);
    void SyncConditionToData();
    void SyncNextEventDetailToTrigger(const int32 EventIndex);
    void RemoveNextEventConditionFromTrigger(ASceneTrigger* InTrigger);
    void SyncRepeatCondition();
    void SyncInfinityInfos();
    void SyncRoundOtherDetail(const int16 RoundIndex);

    UTriggerTaskBase* GetTaskOfTrigger(ASceneTrigger* InTrigger);
    UTriggerEvaluator_AND* GetEvaluatorForOverlap(int32& Index, UEvaluatorOperation* InRootPrerequisite, UEvaluatorOperation* InPrerequisite);
    UTriggerEvaluator_AND* GetEvaluatorForOverlapBySwitch(int32& Index, UTriggerTaskBase* InTriggerTask, bool bAdd);
    void SetTriggerCollisionProfileName(FName InCollisionProfileName);
    
    void RemoveTriggerPrerequestIfEmpty(UTriggerTaskBase* InTriggerTask);
    bool RemoveOperationConditionIfEmpty(UEvaluatorOperation* InPrerequisite);
    int32 GetChangedRoundIndex() const;
#endif

public:
    virtual void PostDuplicate(bool bDuplicateForPIE) override;

    virtual void PostInitProperties() override;
    virtual void Destroyed() override;

public:
#if WITH_EDITORONLY_DATA
    UPROPERTY(EditAnywhere, Category = "Condition")
    ETriggerCondtionType TriggerCondition;

    UPROPERTY(EditAnywhere, Category = "Condition", meta = (EditCondition = "TriggerCondition == ETriggerCondtionType::ETCT_Touch"))
    TSubclassOf<ACharacter> Player;
    
    UPROPERTY(EditAnywhere, Category = "Condition", meta = (EditCondition = "TriggerCondition == ETriggerCondtionType::ETCT_Touch"))
    TSubclassOf<ACharacter> AI;
    
    UPROPERTY(EditAnywhere, Category = "Retrigger")
    bool bCanRetrigger;

    UPROPERTY(EditAnywhere, Category = "Retrigger", meta = (EditCondition = bCanRetrigger))
    int32 RepeatCount;
    
    //the task state to determine repeat times.
    UPROPERTY(EditAnywhere, Category = "Retrigger", meta = (EditCondition = bCanRetrigger))
    ETriggerTaskState RepeatTaskState;

    /** to config spawner detail. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RoundDetails", meta = (ShowOnlyInnerProperties))
	FEditSpawnRoundInfo RoundDetails;

    UPROPERTY(EditAnywhere, Category = "NextEvent")
    TArray<FSpanwerTriggerNextEventInfo> NextEventInfo;

    UPROPERTY(Transient)
    TArray<AAISpawnerTemplate*> LastEditSpawnerArr;
    
    TArray<int32> LastEditSpawnerCountInRounds;
    
    UPROPERTY(Transient)
    TArray<ASceneTrigger*> LastEditTargetArr;

    TWeakObjectPtr<ASpawnerTriggerBase> LastSelectedTrigger;

    bool bSelectedInEditor;
#endif
};
