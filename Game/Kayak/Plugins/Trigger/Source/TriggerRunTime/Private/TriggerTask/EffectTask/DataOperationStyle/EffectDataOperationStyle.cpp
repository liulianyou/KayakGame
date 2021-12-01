#include "EffectDataOperationStyle.h"


UTriggerEffectDataOperationStyleBase::UTriggerEffectDataOperationStyleBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	
}

UEffectDataOpenStyleBase::UEffectDataOpenStyleBase(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	
}

UEffectDataCloseStyleBase::UEffectDataCloseStyleBase(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	
}

UEffectDataStyleBase::UEffectDataStyleBase(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

void UEffectDataStyleBase::AddCauser(UObject* Causer)
{
	if(Causer == nullptr)
		return;

	Causers.Add(Causer);
}

void UEffectDataStyleBase::AddCausers(TArray<UObject*> NewCausers)
{
	for (auto Causer : NewCausers)
	{
		AddCauser(Causer);
	}

}