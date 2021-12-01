#pragma once

/*
* Author:	Liulianyou
* Time:		2020/9/24
* Purpose:	The data will hold the information of the group AI
*/


#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Templates/SubclassOf.h"
#include "UObject/SoftObjectPtr.h"
#include "AIInfoAccessor/AIInfoAccessor.h"
#include "AISpawnDataBase.h"
#include "Editor/AI/AISpawnGroupDataTemplate.h"
#include "TriggerDefinition.h"

#include "AISpawnDataGroup.generated.h"

//The logic in implementation1 is ugly so this is deprecated by myself <_>  
#define USEIMPLEMENTATION_1 0

class AAISpawnGroupDataTemplate;



USTRUCT(BlueprintType)
struct FSinglePawnData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "TriggerRuntime")
	FTransform AITransform;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "TriggerRuntime")
	float DelayTime = -1.0f;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "TriggerRuntime")
	float WaitTime = -1.0f;

	//UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "TriggerRuntime")
	//FSoftObjectPath AIClassType;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "TriggerRuntime")
	FAISpawnBehaviorCommand AISpawnBehaviorCommand;

	//Flag to check weather this data have used, when enter new group circle this value should be reset to false
	bool HaveUsed = false;

	//Flag to check weather the DelayTime is set by the GroupData::SingleAISpawnDelayTimeRange
	bool PopulateDealyTimeByGroupData = false;

	//Flag to check weather the WaitTime is set by the GroupData::SingleAISpawnWaitTimeRange
	bool PopulateWaitTimeByGroupData = false;

	void Reset();

};

USTRUCT(BlueprintType)
struct FGroupAITimeRange
{
	GENERATED_BODY()

	//The default time for each AI in the group to be spawned, it only work when the time in each spawn point is not specified.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime")
	float Min;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime")
	float Max;
};

USTRUCT(BlueprintType)
struct FSingleGroupDataInfo
{
	
	GENERATED_BODY()

#pragma region EditorData
public:

	//Template actor that can be put in the level for the designer to manipulate
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "TriggerRuntime")
	TSoftObjectPtr<AAISpawnGroupDataTemplate> AISpawnGroupDataTemplate;

	//The template class that this data will used
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime")
	TSubclassOf<AAISpawnGroupDataTemplate> AISpawnGroupDataTemplateClass;

	//The names for the preview character
	UPROPERTY()
	TArray<FString> PreviewCharacterNames;

	UPROPERTY()
	FTransform AISpawnGroudDataTempleteTransform;
#pragma endregion EditorData
	
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "TriggerRuntime")
	TArray<FSinglePawnData> AIDatas;

	//EnemyGroupID which stand for the enemy ID which will contain the actual NPC IDs
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime")
	int EnemyGroupID;

	//When the number of remaining spawned AI in this group is less then this value then next group will been processed
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime")
	int NumberRemaining;

	//If the wait time in the AIData is not specified I will use this to give target AI data a random time
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime", meta=(DisplayName="TimeInterval"))
	FGroupAITimeRange SingleAISpawnWaitTimeRange;

	FGroupAITimeRange SingleAISpawnDelayTimeRange;

	//When to start to spawn this group AI we will use this 
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime")
	float WaitTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime")
	float DelayTime;

	//Current count of spawned AI
	int SpawnedCount = 0;

	//Total count to spawn new AI
	int NeedToSpawnedAICount = INDEX_NONE;

	int CircleCount;

	//The Total time passed in current group
	float SpawnedTime;

	float TargetTime;

	//The Total NPCID in current enemyID
	TArray<FEnemyIDInfo> NPCInfos;

public:

	/*
	* if TargetTime is less then 0, then use the time range to get a random time
	* 
	* @param IsDelayTime check weather the random time is from delay time in the AIData
	*/
	float GetRandomTime(int AIIndex, bool IsDelayTime);

	void Reset();
};

