#pragma once

/*
* Author:	Liulianyou
* Time:		2020/10/30
* Purpose:	This is the effect which used in the interaction task, all actions will be performed by the player click the actor in the world
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "InteractionEffectBase.h"

#include "InteractionEffect_ProcesskActor.generated.h"

//The processed type that the player want to interact with the target actor
UENUM(BlueprintType)
enum class EProcessType : uint8
{
	EProcessType_Click		UMETA(DisplayName = "Click"),
	EProcessType_Hover		UMETA(DisplayName = "Hover"),
};

UCLASS(/*Blueprintable, BlueprintType, editinlinenew, DefaultToInstanced, Within = "TT_Interaction"*/)
class TRIGGERRUNTIME_API UInteractionEffect_ProcessActor : public UInteractionEffectBase
{
	GENERATED_UCLASS_BODY()

public:
	//Override InteractionEffectBase
	virtual void OpenEffect(UTriggerEffectDataOperationStyleBase* OpenStyle);
	virtual void CloseEffect(UTriggerEffectDataOperationStyleBase* Close);
	virtual void ValueInInteractionRuleChanged(AActor* Cuaser,  UInteractionRuleDataBase* Data);
	//Override InteractionEffectBase

public:
	


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interaction")
	EProcessType ProcessType;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interaction")
	AActor* TargetActor;
};
