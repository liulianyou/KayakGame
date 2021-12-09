#include "AvatarCommandGroup.h"
#include "AvatarCommandDataBase.h"

UAvatarCommandGroup::UAvatarCommandGroup(const FObjectInitializer& ObjectInitialzier)
	:Super(ObjectInitialzier)
{

}

void UAvatarCommandGroup::Initialize(UObject* ObjectOwner)
{
	Super::Initialize(ObjectOwner);
}

void UAvatarCommandGroup::GetAllCommandDatas(TArray<UAvatarCommandDataBase*>& CommandDatas)
{
	CommandDatas.Empty();

	CommandDatas.Append(Commands);
}

void UAvatarCommandGroup::ExecuteCommands(const TArray<UObject*>& Targets, UAvatarCommandDataBase* AvatarCommand /*= nullptr*/)
{
	if (AvatarCommand == nullptr)
	{
		for (auto Command : Commands)
		{
			if(Command == nullptr || !Command->CanExecute())
				continue;

			Command->Execute(Targets);
		}
	}
	else if(AvatarCommand->CanExecute())
	{
		AvatarCommand->Execute(Targets);
	}

	Super::ExecuteCommands(Targets, AvatarCommand);
}

void UAvatarCommandGroup::StopCommands(const TArray<UObject*>& Targets, UAvatarCommandDataBase* AvatarCommand /*= nullptr*/)
{
	if (AvatarCommand == nullptr)
	{
		for (auto Command : Commands)
		{
			if (Command == nullptr)
				continue;
			Command->Stop(Targets);
		}
	}
	else
	{
		AvatarCommand->Stop(Targets);
	}

	Super::StopCommands(Targets, AvatarCommand);
}

bool UAvatarCommandGroup::IsAllCommandFinished_Implementation()
{
	bool IsAllCommandFinished = true;

	for (auto Command : Commands)
	{
		if (Command == nullptr)
			continue;

		if (Command->GetCurrentExecuteState() != ECommandExecuteState::Stopped && Command->GetCurrentExecuteState() != ECommandExecuteState::Finished)
		{
			IsAllCommandFinished = false;

			break;
		}
	}

	return IsAllCommandFinished;
}