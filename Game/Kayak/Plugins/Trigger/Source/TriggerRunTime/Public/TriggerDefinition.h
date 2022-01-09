#pragma once

/*
* Author:	Liulianyou
* Time:		2020/7/27
* Purpose:	The common definition for Trigger, such as enumeration, macros and so on.
*/

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/ObjectMacros.h"
#include "AIController.h"
#include "TriggerDefinition.generated.h"

#define TRIGGER_UNUSED(X) 

class UUserWidget;
class UEvaluatorBase;
class UAICreatorBase;
class UTT_Interaction;
class UTriggerTaskBase;
class UTriggerEffectDataBase;
class UOperationInformationBase;
class UTriggerTaskComponentBase;
class UInteractionRuleDataBase;
class UTriggerNetPlayerSupport;

/*
* Used to log all information related to the Trigger
*/
DECLARE_LOG_CATEGORY_EXTERN(LogItem, Log, All);
DECLARE_STATS_GROUP(TEXT("Tickables"), STATGROUP_Trigger, STATCAT_Advanced);

/*
* Delegate used to inspect when the trigger map have been loaded
*/
DECLARE_DYNAMIC_DELEGATE_OneParam(FTriggerMapLoaded, FString, NewMapName);

/*
* This data is used  to describe the information of the runtime for the task
*/
USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FTriggerTaskRuntimeInfo
{

	GENERATED_BODY()

public:
	FTriggerTaskRuntimeInfo(){}
	FTriggerTaskRuntimeInfo( const UTriggerTaskComponentBase* SenderComponent, const UTriggerTaskBase* SenderTask, const UTriggerTaskComponentBase* TargetComponent, const UTriggerTaskBase* TargetTask, const UOperationInformationBase* ToggleInfo);

public:
	
	//The world who own all these task informations
	UPROPERTY()
	UWorld* World;

	//The path which contain the send component map, it begin with /Game
	UPROPERTY()
	FString SendMapAssetPath;

	//The map which the send component at
	UPROPERTY()
	FString SendComponentMap;

	//The ID of component which will notify the target component to run the specific task, it should never be invalid.
	UPROPERTY()
	FGuid SendComponentID;

	//The ID of task in the send component. It can be empty, and the send component will be ignored.
	UPROPERTY()
	FGuid SendTaskID;

	//The toggle information that to describe how to run the target component
	UPROPERTY()
	UOperationInformationBase* ToggleInformation = nullptr;

	//The path which contain the target component map, it begin with /Game
	UPROPERTY()
	FString TargetMapAssetPath;

	//The map which the target component at
	UPROPERTY()
	FString TargetComponentMap;

	//The ID of component which will run, this should never be invalid.
	UPROPERTY()
	FGuid TargetComponentID;

	//The index of task in the send component. It can be empty, and all the tasks in target component will start to run.
	UPROPERTY()
	FGuid TargetTaskID;
};

/*
* The information to describe the target component
*/
USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FTriggerTaskComponentInformation
{
	GENERATED_BODY()

public:

	//The unique ID of target components
	UPROPERTY(VisibleAnywhere)
	TArray<FGuid> ComponentIDs;

	/*
	* The map which the target component belong to
	* if this value is empty means this component should belong to the president trigger level
	*/
	UPROPERTY(VisibleAnywhere)
	FString MapName;

public:
	bool IsValid() const;

	void Invaidate();

public:
	static FString AnyMap;
};


UENUM(BlueprintType)
enum class ERespawnType : uint8
{
	//Will spawn completely new pawn
	ERespawnType_SpawnNewPawn		UMETA(DispalyName = "NewPawn"),
	//Will spawn new pawn but this pawn will duplicate the old pawn
	ERespawnType_SpawnCopyPawn		UMETA(DispalyName = "CopyPawn"),
	//Will use old pawn
	ERespawnType_UseOldPawn			UMETA(DispalyName = "OldPawn"),
};


//Enumeration for this task run type
UENUM(BlueprintType)
enum class ERunType : uint8
{
	//Just used to skip compile error in UBT
	ERunType_PlaceHold		= 0			UMETA(Hidden),
	//This task only run on the server
	ERunType_RunOnServer = 1<<0	UMETA(DisplayName = "Only Run On Server"),
	//This task only run on the client
	ERunType_RunOnClient = 1<<2	UMETA(DisplayName = "Only Run On Client"),
	//This task will run on both the server and the client, If this task is invoked on the client then it should be be run on the server and then replicated to client
	ERunType_MutiCast    = 1<<3	UMETA(DisplayName = "Run on both Server and Client"),

