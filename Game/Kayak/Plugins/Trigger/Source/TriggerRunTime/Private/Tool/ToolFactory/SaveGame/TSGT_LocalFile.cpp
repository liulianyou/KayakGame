#include "SaveGame/TSGT_LocalFile.h"
#include "SaveGame/SaveGameStrategy/SaveGameStrategyBase.h"
#include "SaveGame/SaveGameConfig/SaveGameLocalFileData.h"
#include "TriggerDefinition.h"
#include "Kismet/GameplayStatics.h"

FTSGT_LocalFile::FTSGT_LocalFile()
	:Super()
{

}

FTSGT_LocalFile::~FTSGT_LocalFile()
{

}

void FTSGT_LocalFile::SaveGame(USaveGameConfigBase* SaveConfigData)
{
	if (SaveConfigData == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("Try to read file but the SaveConfigData is none"));
		return;
	}

	if (!SaveConfigData->IsVaildConfigData())
	{
		UE_LOG(LogTrigger, Warning, TEXT("Try to read file but the SaveConfigData is not vaild with Name: %s, Class:%s"), *SaveConfigData->GetName(), *SaveConfigData->GetClass()->GetName());
		return;
	}

	USaveGameLocalFileData* LocalFileConfigData = Cast<USaveGameLocalFileData>(SaveConfigData);

	if (LocalFileConfigData == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("Try to read file from target SaveConfigData but this tool do not support it. Please make this data: %s inherited from USaveGameLocalFileData"), *SaveConfigData->GetClass()->GetName());
		return;
	}

	USaveGameStrategyBase* SaveStrategyInstance = FindOrAddNewStrategy(LocalFileConfigData->StrategyClass);

	if (SaveStrategyInstance == nullptr)
		return;




	SaveStrategyInstance->SaveGameSerialize(LocalFileConfigData);

	UGameplayStatics::SaveDataToSlot(LocalFileConfigData->Data, LocalFileConfigData->SlotName, LocalFileConfigData->UserIndex);
}

void FTSGT_LocalFile::LoadGame(USaveGameConfigBase* SaveConfigData)
{
	if (SaveConfigData == nullptr || !SaveConfigData->IsVaildConfigData())
		return;

	USaveGameStrategyBase* SaveStrategyInstance = FindOrAddNewStrategy(SaveConfigData->StrategyClass);

	if (SaveStrategyInstance == nullptr)
		return;

	SaveStrategyInstance->PreSaveGameDeSerialize(SaveConfigData);

	SaveStrategyInstance->SaveGameDeSerialize(SaveConfigData);

	SaveStrategyInstance->PostSaveGameDeSerialalize(SaveConfigData);
}

void FTSGT_LocalFile::ReadFile(TArray<uint8>& OutSaveData, USaveGameConfigBase* SaveConfigData)
{
	OutSaveData.Empty();

	if (SaveConfigData == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("Try to read file but the SaveConfigData is none"));
		return;
	}

	if (!SaveConfigData->IsVaildConfigData())
	{
		UE_LOG(LogTrigger, Warning, TEXT("Try to read file but the SaveConfigData is not vaild with Name: %s, Class:%s"), *SaveConfigData->GetName(), *SaveConfigData->GetClass()->GetName());
		return;
	}

	USaveGameLocalFileData* LocalFileConfigData = Cast<USaveGameLocalFileData>(SaveConfigData);

	if (LocalFileConfigData == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("Try to read file from target SaveConfigData but this tool do not support it. Please make this data: %s inherited from USaveGameLocalFileData"), *SaveConfigData->GetClass()->GetName());
		return;
	}

	UGameplayStatics::LoadDataFromSlot(OutSaveData, LocalFileConfigData->SlotName, LocalFileConfigData->UserIndex);

}
