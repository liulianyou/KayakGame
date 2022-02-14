#pragma once

/*
* Author:	Liulianyou
* Time:		2020/9/18
* Purpose:	Check weather the target actor have been overlaped
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "FilterBase.h"

#include "EvaluatorCondition.h"

#include "CheckActorOverlaped.generated.h"

class AActor;

UCLASS(BlueprintType)
class EVALUATOR_API UCheckActorOverlaped : public UEvaluatorCondition
{
	GENERATED_UCLASS_BODY()

public:
	virtual void NativeInitialize( UObject* OwnerObject ) override;
	virtual bool NativeEvaluator(bool DoLocalCheck = false) override;
	virtual void NativeReset() override;
	virtual void BeginDestroy() override;

public:

	UFUNCTION(BlueprintCallable, Category = "Overlap")
	AActor* GetTargetActor() const;

	UFUNCTION(BlueprintCallable, Category = "Overlap")
	void SetTargetActor( AActor* NewActor );

public:
	UFUNCTION()
	void OnActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
	UFUNCTION()
	void OnActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
	UFUNCTION()
	void OnActorDestroyed(AActor* DestroyedActor);
public:
	
	/*
	* Try to inspect which actor overlap the target actor
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Category = "Overlaped")
	TArray<UFilterBase*> OverlapFilters;

private:

	/*
	* The target actor which we should check weather it have been overlapped
	* If this value is none I will try to find the actor who contain this task immediately
    */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Category = "Overlaped", meta = (AllowPrivateAccess = true))
	TSoftObjectPtr<AActor> TargetActor;

private:
	
	/*
	* As the target  actor is on soft object ptr and which means 
	*/
	AActor* PrivateActor;
};
