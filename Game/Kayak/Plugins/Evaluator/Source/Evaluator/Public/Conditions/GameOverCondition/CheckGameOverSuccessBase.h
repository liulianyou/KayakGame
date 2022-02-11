#pragma once

/*
* Author:	Liulianyou
* Time:		2020/12/21
* Purpose:	This condition is used to check weather the game over is successful
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "GameOverCondition/CheckGameOverBase.h"

#include "CheckGameOverSuccessBase.generated.h"

UCLASS( abstract, Blueprintable, BlueprintType)
class EVALUATOR_API UCheckGameOverSuccessBase : public UCheckGameOverBase
{
public:
	GENERATED_UCLASS_BODY()

public:

};