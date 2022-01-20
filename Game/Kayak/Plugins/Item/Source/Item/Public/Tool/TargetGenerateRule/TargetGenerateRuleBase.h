#pragma once

/*
* Author:	Liulianyou
* Time:		2022/1/20
* Purpose:	Used to define how to generate the target which will be used to apply the runtime data
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TargetGenerateRuleBase.generated.h"

class UItemRuntimeData;

UCLASS(Blueprintable, BlueprintType, Abstract, hidedropdown, Category = "Item|TargetGenerate")
class ITEM_API UTargetGenerateRuleBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	/*
	* Define how to generate targets.
	* This function should be implement at child calss
	*/
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Item")
	void GetTargets(TArray<UObject*>& Targets, const UItemRuntimeData* RuntimeData ) const;

};