#pragma once

/*
* Author:	Liulianyou
* Time:		2021/10/9
* Purpose:	This is the information to describe what the operation is, where, when and how this operation occurred
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Templates/SubclassOf.h"
#include "Engine/ActorChannel.h"
#include "Net/UnrealNetwork.h"
#include "Engine/EngineTypes.h"
#include "OperationInformationBase.generated.h"

class UTriggerStyleBase;

/*
* Hold the base information for the scope of this operation
*/
USTRUCT(Blueprintable)
struct TRIGGERRUNTIME_API FOperationScope
{
	GENERATED_BODY()

public:
	FOperationScope() {};
	explicit FOperationScope(UObject* _Causer, UTriggerStyleBase* _OperationStyle, UObject* _Target) :
		Causer(_Causer), OperationStyle(_OperationStyle), Target(_Target) {}

public:

	//Who initiate this operation
	UPROPERTY(BlueprintReadOnly)
	UObject* Causer;

	//How this operation will apply to target
	UPROPERTY(BlueprintReadOnly)
	UTriggerStyleBase* OperationStyle;

	//Which target this operation will apply to
	UPROPERTY(BlueprintReadOnly)
	UObject* Target;

public:
	friend bool operator==(const FOperationScope& LeftData, const FOperationScope& RightData);

};

bool operator==(const FOperationScope& LeftData, const FOperationScope& RightData);

/*
* The base class to identify the operation information
*/
UCLASS(BlueprintType, Blueprintable, hidedropdown, noteditinlinenew, Abstract, DefaultToInstanced, Category = "TriggerRuntime|OperationInfo")
class TRIGGERRUNTIME_API UOperationInformationBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	//Override UObject
	virtual bool IsSupportedForNetworking() const { return Replicated; }
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const;
	//Override UObject

	virtual bool ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags);

	/*
	* Try to check weather this operation information should be replicated.
	*
	* @param OperatorOwner	The owner who initiate this operation, this may not the same as the causer, It is always the place which this operation stay
	*/
	UFUNCTION(BlueprintNativeEvent)
	bool ShouldReplicateInformation(UObject* OperatorOwner) const;

public:

	/*
	* Get the causers who rise up this action
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Operation")
	const TArray<FOperationScope>& GetConstOperations() const { return Operations; }
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Operation")
	TArray<FOperationScope>& GetOperations() { return Operations; }

	/*
	* The rule used when added new operation.
	* Give the BP one access to determine how to add the new operation
	*/
	UFUNCTION(BlueprintImplementableEvent)
	bool OnCanAddNewOpertion(UObject* Causer, UTriggerStyleBase* OperationStyle, UObject* Target);

	/*
	* Add new operation
	*
	* @param Causer who initiate this operation
	* @param OperationStyle	How this operation will apply to target
	* @param Target	Which one this operation will apply to
	*
	* #return the index of the new operation scope
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Operation")
	virtual int AddNewOperation(UObject* Causer, UTriggerStyleBase* OperationStyle, UObject* Target);

	bool OnCanRemoveOperation(UObject* Causer, UTriggerStyleBase* OperationStyle, UObject* Target);

	/*
	* Remove the operation if it exist
	* When all the parameter is null then this function will remove all operation scopes in this operation information
	*
	* @param Causer who initiate this operation
	* @param OperationStyle	How this operation will apply to target
	* @param Target	Which one this operation will apply to
	*
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Operation")
	virtual void RemoveOperation(UObject* Causer = nullptr, UTriggerStyleBase* OperationStyle = nullptr, UObject* Target = nullptr);

	/*
	* Find all scopes which is matched the rule
	* If the value of causer, operation style and Target is null, then the target rule will always passed
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Operation")
	virtual void FindOperationScope(TArray<FOperationScope>& OuterScopes, UObject* Causer = nullptr, UTriggerStyleBase* OperationStyle = nullptr, UObject* Target = nullptr) const;

	/*
	* Create new operation to start the trigger task when at the end of rescue
	*
	* @param OperationClass	The class to be used to create new operation
	* @param Owner the place where this operation occurred
	* @param Causer Who initiate this operation
	* @param Target which task should be
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Operations", meta = (AdvancedDisplay = 2))
	static UOperationInformationBase* CreateNewOperationInfo( TSubclassOf<UOperationInformationBase> OperationClass, UObject* Owner, UObject* Causer = nullptr, UObject* Target = nullptr, UTriggerStyleBase* Style = nullptr);

public:

	/*
	* Flag to check weather we should replicate its properties which are marked as replicated
	*/
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "OperationInfo")
	bool Replicated = true;

private:

	//The internal operation data
	UPROPERTY(Replicated)
	TArray<FOperationScope> Operations;
};