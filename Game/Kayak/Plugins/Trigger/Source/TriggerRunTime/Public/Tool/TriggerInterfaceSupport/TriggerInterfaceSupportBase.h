#pragma once

/*
* Author:	Liulianyou
* Time:		2021/9/15
* Purpose:	This is used to hold the common implementation for Trigger Interface.
*			All the derived classes from this class should only be used as supported class.
*			You can implement the interface by yourself in your class without this support, as this class is only make you change/add implementation more easily
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerInterfaceSupportBase.generated.h"



UCLASS(Blueprintable, BlueprintType, Abstract, DefaultToInstanced, editinlinenew, Category = "TriggerInterfaceSupport")
class TRIGGERRUNTIME_API UTriggerInterfaceSupportBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	
	//Initialize this support by the target object owner
	UFUNCTION(BlueprintCallable)
	virtual void Initialize( UObject* ObjectOwner );

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	UObject* GetOwnerObject() const {return Owner;}

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	virtual void GetTriggerTaskComponents(TArray<UTriggerTaskComponentBase*>& TaskComponents) const PURE_VIRTUAL(&UTriggerInterfaceSupportBase::GetTriggerTaskComponents,);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	virtual bool RemoveTriggerTaskComponent(const FGuid& ComponentID, bool IncludeChildrenComponent = false) PURE_VIRTUAL(&UTriggerInterfaceSupportBase::RemoveTriggerTaskComponent, return false; );

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	virtual UTriggerTaskComponentBase* AddTriggerTaskComponent(UTriggerTaskComponentBase* NewComponent) PURE_VIRTUAL(&UTriggerInterfaceSupportBase::AddTriggerTaskComponent, return nullptr; );
	virtual bool GetBoxBounds(FVector& Origin, FVector& HalfBoxExtent) const PURE_VIRTUAL(&UTriggerInterfaceSupportBase::GetBoxBounds, return false; );

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	virtual bool GetUniqueRuntimeID(int& OutId) const;

	//Check weather this trigger can be toggled
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	virtual bool CanbeToggled() const PURE_VIRTUAL(&UTriggerInterfaceSupportBase::GetUniqueRuntimeID, return false; );

private:
	
	//The owner of this support 
	UPROPERTY(Transient)
	UObject* Owner;

};