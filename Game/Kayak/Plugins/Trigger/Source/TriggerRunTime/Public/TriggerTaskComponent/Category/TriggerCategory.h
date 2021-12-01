#pragma once

/*
* Author:	Liulianyou
* Time:		2021/6/2
* Purpose:	This is used to hold all the information of the category of the task component.'
*			Each task component should belong to some categories, and each category may have different things for them to do extra things.
*			Such as some category may need the target owner component to be exported to new map when they are cooked.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "GameplayTagContainer.h"
#include "GameplayTagsManager.h"
#include "TriggerDefinition.h"

#include "TriggerCategory.generated.h"

UCLASS(Blueprintable, BlueprintType, Abstract, editinlinenew, DefaultToInstanced, Category = "TriggerRuntime|Category")
class TRIGGERRUNTIME_API UTriggerCategoryBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime|Category")
	void OnInitializeCategory(UObject* InOwner);

	//Initialize this category after it is created
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Category")
	virtual void InitializeCategory( UObject* Owner );

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Category")
	UObject* GetOwner() { return Owner; }

	/*
	* Check weather this category is matched for current trigger runtime content;
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime|Category")
	bool IsMathcedForCurrrentRuntimeContent() const;

	/*
	* Check weather this category is the child of the parent category
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime|Category")
	bool IsChildCategoryOfTriggerCategory(UTriggerCategoryBase* ParentCategory) const;

	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime|Category")
	bool IsChildCategoryOfGameplayTagContainer( const FGameplayTagContainer& ParentTagContainer) const;

	/*
	* Get the map name which the owner of this category should be exported.
	* If the MapNames is not specified then just use the default difficulty tag as the the exported map name
	*
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime|Category")
	void GetExportedMapName(TArray<FString>& OutMapNames) const;

	/*
	* Get the actual map names which correspond to the parent category.
	* By default if other category contain category: (TriggerCategory.Easy.TestMap, TriggerCategory.Hard.TestMap), and the this category contain category:(TriggerCategory.Totrial, A.Easy, A.Hard.FormalMap)
	* the out map name is just {Easy}
	* 
	* @param OtherCategory The category used to define the final map name
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime|Category")
	void GetExportedMapNameByParentCategory(TArray<FString>& OutMapNames, UTriggerCategoryBase* ParentCategory) const;

	/*
	* This function will remove all tags which is not match for the owned level.
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Category")
	virtual void UpdateCategoryToCurrentMap();

	/*
	* Get the final map name for the target trigger category tag
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Category")
	virtual FString GetMapName( const FGameplayTag& CategoryTag ) const;

	/*
	* Check weather this category have difficulty tags
	* 
	* @param Player the player who want to check category
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Category")
	bool HaveValidDifficultyNode( APlayerController* Player );

	//Check weather this category have scenario tags
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Category")
	bool HaveValidScenarioNode( APlayerController* Player );

	/*
	* Check weather this category is valid.
	* the categories should not be empty.
	* and the format should be {TriggerCategory.Difficulty.MapName.Scenario}
	* This function will not check the runtime difficulty and scenario. it only check the format
	* 
	* @param CompleteCheck Weather to check this category completely which will regard of the cashed data
	* 
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Category")
	bool IsValidCategory( bool CompleteCheck = false );

	bool IsValidCategory() const;

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Category")
	void MarkCategoryDirty() { HaveCheckedValid = false; }

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Category")
	void MarkDifficultyDirty();

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Category")
	void MarkScenerioDirty();

protected:

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Category|Editor")
	virtual void GenerateMapNameFromCategroyTag(TArray<FString>& OutMapNames) const;

protected:

	/*
	* Internal function to get the actual game play tag for the target phases
	*/
	static FGameplayTag GetCategroyNodeGamePlayTagInternal(const TSharedPtr<FGameplayTagNode>& CurrentNode, ECategoryFormat Phases, int& Depth);

