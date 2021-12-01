#pragma once

/*
* Author:	Liulianyou
* Time:		2020/12/16
* Purpose:  Notify the game is over.
*			The GameOverTask must contain the start conditions which is derived from the UCheckGameOverBase.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerTask/TriggerTaskBase.h"

#include "TT_GameOver.generated.h"

UCLASS(BlueprintType, Category = "TriggerRuntime")
class TRIGGERRUNTIME_API UTT_GameOver : public UTriggerTaskBase
{
	GENERATED_UCLASS_BODY()

	TriggerTaskCommonFrameWorkDeclaration();

public:

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "GameOver")
	FString NextMapName;
};