	ERunType_MAX				UMETA(Hidden)
};


/*
* The format in the tag which is used for category in trigger should be follow the rule:
* Root.Difficulty.MapName.Scenario1.Scenario2.....
*/
UENUM(BlueprintType)
enum class ECategoryFormat : uint8
{
	Root		UMETA(DisplayName = "Root"),
	Difficulty	UMETA(DisplayName = "Difficulty"),
	MapName		UMETA(DisplayName = "MapName"),
	Scenario	UMETA(DisplayName = "Scenario"),
};

/*
* The information when game over the player delegate need to broadcast
*/
USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FGameOverInfo
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite)
	FString	 URL;

	UPROPERTY(BlueprintReadOnly)
	TArray<UEvaluatorBase*> GameOverCondtions;

	/*Get the players for all conditions*/
	void GetALLGameOverPlayers(TArray<APlayerController*>& Players);
};

/*
* All delegates which is used by other modules, mostly these delegate should be registed in the outer modules
*/
struct TRIGGERRUNTIME_API FTriggerDelegate
{
	//Save Point information which will be used by the UGaiaTT_SavePoint task
	DECLARE_MULTICAST_DELEGATE(FTriggerSavePoint);
	static FTriggerSavePoint OnSavePoint;

	/*
	* When the trigger toggle the reset task this delegate will be invoked
	* 
	* @param Character which object actually toggle this task, It maybe a character or it maybe a actor
	*/
	DECLARE_MULTICAST_DELEGATE_OneParam(FTriggerReset, UObject*);
	static FTriggerReset OnReset;

	/*
	* When the player have interact the trigger, the trigger task will do something
	*/
	DECLARE_MULTICAST_DELEGATE(FInteraction);
	static FInteraction InteractionEvet;

	/*
	* All the AI created in this trigger will broadcast this event for other module to inspector the AI create event
	*/
	DECLARE_MULTICAST_DELEGATE_TwoParams(FNewAICreated, UAICreatorBase* /*AICreator*/, AActor* /*NewAIPawn*/);
	static FNewAICreated AICreateEvent;

	/*
	* Respawn event which will be broadcast when the new character is respawned by the respawn task
	* 
	* The first APawn is the the old character which is dead.
	* The second APawn is the new character created by the respawn task
	* 
	* Notice: This function is used in the server if the Trigger task is only run server
	*/
	DECLARE_MULTICAST_DELEGATE_ThreeParams(FRespawnFinishEvent, AActor*, AActor*, ERespawnType);
	static FRespawnFinishEvent RespawnFinishEvent;

	/*
	* when in the respawn post process need to change the character's transform we need notify all client the change its value
	*/
	DECLARE_MULTICAST_DELEGATE_TwoParams(FRespawnCharacterTransformChange, APawn*, FTransform&);
	static FRespawnCharacterTransformChange RespawnCharacterTransformChange;

	DECLARE_MULTICAST_DELEGATE_TwoParams(FInteractionValueChanged, AActor* /*Causer*/, UInteractionRuleDataBase*);
	static FInteractionValueChanged InteractionValueChanged;

	//This is the global end interaction native delegate
	DECLARE_MULTICAST_DELEGATE_ThreeParams(FInteractionEndNativeDelegate, UTT_Interaction*, const TArray<UObject*>& /*Causers*/, EInteractionEndType);
	static FInteractionEndNativeDelegate InteractionEndNativeDelegate;

	DECLARE_MULTICAST_DELEGATE_TwoParams(FGameOverNativeDelegate, UTriggerTaskBase*, FGameOverInfo /*URL*/);
	static FGameOverNativeDelegate GameOverNativeDelegate;

	//This delegate will be broadcast when the state in the trigger task have been changed
	DECLARE_MULTICAST_DELEGATE_OneParam(FTriggerTaskStateNativeEvent, UTriggerTaskBase* /*InstanecTask*/ );
	static FTriggerTaskStateNativeEvent TriggerTaskStateNativeEvent;

