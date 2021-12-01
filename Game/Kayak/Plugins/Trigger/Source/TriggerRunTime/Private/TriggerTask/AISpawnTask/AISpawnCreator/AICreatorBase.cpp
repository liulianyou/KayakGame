#include "AISpawnCreator/AICreatorBase.h"
#include "Engine/World.h"
#include "TriggerBlueprintLib.h"
#include "AIController.h"
#include "AISpawnDataBase.h"

UAICreatorBase::UAICreatorBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

bool UAICreatorBase::CanGetControllerClassFromNPCID_Implementation()
{
	return false;
}

void UAICreatorBase::SetAIInfo_Implementation(const FAIInfo& AIInfo)
{
	
}

void UAICreatorBase::SetPawnInfo_Implementation(const FPawnInfo& PawnInfo)
{
	
}

AAIController* UAICreatorBase::CreateNewAI(APawn*& CreatedPawn)
{
	AAIController* Controller = OnCreateNewAI(CreatedPawn);

	if (Controller == nullptr)
	{
		Controller = NativeCreateNewAI(CreatedPawn);
	}
	
	PostCreator(Controller);

	return Controller;
}

AAIController* UAICreatorBase::NativeCreateNewAI(APawn*& CreatedPawn)
{
	UE_LOG(LogTrigger, Warning, TEXT("Please implement the NativeCreateNewAI or OnCreateNewAI in the subclass %s "), *GetPathName());

	return nullptr;
}

void UAICreatorBase::PostCreator(AAIController* Controller)
{
	if(Controller == nullptr)
		return;

	OnPostCreator(Controller);

	FTriggerDelegate::AICreateEvent.Broadcast(this, Controller->GetPawn());
}

