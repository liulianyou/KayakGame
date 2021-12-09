#include "AvatarCommandGroupBase.h"
#include "Engine/BlueprintGeneratedClass.h"
#include "AvatarCommandDataBase.h"
#include "TT_AvatarCommand.h"

UAvatarCommandGroupBase::UAvatarCommandGroupBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	
}

void UAvatarCommandGroupBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
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

void UAvatarCommandGroupBase::Initialize(UObject* ObjectOwner)
{
	Owner = ObjectOwner;

	TArray<UAvatarCommandDataBase*> CommandDatas;
	GetAllCommandDatas(CommandDatas);

	for (auto CommandData : CommandDatas)
	{
		if (CommandData == nullptr)
			continue;

		if (!CommandData->StateChangeEvent.IsAlreadyBound(this, &UAvatarCommandGroupBase::CommandDataStateChangedCallBack))
		{
			CommandData->StateChangeEvent.AddDynamic(this, &UAvatarCommandGroupBase::CommandDataStateChangedCallBack);
		}

		CommandData->Initialize(this);
	}

	OnInitialize(ObjectOwner);
}

void UAvatarCommandGroupBase::ExecuteCommands(const TArray<UObject*>& Targets, UAvatarCommandDataBase* AvatarCommand /*= nullptr*/)
{
	OnExecuteCommands(Targets, AvatarCommand);
}

void UAvatarCommandGroupBase::StopCommands(const TArray<UObject*>& Targets, UAvatarCommandDataBase* AvatarCommand /*= nullptr*/)
{
	OnStopCommands(Targets, AvatarCommand);
}

void UAvatarCommandGroupBase::Reset()
{
	OnReset();
}

void UAvatarCommandGroupBase::Pause()
{
	OnPause();
}

void UAvatarCommandGroupBase::Resume()
{
	OnResume();
}

UTT_AvatarCommand* UAvatarCommandGroupBase::GetAvatarCommandTask() const
{
	return Cast<UTT_AvatarCommand>(GetOwner());
}

void UAvatarCommandGroupBase::CommandDataStateChangedCallBack(UAvatarCommandDataBase* CommandData)
{
	StateChangeEvent.Broadcast(CommandData);
}

bool UAvatarCommandGroupBase::IsAllCommandFinished_Implementation()
{
	return false;
}