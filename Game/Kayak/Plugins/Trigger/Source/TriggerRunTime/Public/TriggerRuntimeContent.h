#pragma once

/*
* Author:	Liulianyou
* Time:		2021/6/2
* Purpose:	This file declare all the information that current runtime content for trigger system
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerDefinition.h"
#include "GameplayTags.h"

#include "TriggerRuntimeContent.generated.h"

/*
* The handle of scenario
*/
USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FTriggerScenarioHandle
{
	GENERATED_BODY()

public:

	FTriggerScenarioHandle();
	FTriggerScenarioHandle(const FTriggerScenarioHandle& OtherHandle);

	FORCEINLINE int GetHandle() const { return Handle; }

	void GenerateNewHandle();

	bool operator==(const FTriggerScenarioHandle& OtherHandle) const;
	void operator=(const FTriggerScenarioHandle& OtherHandle);

	FORCEINLINE bool IsVaild() const {return Handle != INDEX_NONE;}

public:
	static FTriggerScenarioHandle InvalidHandle;

private:
	int Handle;
};

USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FScenarioParticipatorInfo
{
	GENERATED_BODY()

public:

	//The unique name of the participator, Name should be stable along different scenario or different games 
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	FString UniqueName;

	//The unique ID of the participator, ID should be stable along different scenario or different games 
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	FString UniqueID;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	TArray<UClass*> PawnClass;


};

/*
* The status of scenario
*/
UENUM(BlueprintType)
enum class EScenarioRunState : uint8
{
	//This scenario is opened and is running
	EScenarioRunState_Open		UMETA(DisplayName = "Open"),
	//This scenario do not work, but it can rework again
	EScenarioRunState_Suspend	UMETA(DisplayName = "Suspend"),
	//This scenario is closed and never work again
	EScenarioRunState_Closed	UMETA(DisplayName = "Closed"),
};

/*
* The information of current content of trigger system
*/
USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FTriggerScenarioInfo
{
	GENERATED_BODY()

public:

	FORCEINLINE const FTriggerScenarioHandle& GetHandle() const { return Handle; }

	FORCEINLINE FTriggerScenarioHandle& GetHandle() { return Handle; }

	FORCEINLINE bool IsValid() const { return Handle.IsVaild(); }

public:

	//The name of current scenario
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	FGameplayTag ScenarioTag;

	//Who takes part in this scenario
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	TArray<FScenarioParticipatorInfo> ParticipatorInfos;

	//The state of this scenario
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	EScenarioRunState State;

	//The parent scenario information which the current one go through
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	FTriggerScenarioHandle ParentScenarioInfoHandle;

public:
	static FTriggerScenarioInfo InvalidInfo;

private:
	FTriggerScenarioHandle Handle;
};


/*
* The current runtime content for trigger system.
* You can only access it from UTriggerManager::GetRuntimeContent, As the instanc of this class shoule only be one
*/
UCLASS(Blueprintable, BlueprintType, Category = "RuntimeContent")
class TRIGGERRUNTIME_API UTriggerRuntimeContent : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime|RuntimeContent")
	void OnInitializeRuntimeContent();

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|RuntimeContent")
	virtual void InitializeRuntimeContent();

	//Get all opened scenario infos which contain the target player
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|RuntimeContent")
	void GetOpenedScenarioInfosByPlayerController(APlayerController* Player, TArray<FTriggerScenarioHandle>& OutInfos);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|RuntimeContent")
	FTriggerScenarioInfo& GetScenerioInfo(const FTriggerScenarioHandle& Handle ) const;

	/*
	* Get all scenario infos which state is closed
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|RuntimeContent")
	void GetAllActiveScenarios( TArray<FTriggerScenarioHandle>& ActiveScenerioHandle ) const ;

	//Get all scenarios infos which the state is open
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|RuntimeContent")
	void GetAllOpenedScenarios(TArray<FTriggerScenarioHandle>& ActiveScenerioHandle) const;
	
	/*
	* Add new scenario to this difficulty.
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|RuntimeContent")
	FTriggerScenarioHandle AddSceneario( const FGameplayTag& ScenarioTag, TArray<APlayerController*>& Players);

	/*
	* Used to check weather we can use the target component info.
	* When one component only can be run when scenario2 which parent scenario is scenario1, and the current active scenario is scenarioB which parent scenario is scenarioA, this component info should not be activated.
	* also when current difficulty is easy, and the target component should be run on the hard mode, these components should not be activated
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|RuntimeContent")
	bool CanUseComponentInfo( const FTriggerTaskComponentInformation& ComponentInfo );

	/*
	* Set current category for trigger system by one string value
	* 
	* @param Category 
	*/
	UFUNCTION(BlueprintCallable)
	void SetTriggerCategoryByString(const FString& Category);

	//Set current category for trigger system
	UFUNCTION(BlueprintCallable)
	void SetTriggerCategory(const FGameplayTagContainer& Difficulty );

	UFUNCTION(BlueprintCallable)
	const FGameplayTagContainer& GetTriggerCategory() const;

public:

	//The scenarios which is current activating
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	TArray<FTriggerScenarioInfo> ScenerioInfos;

private:
	//The difficulty of current game 
	FGameplayTagContainer TriggerCategory;

};
