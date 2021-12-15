#include "GameOverCondition/CheckGameOverFailed_AllPlayerDead.h"
#include "TriggerDefinition.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/GameMode.h"
#include "TimerManager.h"
#include "Engine/World.h"

UCheckGameOverFailed_AllPlayerDead::UCheckGameOverFailed_AllPlayerDead(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	RegisterPawnTimeHandle.Invalidate();

}

void FPlayerGameOverFalidInfo::Reset()
{
	IsDead = false;

	if (DeadDelegateHandle.IsValid() && Player != nullptr)
	{
		if (Player->GetClass()->ImplementsInterface(UDeadSupportInterface::StaticClass()))
		{
			IDeadSupportInterface* RespawnInterface = Cast<IDeadSupportInterface>(Player);

			if (RespawnInterface != nullptr)
			{
				RespawnInterface->OnCharacterEnterDead.Remove(DeadDelegateHandle);
			}
		}
	}

	DeadDelegateHandle.Reset();

	Player = nullptr;
}


bool UCheckGameOverFailed_AllPlayerDead::NativeEvaluator()
{
	bool Result = false;

	//If the value is true means this condition should always return true
	if(DoesMeetCondition)
		return true;

	//When not character info 
	if (CharactersInfo.Num() == 0 || 
		GetWorld() == nullptr	||
		//When this evaluator is run on the client which have server mode
		GetWorld()->GetAuthGameMode() == nullptr ||
		//When there are no player login this server
		GetWorld()->GetAuthGameMode()->GetNumPlayers() == 0)
	{
		//make this evaluator return false value;
		return Result;
	}

	int DeadCharacterNum = 0;

	if (GetWorld() != nullptr && GetWorld()->GetAuthGameMode() != nullptr)
	{
		for (FConstPlayerControllerIterator Iterator = GetWorld()->GetPlayerControllerIterator(); Iterator; ++Iterator)
		{
			APlayerController* PlayerActor = Iterator->Get();
			if (PlayerActor && PlayerActor->PlayerState && !GetWorld()->GetAuthGameMode()->MustSpectate(PlayerActor))
			{
				for (int i = 0; i < CharactersInfo.Num(); i++)
				{
					if (CharactersInfo[i].Player == PlayerActor->GetPawn())
					{
						if (CharactersInfo[i].IsDead)
						{
							DeadCharacterNum++;
						}
					}
				}
			}
		}

		if (DeadCharacterNum == GetWorld()->GetAuthGameMode()->GetNumPlayers())
		{
			Result = true;
		}
		else
		{
			Result = false;
		}
	}

	return Result;
}


void UCheckGameOverFailed_AllPlayerDead::NativeInitialize(UObject* OwnerObject)
{
	Super::NativeInitialize(OwnerObject);

	if (!HasAnyFlags(RF_ClassDefaultObject))
	{
		if (GetWorld())
		{
			ActorSawnDelegateHandle = GetWorld()->AddOnActorSpawnedHandler(FOnActorSpawned::FDelegate::CreateUObject(this, &UCheckGameOverFailed_AllPlayerDead::OnActorSpawned));
		}
	}
}

void UCheckGameOverFailed_AllPlayerDead::NativeReset()
{
	Super::NativeReset();

	for (int i = 0; i < CharactersInfo.Num(); i++)
	{
		CharactersInfo[i].Reset();
	}

	if (CheckTimerHandle.IsValid())
	{
		GetWorld()->GetTimerManager().ClearTimer(CheckTimerHandle);
		CheckTimerHandle.Invalidate();
	}

	RemainCheckTime = CheckTimeGranularity;
}

void UCheckGameOverFailed_AllPlayerDead::BeginDestroy()
{
	Super::BeginDestroy();

	if (ActorSawnDelegateHandle.IsValid() && GetWorld())
	{
		GetWorld()->RemoveOnActorSpawnedHandler(ActorSawnDelegateHandle);
		ActorSawnDelegateHandle.Reset();
	}
}

