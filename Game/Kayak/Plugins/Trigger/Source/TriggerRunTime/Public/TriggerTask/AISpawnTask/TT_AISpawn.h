#pragma once

/*
* Author:	Liulianyou
* Time:		2020/7/8
* Purpose:	This task used to spawn AI in one trigger volume 
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "AIController.h"
#include "UObject/SoftObjectPath.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Tool/Editor/AI/AIPreviewCharacter.h"
#include "Templates/SubclassOf.h"
#include "TriggerTask/TriggerTaskBase.h"

#include "TT_AISpawn.generated.h"

class UAICreatorBase;

USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FPawnInfo
{
	GENERATED_BODY()

public:

	void AddCount() { SpawnedCount++; }
	bool IsSpawnedAll() { return SpawnedCount == Number; }
	void Reset() { SpawnedCount = 0;  CurrentTickTime = 0.f; }

public:

	//The identification for the NPC which will used to read resource form the excel file
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int NPCID;

	//The number of the target NPC need to spawn
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ClampMin = 1))
	int Number = 1;

	//The time to spawn the next AI
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ClampMin = 0.0f))
	float DelayTime;

#pragma region EDITOR_DATA_ONLY
	//As the designer don't want to use any tool to fill the transform data I add this member only for Editor usage
	UPROPERTY(Transient, BlueprintReadOnly, export, EditAnywhere)
	AAIPreviewCharacter* SpawnPoint;

	//This member only used in editor mode
	FString PreviewName;
#pragma endregion EDITOR_DATA_ONLY

	//UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UPROPERTY()
	bool UseCustomizePosition;

	//UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayAfter = UseCustomizePosition, EditCondition = UseCustomizePosition))
	UPROPERTY()
	FVector Position;

	//UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UPROPERTY()
	bool UseCustomizeRotation;

	//UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayAfter = UseCustomizeRotation, EditCondition = UseCustomizeRotation))
	UPROPERTY()
	FRotator Rotation;

	//UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UPROPERTY()
	bool UseCustomizeSize;

	//UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayAfter = UseCustomizeRotation, EditCondition = UseCustomizeRotation))
	UPROPERTY()
	FVector Size;

	//The behavior command that when we spawn new AI, we should aks it to do
	UPROPERTY(BlueprintReadOnly, export, EditAnywhere)
	FAISpawnBehaviorCommand BehaviorCommand;

	//The Tick time after new AI spawned
	float CurrentTickTime;

	int SpawnedCount;
};

//Single category of AI to be spawned at the same time
USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FAICategory
{
	GENERATED_BODY()

public:

	FAICategory() :
		Pawns(TArray<FPawnInfo>()),
		DefaultPosition(FVector::ZeroVector),
		DefaultRotation(FRotator::ZeroRotator),
		DefaultSize(1.0f,1.0f,1.0f),
		DelayTime(0.f),
		WaitTime(0.f)
	{

	}

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FPawnInfo> Pawns;

	UPROPERTY()
	FVector DefaultPosition;

	UPROPERTY()
	FRotator DefaultRotation;

	UPROPERTY()
	FVector DefaultSize;

	//Time delayed to run the next rule. Magintue:/s
	UPROPERTY(BlueprintReadOnly, EditAnywhere, meta = (ClampMin = 0.0f))
	float DelayTime;

	//Time delayed to run this rule. Magintue:/s
	UPROPERTY(BlueprintReadOnly, EditAnywhere, meta = (ClampMin = 0.0f))
	float WaitTime;
};

USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FSpawnRuleData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Enemy Spawn List"))
	TArray<FAICategory> TotalPawns;

};

USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FCurrentRoundSpawnInfor
{
	GENERATED_BODY()

		FCurrentRoundSpawnInfor() :
		RunningTime(0.f),
		AIDeadIncurrentRound(0),
		HasSpawned(false)
	{
		SpawnedAIControll.Empty();
	}

	int GetTotalSpawnedAINumber() { return SpawnedAIControll.Num() + AIDeadIncurrentRound; }

public:
	UPROPERTY(Transient)
	float RunningTime;

	//Total spawned AI in one round
	UPROPERTY(Transient)
	TArray<AAIController*> SpawnedAIControll;

	UPROPERTY(Transient)
	int AIDeadIncurrentRound;

	UPROPERTY(Transient)
	bool HasSpawned;
};


UCLASS(BlueprintType, Blueprintable, config = "Game", Category = "TriggerRunTime|Task")
class TRIGGERRUNTIME_API UTT_AISpawn : public UTriggerTaskBase
{
	GENERATED_UCLASS_BODY()

	TriggerTaskCommonFrameWorkDeclaration();

public:
	UFUNCTION(BlueprintCallable, Category = "TriggerRunTime|Task")
	int GetTotalRound() { return SpawnData.TotalPawns.Num(); }
	UFUNCTION(BlueprintCallable, Category = "TriggerRunTime|Task")
	int GetCurrentRound() { return CurrentRound; }
	UFUNCTION(BlueprintCallable, Category = "TriggerRunTime|Task")
	int GetTotalDeadAI() { return TotalDeadAI; }

	UFUNCTION(BlueprintCallable, Category = "TriggerRunTime|Task")
	const FSpawnRuleData& GetConstSpawnData() const { return SpawnData; }

	/*
	* Get all NPCIDs which are confined at this task by the LD
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRunTime|Task")
	void GetTotalNPCID( TArray<int>& NPCID );

	/*
	*  Get current pawn info in the spawn data which is used to spawn the last AI
	*3
	* @Param	Round			The round the AI
	* @Param	OutPawnIndex	
	*/
	FPawnInfo& GetPawnInfo(int Round, int& OutPawnIndex);

	//When one round finished this function will be invoked
	UFUNCTION(BlueprintCallable, Category = "TriggerRunTime|Task")
	void AIKilledInOneRound();

	/*
	* Get the total number of AI that need to be spawned at the target round
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRunTime|Task")
	int GetNumberOfPendingSpawnedAI(int Round);

	UFUNCTION(BlueprintCallable, Category = "TriggerRunTime|Task")
	void StartNewAISpawnRound(int TargetRound);

	UFUNCTION(BlueprintCallable, Category = "TriggerRunTime|Task")
	UAICreatorBase* GetAICreator() const { return AICreator; }

	UFUNCTION(BlueprintCallable, Category = "TriggerRunTime|Task")
	TArray<FCurrentRoundSpawnInfor>& GetCurrentRoundInfo() { return RoundInfo; }

	//Get the number of dead AI in current round 
	UFUNCTION(BlueprintCallable)
	int GetCurrentRoundDeadAI();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps)const;
	virtual void BeginDestroy() override;

protected:

	void AddAIDeadDelegate(AAIController* Controller);

	//Try to spawn new AI Controller include all its pawn and behavior tree
	bool TryToSpawnNewAIController( int Round, int PawnIndex );

	//Weather the condition is satisfied to spawn new AI
	bool IsSpawnConditionCommit(FCurrentRoundSpawnInfor& RoundInfo, FPawnInfo& PawnInfo);

	//Callback for the Actor destroy
	UFUNCTION()
	void OnActorDestoryCallback(AActor* DestroyedActor);

	FVector GetSpawnPosition(int RoundIndex, int PawnIndex);
	FRotator GetSpawnRotation(int RoundIndex, int PawnIndex);
	FVector GetSpawnSize(int RoundIndex, int PawnInex);
	FTransform GetSpawnTransform(int RoundIndex, int PawnInex);

#if WITH_EDITORONLY_DATA
public:
	//Update the spawn data according to the AAIPreviewCharacter 
	void UpdateSpawnData(AAIPreviewCharacter* Character);
	//When one preview character destroyed we should update the AI preview pool
	void PreviewCharacterDestroyed(AAIPreviewCharacter* PreviewCharacter);
protected:

	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;

	//When the designer assign the value to spawn point we should update our spawn data and the preview controller
	void UpdateDataAfterDataChanged();

	//Update the total preview characters in the world to remove all useless characters 
	void UpdatePreviewCharacter();

	AAIPreviewCharacter* SpawnNewPreCharacter( FVector Location, FRotator Rotation, FVector Size, FString Name, int RoundIndex, int PawnIndex );

	//Called when the player clear the value in component's task.
	static void OnClearTriggerTask();

	virtual void SelectedInEditor(UObject* SelectedActor) override;

	//Callback function when the map have been loaded
	void OnEndLoadMap(uint32 Flag);
	void OnEndLoadMapInGame(UWorld*  LoadedWorld );
	void OnLevelChangedInWorld(ULevel* Level, UWorld* World);

private:
	//Clear the useless information in world
	void ClearWorldInformation( ULevel* Level = nullptr, UWorld* World = nullptr );

private:

	TArray<AAIPreviewCharacter*> PreviewCharacters;

#endif
	

public:
	//The data of rule to spawn the AI 
	UPROPERTY(Config, BlueprintReadOnly, export, EditAnywhere, Category = "AISpawn|SpawnData")
	FSpawnRuleData SpawnData;

	//Defined how to use the data from this 
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "AISpawn|Creator")
	UAICreatorBase* AICreator;

private:

	UPROPERTY(Transient, Replicated)
	int TotalDeadAI;

	//Current round of Spawn AI
	UPROPERTY(Transient, Replicated)
	int CurrentRound;

	//Flag to check weather we need to start new round
	bool StartNewRound = false;

	UPROPERTY()
	TArray<FCurrentRoundSpawnInfor> RoundInfo;
};


