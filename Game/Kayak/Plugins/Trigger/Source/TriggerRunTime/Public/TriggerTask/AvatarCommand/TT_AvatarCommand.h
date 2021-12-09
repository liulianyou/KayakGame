#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/7
* Purpose:	This class used to make some commands for the target avatar so that they can do some special actions
*/


#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerTaskBase.h"

#include "TT_AvatarCommand.generated.h"

class UAvatarAccessRuleBase;
class UAvatarCommandDataBase;
class UAvatarCommandGroupBase;

/*
* This task will apply some commands to the target avatars.
* 
* The target avatar comes from the AvatarAccessRule.
* How, when, and what commands will be applied is defined at GroupCommands
*/
UCLASS(Blueprintable, BlueprintType, Category = "TriggerRuntime|Task")
class TRIGGERRUNTIME_API UTT_AvatarCommand : public UTriggerTaskBase
{
	GENERATED_UCLASS_BODY()

	TriggerTaskCommonFrameWorkDeclaration()

public:
	
	//Override TriggerTaskBase
	virtual bool ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags) override;
	//Override TriggerTaskBase

public:

	/*
	* Get Avatar access rule for this command
	*/
	UFUNCTION(BlueprintCallable)
	UAvatarAccessRuleBase* GetAvatorAccessRule() const { return AvatarAccessRule; }

	/*
	* Get the group commands 
	*/
	UFUNCTION(BlueprintCallable)
	UAvatarCommandGroupBase* GetGroupCommands() const { return GroupCommands; }

public:

	UFUNCTION()
	void OnCommandStateChangedEvent( UAvatarCommandDataBase* CommandData );

	UFUNCTION()
	void OnAvatarChangedEvent(const TArray<UObject*>& Avatars, bool bIsAdded);

private:
	
	/*
	* Define how to get the AI that this command will apply command data to
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Category="AICommand", meta=(AllowPrivateAccess = true))
	UAvatarAccessRuleBase* AvatarAccessRule = nullptr;

	/*
	* The group commands that will be applied to the target avatars from the AvaterAccessRule
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Category = "AICommand", meta = (AllowPrivateAccess = true))
	UAvatarCommandGroupBase* GroupCommands = nullptr;

private:
	
	//The avatars come from AvatarAccessRule
	TArray<UObject*> Avatars;

};

