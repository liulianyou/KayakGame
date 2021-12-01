#pragma once

/*
* Author:	Liulianyou
* Time:		2020/8/25
* Purpose:	This file will hold all functions that need to be used in BP global scope
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "Engine/EngineBaseTypes.h"
#include "TriggerDefinition.h"
#include "SaveGame/SaveGameStrategy/SaveGameStrategyBase.h"
#include "GameplayTags.h"
#include "TriggerStatics/TriggerStaticsBase.h"

#include "TriggerBlueprintLib.generated.h"

class UTriggerNetPlayerSupportComponent;
class UOperationInformationManager;
class UTriggerSaveGameManager;
class UTriggerEventRewardManager;
class UTriggerRuntimeContent;
class UDeadSystemManager;
class UTS_AIStatics;

UCLASS()
class TRIGGERRUNTIME_API UTriggerBlueprintLib : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:
	/*
	* Get the Trigger net player support interface form the target actor
	*/
	UFUNCTION(BlueprintCallable)
	static UTriggerNetPlayerSupportComponent* GetTriggerNetPlayerSupportFromActor(AActor* Actor);

	/*
	* Make the cancel contributor for the interaction task
	* 
	* @param Contributor			The Actor that who own this contribution
	* @param RemoveCount			The count that this contribution will cancel the last contributions, -1 means will remove all contributors the player make before 
	* @param CanEverTick			Flag to check weather this contribution can be tick in the tick function
	* @param TickGradual			The gradual for this contribution to tick
	* @param CanExecutedImmediately	Flag to check weather this contribution will execute immediately when it added to interaction rule
	*/
	UFUNCTION(BlueprintCallable, meta = ( AdvancedDisplay = 2))
	static UContributeRuleBase* MakeCancleContributor(AActor* Contributor, int RemoveCount, bool CanEverTick = false, float TickGradual = 0, bool CanExecutedImmediately = true, bool NeedToCheckGameplayAbility = false);

	UFUNCTION(BlueprintCallable, meta = (AdvancedDisplay = 1))
	static UContributeRuleBase* MakeAddContributor(AActor* Contributor, bool CanEverTick = false, float TickGradual = 0, bool CanExecutedImmediately = true, bool NeedToCheckGameplayAbility = true);

	/*
	* Get trigger task by the index in the target component
	* 
	* @param Component	The component which we will search for
	* @param TaskIndex	The index of the task in the component
	* @param OnlySearchInConfigured	true means this index is for tasks which is configured by the designers
	*/
	UFUNCTION(BlueprintCallable)
	static UTriggerTaskBase* GetTriggerTaskByIndex(UTriggerTaskComponentBase* Component, int TaskIndex, bool OnlySearchInConfigured = true);

	/*
	* Get trigger task by the index in the target component
	*
	* @param Component	The component which we will search for
	* @param TaskIndex	The index of the specific task with the class of TriggerTaskClass
	*/
	UFUNCTION(BlueprintCallable)
	static  UTriggerTaskBase* GetTriggerTaskByClass(UTriggerTaskComponentBase* Component, TSubclassOf<UTriggerTaskBase> TriggerTaskClass, int TaskIndex = 0, bool OnlySearchInConfigured = true);

	//Interface to access to the dead system 
	UFUNCTION(BlueprintCallable, Category = "DeadSystem")
	static UDeadSystemManager* GetDeadSystemInstance();

	/*
	* Get the AIStatics for the AIs in the world
	* @param  StaticsClass	The class for the AI Statics, If this value is none I will find AIStatics from the TriggerConfig
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	static UTS_AIStatics* GetAIStatics( TSubclassOf<UTriggerStaticsBase> StaticsClass );

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	static UTriggerTaskManager* GetTriggerTaskManager();

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	static UTriggerManager* GetTriggerManager();

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	static UTriggerSaveGameManager* GetTriggerSaveGameManager();

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	static UTriggerRuntimeContent* GetTriggerRunTimeContent();

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	static UOperationInformationManager* GetOperationInfoManager();

	/*
	* Get the reward manager which will hold all rewards which is created by the trigger event system
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	static UTriggerEventRewardManager* GetTriggerEventRewardManager();

	/*
	* Notify the game over
	*
	* @param Players who's mission is failed
	* @param GameOverReasn the reason why make this game over for these players 
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	static void GameOver(TArray<APlayerController*> Players, FString URL = TEXT(""), FString GameOverReason = TEXT(""));

	/*
	* Add region index for all players.
	* Notice: This is just a temporary way to store the region index.
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	static void AddRegionIndex();


	/*
	* Convert the path which just use copy reference form the content in editor to valid path that we can use
	* LoadClass to load the content form the browser content.
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	static FString ConvertPathReferencValueToVaild(FString ReferencePath, bool Add_CSuffix = false);

	/*
	* Get the target name in the target trigger category tag.
	* The format in the tag which is used for category in trigger should be follow the rule:
	* TriggerCategory.Difficulty.MapName.Scenario1.Scenario2.....
	* 
	* #return empty means the target tag is invalid or do not contain the target node
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	static FString GetTriggerCategoryNodeName(const FGameplayTag& Tag, ECategoryFormat Phares);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	static bool IsValidTriggerCategory( const FGameplayTagContainer& TriggerCategory );

	/*
	* Used to check weather this trigger component is the first node at the trigger chain.
	* This function will query all task components and trigger task,  so it may use a lot of CPU resource
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	static bool IsFirstTriggerNode(TScriptInterface<ITriggerInterface> Trigger);

	/*
	* Get the target map asset path
	* 
	* @param MapAssetPath if this value is specified then when the PersistentLevel is null I will use this value as the base value
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	static FString GetSubTriggerLevelAssetPath( const ULevel* PersistenLevel, const FString& SubLevelName, const FString& MapAssetPath = TEXT(""));

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	static FString GetSubTriggerLevelDirectoryPath(const ULevel* PersistenLevel, const FString& MapAssetPath = TEXT(""));

	/*
	* Convert the UE Net mode to the trigger task run type
	* 
	* @param MapAssetPath if this value is specified then when the PersistentLevel is null I will use this value as the base value
	*/
	static ERunType ConvertNetModeToRunType( ENetMode NetMode );


	/*
	* We can invoke this function in the BP and set break point in it to view the call stack for the native code.
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	static void DebugBreak( const FString& PrintString = TEXT(""));

};
