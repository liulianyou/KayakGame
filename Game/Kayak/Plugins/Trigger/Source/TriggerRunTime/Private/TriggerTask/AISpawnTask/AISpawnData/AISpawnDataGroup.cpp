#include "AISpawnDataGroup.h"
#include "TriggerTaskBase.h"
#include "TriggerTaskComponentBase.h"
#include "Editor/AI/AIPreviewCharacter.h"
#include "EngineUtils.h"
#include "TriggerBlueprintLib.h"
#include "AIInfoAccessor/AIInfoAccessor.h"
#include "AISpawnCreator/AICreatorBase.h"
#include "TS_AIStatics.h"

#if WITH_EDITORONLY_DATA
#include "Editor.h"
#include "WorldBrowserModule.h"
#endif

void FSingleGroupSpawnRoundInfo::Reset()
{
	HasBeenProcessed = false;
	HasBroadCastFinishedEvent = false;

	for (int i = 0; i < GroupSpawnDatas.Num(); i++)
	{
		GroupSpawnDatas[i].Reset();
	}
}

bool FSingleGroupSpawnRoundInfo::IsAllAISpawned()
{
	if(!HasBeenProcessed)
		return false;

	for(int i = 0; i < GroupSpawnDatas.Num(); i++)
	{
		if (GroupSpawnDatas[i].NeedToSpawnedAICount > GroupSpawnDatas[i].SpawnedCount)
		{
			return false;
		}
	}

	return true;
}


void FSingleGroupDataInfo::Reset()
{
	SpawnedCount = 0;
	NeedToSpawnedAICount = -1;
	SpawnedTime = 0.0f;
	TargetTime = 0.0f;
	CircleCount = 0;
	NPCInfos.Empty();
	for (int i = 0; i < AIDatas.Num(); i++)
	{
		AIDatas[i].Reset();
	}

}

float FSingleGroupDataInfo::GetRandomTime(int AIIndex, bool IsDelayTime)
{
	if (!AIDatas.IsValidIndex(AIIndex))
		return 0.0f;

	auto ShouldPopulateTime = [&]( float& OuterTime, const FGroupAITimeRange& TimeRange) -> bool{

		bool Result = false;

		if (OuterTime <= 0)
		{
			OuterTime = FMath::FRandRange(TimeRange.Min, TimeRange.Max);

			Result = true;
		}

		return Result;
	};

	if(IsDelayTime)
	{
		if(!AIDatas[AIIndex].PopulateDealyTimeByGroupData && ShouldPopulateTime(AIDatas[AIIndex].DelayTime, SingleAISpawnDelayTimeRange))
		{
			AIDatas[AIIndex].PopulateDealyTimeByGroupData = true;
		}

		return AIDatas[AIIndex].DelayTime;
	}
	else
	{
		if (!AIDatas[AIIndex].PopulateWaitTimeByGroupData && ShouldPopulateTime(AIDatas[AIIndex].WaitTime, SingleAISpawnWaitTimeRange))
		{
			AIDatas[AIIndex].PopulateWaitTimeByGroupData = true;
		}

		return AIDatas[AIIndex].WaitTime;
	}

	return 0.0f;
}


void FSinglePawnData::Reset()
{
	HaveUsed = false;

	if (PopulateWaitTimeByGroupData)
	{
		WaitTime = 0.f;
		PopulateWaitTimeByGroupData = false;
	}

	if (PopulateDealyTimeByGroupData)
	{
		DelayTime = 0.f;
		PopulateDealyTimeByGroupData = false;
	}	
}

UAISpawnDataGroup::UAISpawnDataGroup(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer),
	CurrentSpawnedRound(0),
	CurrentSpawnedGroup(0),
	AIIndex(0),
	SpawnTime(0.0f)
{

#if WITH_EDITORONLY_DATA
	if (!HasAnyFlags(RF_ClassDefaultObject | RF_ArchetypeObject))
	{
		//FEditorDelegates::PostSaveWorld.AddUObject(this, &UAISpawnDataGroup::OnPostSaveWorld);
		//FEditorDelegates::PreSaveWorld.AddUObject(this, &UAISpawnDataGroup::OnPreSaveWorld);
		//FEditorDelegates::MapChange.AddUObject(this, &UAISpawnDataGroup::OnEndLoadMap);

		//FCoreUObjectDelegates::PostLoadMapWithWorld.AddUObject(this, &UAISpawnDataGroup::OnEndLoadMapInGame);

		//FWorldDelegates::LevelAddedToWorld.AddUObject(this, &UAISpawnDataGroup::OnLevelChangedInWorld);
		//FWorldDelegates::LevelRemovedFromWorld.AddUObject(this, &UAISpawnDataGroup::OnLevelChangedInWorld);
	}
#endif

}

void UAISpawnDataGroup::BeginDestroy()
{
	Super::BeginDestroy();

	//for (int i = 0; i < RoundInfos.Num(); i++)
	//{
	//	for (int j = 0; j < RoundInfos[i].GroupSpawnDatas.Num(); j++)
	//	{
	//		if (RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplate != nullptr)
	//		{
	//			if (RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplate->GetWorld() != nullptr)
	//			{
	//				RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplate->GetWorld()->DestroyActor(RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplate);
	//			}
	//		}
	//	}
	//}
}


void UAISpawnDataGroup::InitData(UTriggerTaskBase* Task)
{
	Super::InitData(Task);

	if(HasAnyFlags(RF_ClassDefaultObject | RF_ArchetypeObject))
		return;
#if WITH_EDITORONLY_DATA
	UpdateAIGroupSpawnDataTemplate();
#endif
}

#if WITH_EDITORONLY_DATA
void UAISpawnDataGroup::UpdateAIGroupSpawnDataTemplate()
{
	if(HasAnyFlags(RF_ClassDefaultObject | RF_ArchetypeObject))
		return;

	FActorSpawnParameters SpawnParameter;
	SpawnParameter.bAllowDuringConstructionScript = true;

	if (GetTaskOwner() != nullptr && GetTaskOwner()->GetTriggerOwner() != nullptr)
	{
		SpawnParameter.OverrideLevel = GetTaskOwner()->GetTriggerOwner()->GetComponentLevel();
		SpawnParameter.Owner = Cast<AActor>(GetTaskOwner()->GetTriggerOwner()->GetOuter());
	}

	for (int i = 0; i < RoundInfos.Num(); i++)
	{
		for (int j = 0; j < RoundInfos[i].GroupSpawnDatas.Num(); j++)
		{
			//This is first time that create this Data
			if (RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplateClass == nullptr)
			{
				RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplateClass = AAISpawnGroupDataTemplate::StaticClass();

				if (GetTaskOwner() != nullptr &&
					GetTaskOwner()->GetTriggerOwner() != nullptr &&
					GetTaskOwner()->GetTriggerOwner()->GetOwner() != nullptr)
				{
					RoundInfos[i].GroupSpawnDatas[j].AISpawnGroudDataTempleteTransform = GetTaskOwner()->GetTriggerOwner()->GetOwner()->GetTransform();
				}
			}

			AAISpawnGroupDataTemplate* AppropriateTemplate = AAISpawnGroupDataTemplate::FindAppropicateTemplateActors(this, i, j);

			if(AppropriateTemplate != nullptr)
			{
				RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplate = AppropriateTemplate;
			}
			else
			{
				if (RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplate == nullptr)
				{
					RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplate =
						Cast<AAISpawnGroupDataTemplate>(
							GetWorld()->SpawnActor(
								RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplateClass,
								&RoundInfos[i].GroupSpawnDatas[j].AISpawnGroudDataTempleteTransform, SpawnParameter));
				}
				else if (!RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplate->IsA(RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplateClass.Get()))
				{
					//The existed template is not the changed class;
					RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplate->Destroy();

					RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplate =
						Cast<AAISpawnGroupDataTemplate>(
							GetWorld()->SpawnActor(
								RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplateClass,
								&RoundInfos[i].GroupSpawnDatas[j].AISpawnGroudDataTempleteTransform, SpawnParameter));
				}

				RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplate->InitializeActor(this, i, j);

				if (!RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplate->OnDestroyed.IsAlreadyBound(this, &UAISpawnDataGroup::OnAISpawnGroupDataTemplateDestoryed))
				{
					RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplate->OnDestroyed.AddDynamic(this, &UAISpawnDataGroup::OnAISpawnGroupDataTemplateDestoryed);
				}
			}
		}
	}
}
#endif

