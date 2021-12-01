#include "TriggerRuntimeContent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/PlayerState.h"
#include "TriggerBlueprintLib.h"
#include "TriggerConfig.h"


FTriggerScenarioHandle FTriggerScenarioHandle::InvalidHandle;
FTriggerScenarioInfo FTriggerScenarioInfo::InvalidInfo;

FTriggerScenarioHandle::FTriggerScenarioHandle()
	:Handle(INDEX_NONE)
{

}

FTriggerScenarioHandle::FTriggerScenarioHandle(const FTriggerScenarioHandle& OtherHandle)
{
	Handle = OtherHandle.GetHandle();
}

void FTriggerScenarioHandle::GenerateNewHandle()
{
	static int LocalHandle = INDEX_NONE;

	Handle = ++LocalHandle;

}

bool FTriggerScenarioHandle::operator==(const FTriggerScenarioHandle& OtherHandle) const
{
	return Handle == OtherHandle.GetHandle();
}

void FTriggerScenarioHandle::operator=(const FTriggerScenarioHandle& OtherHandle)
{
	Handle = OtherHandle.GetHandle();
}


UTriggerRuntimeContent::UTriggerRuntimeContent(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	ScenerioInfos.Empty();
}

void UTriggerRuntimeContent::InitializeRuntimeContent()
{
	UTriggerConfig* TriggerConfig = Cast<UTriggerConfig>(UTriggerConfig::StaticClass()->GetDefaultObject());

	if (TriggerConfig != nullptr)
	{
#if WITH_EDITORONLY_DATA
		SetTriggerCategory(TriggerConfig->EditorDefaultStartTriggerCategories);
#endif
	}
		
	OnInitializeRuntimeContent();
}


void UTriggerRuntimeContent::GetOpenedScenarioInfosByPlayerController(APlayerController* Player, TArray<FTriggerScenarioHandle>& OutInfos)
{
	OutInfos.Empty();

	if(Player == nullptr)
		return;

	APlayerState* PlayerState = Player->GetPlayerState<APlayerState>();

	if(PlayerState == nullptr)
		return;

	for (int i = 0; i < ScenerioInfos.Num(); i++)
	{
		int Index = INDEX_NONE;//ScenerioInfos[i].ParticipatorNames.Find(PlayerState->PlayerName);

		if(Index == INDEX_NONE)
			continue;
		
		if (ScenerioInfos[i].State == EScenarioRunState::EScenarioRunState_Open)
		{
			OutInfos.Add(ScenerioInfos[i].GetHandle());
		}
	}
}

FTriggerScenarioInfo& UTriggerRuntimeContent::GetScenerioInfo(const FTriggerScenarioHandle& Handle) const
{
	const FTriggerScenarioInfo* Result = ScenerioInfos.FindByPredicate([&](const FTriggerScenarioInfo& OtherData){
		if(OtherData.GetHandle() == Handle)
			return true;
		else
			return false;
	});

	if (Result == nullptr)
	{
		return FTriggerScenarioInfo::InvalidInfo;
	}
	else
	{
		return *const_cast<FTriggerScenarioInfo*>(Result);
	}
}

void UTriggerRuntimeContent::GetAllActiveScenarios(TArray<FTriggerScenarioHandle>& ActiveScenerioHandle) const
{
	ActiveScenerioHandle.Empty();

	for (int i = 0; i < ScenerioInfos.Num(); i++)
	{
		if (ScenerioInfos[i].State != EScenarioRunState::EScenarioRunState_Closed)
		{
			ActiveScenerioHandle.Add(ScenerioInfos[i].GetHandle());
		}
	}
}

void UTriggerRuntimeContent::GetAllOpenedScenarios(TArray<FTriggerScenarioHandle>& ActiveScenerioHandle) const
{
	ActiveScenerioHandle.Empty();

	for (int i = 0; i < ScenerioInfos.Num(); i++)
	{
		if (ScenerioInfos[i].State == EScenarioRunState::EScenarioRunState_Open)
		{
			ActiveScenerioHandle.Add(ScenerioInfos[i].GetHandle());
		}
	}
}

bool UTriggerRuntimeContent::CanUseComponentInfo(const FTriggerTaskComponentInformation& ComponentInfo)
{
	//The invalid category will be ignored
	if(!UTriggerBlueprintLib::IsValidTriggerCategory(GetTriggerCategory()))
		return true;

	if(GetTriggerCategory().IsEmpty())
		return true;

	//First try to check weather the target component is match for current difficulty
	for (int i = 0; i < GetTriggerCategory().Num(); i++)
	{
		FString DifficultyName = UTriggerBlueprintLib::GetTriggerCategoryNodeName(GetTriggerCategory().GetByIndex(i), ECategoryFormat::Difficulty);

		if (ComponentInfo.MapName.Contains(DifficultyName, ESearchCase::CaseSensitive))
			return true;
	}

	return false;
}


FTriggerScenarioHandle UTriggerRuntimeContent::AddSceneario(const FGameplayTag& Scenario, TArray<APlayerController*>& Players)
{
	if(!Scenario.IsValid())
		return FTriggerScenarioHandle::InvalidHandle;

	FTriggerScenarioInfo* ScenarioInfoPtr = ScenerioInfos.FindByPredicate([&](const FTriggerScenarioInfo& Data){
		if (Scenario == Data.ScenarioTag)
		{
			return true;
		}
		else
		{
			return false;
		}
	});

	if (ScenarioInfoPtr == nullptr)
	{
		FTriggerScenarioInfo ScenarioInfo;
		ScenarioInfo.GetHandle().GenerateNewHandle();
		ScenarioInfo.ScenarioTag = Scenario;
		ScenarioInfo.State = EScenarioRunState::EScenarioRunState_Open;

		FScenarioParticipatorInfo ParticipatorInfo;

		ScenarioInfo.ParticipatorInfos.Add(ParticipatorInfo);

		return ScenarioInfo.GetHandle();
	}
	else
	{
		return ScenarioInfoPtr->GetHandle();
	}

	return FTriggerScenarioHandle::InvalidHandle;
}


void UTriggerRuntimeContent::SetTriggerCategory(const FGameplayTagContainer& InDifficulty)
{
	if (UTriggerBlueprintLib::IsValidTriggerCategory(TriggerCategory))
	{
		TriggerCategory = InDifficulty;
	}
}

void UTriggerRuntimeContent::SetTriggerCategoryByString(const FString& Category)
{
	FGameplayTag CategoryTag = FGameplayTag::RequestGameplayTag(*Category);

	SetTriggerCategory(CategoryTag.GetSingleTagContainer());
}

const FGameplayTagContainer& UTriggerRuntimeContent::GetTriggerCategory() const
{
	return TriggerCategory;
}