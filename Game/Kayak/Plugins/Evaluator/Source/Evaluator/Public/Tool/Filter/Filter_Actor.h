#pragma once

/*
* Author:	Liulianyou
* Time:		2020/9/18
* Purpose:	Just filter the actors which is one of the template actors
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Templates/SubclassOf.h"
#include "FilterBase.h"
#include "GameFramework/Actor.h"
#include "Filter_Actor.generated.h"

/*
* Just filter the actors which is one of the template actors
*/
UCLASS(BlueprintType, Blueprintable, DefaultToInstanced, editinlinenew)
class EVALUATOR_API UFilter_Actor : public UFilterBase
{
	GENERATED_UCLASS_BODY()

public:
	
	UFUNCTION(BlueprintCallable)
	AActor* GetActorData() const;

public:
	virtual bool NativePass() const override;
	virtual void NativeReset() override;

	/*
	* If the actor is one of these classes this filter will pass
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Filter")
	TArray<TSubclassOf<AActor>> ActorClasses;
};


