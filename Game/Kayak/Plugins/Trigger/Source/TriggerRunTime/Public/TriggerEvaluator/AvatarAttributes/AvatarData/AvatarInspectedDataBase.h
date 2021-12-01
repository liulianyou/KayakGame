#pragma once

/*
* Author:	Liulianyou
* Time:		2021/8/31
* Purpose:	This is the base data which will be used by the check avatar attributes condition to  
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "AvatarInspectedDataBase.generated.h"

class UCheckAvatarAttribute;

/*
* The data which is used in the evaluator: UCheckAvatarAttribute.
* 
* When something is changed in the data, we should invoke the NotifyEvalutorContentChanged immediately.
* 
* IsDataExceedExpectation is define how this data meet our exception
*/
UCLASS(BlueprintType, Blueprintable, Abstract, editinlinenew, Within="CheckAvatarAttribute", DefaultToInstanced, Within = "CheckAvatarAttribute")
class TRIGGERRUNTIME_API UAvatarInspectedDataBase :public UObject
{
	GENERATED_UCLASS_BODY()

public:

	/*
	* Initialize this data
	*/
	UFUNCTION(BlueprintImplementableEvent)
	void OnInitialize(UCheckAvatarAttribute* Owner);
	virtual void Initialize(UCheckAvatarAttribute* Owner);

	virtual void BeginDestroy();

public:

	/*
	* check weather the inspected data has exceed the expectations
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "AvatarInspectedData")
	bool IsDataExceedExpectation();

	/*
	* Reset this data
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "AvatarInspectedData")
	void OnReset();
	UFUNCTION(BlueprintCallable, Category = "AvatarInspectedData")
	virtual void Reset();

	UFUNCTION(BlueprintCallable, Category = "AvatarInspectedData")
	UCheckAvatarAttribute* GetConditionOwner() const;

	/*
	* Get All avatars that this data should be applay to 
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "AvatarInspectedData")
	void OnGetAllAvatars(TArray<UObject*>& Avators) const;
	UFUNCTION(BlueprintCallable, Category = "AvatarInspectedData")
	virtual void GetAllAvatars( TArray<UObject*>& Avators ) const;

	/*
	* When the content in the data have changed It should notify the owner.
	*/
	UFUNCTION(BlueprintCallable)
	void NotifyEvalutorContentChanged();

	/*
	* Register event to inspect the tag changed in the target avatars
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "AvatarInspectedData")
	void OnRegisterEvents(const TArray<UObject*>& Avatars);
	UFUNCTION(BlueprintCallable, Category = "AvatarInspectedData")
	virtual void RegisterEvents(const TArray<UObject*>& Avatars);

	/*
	* UnRegister event to inspect the tag changed in the target avatars
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "AvatarInspectedData")
	void OnUnRegisterEvents(const TArray<UObject*>& Avatars);
	UFUNCTION(BlueprintCallable, Category = "AvatarInspectedData")
	virtual void UnRegisterEvents(const TArray<UObject*>& Avatars);

protected:
	
	/*
	* When the avatars form avatar access changed
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "AvatarInspectedData")
	void BP_OnUnRegisterEvents(const TArray<UObject*>& Avatars);

	UFUNCTION()
	virtual	void OnAvatarChanged(const TArray<UObject*>& Avatars, bool IsAdded);

private:
	
	UCheckAvatarAttribute* ConditionOwner = nullptr;

};

