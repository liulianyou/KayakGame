#pragma once

/*
* Author:	Liulianyou
* Time:		2021/8/17
* Purpose:	This data used to make Trigger effect data to know how the outer want to operate this data.
*			normally each effect data should correspond to several operations for different usage
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "EffectDataOperationStyle.generated.h"

UCLASS(Blueprintable, BlueprintType, Abstract, Category = "TriggerRuntime|EffectData")
class TRIGGERRUNTIME_API UTriggerEffectDataOperationStyleBase : public UObject
{
	GENERATED_UCLASS_BODY()
};

UCLASS(Blueprintable, BlueprintType, Abstract, Category = "TriggerRuntime|EffectData")
class TRIGGERRUNTIME_API UEffectDataStyleBase : public UTriggerEffectDataOperationStyleBase
{
	GENERATED_UCLASS_BODY()

public:

	//Add new causer
	UFUNCTION(BlueprintCallable)
	virtual void AddCauser(UObject* Causer);

	//Add new causers
	UFUNCTION(BlueprintCallable)
	virtual void AddCausers(TArray<UObject*> NewCausers);


	/*
	* Get the causers who want to operator the effect
	*/
	UFUNCTION(BlueprintCallable)
	const TArray<UObject*>& GetCausers() const { return Causers; }

private:

	/*
	* The targets who want to open the effect
	*/
	UPROPERTY(Transient)
	TArray<UObject*> Causers;

};


/*
* This class defines how to open this effect data.
*
* Wen you define new effect data you maybe also need to define new effect data open style
*/
UCLASS(Blueprintable, BlueprintType, Category = "TriggerRuntime|EffectData", meta = (DisplayName = "OpenStyle"))
class TRIGGERRUNTIME_API UEffectDataOpenStyleBase : public UEffectDataStyleBase
{
	GENERATED_UCLASS_BODY()

};


/*
* This class defines how to close this effect data
*
* Wen you define new effect data you maybe also need to define new effect data close style
*/
UCLASS(Blueprintable, BlueprintType, Category = "TriggerRuntime|EffectData", meta = (DisplayName = "OpenStyle"))
class TRIGGERRUNTIME_API UEffectDataCloseStyleBase : public UEffectDataStyleBase
{
	GENERATED_UCLASS_BODY()
};
