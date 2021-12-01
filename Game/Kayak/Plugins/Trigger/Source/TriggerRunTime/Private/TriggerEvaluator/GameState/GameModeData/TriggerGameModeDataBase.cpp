#include "GameModeData/TriggerGameModeDataBase.h"
#include "Engine/World.h"
#include "CheckGameModeState.h"

UTriggerGameModeDataBase::UTriggerGameModeDataBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

AGameModeBase* UTriggerGameModeDataBase::GetGameMode() const
{
	if(GetWorld() == nullptr)
		return nullptr;

	return GetWorld()->GetAuthGameMode();
}

AGameStateBase* UTriggerGameModeDataBase::GetGameState() const
{
	if (GetWorld() == nullptr)
		return nullptr;

	return GetWorld()->GetGameState();
}

bool UTriggerGameModeDataBase::IsPassed()
{
	if (GetClass()->IsFunctionImplementedInScript(TEXT("OnIsPassed")))
	{
		return OnIsPassed();
	}

	return false;
}

void UTriggerGameModeDataBase::Initialize(UCheckGameModeState* OwnerObject)
{
	if (GetClass()->IsFunctionImplementedInScript(TEXT("OnInitialize")))
	{
		OnInitialize(OwnerObject);
	}
	
	Owner = OwnerObject;
}

void UTriggerGameModeDataBase::Reset()
{
	if (GetClass()->IsFunctionImplementedInScript(TEXT("OnReset")))
	{
		OnReset();
	}
}

void UTriggerGameModeDataBase::NotifyOwnerToEvaluate()
{
	if(Owner == nullptr)
		return;

	Owner->NotifyedByInspectDataToEvaluate();
}