void UAISpawnDataGroup::UpdateGroupSpawnTempleteTransform(AAISpawnGroupDataTemplate* InSpawnTemplete, FTransform& InTransform)
{
	for (int i = 0; i < RoundInfos.Num(); i++)
	{
		for (int j = 0; j < RoundInfos[i].GroupSpawnDatas.Num(); j++)
		{
			if (RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplate == InSpawnTemplete)
			{
				RoundInfos[i].GroupSpawnDatas[j].AISpawnGroudDataTempleteTransform = InTransform;
			}
		}
	}
}

void UAISpawnDataGroup::GetAIInfoFormNPCID(FAIInfo& AIInfo, int NPCID)
{

#if 0
	if(AICreator != nullptr && !AICreator->CanGetControllerClassFromNPCID())
	{
		return;
	}

	UGExcelNPCAttributeTable* NPCDataTable = UGExcelDataManager::Get()->GetExcelTable<UGExcelNPCAttributeTable>();

	if (NPCDataTable == nullptr)
	{
		UE_LOG(LogTrigger, Error, TEXT("Please check local excel data::NPC_pb"));
		return;
	}
	
	UGExcelNPCAttributeData* NPCData = NPCDataTable->GetByid(NPCID);

	if (NPCData == nullptr)
	{
		UE_LOG(LogTrigger, Error, TEXT("There is no vaild NPCID<< %d >> data in the excel file!!"), NPCID);
		return;
	}

	UClass* Class = LoadClass<AAIController>(this, *ConvertPathReferencValueToVaild(NPCData->AIController.ToString(), true));

	if (Class == nullptr)
	{
		UE_LOG(LogTrigger, Error, TEXT("AIControllerClass Wiht NPCID<< %d >> Value << %s >> in the excel file is not vaild!!"), NPCID, *NPCData->AIController.ToString());
		return;
	}

	AIInfo.ControllerClass = Class;

	Class = LoadClass<APawn>(this, *ConvertPathReferencValueToVaild(NPCData->AICharacter.ToString(), true));

	if (Class == nullptr)
	{
		UE_LOG(LogTrigger, Error, TEXT("AICharacter in the excel file is not vaild With ID: %d"), NPCID);
		return;
	}

	AIInfo.PawnClass = Class;

	AIInfo.BTPath = NPCData->BehaviorTree.ToString();
#endif
}

void UAISpawnDataGroup::GetVaildNPCInfos(int RoundIndex, int GroupInex)
{
	if (RoundIndex >= RoundInfos.Num() ||
		GroupInex >= RoundInfos[RoundIndex].GroupSpawnDatas.Num())
		return;

	UAIInfoAccessorInAISpawnDataGroup* GroupAIInfoAccessor = Cast<UAIInfoAccessorInAISpawnDataGroup>(AIInfoAccessor);

	if(GroupAIInfoAccessor != nullptr)
	{
		GroupAIInfoAccessor->SetGroupAndRoundIndex(RoundIndex, GroupInex);
	}

	if(AIInfoAccessor != nullptr)
	{
		AIInfoAccessor->GetVaildNPCInfos(RoundInfos[RoundIndex].GroupSpawnDatas[GroupInex].NPCInfos);
	}
}

void UAISpawnDataGroup::SetStartRoundIndex(int RoundIndex)
{
	if(RoundIndex >= GetMaxRound())
		return;

	for (int i = 0; i < RoundIndex; i++)
	{
		SpawnTime += GetCurrentRoundTime(i, true, false);

		FSingleGroupSpawnRoundInfo& RoundData = RoundInfos[i];

		RoundData.HasBeenProcessed = true;
		RoundData.HasBroadCastFinishedEvent = false;

		for (int GroupIndex = 0; GroupIndex < RoundData.GroupSpawnDatas.Num(); GroupIndex++)
		{
			FSingleGroupDataInfo& GroupData = RoundData.GroupSpawnDatas[GroupIndex];

			GroupData.NeedToSpawnedAICount = GroupData.AIDatas.Num();
			GroupData.SpawnedCount = GroupData.AIDatas.Num();

			for (int LocalAIIndex = 0; LocalAIIndex < GroupData.AIDatas.Num(); LocalAIIndex++)
			{
				FSinglePawnData& AIData = GroupData.AIDatas[LocalAIIndex];

				AIData.HaveUsed = true;
			}
		}
	}
}

void UAISpawnDataGroup::GetCurrentVaildAIInfoToSpawn(float DeltaTime, TArray<FAIInfo>& AIInfos, bool& BreakSpawnChain, bool& SkipCurrentSpawn)
{
	AIInfos.Empty();

#if USEIMPLEMENTATION_1
#pragma  region Implementation1
	SpawnTime += DeltaTime;

	InteralGetAIInfos(AIInfos, BreakSpawnChain, SkipCurrentSpawn);
#pragma endregion Implementation1
#else
	Process(DeltaTime, AIInfos, BreakSpawnChain);
#endif
}


#pragma  region Implementation1

