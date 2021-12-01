#pragma once

/*
* Author:	Liulianyou
* Time:		2021/5/7
* Purpose:	This data is used to spawn infinity AI to make sure the number of pending spawned AI or alive AI should always equal to the total confined by the designer
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "AISpawnDataGroup.h"

#include "AISpawnDataGroupPool.generated.h"

namespace AISPawnDataGroupPool
{
	enum
	{
		MINIALCOUNT = 1,
		//The default value which is stand for no duration time
		NODURATIONTIME = -1,
		//The minimal valid time for the duration
		MINIMALVALIDDURATIONTIME= 0,
	};
}


USTRUCT(BlueprintType)
struct FInfinityRound
{
	GENERATED_BODY()

	/*
	* The following two values is used to make sure the total number of pending spawned(or alive AI) should always equal to the total number which is confined by the designer
	*/

	/*
	* Flag to check weather this round is a pool which will spawn infinity AI.
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime", meta = (DisplayName = "IsEnemyPool"))
	bool IsInfinityPool = false;

	/*
	* The threshold value to populate the AI to the pool.
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime", meta = (EditCondition = "IsInfinityPool", DisplayName = "AdditionCount", UIMin = 1))
	int PopulateThreshold = 0;

	/*
	* The target round that will be used to spawn infinite AI
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime", meta = (EditCondition = "IsInfinityPool"))
	int RoundIndex = INDEX_NONE;

	/*
	* How much time the new AI will be spawned, if this value is AISPawnDataGroupPool::NODURATIONTIME then this data will never stop
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime", meta = (EditCondition = "IsInfinityPool"))
	float MaxDurationTime = AISPawnDataGroupPool::NODURATIONTIME;

public:
	bool IsValid() const;

	void IncreaseEscapedTime( float DeltaTime );

	void MarkDurationTimeStarted(){ StartToCalculateDurationTime = true; }

	//The remain number of point to spawn new AI in the target round
	int RemainPointToSpawnPendingAI = INDEX_NONE;

	//This value should not been changed after  it is initialized
	int DefaultMaxRemainPointToSpawnPendAI = INDEX_NONE;

	static FInfinityRound InvalidValue;

private:
	//The time have escaped after first  new dead AI have been spawned
	float DurationTime = AISPawnDataGroupPool::MINIMALVALIDDURATIONTIME;

	//Flag to check weather can calculate the duration time
	bool StartToCalculateDurationTime = false;
};

//The struct to hold the map of the AIInfo which the pending spawned AI
USTRUCT(BlueprintType)
struct FPendingSpawnNewAIInfo
{
	GENERATED_BODY()

public:

	//Which round the target AIController belong to
	UPROPERTY(BlueprintReadOnly)
	int RoundIndex = INDEX_NONE;

	//Which AI need to be spawned again
	UPROPERTY(BlueprintReadOnly)
	AAIController* AIController = nullptr;

	//Which information is used to spawn the AIController
	UPROPERTY(BlueprintReadOnly)
	FAIInfo AIInfo;

private:
	//Flag to check weather this pending spawned info has been used to spawn new AI successfully
	bool Spawned = false;

public:

	bool CanbeUsedToSpawnAI(int RoundIndex);

	//Mark this pending info has been used to spawn new AI successfully
	void MarkSpawned() { Spawned = true; }

	FORCEINLINE bool IsSpawned() const { return Spawned; }

	bool IsValid();


public:
	static FPendingSpawnNewAIInfo InvaildValue;

};

UCLASS(Blueprintable, BlueprintType)
class TRIGGERRUNTIME_API UAISpawnDataGroupPool : public UAISpawnDataGroup
{
	GENERATED_UCLASS_BODY()

public:

	virtual void GetCurrentVaildAIInfoToSpawn(float DeltaTime, TArray<FAIInfo>& AIInfos, bool& BreakSpawnChain, bool& SkipCurrentSpawn) override;
	virtual void ControllerDeadOrDestroyedCallback(bool IsDead, AAIController* Controller) override;
	virtual void SpawnAIPostProcess(AAIController* Controller, APawn* Pawn, FAIInfo& AIInfo) override;
	virtual bool CanStopSpawnAI() override;

protected:

	//Try to spawn the dead AI to make sure all the alive AI is equal to the number that the designer confined.
	void TrySpawnAppendAI(float DeltaTime, TArray<FAIInfo>& AIInfos);
	

private:

	bool StartToProcessRound(FInfinityRound& InfinityInfo, TArray<FAIInfo>& AIInfos, float DeltaTime);
	bool StartToProcessGroup(FInfinityRound& InfinityInfo, int GroupIndex, TArray<FAIInfo>& AIInfos, float DeltaTime);

	bool IsInfinityInfoValid( const FInfinityRound& InfinityInfo) const;

	/*
	* Check weather all AI which is spawned to append the AI pool are dead 
	*/
	bool IsAllPendingSpawnedAIDead();

	FInfinityRound& GetInifinityInfo(int RoundIndex);

	FPendingSpawnNewAIInfo& PopPendingSpawnAIInfo(int RoundIndex);

	int GetPendingSpawnedAINum(int RoundIndex);


public:

	//The information about the AI Pool
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime")
	TArray<FInfinityRound> InfinityInfos;

	//I treat this array as FIFO list
	UPROPERTY(BlueprintReadOnly)
	TArray<FPendingSpawnNewAIInfo> PendingSpawnAIInfos;

};
