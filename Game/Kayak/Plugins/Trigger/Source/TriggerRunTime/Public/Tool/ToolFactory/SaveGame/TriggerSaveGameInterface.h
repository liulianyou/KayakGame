#pragma once

/*
* Author:		Liulianyou
* Time:			2021/4/26
* Purpose:		This is a interface which should be inherited by the object which want to save some information.
*				This interface can be used in BP and Native c++ code.
*				This interface only be used when you want to use the UE4 SaveGame Flag which is used to describe class member. 
*/

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TriggerSaveGameInterface.generated.h"

class USaveGameConfigBase;

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UTriggerSaveGameInterface : public UInterface
{
	GENERATED_BODY()
};

class TRIGGERRUNTIME_API ITriggerSaveGameInterface
{
	GENERATED_BODY()

public:

	/*
	* This function will be invoked when the loading data have finished.
	* All information value in the target object have been serialized
	*
	* @param ConfigData the config data which will hold the original save data information
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime|SaveGame")
		void OnLoadGameDataComplete(USaveGameConfigBase* ConfigData);
	virtual void LoadGameDataComplete(USaveGameConfigBase* ConfigData);

	/*
	* This function will be invoked when this system will serialize the this object.
	* At this moment the value which have SaveGame Flag have not been assigned by the save data.
	*
	* @param ConfigData the config data which will hold the original save data information
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime|SaveGame")
		void OnStartToLoadGameData(USaveGameConfigBase* ConfigData);
	virtual void StartToLoadGameData(USaveGameConfigBase* ConfigData);

};