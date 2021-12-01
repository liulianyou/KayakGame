#pragma once

/*
* Author:	Liulianyou
* Time:		2020/7/6
* Purpose:	The base class for our triggers in our project
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerType/SceneTrigger/SceneTriggerInterface.h"
#include "NewTriggerBase.h"

#include "SceneTrigger.generated.h"

class UShapeComponent;

/*
* Base class of our triggers which will put in the scene, not the component of other actors.
*/
UCLASS(BlueprintType, Category = "GaiaTrigger|SceneTrigger")
class TRIGGERRUNTIME_API ASceneTrigger : public ANewTriggerBase , public ISceneTriggerInterface
{
	GENERATED_UCLASS_BODY()
public:

	virtual void BeginDestroy() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
public:

	UFUNCTION()
	virtual void ComponentHit( UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	UFUNCTION()
	virtual void ComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	virtual void ComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	virtual bool CanbeToggled() const override;

	UFUNCTION(BlueprintNativeEvent, Category = "GaiaTrigger")
	void OnComponentBeginOverlap(AActor* OtherActor);

	//When other actor hit this trigger
	UFUNCTION(BlueprintNativeEvent, Category = "GaiaTrigger")
	void OnComponentHit(AActor* OtherActors);


	//When other actor leave this trigger
	UFUNCTION(BlueprintNativeEvent, Category = "GaiaTrigger")
	void OnComponentEndOverlap(AActor* OtherActor);

public:
	UShapeComponent* GetCollisionComponent() const { return CollisionComponent; }

#if WITH_EDITORONLY_DATA

	UBillboardComponent* GetSpriteComponent() const { return SpriteComponent; }
#endif

private:

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category ="TriggerRunTime", meta = (AllowPrivateAccess = "true"))
	UShapeComponent* CollisionComponent;

#if WITH_EDITORONLY_DATA
	/** Billboard used to see the trigger in the editor */
	UPROPERTY()
	UBillboardComponent* SpriteComponent;
#endif

};