USTRUCT(BlueprintType)
struct FSingleGroupSpawnRoundInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime")
	TArray<FSingleGroupDataInfo> GroupSpawnDatas;

	//When to start to spawn this group AI we will use this 
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime")
	float WaitTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime")
	float DelayTime;

	//Flag to check weather this have been processed
	bool HasBeenProcessed = false;

	//Flag to check weather this round have broad cast the finished event
	bool HasBroadCastFinishedEvent;

	bool IsAllAISpawned();

	void Reset();
};

struct FSpawnDataGroup_AIInfo_ExternalData
{
	int NPCID;

	FAISpawnBehaviorCommand AICommand;
};

/*
* The final Information of AI include the data form this and some external information
* Maybe I will change it to one object not a struct in the feature
*/
USTRUCT()
struct FEnemyInfo
{
	GENERATED_BODY()
public:

	bool IsControllerDeadOrDestroyed() {return IsDestroyed || IsDead;}

	//The Information which will used to spawn the new AI
	UPROPERTY()
	FAIInfo AIInfo;

	//The blow three variable to stand for the index of the AI belong to this data
	int RoundIndex = -1;
	int GroupIndex = -1;
	int AIIndex = -1;

	//The final spawned controller
	AAIController* Controller = nullptr;

	//flag to check weather this controller has been assigned as Controller maybe be reset to nullptr when it is destroyed
	bool ControllerHaveBeenAssigned = false;

	bool IsDestroyed = false;
	bool IsDead = false;
};

UCLASS(Blueprintable, BlueprintType)
class TRIGGERRUNTIME_API UAISpawnDataGroup : public UAISpawnDataBase
{
	GENERATED_UCLASS_BODY()

public:
	virtual void InitData(UTriggerTaskBase* TaskOwner);
	virtual void GetCurrentVaildAIInfoToSpawn(float DeltaTime, TArray<FAIInfo>& AIInfos , bool& BreakSpawnChain, bool& SkipCurrentSpawn) override;
	virtual int GetCurrentRound() override;
	virtual int GetMaxRound() override;
	virtual int GetAIRemainedToSpawnInCurrentRound() override;
	virtual void SpawnAIPostProcess(AAIController* Controller, APawn* Pawn,  FAIInfo& AIInfo) override;
	virtual void ApplayDataFromAIPreviewCharacter(AAIPreviewCharacter* Character) override;
	virtual void ControllerDeadOrDestroyedCallback(bool IsDead, AAIController* Controller) override;
	virtual bool PreProcessNewPawn(AController* Controller, APawn* Pawn,  FAIInfo& AIInfo ) override;
	virtual bool PostProcessNewPawn(AController* Controller, APawn* Pawn,  FAIInfo& AIInfo) override;
	virtual int GetNumberOfTotalDeadAI() override;
	virtual void Reset(ETriggerTaskResetType ResetType) override;
	virtual bool CanStopSpawnAI() override;
	virtual void GetALLNPCIDs(TArray<int>& NPCIDs) override;

	virtual void BeginDestroy() override;

	void GetAIInfoFormNPCID(FAIInfo& AIInfo, int NPCID);

	void GetVaildNPCInfos(int RoundIndex, int GroupInex);

	//Get data from target round index
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	void SetStartRoundIndex(int RoundIndex);

	UFUNCTION()
	void OnAISpawnGroupDataTemplateDestoryed(AActor* DestroyedActor);

#if WITH_EDITORONLY_DATA

	virtual void ClearEditorInformaiton() override;

	virtual void SelectedInEditor( UObject* SelectedObject );

	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;

	//Update the local AIGroupSpawnDataTemplete Actor in the Editor World
	void UpdateAIGroupSpawnDataTemplate();

protected:
	//Callback function when the map have been loaded
	void OnEndLoadMap(uint32 Flag);
	void OnEndLoadMapInGame(UWorld* LoadedWorld);
	void OnLevelChangedInWorld(ULevel* Level, UWorld* World);
	void OnPostSaveWorld(uint32, class UWorld*, bool);
	void OnPreSaveWorld(uint32, class UWorld*);

private:
	//Clear the useless information in world
	void ClearWorldInformation(ULevel* Level = nullptr, UWorld* World = nullptr);
#endif

public:

