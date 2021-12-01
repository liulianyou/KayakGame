#include "GameOverCondition/CheckGameOver_Disconnect.h"
#include "TriggerDefinition.h"
#include "GameFramework/PlayerController.h"

UCheckGameOver_Disconnect::UCheckGameOver_Disconnect(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

	

}

bool UCheckGameOver_Disconnect::NativeEvaluator()
{
	bool Result = false;

	for(int i = 0; i < CharactersInfo.Num(); i++)
	{
		if (CharactersInfo[i].CheckCount == 0)
		{
			Result = true;
		}
		CharactersInfo[i].CheckCount++;

		if (CharactersInfo[i].CheckCount == INT_MAX)
		{
			CharactersInfo.RemoveAt(i--);
		}
	}

	return Result;
}


void UCheckGameOver_Disconnect::NativeInitialize(UObject* OwnerObject)
{
	Super::NativeInitialize(OwnerObject);

	if (!HasAnyFlags(RF_ClassDefaultObject))
	{
		DelegateHandle = FTriggerNeededDelegate::DisconnectNativeEvent.AddUObject(this, &UCheckGameOver_Disconnect::DisconnectEventCallback);
	}

}

void UCheckGameOver_Disconnect::NativeReset()
{
	//When this condition do not pass then we can treat it invisible, so don't need to reset
	if (GetLastEvaluatorResult() == false)
	{
		return;
	}

	Super::NativeReset();

	CharactersInfo.Empty();
}

void UCheckGameOver_Disconnect::BeginDestroy()
{
	Super::BeginDestroy();

	if (DelegateHandle.IsValid())
	{
		FTriggerNeededDelegate::DisconnectNativeEvent.Remove(DelegateHandle);
		DelegateHandle.Reset();
	}
}

void UCheckGameOver_Disconnect::DisconnectEventCallback(AActor* Actor)
{
	APlayerController* PC = Cast<APlayerController>(Actor);

	if (PC != nullptr)
	{
		AddGameOverPlayer(PC);

		NotifyToEvaluate();
	}
}

void UCheckGameOver_Disconnect::OnPlayerControllerDestroyed(AActor* Actor)
{
	APlayerController* PC = Cast<APlayerController>(Actor);

	if (PC != nullptr)
	{
		RemoveGameOverPlayer(PC);
	}
}

void UCheckGameOver_Disconnect::AddGameOverPlayer(APlayerController* PlayerController)
{
	if (PlayerController == nullptr)
		return;

	Super::AddGameOverPlayer(PlayerController);

	FPlayerGameOverDisconnectInfo Info;
	PlayerController->OnDestroyed.AddDynamic(this, &UCheckGameOver_Disconnect::OnPlayerControllerDestroyed);

	Info.Player = PlayerController->GetPawn();
	Info.CheckCount = 0;
	CharactersInfo.Add(Info);
}

void UCheckGameOver_Disconnect::RemoveGameOverPlayer(APlayerController* PlayerController)
{
	if (PlayerController == nullptr)
		return;

	for (int i = 0; i < CharactersInfo.Num(); i++)
	{
		if (CharactersInfo[i].Player == PlayerController->GetPawn())
		{
			CharactersInfo.RemoveAt(i--);
		}
	}
}