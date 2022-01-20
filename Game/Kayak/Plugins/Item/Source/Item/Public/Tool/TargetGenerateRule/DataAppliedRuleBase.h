#pragma once

/*
* Author:	Liulianyou
* Time:		2022/1/20
* Purpose:	Used to define how to generate the target which will be used to apply the runtime data
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "DataAppliedRuleBase.generated.h"

class UItemRuntimeData;

UCLASS(Blueprintable, BlueprintType, Abstract, hidedropdown, Category = "Item|TargetGenerate")
class ITEM_API UDataAppliedRuleBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	/*
	* Define how to generate targets.
	* This function should be implement at child class
	*/
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Item")
	void GetTargets(TArray<UObject*>& Targets) const;

	/*
	* Defined how to applied data to target runtime data
	*/
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Item")
	void ApplyData(); 

	UFUNCTION(BlueprintCallable, Category = "Item")
	UItemRuntimeData* GetItemRuntimeData() const {return RuntimeData;}

	UFUNCTION(BlueprintCallable, Category = "Item")
	void SetItemRuntimeData(UItemRuntimeData* NewRuntimeData) { RuntimeData = NewRuntimeData; }

private:

	UPROPERTY()
	UItemRuntimeData* RuntimeData = nullptr;

};