#include "TriggerBlueprintLib.h"
#include "TriggerNetPlayerSupportComponent.h"
#include "TriggerTaskComponentBase.h"
#include "DeadSystem/DeadSystemManager.h"
#include "CancleContribution.h"
#include "AddContribution.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/Controller.h"
#include "GameFramework/Actor.h"
#include "TriggerManager.h"
#include "TriggerToolFactory.h"
#include "TriggerStatics/TriggerStaticsTool.h"
#include "TriggerStatics/TS_AIStatics.h"
#include "GameFramework/PlayerController.h"
#include "TriggerCategory.h"
#include "TriggerConfig.h"
#include "Engine/Engine.h"
#include "Engine/Level.h"

UTriggerBlueprintLib::UTriggerBlueprintLib(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}

UTriggerNetPlayerSupportComponent* UTriggerBlueprintLib::GetTriggerNetPlayerSupportFromActor(AActor* Actor)
{
	if (Actor == nullptr)
		return nullptr;

	AController* AC = Cast<AController>(Actor);

	if (AC == nullptr)
	{
		APawn* Pawn = Cast<APawn>(Actor);

		if (Pawn == nullptr)
		{
			UE_LOG(LogTrigger, Warning, TEXT("TriggerNetPlayerSupportInterface only can be inheirted form the controller!!"));

			return nullptr;
		}

		AC = Pawn->GetController();

		if (AC == nullptr)
		{
			UE_LOG(LogTrigger, Error, TEXT("There is player controller in the character, You should learn more UE4 GameFramework!!!!!"));
			return nullptr;
		}
	}

	UTriggerNetPlayerSupportComponent* TNPS = Cast<UTriggerNetPlayerSupportComponent>(AC->GetComponentByClass(UTriggerNetPlayerSupportComponent::StaticClass()));

	if (TNPS == nullptr)
	{
		UE_LOG(LogTrigger, Error, TEXT("If you want to use Trigger plugin you should make your controller have UTriggerNetPlayerSupportComponent"));
		return nullptr;
	}
	else
	{
		return TNPS;
	}

}

UContributeRuleBase* UTriggerBlueprintLib::MakeCancleContributor(AActor* Contributor, int RemoveCount, bool CanEverTick, float TickGradual, bool CanExecutedImmediately, bool NeedToCheckGamePlayAbility)
{
	UCancleContribution* Result = NewObject<UCancleContribution>(Contributor, TEXT("CancleContribution"));

	Result->RemoveLastContributionCount = RemoveCount;

	Result->Contributor = Contributor;
	Result->TickGradualTime = TickGradual;
	Result->CanEverTick = CanEverTick;
	Result->CanExecutedWhenAdded = CanExecutedImmediately;
	Result->NeedToCheckGamePlayAbility = NeedToCheckGamePlayAbility;

	return Result;
}

UContributeRuleBase* UTriggerBlueprintLib::MakeAddContributor(AActor* Contributor, bool CanEverTick, float TickGradual, bool CanExecutedImmediately, bool NeedToCheckGamePlayAbility)
{
	UAddContribution* Result = NewObject<UAddContribution>(Contributor, TEXT("AddContribution"));
	
	Result->Contributor = Contributor;
	Result->TickGradualTime = TickGradual;
	Result->CanEverTick = CanEverTick;
	Result->CanExecutedWhenAdded = CanExecutedImmediately;
	Result->NeedToCheckGamePlayAbility = NeedToCheckGamePlayAbility;

	return Result;
}

UTriggerTaskBase* UTriggerBlueprintLib::GetTriggerTaskByIndex(UTriggerTaskComponentBase* Component, int TaskIndex, bool OnlySearchInConfigured)
{	
	if (Component == nullptr || !Component->IsValidLowLevel())
	{
		return nullptr;
	}

	TArray<UTriggerTaskBase*> TriggerTasks;

	if (OnlySearchInConfigured)
	{
		TriggerTasks = Component->GetTemplateTasks();
	}
	else
	{
		Component->GetAllTriggerTasks(TriggerTasks);
	}

	if (TriggerTasks.Num() <= TaskIndex)
	{
		UE_LOG(LogTrigger, Error, TEXT("Please check the index while trying to get trigger task from GetTriggerTaskByIndex"));

		return nullptr;
	}

	return TriggerTasks[FMath::Clamp(TaskIndex, 0, INT_MAX)];
}

