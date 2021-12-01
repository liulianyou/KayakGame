#pragma  once

/*
* Author:		Liulianyou
* Time:			2021/4/14
* Purpose:		This is base tool class which is used to save game information
*/

#include "Templates/SharedPointer.h"
#include "Templates/SubclassOf.h"
#include "TriggerToolInterface.h"

class USaveGameStrategyBase;
class USaveGameConfigBase;

class TRIGGERRUNTIME_API FTriggerSaveGameToolBase : public TSharedFromThis<FTriggerSaveGameToolBase>, public TriggerToolInterface
{
public:

	ClassInfo(FTriggerSaveGameToolBase, TriggerToolInterface);

	FTriggerSaveGameToolBase();
	virtual ~FTriggerSaveGameToolBase();

public:
	//Override TriggerToolInterface
	virtual void InitlalizeTriggerTool() override;
	//Override TriggerToolInterface

public:

	USaveGameStrategyBase* FindOrAddNewStrategy(TSubclassOf<USaveGameStrategyBase> SaveStrategy);
	USaveGameStrategyBase* FindOrAddNewStrategy(USaveGameStrategyBase* SaveStrategy);
	void RemoveStrategy(TSubclassOf<USaveGameStrategyBase> SaveStrategy);

	/*
	* save the data according target config
	*/
	virtual void SaveGame( USaveGameConfigBase* SaveGameConfig) {};

	virtual void LoadGame( USaveGameConfigBase* SaveGameConfig) {};

public:
	void OnWorldTearDown(UWorld* World);

private:
	
	static TArray<USaveGameStrategyBase*> StrategyInstance;

};
