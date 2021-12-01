#include "GameOverCondition/CheckGameOverBase.h"
#include "GameOverCondition/CheckGameOverSuccessBase.h"
#include "CheckGameOverFailedBase.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"

struct FGameOverConditionDelegate
{
	/*
	* when one game over condition passed then it will broad cast to make other game over condition to update its local data
	*/
	DECLARE_MULTICAST_DELEGATE_OneParam(FGameOverConditionPass, UCheckGameOverBase* /* OtherGameOverCondition */);
	static FGameOverConditionPass GameOverConditionPass;
};

FGameOverConditionDelegate::FGameOverConditionPass FGameOverConditionDelegate::GameOverConditionPass;

UCheckGameOverBase::UCheckGameOverBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}


UCheckGameOverSuccessBase::UCheckGameOverSuccessBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}

UCheckGameOverFailedBase::UCheckGameOverFailedBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}


//Override Evaluator Base

bool UCheckGameOverBase::Evaluator()
{
	bool Result = Super::Evaluator();

	if (Result)
	{
		FGameOverConditionDelegate::GameOverConditionPass.Broadcast(this);
	}

	return Result;
}

bool UCheckGameOverBase::NativeEvaluator()
{
	return Super::NativeEvaluator();
}

void UCheckGameOverBase::NativeInitialize(UObject* OwnerObject)
{
	Super::NativeInitialize(OwnerObject);
	Players.Empty();

	if (!FGameOverConditionDelegate::GameOverConditionPass.IsBoundToObject(this))
	{
		GameOverConditionPassHandle = FGameOverConditionDelegate::GameOverConditionPass.AddUObject(this, &UCheckGameOverBase::GameOverConditionPassCallback);
	}
}

void UCheckGameOverBase::NativeReset()
{
	Super::NativeReset();

	Players.Empty();
}

void UCheckGameOverBase::BeginDestroy()
{
	Super::BeginDestroy();

	Players.Empty();

	if (FGameOverConditionDelegate::GameOverConditionPass.IsBoundToObject(this) && GameOverConditionPassHandle.IsValid())
	{
		FGameOverConditionDelegate::GameOverConditionPass.Remove(GameOverConditionPassHandle);

		GameOverConditionPassHandle.Reset();
	}
}

void UCheckGameOverBase::AddGameOverPlayer(APlayerController* PlayerController)
{
	if (PlayerController == nullptr)
	{
		return ;
	}

	if (!PlayerController->OnDestroyed.IsAlreadyBound(this, &UCheckGameOverBase::OnControllerDestroyedCallback))
	{
		PlayerController->OnDestroyed.AddDynamic(this, &UCheckGameOverBase::OnControllerDestroyedCallback);
	}

	Players.AddUnique(PlayerController);
}

void UCheckGameOverBase::RemoveGameOverPlayer(APlayerController* PlayerController)
{
	if (PlayerController == nullptr)
	{
		return;
	}

	Players.Remove(PlayerController);
}

void UCheckGameOverBase::OnControllerDestroyedCallback(AActor* Actor)
{
	RemoveGameOverPlayer(Cast<APlayerController>(Actor));
}

TArray<APlayerController*> UCheckGameOverBase::GetAllPlayerControllersInWorld()
{
	TArray<APlayerController*> Result;

	UWorld* World = GetWorld();

	if(World == nullptr)
		World = GWorld;

	for (auto IT = World->GetPlayerControllerIterator(); IT; ++IT)
	{
		Result.Add(IT->Get());
	}

	return Result;
}

void UCheckGameOverBase::GameOverConditionPassCallback(UCheckGameOverBase* OtherGameOverCondition)
{
	if (OtherGameOverCondition == nullptr || OtherGameOverCondition == this)
		return;

	TArray<APlayerController*>& Controllers = OtherGameOverCondition->GetGameOverPlayers();

	for (int i = 0; i < Controllers.Num(); i++)
	{
		RemoveGameOverPlayer(Controllers[i]);
	}
}