UTriggerTaskBase* UTriggerBlueprintLib::GetTriggerTaskByClass(UTriggerTaskComponentBase* Component, TSubclassOf<UTriggerTaskBase> TriggerTaskClass, int TaskIndex, bool OnlySearchInConfigured)
{
	if (Component == nullptr || !Component->IsValidLowLevel())
	{
		return nullptr;
	}

	TArray<UTriggerTaskBase*> TriggerTasks;

	if (OnlySearchInConfigured)
	{
		TriggerTasks = Component->GetTemplateTasks();
	}
	else
	{
		Component->GetAllTriggerTasks(TriggerTasks);
	}

	if (TriggerTasks.Num() <= TaskIndex)
	{
		UE_LOG(LogTrigger, Error, TEXT("Please check the index while trying to get trigger task from GetTriggerTaskByClass"));

		return nullptr;
	}

	int Num = 0;

	for (int i = 0; i < TriggerTasks.Num(); i++)
	{
		if(TriggerTasks[i] == nullptr)
			continue;

		if (TriggerTasks[i]->GetClass() == *TriggerTaskClass)
		{
			if (Num == TaskIndex)
			{
				return TriggerTasks[i];
			}

			Num++;
		}
	}

	return nullptr;
}

UDeadSystemManager* UTriggerBlueprintLib::GetDeadSystemInstance()
{
	return Cast<UDeadSystemManager>(UDeadSystemManager::StaticClass()->GetDefaultObject());
}

UTS_AIStatics* UTriggerBlueprintLib::GetAIStatics(TSubclassOf<UTriggerStaticsBase> StaticsClass)
{
	FTriggerStaticsTool* StaticsTool = FTriggerFactoryManager::GetTriggerFactory()->FindOrCreateToolFactory<FTriggerStaticsTool>();

	if (StaticsTool == nullptr)
	{
		UE_LOG(LogTrigger, Error, TEXT("Can't create FTriggerStaticsTool when call GetAIStatics!!"));
		return nullptr;
	}

	TSubclassOf<UTriggerStaticsBase> Class = StaticsClass;

	if (*StaticsClass == nullptr)
	{
		UTriggerConfig* TriggerConfig = Cast<UTriggerConfig>(UTriggerConfig::StaticClass()->GetDefaultObject());

		if (TriggerConfig == nullptr || !TriggerConfig->AIStaticsClassPath.IsValid())
		{
			UE_LOG(LogTrigger, Error, TEXT("Plese set vaild AIStaticsClassPath in TriggerConfig!!!"));
			return nullptr;
		}

		Class = TriggerConfig->AIStaticsClassPath.TryLoadClass<UTriggerStaticsBase>();

		if (Class == nullptr)
		{
			UE_LOG(LogTrigger, Error, TEXT("Get class from AIStaticsClassPath in trigger config faild!!"));
			return nullptr;
		}
	}

	UTriggerStaticsBase* Result = StaticsTool->FindOrAddTriggerStatics(Class);

	return Cast<UTS_AIStatics>(Result);
}

UTriggerTaskManager* UTriggerBlueprintLib::GetTriggerTaskManager()
{
	UTriggerManager* TriggerManager = GetTriggerManager();

	if (TriggerManager != nullptr)
	{
		return TriggerManager->GetTriggerTaskManager();
	}

	return nullptr;
}

UTriggerManager* UTriggerBlueprintLib::GetTriggerManager()
{
	return  GEngine->GetEngineSubsystem<UTriggerManager>();
}

UTriggerSaveGameManager* UTriggerBlueprintLib::GetTriggerSaveGameManager()
{
	UTriggerManager* TriggerManager = GetTriggerManager();

	if (TriggerManager != nullptr)
	{
		return TriggerManager->GetTriggerSaveGameManager();
	}

	return nullptr;
}

UTriggerRuntimeContent* UTriggerBlueprintLib::GetTriggerRunTimeContent()
{
	UTriggerManager* TriggerManager = GetTriggerManager();

	if (TriggerManager != nullptr)
	{
		return TriggerManager->GetRuntimeContent();
	}

	return nullptr;
}

UTriggerEventRewardManager* UTriggerBlueprintLib::GetTriggerEventRewardManager()
{
	UTriggerTaskManager* TaskManager = GetTriggerTaskManager();

	if(TaskManager == nullptr)
		return nullptr;

	return TaskManager->GetRewardManager();
}

UOperationInformationManager* UTriggerBlueprintLib::GetOperationInfoManager()
{
	UTriggerManager* TriggerManager = GetTriggerManager();

	if (TriggerManager != nullptr)
	{
		return TriggerManager->GetOperationInformationManager();
	}

	return nullptr;
}

