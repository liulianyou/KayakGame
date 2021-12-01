#pragma once

/*
* Author:	Liulianyou
* Time:		2020/8/31
* Purpose:	When the player try to respawn from the respawn task, maybe we need to do something such as change the player blood
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerDefinition.h"

#include "RespawnPostProcessBase.generated.h"

class APawn;

UCLASS(BlueprintType, Blueprintable, Config = Game, DefaultToInstanced, hidedropdown, editinlinenew)
class TRIGGERRUNTIME_API URespawnPostProcessBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:



	UFUNCTION(BlueprintImplementableEvent)
	void OnApplayPostProcess(APawn* OldCharacter, APawn* NewCharacter);

	virtual void ApplayPostProcess(APawn* OldCharacter, APawn* NewCharacter);
};