public:

	static bool GetTriggerCategoryNodeName( FString& OutNodeName, const FGameplayTag& Tag, ECategoryFormat Phares);

	static bool IsValidCategory( const FGameplayTagContainer& TagContainer );

	/*
	* Try to check weather the checked child category is the child of the parent category
	*/
	static bool IsChildCategoryTag(const FGameplayTagContainer& CheckedChildCategory, const FGameplayTagContainer& CheckedParentCategory);


	/*
	* Get the tag from the trigger tag
	*/
	static FGameplayTag GetGameplayTag(const FGameplayTag& TriggerTag, ECategoryFormat Phases);

	/*
	* Get the game play tag which this category contain.
	*
	* This function should not be marked as BlueprintNativeEvent, but he UHT will rise up compile error if it is marked as BlueprintCallable
	*/
	static FGameplayTagContainer GetGameplayTagContainer(ECategoryFormat Phases, const FGameplayTagContainer& TargetTagContainer = FGameplayTagContainer::EmptyContainer);

protected:

	static bool CheckCategoryDataInternal(TSharedPtr<FGameplayTagNode> CurrentNode, int& Depth);

private:

	static bool CheckRootTag( FGameplayTag& Tag );
	static bool CheckDifficultyTag( FGameplayTag& Tag );
	static bool CheckMapNameTag(FGameplayTag& Tag);
	static bool CheckSecnario(FGameplayTag& Tag);

public:

	/*
	* The categories which should be confined before runtime
	* This categories should have fixed format:
	* The first node should always be TriggerCategory, this should never miss. and it can be confined in the UTriggerConfig::RootTag
	* The second node should be the Difficulty, this is optional, if there is no difficulty tag means it is used for all difficulty
	* The third node should be the MapName, this is optional, and if it is specified, it should be same as the name of president level
	* The fourth node should be the Scenario, this is optional, if it is empty then it will be used for all difficulty
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Category")
	FGameplayTagContainer Categories;

private:
	
	UObject* Owner;

	//Flag to check weather this instance have been initialized, if it has been initialized then skip initialize again.
	bool IsInitialized = false;

	//As the function IsValidCategory will take a lot resource, I need to cashed the data
	uint8 HaveCheckedValid : 1;

	//Cashed the data for the last check
	uint8 IsCategroiesValid : 1;

	//The difficulty may be changed at runtime, and the IsValidCategory will not check current actual difficulty, so the difficulty need extra cashed.
	uint8 HaveCheckDifficultyValid : 1;

	//Flag to check weather this category have valid Difficulty node, true means this category have the node to current difficulty
	uint8 IsDifficultyNodeValid : 1;

	//The scenario can be changed frequently and the IsValidCategory is just check the format of category, so the Scenario need to be extra cashed.
	uint8 HaveCheckScenrioValid : 1;

	//Flag to check weather this category have valid scenario node
	uint8 IsSenarioNodeNodeValid : 1;

	//Flag to check weather this category have valid map node correspond to current map
	uint8 IsMapNameNodeValid : 1;

	//Flag to check weather all the game play tags have the root node
	uint8 IsRootNodeValid : 1;

	static bool HasCheckRootNodeValid;

	static bool HasCheckMapNameValid;
};

/*
* The category which is used for task component to distinguish 
*/
UCLASS(Blueprintable, BlueprintType, editinlinenew, DefaultToInstanced, Category = "TriggerRuntime|Category")
class TRIGGERRUNTIME_API UTaskComponentCategory : public UTriggerCategoryBase
{
	GENERATED_UCLASS_BODY()


public:
	
	//Override UTriggerCategoryBase
	virtual void GetExportedMapName_Implementation(TArray<FString>& OutMapNames) const override;
	virtual void GetExportedMapNameByParentCategory_Implementation(TArray<FString>& OutMapNames, UTriggerCategoryBase* OtherCategory) const override;
	virtual void UpdateCategoryToCurrentMap() override;
	//Override UTriggerCategoryBase

public:
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Editor")
	bool NeedExportToNewMap = false;

	/*
	* The specified map name of the owner to be exported.
	* If this value is empty then I will generated the default map name form the category
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=( EditCondition="NeedExportToNewMap"), Category = "Editor")
	TArray<FString> MapNames;

};


