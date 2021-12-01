#include "GameModeData/TriggerGameModeData.h"
#include "GameFramework/GameState.h"
#include "GameFramework/GameMode.h"

UIsGameInProgress::UIsGameInProgress(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

void UIsGameInProgress::Initialize(UCheckGameModeState* OwnerObject)
{
	Super::Initialize(OwnerObject);

	FGameModeEvents::OnGameModeMatchStateSetEvent().AddUObject(this, &UIsGameInProgress::OnGameModeMatchStateCallback);
}

bool UIsGameInProgress::IsPassed()
{
	if(Super::IsPassed())
		return true;

	if (AGameMode* GameMode = Cast<AGameMode>(GetGameMode()))
	{
		return GameMode->GetMatchState() == MatchState::InProgress;
	}
	else
	{
		AGameState* GameState = Cast<AGameState>(GetGameState());

		if (GameState == nullptr)
			return false;

		return GameState->IsMatchInProgress();
	}

	return false;
}

void UIsGameInProgress::OnGameModeMatchStateCallback(FName NewState)
{
	if (NewState == MatchState::InProgress)
	{
		NotifyOwnerToEvaluate();
	}
}