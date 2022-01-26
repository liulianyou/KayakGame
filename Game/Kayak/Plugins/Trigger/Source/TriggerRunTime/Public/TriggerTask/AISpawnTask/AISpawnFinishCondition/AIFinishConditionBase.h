#pragma once

/*
* Author:	Liulianyou
* Time:		2020/9/24
* Purpose:	The base class to check weather we should mark the AISpawnTask finished
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "EvaluatorCondition.h"

#include "AIFinishConditionBase.generated.h"

class UAISpawnDataBase;

UCLASS(BlueprintType, Blueprintable, abstract, Within=TT_AISpawnBase, DefaultToInstanced, Category = "TriggerRuntime")
class TRIGGERRUNTIME_API UAIFinisheConditionBase : public UEvaluatorCondition
{
	GENERATED_UCLASS_BODY()

public:
	virtual void NativeReset();
	virtual void NativeInitialize(UObject* OwnerObject);
	virtual bool NativeEvaluator(bool DoLocalCheck = false);
private:
	
	

	//virtual void SetConditionData(UAISpawnDataBase* SpawnData) PURE_VIRTUAL(UAIFinisheConditionBase::SetConditionData) ;

};