#include "GameOverCondition/CheckGameOver_Exist.h"
#include "EvaluatorDefinition.h"
#include "GameFramework//PlayerController.h"
#include "GameFramework/GameMode.h"

UCheckGameOver_Exist::UCheckGameOver_Exist(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}

bool FExistPlayerInfo::operator==(const FExistPlayerInfo& OtherData)
{
	if(OtherData.Player == Player)
		return true;
	else
		return false;
}

bool UCheckGameOver_Exist::NativeEvaluator(bool DoLocalCheck /*= false*/)
{
	bool Result = false;

	if (ExistPlayerInfos.Num() > 0)
	{
		Result = true;
	}
	else
	{
		Result = false;
	}

	return Result;
}


void UCheckGameOver_Exist::NativeInitialize(UObject* OwnerObject)
{
	Super::NativeInitialize(OwnerObject);

	if (!HasAnyFlags(RF_ClassDefaultObject))
	{
		DelegateHandle = FEvaluatorNeededDelegate::ExitCurrentMapNativeEvent.AddUObject(this, &UCheckGameOver_Exist::ExistCurrentMapEventCallback);
	}
}

void UCheckGameOver_Exist::NativeReset()
{
	Super::NativeReset();

	ExistPlayerInfos.Empty();
}

void UCheckGameOver_Exist::BeginDestroy()
{
	Super::BeginDestroy();

	if (DelegateHandle.IsValid())
	{
		FEvaluatorNeededDelegate::ExitCurrentMapNativeEvent.Remove(DelegateHandle);
		DelegateHandle.Reset();
	}
}

void UCheckGameOver_Exist::ExistCurrentMapEventCallback(AActor* Causer, FString URL)
{
	if (Causer == nullptr)
	{
		if (GetWorld() != nullptr && GetWorld()->GetAuthGameMode() != nullptr)
		{
			for (FConstPlayerControllerIterator Iterator = GetWorld()->GetPlayerControllerIterator(); Iterator; ++Iterator)
			{
				APlayerController* PlayerActor = Iterator->Get();
				if (PlayerActor && PlayerActor->PlayerState && !GetWorld()->GetAuthGameMode()->MustSpectate(PlayerActor))
				{
					AddGameOverPlayer(PlayerActor);

					NotifyToEvaluate();
				}
			}
		}
		return;
	}	

	APlayerController* PC = Cast<APlayerController>(Causer);

	if (PC == nullptr)
	{
		APawn* Pawn = Cast<APawn>(Causer);

		if (Pawn != nullptr)
		{
			PC = Pawn->GetController<APlayerController>();
		}
	}

	if(PC == nullptr)
		return;
	
	AddGameOverPlayer(PC);

	NotifyToEvaluate();
}

void UCheckGameOver_Exist::AddGameOverPlayer(APlayerController* PlayerController)
{
	Super::AddGameOverPlayer(PlayerController);

	FExistPlayerInfo* Info = ExistPlayerInfos.FindByPredicate([&](const FExistPlayerInfo& PlayerInfo){
		if(PlayerInfo.Player == PlayerController)
			return true;
		else
			return false;
	});

	if (Info == nullptr)
	{
		FExistPlayerInfo ExistPlayerInfo;
		ExistPlayerInfo.Player = PlayerController;
		ExistPlayerInfo.CheckedCount = 0;

		ExistPlayerInfos.Add(ExistPlayerInfo);
	}
}

void UCheckGameOver_Exist::RemoveGameOverPlayer(APlayerController* PlayerController)
{
	Super::RemoveGameOverPlayer(PlayerController);

	for (int i = 0; i < ExistPlayerInfos.Num(); i++)
	{
		if (ExistPlayerInfos[i].Player == PlayerController)
		{
			ExistPlayerInfos.RemoveAt(i--);
		}
	}
}