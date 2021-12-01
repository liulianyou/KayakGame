#pragma once
/*
* Author:	Liulianyou
* Time:		2020/7/6
* Purpose:	This file hold and statics all the trigger in the world.
*/

#include "CoreMinimal.h"
#include "Engine/World.h"
#include "UObject/ObjectMacros.h"
#include "Templates/SubclassOf.h"

#include "Tickable.h"
#include "GameplayTags.h"
#include "Subsystems/EngineSubsystem.h"

#include "TriggerTaskManager.h"
#include "TriggerRuntimeContent.h"
#include "TriggerOctreeControllerBase.h"

#if WITH_EDITORONLY_DATA
#include "Editor/EditorEngine.h"
#endif

#include "TriggerManager.generated.h"

class ASceneTrigger;
class ANewTriggerBase;
class UTriggerNetPlayerSupport;
class UTriggerTaskComponentBase;
class UOperationInformationManager;
class UTriggerSaveGameManager;
class ATriggerEventSystemInfoBase;

UENUM(BlueprintType)
enum class EClearStrategy : uint8
{
	EClearStrategy_All			UMETA(DisplayName = "Clear All"),
	EClearStrategy_Scene		UMETA(DisplayName = "Clear Scene Trigger"),
	EClearStrategy_Item			UMETA(DisplayName = "Clear Item Trigger"),
	EClearStrategy_Mission		UMETA(DisplayName = "Clear Mission Trigger"),
	EClearStrategy_Heuristic	UMETA(DisplayName = "Clear Automaticaly"),
	EClearStrategy_Max			UMETA(Hidden)
};

/*
* Internal struct used to store all new trigger map loading information
*/
struct FLoadNewTriggerMapInfo
{
	//The target map need to be loaded. This should not be the short package name or long package name, just the file name
	FString MapName;

	//The user callback function which is defined by the outer so the the outer can have one access to inspect when the new map have been loaded
	TArray<const FTriggerMapLoaded*> UserCallbacks;

	//The delegate handle which is registed to the FWorldDelegates::LevelAddedToWorld
	FDelegateHandle DelegateHand;

	//The info for the latent action which is used to load/unload map
	FLatentActionInfo LatentActionInfo;
};


/*
* The manager class of all triggers include item trigger, mission trigger, and scene trigger
* 
* Liulianyou_ChangeInFeature: I don't want to make this Manager to derive from subsystem as sub system should be used to process 
* the third software such as steam.
*/
UCLASS()
class TRIGGERRUNTIME_API UTriggerManager : public UEngineSubsystem, public FTickableGameObject
{
	GENERATED_BODY()
public:
	UTriggerManager();

	virtual void Initialize(FSubsystemCollectionBase& Collection);

	virtual void BeginDestroy() override;

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TriggerManager")
	UTriggerTaskManager* GetTriggerTaskManager() const;

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TriggerManager")
	UTriggerSaveGameManager* GetTriggerSaveGameManager() const;

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TriggerManager")
	UOperationInformationManager* GetOperationInformationManager() const;

	/*
	* Get runtime content. and the outer should never change the content value.
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TriggerManager")
	UTriggerRuntimeContent* GetRuntimeContent() const;

	//Clear the triggers according to the strategy
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TriggerManager")
	void Clear(EClearStrategy Trategy = EClearStrategy::EClearStrategy_All) {};

	/*
	* Create new scene trigger which will have collision box for the player or other actors to interact 
	*/
	ANewTriggerBase* CreateNewSceneTrigger( UWorld* World, TSubclassOf<ASceneTrigger> Templete, const FTransform& Transform, FActorSpawnParameters& SpawnParamters);

	/*
	* Register the trigger which inherited from the ITriggerInterface, So that I can process all triggers in the scene
	*/
	void RegisterTrigger(TScriptInterface<ITriggerInterface> TriggerData);

	/*
	* Unregister the trigger inherited from the ITriggerInterface
	*/
	void UnRegisterTrigger(TScriptInterface<ITriggerInterface> TriggerData);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TriggerManager")
	UTriggerOctreeControllerBase* GetTriggerController() { return TriggerOctreeController; };

