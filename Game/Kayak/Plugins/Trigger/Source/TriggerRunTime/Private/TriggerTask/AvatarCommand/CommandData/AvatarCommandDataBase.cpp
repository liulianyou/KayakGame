#include "AvatarCommandDataBase.h"
#include "Engine/BlueprintGeneratedClass.h"
#include "AvatarCommandGroupBase.h"

UAvatarCommandDataBase::UAvatarCommandDataBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	
}

void UAvatarCommandDataBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	/*
	* Make the replicator to inspect the replicated properties in the BP task
	*/
	UBlueprintGeneratedClass* BPClass = Cast<UBlueprintGeneratedClass>(GetClass());
	if (BPClass != NULL)
	{
		BPClass->GetLifetimeBlueprintReplicationList(OutLifetimeProps);
	}
}

void UAvatarCommandDataBase::SetNewExecuteState(ECommandExecuteState NewCurrentState)
{
	if(CurrentState == NewCurrentState)
		return;

	LastState = CurrentState;
	CurrentState = NewCurrentState;

	StateChangeEvent.Broadcast(this);
}

void UAvatarCommandDataBase::Initialize(UObject* ObejctOwner)
{
	SetNewExecuteState(ECommandExecuteState::Start);

	Owner = ObejctOwner;

	OnInitialize(ObejctOwner);
}

UAvatarCommandGroupBase* UAvatarCommandDataBase::TryToGetAvatarCommandGroup() const
{
	return Cast<UAvatarCommandGroupBase>(GetOwner());
}

void UAvatarCommandDataBase::Finish()
{
	SetNewExecuteState(ECommandExecuteState::Finished);

	OnFinish();
}

bool UAvatarCommandDataBase::CanExecute_Implementation() const
{
	if( CurrentState == ECommandExecuteState::Start || CurrentState == ECommandExecuteState::Executing )
		return true;
	else
	{
		return false;
	}
}

void UAvatarCommandDataBase::Pause()
{
	SetNewExecuteState(ECommandExecuteState::Pause);

	OnPause();
}

void UAvatarCommandDataBase::Stop(const TArray<UObject*>& Targets)
{
	SetNewExecuteState(ECommandExecuteState::Stopped);

	OnStop(Targets);
}

void UAvatarCommandDataBase::Reset()
{
	SetNewExecuteState(ECommandExecuteState::Start);

	OnReset();
}

void UAvatarCommandDataBase::Resume()
{
	SetNewExecuteState(LastState);

	OnResume();
}

void UAvatarCommandDataBase::Execute(const TArray<UObject*>& Targets)
{
	SetNewExecuteState(ECommandExecuteState::Executing);

	OnExecute(Targets);
}