bool UAISpawnDataGroup::SkipEmptyData()
{
	//No data need to spawned just finish this data
	if (RoundInfos.Num() == 0)
	{
		return true;
	}

	//All data have spawned
	if (CurrentSpawnedRound >= RoundInfos.Num())
	{	
		if(SpawnTime >= GetCurrentRoundTime(CurrentSpawnedRound))
		//All Time have passed
			return true;
		else
		//Remain time to wait
			return false;
	}

	//All data in current group have been spawned
	if (CurrentSpawnedGroup >= RoundInfos[CurrentSpawnedRound].GroupSpawnDatas.Num())
	{
		if (SpawnTime >= (GetCurrentRoundTime(CurrentSpawnedRound - 1) + GetCurrentGroupTime(CurrentSpawnedRound, CurrentSpawnedGroup - 1)))
		{
			//All data in current group have been spawned
			CurrentSpawnedRound++;
			CurrentSpawnedGroup = 0;
			AIIndex = 0;

			//Try to skip next empty round
			if(SkipEmptyData())
			{
				return true;
			};
		}
		else
		{
			//Still remain time to wait
			return false;
		}
	}


	if (RoundInfos[CurrentSpawnedRound].GroupSpawnDatas.Num() == 0)
	{
		SpawnTime += RoundInfos[CurrentSpawnedRound].WaitTime;
		SpawnTime += RoundInfos[CurrentSpawnedRound].DelayTime;

		CurrentSpawnedGroup = 0;
		AIIndex = 0;
		CurrentSpawnedRound++;

		SkipEmptyData();
	}

	if (RoundInfos[CurrentSpawnedRound].GroupSpawnDatas[CurrentSpawnedGroup].AIDatas.Num() == 0)
	{
		SpawnTime += RoundInfos[CurrentSpawnedRound].GroupSpawnDatas[CurrentSpawnedGroup].WaitTime;
		SpawnTime += RoundInfos[CurrentSpawnedRound].GroupSpawnDatas[CurrentSpawnedGroup].DelayTime;
		CurrentSpawnedGroup++;
		AIIndex = 0;

		SkipEmptyData();
	}

	return false;
}



void UAISpawnDataGroup::InteralGetAIInfos(TArray<FAIInfo>& AIInfo, bool& BreakSpawnChain, bool& SkipCurrentSpawn)
{
	if (SkipEmptyData())
	{
		//No data need to spawned just finish this data
		BreakSpawnChain = true;
		return;
	}

	GetVaildNPCInfos(CurrentSpawnedRound, CurrentSpawnedGroup);

	float BaseTime = GetCurrentRoundTime(CurrentSpawnedRound - 1) + GetCurrentGroupTime(CurrentSpawnedRound, CurrentSpawnedGroup - 1) + GetCurrentAISpawnTime(CurrentSpawnedRound, CurrentSpawnedGroup, AIIndex - 1);

	if (CurrentSpawnedRound == 0 &&
		BaseTime <= 0.f)
	{
		//Start the spawn the AI at the first round
		if (RoundInfos.Num() != 0)
		{
			BaseTime = RoundInfos[0].WaitTime;
		}
	}

	if (CurrentSpawnedGroup == 0)
	{
		//Start to spawn the AI at the target round for the first group
		if (RoundInfos.Num() != 0 && RoundInfos[CurrentSpawnedRound].GroupSpawnDatas.Num() != 0)
		{
			BaseTime += RoundInfos[CurrentSpawnedRound].GroupSpawnDatas[0].WaitTime;
		}
	}

	if (AIIndex == 0)
	{
		//Start to spawn the first AI pawn in the target group within the specific round
		if (RoundInfos.Num() != 0 &&
			RoundInfos[CurrentSpawnedRound].GroupSpawnDatas.Num() != 0 &&
			RoundInfos[CurrentSpawnedRound].GroupSpawnDatas[CurrentSpawnedGroup].AIDatas.Num() != 0)
		{
			BaseTime += RoundInfos[CurrentSpawnedRound].GroupSpawnDatas[CurrentSpawnedGroup].AIDatas[0].WaitTime;
		}
	}
	else
	{
		if (CurrentSpawnedRound < RoundInfos.Num() &&
			AIIndex < RoundInfos[CurrentSpawnedRound].GroupSpawnDatas[CurrentSpawnedGroup].AIDatas.Num() &&
			CurrentSpawnedGroup < RoundInfos[CurrentSpawnedRound].GroupSpawnDatas.Num())
		{
			BaseTime += RoundInfos[CurrentSpawnedRound].GroupSpawnDatas[CurrentSpawnedGroup].AIDatas[AIIndex].WaitTime;
		}
	}

	if (SpawnTime < BaseTime)
		return;

	bool DoBreakCurrentSpawnChain = false;

	if (CheckCurretStatus(DoBreakCurrentSpawnChain))
	{
		BreakSpawnChain = true;
		return;
	}

	FSinglePawnData& SingleSpawnData = RoundInfos[CurrentSpawnedRound].GroupSpawnDatas[CurrentSpawnedGroup].AIDatas[AIIndex];
	TArray<FEnemyIDInfo>& NPCInfos = RoundInfos[CurrentSpawnedRound].GroupSpawnDatas[CurrentSpawnedGroup].NPCInfos;


	if (AIIndex >= NPCInfos.Num())
	{
		//When the data in the excel is then the data in the group, just skip this group
		for (int i = AIIndex; i < RoundInfos[CurrentSpawnedRound].GroupSpawnDatas[CurrentSpawnedGroup].AIDatas.Num(); i++)
		{
			SpawnTime += RoundInfos[CurrentSpawnedRound].GroupSpawnDatas[CurrentSpawnedGroup].AIDatas[i].WaitTime;
			SpawnTime += RoundInfos[CurrentSpawnedRound].GroupSpawnDatas[CurrentSpawnedGroup].AIDatas[i].DelayTime;
		}

		AIIndex = 0;
		CurrentSpawnedGroup++;

		if (CurrentSpawnedGroup >= RoundInfos[CurrentSpawnedRound].GroupSpawnDatas.Num())
		{
			CurrentSpawnedGroup = 0;

			CurrentSpawnedRound++;

			if (CurrentSpawnedRound >= RoundInfos.Num())
			{
				//Don't wait any time just finish this data
				BreakSpawnChain = true;
				return;
			}
		}
	}
	else
	{
		FAIInfo AIInformation;

		GetAIInfoFormNPCID(AIInformation, NPCInfos[AIIndex].NPCID);

		AIInformation.Location = SingleSpawnData.AITransform.GetLocation();
		AIInformation.Rotation = SingleSpawnData.AITransform.GetRotation().Rotator();

		AIInformation.ExternalData = FMemory::Malloc(sizeof(FSpawnDataGroup_AIInfo_ExternalData));

		FSpawnDataGroup_AIInfo_ExternalData* ExternalData = new (AIInformation.ExternalData)FSpawnDataGroup_AIInfo_ExternalData();	//static_cast<FSpawnDataGroup_AIInfo_ExternalData*>(AIInformation.ExternalData);
		ExternalData->NPCID = NPCInfos[AIIndex].NPCID;
		ExternalData->AICommand = SingleSpawnData.AISpawnBehaviorCommand;

		AIInfo.Add(AIInformation);

		BaseTime += SingleSpawnData.DelayTime;

		AIIndex++;
	}

	if (CheckCurretStatus(DoBreakCurrentSpawnChain))
	{
		//There is delay time remain to pass
		BreakSpawnChain = true;
		return;
	}

	if(DoBreakCurrentSpawnChain)
		return;
		
	InteralGetAIInfos(AIInfo, BreakSpawnChain, SkipCurrentSpawn);
}

bool UAISpawnDataGroup::CheckCurretStatus(bool& BreakCurrentSpawnChain)
{
	bool NeedWait = false;

	if (IsFinishedCurrentGroup(NeedWait))
	{
		CurrentSpawnedGroup++;

		AIIndex = 0;
	}

	if (NeedWait)
	{
		BreakCurrentSpawnChain = true;
		return false;
	}

	if (IsFinishedCurrentRound(NeedWait))
	{
		CurrentSpawnedRound++;
		CurrentSpawnedGroup = 0;
		AIIndex = 0;
	}

	if (NeedWait)
	{
		BreakCurrentSpawnChain = true;
		return false;
	}

	if (IsFinished())
	{
		return true;
	}

	return false;
}