void UCheckGameOverFailed_AllPlayerDead::OnActorSpawned(AActor* Actor)
{
	APawn* Pawn = Cast<APawn>(Actor);

	//Only focused on the player
	if (Pawn != nullptr)
	{
		//When the target pawn's controller is null I need to check in the feature, to find weather this pawn is valid;
		if (Pawn->GetController() == nullptr)
		{
			if (!RegisterPawnTimeHandle.IsValid())
			{
				GetWorld()->GetTimerManager().SetTimer(RegisterPawnTimeHandle, this, &UCheckGameOverFailed_AllPlayerDead::RegisterPawnTimeDelegate, 0.03f, true);
			}

			DeferredPawns.Add(Pawn);

			if (!Pawn->OnDestroyed.IsAlreadyBound(this, &UCheckGameOverFailed_AllPlayerDead::ActorDestroyCallback))
			{
				Pawn->OnDestroyed.AddDynamic(this, &UCheckGameOverFailed_AllPlayerDead::ActorDestroyCallback);
			}
		}
		else
		{
			RegisterPawn(Pawn);
		}
	}
}

void UCheckGameOverFailed_AllPlayerDead::RegisterPawnTimeDelegate()
{
	if (DeferredPawns.Num() == 0 && RegisterPawnTimeHandle.IsValid())
	{
		GetWorld()->GetTimerManager().ClearTimer(RegisterPawnTimeHandle);
	}

	for (int i = 0; i < DeferredPawns.Num(); i++)
	{
		if (DeferredPawns[i] == nullptr || !DeferredPawns[i]->IsValidLowLevel())
		{
			continue;
		}

		if (RegisterPawn(DeferredPawns[i]))
		{
			DeferredPawns.RemoveAt(i--);
		}
	}
}

bool UCheckGameOverFailed_AllPlayerDead::RegisterPawn(APawn* Pawn)
{
	if (Cast<APlayerController>(Pawn->GetController()) == nullptr)
		return false;

	if (!Pawn->OnDestroyed.IsAlreadyBound(this, &UCheckGameOverFailed_AllPlayerDead::ActorDestroyCallback))
	{
		Pawn->OnDestroyed.AddDynamic(this, &UCheckGameOverFailed_AllPlayerDead::ActorDestroyCallback);
	}

	if (Pawn->GetClass()->ImplementsInterface(UDeadSupportInterface::StaticClass()))
	{
		IDeadSupportInterface* RespawnInterface = Cast<IDeadSupportInterface>(Pawn);

		if (RespawnInterface != nullptr)
		{
			const FPlayerGameOverFalidInfo* PlayerGameOverFalidInfo = CharactersInfo.FindByPredicate([&](const FPlayerGameOverFalidInfo& Data) {
				if (Data.Player == Pawn)
				{
					return true;
				}
				else
				{
					return false;
				}
			});

			if (PlayerGameOverFalidInfo == nullptr)
			{
				FPlayerGameOverFalidInfo Info;
				Info.Player = Pawn;
				Info.DeadDelegateHandle = RespawnInterface->OnCharacterPreEnterDead.AddUObject(this, &UCheckGameOverFailed_AllPlayerDead::OnCharacterDead);
				Info.RespawnHandle = RespawnInterface->OnCharacterConfirmDead.AddUObject(this, &UCheckGameOverFailed_AllPlayerDead::OnCharacterRespawn);
				CharactersInfo.Add(Info);
			}
		}
		else
		{
			UE_LOG(LogTrigger, Warning, TEXT("Please make the native pawn class inherited form interface:IDeadSupportInterface, Or CheckGameOver_Faild condition will always return true "));
		}
	}

	return true;
}

void UCheckGameOverFailed_AllPlayerDead::ActorDestroyCallback(AActor* DestroyedActor)
{
	int Index = DeferredPawns.Find(Cast<APawn>(DestroyedActor));

	if (Index != INDEX_NONE)
	{
		DeferredPawns.RemoveAt(Index);
	}

	for (int i = 0; i < CharactersInfo.Num(); i++)
	{
		if (CharactersInfo[i].Player == DestroyedActor)
		{
			CharactersInfo.RemoveAt(i--);
		}
	}
}

