#include "TT_EffectBase.h"
#include "TriggerEffectDataBase.h"
#include "TriggerTaskStartInformationBase.h"
#include "TriggerTaskBase.h"
#include "EffectDataOperationStyle.h"
#include "TriggerBlueprintLib.h"
#include "TriggerTaskComponentBase.h"
#include "TriggerNetPlayerSupportComponent.h"
#include "Net/UnrealNetwork.h"
#include "Engine/ActorChannel.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"


UTT_EffectBase::UTT_EffectBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	SupportedDataTypes.Empty();
	EffectOperators.Empty();
}

bool UTT_EffectBase::CanBeToggled()
{
	bool Result = Super::CanBeToggled();

	return Result;
}

bool UTT_EffectBase::Prepare()
{
	if(!Super::Prepare())
		return false;

	Active();

	return true;
}

void UTT_EffectBase::Active(bool ForceActive /* = true */)
{
	FTaskActivationInfo& ActivatioInfo = GetImmediateActivationInformation_Mutable().FindActiveInfoByIndex(GetCurrentActiveInfoIndex());

	TArray<UObject*> Causers;

	UTriggerTaskStartInformationBase* StartOperationInfo = Cast<UTriggerTaskStartInformationBase>(ActivatioInfo.ProcessedExternalData);

	if (StartOperationInfo == nullptr)
	{
		TArray<FOperationScope> OuterScopes;
		ActivatioInfo.ProcessedExternalData->FindOperationScope(OuterScopes);

		for (int i = 0; i < OuterScopes.Num(); i++)
		{
			if (OuterScopes[i].Causer != nullptr)
			{
				Causers.Add(OuterScopes[i].Causer);
			}
		}
	}
	else
	{
		if (StartOperationInfo->GetToggledActor() != nullptr)
		{
			Causers.Add(StartOperationInfo->GetToggledActor());
		}
	}

	OpenEffect(Causers);

	Super::Active(ForceActive);
}

bool UTT_EffectBase::ReceiveNotifyFromOthersComponent(UTriggerTaskComponentBase* OtherComponent, UTriggerTaskBase* SenderTask, UOperationInformationBase* StartOperationInfo)
{
	bool Result = Super::ReceiveNotifyFromOthersComponent(OtherComponent, SenderTask, StartOperationInfo);

	if(Result == false)
		return false;

	Prepare();

	return true;
}

void UTT_EffectBase::Finished(UOperationInformationBase* FinishOperationInfo)
{
	Super::Finished(FinishOperationInfo);
}

void UTT_EffectBase::PostFinished()
{
	Super::PostFinished();
}

void UTT_EffectBase::TryToSleep(UOperationInformationBase* Causer /* = nullptr */)
{
	Super::TryToSleep(Causer);
}

void UTT_EffectBase::Reset(UOperationInformationBase* Operation /*= nullptr*/)
{
	Super::Reset(Operation);

	for (auto Data : EffectDatas)
	{
		if (Data == nullptr)
			continue;

		Data->Reset(Operation);
	}
}

void UTT_EffectBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void UTT_EffectBase::Pause(UOperationInformationBase* PauseOperationInfo)
{
	Super::Pause(PauseOperationInfo);
}

void UTT_EffectBase::Resume(UOperationInformationBase* ResumeOperationInfo)
{
	Super::Resume(ResumeOperationInfo);
}

void UTT_EffectBase::Skip(UOperationInformationBase* SkipOperationInfo)
{
	Super::Skip(SkipOperationInfo);
}

bool UTT_EffectBase::CanTick()
{
	return Super::CanTick();
}

void UTT_EffectBase::TryToStop(UOperationInformationBase* Causer /* = nullptr */)
{
	TArray<UObject*> Causers;
	Causers.Add(Causer);
	CloseEffect(Causers, -1, false);
	Super::TryToStop(Causer);
}

void UTT_EffectBase::InitializeTask(UTriggerTaskComponentBase* Owner, bool AsTemplate, bool IsDynamicTask)
{
	Super::InitializeTask(Owner, AsTemplate, IsDynamicTask);

	TArray<UTriggerEffectDataBase*> Datas;
	GetEffectDatas(Datas);

	for (auto EffectData : Datas)
	{
		if(EffectData == nullptr)
			continue;

		EffectData->Initialize(this);

		//Register event to data so that this task can do something when the target data is changed
		if (EffectData->DataChanged.IsAlreadyBound(this, &UTT_EffectBase::DataChanged))
		{
			EffectData->DataChanged.AddDynamic(this, &UTT_EffectBase::DataChanged);
		}
	}
}

void UTT_EffectBase::BeginDestroy()
{
	Super::BeginDestroy();
}

void UTT_EffectBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UTT_EffectBase, EffectDatas);
	DOREPLIFETIME(UTT_EffectBase, EffectOperators);
}

