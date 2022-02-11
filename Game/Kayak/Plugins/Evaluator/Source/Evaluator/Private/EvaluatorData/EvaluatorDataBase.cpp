#include "EvaluatorData/EvaluatorDataBase.h"

UEvaluatorDataBase::UEvaluatorDataBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}


EExternalDataResult UEvaluatorDataBase::CheckEvaluator_Implementation(UEvaluatorBase* Evaluator)
{
	//Should ignore this external data by default
	return EExternalDataResult::EExternalDataResult_Ignore;
}

void UEvaluatorDataBase::Reset_Implementation()
{
}

