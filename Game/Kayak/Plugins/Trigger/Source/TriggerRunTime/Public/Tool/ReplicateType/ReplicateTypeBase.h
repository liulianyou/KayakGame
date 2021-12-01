#pragma once
/*
* Author:	Liulianyou
* Time:		2021/2/19
* Purpose:	The base class to define the type for component to replicate sub object(Object Owner)
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "ReplicateTypeBase.generated.h"

UCLASS(BlueprintType, Blueprintable, abstract, DefaultToInstanced, editinlinenew, Category = "TriggerRunttime")
class TRIGGERRUNTIME_API UReplicateTypeBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime")
	bool CanReplicate();

	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRunttime")
	void BP_InitilalizeByTriggerTask(UObject* Task);

	void InitializeByTriggerTask(UObject* Task);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	UObject* GetObjectOwner() { return ObjectOwner;}

private:
	UObject* ObjectOwner = nullptr;

};