	/*
	* Invoked when the toggled pawn have activate new check point
	* 
	* @param CheckPointTask		the new task which is been activated to inspector the outer pawnes.
	* @param ToggledPawn		the pawn who toggle this check point and make this check point to inspector new pawns
	* @param OutPawns			The total pawns the check point task will inspect 
	*/
	DECLARE_MULTICAST_DELEGATE_ThreeParams(FNewCheckPointActivatedNativeEvent, UTriggerTaskBase* /*CheckPointTask*/, APawn* /*ToggledPawn*/, const TArray<APawn*>& /*OutPawns*/);
	static FNewCheckPointActivatedNativeEvent NewCheckPointActivatedNativeEvent;

	/*
	* Invoked when one evaluator try to evaluate itself to check weather it have been passed
	* 
	* @param Evaluator			The target evaluator which is evaluating
	* @param EvaluatorResult	the result for current resulting
	*/
	DECLARE_MULTICAST_DELEGATE_TwoParams(FEvaluatorNativeEvent, UEvaluatorBase* /*Evaluator*/, bool /*EvaluatorResult*/);
	static FEvaluatorNativeEvent EvaluatorNativeEvent;
};

/*
* The following delegate is the trigger needed to toggle some actions,
* These delegate should be broadcast in the outer code, and resisted in the trigger
*/
struct TRIGGERRUNTIME_API FTriggerNeededDelegate
{
	/*
	* When the player want to aboard this game, and run to other map, the player should call this delegate to make sure the GameOverTask can work 
	* If the causer is null means all players in this game should exist
	*/
	DECLARE_MULTICAST_DELEGATE_TwoParams(FreExistCurrentMapNativeEvent, AActor* /*Causer*/, FString /*URL*/);
	static FreExistCurrentMapNativeEvent ExitCurrentMapNativeEvent;

	//When the current player disconnect from the DS it should call this delegate to make sure the GameOverTask can work effectually
	DECLARE_MULTICAST_DELEGATE_OneParam(FDisconnectNativeEvent, AActor* /*Causer*/);
	static FDisconnectNativeEvent DisconnectNativeEvent;

	//When the player is field if some conditions meets
	DECLARE_MULTICAST_DELEGATE_OneParam(FGameFailedEvent, TArray<AActor*>& /*Causeres*/);
	static FGameFailedEvent GameFailedEvent;
};


class IDeadSupportInterface;
class AActor;

UINTERFACE(MinimalAPI, BlueprintType, Category = "TriggerRuntime|Task")
class UDeadSupportInterface : public UInterface
{
	GENERATED_BODY()
};

/*
* If you want to use this task you should make your character inherited from this class
*/
class TRIGGERRUNTIME_API IDeadSupportInterface
{
	GENERATED_BODY()

public:

	/*
	* This delegate should be broadcast when the pawn is dead
	* Sometimes when the character try to go into dead state he may do some other things or something should be done before he is really dead
	* Such as maybe he can live for one minute to wait for others to rescuer him
	*/
	DECLARE_MULTICAST_DELEGATE_OneParam(FPreCharacterDead, AActor*);
	FPreCharacterDead OnCharacterPreEnterDead;

	/*
	* This delegate should be broadcast when this player is dead at game play logic. 
	* And at this moment the actor have not been treated actually dead and have not trigger dead effect.
	* Such as if one player is dead but there is one button for player to confirm he is dead
	*/
	DECLARE_MULTICAST_DELEGATE_OneParam(FCharacterStartToDead, AActor*);
	FCharacterStartToDead OnCharacterEnterDead;

	/*
	* The delegate should be broad casted when the target actor is dead and confirmed by others.
	* Such as one player is dead and there is one button for the player to confirm dead state.
	*/
	DECLARE_MULTICAST_DELEGATE_OneParam(FCharacterDead, AActor*);
	FCharacterDead OnCharacterConfirmDead;

	//The task which respawn it
	UTriggerTaskBase* RepawnTask;
};

/*
* When the New AI spawned in the trigger, this struct describe what the AI will do as the designer request
*/
USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FAISpawnBehaviorCommand
{
	GENERATED_BODY()
	
public:
	FAISpawnBehaviorCommand();
	~FAISpawnBehaviorCommand();
public:

	//UPROPERTY(BlueprintReadWrite, EditAnywhere)
	//AAIPreviewCharacter* TargetPoint;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bSetAllPlayerToAIThreat = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FVector TargetPosition;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class UAnimMontage*> SpawnMontages;
};

