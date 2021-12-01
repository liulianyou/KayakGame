#pragma once

/*
* Author:		Liulianyou
* Time:			2021/7/28
* Purpose:		This file will hold the information to describe how to process to next event in the trigger system
*				This is the base class to hold the base information
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "GameplayTagContainer.h"
#include "TriggerInterface.h"
#include "TriggerDefinition.h"
#include "TriggerEventChainBase.generated.h"

class UTriggerTaskComponentBase;

/*
* The result for add any type of node to the target event chain
*/
UENUM(BlueprintType)
enum class EAddNewNodeResult : uint8
{
	//Used for pass the UBT
	EAddNewNodeResult_PlaceHold				UMETA(Hidden),

	//The new node is not matched for target event chain 
	EAddNewNodeResult_Unmatch 	=	1<<1	UMETA(DisplayName = "Unmatch"),

	//The new node is matched for target event chain
	EAddNewNodeResult_Matched	=	1<<2	UMETA(DisplayName = "Matched"),

	//Added successfully
	EAddNewNodeResult_Successed	=	1<<3	UMETA(DisplayName = "Successed"),

	//Added Failed
	EAddNewNodeResult_Failed	=	1<<4	UMETA(DisplayName = "Faild"),
};

ENUM_CLASS_FLAGS(EAddNewNodeResult)

UCLASS(BlueprintType, Blueprintable, Abstract, editinlinenew, DefaultToInstanced, Category = "TriggerRuntime|EventInfo")
class TRIGGERRUNTIME_API UTriggerEventChainBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	
	/*
	* Invoked when this data is initialized by the component.
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime|EventInfo")
	void OnInitilaizeByTriggerTaskComponent(UTriggerTaskComponentBase* Component);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|EventInfo")
	void InitilaizeByTriggerTaskComponent(UTriggerTaskComponentBase* Component);

	/*
	* Used to check weather this event chain can hold the target object.
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime|EventInfo")
	bool CanHoldTargetObject( UObject* Object ) const;

	/*
	* Get all task components which are at the parent node of the owner component
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime|EventInfo")
	void GetParentTriggerTaskComponents(TArray<UTriggerTaskComponentBase*>& OutTriggerTaskComponents);

	/*
	* Get all task components which are at the parent node of the owner component
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime|EventInfo")
	void GetChildTriggerTaskComponents(TArray<UTriggerTaskComponentBase*>& OutTriggerTaskComponents);

	/*
	* Add new child node to this component
	* You should implement this function in the child class.
	* The base event chain will not store any child node, as different component may have different data struct to hold the child node information.
	*
	* @param NeedUpdateParentNodeInChildNode true means it should update the parent node information in the child node
	*
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime|EventInfo")
	EAddNewNodeResult AddChildNode(const TScriptInterface<ITriggerInterface>& ChildNode, const FGameplayTagContainer& CategoryParameter = FGameplayTagContainer::EmptyContainer, bool NeedUpdateParentNodeInChildNode = true);

	/*
	* remove child node from this component
	* You should implement this function in the child class.
	* The base component will not store any child node, as different component may have different data struct to hold the child node information.
	*
	* @param NeedUpdateParentNodeInChildNode true means it should update the parent node information in the child node
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime|EventInfo")
	void RemoveChildNode(const TScriptInterface<ITriggerInterface>& ChildNode, const FGameplayTagContainer& CategoryParameter = FGameplayTagContainer::EmptyContainer, bool NeedUpdateParentNodeInChildNode = true);


	/*
	* Remove the parent node at current event chain
	* You should implement this function in the child class.
	* The base component will not store any child node, as different component may have different data struct to hold the child node information.
	* 
	* @param NeedUpdateChildNodeInParentNode true means it should update the child node information in the child node
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime|EventInfo")
	void RemoveParentNode(const TScriptInterface<ITriggerInterface>& ParentNode, const FGameplayTagContainer& CategoryParameter = FGameplayTagContainer::EmptyContainer, bool NeedUpdateChildNodeInParentNode = true);

	/*
	* Remove the parent node at current event chain
	* You should implement this function in the child class.
	* The base component will not store any child node, as different component may have different data struct to hold the child node information.
	*
	* @param NeedUpdateChildNodeInParentNode true means it should update the child node information in the child node
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime|EventInfo")
	EAddNewNodeResult AddParentNode(const TScriptInterface<ITriggerInterface>& ParentNode, const FGameplayTagContainer& CategoryParameter = FGameplayTagContainer::EmptyContainer, bool NeedUpdateChildNodeIndeParentNode = true);

	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime|EventInfo")
	void GetParentTriggers(TArray<TScriptInterface<ITriggerInterface>>& OuterTriggers, const FGameplayTagContainer& CategoryParameter = FGameplayTagContainer::EmptyContainer) const;

	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime|EventInfo")
	void GetChildTriggers(TArray<TScriptInterface<ITriggerInterface>>& OuterTriggers, const FGameplayTagContainer& CategoryParameter = FGameplayTagContainer::EmptyContainer) const;

	/*
	* Try to check weather current event chain is matched for the other event info.
	* The matched state between the two event chain is mean they are at the same layer, and can be child/parent for each
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime|EventInfo")
	bool IsChildForEventInfo(const UTriggerEventChainBase* OtherEventInfo, bool IgnoreDiffentLevel = true ) const;

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|EventInfo")
	FGameplayTagContainer& GetCategory(){ return Category; }

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|EventInfo")
	const FGameplayTagContainer& GetConstCategory() const { return Category; }

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|EventInfo")
	void SetCategory( const FGameplayTagContainer& NewCategory);

	/*
	* @param MapName		the map which target component belong to, if this value is empty then will add the componentId to all instance
	* @param ComponentID	the ID of component
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|EventInfo")
	void AddNextComponentInfo(FString MapName, FGuid ComponentID);

	/*
	* @param MapName		Empty means it will remove all instance which have the target ComponentID
	* @param ComponentID	the ID of component
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|EventInfo")
	void RemoveNextComponentInfo(FString MapName, FGuid ComponentID);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|EventInfo")
	TArray<FTriggerTaskComponentInformation>& GetNextComponentInfo() { return NextComponentInfos; }

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|EventInfo")
	const TArray<FTriggerTaskComponentInformation>& GetConstNextComponentInfo() const { return NextComponentInfos; }

	/*
	* the Owner Component can only be get. as it should be set at the initialized function
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|EventInfo")
	UTriggerTaskComponentBase* GetComponentOwner() const { return OwnerComponent; }

protected:

	/*
	* Try to add new  next component info for the child components
	*
	* @param Components The components which will be added to the next component info in this component
	*/
	virtual void TryToAddChildComponentsToNextInfo(const TArray<UTriggerTaskComponentBase*>& Components);

	/*
	* Called When something changed which will affect the next component informations
	*/
	virtual void UpdateNextComponentInfo();

protected:

	/*
	* This the actual event info which will be used by the trigger task component to process at runtime.
	* when on task is finished and try to notify the next task in the next component to start, the trigger task component will use this variable to get next toggle information
	*/
	UPROPERTY(VisibleAnywhere, Category="EventInfo", meta = (AllowPrivateAccess = "true", DisplayAfter = "Category"))
	TArray<FTriggerTaskComponentInformation> NextComponentInfos;

	/*
	* Which category should the child nodes belong to
	*/
	UPROPERTY(EditAnywhere, Category = "EventInfo", meta=(AllowPrivateAccess = "true"))
	FGameplayTagContainer Category;

	//The component who own this event chain info
	UPROPERTY()
	UTriggerTaskComponentBase* OwnerComponent;

};
