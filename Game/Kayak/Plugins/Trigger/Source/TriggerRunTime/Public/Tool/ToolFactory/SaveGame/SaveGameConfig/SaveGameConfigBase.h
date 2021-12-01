#pragma once

/*
* Author:	Liulianyou
* Time:		2021/4/19
* Purpose:	This is the base class to hold the config data for each save game tool
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Templates/SubclassOf.h"

#include "SaveGameConfigBase.generated.h"

class USaveGameStrategyBase;
class USaveGameSystemInfoBase;

UCLASS(BlueprintType, Blueprintable, abstract, hidedropdown, Category = "TriggerRuntime|SaveGame")
class TRIGGERRUNTIME_API USaveGameConfigBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	/*
	* Check weather this config data is valid
	* #return true means is data can be used or it can not be used
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|SaveGame")
	virtual bool IsVaildConfigData();

public:

	//The trigger save game system Head info data
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Category = "TriggerRuntime|SaveGame")
	USaveGameSystemInfoBase* SystemInfo;

	/*
	* The strategy class to process the data, If it is not specified for loading then I will find the appropriate strategy class by PreporcessData of all defined strategy class
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime|SaveGame")
	TSubclassOf<USaveGameStrategyBase> StrategyClass = nullptr;

	//Flag to check weather this config is used for load save data
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime|SaveGame")
	bool IsLoading = false;
};


UCLASS(BlueprintType, Blueprintable, abstract, Category = "TriggerRuntime")
class TRIGGERRUNTIME_API USaveGameTArrayData : public USaveGameConfigBase
{
	GENERATED_UCLASS_BODY()

public:

	/*
	* This data only can be read by BP which hold the save game data.
	*/
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "TriggerRuntime|SaveGame")
	TArray<uint8> Data;

};

