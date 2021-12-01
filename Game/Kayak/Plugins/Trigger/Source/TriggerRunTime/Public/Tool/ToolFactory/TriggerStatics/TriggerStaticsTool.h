#pragma once

/*
* Author:	Liulianyou
* Time:		2020/12/7
* Purpose:	This tool will hand all trigger static in my trigger system. And this tool should not exposed to the BP
*/

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TriggerToolInterface.h"
#include "TriggerStatics/TriggerStaticsBase.h"


class TRIGGERRUNTIME_API FTriggerStaticsTool : public TSharedFromThis<FTriggerStaticsTool>, public TriggerToolInterface
{

public:

	ClassInfo(FTriggerStaticsTool, TriggerToolInterface);

	FTriggerStaticsTool();
	virtual ~FTriggerStaticsTool();

public:
	//Override TriggerToolInterface
	virtual void InitlalizeTriggerTool();
	//Override TriggerToolInterface

	UTriggerStaticsBase* FindOrAddTriggerStatics( TSubclassOf<UTriggerStaticsBase> TriggerStaticsClass);
	void RemoveTriggerStatics(TSubclassOf<UTriggerStaticsBase> TriggerStaticsClass);

	TArray<UTriggerStaticsBase*>& GetAllTriggerStaticsInstance(){ return TriggerStatics; }

private:
	
	TArray<UTriggerStaticsBase*> TriggerStatics;


};
