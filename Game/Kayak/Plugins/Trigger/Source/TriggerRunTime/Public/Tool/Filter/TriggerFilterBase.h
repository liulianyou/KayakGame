#pragma once

/*
* Author:	Liulianyou
* Time:		2020/9/18
* Purpose:	The filters rules which will be used by the trigger module
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerFilterBase.generated.h"

/*
* Filter rule for the Trigger task UCheckActorOverlaped
*/
UCLASS(BlueprintType, Blueprintable, DefaultToInstanced, editinlinenew, abstract)
class TRIGGERRUNTIME_API UTriggerFilterBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	virtual void SetFilterData( void* Value ){ Data = Value; }
	void* GetFilterData() const { return Data; }

	template<class T>
	T* GetFilterData()
	{
		return reinterpret_cast<T>(GetFilterData());
	}

public:

	UFUNCTION(BlueprintCallable)
	UObject* GetUObjectData() const;

	//Check weather we will pass this filter
	UFUNCTION(BlueprintNativeEvent)
	bool BP_Pass() const;
	virtual bool NativePass() const;

	//Reset the local variables 
	UFUNCTION(BlueprintNativeEvent)
	void BP_Reset();
	virtual void NativeReset();

protected:
	
	void* Data = nullptr;
};