#include "TT_AvatarCommand.h"
#include "AvatarAccessRuleBase.h"
#include "AvatarCommandGroupBase.h"
#include "Engine/ActorChannel.h"

UTT_AvatarCommand::UTT_AvatarCommand(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	
}

bool UTT_AvatarCommand::ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags)
{
	bool WriteSomething = Super::ReplicateSubobjects( Channel, Bunch, RepFlags );

	if (GroupCommands)
	{
		WriteSomething |= GroupCommands->ReplicateSubobjects(Channel, Bunch, RepFlags);
		WriteSomething |= Channel->ReplicateSubobject(GroupCommands, *Bunch, *RepFlags);
	}

	return WriteSomething;
}

bool UTT_AvatarCommand::CanBeToggled()
{
	return Super::CanBeToggled();
}

bool UTT_AvatarCommand::Prepare()
{
	if( !Super::Prepare() )
		return false;

	Active();

	return true;
}

void UTT_AvatarCommand::Active(bool ForceActive /* = true */)
{
	Super::Active(ForceActive);

	if (GroupCommands != nullptr)
	{
		GroupCommands->ExecuteCommands(Avatars);
	}

	/*
	* This task will not finished automatically after active state 
	*/
}

bool UTT_AvatarCommand::ReceiveNotifyFromOthersComponent(UTriggerTaskComponentBase* OtherComponent, UTriggerTaskBase* SenderTask, UOperationInformationBase* StartOperationInfo)
{
	if(!Super::ReceiveNotifyFromOthersComponent(OtherComponent, SenderTask, StartOperationInfo))
		return false;

	Prepare();

	return true;
}

void UTT_AvatarCommand::Finished(UOperationInformationBase* FinishOperationInfo)
{
	if (GroupCommands != nullptr)
		GroupCommands->StopCommands(Avatars);

	Super::Finished(FinishOperationInfo);
}

void UTT_AvatarCommand::PostFinished()
{
	Super::PostFinished();
}

void UTT_AvatarCommand::TryToSleep(UOperationInformationBase* Operation /*= nullptr*/)
{
	Super::TryToSleep(Operation);
}

void UTT_AvatarCommand::TryToStop(UOperationInformationBase* Operation /* = nullptr */)
{
	Super::TryToStop(Operation);

	if(GroupCommands != nullptr)
		GroupCommands->StopCommands(Avatars);
}

void UTT_AvatarCommand::Skip(UOperationInformationBase* SkipOperationInfo /* = nullptr */)
{
	Super::Skip(SkipOperationInfo);
}

void UTT_AvatarCommand::Reset(UOperationInformationBase* Operation /*= nullptr*/)
{
	Super::Reset(Operation);

	if (GroupCommands != nullptr)
		GroupCommands->Reset();
}
void UTT_AvatarCommand::Pause(UOperationInformationBase* PauseOperationInfo)
{
	Super::Pause(PauseOperationInfo);

	if (GroupCommands != nullptr)
		GroupCommands->Pause();
}

void UTT_AvatarCommand::Resume(UOperationInformationBase* PauseOperationInfo)
{
	Super::Resume(PauseOperationInfo);

	if (GroupCommands != nullptr)
		GroupCommands->Resume();
}
 
void UTT_AvatarCommand::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

bool UTT_AvatarCommand::CanTick()
{
	return Super::CanTick();
}

void UTT_AvatarCommand::InitializeTask(UTriggerTaskComponentBase* Owner, bool AsTemplate, bool IsDynamicTask)
{
	Super::InitializeTask(Owner, AsTemplate, IsDynamicTask);

	if (AvatarAccessRule != nullptr)
	{
		AvatarAccessRule->Initialize(this);

		AvatarAccessRule->GetTargetAvatars(Avatars);

		if (!AvatarAccessRule->AvatarsChangedEvent.IsAlreadyBound(this, &UTT_AvatarCommand::OnAvatarChangedEvent))
		{
			AvatarAccessRule->AvatarsChangedEvent.AddDynamic(this, &UTT_AvatarCommand::OnAvatarChangedEvent);
		}
	}

	if (GroupCommands != nullptr)
	{
		GroupCommands->Initialize(this);

		if (!GroupCommands->StateChangeEvent.IsAlreadyBound(this, &UTT_AvatarCommand::OnCommandStateChangedEvent))
		{
			GroupCommands->StateChangeEvent.AddDynamic(this, &UTT_AvatarCommand::OnCommandStateChangedEvent);
		}
	}
}

void UTT_AvatarCommand::OnCommandStateChangedEvent(UAvatarCommandDataBase* CommandData)
{
	if (GroupCommands != nullptr && GroupCommands->IsAllCommandFinished())
	{
		Finished();
	}
}

void UTT_AvatarCommand::OnAvatarChangedEvent(const TArray<UObject*>& ChangedAvatars, bool bIsAdded)
{
	for (int i = 0; i < ChangedAvatars.Num(); i++)
	{
		if (bIsAdded)
		{
			Avatars.AddUnique(ChangedAvatars[i]);
		}
		else
		{
			int Index = Avatars.Find(ChangedAvatars[i]);

			if (Index != INDEX_NONE)
			{
				Avatars.RemoveAt(Index);
			}
		}
	}

	if (IsRunning() && GroupCommands != nullptr)
	{
		GroupCommands->ExecuteCommands(Avatars);
	}

}
