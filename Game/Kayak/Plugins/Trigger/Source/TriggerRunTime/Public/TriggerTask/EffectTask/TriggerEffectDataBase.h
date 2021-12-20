#pragma once

/*
* Author:	Liulianyou
* Time:		2021/8/16
* Purpose:	The base data that is used for different effect task
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Engine/EngineTypes.h"

#include "Engine/EngineTypes.h"

#include "TriggerEffectDataBase.generated.h"

class UTriggerTaskBase;
class UTriggerEffectDataBase;
class UOperationInformationBase;
class UTriggerEffectDataOperationStyleBase;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEffectDataChanged, const UTriggerEffectDataBase*, EffectData, const FName&, DataName);
	 
namespace EffectDataStatus
{
	//This state means the target effect data is activated, and can be opened by the effect task
	static FString ACTIVED = TEXT("ACTIVED");
	//This effect data is opened and can be closed by the effect task
	static FString OPENED = TEXT("OPENED");
	//This effect data is closed and only can be activated when this data is reseted
	static FString CLOSED = TEXT("CLOSED");
}

/*
* The base data which is used by the effect task to show some external information or effect at scene
* 
* This class should bind with the two class UEffectDataOpenStyleBase and UEffectDataCloseStyleBase to define how to open and close this effect data
*/
UCLASS(Blueprintable, BlueprintType, Abstract, editinlinenew, DefaultToInstanced, Category = "TriggerRuntime|EffectData")
class TRIGGERRUNTIME_API UTriggerEffectDataBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:
#pragma region NetSupport
	virtual bool IsSupportedForNetworking() const { return true; }
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual bool ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags);
#pragma endregion NetSupport

	//Override UObject
	virtual void BeginDestroy() override;
	//Override UObject


public:
	
	/*
	* Initialize the this data from the target task owner
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime|EffectData")
	void OnInitialize(UTriggerTaskBase* InTaskOwner);
	virtual void Initialize(UTriggerTaskBase* InTaskOwner);

	/*
	* Invoked when this data is activated by the task owner
	* 
	* @param OpenStyle Describe how the outer want to open this effect data
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime|EffectData")
	void OnOpenEffect(UTriggerEffectDataOperationStyleBase* OpenStyle);
	virtual void OpenEffect(UTriggerEffectDataOperationStyleBase* OpenStyle);

	/*
	* Invoked when the effect task owner is ended
	* 
	* @param CloseStyle		Describe how the outer want to close this effect data
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime|EffectData")
	void OnCloseEffect(UTriggerEffectDataOperationStyleBase* CloseStyle);
	virtual void CloseEffect(UTriggerEffectDataOperationStyleBase* CloseStyle);

	/*
	* Each time one value changed in this data, this function will be invoked
	* 
	* @param DataName the data who own this name is changed
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime|EffectData")
	void OnUpdateData(const FName& DataName);
	virtual void UpdateData(const FName& DataName );

	/*
	* Used to reset this data
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime|EffectData")
	void OnReset(UOperationInformationBase* ResetOperation);
	virtual void Reset(UOperationInformationBase* ResetOperation);


	/*
	* Get all objects which want to inspect this data
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime|EffectData")
	void GetInspectedObjects( TArray<UObject*>& Objects );

	/*
	* Get the task owner of this data.
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|UIData")
	UTriggerTaskBase* GetTaskOwner();

	/*
	* Try to initialize target object which want to inspect this data
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|UIData")
	virtual void TryToInitializeTargetObject( UObject* TargetObject );

	/*
	* When there is one important value changed at this data, this function will be invoked to notify the target object to update its content
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|UIData")
	virtual void TryToUpdateTargetObject(UObject* TargetObject, const FName& ChangedDataName);

	/*
	* When this data want to end its effect then this function will be invoked to notify the target object to end
	* 
	* @param EndStyle  The style to describe how to end target object
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|UIData")
	virtual void TryToEndTargetObject(UObject* TargetObject, UTriggerEffectDataOperationStyleBase* EndStyle);

	/*
	* Flag to check weather this data have been closed
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|UIData")
	virtual bool IsClosed();

	/*
	* Used to check weather this data can be opened by others
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime|EffectData")
	bool OnCanBeOpened(const TArray<UObject*>& Causers);

	/*
	* Used to check weather this data can be opened by others
	* When OnCanBeOpened return false this function will always return false
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|UIData")
	virtual bool CanBeOpened(const TArray<UObject*>& Causers);

	/*
	* Used to check weather this data can be opened by others
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime|EffectData")
	bool OnCanBeClosed(const TArray<UObject*>& Causers);

	/*
	* Used to check weather this data can be opened by others
	* When OnCanBeClosed return false this function will always return false
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|UIData")
	virtual bool CanBeClosed(const TArray<UObject*>& Causers);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|UIData")
	void SetDataStatus( FString CurrentStatus );

//protected:
//	
//	UFUNCTION()
//	virtual void Rep_OnDataStatus();

public:

	template<class ValueType>
	ValueType* GetValueByName(const FName& Name)
	{
		UProperty* Property = FindFieldChecked<UProperty>(GetClass(), Name);

		if(Property == nullptr)
			return nullptr;

		return Property->ContainerPtrToValuePtr<ValueType>(this);
	}

public:
	
	/*
	* Flag to check weather this data only can be active on the toggled actor
	* 
	* false means this effect data will be active on all clients or server according to the task runtime type
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "EffectData")
	bool ActiveAtOnlyToggledActor = true;

	/*
	* Internal delegate which is used to notify the others that there is one data is changed
	*/
	UPROPERTY(BlueprintAssignable)
	FEffectDataChanged DataChanged;

	/*
	* The status of this data
	*/
	//UPROPERTY(ReplicatedUsing=Rep_OnDataStatus)
	FString DataStatus;

private:

	/*
	* The owner of this data which can be confined by the LD to add different data
	*/
	UTriggerTaskBase* TaskOwner = nullptr;

};