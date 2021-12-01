#pragma once

/*
* Author:		Liulianyou
* Time:			2021/4/16
* Purpose:		This file will used to manager all save game features in this trigger
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Templates/SubclassOf.h"

#include "SaveGame/TriggerSaveGameDefinition.h"
#include "SaveGame/SaveGameStrategy/SaveGameStrategyBase.h"
#include "SaveGame/SaveGameHeadInfo/TriggerSaveGameHeadInfoBase.h"

#include "TriggerSaveGameManager.generated.h"

class FTriggerSaveGameToolBase;
class USaveGameConfigBase;

/*
* Delegate which is used to preprocess the save data.
* 
* #return the final save strategy class which can process target data
*/
//DECLARE_DELEGATE_RetVal_OneParam(TSubclassOf<USaveGameStrategyBase>, FOnSaveStrategyPreProcessDelegate, const TArray<uint8>& /* Data */)


UCLASS(BlueprintType, Blueprintable, Category = "TriggerRuntime|TriggerManager")
class TRIGGERRUNTIME_API UTriggerSaveGameManager : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	virtual void Initialize();

	/*
	* Get the global save game strategy instance
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|SaveGame")
	USaveGameStrategyBase* GetSaveGameStrategyInstance(TSubclassOf<USaveGameStrategyBase> Class);

	/*
	* Save some informations of current game
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|SaveGame")
	void SaveGame( USaveGameConfigBase* SaveGameConfig);

	/*
	* Load save data and parse it to restore the game
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|SaveGame")
	void LoadGame(USaveGameConfigBase* SaveGameConfig);

	/*
	* Register the target object to trigger save game system. so that the trigger save game tool can save these objects.
	*
	* @param Object		The target object which will be saved
	* @param Class		The strategy class which will be used to save the target object, if it is null means I will search all strategy class to register target object
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|SaveGame")
	void RegisterSaveGameObject(UObject* Object, TSubclassOf<USaveGameStrategyBase> Class = nullptr);

	/*
	* Unregister the target object to trigger save game system.
	*
	* @param Object		The target object which will be removed for target strategy
	* @param Class		The strategy class which inspect the object, if it is null means I will search all strategy class to unregister target object
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|SaveGame")
	void UnRegisterSaveGameObject(UObject* Object, TSubclassOf<USaveGameStrategyBase> Class = nullptr);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|SaveGame")
	void GetAllSaveGameStrategyClasses(TArray<TSubclassOf<USaveGameStrategyBase>>& OutClasses);

	static void RegisterSaveGameStrategy(TSubclassOf<USaveGameStrategyBase> Class);
	static void UnRegisterSaveGameStrategy(TSubclassOf<USaveGameStrategyBase> Class);

	/*
	* Construct config data which is used for LocalFile save game tool
	* 
	* @param IsLoading		flag to check weather this config data is used for loading, true means for loading, false means for saving
	* @param Class the		strategy class which will used to process the potential data
	* @param UserIndex		the index of current save data should be saved
	* @param SlotName		the name of current save data file at disk
	* @param SystemHeadInfo	the head information that the target strategy will process. if this value is null then I will use the global config value 
	* #return Config data with class USaveGameLocalFileData
	*/
	UFUNCTION(BlueprintCallable, meta=( AdvancedDisplay="4" ), Category = "TriggerRuntime|SaveGame")
	USaveGameConfigBase* ConstructLocalFileConfigData(bool IsLoading, int UserIndex, FString SlotName, USaveGameSystemInfoBase* SystemHeadInfo = nullptr, TSubclassOf<USaveGameStrategyBase> Class = nullptr);

protected:

	//Get current workable tool for save game feature
	void GetCurrentWorkableSaveGameTools(TArray<FTriggerSaveGameToolBase*>& Tools);

public:

	/*
	* The current information of save game system.
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Category = "TriggerRuntime|SaveGame")
	USaveGameSystemInfoBase* SaveSystemInfo;

public:

	/*
	* The delegate for save strategy to preprocess the  save data.
	* Each save strategy should register one preprocess function to this delegate.
	* When one strategy can process this data then it will return this class, and the target strategy will process this full data.
	*/
	//TArray<FOnSaveStrategyPreProcessDelegate> SaveStrategyPreProcessDelegates;

private:
	/*
	* The total strategy classes which is defined by the user to process save game data
	*/
	static TArray<TSubclassOf<USaveGameStrategyBase>> StrategyClasses;

};