void UCheckGameOverFailed_AllPlayerDead::OnCharacterDead(AActor* Actor)
{
	const FPlayerGameOverFalidInfo* PlayerGameOverFalidInfo = CharactersInfo.FindByPredicate([&](const FPlayerGameOverFalidInfo& Data) {
		if (Data.Player == Actor)
		{
			return true;
		}
		else
		{
			return false;
		}
	});

	if(PlayerGameOverFalidInfo == nullptr)
		return;

	for (auto It = CharactersInfo.CreateIterator(); It; ++It)
	{
		if (It->Player == Actor)
		{
			It->IsDead = true;

			AddGameOverPlayer(Cast<APlayerController>(It->Player->GetController()));

			if (!CheckTimerHandle.IsValid())
			{
				GetWorld()->GetTimerManager().SetTimer(CheckTimerHandle, this, &UCheckGameOverFailed_AllPlayerDead::CheckPlayerDeadTimerCallback, 0.03, true);
			}
		
			break;
		}
	}
}

void UCheckGameOverFailed_AllPlayerDead::OnCharacterRespawn(AActor* Actor)
{
	for (auto It = CharactersInfo.CreateIterator(); It; ++It)
	{
		if (It->Player == Actor)
		{
			It->IsDead = false;

			if (Actor->GetClass()->ImplementsInterface(UDeadSupportInterface::StaticClass()))
			{
				IDeadSupportInterface* RespawnInterface = Cast<IDeadSupportInterface>(Actor);

				if (RespawnInterface != nullptr)
				{
					if (!RespawnInterface->OnCharacterPreEnterDead.IsBoundToObject(this))
					{
						It->DeadDelegateHandle = RespawnInterface->OnCharacterPreEnterDead.AddUObject(this, &UCheckGameOverFailed_AllPlayerDead::OnCharacterDead);
					}
				}
			}
		}
	}
}

void UCheckGameOverFailed_AllPlayerDead::CheckPlayerDeadTimerCallback()
{
	bool NeedResetCheckTimerHandle = false;

	if (NotifyToEvaluate())
	{
		NeedResetCheckTimerHandle = true;
	}
	
	if (RemainCheckTime > 0)
	{
		RemainCheckTime -= 0.03f;
	}
	else
	{
		NeedResetCheckTimerHandle = true;
	}

	if (NeedResetCheckTimerHandle)
	{
		GetWorld()->GetTimerManager().ClearTimer(CheckTimerHandle);

		CheckTimerHandle.Invalidate();

		RemainCheckTime = CheckTimeGranularity;
	}
}

void UCheckGameOverFailed_AllPlayerDead::OnGameOverFaildEvent(TArray<AActor*>& Actor)
{
	DoesMeetCondition = true;
}

void UCheckGameOverFailed_AllPlayerDead::AddGameOverPlayer(APlayerController* PlayerController)
{
	Super::AddGameOverPlayer(PlayerController);
}

void UCheckGameOverFailed_AllPlayerDead::RemoveGameOverPlayer(APlayerController* PlayerController)
{
	Super::RemoveGameOverPlayer(PlayerController);

	if (PlayerController == nullptr)
		return;

	for (int i = 0; i < CharactersInfo.Num(); i++)
	{
		if (CharactersInfo[i].Player == PlayerController->GetPawn())
		{
			if (CharactersInfo[i].DeadDelegateHandle.IsValid())
			{
				IDeadSupportInterface* RespawnInterface = Cast<IDeadSupportInterface>(CharactersInfo[i].Player);

				if (RespawnInterface != nullptr)
				{
					RespawnInterface->OnCharacterEnterDead.Remove(CharactersInfo[i].DeadDelegateHandle);
				}
				CharactersInfo[i].DeadDelegateHandle.Reset();
			}

			if (CharactersInfo[i].Player)
			{
				if (CharactersInfo[i].Player->OnDestroyed.IsAlreadyBound(this, &UCheckGameOverFailed_AllPlayerDead::ActorDestroyCallback))
				{
					CharactersInfo[i].Player->OnDestroyed.RemoveDynamic(this, &UCheckGameOverFailed_AllPlayerDead::ActorDestroyCallback);
				}
			}

			CharactersInfo.RemoveAt(i--);
		}
	}

	for (int i = 0; i < DeferredPawns.Num(); i++)
	{
		if(DeferredPawns[i] == nullptr)
			continue;

		if (DeferredPawns[i]->OnDestroyed.IsAlreadyBound(this, &UCheckGameOverFailed_AllPlayerDead::ActorDestroyCallback))
		{
			DeferredPawns[i]->OnDestroyed.RemoveDynamic(this, &UCheckGameOverFailed_AllPlayerDead::ActorDestroyCallback);
		}

		DeferredPawns.RemoveAt(i--);
	}
}