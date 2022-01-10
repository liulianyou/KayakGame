#include "TT_GameOver.h"
#include "GameFramework/GameMode.h"
#include "TriggerBlueprintLib.h"
#include "TriggerStatics/TS_AIStatics.h"
#include "TriggerDefinition.h"
#include "GameOverCondition/CheckGameOver_Disconnect.h"
#include "GameOverCondition/CheckGameOver_Exist.h"
#include "GameOverCondition/CheckGameOverFailedBase.h"
#include "GameOverCondition/CheckGameOverSuccessBase.h"
#include "TriggerEvaluator_OR.h"
#include "CheckTaskRepeatWithNum.h"
#include "TTSS_AnyConditionMeet.h"


UTT_GameOver::UTT_GameOver(const FObjectInitializer& ObjectInitialize)
	:Super(ObjectInitialize)
{
	//By default this task should be execute automatically
	ExecuteAutomatically = false;

	CanEverTick = false;

	//By default it is created on the client
	RunType = ERunType::ERunType_RunOnServer;

	//As the game over can be toggled for more than once in the server for different player
	//I need to make sure this task will always run until the map is unloaded
	if (!HasAnyFlags(RF_ClassDefaultObject))
	{
		ChildTask.Add(this);
	}
}

void UTT_GameOver::InitializeTask(UTriggerTaskComponentBase* Owner, bool AsTemplate, bool IsDynamicTask)
{
	Super::InitializeTask(Owner, AsTemplate, IsDynamicTask);

	UCheckTaskRepeatWithNum* NumRepeat = nullptr;

	if (GetRepeatConditions() == nullptr)
	{
		SetRepeatConditions(NewObject<UTTSS_AnyConditionMeet>(this));
		
		UTriggerEvaluator_OR* Operator = NewObject<UTriggerEvaluator_OR>(this, UTriggerEvaluator_OR::StaticClass());
		NumRepeat = NewObject<UCheckTaskRepeatWithNum>(this, UCheckTaskRepeatWithNum::StaticClass());
		Operator->Condtions.Add(NumRepeat);

		GetRepeatConditions()->AddNewConditionAndStyle(Operator, nullptr);

		if (NumRepeat != nullptr)
		{
			NumRepeat->RepeatTaskData.State = ETriggerTaskState::ETriggerTaskState_Finished;
			NumRepeat->RepeatTaskData.TriggerTask.SoftTaskObject = this;
		}
	}
}

bool UTT_GameOver::CanBeToggled()
{
	return Super::CanBeToggled();
}

bool UTT_GameOver::Prepare()
{
	if(!Super::Prepare())
		return false;

	GameOverInfo.Clear();

	Active();

	if (GetStartConditions() != nullptr)
	{
		//When this game over is active I need to reset the Prerequisite
		ResetCondition(GetStartConditions());
	}

	Finished();

	return true;
}


void UTT_GameOver::Active(bool ForceActive )
{
	Super::Active(ForceActive);

	GameOverInfo.URL = "-map=" + NextMapName;

	if (GetStartConditions() != nullptr)
	{
		TArray<UEvaluatorBase*> GameOverConfiitions;
		GetStartConditions()->GetPassedCondition(GameOverConfiitions);

		for (int i = 0; i < GameOverConfiitions.Num(); i++)
		{
			GameOverInfo.GameOverCondtions.Add(DuplicateObject<UEvaluatorBase>(GameOverConfiitions[i], GetTransientPackage()));
		}
	}

	FString GameOverReason;

	for (int i = 0; i < GameOverInfo.GameOverCondtions.Num(); i++)
	{
		GameOverReason += GameOverInfo.GameOverCondtions[i]->GetClass()->GetName();

		if (i != GameOverInfo.GameOverCondtions.Num() - 1)
		{
			GameOverReason += TEXT("||");
		}
	}

	UE_LOG(LogTrigger, Warning, TEXT("GameOver: %s"), *GameOverReason);
}


bool UTT_GameOver::ReceiveNotifyFromOthersComponent(UTriggerTaskComponentBase* OtherComponent, UTriggerTaskBase* SenderTask, UOperationInformationBase* StartOperationInfo)
{
	bool Result = Super::ReceiveNotifyFromOthersComponent(OtherComponent, SenderTask, StartOperationInfo);

	if (Result)
	{
		Prepare();
	}

	return Result;
}

void UTT_GameOver::Pause(UOperationInformationBase* PauseOperationInfo)
{
	Super::Pause(PauseOperationInfo);
}

void UTT_GameOver::Resume(UOperationInformationBase* ResumeOperationInfo)
{
	Super::Resume(ResumeOperationInfo);
}

void UTT_GameOver::Skip(UOperationInformationBase* SkipOperationInfo)
{
	Super::Skip(SkipOperationInfo);
}

void UTT_GameOver::Finished(UOperationInformationBase* FinishOperationInfo)
{
	//Before finish game over task I need to reset the start conditions
	if (GetStartConditions() != nullptr)
	{
		//When this game over is active I need to reset the Prerequisite
		ResetCondition(GetStartConditions());
	}

	Super::Finished(FinishOperationInfo);

	//When this task finished it can notify the outer that game over
	NotifyGameOver();
}

void UTT_GameOver::PostFinished()
{
	Super::PostFinished();
}

void UTT_GameOver::TryToSleep(UOperationInformationBase* Causer /* = nullptr */)
{
	Super::TryToSleep(Causer);
}

void UTT_GameOver::TryToStop(UOperationInformationBase* Causer /* = nullptr */)
{
	Super::TryToStop(Causer);
}

void UTT_GameOver::Reset(UOperationInformationBase* Operation /*= nullptr*/)
{
	Super::Reset(Operation);
}

void UTT_GameOver::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

bool UTT_GameOver::CanTick()
{
	bool Result = Super::CanTick();

	return Result;
}

void UTT_GameOver::NotifyGameOver()
{
	if (TryToGetOwnerActor() != nullptr && TryToGetOwnerActor()->HasAuthority())
	{
		FTriggerDelegate::GameOverNativeDelegate.Broadcast(this, GameOverInfo);
	}
}
