#pragma once

/*
* Author:		Liulianyou
* Time:			2020/12/18
* Purpose:		This statics is used to collect all AI information in the map
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerStatics/TriggerStaticsBase.h"

#include "TS_AIStatics.generated.h"

/*
* The information that used to describe the runtime AISpawnTask
*/
USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FAISpawnInformation
{

	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly)
	int RoundIndex;

	UPROPERTY(BlueprintReadOnly)
	bool SkipWaitTime;
	
	UPROPERTY(BlueprintReadOnly)
	bool SkipDelayTime;

	UPROPERTY(BlueprintReadOnly)
	bool SkipTask;

	friend bool operator==(const FAISpawnInformation& Left, const FAISpawnInformation& Right);

};

bool operator==(const FAISpawnInformation& Left, const FAISpawnInformation& Right);

class AGameModeBase;
class UAISpawnDataBase;
/*
* This statics will skip some AI spawn tasks in the map
*/
UCLASS(BlueprintType, Blueprintable, Category = "TriggerRuntime")
class TRIGGERRUNTIME_API UTS_AIStatics : public UTriggerStaticsBase
{
	GENERATED_UCLASS_BODY()

public:
	virtual void BeginDestroy() override;

public:
	
	UFUNCTION()
	void OnAISpawnStateEvent(UTriggerTaskBase* InstanceTask);

	UFUNCTION()
	void OnNewAISpawnedFinished( UAISpawnDataBase* SpawnData );

	//Callback event when the world is tear down
	void OnWorldTearDown(UWorld* World);

	void OnGameModeInitialize(AGameModeBase* GameMode);

public:
	
	void AISpawnTaskFinishEvent(UTriggerTaskBase* Task);

	/*
	* when new AISpawn Task active 
	*/
	void AISpawnTaskActiveEvent(UTriggerTaskBase* Task);

	//Get current total round for AI spawn task
	int GetCurrentRound();

	void SetStartRound( int Round );

	int GetStartRound( );

	//Help function to skip wait and delay time
	UFUNCTION(BlueprintCallable, Category = "AIStatics")
	void SetAISpawnRoundSkipWaitAndDelayTime(bool Value);

	bool GetAISpawnRoundSkipWaitAndDelayTime() { return SkipAISpawnWaitTimeAndDelayTime; }
protected:
	void Reset();

private:

	//The start round for AI spawn task
	int StartRound = 0;

	//The round for the current spawn event
	int CurrentRound = 0;

	//The next prediction round index for new AI spawn task
	int NextPredictionRoundIndex = 0;

	bool SkipAISpawnWaitTimeAndDelayTime = false;

	TArray<UTriggerTaskBase*> CurrentActiveTask;

	FDelegateHandle AIStateInspectorHandle;

#pragma region Liulianyou_Templely
public:
	int GetRegionIndex() {return RegionIndex;}
	void AddRegionIndex() { RegionIndex++; }
private:
	/*
	* The final region which the player have reached.
	* Notice: This is temporarily used for the final calculation for game over, and it should be reimplementation in the other way 
	*/ 
	int RegionIndex = 0;
#pragma endregion Liulianyou_Templely
};
