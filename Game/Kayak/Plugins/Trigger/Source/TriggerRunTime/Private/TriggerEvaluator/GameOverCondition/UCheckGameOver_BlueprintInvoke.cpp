#include "GameOverCondition/CheckGameOver_BlueprintInvoke.h"

UCheckGameOver_BlueprintInvoke::UCheckGameOver_BlueprintInvoke(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	
}

void UCheckGameOver_BlueprintInvoke::NativeInitialize(UObject* OwnerObject)
{
	Super::NativeInitialize(OwnerObject);
}

bool UCheckGameOver_BlueprintInvoke::NativeEvaluator(bool DoLocalCheck /*= false*/)
{
	return true;
}