bool UTT_EffectBase::ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags)
{
	bool WroteSomething = Super::ReplicateSubobjects(Channel, Bunch, RepFlags);

	for (int i = 0; i < EffectDatas.Num(); i++)
	{
		if (EffectDatas[i] != nullptr)
		{
			WroteSomething |= EffectDatas[i]->ReplicateSubobjects(Channel, Bunch, RepFlags);
			WroteSomething |= Channel->ReplicateSubobject(EffectDatas[i], *Bunch, *RepFlags);
		}
	}

	return WroteSomething;
}

void UTT_EffectBase::OpenEffect(const TArray<UObject*>& Causers, int EffectDataIndex /*= INDEX_NONE*/)
{
	if (GetTriggerOwner() == nullptr)
		return;

	Trigger::ETaskRunType TaskRunType = GetTriggerOwner()->GetTaskRunType(this);

	if (EnumHasAnyFlags(TaskRunType, Trigger::ETaskRunType::Local))
	{
		OpenEffectInternal(Causers, EffectDataIndex);
	}

	//From Client to invoke function at server
	if (EnumHasAnyFlags(TaskRunType, Trigger::ETaskRunType::Server))
	{
		if (GetWorld() != nullptr && GetWorld()->GetFirstPlayerController())
		{
			UTriggerNetPlayerSupportComponent* NPSC = UTriggerBlueprintLib::GetTriggerNetPlayerSupportFromActor(GetWorld()->GetFirstPlayerController());

			if (NPSC != nullptr)
			{
				NPSC->Server_OpenEffect(this, Causers, EffectDataIndex);
			}
		}
	}

	//From Server to invoke function at client
	if (EnumHasAnyFlags(TaskRunType, Trigger::ETaskRunType::Client))
	{
		NetMuti_OpenEffect(Causers, EffectDataIndex);
	}
}

void UTT_EffectBase::CloseEffect(const TArray<UObject*>& Causers, int EffectDataIndex /*= INDEX_NONE*/, bool ShouldTryToFinishTask /*= true*/)
{
	if (GetTriggerOwner() == nullptr)
		return;
		
	//All effect data have been closed, do not need to close it again
	if(IsEffectDataClosed(EffectDataIndex))
		return;

	Trigger::ETaskRunType TaskRunType = GetTriggerOwner()->GetTaskRunType(this);

	if (EnumHasAnyFlags(TaskRunType, Trigger::ETaskRunType::Local))
	{
		CloseEffectInternal(Causers, EffectDataIndex, ShouldTryToFinishTask);
	}

	if(!IsGarbageCollecting())
	{
		//From Client to invoke function at server
		if (EnumHasAnyFlags(TaskRunType, Trigger::ETaskRunType::Server))
		{
			UTriggerNetPlayerSupportComponent* NPSC = UTriggerBlueprintLib::GetTriggerNetPlayerSupportFromActor(GetWorld()->GetFirstPlayerController());

			if (NPSC != nullptr)
			{
				NPSC->Server_CloseEffect(this, Causers, EffectDataIndex, ShouldTryToFinishTask);
			}
		}

		//From Server to invoke function at client
		if (EnumHasAnyFlags(TaskRunType, Trigger::ETaskRunType::Client))
		{
			NetMuti_CloseEffect(Causers, EffectDataIndex);
		}
	}
	else
	{
		//When this task is destroyed at GC state invoke the close effect in the effect data directly
		for (int i = 0; i < EffectDatas.Num(); i++)
		{
			if(EffectDatas[i] == nullptr || !EffectDatas[i]->IsValidLowLevel())
				continue;

			EffectDatas[i]->CloseEffect(nullptr);
		}
	}
}


void UTT_EffectBase::NetMuti_OpenEffect_Implementation(const TArray<UObject*>& Causers, int EffectDataIndex /*= INDEX_NONE*/ )
{
	if (GetTriggerOwner() == nullptr)
		return;

	OpenEffectInternal(Causers, EffectDataIndex);
}

void UTT_EffectBase::NetMuti_CloseEffect_Implementation(const TArray<UObject*>& Causers, int EffectDataIndex /*= INDEX_NONE*/, bool ShouldTryToFinishTask /*= true*/)
{
	if(GetTriggerOwner() == nullptr)
		return;

	CloseEffectInternal(Causers, EffectDataIndex, ShouldTryToFinishTask);
}

void UTT_EffectBase::OpenEffectInternal(const TArray<UObject*>& Causers, int EffectDataIndex /*= INDEX_NONE*/)
{
	for (int i = 0; i < EffectDatas.Num(); i++)
	{
		if (EffectDataIndex == INDEX_NONE || EffectDataIndex == i)
		{
			UTriggerEffectDataBase* EffectData = GetEffectData(i);

			if (EffectData == nullptr || !EffectData->CanBeOpened(Causers))
				return;

			UEffectDataOpenStyleBase* OpenStyle = NewObject<UEffectDataOpenStyleBase>();

			OpenStyle->AddCausers(Causers);

			EffectData->OpenEffect(OpenStyle);

			RemoveOperator(false, EffectDataIndex);
			AddOperator(false, Causers, EffectDataIndex);
		}
	}
}