void UTriggerBlueprintLib::GameOver(TArray<APlayerController*> Players, FString URL, FString GameOverReason)
{
	if (Players.Num() == 0)
	{
		for (auto IT = GWorld->GetPlayerControllerIterator(); IT; ++IT)
		{
			Players.Add(IT->Get());
		}
	}

	for (int i = 0; i < Players.Num(); i++)
	{
		//if (Players[i] != nullptr && !Players[i]->HasAuthority())
		{
			UTriggerNetPlayerSupportComponent* TNPSC =  GetTriggerNetPlayerSupportFromActor(Cast<AActor>(Players[i]));

			if (TNPSC == nullptr)
			{
				UE_LOG(LogTrigger, Warning, TEXT("The player with class %s  don't contain the UTriggerNetPlayerSupportComponent"), *Players[i]->GetClass()->GetName());
				continue;
			}

			TNPSC->Server_BPGameOver(Players,URL);
		}
	}
}

void UTriggerBlueprintLib::AddRegionIndex()
{
	UTS_AIStatics* AIStatics = GetAIStatics(UTS_AIStatics::StaticClass());

	if (AIStatics == nullptr)
		return;

	AIStatics->AddRegionIndex();
}

FString UTriggerBlueprintLib::ConvertPathReferencValueToVaild(FString ReferencePath, bool Add_CSuffix /* = false */)
{
	FString Result = ReferencePath;

	UObject* TransientPackage = Cast<UObject>(GetTransientPackage());

	bool HaveSpecificFileName = false;

	if (ReferencePath.Find(".") == INDEX_NONE)
		return Result;

	ResolveName(TransientPackage, Result, true, true, LOAD_EditorOnly | LOAD_Quiet | LOAD_NoWarn | LOAD_DeferDependencyLoads, nullptr);

	//int Index = Result.Find("_C", ESearchCase::CaseSensitive);
	bool IsEndWith_C = Result.EndsWith(TEXT("_C"));

	if (IsEndWith_C)
	{
		return ReferencePath;
	}
	else
	{
		if (Add_CSuffix)
		{
			Result = TransientPackage->GetName() + "." + Result + "_C";
		}
		else
		{
			Result = TransientPackage->GetName();
		}
	}

	return Result;
}

FString UTriggerBlueprintLib::GetTriggerCategoryNodeName(const FGameplayTag& Tag, ECategoryFormat Phares)
{
	FString Result = TEXT("");

	UTriggerCategoryBase::GetTriggerCategoryNodeName(Result, Tag, Phares);

	return Result;
}

bool UTriggerBlueprintLib::IsValidTriggerCategory(const FGameplayTagContainer& TriggerCategory)
{
	return UTriggerCategoryBase::IsValidCategory(TriggerCategory);
}

bool UTriggerBlueprintLib::IsFirstTriggerNode(TScriptInterface<ITriggerInterface> Trigger)
{
	return false;
}

FString UTriggerBlueprintLib::GetSubTriggerLevelAssetPath(const ULevel* PersistentLevel, const FString& SubLevelName, const FString& MapAssetPath /*= TEXT("")*/)
{
	if (PersistentLevel == nullptr)
	{
		FString RootPath  = FPaths::ProjectContentDir();

		if (!MapAssetPath.IsEmpty())
		{
			RootPath = MapAssetPath;
		}

		return RootPath + FString(TEXT("/TriggerMap/TriggerSubLevel/")) + SubLevelName;
	}

	return PersistentLevel->GetOutermost()->GetName() + FString(TEXT("/TriggerSubLevel/")) + SubLevelName;
}

FString UTriggerBlueprintLib::GetSubTriggerLevelDirectoryPath(const ULevel* PersistentLevel, const FString& MapAssetPath /*= TEXT("")*/)
{
	if (PersistentLevel == nullptr)
	{
		FString RootPath = FPaths::ProjectContentDir();

		if (!MapAssetPath.IsEmpty())
		{
			RootPath = MapAssetPath;
		}

		return FPaths::ProjectContentDir() + FString(TEXT("/TriggerMap/TriggerSubLevel"));
	}
		
	return PersistentLevel->GetOutermost()->GetName() + FString(TEXT("/TriggerSubLevel")) ;
}

ERunType UTriggerBlueprintLib::ConvertNetModeToRunType(ENetMode NetMode)
{
	switch (NetMode)
	{
	case ENetMode::NM_Client:
		return ERunType::ERunType_RunOnClient;
	case ENetMode::NM_DedicatedServer:
	case ENetMode::NM_ListenServer:
		return ERunType::ERunType_RunOnServer;
	case NM_Standalone:
		return ERunType::ERunType_MutiCast;
	default:
		return ERunType::ERunType_MAX;
		break;
	}
}

void UTriggerBlueprintLib::DebugBreak( const FString& PrintString )
{
	//Platform::DebugBreak();

	UE_LOG(LogTrigger, Warning, TEXT("Manually debug break at runtime!! Try to show message::%s"), *PrintString);
}


