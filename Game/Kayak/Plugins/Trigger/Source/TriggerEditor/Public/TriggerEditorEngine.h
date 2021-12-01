#pragma once

/*
* Author:	Liulianyou
* Time:		2021/6/30
* Purpose:	This file will access all functions which are used for trigger editor
*/

#include "Templates/SharedPointer.h"

class FTriggerLevelModule;

class FTriggerEditorEngine : public TSharedFromThis<FTriggerEditorEngine>
{
public:
	FTriggerEditorEngine();
	~FTriggerEditorEngine();
public:

	void Initialize();
	void Destroyed();

public:

	/*
	* Make all sub trigger levels correspond to the new persistent trigger level
	*/
	void SyncTriggerLevels();

private:
	
	//Access to trigger level module to hold all the operations about trigger level
	TSharedPtr<FTriggerLevelModule> TriggerLevelModule = nullptr;

};
