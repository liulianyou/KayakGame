#include "AISpawnDataBase.h"
#include "GameFramework/GameMode.h"
#include "TriggerBlueprintLib.h"
#include "AISpawnCreator/AICreatorBase.h"
#include "AIInfoAccessor/AIInfoAccessor.h"
#include "Engine/World.h"

FAIInfo FAIInfo::InvalidValue;

FAIInfo::~FAIInfo()
{
	Handle = 0;
	FreeExternalDataBuffer();
}

FAIInfo::FAIInfo(const FAIInfo& Other)
{
	Other.DuplicateData(*this);

	Handle = Other.GetHandle();
}

void FAIInfo::FreeExternalDataBuffer()
{
	ExternalDataSize = INDEX_NONE;

	if (ExternalData)
	{
		FMemory::Free(ExternalData);
		ExternalData = nullptr;
	}
}

void FAIInfo::DuplicateData(FAIInfo& OutValue) const
{
	OutValue.ControllerClass = ControllerClass;
	OutValue.PawnClass = PawnClass;
	OutValue.Location = Location;
	OutValue.Rotation = Rotation;
	OutValue.BTPath = BTPath;

	if (OutValue.ExternalData != nullptr)
	{
		FMemory::Free(OutValue.ExternalData);
		OutValue.ExternalData = nullptr;
	}

	OutValue.ExternalDataSize = ExternalDataSize;

	if (ExternalDataSize > 0)
	{
		OutValue.ExternalData = FMemory::Malloc(ExternalDataSize);
		FMemory::Memcpy(OutValue.ExternalData, ExternalData, ExternalDataSize);
	}
}

bool FAIInfo::operator==(const FAIInfo& OtherData)
{
	if(GetHandle() == OtherData.GetHandle())
		return true;
	else
		return false;
}

int FAIInfo::GeneratedNewHandle()
{
	static long long LocalHandle = 0;
	return LocalHandle++;
}

bool FAIInfo::IsValid()
{
	if (ControllerClass == nullptr || !ControllerClass->IsValidLowLevel() ||
		PawnClass == nullptr || !PawnClass->IsValidLowLevel() ||
		Handle == 0)
		return false;
	else
		return true;
}

void FAIInfo::Invaidate()
{
	ControllerClass = nullptr;
	PawnClass = nullptr;
	Handle = 0;
}

FString FAIInfo::ToString()
{
	FString Result;

	Result += FString::Printf(TEXT(" Controller Address: %p"), ControllerClass);

	if (ControllerClass != nullptr && ControllerClass->IsValidLowLevel())
	{
		Result += FString::Printf(TEXT(" Address: %s"), *ControllerClass->GetName());
	}
	else
	{
		Result += TEXT("UNVALID ADDRESS");
	}

	Result += FString::Printf(TEXT(" Pawn Address: %p"), PawnClass);

	if (PawnClass != nullptr && PawnClass->IsValidLowLevel())
	{
		Result += FString::Printf(TEXT(" Address: %s"), *PawnClass->GetName());
	}
	else
	{ 
		Result += TEXT("UNVALID ADDRESS");
	}

	Result += FString::Printf(TEXT(" Location: %s"), *Location.ToString());

	Result += FString::Printf(TEXT(" Location: %s"), *Rotation.ToString());

	return Result;

}

FAIInfo& FAIInfo::operator=(const FAIInfo& OtherData)
{
	OtherData.DuplicateData(*this);

	Handle = OtherData.GetHandle();

	return *this;
}

UAISpawnDataBase::UAISpawnDataBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
#if WITH_EDITORONLY_DATA
	AIPreviewCharacters.Empty();
#endif
}


void UAISpawnDataBase::InitData(UTriggerTaskBase* Task)
{
	TaskOwner = Task;

	if (AICreator == nullptr)
	{
		AICreator = NewObject<UAICreatorByID>(this);
	}

	if (AIInfoAccessor == nullptr)
	{
		AIInfoAccessor = NewObject<UAIInfoAccessFromEnemyIDExcel>(this);
	}
}

FString UAISpawnDataBase::ConvertPathReferencValueToVaild(FString ReferencePath, bool Add_CSuffix)
{
	return UTriggerBlueprintLib::ConvertPathReferencValueToVaild(ReferencePath, Add_CSuffix);
}

int UAISpawnDataBase::GetPlayerNum()
{	
	if( GetWorld()->GetAuthGameMode() != nullptr )
		return GetWorld()->GetAuthGameMode()->GetNumPlayers();
	
	return 1;
}

AAIController* UAISpawnDataBase::CreateNewAI( const FAIInfo& AIInfo, APawn*& NewPawn)
{
	if (AICreator != nullptr)
	{
		AICreator->SetAIInfo(AIInfo);
		return AICreator->CreateNewAI(NewPawn);
	}

	return nullptr;
}
