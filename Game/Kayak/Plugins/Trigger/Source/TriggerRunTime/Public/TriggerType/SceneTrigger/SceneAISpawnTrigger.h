#pragma once
/*
* Author:	Liulianyou
* Time:		2020/7/7
* Purpose:	This file hold the information to crate a trigger which will spawn a lot AI
*			This class is just a template class that to show you can have one accesses to do specific trigger.
*			But I think the best way is to move the logic to the trigger task.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerType/SceneTrigger/NewTriggerBox.h"

#include "SceneAISpawnTrigger.generated.h"

UCLASS(BlueprintType, Category = "Trigger|SceneTrigger")
class TRIGGERRUNTIME_API ASceneAISpawnTrigger : public ANewTriggerBox
{
	GENERATED_UCLASS_BODY()

public:

	virtual void ComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) override;
	virtual void ComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;
	virtual void ComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) override;


};