	//Get the task components by the component infos.
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TriggerManager", meta=(WorldContext="WorldContent"))
	void GetTriggerTaskComponentsByComponentInfo(TArray<UTriggerTaskComponentBase*>& OutComponents, const TArray<FTriggerTaskComponentInformation>& ComponentInfos, UObject* WorldContent);

	/*
	* Try to load new trigger map according to the component information. 
	* If the target map have been loaded then invoke the callback directly
	* 
	* @param ComponetInfo	the information of component which will be used to get the loading map.
	* @param TriggerMapLoadedCallback The callback event when the new trigger map have been loaded
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TriggerManager", meta = (WorldContext = "WorldContextObject"))
	void TryToLoadNewTriggerMap(const FString& MapAssetPath, const FTriggerTaskComponentInformation& ComponetInfo, const FTriggerMapLoaded& Delegate, const UObject* WorldContextObject );

	/*
	* Set the TriggerEventSystemInfo to this manager
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TriggerManager")
	void SetTriggerEventSystemInfo( ATriggerEventSystemInfoBase* Info, ATriggerEventSystemInfoBase* OldValue = nullptr );

	/*
	* Create new trigger event system information
	* 
	* @param GameMode which game mode try to create the new trigger event system info
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TriggerManager")
	ATriggerEventSystemInfoBase* CreateNewTriggerEventSystemInfo(AGameModeBase* Gamemode);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TriggerManager")
	const TArray<ATriggerEventSystemInfoBase*>& GetTriggerEventSystemInfo() const { return EventSystemInfos; }
	

protected:

	UFUNCTION()
	void OnGameModeInitialize(AGameModeBase* Gamemode);

	UFUNCTION()
	void NewMapLoadedCallback(ULevel* Level, UWorld* World);

	UFUNCTION()
	void LoadLevelStream( int LinkId );

public:
	virtual void Tick(float DeltaTime);
	virtual TStatId GetStatId() const;

#if WITH_EDITORONLY_DATA
public:
	
	void OnObjectReplaced(const TMap<UObject*, UObject*>& OldToNewMap);

#endif

public:
	FName TriggerTaskManagerName = TEXT("TriggerTaskManager");

	//The controller class to manipulate the internal trigger data
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime|TriggerManager")
	TSubclassOf<UTriggerOctreeControllerBase> TriggerOctreeControllerClass;

	//The runtime content class that current game will use
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime|TriggerManager")
	TSubclassOf<UTriggerRuntimeContent> RuntimeContentClass;

protected:

	/*
	* Check weather the target trigger data is valid
	* 
	* #return false means the target trigger data is invalid, true means valid
	*/
	bool IsVaildTriggerData(const TScriptInterface<ITriggerInterface>& TriggerData);

	FString GetMapName(const FString& RootPath, const FString& NewMapName, UWorld* InWorld = nullptr );

private:

	UPROPERTY(Transient)
	UTriggerTaskManager* TrigerTaskManager = nullptr;

	UPROPERTY(Transient)
	UTriggerSaveGameManager* TriggerSaveGameManager = nullptr;

	//The internal struct data to  hold all Actors which contain the TriggerTask
	UPROPERTY(Transient)
	UTriggerOctreeControllerBase* TriggerOctreeController = nullptr;

	//The runtime content for current trigger system
	UPROPERTY(Transient)
	UTriggerRuntimeContent* RuntimeContent = nullptr;

	//Instance to hold the manager of operations which is occured at trigger event system
	UPROPERTY(Transient)
	UOperationInformationManager* OperationManager = nullptr;
	
	/*
	* The public information of the trigger system which will need to be replicated
	* 
	* As this manager maybe the only one instance in the application and there maybe have several world at the runtime such as DS/Client at editor mode.
	* The different world should have its only infos which used to replicated, I need to store them all
	*/
	UPROPERTY(Transient)
	TArray<ATriggerEventSystemInfoBase*> EventSystemInfos;

private:

	TArray<FLoadNewTriggerMapInfo> LoadTriggerMapInfos;
};

