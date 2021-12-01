#pragma once

/*
* Author:		Liulianyou
* Time:			2021/4/14
* Purpose:		This file will save game to the local file. and load it form local file
*/

#include "SaveGame/TriggerSaveGameToolBase.h"


class TRIGGERRUNTIME_API FTSGT_LocalFile : public FTriggerSaveGameToolBase
{
public:
	ClassInfo(FTSGT_LocalFile, FTriggerSaveGameToolBase);

	FTSGT_LocalFile();
	virtual ~FTSGT_LocalFile();

public:

	//Override FTriggerSaveGameToolBase
	virtual void SaveGame(USaveGameConfigBase* SaveStrategy) override;
	virtual void LoadGame(USaveGameConfigBase* SaveStrategy) override;
	//Override FTriggerSaveGameToolBase

	//Read file to memory
	void ReadFile(TArray<uint8>& OutSaveData, USaveGameConfigBase* SaveConfigData);
};
