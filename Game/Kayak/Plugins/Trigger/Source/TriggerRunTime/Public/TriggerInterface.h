// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/ScriptInterface.h"
#include "TriggerInterface.generated.h"

class UTriggerTaskComponentBase;

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UTriggerInterface : public UInterface
{
    GENERATED_BODY()
};

/**
 * 
 */
class TRIGGERRUNTIME_API ITriggerInterface
{
	GENERATED_BODY()

public:

	/*
	* Try to copy the this trigger to target level
	* 
	* @param TargetLevel If it is null then the I will copy new trigger the the level current trigger at
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime")
	TScriptInterface<ITriggerInterface> OnDuplicateTrigger(ULevel* TargetLeve) ;
	virtual TScriptInterface<ITriggerInterface> DuplicateTrigger(ULevel* TargetLevel = nullptr);

	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime")
	void OnGetTriggerTaskComponents(UPARAM(ref)TArray<UTriggerTaskComponentBase*>& TaskComponents) const;
	virtual void GetTriggerTaskComponents(TArray<UTriggerTaskComponentBase*>& TaskComponents) const;

	/*
	* Remove the trigger task component with the specific component ID
	* 
	* #return true means removed success, visa verse
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime")
	bool OnRemoveTriggerTaskComponentByID(const FGuid& ComponentID, bool IncludeChildrenComponent = false);
	virtual bool RemoveTriggerTaskComponent( const FGuid& ComponentID, bool IncludeChildrenComponent = false);

	/*
	* Add the new trigger task component to the trigger
	* 
	* #return false means added success.
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime")
	UTriggerTaskComponentBase* OnAddTriggerTaskComponent( UTriggerTaskComponentBase* NewComponent);
	virtual UTriggerTaskComponentBase* AddTriggerTaskComponent( UTriggerTaskComponentBase* NewComponent);

	/*
	* Get the bounds for target trigger
	*
	* @param Origin				The origin of the this box
	* @param HalfBoxExtent		The half value for each axis of the box
	*
	* #return	false means this function should not work, the Origin and HalfBoxExtend should be dropped
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime")
	bool OnGetBoxBounds(UPARAM(ref) FVector& Origin, UPARAM(ref) FVector& HalfBoxExtent) const;
	//#return false means this box bounds is not valid
	virtual bool GetBoxBounds(FVector& Origin, FVector& HalfBoxExtent) const;

	//Get the unique ID for the trigger runtime
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime")
	bool OnGetUniqueRuntimeID(int& OutID) const;
	//#return false means this ID is invalid
	virtual bool GetUniqueRuntimeID(int& OutId) const;

	/*
	* @param Toggled this is the return value, you should change it in this function
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime")
	void OnCanBeToggled( bool& Toggled) const;
	//Check weather we can toggled this trigger
	virtual bool CanBeToggled() const;


	/*
	* Convert the path which just use copy reference form the content in editor to valid path that we can use
	* LoadClass to load the content form the browser content.
	*/
	FString ConvertPathReferencValueToVaild( FString ReferencePath, bool Add_CSuffix = false ) const;
};