void UTT_EffectBase::CloseEffectInternal(const TArray<UObject*>& Causers, int EffectDataIndex /*= INDEX_NONE*/, bool ShouldTryToFinishTask/* = true*/)
{
	if (IsGarbageCollecting())
		return;

	for (int i = 0; i < EffectDatas.Num(); i++)
	{
		if (EffectDataIndex == INDEX_NONE || EffectDataIndex == i)
		{
			UTriggerEffectDataBase* EffectData = GetEffectData(i);

			if (EffectData == nullptr || !EffectData->CanBeClosed(Causers))
				return;

			//UEffectDataCloseStyleBase* CloseStyle = NewObject<UEffectDataCloseStyleBase>();

			//CloseStyle->AddCausers(Causers);

			EffectData->CloseEffect(nullptr);

			RemoveOperator(true, i);
			AddOperator(true, Causers, i);
		}
	}

	if (IsEffectDataClosed(INDEX_NONE) && CheckRunTimeType() && ShouldTryToFinishTask)
	{
		Finished();
	}
}

void UTT_EffectBase::GetEffectDatas(TArray<UTriggerEffectDataBase*>& OutDatas, bool MatchSupportDataTypes /*= true*/)
{
	OutDatas.Empty();

	for (auto EffectData : EffectDatas)
	{
		if(EffectData == nullptr)
			continue;

		bool IsValidData = false;

		if (SupportedDataTypes.Num() == 0)
		{
			IsValidData = true;
		}
		else
		{
			TSubclassOf<UTriggerEffectDataBase>* DataPtr = SupportedDataTypes.FindByPredicate([&](const TSubclassOf<UTriggerEffectDataBase>& Data) {
				if (EffectData->GetClass()->IsChildOf(*Data))
					return true;
				else
					return false;
			});

			if (DataPtr != nullptr)
			{
				IsValidData = true;
			}
		}

		if (IsValidData)
		{
			OutDatas.Add(EffectData);
		}
	}
}

UTriggerEffectDataBase* UTT_EffectBase::GetEffectData(int EffectDataIndex /*= INDEX_NONE*/)
{
	if(EffectDatas.IsValidIndex(EffectDataIndex) == false)
		return nullptr;

	return EffectDatas[EffectDataIndex];
}

int UTT_EffectBase::GetEffectDataIndex(UTriggerEffectDataBase* Data)
{
	return EffectDatas.Find(Data);
}

bool UTT_EffectBase::IsEffectDataClosed(int EffectDataIndex /* = INDEX_NONE*/)
{
	bool Result = true;

	for (int i = 0; i < EffectDatas.Num(); i++)
	{
		if(EffectDatas[i] == nullptr)
			continue;

		if (i == EffectDataIndex || EffectDataIndex == INDEX_NONE)
		{
			if (!EffectDatas[i]->IsClosed())
			{
				Result = false;

				break;
			}
		}
	}

	return Result;
}

void UTT_EffectBase::DataChanged(const UTriggerEffectDataBase* EffectData, const FName& DataName)
{
	if(EffectData == nullptr)
		return;

	OnDataChanged(EffectData, DataName);
}

void UTT_EffectBase::Rep_OnEffectOperators()
{
	for (int i = 0; i < EffectOperators.Num(); i++)
	{
		if (EffectOperators[i].IsOpenedData)
		{
			OpenEffectInternal(EffectOperators[i].Causers, EffectOperators[i].EffectDataIndex);
		}
		else
		{
			CloseEffectInternal(EffectOperators[i].Causers, EffectOperators[i].EffectDataIndex);
		}
	}
}

void UTT_EffectBase::AddOperator(bool IsClosed, const TArray<UObject*>& Causers, int EffectIndex)
{
	/*
	* When we add to the already exist operators I need to update this data
	*/
	bool IsExisted = false;
	for (int i = 0; i < EffectOperators.Num(); i++)
	{
		if (EffectOperators[i].IsOpenedData == !IsClosed && EffectOperators[i].EffectDataIndex == EffectIndex)
		{
			for (int CauserIndex = 0; CauserIndex < Causers.Num(); CauserIndex++)
			{
				EffectOperators[i].Causers.AddUnique(Causers[CauserIndex]);
			}

			IsExisted = true;
		}
	}

	if (!IsExisted)
	{
		FEffectDataOperator NewOperator;
		NewOperator.Causers.Append(Causers);
		NewOperator.IsOpenedData = !IsClosed;
		NewOperator.EffectDataIndex = EffectIndex;

		EffectOperators.Add(NewOperator);
	}
}

void UTT_EffectBase::RemoveOperator(bool IsClosed, int EffectIndex)
{
	for (int i = 0; i < EffectOperators.Num(); i++)
	{
		if (EffectOperators[i].IsOpenedData == IsClosed 
		//When one of the index is INDEX_NONE means this condition always meet
		&& (EffectOperators[i].EffectDataIndex == EffectIndex || EffectOperators[i].EffectDataIndex == INDEX_NONE || EffectIndex == INDEX_NONE))
		{
			EffectOperators.RemoveAt(i--);
		}
	}
}