bool UAISpawnDataGroup::IsFinished()
{
	float Time = GetCurrentRoundTime(RoundInfos.Num() - 1);
	if (SpawnTime >= Time && CurrentSpawnedRound >= RoundInfos.Num())
		return true;
	
	return false;
}

bool UAISpawnDataGroup::IsFinishedCurrentRound(bool& NeedWait)
{
	if(RoundInfos.Num() == 0)
		return true;

	if (CurrentSpawnedGroup >= RoundInfos[CurrentSpawnedRound].GroupSpawnDatas.Num())
	{
		if(SpawnTime >= GetCurrentRoundTime(CurrentSpawnedRound))
			return true;
		else
		{
			//All group in current round have been spawned but the spawn time is less then required we should break 
			//Current spawn chain to wait the spawn time
			NeedWait = true;
		}
	}
	return false;
}

bool UAISpawnDataGroup::IsFinishedCurrentGroup( bool& NeedWait )
{
	if(RoundInfos.Num() == 0)
		return true;

	if(RoundInfos[CurrentSpawnedRound].GroupSpawnDatas.Num() == 0)
		return true;

	float BaseTime = GetCurrentRoundTime(CurrentSpawnedRound - 1) + GetCurrentGroupTime(CurrentSpawnedRound, CurrentSpawnedGroup-1);

	if (CurrentSpawnedRound == 0)
	{
		//Spawn the first round, I can't get time form GetCurrentRoundTime;
		if (RoundInfos.Num() != 0)
		{
			BaseTime += RoundInfos[CurrentSpawnedRound].WaitTime;
		}
	}

	if (CurrentSpawnedGroup == 0)
	{
		//start the first group for the current round
		if (RoundInfos[CurrentSpawnedRound].GroupSpawnDatas.Num() != 0)
		{
			BaseTime += RoundInfos[CurrentSpawnedRound].GroupSpawnDatas[0].WaitTime;
		}
	}

	BaseTime += GetCurrentAISpawnTime(CurrentSpawnedRound, CurrentSpawnedGroup, RoundInfos[CurrentSpawnedRound].GroupSpawnDatas[CurrentSpawnedGroup].AIDatas.Num()-1);

	BaseTime += RoundInfos[CurrentSpawnedRound].GroupSpawnDatas[CurrentSpawnedGroup].DelayTime;

	if (AIIndex >= RoundInfos[CurrentSpawnedRound].GroupSpawnDatas[CurrentSpawnedGroup].AIDatas.Num())
	{
		if (SpawnTime >= BaseTime)
		{
			return true;
		}	
		else
		{
			//All AI in the group is spawned but the spawn time is still less then it, we should stop this spawn chain to wait the spawn time
			NeedWait = true;
		}
	}

	return false;
}

#pragma  endregion Implementation1

int UAISpawnDataGroup::GetCurrentRound()
{
	int CurrentRound = 0;

	for (CurrentRound = 0; CurrentRound < RoundInfos.Num(); CurrentRound++)
	{
		if(!RoundInfos[CurrentRound].HasBeenProcessed)
			break;
	}

	return CurrentRound;
}

int UAISpawnDataGroup::GetMaxRound()
{
	return RoundInfos.Num();
}

int UAISpawnDataGroup::GetNumberOfTotalDeadAI()
{
	int Result = 0;

	for (int i = 0; i < AIInfosAtCurrentRound.Num(); i++)
	{
		if (AIInfosAtCurrentRound[i].IsControllerDeadOrDestroyed())
		{
			Result++;
		}
	}

	return Result;
}

int UAISpawnDataGroup::GetAIRemainedToSpawnInCurrentRound() 
{
	if(RoundInfos.IsValidIndex(GetCurrentRound()))
		return INDEX_NONE;

	int Result = 0;

	for (int i = 0; i < RoundInfos[GetCurrentRound()].GroupSpawnDatas.Num(); i++)
	{
		FSingleGroupDataInfo& GroupData = RoundInfos[GetCurrentRound()].GroupSpawnDatas[i];

		Result += GroupData.NeedToSpawnedAICount - GroupData.SpawnedCount;
	}

	return Result;
}

void UAISpawnDataGroup::SpawnAIPostProcess(AAIController* Controller, APawn* Pawn,  FAIInfo& AIInfo)
{
	if (Controller == nullptr || AIInfo.ExternalData == nullptr)
	{
		return;
	}
	
	for (int i = 0; i < AIInfosAtCurrentRound.Num(); i++)
	{
		if (AIInfosAtCurrentRound[i].AIInfo == AIInfo && AIInfosAtCurrentRound[i].Controller == nullptr 
			//Make sure this info is used to spawn AI for the first time
			&& !AIInfosAtCurrentRound[i].IsControllerDeadOrDestroyed())
		{
			AIInfosAtCurrentRound[i].Controller = Controller;
			AIInfosAtCurrentRound[i].ControllerHaveBeenAssigned = true;
			break;
		}
	}

	if (Controller->GetClass()->ImplementsInterface(UAISpawnSupportInterface::StaticClass()))
	{
		IAISpawnSupportInterface* AISpawnSupport = Cast<IAISpawnSupportInterface>(Controller);

		//When the controller derived from the interface in the BP, this value will be null
		if (AISpawnSupport == nullptr)
		{
			IAISpawnSupportInterface::Execute_BP_SetAISpawnCommand(Controller, static_cast<FSpawnDataGroup_AIInfo_ExternalData*>(AIInfo.ExternalData)->AICommand);
			IAISpawnSupportInterface::Execute_BP_FinishedSpawned(Controller);
		}
		else
		{
			AISpawnSupport->SetAISpawnCommand(static_cast<FSpawnDataGroup_AIInfo_ExternalData*>(AIInfo.ExternalData)->AICommand);
			AISpawnSupport->FinishedSpawned();
		}
	}
	
	
	FMemory::Free(AIInfo.ExternalData);
	AIInfo.ExternalData = nullptr;

	return;
}

void UAISpawnDataGroup::ControllerDeadOrDestroyedCallback(bool IsDead, AAIController* Controller)
{
	if (Controller == nullptr)
	{
		return;
	}

	for (int i = 0; i < AIInfosAtCurrentRound.Num(); i++)
	{
		if (AIInfosAtCurrentRound[i].Controller == Controller)
		{
			AIInfosAtCurrentRound[i].IsDestroyed = !IsDead;
			AIInfosAtCurrentRound[i].IsDead = IsDead;
			//AIInfosAtCurrentRound[i].Controller = nullptr;
		}
	}
}

