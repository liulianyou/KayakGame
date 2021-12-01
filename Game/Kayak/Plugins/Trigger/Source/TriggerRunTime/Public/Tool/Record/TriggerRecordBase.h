#pragma once

/*
* Author:		Liulianyou
* Time:			2021/4/8
* Purpose:		Tt is base class used to recode some information in trigger system, and will do some external things.
*				This class should not be singleton class as there are a lot recode command at one time. 
*				So I will not make it as tool or statics
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerRecordBase.generated.h"

class UTriggerFilterBase;

/*
* The information for the target instigator who want to record task
*/
USTRUCT(BlueprintType)
struct FRecordInstigatorInfo
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadOnly, Category = "TriggerRuntime")
	UObject* Instigator;

	bool operator()(const FRecordInstigatorInfo& A, const  FRecordInstigatorInfo& B);

	friend bool operator==(const FRecordInstigatorInfo& A, const FRecordInstigatorInfo& B);

};
bool operator==(const FRecordInstigatorInfo& A, const FRecordInstigatorInfo& B);

UENUM(BlueprintType)
enum class EEndRecordType : uint8
{
	EEndRecordType_Pause,
	EEndRecordType_ClearRecordInfo
};

UCLASS(BlueprintType, Blueprintable, abstract, Category = "TriggerRuntime")
class TRIGGERRUNTIME_API UTriggerRecordBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	virtual void BeginDestroy() override;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

public:

	/*
	* Start to process the information for current recorded information
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime|Record")
	void Execute(FRecordInstigatorInfo& InstigatorInfo);

	/*
	* Start to record all trigger task 
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime|Record")
	void StartRecord(FRecordInstigatorInfo& InstigatorInfo);

	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime|Record")
	void EndRecord(FRecordInstigatorInfo& InstigatorInfo, EEndRecordType EndType);

public:

	/*
	* These filters used to filter the information which will be record
	*/
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, Category = "Record")
	TArray<UTriggerFilterBase*> Filters;
};