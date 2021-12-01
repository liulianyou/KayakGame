#include "TTED_TriggerRuntimTagConfig.h"
#include "TriggerTaskBase.h"
#include "TriggerBlueprintLib.h"
#include "TriggerManager.h"
#include "TriggerEventSystemInfoBase.h"
#include "TriggerToolFactory.h"
#include "TriggerDefinition.h"
#include "GameFramework/Actor.h"

using namespace TriggerTaskTag;

UTTED_TriggerRuntimeTagConfig::UTTED_TriggerRuntimeTagConfig(const FObjectInitializer& ObjectInitialzier)
	:Super(ObjectInitialzier)
{
	TagMaps.Empty();

	TagMaps.Add(ETriggerTaskState::ETriggerTaskState_NotifyByOthers,	&StartTagContanier);
	TagMaps.Add(ETriggerTaskState::ETriggerTaskState_Active,			&ActiveTagContanier);
	TagMaps.Add(ETriggerTaskState::ETriggerTaskState_Finished,			&FinishedTagContanier);
	TagMaps.Add(ETriggerTaskState::ETriggerTaskState_Pause,				&PauseTagContanier);
	TagMaps.Add(ETriggerTaskState::ETriggerTaskState_Resume,			&ResumeTagContanier);
	TagMaps.Add(ETriggerTaskState::ETriggerTaskState_Skip,				&SkippedTagContanier);
	TagMaps.Add(ETriggerTaskState::ETriggerTaskState_Sleeping,			&SleepTagContanier);
	TagMaps.Add(ETriggerTaskState::ETriggerTaskState_Stop,				&StopTagContanier);
}

void UTTED_TriggerRuntimeTagConfig::BeginDestroy()
{
	ReleaseTagContaner(FGameplayTagContainer::EmptyContainer);

	Super::BeginDestroy();
}

void UTTED_TriggerRuntimeTagConfig::Initialize(UTriggerTaskBase* Owner)
{
	Super::Initialize(Owner);

	RegisterTriggerTask();
}

void UTTED_TriggerRuntimeTagConfig::Reset(UOperationInformationBase* ResetOperationInfo)
{
	Super::Reset(ResetOperationInfo);
}

void UTTED_TriggerRuntimeTagConfig::Finialize()
{
	UnregisterTriggerTask();
}

void UTTED_TriggerRuntimeTagConfig::RegisterTriggerTask()
{
	if(GetTriggerTaskOwner() == nullptr)
		return;

	GetTriggerTaskOwner()->AddTriggerTaskStateUniqueListener(ETriggerTaskState::ETriggerTaskState_NotifyByOthers, this, &UTTED_TriggerRuntimeTagConfig::OnTriggerTaskStateChange);
	GetTriggerTaskOwner()->AddTriggerTaskStateUniqueListener(ETriggerTaskState::ETriggerTaskState_Active, this, &UTTED_TriggerRuntimeTagConfig::OnTriggerTaskStateChange);
	GetTriggerTaskOwner()->AddTriggerTaskStateUniqueListener(ETriggerTaskState::ETriggerTaskState_Finished, this, &UTTED_TriggerRuntimeTagConfig::OnTriggerTaskStateChange);
	GetTriggerTaskOwner()->AddTriggerTaskStateUniqueListener(ETriggerTaskState::ETriggerTaskState_Pause, this, &UTTED_TriggerRuntimeTagConfig::OnTriggerTaskStateChange);
	GetTriggerTaskOwner()->AddTriggerTaskStateUniqueListener(ETriggerTaskState::ETriggerTaskState_Resume, this, &UTTED_TriggerRuntimeTagConfig::OnTriggerTaskStateChange);
	GetTriggerTaskOwner()->AddTriggerTaskStateUniqueListener(ETriggerTaskState::ETriggerTaskState_Skip, this, &UTTED_TriggerRuntimeTagConfig::OnTriggerTaskStateChange);
	GetTriggerTaskOwner()->AddTriggerTaskStateUniqueListener(ETriggerTaskState::ETriggerTaskState_Sleeping, this, &UTTED_TriggerRuntimeTagConfig::OnTriggerTaskStateChange);
	GetTriggerTaskOwner()->AddTriggerTaskStateUniqueListener(ETriggerTaskState::ETriggerTaskState_Stop, this, &UTTED_TriggerRuntimeTagConfig::OnTriggerTaskStateChange);
}