bool UAISpawnDataGroup::PreProcessNewPawn(AController* Controller, APawn* Pawn,  FAIInfo& AIInfo)
{
	if(AIInfo.ExternalData == nullptr)
		return false;

	IAISpawnInitSupportInterface* AISpawnInit = Cast<IAISpawnInitSupportInterface>(Pawn);
	if (!AISpawnInit)
	{
		UE_LOG(LogTrigger, Error, TEXT("Faild to spawn Pawn when run AI spawn init task, Please check the data in excel"));

		Controller->Destroy();
		Pawn->Destroy();

		return false;
	}

	AISpawnInit->InitCharacterAttributes(static_cast<FSpawnDataGroup_AIInfo_ExternalData*>(AIInfo.ExternalData)->NPCID);

	return true;
}

bool UAISpawnDataGroup::PostProcessNewPawn(AController* Controller, APawn* Pawn, FAIInfo& AIInfo)
{
	return true;
}

bool UAISpawnDataGroup::CanStopSpawnAI()
{
	bool IsAllRoundProcessed = true;

	/*
	* If all AI spawned by this data have not dead, this data should not be stopped
	*/
	for (int i = 0; i < RoundInfos.Num(); i++)
	{
		if (!IsAllAIDeadInCurrentRound(i))
		{
			IsAllRoundProcessed = false;
			break;
		}
	}

	return IsAllRoundProcessed;
}

void UAISpawnDataGroup::GetALLNPCIDs(TArray<int>& NPCIDs)
{
	NPCIDs.Empty();

	for (int RoundIndex = 0; RoundIndex < RoundInfos.Num(); RoundIndex++)
	{
		for (int GroupIndex = 0; GroupIndex < RoundInfos[RoundIndex].GroupSpawnDatas.Num(); GroupIndex++)
		{
			UAIInfoAccessorInAISpawnDataGroup* GroupAIInfoAccessor = Cast<UAIInfoAccessorInAISpawnDataGroup>(AIInfoAccessor);

			if (GroupAIInfoAccessor != nullptr)
			{
				GroupAIInfoAccessor->SetGroupAndRoundIndex(RoundIndex, GroupIndex);
			}

			TArray<FEnemyIDInfo> IDInfos;
			IDInfos.Empty();

			if (AIInfoAccessor != nullptr)
			{
				AIInfoAccessor->GetVaildNPCInfos(IDInfos);
			}

			for (int IDIndex = 0; IDIndex < IDInfos.Num(); IDIndex++)
			{
				NPCIDs.Add(IDInfos[IDIndex].NPCID);
			}
		}
	}
}

void UAISpawnDataGroup::Reset(ETriggerTaskResetType ResetType)
{
	if (EnumHasAnyFlags(ResetType, ETriggerTaskResetType::ETriggerTaskResetType_ResetContent))
	{
		for (int i = 0; i < AIInfosAtCurrentRound.Num(); i++)
		{
			if (AIInfosAtCurrentRound[i].Controller != nullptr)
			{
				if (AIInfosAtCurrentRound[i].Controller->GetPawn() != nullptr)
				{
					AIInfosAtCurrentRound[i].Controller->GetPawn()->Destroy();
				}

				if (AIInfosAtCurrentRound[i].Controller != nullptr)
				{
					AIInfosAtCurrentRound[i].Controller->Destroy();
				}
			}
		}
	}

	if (EnumHasAnyFlags(ResetType, ETriggerTaskResetType::ETriggerTaskResetType_ClearData))
	{
		AIInfosAtCurrentRound.Empty();
		SpawnTime = 0.0f;
		TargetTime = 0.0f;

		for (int RoundIndex = 0; RoundIndex < RoundInfos.Num(); RoundIndex++)
		{
			RoundInfos[RoundIndex].Reset();
		}
	}

}

void UAISpawnDataGroup::ApplayDataFromAIPreviewCharacter(AAIPreviewCharacter* Character)
{
	if(Character == nullptr || Character->RoundIndex < 0 || Character->GroupIndex < 0 || Character->PawnIndex < 0)
		return;
	
	for (int i = RoundInfos.Num(); i <= Character->RoundIndex; i++)
	{
		RoundInfos.Add(FSingleGroupSpawnRoundInfo());
	}

	FSingleGroupSpawnRoundInfo& RoundInfo = RoundInfos[Character->RoundIndex];

	for (int i = RoundInfo.GroupSpawnDatas.Num(); i <= Character->GroupIndex; i++)
	{
		RoundInfo.GroupSpawnDatas.Add(FSingleGroupDataInfo());
	}

	FSingleGroupDataInfo& GroupInfo = RoundInfo.GroupSpawnDatas[Character->GroupIndex];

	for (int i = GroupInfo.AIDatas.Num(); i <= Character->PawnIndex; i++)
	{
		GroupInfo.AIDatas.Add(FSinglePawnData());
	}

	FSinglePawnData& AIData = GroupInfo.AIDatas[Character->PawnIndex];

	//AIData.AIClassType = Character->AIClassType;
	AIData.DelayTime = Character->DelayTime;
	AIData.WaitTime = Character->WaitTime;
	AIData.AISpawnBehaviorCommand = Character->AICommand;
	AIData.AITransform = Character->GetActorTransform();
	
}

void UAISpawnDataGroup::OnAISpawnGroupDataTemplateDestoryed(AActor* DestroyedActor)
{
#if WITH_EDITORONLY_DATA
	AAISpawnGroupDataTemplate* Template = Cast<AAISpawnGroupDataTemplate>(DestroyedActor);

	if (Template == nullptr)
		return;

	if (RoundInfos.IsValidIndex(Template->GetRoundIndex()) &&
		RoundInfos[Template->GetRoundIndex()].GroupSpawnDatas.IsValidIndex(Template->GetGroupIndex()) &&
		//Only when the AI spawn group data template is equal to the destroyed actor
		RoundInfos[Template->GetRoundIndex()].GroupSpawnDatas[Template->GetGroupIndex()].AISpawnGroupDataTemplate == Template)
	{
		RoundInfos[Template->GetRoundIndex()].GroupSpawnDatas[Template->GetGroupIndex()].AISpawnGroupDataTemplate = nullptr;

		//RoundInfos[Template->GetRoundIndex()].GroupSpawnDatas.RemoveAt(Template->GetGroupIndex());

		////When the round info have no group data then just remove the round
		//if (RoundInfos[Template->GetRoundIndex()].GroupSpawnDatas.Num() == 0)
		//{
		//	RoundInfos.RemoveAt(Template->GetRoundIndex());
		//}
	}
#endif
}

#if WITH_EDITORONLY_DATA

void UAISpawnDataGroup::ClearEditorInformaiton()
{
	if(IsGarbageCollecting())
		return;

	for (int i = 0; i < RoundInfos.Num(); i++)
	{
		for (int j = 0; j < RoundInfos[i].GroupSpawnDatas.Num(); j++)
		{
			if (RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplate != nullptr && RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplate->IsValidLowLevel())
			{
				if (GetWorld())
				{
					GetWorld()->DestroyActor(RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplate.Get());
					RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplate = nullptr;
				}
			}

		}
	}
}

void UAISpawnDataGroup::OnEndLoadMap(uint32 Flag)
{
	ClearWorldInformation(nullptr, GWorld);
}

void UAISpawnDataGroup::OnEndLoadMapInGame(UWorld* LoadedWorld)
{
	ClearWorldInformation(nullptr, LoadedWorld);
}

void UAISpawnDataGroup::OnLevelChangedInWorld(ULevel* Level, UWorld* World)
{
	ClearWorldInformation(Level, World);
}