	//Help function to check weather we need to skip wait time and delay time
	bool NeedSkipWaitTimeAndDelayTime();

	//When the template have changed its transform we should update the data stored in the class
	void UpdateGroupSpawnTempleteTransform(AAISpawnGroupDataTemplate* SpawnTemplete, FTransform& Transfomr);
	
#pragma region Implementation1
protected:

	bool SkipEmptyData();
	bool IsFinished();
	bool IsFinishedCurrentRound(bool& NeedWait);
	bool IsFinishedCurrentGroup(bool& NeedWait);



	void InteralGetAIInfos(TArray<FAIInfo>& AIInfo, bool& BreakSpawnChain, bool& SkipCurrentSpawn);

	bool CheckCurretStatus(bool& BreakCurrentSpawnChain);

private:

#pragma endregion Implementation1
public:
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime")
	TArray<FSingleGroupSpawnRoundInfo> RoundInfos;


#pragma  region Implementation2

	/*
	* The result type of process this data
	*/
	enum EProcessResultType
	{
		EProcessResultType_WaitRoundWaitTime,
		EProcessResultType_WaitRoundDealyTime,
		EProcessResultType_WaitGroupWaitTime,
		EProcessResultType_WaitGroupDelayTime,
		EProcessResultType_WaitAIWaitTime,
		EProcessResultType_WaitAIDelayTime,
		EProcessResultType_AllAISpawnedInGroup,
		EProcessResultType_CanGoNextRound,
		EProcessResultType_SkipGroup,
		EProcessResultType_Success
	};

	float GetCurrentRoundTime(int RoundIndex, bool IncludeGroupTime = true, bool IncludeAITime = true);
	float GetCurrentGroupTime(int RoundIndex, int GroupIndexbool, bool IncludeAITime = true);
	float GetCurrentAISpawnTime(int RoundIndex, int GroupIndex, int AIIndex);

	//#return True means we should do nothing until the actual spawn time is meet the expected time
	bool CheckTime( float& SpawnedTime, float& TargetTime, float CurrentTime);
	//Check the situation weather we can process new round beyond the time condition
	bool IsAllAIDeadInCurrentRound( int RoundIndex );
	EProcessResultType Process(float DeltaTime, TArray<FAIInfo>& AIInfos, bool& StopSpawnChain);
	//#return True means we should not go to the next stage until meet the condition
	EProcessResultType ProcessNewRound(int NewRoundIndex, float& LocalTime, TArray<FAIInfo>& AIInfos, float DeltaTime);
	EProcessResultType ProcessNewGroup(int NewRoundIndex, int NewGroupIndex, float& LocalTime, TArray<FAIInfo>& AIInfos, float DeltaTime);
	//#return True means new AI Info have been generated to be spawned later
	bool ProcessNewAI(int NewRoundIndex, int NewGroupIndex, int ProcessedAIIndex, TArray<FAIInfo>& AIInfos);
	//#return True means next round can be spawned
	bool CanGointoNextRound(int NewRoundIndex, int NewGroupIndex );
private:
	//The target time that this data should pass to start new spawn stage.
	float TargetTime = 0.0f;
#pragma  endregion Implementation2

protected:
	//Current round to spawn new AI
	int CurrentSpawnedRound;

	//The group in spawn round to spawn new AI
	int CurrentSpawnedGroup;

	//The index of AI in the current spawned Group
	int AIIndex;

	//The total time have gone after began to spawn new round  AI
	float SpawnTime = 0.0f;

	//The number of AI need to spawned at current round.
	UPROPERTY()
	TArray<FEnemyInfo> AIInfosAtCurrentRound;
};