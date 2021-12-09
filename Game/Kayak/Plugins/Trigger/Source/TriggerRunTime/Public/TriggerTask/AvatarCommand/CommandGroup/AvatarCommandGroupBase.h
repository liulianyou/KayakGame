#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/7
* Purpose:	This is the base arrangement of all command which will be applied to the target aviators
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Engine/EngineTypes.h"

#include "AvatarCommandGroupBase.generated.h"

class UTT_AvatarCommand;
class UAvatarCommandDataBase;


/*
* Store all the commands that will be applied to the target avatar.
*/
UCLASS(Blueprintable, BlueprintType, Abstract, editinlinenew, DefaultToInstanced, Category = "TriggerRuntime|AvatarCommand")
class TRIGGERRUNTIME_API UAvatarCommandGroupBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:

#pragma region NetSupport
	virtual bool IsSupportedForNetworking() const { return true; }
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual bool ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags)	{ return false;}
#pragma endregion NetSupport

public:
	
	/*
	* Initialize this group data by the object owner
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "AvatarCommand")
	void OnInitialize(UObject* ObjectOwner);

	UFUNCTION(BlueprintCallable, Category = "AvatarCommand")
	virtual void Initialize( UObject* ObjectOwner );

	/*
	* Defined how to reset this data
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "AvatarCommand")
	void OnReset();

	UFUNCTION(BlueprintCallable, Category = "AvatarCommand")
	void Reset();

	UFUNCTION(BlueprintImplementableEvent, Category = "AvatarCommand")
	void OnPause();

	//Try to pause this command
	UFUNCTION(BlueprintCallable, Category = "AvatarCommand")
	virtual void Pause();

	UFUNCTION(BlueprintImplementableEvent, Category = "AvatarCommand")
	void OnResume();

	//Try to resume this command from the pause state
	UFUNCTION(BlueprintCallable, Category = "AvatarCommand")
	virtual void Resume();

	/*
	* Execute all command data in this group
	*
	* @param Targets which target the command will apply to
	* @param AvatarCommand which command will apply to target
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "AvatarCommand")
	void OnExecuteCommands(const TArray<UObject*>& Targets, UAvatarCommandDataBase* AvatarCommand = nullptr);

	/*
	* Execute all command data in this group
	* 
	* @param Targets which target the command will apply to
	* @param AvatarCommand which command will apply to target
	*/
	UFUNCTION(BlueprintCallable, Category = "AvatarCommand")
	virtual void ExecuteCommands( const TArray<UObject*>& Targets, UAvatarCommandDataBase* AvatarCommand = nullptr);

	/*
	* Stop all commands which are executing
	* @param Targets which target the command will apply to
	* @param AvatarCommand which command will apply to target
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "AvatarCommand")
	void OnStopCommands(const TArray<UObject*>& Targets, UAvatarCommandDataBase* AvatarCommand = nullptr);

	/*
	* Stop all commands which are executing
	* @param Targets which target the command will apply to
	* @param AvatarCommand which command will apply to target
	*/
	UFUNCTION(BlueprintCallable, Category = "AvatarCommand")
	virtual void StopCommands(const TArray<UObject*>& Targets, UAvatarCommandDataBase* AvatarCommand = nullptr);
	
	//Try to get the avatar command trigger task
	UFUNCTION(BlueprintCallable, Category = "AvatarCommand")
	UTT_AvatarCommand* GetAvatarCommandTask() const;

	//Get the Object type of the owner
	UFUNCTION(BlueprintCallable, Category = "AvatarCommand")
	UObject* GetOwner() const { return Owner; }

	/*
	* Get all command data which are stored in the group data
	*/
	UFUNCTION(BlueprintCallable, Category = "AvatarCommand")
	virtual void GetAllCommandDatas( TArray<UAvatarCommandDataBase*>& CommandDatas ) PURE_VIRTUAL(&UAvatarCommandGroupBase::GetAllCommandDatas, CommandDatas.Empty(););

	//Try to check weather all the command have finished
	UFUNCTION(BlueprintNativeEvent, Category = "AvatarCommand")
	bool IsAllCommandFinished();

private:
	//Callback when the state of the target command data is changed
	UFUNCTION()
	void CommandDataStateChangedCallBack(UAvatarCommandDataBase* CommandData);

public:

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCommandExecuteStateChange, UAvatarCommandDataBase*, ChangedCommand);
	//Invoked when  the state of execution have been changed
	UPROPERTY(BlueprintAssignable)
	FCommandExecuteStateChange StateChangeEvent;

private:

	UObject* Owner;

};