UAICreatorByInstanceID::UAICreatorByInstanceID(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

AAIController* UAICreatorByInstanceID::NativeCreateNewAI(APawn*& CreatedPawn)
{
	UE_LOG(LogTrigger, Error, TEXT("Please implement the NativeCreateNewAI in the derived class: %s!"), *GetClass()->GetName());

	return nullptr;

#if 0

	if(GetNPCID() == INDEX_NONE)
		return nullptr;

	FActorSpawnParameters SpawnParameters;
	SpawnParameters.bNoFail = true;
	SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	UGExcelNPCAttributeTable* NPCDataTable = UGExcelDataManager::Get()->GetExcelTable<UGExcelNPCAttributeTable>();

	if (NPCDataTable == nullptr)
	{
		UE_LOG(LogTrigger, Error, TEXT("There is no vaild NPC excel data for NPCID<< %d >>!!"), GetNPCID());
		return nullptr;
	}

	UGExcelNPCAttributeData* NPCData = NPCDataTable->GetByid(GetNPCID());

	if (NPCData == nullptr)
	{
		UE_LOG(LogTrigger, Error, TEXT("There is no vaild NPCID<< %d >> data in the excel file!!"), GetNPCID());
		return nullptr;
	}

	UClass* Class = LoadClass<AAIController>(GetTransientPackage(), *UTriggerBlueprintLib::ConvertPathReferencValueToVaild(NPCData->AIController.ToString(), true));

	if (Class == nullptr)
	{
		UE_LOG(LogTrigger, Error, TEXT("AIControllerClass Wiht NPCID<< %d >> Value << %s >> in the excel file is not vaild!!"), GetNPCID(), *NPCData->AIController.ToString());
		return nullptr;
	}

	AAIController* Controller = GetWorld()->SpawnActor<AAIController>(Class, GetTransfrom().GetTranslation(), GetTransfrom().GetRotation().Rotator(), SpawnParameters);

	if (Controller == nullptr)
	{
		UE_LOG(LogTrigger, Error, TEXT("Faild to spawn AI controller with NPCID<< %d >> when run AI spawn task"), GetNPCID());
		return nullptr;
	}

	Class = LoadClass<APawn>(GetTransientPackage(), *UTriggerBlueprintLib::ConvertPathReferencValueToVaild(NPCData->AICharacter.ToString(), true));

	if (Class == nullptr)
	{
		UE_LOG(LogTrigger, Error, TEXT("AICharacter in the excel file is not vaild with NPCID<< %d >>"), GetNPCID());
		return nullptr;
	}

	APawn* Pawn = GetWorld()->SpawnActor<APawn>(Class, GetTransfrom(), SpawnParameters);

	if (Pawn == nullptr)
	{
		UE_LOG(LogTrigger, Error, TEXT("Faild to spawn Pawn when run AI spawn task, Please check the data in excel"));

		Controller->Destroy();

		return nullptr;
	}

	CreatedPawn = Pawn;

	IAISpawnInitSupportInterface* AISpawnInit = Cast<IAISpawnInitSupportInterface>(Pawn);
	if (!AISpawnInit)
	{
		UE_LOG(LogTrigger, Error, TEXT("Faild to spawn Pawn when run AI spawn init task, Please check the data in excel"));

		Controller->Destroy();
		Pawn->Destroy();

		return nullptr;
	}

	UBehaviorTree* BT = LoadObject<UBehaviorTree>(GetTransientPackage(), *UTriggerBlueprintLib::ConvertPathReferencValueToVaild(NPCData->BehaviorTree.ToString(), false));

	//Each AI should have one BT, no matter weather it will move or not
	if (BT == nullptr)
	{
		UE_LOG(LogTrigger, Error, TEXT("Behavior in excel is not vaild!!!, Please check the data in excel"));
	}

	AISpawnInit->InitCharacterAttributes(GetNPCID());

	Controller->Possess(Pawn);

	if (BT != nullptr)
	{
		Controller->RunBehaviorTree(BT);
	}

	return Controller;
#endif
}


UAICreatorByID::UAICreatorByID(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

void UAICreatorByID::PostCreator(AAIController* Controller)
{
	SetAICommand(Controller);

	Super::PostCreator(Controller);
}

void UAICreatorByID::SetNPCID(int LocalNPCID)
{
	NPCID = LocalNPCID;
}

void UAICreatorByID::SetBehaviorCommand(const FAISpawnBehaviorCommand& LocalBehaviorCommand)
{
	BehaviorCommand = LocalBehaviorCommand;
}

void UAICreatorByID::SetAICommand( AAIController* Controller )
{
	if(Controller == nullptr)
		return;

	if (Controller->GetClass()->ImplementsInterface(UAISpawnSupportInterface::StaticClass()))
	{
		IAISpawnSupportInterface* AISpawnSupport = Cast<IAISpawnSupportInterface>(Controller);

		//When the controller derived from the interface in the BP, this value will be null
		if (AISpawnSupport == nullptr)
		{
			IAISpawnSupportInterface::Execute_BP_SetAISpawnCommand(Controller, *const_cast<FAISpawnBehaviorCommand*>(&BehaviorCommand));
		}
		else
		{
			AISpawnSupport->SetAISpawnCommand(*const_cast<FAISpawnBehaviorCommand*>(&BehaviorCommand));
		}
	}
}

AAIController* UAICreatorByID::NativeCreateNewAI(APawn*& CreatedPawn)
{
	return nullptr;
}

void UAICreatorByID::SetAIInfo_Implementation(const FAIInfo& AIInfo)
{
	
}

void UAICreatorByID::SetPawnInfo_Implementation(const FPawnInfo& PawnInfo)
{
	NPCID = PawnInfo.NPCID;

	BehaviorCommand = PawnInfo.BehaviorCommand;
}


UAICreatorByControllerClass::UAICreatorByControllerClass(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	
}

void UAICreatorByControllerClass::SetControllerClass(UClass* LocalControllerClass)
{
	ControllerClass = LocalControllerClass;
}

void UAICreatorByControllerClass::SetPawnClass(UClass* LocalPawnClass)
{
	PawnClass = LocalPawnClass;
}

void UAICreatorByControllerClass::SetBTPath(const FSoftObjectPath& LocalBTPath)
{
	BTPath = LocalBTPath;
}

void UAICreatorByControllerClass::SetAISpawnData(UAISpawnDataBase* LocalAISpawnData)
{
	AISpawnData = LocalAISpawnData;
}


AAIController* UAICreatorByControllerClass::NativeCreateNewAI( APawn*& CreatedPawn )
{
	FActorSpawnParameters SpawnParameters;
	SpawnParameters.bNoFail = true;
	SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

	AAIController* Controller = GetWorld()->SpawnActor<AAIController>(ControllerClass, GetTransfrom().GetLocation(), GetTransfrom().GetRotation().Rotator(), SpawnParameters);

	if (Controller == nullptr)
	{
		UE_LOG(LogTrigger, Error, TEXT("Faild To spawn AIController,ControllerName: %s, Location: %s, Rotation: %s"), *ControllerClass->GetName(), *GetTransfrom().GetLocation().ToString(), *GetTransfrom().GetRotation().Rotator().ToString());
		return nullptr;
	}

	APawn* Pawn = GetWorld()->SpawnActor<APawn>(PawnClass, GetTransfrom().GetLocation(), GetTransfrom().GetRotation().Rotator(), SpawnParameters);

	if (Pawn == nullptr)
	{
		UE_LOG(LogTrigger, Error, TEXT("Faild To spawn AIController,ControllerName: %s, Location: %s, Rotation: %s"), *ControllerClass->GetName(), *GetTransfrom().GetLocation().ToString(), *GetTransfrom().GetRotation().ToString());

		Controller->Destroy();

		return nullptr;
	}

	UBehaviorTree* BT = LoadObject<UBehaviorTree>(GetTransientPackage(), *UTriggerBlueprintLib::ConvertPathReferencValueToVaild(BTPath.ToString(), false));

	if (BT == nullptr)
	{
		UE_LOG(LogTrigger, Error, TEXT("Behavior in excel is not vaild!!!, Please check the data in %s"), *GetPathName());

		Controller->Destroy();
		Pawn->Destroy();
		return nullptr;
	}

	CreatedPawn = Pawn;

	if (BT != nullptr)
	{
		Controller->RunBehaviorTree(BT);
	}

	return Controller;
}

UAICreatorByAIInfo::UAICreatorByAIInfo(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	
}

void UAICreatorByAIInfo::SetAIInfo_Implementation(const FAIInfo& LocalAIInfo)
{
	LocalAIInfo.DuplicateData(AIInfo);
}

bool UAICreatorByAIInfo::CanGetControllerClassFromNPCID_Implementation()
{
	return true;
}

UAISpawnDataBase* UAICreatorByAIInfo::GetAISpawnData()
{
	return GetTypedOuter<UAISpawnDataBase>();
}

AAIController* UAICreatorByAIInfo::NativeCreateNewAI(APawn*& CreatedPawn)
{
	//There must something wrong at the target data
	if (!GetAIInfo().IsValid())
	{
		UE_LOG(LogTrigger, Error, TEXT("AIInfo: %s"), *GetAIInfo().ToString());
		return nullptr;
	}

	FActorSpawnParameters SpawnParameters;
	SpawnParameters.bNoFail = true;
	SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

	AAIController* Controller = GetWorld()->SpawnActor<AAIController>(GetAIInfo().ControllerClass, GetAIInfo().Location, GetAIInfo().Rotation, SpawnParameters);

	if (Controller == nullptr)
	{
		UE_LOG(LogTrigger, Error, TEXT("Faild To spawn AIController,ControllerName: %s, Location: %s, Rotation: %s"), *GetAIInfo().ControllerClass->GetName(), *GetAIInfo().Location.ToString(), *GetAIInfo().Rotation.ToString());
		return nullptr;
	}

	APawn* Pawn = GetWorld()->SpawnActor<APawn>(GetAIInfo().PawnClass, GetAIInfo().Location, GetAIInfo().Rotation, SpawnParameters);

	if (Pawn == nullptr)
	{
		UE_LOG(LogTrigger, Error, TEXT("Faild To spawn AIController,ControllerName: %s, Location: %s, Rotation: %s"), *GetAIInfo().ControllerClass->GetName(), *GetAIInfo().Location.ToString(), *GetAIInfo().Rotation.ToString());

		Controller->Destroy();

		return nullptr;
	}

	UBehaviorTree* BT = LoadObject<UBehaviorTree>(GetTransientPackage(), *UTriggerBlueprintLib::ConvertPathReferencValueToVaild(GetAIInfo().BTPath.ToString(), false));

	if (BT == nullptr)
	{
		UE_LOG(LogTrigger, Error, TEXT("Behavior in excel is not vaild!!!, Please check the data in %s"), *GetAISpawnData()->GetName());

		Controller->Destroy();
		Pawn->Destroy();
		return nullptr;
	}

	CreatedPawn = Pawn;

	GetAISpawnData()->PreProcessNewPawn(Controller, Pawn, GetAIInfo());

	Controller->Possess(Pawn);

	GetAISpawnData()->PostProcessNewPawn(Controller, Pawn, GetAIInfo());

	if (BT != nullptr)
	{
		Controller->RunBehaviorTree(BT);
	}

	return Controller;
}