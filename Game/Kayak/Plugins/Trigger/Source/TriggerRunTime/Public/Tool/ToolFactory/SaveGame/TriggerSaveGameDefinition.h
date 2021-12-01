#pragma once

/*
* Author:		Liulianyou
* Time:			2021/4/6
* Purpose:		This file will define all struct, enumeration and so on which will be shared by trigger save game system
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Templates/SubclassOf.h"

class USaveGameConfigBase;
class FTriggerSaveGameToolBase;

struct FTriggerSaveSystemDelegate
{
	/*
	* @param ConfigData it will contain all information for current save/lad actions
	* @param SaveGameTool which tool to use the target config data
	*/

	//Called when the save game system start to save game
	DECLARE_MULTICAST_DELEGATE_TwoParams(FStartToSaveGame, USaveGameConfigBase* /*ConfigData*/, FTriggerSaveGameToolBase* /*SaveGameTool*/);
	static FStartToSaveGame StartToSaveGame;

	//Called when the save game system have finished to save game
	DECLARE_MULTICAST_DELEGATE_TwoParams(FSaveGameComplete, USaveGameConfigBase* /*ConfigData*/, FTriggerSaveGameToolBase* /*SaveGameTool*/);
	static FSaveGameComplete SaveGameComplete;

	//Called when the save game system start to load game
	DECLARE_MULTICAST_DELEGATE_TwoParams(FStartToLoadGame, USaveGameConfigBase* /*ConfigData*/, FTriggerSaveGameToolBase* /*SaveGameTool*/);
	static FStartToLoadGame StartToLoadGame;

	//Called when the save game system have finished to load game
	DECLARE_MULTICAST_DELEGATE_TwoParams(FLoadGameComplete, USaveGameConfigBase* /*ConfigData*/, FTriggerSaveGameToolBase* /*SaveGameTool*/);
	static FLoadGameComplete LoadGameComplete;

};

