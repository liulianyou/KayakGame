#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/7
* Purpose:	This is the base data which will applied to the target avatars.
*/


#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Engine/EngineTypes.h"

#include "AvatarCommandDataBase.generated.h"

class UAvatarCommandGroupBase;

/*
* The state for executing stage for the command
*/
UENUM(BlueprintType)
enum class ECommandExecuteState : uint8
{
	//This command is stopped by the outer
	Stopped		UMETA(DisplayName = "Stopped"),
	//Start to execute this command
	Start		UMETA(DisplayName = "Start to execute"),
	//Executing this command
	Executing	UMETA(DisplayName = "Executing the command"),
	//This command is pausing
	Pause		UMETA(DisplayName = "Paused"),
	//This command has finished
	Finished	UMETA(DisplayName = "Finshed"),
	//Just used to calculate the length of execute state
	Max			UMETA(Hidden)
};

UCLASS(Blueprintable, BlueprintType, editinlinenew, DefaultToInstanced, Within="AvatarCommandGroupBase", Category = "AvatarCommandData")
class TRIGGERRUNTIME_API UAvatarCommandDataBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:

#pragma region NetSupport
	virtual bool IsSupportedForNetworking() const { return true; }
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
#pragma endregion NetSupport

public:

	//Set the execute state of current command
	UFUNCTION(BlueprintCallable)
	void SetNewExecuteState(ECommandExecuteState NewCurrentState);

	//Get current execute state of command
	UFUNCTION(BlueprintCallable)
	ECommandExecuteState GetCurrentExecuteState() const { return CurrentState; }

	//Get current execute state of command
	UFUNCTION(BlueprintCallable)
	ECommandExecuteState GetLastExecuteState() const { return LastState; }

	UFUNCTION(BlueprintImplementableEvent)
	void OnInitialize(UObject* ObejctOwner);

	UFUNCTION(BlueprintCallable)
	virtual void Initialize( UObject* ObejctOwner );

	UFUNCTION(BlueprintImplementableEvent)
	void OnPause();

	//Try to pause this command
	UFUNCTION(BlueprintCallable)
	virtual void Pause();

	UFUNCTION(BlueprintImplementableEvent)
	void OnStop(const TArray<UObject*>& Targets);

	//Stop this command
	UFUNCTION(BlueprintCallable)
	virtual void Stop(const TArray<UObject*>& Targets);

	UFUNCTION(BlueprintImplementableEvent)
	void OnReset();

	//Stop this command
	UFUNCTION(BlueprintCallable)
	virtual void Reset();

	UFUNCTION(BlueprintImplementableEvent)
	void OnExecute(const TArray<UObject*>& Targets);

	//Stop this command
	UFUNCTION(BlueprintCallable)
	virtual void Execute(const TArray<UObject*>& Targets);

	UFUNCTION(BlueprintImplementableEvent)
	void OnResume();

	//Try to resume this command from the pause state
	UFUNCTION(BlueprintCallable)
	virtual void Resume();

	//Try to get  the avatar command group
	UFUNCTION(BlueprintCallable)
	UAvatarCommandGroupBase* TryToGetAvatarCommandGroup() const;

	/*
	* Get the base instance type of owner
	*/
	UFUNCTION(BlueprintCallable)
	UObject* GetOwner() const { return Owner; };

	/*
	* check weather this command can be executed
	*/
	UFUNCTION(BlueprintNativeEvent)
	bool CanExecute() const;

protected:

	UFUNCTION(BlueprintImplementableEvent)
	void OnFinish();

	/*
	* Mark this command have finished,
	* This function should only be invoked internal
	*/
	UFUNCTION(BlueprintCallable)
	virtual void Finish();

public:

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCommandExecuteStateChange, UAvatarCommandDataBase*, ChangedCommand);
	//Invoked when  the state of execution have been changed
	UPROPERTY(BlueprintAssignable)
	FCommandExecuteStateChange StateChangeEvent;

private:
	
	//The state of executing
	ECommandExecuteState CurrentState = ECommandExecuteState::Max;
	//The last state of executing
	ECommandExecuteState LastState = ECommandExecuteState::Max;
	
	//The owner of this command
	UObject* Owner;
};