UINTERFACE(MinimalAPI, BlueprintType, Category = "TriggerRuntime|Task")
class UAISpawnSupportInterface : public UInterface
{
	GENERATED_BODY()
};

/*
* Support for the AI spawn task so that it can inspect when the AI dead in game
*/
class TRIGGERRUNTIME_API IAISpawnSupportInterface
{
	GENERATED_BODY()

public:

	//This function is used for the BP to do some spawn commands,Only used when the controller is derived from this interface in the BP asset not in native class
	UFUNCTION(BlueprintImplementableEvent)
	void BP_SetAISpawnCommand(FAISpawnBehaviorCommand& Command);

	//when the AI spawned in the world we send it the first command that it should execute
	virtual void SetAISpawnCommand(FAISpawnBehaviorCommand& Command) { Execute_BP_SetAISpawnCommand(_getUObject(), Command); }

	/*
	* Give the pawn a chance to do local post process initialization
	* Notice: Maybe in the feature I will add parameter to it as one command to AI
	*/
	UFUNCTION(BlueprintImplementableEvent)
	void BP_FinishedSpawned();
	virtual void FinishedSpawned() { Execute_BP_FinishedSpawned(_getUObject()); }

public:
	DECLARE_MULTICAST_DELEGATE_OneParam(FCharacterDead, AActor*);
	FCharacterDead OnAICharacterDead;

	FDelegateHandle AICharacterDeadHandle;
};

UINTERFACE(MinimalAPI, BlueprintType, Category = "TriggerRuntime|Task")
class UAISpawnInitSupportInterface : public UInterface
{
	GENERATED_BODY()
};

class TRIGGERRUNTIME_API IAISpawnInitSupportInterface
{
	GENERATED_BODY()

public:

	virtual void InitCharacterAttributes(int32 InUniqueId, int32 InAttrId = 0) {};

};

//The commit type when the player try to leave the interaction actor.
UENUM(BlueprintType)
enum class EInteractionEndType : uint8
{
	EInteractionEndType_PlaceHold		UMETA(Hidden),
	//The player manally to cancle current Interaction action
	EInteractionEndType_Cancle			= 1 << 0	UMETA(DisplayName = "Cancle"),
	//The player cancle current interaction passively such as dead
	EInteractionEndType_Interrupt		= 1 << 1	UMETA(DisplayName = "Interrupt"),
	//Current interaction is successfully
	EInteractionEndType_Success			= 1 << 2	UMETA(DisplayName = "Success"),

	EInteractionEndType_Max			UMETA(Hidden)
};

UINTERFACE(MinimalAPI, BlueprintType, Category = "TriggerRuntime|Task")
class UInteractionSupportInterface : public UInterface
{
	GENERATED_BODY()
};

/*
* Support for the AI spawn task so that it can inspect when the player try to interact one trigger
* 
* This interface maybe will be replaced with UEffectSuportInterface in the feature
*/
class TRIGGERRUNTIME_API IInteractionSupportInterface
{
	GENERATED_BODY()

public:
	
	/*
	* When Interaction task toggled, it will try to initialize the UI which will be used in the task.
	*/
	UFUNCTION(BlueprintImplementableEvent)
	void OnInitializeByInteractionTask(UTriggerTaskBase* InteractionTask);
	virtual void InitializeByInteractionTask(UTriggerTaskBase* InteractionTask) { Execute_OnInitializeByInteractionTask(_getUObject(),InteractionTask); }

	/*
	* When the player start to interact, It should notify the supported target the data have changed 
	*/
	UFUNCTION(BlueprintImplementableEvent)
	void OnInteractionUpdate(UInteractionRuleDataBase* Data);
	virtual void InteractionUpdate(UInteractionRuleDataBase* Data) { Execute_OnInteractionUpdate(_getUObject(), Data); }

	/*
	* As sometimes one player may toggle more than one interaction task,
	* And one of its effect is executive which means the target effect will only exist one instance for each interaction task
	* this means one effect may refer to multiply interaction task.
	* So I need to determine which is the current valid task that this effect can process or inspector to 
	*/
	UFUNCTION(BlueprintImplementableEvent)
	UTriggerTaskBase* OnGetCurrentVaildInteractionTask(UTriggerTaskBase* CurrentInvokeTask);
	UTriggerTaskBase* GetCurrentVaildInteractionTask(UTriggerTaskBase* CurrentInvokeTask){ return Execute_OnGetCurrentVaildInteractionTask(_getUObject(), CurrentInvokeTask); }