void UAISpawnDataGroup::OnPostSaveWorld(uint32 SaveFlags, UWorld* World, bool bSuccess)
{
#if WITH_EDITOR
	UpdateAIGroupSpawnDataTemplate();
#endif
}

void UAISpawnDataGroup::OnPreSaveWorld(uint32 SaveFlags, UWorld* World)
{
#if WITH_EDITOR
	ClearWorldInformation(nullptr, World);
#endif
}

void UAISpawnDataGroup::ClearWorldInformation(ULevel* Level, UWorld* World)
{
	ClearEditorInformaiton();
}

void UAISpawnDataGroup::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	UpdateAIGroupSpawnDataTemplate();

	if (FProperty* PropertyThatChanged = PropertyChangedEvent.Property)
	{
		const FName PropertyName = PropertyThatChanged->GetFName();

		if (PropertyName == GET_MEMBER_NAME_CHECKED(FSingleGroupDataInfo, AISpawnGroupDataTemplateClass))
		{
			
		}
	}

}

void UAISpawnDataGroup::SelectedInEditor(UObject* SelectedObject)
{
	if (SelectedObject != nullptr && GetTaskOwner() != nullptr &&
		GetTaskOwner()->GetTriggerOwner() != nullptr &&
		GetTaskOwner()->GetTriggerOwner()->GetOuter() == SelectedObject)
	{
		for (int i = 0; i < RoundInfos.Num(); i++)
		{
			for (int j = 0; j < RoundInfos[i].GroupSpawnDatas.Num(); j++)
			{
				if (RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplate != nullptr)
				{
					//RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplate->InitializeActor(this, i, j);

					RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplate->SelectedInEditor(RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplate.Get());
				}
			}
		}
	}
	else
	{
		bool SelectedTemplete = false;
		bool SelectedPreviewCharacter = false;

		//First find the template who don't own this selected object, I will invisible all RelationshipSpile
		for (int i = 0; i < RoundInfos.Num(); i++)
		{
			for (int j = 0; j < RoundInfos[i].GroupSpawnDatas.Num(); j++)
			{
				if (RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplate != nullptr && 
					RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplate != SelectedObject)
				{
					TArray<AAIPreviewCharacter*> Copy = RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplate->PreviewCharacters;
					for (int k = 0; k < Copy.Num(); k++)
					{
						if (Copy[k] != SelectedObject)
						{
							SelectedPreviewCharacter = true;
							break;
						}
					}
				}
				else if (RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplate != nullptr &&
					RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplate == SelectedObject)
				{
					SelectedTemplete = true;
					break;
				}
			}
		}

		//Only process when the designer selected the unrelated actor
		if (!(SelectedTemplete || SelectedPreviewCharacter))
		{
			for (int i = 0; i < RoundInfos.Num(); i++)
			{
				for (int j = 0; j < RoundInfos[i].GroupSpawnDatas.Num(); j++)
				{
					if (RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplate != nullptr)
					{
						RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplate->InitializeActor(this, i, j);

						RoundInfos[i].GroupSpawnDatas[j].AISpawnGroupDataTemplate->SelectedInEditor(nullptr);
					}
				}
			}
		}
	}
}

#endif


float UAISpawnDataGroup::GetCurrentRoundTime(int RoundIndex, bool IncludeGroupTime, bool IncludeAITime)
{
	float BaseTime = 0.f;

	if (NeedSkipWaitTimeAndDelayTime())
	{
		return BaseTime;
	}

	if (RoundIndex < 0 || RoundIndex >= RoundInfos.Num())
		return BaseTime;

	BaseTime += GetCurrentRoundTime(RoundIndex - 1, IncludeGroupTime, IncludeAITime);

	BaseTime += RoundInfos[RoundIndex].WaitTime;

	if (IncludeGroupTime)
	{
		BaseTime += GetCurrentGroupTime(RoundIndex, RoundInfos[RoundIndex].GroupSpawnDatas.Num() - 1, IncludeAITime);
	}

	BaseTime += RoundInfos[RoundIndex].DelayTime;

	return BaseTime;
}

float UAISpawnDataGroup::GetCurrentGroupTime(int RoundIndex, int GroupIndex, bool IncludeAITime)
{
	float BaseTime = 0.f;

	if (NeedSkipWaitTimeAndDelayTime())
		return BaseTime;

	if (RoundIndex < 0 || RoundIndex >= RoundInfos.Num())
		return BaseTime;

	if (GroupIndex < 0 || GroupIndex >= RoundInfos[RoundIndex].GroupSpawnDatas.Num())
		return BaseTime;

	int ActualGroupIndex = FMath::Clamp(GroupIndex, 0, RoundInfos[RoundIndex].GroupSpawnDatas.Num() - 1);

	for (int i = 0; i <= ActualGroupIndex; i++)
	{
		BaseTime += RoundInfos[RoundIndex].GroupSpawnDatas[i].WaitTime;

		if (IncludeAITime)
		{
			BaseTime += GetCurrentAISpawnTime(RoundIndex, i, RoundInfos[RoundIndex].GroupSpawnDatas[i].AIDatas.Num() - 1);
		}
		
		BaseTime += RoundInfos[RoundIndex].GroupSpawnDatas[i].DelayTime;
	}

	return BaseTime;
}

float UAISpawnDataGroup::GetCurrentAISpawnTime(int RoundIndex, int GroupIndex, int AISpawnIndex)
{
	float BaseTime = 0.f;

	if (NeedSkipWaitTimeAndDelayTime())
		return BaseTime;

	if (RoundIndex < 0 || RoundIndex >= RoundInfos.Num())
		return BaseTime;

	if (GroupIndex < 0 || GroupIndex >= RoundInfos[RoundIndex].GroupSpawnDatas.Num())
		return BaseTime;

	if (AISpawnIndex < 0)
		return BaseTime;

	int ActualAIIndex = FMath::Clamp(AISpawnIndex, 0, RoundInfos[RoundIndex].GroupSpawnDatas[GroupIndex].AIDatas.Num() - 1);

	for (int i = 0; i <= AISpawnIndex; i++)
	{
		BaseTime += RoundInfos[RoundIndex].GroupSpawnDatas[GroupIndex].AIDatas[i].WaitTime;
		BaseTime += RoundInfos[RoundIndex].GroupSpawnDatas[GroupIndex].AIDatas[i].DelayTime;
	}

	return BaseTime;
}

#pragma  region Implementation2

bool UAISpawnDataGroup::CheckTime(float& SpawnedTime, float& GoleTime, float CurrentTime)
{
	//When the expected time is large than actual spawned time we should do nothing utile the actual time exceeds it.
	if (SpawnedTime < CurrentTime)
	{
		GoleTime = CurrentTime;
		return true;
	}

	return false;
}