void UTTED_TriggerRuntimeTagConfig::UnregisterTriggerTask()
{
	if (GetTriggerTaskOwner() == nullptr)
		return;

	GetTriggerTaskOwner()->RemoveTriggerTaskStateListener(ETriggerTaskState::ETriggerTaskState_NotifyByOthers, this, &UTTED_TriggerRuntimeTagConfig::OnTriggerTaskStateChange);
	GetTriggerTaskOwner()->RemoveTriggerTaskStateListener(ETriggerTaskState::ETriggerTaskState_Active, this, &UTTED_TriggerRuntimeTagConfig::OnTriggerTaskStateChange);
	GetTriggerTaskOwner()->RemoveTriggerTaskStateListener(ETriggerTaskState::ETriggerTaskState_Finished, this, &UTTED_TriggerRuntimeTagConfig::OnTriggerTaskStateChange);
	GetTriggerTaskOwner()->RemoveTriggerTaskStateListener(ETriggerTaskState::ETriggerTaskState_Pause, this, &UTTED_TriggerRuntimeTagConfig::OnTriggerTaskStateChange);
	GetTriggerTaskOwner()->RemoveTriggerTaskStateListener(ETriggerTaskState::ETriggerTaskState_Resume, this, &UTTED_TriggerRuntimeTagConfig::OnTriggerTaskStateChange);
	GetTriggerTaskOwner()->RemoveTriggerTaskStateListener(ETriggerTaskState::ETriggerTaskState_Skip, this, &UTTED_TriggerRuntimeTagConfig::OnTriggerTaskStateChange);
	GetTriggerTaskOwner()->RemoveTriggerTaskStateListener(ETriggerTaskState::ETriggerTaskState_Sleeping, this, &UTTED_TriggerRuntimeTagConfig::OnTriggerTaskStateChange);
	GetTriggerTaskOwner()->RemoveTriggerTaskStateListener(ETriggerTaskState::ETriggerTaskState_Stop, this, &UTTED_TriggerRuntimeTagConfig::OnTriggerTaskStateChange);
}

void UTTED_TriggerRuntimeTagConfig::OnTriggerTaskStateChange(UTriggerTaskBase* Task)
{
	if(Task == nullptr)
		return;

	const FGameplayTagContainer** ContainerPtr = TagMaps.Find(Task->GetCurrentTriggerTaskState());

	if(ContainerPtr == nullptr)
		return;

	ExposeTagContainer(**ContainerPtr);

	ReleaseTagContaner(**ContainerPtr);

}

void UTTED_TriggerRuntimeTagConfig::ExposeTagContainer(const FGameplayTagContainer& TagContainer)
{
	if(!TagContainer.IsValid())
		return;

	//Should never occur
	if(FTriggerFactoryManager::GetTriggerFactory() == nullptr)
		return;

	FTriggerTaskTagTool* TaskTagTool = FTriggerFactoryManager::GetTriggerFactory()->FindOrCreateToolFactory<FTriggerTaskTagTool>();

	if (TaskTagTool == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("Have no TriggerTaskTool to support the runtime tag!!"));
		return;
	}

	TaskTagTool->AddNewTriggerTagContainer(this, TagContainer);
}

void UTTED_TriggerRuntimeTagConfig::ReleaseTagContaner(const FGameplayTagContainer& TagContainer)
{
	TArray<const FGameplayTagContainer*> ReleaseContainers;

	if (TagContainer.IsEmpty())
	{
		TagMaps.GenerateValueArray(ReleaseContainers);
	}
	else
	{
		const ETriggerTaskState* Key = TagMaps.FindKey(&TagContainer);

		if (Key == nullptr)
			return;

		TMap<ETriggerTaskState, const FGameplayTagContainer*> CopyMaps;
		CopyMaps = TagMaps;
		CopyMaps.Remove(*Key);

		CopyMaps.GenerateValueArray(ReleaseContainers);

		CopyMaps.Empty();
	}

	//Should never occur
	if (FTriggerFactoryManager::GetTriggerFactory() == nullptr)
		return;

	FTriggerTaskTagTool* TaskTagTool = FTriggerFactoryManager::GetTriggerFactory()->FindOrCreateToolFactory<FTriggerTaskTagTool>();

	if (TaskTagTool == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("Have no TriggerTaskTool to support the runtime tag!!"));
		return;
	}

	ENetMode NetMode = ENetMode::NM_Standalone;

	AActor* Actor = GetTypedOuter<AActor>();

	if (Actor != nullptr)
	{
		NetMode = Actor->GetNetMode();
	}

	for (auto LocalTagContainer : ReleaseContainers)
	{
		if(LocalTagContainer == nullptr)
			continue;


		TaskTagTool->RemoveTriggerTagContainer(*LocalTagContainer, NetMode);
	}
}


UCheckTriggerTag::UCheckTriggerTag(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	TriggerTagChangedHandle.Reset();
}

