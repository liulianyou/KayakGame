#pragma once

/*
* Author:	Liulianyou
* Time:		2021/8/31
* Purpose:	This class used to define how to access the avatar
*			When trying to inspect the attributes of the avatar in the condition I need to get the avatar first.
*			As the Avatar may not only be the player, such as I can use the condition to check the attributes in the NPC which is protected by the player the current task.
*			So the access to avatar can be different for different designs.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "AvatarAccessRuleBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAvatarsChangedEvent, const TArray<UObject*>&, Avatars, bool, bIsAdded);

UCLASS(BlueprintType, Blueprintable, Abstract, editinlinenew, DefaultToInstanced)
class TRIGGERRUNTIME_API UAvatarAccessRuleBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	
	//Initialize this rule
	UFUNCTION(BlueprintImplementableEvent)
	void OnInitialize(UObject* Owner);
	virtual void Initialize( UObject* Owner );

	//Uninitialize this rule, mostly this should be invoked when you want to release it
	UFUNCTION(BlueprintImplementableEvent)
	void OnDeInitialize();
	void DeInitialize();

	/*
	* Reset this access rule
	*/
	UFUNCTION(BlueprintNativeEvent)
	void Reset();

	/*
	* Defines how to get the valid avatars which will be used by the CheckAvatarAttribute conditions 
	*/
	UFUNCTION(BlueprintNativeEvent)
	void GetTargetAvatars(TArray<UObject*>& Avatars) const;

	UFUNCTION(BlueprintCallable)
	UObject* GetOwner();

protected:

	/*
	* When new avatar is added then notify the owner that new avatar is added
	*/
	UFUNCTION(BlueprintCallable)
	void NotifyOwnerNewAvatarAdded(UObject* NewAvatar);

	/*
	* When new avatar is added then notify the owner that new avatar is added
	*/
	UFUNCTION(BlueprintCallable)
	void NotifyOwnerNewAvatarRemoved(UObject* OldAvatar);

public:
	
	/*
	* Invoked when the avatar access rule find new avatars
	*/
	UPROPERTY(BlueprintAssignable)
	FAvatarsChangedEvent AvatarsChangedEvent;

private:

	UObject* OwnerObject;

};
