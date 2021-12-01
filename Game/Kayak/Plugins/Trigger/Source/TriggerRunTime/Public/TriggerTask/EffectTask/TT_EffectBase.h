#pragma once

/*
* Author:	Liulianyou
* Time:		2021/8/16
* Purpose:	The class will display all effect in game, it can controls which effect should be show at which client/server.
*			The LD can use this class to spawn any effect at specific game point
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Misc/EnumClassFlags.h"
#include "Engine/EngineTypes.h"
#include "TriggerTaskBase.h"

#include "TT_EffectBase.generated.h"

class UEffectDataBase;

//The struct data to store the information to open the effect data
USTRUCT(BlueprintType)
struct FOpenEffectData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	TArray<UObject*> Causers;
};

//The struct data to store the information to close the effect data
USTRUCT(BlueprintType)
struct FEffectDataOperator
{
	GENERATED_BODY()
public:

	//Who rise up this action
	UPROPERTY(BlueprintReadOnly)
	TArray<UObject*> Causers;

	//Whether this operation is used to open the effect data
	UPROPERTY(BlueprintReadOnly)
	bool IsOpenedData = false;

	//The index of the effect data this operation operator
	UPROPERTY(BlueprintReadOnly)
	int EffectDataIndex;
};


UCLASS(Blueprintable, BlueprintType, Abstract, editinlinenew, Category = "TriggerRuntime")
class TRIGGERRUNTIME_API UTT_EffectBase : public UTriggerTaskBase
{
	GENERATED_UCLASS_BODY()

	TriggerTaskCommonFrameWorkDeclaration();
	
public:
	
	//Override UObject
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual bool ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags) override;
	//Override UObject

	//Override UTriggerTaskBase
	virtual void BeginDestroy() override;
	//Override UTriggerTaskBase


	/*
	* Get all data this task stores
	*
	* @param MatchSupportDataTypes False means it will output all data not matter weather it is matched for this task
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Net")
	void GetEffectDatas(TArray<UTriggerEffectDataBase*>& OutDatas, bool MatchSupportDataTypes = true);

	/*
	* Get the specific effect data according to the effect data index
	*
	* @param EffectDataIndex the specific index of effect data
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Net")
	UTriggerEffectDataBase* GetEffectData(int EffectDataIndex = -1);
	
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Net")
	int GetEffectDataIndex(UTriggerEffectDataBase* Data);

	/*
	* Function used to check weather all data have been closed
	* 
	* @param EffectDataIndex INDEX_NONE means will check all data
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Net")
	virtual bool IsEffectDataClosed( int EffectDataIndex = -1 );

	//Try to check weather this task can open the target effect data
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Net")
	virtual bool CanOpenTargetEffectData(int EffectDataIndex = -1);

	/*
	* close the target effect data
	* 
	* @param EffectDataIndex	INDEX_NONE means all data will be closed, and this task should be considered as finished
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Net")
	virtual void CloseEffect(const TArray<UObject*>& Causers, int EffectDataIndex = -1);

	/*
	* Try to open the target effect data in the effect task
	* 
	* @param EffectDataIndex the index for effect data in this trigger effect
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Net")
	virtual void OpenEffect(const TArray<UObject*>& Causers, int EffectDataIndex = -1);

	/*
	* When some data is changed in the effect data the task need to do something according it.
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime|Net")
	void OnDataChanged(const UTriggerEffectDataBase* EffectData, const FName& DataName);
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Net")
	virtual void DataChanged(const UTriggerEffectDataBase* EffectData, const FName& DataName);

protected:

	/*
	* Try to close effect, by default it will broadcast all machines. All Clients and Server
	* 
	* @param Causers	The causer who want to close the effect
	* @param EffectDataIndex	The index of effect data that this task will try to closed
	*/
	UFUNCTION(NetMulticast, Reliable)
	void NetMuti_CloseEffect(const TArray<UObject*>& Causers, int EffectDataIndex = -1);

	/*
	* Try to open effect, by default it will broadcast all machines All Clients and Server
	* 
	* @param Causers	The causer who want to open the effect
	* @param EffectDataIndex	The index of effect data that this task will try to open
	*/
	UFUNCTION(NetMulticast, Reliable)
	void NetMuti_OpenEffect(const TArray<UObject*>& Causers, int EffectDataIndex = -1);

	/*
	* Just notify the effect data to close and open, do not do any other things
	* @param EffectDataIndex	The index of effect data that this task will try to operate
	*/
	void OpenEffectInternal(const TArray<UObject*>& Causers, int EffectDataIndex = -1);
	void CloseEffectInternal(const TArray<UObject*>& Causers, int EffectDataIndex = -1);

protected:
	UFUNCTION()
	void Rep_OnEffectOperators();

	void AddOperator( bool IsClosed, const TArray<UObject*>& Causers, int EffectIndex );
	void RemoveOperator(bool IsClosed, int EffectIndex );

private:

	//All data that this effect task will process
	UPROPERTY(BlueprintReadWrite, Instanced, EditAnywhere, Replicated, Category = "EffectData", meta = (AllowPrivateAccess = "true"))
	TArray<UTriggerEffectDataBase*> EffectDatas;

	/*
	* The type of data this task support.
	* By default it should never be changed dynamically.
	* If this data have not been specified then all effect data will be used in the EffectDatas
	*/
	UPROPERTY(EditAnywhere, Category = "EffectData"/*, meta = (AllowPrivateAccess = "true")*/)
	TArray<TSubclassOf<UTriggerEffectDataBase>> SupportedDataTypes;

	//the operators for the data in this trigger task
	UPROPERTY(ReplicatedUsing =Rep_OnEffectOperators)
	TArray<FEffectDataOperator> EffectOperators;
};
