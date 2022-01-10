#include "TaskActiveInformation.h"
#include "TriggerTaskBase.h"
#include "ReplicateTypeBase.h"
#include "TriggerTaskStartInformationBase.h"

FActiationInfoHandle FActiationInfoHandle::InvalidHandle;
FTaskActivationInfo FTaskActivationInfo::InvaildTaskActiveInfo;

FActiationInfoHandle FActiationInfoHandle::GenerateNewHandle()
{
	static int32 StaticHandle = -1;

	return FActiationInfoHandle(++StaticHandle);
}

void FActiationInfoHandle::Invalidate()
{
	Handle = INDEX_NONE;
}

bool FActiationInfoHandle::IsValid()
{
	if (Handle == INDEX_NONE)
		return false;
	else
		return true;
}

bool operator==(const FActiationInfoHandle& Left, const FActiationInfoHandle& Right)
{
	if (Left.Handle == Right.Handle)
		return true;
	else
		return false;
}


void FTaskActivationInfo::AddTask(UTriggerTaskBase* Task)
{
	if (Task == nullptr)
		return;

	if (Task->GetReplicateType() == nullptr || Task->GetReplicateType()->CanReplicate())
	{
		RepliactedRunningTask.Add(Task);
	}
	else
	{
		UnRepliactedRunningTask.Add(Task);
	}
}

void FTaskActivationInfo::RemoveTask(UTriggerTaskBase* Task)
{
	for (int i = 0; i < RepliactedRunningTask.Num(); i++)
	{
		if (RepliactedRunningTask[i] == Task)
		{
			RepliactedRunningTask.RemoveAt(i--);
		}
	}

	for (int i = 0; i < UnRepliactedRunningTask.Num(); i++)
	{
		if (UnRepliactedRunningTask[i] == Task)
		{
			UnRepliactedRunningTask.RemoveAt(i--);
		}
	}
}

void FTaskActivationInfo::Reset()
{
	RepliactedRunningTask.Empty();
	UnRepliactedRunningTask.Empty();
}


void FTaskActivationInfo::GetAllInstancedTask(TArray<UTriggerTaskBase*>& InstancedTasks) const
{
	InstancedTasks.Empty();

	InstancedTasks.Append(RepliactedRunningTask);
	InstancedTasks.Append(UnRepliactedRunningTask);
}

UTriggerTaskBase* FTaskActivationInfo::FindOrAddNewInstance()
{
	if (OwnerTask == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("Please specify the task owner of the target TaskActiveInfo when you want to use FindOrAddNewInstance!!"));
		return nullptr;
	}

	return OwnerTask->FindOrAddNewInstance(*this);
}


bool FTaskActivationInfo::ShouldReplicateActiveInfo() const
{
	if (OwnerTask && OwnerTask->ShouldReplicateActivationInfo(*this))
	{
		return true;
	}
	else
		return false;
}

bool FTaskActivationInfo::IsValid() const
{
	if(OwnerTask == nullptr 
		|| OtherTaskComponent == nullptr 
		|| ProcessedExternalData == nullptr)
		return false;
	else
		return true;
}

FTaskActivationInfoContainer::FTaskActivationInfoContainer()
{
	Items.Empty();
	TaskOwner = nullptr;
}

FTaskActivationInfoContainer::FTaskActivationInfoContainer(const FTaskActivationInfoContainer& OtherContainer)
{
	Items.Empty();
	Items.Append(OtherContainer.Items);
	TaskOwner = OtherContainer.TaskOwner;
}

void FTaskActivationInfoContainer::InitializeByTask(UTriggerTaskBase* Task)
{
	TaskOwner = Task;
}

int FTaskActivationInfoContainer::FindOrAddNewActiveInfo(FTaskActivationInfo& ActiveInfo, bool ForceAdd)
{
	int Index = Items.Find(ActiveInfo);

	if (Index == INDEX_NONE || ForceAdd)
	{
		//When new Activation info added, I need to assign new Handle to it.
		ActiveInfo.Handle = FActiationInfoHandle::GenerateNewHandle();
		Index = Items.Add(ActiveInfo);
	}

	return Index;
}

FTaskActivationInfo& FTaskActivationInfoContainer::FindActiveInfoByActor(AActor* Actor)
{
	//Find from the end to the begin so that can get the immediate activation information
	for (int i = Items.Num() - 1; i >= 0 ; i--)
	{
		if(Items[i].ProcessedExternalData == nullptr)
			continue;

		UTriggerTaskStartInformationBase* StartOperationInfo = Cast<UTriggerTaskStartInformationBase>(Items[i].ProcessedExternalData);

		if (StartOperationInfo != nullptr || StartOperationInfo->GetToggledActor() == Actor)
		{
			return Items[i];
		}
	}

	return FTaskActivationInfo::InvaildTaskActiveInfo;
}

FTaskActivationInfo& FTaskActivationInfoContainer::FindActiveInfoByIndex(int Index)
{
	if(!Items.IsValidIndex(Index))
		return FTaskActivationInfo::InvaildTaskActiveInfo;
	else
		return Items[Index];
}

FTaskActivationInfo& FTaskActivationInfoContainer::FindActiveInfoByTriggerTask(UTriggerTaskBase* Task)
{
	//Find from the end to the begin so that can get the immediate activation information
	for (int i = Items.Num() -1; i >= 0; i--)
	{
		if (Items[i].OwnerTask == Task)
		{
			return Items[i];
		}
	}

	return FTaskActivationInfo::InvaildTaskActiveInfo;
}

FTaskActivationInfo& FTaskActivationInfoContainer::FindActiveInfoByActivationInfoHandle(FActiationInfoHandle& ActivationHandle)
{
	for (int i = 0; i < Items.Num(); i++)
	{
		if (Items[i].Handle == ActivationHandle)
		{
			return Items[i];
		}
	}

	return FTaskActivationInfo::InvaildTaskActiveInfo;
}

void FTaskActivationInfoContainer::EmptyContainer()
{
	Items.Empty();
}

void FTaskActivationInfoContainer::RemoveActiveInfoByIndex(int Index)
{
	if (Index > Items.Num() || Index < 0)
	{
		return;
	}

	Items.RemoveAt(Index);
}

void FTaskActivationInfoContainer::RemoveActiveInfo(const FTaskActivationInfoContainer& OtherContainer)
{
	for (int i = 0; i < OtherContainer.Items.Num(); i++)
	{
		Items.Remove(OtherContainer.Items[i]);
	}
}


bool operator==(const FTaskActivationInfo& LeftInfo, const FTaskActivationInfo& RightInfo)
{
	if(LeftInfo.OtherTaskComponent == RightInfo.OtherTaskComponent
		&& LeftInfo.OtherTask == RightInfo.OtherTask
		&& LeftInfo.ProcessedExternalData == RightInfo.ProcessedExternalData
		&& LeftInfo.OwnerTask == RightInfo.OwnerTask)
	return true;
	else
	return false;
}

bool operator!=(const FTaskActivationInfo& LeftInfo, const FTaskActivationInfo& RightInfo)
{
	if(LeftInfo == RightInfo)
		return false;
	else
		return true;
}