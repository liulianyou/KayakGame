#pragma once

/*
* Author:	Liulianyou
* Time:		2020/8/14
* Purpose:	This is the tool factory to manager all tools used in the Triggers
*/
#include "CoreMinimal.h"

#include "Tool/TriggerToolInterface.h"


/*
* Manager of the factories of the tool
*/
class TRIGGERRUNTIME_API FTriggerFactoryManager
{

public:

	template<class T>
	T* FindOrCreateToolFactory();

	void RemoveFactory(TriggerToolInterface* Factory);

	template<class T>
	void RemoveFactory();

	TArray<TriggerToolInterface*>& GetAllFactories() { return Factories; }
	
protected:

	template<class T>
	T* CreateNewFactory();
	
private:

	TArray<TriggerToolInterface*> Factories;

#pragma region Singlton
public:
	static FTriggerFactoryManager* GetTriggerFactory();
	static void DestroyTriggerFactory();
private:
	static FTriggerFactoryManager* TriggerFactoryInstance;
#pragma endregion Singlton
};

#include "Tool/ToolFactory/TriggerToolFactory.inl"