#pragma once

/*
* Author:	Liulianyou
* Time:		2020/8/25
* Purpose:	This file is used to support the net player.
*			As some times trigger or trigger task's owner is not the player so the RPC will only work on mutiply net mode.
*			But some functions should only work in the target player controller, so this file is just used to make sure the target function works
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Components/ActorComponent.h"
#include "InteractionDefinition.h"
#include "TriggerDefinition.h"
#include "TriggerNetPlayerSupportComponent.generated.h"

class AActor;
class UTT_Interaction;
class UTriggerTaskRunHelp;
class UTT_LevelSequence;
struct FFrameTime;

/**
 * All the functions that only need to use RPC(Server/Client) should put in class
 * When you use Trigger plugin you should make sure your any your player controller contain this Object.
 */
UCLASS(BlueprintType, Within = "Controller")
class TRIGGERRUNTIME_API UTriggerNetPlayerSupportComponent : public UActorComponent
{
	GENERATED_UCLASS_BODY()

public:
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
public:

#pragma region InteractionTask

	//Invoked when the player touch something and want to notify the server to run this interaction task
	UFUNCTION(Server, Reliable)
	virtual void Server_Interaction(UTT_Interaction* InteractionTask, AActor* TargetActor);

	//When the server have run the interaction task, the server will notify the client to run the Interaction task
	UFUNCTION(Client, Reliable)
	virtual void Client_RunInteractionTask(UTT_Interaction* InteractionTask, const FInteractionInfo& InteractionInfo );

	/*
	* Commit command for the interaction task
	* 
	* @param RemoveCount	the number that this command will remove the last contributions belong to  Contributor
	* @param CanEverTick	Flag to check weather this command will execute in the tick function of the Interaction rule
	* @param TickGradual	the gradual between the immediate two execution of this command
	* @param CanExecuteImmediately		Flag to check weather this command will execute immediately without waiting the next tick 
	* @param NeedToCheckGameplayAbility	Flag to check weather this command need to check the game play ability to do some external implementations
	*/
	UFUNCTION(BlueprintCallable, Server, Reliable)
	virtual void Server_CommitCancleInteraction(UTT_Interaction* InteractionTask, AActor* Contributor, int RemoveCount = 1, bool CanEverTick = false, float TickGradual = 0.0f, bool CanExecutedImmediately = true, bool NeedToCheckGameplayAbility = false);

	/*
	* Commit command for the interaction task
	*
	* @param CanEverTick	Flag to check weather this command will execute in the tick function of the Interaction rule
	* @param TickGradual	the gradual between the immediate two execution of this command
	* @param CanExecuteImmediately		Flag to check weather this command will execute immediately without waiting the next tick
	* @param NeedToCheckGameplayAbility	Flag to check weather this command need to check the game play ability to do some external implementations
	*/
	UFUNCTION(BlueprintCallable, Server, Reliable)
	virtual void Server_CommitAddInteraction(UTT_Interaction* InteractionTask, AActor* Contributor, bool CanEverTick = false, float TickGradual = 0.0f, bool CanExecutedImmediately = true, bool NeedToCheckGameplayAbility = true);

	/*
	* Commit command for the interaction task FOR CLIENT
	*
	* @param RemoveCount	the number that this command will remove the last contributions belong to  Contributor
	* @param CanEverTick	Flag to check weather this command will execute in the tick function of the Interaction rule
	* @param TickGradual	the gradual between the immediate two execution of this command
	* @param CanExecuteImmediately		Flag to check weather this command will execute immediately without waiting the next tick
	*/
	UFUNCTION(BlueprintCallable, Client, Reliable)
	virtual void Client_CommitCancleInteraction(UTT_Interaction* InteractionTask, AActor* Contributor, int RemoveCount = 1, bool CanEverTick = false, float TickGradual = 0.0f, bool CanExecutedImmediately = true, bool NeedToCheckGameplayAbility = false);

	/*
	* Commit command for the interaction task FOR CLIENT
	*
	* @param CanEverTick	Flag to check weather this command will execute in the tick function of the Interaction rule
	* @param TickGradual	the gradual between the immediate two execution of this command
	* @param CanExecuteImmediately		Flag to check weather this command will execute immediately without waiting the next tick
	*/
	UFUNCTION(BlueprintCallable, Client, Reliable)
	virtual void Client_CommitAddInteraction(UTT_Interaction* InteractionTask, AActor* Contributor, bool CanEverTick = false, float TickGradual = 0.0f, bool CanExecutedImmediately = true, bool NeedToCheckGameplayAbility = true);
public:

#pragma endregion InteractionTask

#pragma region RespawnTask

public:
	/*
	* When we change the character's transformation we should notify other player that we change 
	*/
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_ChangeTranfrom(bool InUsePosition, bool InUseRotation, bool InUseSize, FTransform Transform);

private:
	/*
	* The transformation which is get from the Server
	*/
	FVector Position;
	FRotator Rotation;
	FVector Scale;
	bool UsePostioion = false;
	bool UseRotation = false;
	bool UseScale = false;

protected:

	FTimerHandle TransformChangeTimeHandle;
	void HandleReapwnTransform();

public:


#pragma endregion RespawnTask

//Hold all effects such as UI, VFX, SFX, 3C and so on.
#pragma  region TriggerEffect
	
	/*
	* Invoke server to open effect
	* 
	* @param Task which task need to open effect
	* @param Causers who rise up this command
	*/
	UFUNCTION(Server, Reliable)
	void Server_OpenEffect(UTriggerTaskBase* Task, const TArray<UObject*>& Causers, int EffectDataIndex);

	/*
	* Invoke server to close effect
	*
	* @param Task which task need to open effect
	* @param Causers who rise up this command
	* @param EffectDataIndex the index of the data in the effect task should be closed, INDEX_NONE means all data should be closed
	* @param ShouldTryToFinishTask	false means even if all effect closed the trigger task will not finish
	*/
	UFUNCTION(Server, Reliable)
	void Server_CloseEffect(UTriggerTaskBase* Task, const TArray<UObject*>& Causers, int EffectDataIndex, bool ShouldTryToFinishTask);

#pragma  endregion TriggerEffect

#pragma  region TriggerTaskComponentBase

	/*
	* RPC function for the trigger to invoke the task which will run on the server 
	* As sometimes the target trigger which own this component have not been loaded then I need load them first and then invoke them.
	* I need to use the ID not the hard point to run the target component
	* 
	*/
	UFUNCTION(Server, Reliable)
	void Server_InvokeServerTask(const FTriggerTaskRuntimeInfo& RuntimeInfo);

#pragma endregion TriggerTaskComponentBase

#pragma  region GameOver

public:

	UFUNCTION(Server, Reliable)
	void Server_BPGameOver( const TArray<APlayerController*>& GameOverPlayers, const FString& URL );

#pragma endregion GameOver


#pragma  region LevelSequence

public:
    UFUNCTION(Server, Reliable)
    void Server_SyncSequenceProgress(UTT_LevelSequence* LevelSequence);
protected:
    UFUNCTION(Client, Reliable)
    void Client_SyncSequenceProgress(UTT_LevelSequence* LevelSequence, const FFrameTime& CurFFrameTime);

#pragma endregion LevelSequence
};