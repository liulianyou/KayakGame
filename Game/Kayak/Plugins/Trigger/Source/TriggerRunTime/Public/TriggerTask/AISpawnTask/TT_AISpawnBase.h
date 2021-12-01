#pragma  once

/*
* Author:	Liulianyou
* Time:		2020/9/24
* Purpose:	The base class for all AI spawn task
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerTaskBase.h"

#include "TT_AISpawnBase.generated.h"

class AAIController;
class UAISpawnDataBase;
class UAIFinisheConditionBase;
class UAICreatorByControllerClass;

USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FSpawnCashInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "TriggerRuntime")
	int CurrentRound;

	//The max round for this task
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "TriggerRuntime")
	int MaxRound;

	//The total killed AI after this task active
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "TriggerRuntime")
	int TotalKilledAI;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "TriggerRuntime")
	int AIRemainedToSpawnInCurrentRound;

	//The dead AI for current round
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "TriggerRuntime")
	int KilledAIInCurrentRound;

	//The AI spawned by this task is still alive.
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "TriggerRuntime")
	TArray<AAIController*> CurrentAliveAIController;

};

UCLASS(Abstract)
class TRIGGERRUNTIME_API UTT_AISpawnBase : public UTriggerTaskBase
{
	GENERATED_UCLASS_BODY()

	TriggerTaskCommonFrameWorkDeclaration();

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

public:

	virtual void UnRegister() override;
	virtual void Register() override;

public:
	
	UFUNCTION(BlueprintCallable)
	UAISpawnDataBase* GetSpawnData() const {return AISpawnData;}

	UFUNCTION()
	void StartToCreateNewAI( float DeltaTime );


	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	const FSpawnCashInfo& GetSpawnCashedData() const{ return SpawnCashedInfo; }

	//Reset all local values
	virtual void ResetLocalValues();
	//Reset all effect which this task created, such as kill all spawned AI
	virtual void ResetContentEffect();

	virtual void AddAIDeadDelegate( AAIController* Controller );

protected:
	
	UFUNCTION()
	void OnActorDestoryCallback(AActor* DestroyedActor);

#if WITH_EDITORONLY_DATA
public:

	virtual void SelectedInEditor(UObject* SelectedActor) override;

public:
	//Callback function when the map have been loaded
	void OnEndLoadMap(uint32 Flag);
	void OnEndLoadMapInGame(UWorld* LoadedWorld);
	void OnLevelChangedInWorld(ULevel* Level, UWorld* World);

	

private:
	//Clear the useless information in world
	void ClearWorldInformation(ULevel* Level = nullptr, UWorld* World = nullptr);

#endif

public:
	
	//UPROPERTY(BlueprintReadWrite, EditAnywhere, export, Category = "TriggerRuntime")
	UAIFinisheConditionBase* AIFinishedCondition;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Category = "TriggerRuntime")
	UAISpawnDataBase* AISpawnData;

protected:
	


private:
	
	//The current cashed info for this AI spawn task
	FSpawnCashInfo SpawnCashedInfo;

	int Debug_SpawnedAICount = 0;

};