	/*
	* The interaction task have ended by some reasons 
	* 
	* @return true means end interaction successfully, vise versa.
	*/
	UFUNCTION(BlueprintImplementableEvent)
	void OnEndInteraction( UTT_Interaction* InteractionTask, EInteractionEndType EndType, bool RemoveInstance);
	virtual void EndInteraction(UTT_Interaction* InteractionTask, EInteractionEndType EndType, bool RemoveInstance) { Execute_OnEndInteraction(_getUObject(), InteractionTask, EndType, RemoveInstance); }

public:
	UTriggerTaskBase* InstigatTriggerTask = nullptr;

};

/*
* Interface for any game ability which will be used by trigger task system
*/
UINTERFACE(MinimalAPI, BlueprintType, Category = "TriggerRuntime|Task")
class UGamePlayAbilitySupportInterface : public UInterface
{
	GENERATED_BODY()
};

class TRIGGERRUNTIME_API IGamePlayAbilitySupportInterface
{
	GENERATED_BODY()

public:

	//When new ability is gave to the target actor this ability will be initialized by this function
	UFUNCTION(BlueprintImplementableEvent, meta=(DisplayName="InitaizleFormTriggerTask"))
	void BP_OnInitaizleFormTriggerTask(UTriggerTaskBase* TriggerTaskOwner);
	virtual void InitaizleFormTriggerTask(UTriggerTaskBase* TriggerTaskOwner) { Execute_BP_OnInitaizleFormTriggerTask(_getUObject(), TriggerTaskOwner); }

	//Give the Ability one chance to end trigger task
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "TryToEndTriggerTask"))
	void BP_OnTryToEndTriggerTask(UTriggerTaskBase* TriggerTaskOwner);
	virtual void TryToEndTriggerTask(UTriggerTaskBase* TriggerTaskOwner) { Execute_BP_OnTryToEndTriggerTask(_getUObject(), TriggerTaskOwner); }

	/*
	* The trigger task want to end the target game play ability
	* When the ability is ended by the trigger task, it should not notify the trigger task to end task, or it will cause infinite loop.
	*/
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "TryToEndAbility"))
	void BP_OnTryToEndAbility(UTriggerTaskBase* TriggerTaskOwner);
	virtual void TryToEndAbility(UTriggerTaskBase* TriggerTaskOwner) { Execute_BP_OnTryToEndTriggerTask(_getUObject(), TriggerTaskOwner); }

};

/*
* When the other module want to get the trigger task information, one of the objects in the other module should inherited form this interface
*/
UINTERFACE(MinimalAPI, BlueprintType, Category = "TriggerRuntime|Task")
class UEffectSuportInterface : public UInterface
{
	GENERATED_BODY()
};

class TRIGGERRUNTIME_API IEffectSuportInterface
{
	GENERATED_BODY()

public:

	//This will be called by the trigger system to tell the target object which task it should inspect
	UFUNCTION(BlueprintImplementableEvent)
	void BP_OnInitaizleFormTriggerTask(UTriggerEffectDataBase* EffectData);
	virtual void InitaizleFormTriggerTask(UTriggerEffectDataBase* EffectData) { Execute_BP_OnInitaizleFormTriggerTask(_getUObject(), EffectData); }

	//Tell the target object there is some value is changed 
	UFUNCTION(BlueprintImplementableEvent)
	void BP_TriggerTaskDataChanged(const UTriggerEffectDataBase* EffectData, const FName& ChangedDataName);
	virtual void TriggerTaskDataChanged(const UTriggerEffectDataBase* EffectData, const FName& ChangedDataName) { Execute_BP_TriggerTaskDataChanged(_getUObject(), EffectData, ChangedDataName); }

	/*
	* Tell the target object the trigger task will be closed
	* 
	* @param The trigger system tell the target object how it want to end the target object
	*/
	UFUNCTION(BlueprintImplementableEvent)
	void BP_EndEffect(UTriggerEffectDataBase* EffectData, UTriggerEffectDataOperationStyleBase* EndStyle);
	virtual void EndEffect(UTriggerEffectDataBase* EffectData, UTriggerEffectDataOperationStyleBase* EndStyle) { Execute_BP_EndEffect(_getUObject(), EffectData, EndStyle); }

};