bool UAISpawnDataGroup::IsAllAIDeadInCurrentRound( int RoundIndex )
{
	bool Result = true;

	//If the round index is invalid just return true
	if (RoundIndex >= RoundInfos.Num() || RoundIndex < 0)
	{
		return Result;
	}

	//If this round have not processed then I assume all ai in this group is not dead
	if (!RoundInfos[RoundIndex].IsAllAISpawned())
	{
		return false;
	}

	for (int i = 0; i < AIInfosAtCurrentRound.Num(); i++)
	{
		if (AIInfosAtCurrentRound[i].RoundIndex == RoundIndex)
		{
			if (!AIInfosAtCurrentRound[i].IsControllerDeadOrDestroyed())
			{
				Result = false;
				break;
			}
		}
	}

	return Result;
}

UAISpawnDataGroup::EProcessResultType UAISpawnDataGroup::Process(float DeltaTime, TArray<FAIInfo>& AIInfos, bool& StopSpawnChain)
{
	static bool StopRoundTimePass = false;

	if (RoundInfos.Num() == 0)
	{
		/*
		* There is no valid data in this group so just stop this data to spawn AI
		*/
		StopSpawnChain = true;
		return EProcessResultType::EProcessResultType_Success;
	}

	if (SpawnTime > GetCurrentRoundTime(RoundInfos.Num() - 1, true, false) )
	{
		//When AI spawned in current round still alive we should pause spawn process until all of them dead
		if (IsAllAIDeadInCurrentRound(RoundInfos.Num() - 1))
		{
			if (RoundInfos[RoundInfos.Num() - 1].HasBroadCastFinishedEvent == false)
			{
				RoundInfos[RoundInfos.Num() - 1].HasBroadCastFinishedEvent = true;
				AISpawnFinished.Broadcast(this);
			}

			StopSpawnChain = true;
		}

		bool IsAllRoundRrocessed = true;
		for (int i = 0; i < RoundInfos.Num(); i++)
		{
			if (!RoundInfos[i].IsAllAISpawned())
			{
				IsAllRoundRrocessed = false;
				break;
			}
		}

		if (IsAllRoundRrocessed)
		{
			return EProcessResultType::EProcessResultType_Success;
		}
	}

	if (TargetTime > SpawnTime && !StopRoundTimePass)
	{
		SpawnTime += DeltaTime;

		if (SpawnTime < TargetTime)
		{
			//if still have no enough time skip this frame
			return EProcessResultType::EProcessResultType_Success;
		}
	}

	float localTime = 0.0f;

	for (int i = 0; i < RoundInfos.Num(); i++)
	{
		//By default each round should not stop the spawn time
		StopRoundTimePass = false;

		if(!NeedSkipWaitTimeAndDelayTime())
			localTime += RoundInfos[i].WaitTime;

		if (CheckTime(SpawnTime, TargetTime, localTime))
			break;

		EProcessResultType WaitTimeType =  ProcessNewRound(i, localTime, AIInfos, DeltaTime);

		if (WaitTimeType != EProcessResultType::EProcessResultType_CanGoNextRound)
		{
			if(WaitTimeType == EProcessResultType_WaitAIWaitTime || WaitTimeType == EProcessResultType_WaitAIDelayTime)
				StopRoundTimePass = true;

			return WaitTimeType;
		}

		if (!NeedSkipWaitTimeAndDelayTime())
			localTime += RoundInfos[i].DelayTime;

		if (CheckTime(SpawnTime, TargetTime, localTime))
			break;

		RoundInfos[i].HasBeenProcessed = true;

		//If AI informations at current round have been used, we should check weather the spawned AI have dead.
		if (!IsAllAIDeadInCurrentRound(i))
		{
			//When the total AI have not been dead we should pause the spawn time, so that when all AI are dead, the next round can go on
			StopRoundTimePass = true;
			break;
		}

		if (RoundInfos[i].HasBroadCastFinishedEvent == false)
		{
			RoundInfos[i].HasBroadCastFinishedEvent = true;
			AISpawnFinished.Broadcast(this);
		}
		
	}

	SpawnTime += DeltaTime;

	return EProcessResultType::EProcessResultType_Success;
}

UAISpawnDataGroup::EProcessResultType UAISpawnDataGroup::ProcessNewRound(int NewRoundIndex, float& LocalTime, TArray<FAIInfo>& AIInfos, float DeltaTime)
{
	for (int i = 0; i < RoundInfos[NewRoundIndex].GroupSpawnDatas.Num(); i++)
	{
		FSingleGroupDataInfo& GroupData = RoundInfos[NewRoundIndex].GroupSpawnDatas[i];

		//The wait time only execute for the first time to enter this group
		if (!NeedSkipWaitTimeAndDelayTime())
			LocalTime += GroupData.WaitTime;

		if (CheckTime(SpawnTime, TargetTime, LocalTime))
			return EProcessResultType::EProcessResultType_WaitGroupWaitTime;

		//When we get into this group for the first time we should determine total AI to spawned
		if (GroupData.SpawnedCount == 0 &&
			GroupData.NeedToSpawnedAICount < 0)
		{
			GetVaildNPCInfos(NewRoundIndex, i);

			GroupData.NeedToSpawnedAICount = GroupData.NPCInfos.Num();
		}

		float GroupLocalTime = 0.f;

		EProcessResultType ProcessType = ProcessNewGroup(NewRoundIndex, i, GroupLocalTime, AIInfos, DeltaTime);

		if (GroupData.NeedToSpawnedAICount - GroupData.SpawnedCount > GroupData.NumberRemaining)
		{
			//When this group need to more time then just skip the group chain
			if (ProcessType == EProcessResultType::EProcessResultType_WaitAIWaitTime || ProcessType == EProcessResultType_WaitAIDelayTime)
			{
				return ProcessType;
			}
		}

		if(!NeedSkipWaitTimeAndDelayTime())
			LocalTime += GroupData.DelayTime;
		if (
			CheckTime(SpawnTime, TargetTime, LocalTime)
			)
			return EProcessResultType::EProcessResultType_WaitGroupDelayTime;
	}

	return EProcessResultType::EProcessResultType_CanGoNextRound;
}

