#pragma once

/*
* Author:	Liulianyou
* Time:		2021/4/19
* Purpose:	This config will hold TArray<uint8> Data.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "SaveGame/SaveGameConfig/SaveGameConfigBase.h"
#include "SaveGame/TriggerSaveGameDefinition.h"

#include "SaveGameLocalFileData.generated.h"

UCLASS(BlueprintType, Blueprintable, Category = "TriggerRuntime|SaveGame")
class TRIGGERRUNTIME_API USaveGameLocalFileData : public USaveGameTArrayData
{
	GENERATED_UCLASS_BODY()

public:

	//The index of current save data should be saved
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime|SaveGame")
	int UserIndex;

	//The name of current save data file at disk
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime|SaveGame")
	FString SlotName;

};