void UCheckTriggerTag::BeginDestroy()
{
	Super::BeginDestroy();

	if (TriggerTagChangedHandle.IsValid())
	{
		if (FTriggerFactoryManager::GetTriggerFactory() != nullptr)
		{
			FTriggerTaskTagTool* TaskTagTool = FTriggerFactoryManager::GetTriggerFactory()->FindOrCreateToolFactory<FTriggerTaskTagTool>();

			if (TaskTagTool != nullptr)
			{
				TaskTagTool->OnTriggerTagChangedEvent().Remove(TriggerTagChangedHandle);
			}
		}
			
		TriggerTagChangedHandle.Reset();
	}
}

bool UCheckTriggerTag::NativeEvaluator()
{
	return HasMeetCondition;
}

void UCheckTriggerTag::NativeInitialize(UObject* OwnerObject)
{
	Super::NativeInitialize(OwnerObject);

	//Should never occur
	if (FTriggerFactoryManager::GetTriggerFactory() == nullptr)
		return;

	FTriggerTaskTagTool* TaskTagTool = FTriggerFactoryManager::GetTriggerFactory()->FindOrCreateToolFactory<FTriggerTaskTagTool>();

	if (TaskTagTool == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("Have no TriggerTaskTool to support the runtime tag!!"));
		return;
	}

	TriggerTagChangedHandle = TaskTagTool->OnTriggerTagChangedEvent().AddUObject(this, &UCheckTriggerTag::OnTriggerTagChanged);

}

void UCheckTriggerTag::NativeReset()
{
	Super::NativeReset();

	HasMeetCondition = false;
}

void UCheckTriggerTag::OnTriggerTagChanged(bool IsRemoved, const FGameplayTagContainer& ChangedTags)
{
	//When trigger tag is removed then do nothing
	if(IsRemoved)
		return;

	ENetMode NetMode = ENetMode::NM_Standalone;

	AActor* Actor = GetTypedOuter<AActor>();

	if (Actor == nullptr && GetOwner() != nullptr)
	{
		Actor = GetOwner()->GetTypedOuter<AActor>();
	}

	if (Actor != nullptr)
	{
		NetMode = Actor->GetNetMode();
	}

	for (int i = 0; i < UTriggerBlueprintLib::GetTriggerManager()->GetTriggerEventSystemInfo().Num(); i++)
	{
		ATriggerEventSystemInfoBase* TriggerEventSystemInfo = UTriggerBlueprintLib::GetTriggerManager()->GetTriggerEventSystemInfo()[i];

		if (TriggerEventSystemInfo == nullptr)
			continue;

		if (NetMode == TriggerEventSystemInfo->GetNetMode())
		{
			if (TriggerEventSystemInfo->GetTriggerTags().HasAll(TagContanier))
			{
				HasMeetCondition = true;

				NotifyToEvaluate();

				break;
			}
		}
	}
}


FTriggerTagContanier::FTriggerTagContanier()
{
	TagDatas.Empty();
}

FTriggerTagContanier::FTriggerTagContanier(const FTriggerTagContanier& OtherTriggerTagContainer)
{
	TagDatas.Empty();

	TagDatas.Append(OtherTriggerTagContainer.TagDatas);

	TagContainer = OtherTriggerTagContainer.TagContainer;
}

FTriggerTagContanier::FTriggerTagContanier(const FGameplayTagContainer& InTagContainer)
{
	TagContainer = InTagContainer;

	TagDatas.Empty();
}

bool TriggerTaskTag::operator==(const FTriggerTagContanier& LeftValue, const FTriggerTagContanier& RightValue)
{
	if(LeftValue.GetTagContainer() == RightValue.GetTagContainer())
		return true;
	else
		return false;
}

int FTriggerTagContanier::AddTagData(UTTED_TriggerRuntimeTagConfig* NewData)
{
	return TagDatas.AddUnique(NewData);
}

int FTriggerTagContanier::RemoveTagData(UTTED_TriggerRuntimeTagConfig* NewData)
{
	TagDatas.Remove(NewData);

	return TagDatas.Num();
}

bool FTriggerTagContanier::IsEmpty()
{
	return TagDatas.Num() == 0;
}

bool FTriggerTagContanier::IsValid()
{
	return TagContainer.IsValid();
}

FTriggerTaskTagTool::FTriggerTaskTagTool()
{
}

FTriggerTaskTagTool::~FTriggerTaskTagTool()
{
}

void FTriggerTaskTagTool::InitlalizeTriggerTool()
{
	TriggerTags.Empty();
}

