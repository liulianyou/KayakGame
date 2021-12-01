#pragma once

/*
* Author:	Liulianyou
* Time:		2021/8/23
* Purpose:	This is a simple move task to check weather the character have reached at the target actor
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TT_MoveBase.h"

#include "TT_SimpleMove.generated.h"

class AActor;

UCLASS(BlueprintType, Category = "TriggerRuntime")
class TRIGGERRUNTIME_API UTT_SimpleMove : public UTT_MoveBase
{
	GENERATED_UCLASS_BODY()

	TriggerTaskCommonFrameWorkDeclaration();

public:

	UFUNCTION()
	void OnTargetActorOverlap(AActor* OverlappedActor, AActor* OtherActor);

	//Remove the overlap event from the target actor
	UFUNCTION(BlueprintCallable)
	void RemoveOverlapEvent();

public:

	/*
	* The actor which the player need to touch to finish this task
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Move")
	TSoftObjectPtr<AActor> TargetActor;
	

};
