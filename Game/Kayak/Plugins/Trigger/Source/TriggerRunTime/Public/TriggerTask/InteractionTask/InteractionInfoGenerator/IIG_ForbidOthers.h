#pragma once

/*
* Author:	Liulianyou
* Time:		2021/9/8
* Purpose:	Forbid others to interaction when this actor is interacting
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "InteractionInfoGenerationBase.h"

#include "IIG_ForbidOthers.generated.h"

/*
* If someone is interacting the target actor then all others can not interact again
*/
UCLASS(BlueprintType, Blueprintable, meta =( DisplayName = "ForbidOthersWhenInteracting"))
class TRIGGERRUNTIME_API UIIG_ForbidOthersWhenInteracting : public UInteractionGenerationBase
{
	GENERATED_UCLASS_BODY()

public:
	
	//Override UInteractionGenerationBase
	virtual bool GenerateInteractionInfo(FInteractionInfo& OutData, FString& InteractState, UTT_Interaction* Task, AActor* Actor) override;
	//Override UInteractionGenerationBase

	//Weather there is someone interacting
	UFUNCTION(BlueprintCallable)
	bool IsInteracting();

};

/*
* If the target interaction have been activated then all others can not active the target interaction again
*/
UCLASS(BlueprintType, Blueprintable, meta = (DisplayName = "ForbidOthersWhenActive"))
class TRIGGERRUNTIME_API UIIG_ForbidOthersWhenActive : public UInteractionGenerationBase
{
	GENERATED_UCLASS_BODY()

public:

	//Override UInteractionGenerationBase
	virtual bool GenerateInteractionInfo(FInteractionInfo& OutData, FString& InteractState, UTT_Interaction* Task, AActor* Actor) override;
	//Override UInteractionGenerationBase

	//Weather there is someone active the target interact
	UFUNCTION(BlueprintCallable)
	bool IsActivatingInteraction();

};
