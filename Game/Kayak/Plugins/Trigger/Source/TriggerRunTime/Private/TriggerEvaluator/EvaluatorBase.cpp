#include "TriggerEvaluator/EvaluatorBase.h"
#include "TriggerDefinition.h"


UEvaluatorBase::UEvaluatorBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer),
	InverseResult(false)
{
}

bool UEvaluatorBase::Evaluator(bool DoLocalCheck /*= false*/)
{
	/*
	* When this evaluator is passed then just return true
	*/
	if(CashedValue)
		return true;

	CashedValue = InverseResult ? !BP_Evaluator() : BP_Evaluator();

	EvaluateCount++;

	/*
	* When the evaluator is failed then I need to check weather the external data can make this evaluator success
	*/
	if (CashedValue == false &&
		ExternalData != nullptr)
	{
		EExternalDataResult Result = ExternalData->CheckEvaluator(this);

		if (Result != EExternalDataResult::EExternalDataResult_Ignore)
		{
			if (Result == EExternalDataResult::EExternalDataResult_Success)
				CashedValue = true;
			else if (Result == EExternalDataResult::EExternalDataResult_Faild)
				CashedValue = false;
		}
	}

	if (DoLocalCheck)
		return CashedValue;

	/*
	* Give the other module one access to get the evaluator result
	*/
	EvaluatorDelegate.Broadcast(this, CashedValue);

	FTriggerDelegate::EvaluatorNativeEvent.Broadcast(this, CashedValue);

	return CashedValue;
}

bool UEvaluatorBase::BP_Evaluator_Implementation()
{
	return NativeEvaluator();
}

bool UEvaluatorBase::NativeEvaluator()
{
	return  true;
}

void UEvaluatorBase::BP_Reset_Implementation()
{
	NativeReset();
}

void UEvaluatorBase::NativeReset()
{
	//Reset cashed value
	MarkEvaluateable();

	if (ExternalData != nullptr)
	{
		ExternalData->Reset();
	}
}

/*
* I make the native function to call BP function is the BP_Initialize should work with Native corporate.
*/
void UEvaluatorBase::NativeInitialize(UObject* OwnerObject)
{
	MarkEvaluateable();

	BP_Initialize(OwnerObject);

	Owner = OwnerObject;
}

void UEvaluatorBase::BeginDestroy()
{
	EvaluatorDelegate.Clear();

	Super::BeginDestroy();
}

UEvaluatorDataBase* UEvaluatorBase::CreateNewExternalData(TSubclassOf<UEvaluatorDataBase> EvaluatorClass)
{
	UEvaluatorDataBase* Result = NewObject<UEvaluatorDataBase>(this, EvaluatorClass);

	SetExternalData(Result);

	return GetExternalData();
}

bool UEvaluatorBase::NotifyToEvaluate()
{
	return Evaluator();
}

void UEvaluatorBase::MarkEvaluateable()
{
	OnMarkEvaluateable();

	CashedValue = false;
}