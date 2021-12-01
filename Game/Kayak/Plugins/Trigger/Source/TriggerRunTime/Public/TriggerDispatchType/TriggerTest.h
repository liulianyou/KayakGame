#pragma once

#include "CoreMinimal.h"

template<class T>
class TRIGGERRUNTIME_API FGaiaTriggerDispatchTest
{

public:
	
	void AddData(T* Data);


private:
	TArray<T*> DataPool;

};

template<class T>
void FGaiaTriggerDispatchTest::AddData(T* Data)
{
	DataPool.AddUnique(Data);
}