void FTriggerTaskTagTool::AddNewTriggerTagContainer(UTTED_TriggerRuntimeTagConfig* Data, const FGameplayTagContainer& TagContainer)
{
	FTriggerTagContanier TriggerTagContainer(TagContainer);
	TriggerTagContainer.AddTagData(Data);

	int Index = GetTriggerTags().Find(TriggerTagContainer);

	if (Index != INDEX_NONE)
	{
		TriggerTags[Index].AddTagData(Data);
	}
	else
	{
		TriggerTags.Add(TriggerTagContainer);

		ENetMode NetMode = ENetMode::NM_Standalone;

		if (Data != nullptr)
		{
			AActor* Actor = Data->GetTypedOuter<AActor>();

			if (Actor != nullptr)
			{
				NetMode = Actor->GetNetMode();
			}
		}

		AddTagsToTriggerEventSystemInfo(TagContainer, NetMode);
	}
}

void FTriggerTaskTagTool::RemoveTriggerTagContainer(const FGameplayTagContainer& TagContainer, ENetMode NetMode)
{
	if(!TagContainer.IsValid())
		return;

	FTriggerTagContanier TriggerTagContainer(TagContainer);

	int Index = GetTriggerTags().Find(TriggerTagContainer);

	if (Index != INDEX_NONE)
	{
		TriggerTags.RemoveAt(Index);

		RemovedTagsInTriggerEventSystemInfo(TagContainer, NetMode);
	}
}

void FTriggerTaskTagTool::RemoveTriggerTagContainer(UTTED_TriggerRuntimeTagConfig* Data)
{
	if(Data == nullptr)
		return;

	TArray<FGameplayTagContainer> RemovedTags;

	for (int i = 0; i < TriggerTags.Num(); i++)
	{
		TriggerTags[i].RemoveTagData(Data);

		if (TriggerTags[i].IsEmpty())
		{
			RemovedTags.Add(TriggerTags[i].GetTagContainer());
		}
	}

	ENetMode NetMode = ENetMode::NM_Standalone;

	AActor* Actor = Data->GetTypedOuter<AActor>();

	if (Actor != nullptr)
	{
		NetMode = Actor->GetNetMode();
	}

	for (auto Tag : RemovedTags)
	{
		RemoveTriggerTagContainer( Tag, NetMode);
	}
}

void FTriggerTaskTagTool::RemovedTagsInTriggerEventSystemInfo(const FGameplayTagContainer& RemovedTriggerTag, ENetMode NetMode)
{
	if(UTriggerBlueprintLib::GetTriggerManager() == nullptr)
		return;

	if(UTriggerBlueprintLib::GetTriggerManager()->GetTriggerEventSystemInfo().Num() == 0)
		return;

	for (int i = 0; i < UTriggerBlueprintLib::GetTriggerManager()->GetTriggerEventSystemInfo().Num(); i++)
	{
		ATriggerEventSystemInfoBase* SystemInfo = UTriggerBlueprintLib::GetTriggerManager()->GetTriggerEventSystemInfo()[i];

		if(SystemInfo == nullptr || 
			SystemInfo->GetNetMode() != NetMode)
			continue;

		FGameplayTagContainer& LocalTriggerTags = SystemInfo->GetTriggerTags();

		if (LocalTriggerTags.HasAny(RemovedTriggerTag))
		{
			LocalTriggerTags.RemoveTags(RemovedTriggerTag);

			TriggerTagChangedEvent.Broadcast(true, RemovedTriggerTag);
		}
	}
}

void FTriggerTaskTagTool::AddTagsToTriggerEventSystemInfo(const FGameplayTagContainer& AddedTriggerTag, ENetMode NetMode)
{
	if (UTriggerBlueprintLib::GetTriggerManager() == nullptr)
		return;

	if (UTriggerBlueprintLib::GetTriggerManager()->GetTriggerEventSystemInfo().Num() == 0)
		return;

	for (int i = 0; i < UTriggerBlueprintLib::GetTriggerManager()->GetTriggerEventSystemInfo().Num(); i++)
	{
		ATriggerEventSystemInfoBase* SystemInfo = UTriggerBlueprintLib::GetTriggerManager()->GetTriggerEventSystemInfo()[i];

		if (SystemInfo == nullptr ||
			SystemInfo->GetNetMode() != NetMode)
			continue;

		FGameplayTagContainer& LocalTriggerTags = SystemInfo->GetTriggerTags();

		if (!LocalTriggerTags.HasAll(AddedTriggerTag))
		{
			LocalTriggerTags.AppendTags(AddedTriggerTag);

			TriggerTagChangedEvent.Broadcast(false, AddedTriggerTag);
		}
	}
}

