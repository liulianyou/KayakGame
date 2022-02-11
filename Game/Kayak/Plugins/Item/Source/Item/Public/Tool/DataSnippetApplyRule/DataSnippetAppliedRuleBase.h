#pragma once

/*
* Author:	Liulianyou
* Time:		2022/1/20
* Purpose:	Used to define how to generate the target which will be used to apply the runtime data
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "DataSnippetAppliedRuleBase.generated.h"

class UItemDataSnippetBase;

/*
* This rule data will only exist in the runtime data on the server.
*/
UCLASS(Blueprintable, BlueprintType, Abstract, hidedropdown, Within="ItemRuntimeDataBase", Category = "Item|TargetGenerate")
class ITEM_API UDataSnippetAppliedRuleBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	/*
	* Initialize this rule data
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "DataApplyRule", meta = (DisplayName = "Initialize"))
	void OnInitialize();
	UFUNCTION(BlueprintCallable)
	virtual void Initialize(UItemDataSnippetBase* DataSnippet);

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

	/*
	* Get the runtime data which use this rule to apply its data
	*/
	UFUNCTION(BlueprintCallable, Category = "Item")
	UItemDataSnippetBase* GetItemDataSnippet() const {return DataSnippetOwner;}

private:

	UPROPERTY()
	UItemDataSnippetBase* DataSnippetOwner = nullptr;

};