#include "TriggerType/SceneTrigger/SceneAISpawnTrigger.h"
#include "TriggerTaskComponent/TriggerTaskComponent.h"

#include "Engine/World.h"

ASceneAISpawnTrigger::ASceneAISpawnTrigger( const FObjectInitializer& ObjectInitializer ):
	Super(ObjectInitializer)
{
}

void ASceneAISpawnTrigger::ComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	Super::ComponentHit(HitComponent, OtherActor, OtherComp, NormalImpulse, Hit);

	
}
void ASceneAISpawnTrigger::ComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::ComponentBeginOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
	//TriggerTaskComponent->StartTask(true);
}
void ASceneAISpawnTrigger::ComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	Super::ComponentEndOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex);
}

