#pragma once

/*
* Author:	Liulianyou
* Time:		2021/8/18
* Purpose:	The base style to describe each attributes for trigger task.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerStyleBase.generated.h"

UCLASS(Blueprintable, BlueprintType, Abstract, DefaultToInstanced, editinlinenew)
class TRIGGERRUNTIME_API UTriggerStyleBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	/*
	* Initialize this repeat style
	*
	* @param OwnerObject The object who initialize this repeat style
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerTaskStyle")
	void OnInitializeStyle(UObject* OwnerObject);

	/*
	* Initialize this repeat style
	*
	* @param OwnerObject The object who initialize this repeat style
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerTaskStyle")
	virtual void InitializeStyle(UObject* OwnerObject);


	//This function used to do the actual execution for this style
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerTaskStyle")
	void OnExecute();

	//This function used to do the actual execution for this style
	UFUNCTION(BlueprintCallable, Category = "TriggerTaskStyle")
	virtual void Execute();

public:

	UFUNCTION(BlueprintPure)
	UObject* GetOwner() { return Owner; }

private:

	/*
	* The owner of this object. some times it is differ from the outer of this object
	*/
	UPROPERTY(BlueprintReadOnly, Transient, BlueprintGetter = "GetOwner", meta = (AllowPrivateAccess = "true"))
	UObject* Owner;
};
