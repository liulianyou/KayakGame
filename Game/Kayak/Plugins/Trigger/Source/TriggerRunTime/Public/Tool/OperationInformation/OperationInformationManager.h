#pragma once

/*
* Author:	Liulianyou
* Time:		2021/10/14
* Purpose:	This is the manager and storage for all operations which is created and used by the event trigger system
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Templates/SubclassOf.h"

#include "TriggerBlueprintLib.h"

#include "OperationInformationManager.generated.h"

class UOperationInformationBase;
class UTriggerManager;
struct FOperationInfoContainer;

/*
* Data struct to define the space for the operation
*/
USTRUCT(BlueprintType)
struct FOperationInfoSpace
{
	GENERATED_BODY()

public:
	FOperationInfoSpace(){}
	FOperationInfoSpace(UObject* ActionOwner, UOperationInformationBase* OperationInfo) :
		Owner(ActionOwner),
		Operation(OperationInfo)
	{}

public:

	//Who raise up the target operation
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Operation")
	UObject* Owner = nullptr;

	/*
	* As one owner can no do a lot operations do I don't need to change the operation to Array
	*/

	//what is the operation
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Operation")
	UOperationInformationBase* Operation = nullptr;

public:

	bool IsValid() const;

	static FOperationInfoSpace InvalidData;

	friend bool operator==(const FOperationInfoSpace& LeftData, const FOperationInfoSpace& RightData);

};

bool operator==(const FOperationInfoSpace& LeftData, const FOperationInfoSpace& RightData);


UCLASS(BlueprintType, Blueprintable, Within="TriggerManager", Category = "TriggerRuntime|Operation")
class TRIGGERRUNTIME_API UOperationInformationManager : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Operation")
	void Initialzie(UTriggerManager* Owner);

	UFUNCTION(BlueprintCallable, Category = "Operation")
	UTriggerManager* GetTriggerManager() const { return OwnerTriggerManager; }

	UFUNCTION(BlueprintCallable, Category = "Operation")
	const TArray<FOperationInfoSpace>& GetConstOperationSpaces() const;

	UFUNCTION(BlueprintCallable, Category = "Operation")
	TArray<FOperationInfoSpace>& GetOperationSpaces();

	//Add new operation class 
	UFUNCTION(BlueprintCallable, Category = "Operation")
	FOperationInfoSpace& AddNewOperationByClass( UObject* Owner, TSubclassOf<UOperationInformationBase> OperationType );

	UFUNCTION(BlueprintCallable, Category = "Operation")
	FOperationInfoSpace& AddNewOperationByInstanceOperation( UObject* Owner, UOperationInformationBase* Operation );

	//Clear all operations in this manager
	UFUNCTION(BlueprintCallable, Category = "Operation")
	void Empty();


	/*
	* Remove the target operation which is raised up the owner
	* 
	* @param Owner					the owner who raised up the target operation, if it is null then remove all operations which is the same as operation
	* @param Operation				the operation that will be removed if it is null then will removed all operations which is raised up by the owner
	* @param OnlyCareOperationType	true means will just use the class type of the target operation to compare
	*/
	UFUNCTION(BlueprintCallable, Category = "Operation")
	void RemoveOperation( UObject* Owner, UOperationInformationBase* Operation, bool OnlyCareOperationType = false );

	/*
	* Get all the owners of the target operation
	* 
	* @param Operation If this value is null then it will get all owners
	*/
	UFUNCTION(BlueprintCallable, Category = "Operation")
	void GetOperationOwner( TArray<UObject*>& Owners, UOperationInformationBase* Operation) const;

	/*
	* Get all the owners of the target operation class
	*/
	UFUNCTION(BlueprintCallable, Category = "Operation")
	void GetOperationOwnerByOperationInfoClass(TArray<UObject*>& Owners, TSubclassOf<UOperationInformationBase> OperationClass) const;

	/*
	* Get all operations which is raised up by the owner
	* 
	* @param Owner if this owner is null then it will get all operations
	*/
	UFUNCTION(BlueprintCallable, Category = "Operation")
	void GetOperationInfos( TArray<UOperationInformationBase*>& Operations, UObject* Owner ) const;

	UFUNCTION(BlueprintCallable, Category = "Operation")
	bool IsOperationInfValid( const FOperationInfoSpace& OperationInfoSpace ) const;

	/*
	* Check weather there is one operation info which has the owner and operation info
	* 
	* #return the index for matched element in the operation pool, if this value is INDEX_NONE means there  is no one to match.
	*/
	UFUNCTION(BlueprintCallable, Category = "Operation")
	int IsOperationInfoExist( const UObject* const Owner, const UOperationInformationBase* const OperationInfo ) const;

	/*
	* Check weather there is one operation info space in the pool
	* 
	* #return the index for matched element in the operation pool, if this value is INDEX_NONE means there  is no one to match.
	*/
	UFUNCTION(BlueprintCallable, Category = "Operation")
	int IsOperationInfoSpaceExist(const FOperationInfoSpace& OperationInfoSpace) const;

public:
	
	void SetReplicatedContaner(FOperationInfoContainer* Container, FOperationInfoContainer* OldContaner = nullptr);

private:
	
	//The data to hold all operations
	UPROPERTY(Transient)
	TArray<FOperationInfoSpace> Operations;

	UPROPERTY(Transient)
	UTriggerManager* OwnerTriggerManager;

	/*
	* The container used to replicate the operation information
	* 
	* Maybe the application have several world and each world have its own container I need to store them all
	*/
	TArray<FOperationInfoContainer*> ReplicatedContaners;
};

DECLARE_MULTICAST_DELEGATE_TwoParams(FRemoveOperationDelegate, UObject* /*Owner*/, UOperationInformationBase* /*OperationInfo*/ )

/*
* Help function to remove all operations 
*/
struct FScopeOperationInfoSpace
{
public:
	FScopeOperationInfoSpace() = delete;
	explicit FScopeOperationInfoSpace(const FOperationInfoSpace& Scope, const FRemoveOperationDelegate::FDelegate& RemoveOperationDelegate) 
		:OperationInfoSpace(Scope)
	{
		RemoveDelegate.Add(RemoveOperationDelegate);
	}
	FScopeOperationInfoSpace(const FOperationInfoSpace& Scope):OperationInfoSpace(Scope){}

	~FScopeOperationInfoSpace()
	{
		if (UTriggerBlueprintLib::GetOperationInfoManager() != nullptr)
		{
			UTriggerBlueprintLib::GetOperationInfoManager()->RemoveOperation(OperationInfoSpace.Owner, OperationInfoSpace.Operation);
		}

		RemoveDelegate.Broadcast(OperationInfoSpace.Owner, OperationInfoSpace.Operation);
		RemoveDelegate.Clear();
	}

private:
	//Target to the operation info space
	const FOperationInfoSpace& OperationInfoSpace;

	//The delegate for the outer to remove its own related content
	FRemoveOperationDelegate RemoveDelegate;

};