UAISpawnDataGroup::EProcessResultType UAISpawnDataGroup::ProcessNewGroup(int NewRoundIndex, int NewGroupIndex, float& LocalTime, TArray<FAIInfo>& AIInfos, float DeltaTime)
{
	int AISpawnPointNum = RoundInfos[NewRoundIndex].GroupSpawnDatas[NewGroupIndex].AIDatas.Num();
	FSingleGroupDataInfo& GroupData = RoundInfos[NewRoundIndex].GroupSpawnDatas[NewGroupIndex];

	if (AISpawnPointNum == 0)
	{
		UE_LOG(LogTrigger, Warning, TEXT("There is not data in AISpawnTask,Please delete this task and add new task, and Save it before you play again!! "));
		return EProcessResultType::EProcessResultType_SkipGroup;
	}

	float& LocalGroupSpawnedTime = GroupData.SpawnedTime;
	float& LocalGroupTargetTime = GroupData.TargetTime;
	int& CircleCount = GroupData.CircleCount;

	if(!NeedSkipWaitTimeAndDelayTime())
		LocalGroupSpawnedTime += DeltaTime;

	if (LocalGroupSpawnedTime >= LocalGroupTargetTime)
	{
		//Skip this group
		if (GroupData.NeedToSpawnedAICount == GroupData.SpawnedCount)
		{
			return EProcessResultType::EProcessResultType_AllAISpawnedInGroup;
		}

		//When come into new circle of group should reset the local time
		if ((GroupData.SpawnedCount >= CircleCount * AISpawnPointNum &&
			GroupData.SpawnedCount % AISpawnPointNum == 0 ) ||
			GroupData.SpawnedCount >= GroupData.NeedToSpawnedAICount)
		{
			for (int j = 0; j < AISpawnPointNum; j++)
			{
				RoundInfos[NewRoundIndex].GroupSpawnDatas[NewGroupIndex].AIDatas[j].Reset();
			}

			CircleCount++;
			LocalGroupSpawnedTime = 0.0f;
			LocalGroupTargetTime = 0.0f;
		}
	}

	for (int i = 0; i < AISpawnPointNum; i++)
	{
		//When the spawned AI is meet the max count, I need to skip the follow points
		if (GroupData.SpawnedCount >= GroupData.NeedToSpawnedAICount)
			continue;
		
		if (!NeedSkipWaitTimeAndDelayTime())
			LocalTime += GroupData.GetRandomTime(i, false);

		if (CheckTime(LocalGroupSpawnedTime, LocalGroupTargetTime, LocalTime))
			return EProcessResultType::EProcessResultType_WaitAIWaitTime;
		 
		bool IsSpawnedNewAI = false;

		int GroupCircleCount = (CircleCount - 1)>0 ? CircleCount - 1 : 0;

		IsSpawnedNewAI = ProcessNewAI(NewRoundIndex, NewGroupIndex, i + GroupCircleCount * AISpawnPointNum, AIInfos);
	
		if (IsSpawnedNewAI)
		{
			GroupData.SpawnedCount++;
			{
				//When new AI spawned this should be set to true;
				GroupData.AIDatas[i].HaveUsed = true;
			}
		}

		if (!NeedSkipWaitTimeAndDelayTime())
			LocalTime += GroupData.GetRandomTime(i, true);

		if (CheckTime(LocalGroupSpawnedTime, LocalGroupTargetTime, LocalTime))
		{
			return EProcessResultType::EProcessResultType_WaitAIDelayTime;
		}
	}

	//If the spawned AI is not meet the max num we should run this group again
	if (GroupData.SpawnedCount < GroupData.NeedToSpawnedAICount)
	{
		LocalTime = 0.f;

		return ProcessNewGroup(NewRoundIndex, NewGroupIndex, LocalTime, AIInfos, DeltaTime);
	}

	return EProcessResultType::EProcessResultType_SkipGroup;
}

bool UAISpawnDataGroup::ProcessNewAI(int NewRoundIndex, int NewGroupIndex, int ProcessedAIIndex, TArray<FAIInfo>& AIInfos)
{
	int PositionIndex = ProcessedAIIndex % RoundInfos[NewRoundIndex].GroupSpawnDatas[NewGroupIndex].AIDatas.Num();

	if(NewRoundIndex < 0 || NewRoundIndex >= RoundInfos.Num() || 
		NewGroupIndex < 0 || NewGroupIndex >= RoundInfos[NewRoundIndex].GroupSpawnDatas.Num() ||
		PositionIndex < 0 || PositionIndex >= RoundInfos[NewRoundIndex].GroupSpawnDatas[NewGroupIndex].AIDatas.Num())
		return false;

	FSinglePawnData& SingleSpawnData = RoundInfos[NewRoundIndex].GroupSpawnDatas[NewGroupIndex].AIDatas[PositionIndex];
	TArray<FEnemyIDInfo>& NPCInfos = RoundInfos[NewRoundIndex].GroupSpawnDatas[NewGroupIndex].NPCInfos;

	//If this data have used I need to skip this spawn Action
	if (SingleSpawnData.HaveUsed)
	{
		return false;
	}

	if (RoundInfos[NewRoundIndex].GroupSpawnDatas[NewGroupIndex].SpawnedCount >= RoundInfos[NewRoundIndex].GroupSpawnDatas[NewGroupIndex].NeedToSpawnedAICount)
	{
		//This branch should never trigger
		return false;
	}

	FAIInfo AIInformation;

	GetAIInfoFormNPCID(AIInformation, NPCInfos[RoundInfos[NewRoundIndex].GroupSpawnDatas[NewGroupIndex].SpawnedCount].NPCID);

	AIInformation.Location = SingleSpawnData.AITransform.GetLocation();
	AIInformation.Rotation = SingleSpawnData.AITransform.GetRotation().Rotator();
	
	AIInformation.CreateExternalDataBuffer<FSpawnDataGroup_AIInfo_ExternalData>();

	FSpawnDataGroup_AIInfo_ExternalData* ExternalData = new (AIInformation.ExternalData)FSpawnDataGroup_AIInfo_ExternalData();	//static_cast<FSpawnDataGroup_AIInfo_ExternalData*>(AIInformation.ExternalData);
	ExternalData->NPCID = NPCInfos[ProcessedAIIndex].NPCID;
	ExternalData->AICommand = SingleSpawnData.AISpawnBehaviorCommand;

	AIInfos.Add(AIInformation);

	UE_LOG(LogTrigger, Log, TEXT("New AI Start to be spawned with ID:%d by task: %s within Trigger %s "), 
			NPCInfos[ProcessedAIIndex].NPCID, 
		GetTaskOwner() == nullptr ? TEXT("Invaild Task"): *GetTaskOwner()->GetName(),
		GetTaskOwner() == nullptr || GetTaskOwner()->GetTriggerOwner()  == nullptr || GetTaskOwner()->GetTriggerOwner()->GetOwner() == nullptr ? TEXT("Invaid Actor") : *GetTaskOwner()->GetTriggerOwner()->GetOwner()->GetName());
	
	FEnemyInfo EnemyInfo;
	EnemyInfo.AIInfo = AIInformation;
	EnemyInfo.RoundIndex = NewRoundIndex;
	EnemyInfo.GroupIndex = NewGroupIndex;
	EnemyInfo.AIIndex = PositionIndex;

	AIInfosAtCurrentRound.Add(EnemyInfo);

	return true;
}

bool UAISpawnDataGroup::CanGointoNextRound( int NewRoundIndex, int NewGroupIndex )
{
	bool Result = false;

	int AISpawnPointNum = RoundInfos[NewRoundIndex].GroupSpawnDatas[NewGroupIndex].AIDatas.Num();
	int NeedToSpawnedAICount = RoundInfos[NewRoundIndex].GroupSpawnDatas[NewGroupIndex].NeedToSpawnedAICount;
	int SpawnCount = RoundInfos[NewRoundIndex].GroupSpawnDatas[NewGroupIndex].SpawnedCount;
	//When need to enter new circle I need to release the passed time in current group
	if ( SpawnCount >= NeedToSpawnedAICount)
	{
		Result = true;
	}

	return Result;
}

#pragma  endregion Implementation2

bool UAISpawnDataGroup::NeedSkipWaitTimeAndDelayTime()
{
	bool Result = false;

	UTS_AIStatics* AIStatics = UTriggerBlueprintLib::GetAIStatics(UTS_AIStatics::StaticClass());

	if (AIStatics != nullptr)
	{
		Result = AIStatics->GetAISpawnRoundSkipWaitAndDelayTime();
	}

	return Result;
}