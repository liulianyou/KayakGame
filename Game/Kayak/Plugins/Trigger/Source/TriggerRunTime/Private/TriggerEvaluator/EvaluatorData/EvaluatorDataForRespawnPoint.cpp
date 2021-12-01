#include "EvaluatorDataForRespawnPoint.h"
#include "TT_Respawn.h"
#include "EvaluatorOperation.h"

UED_RespawnPoint::UED_RespawnPoint(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
}

EExternalDataResult UED_RespawnPoint::CheckEvaluator_Implementation(UEvaluatorBase* Evaluator)
{
	EExternalDataResult Result = Super::CheckEvaluator_Implementation(Evaluator);

	//Ignore operation evaluator
	if (Cast<UEvaluatorOperation>(Evaluator) != nullptr)
		return EExternalDataResult::EExternalDataResult_Ignore;

	if(Pawn == nullptr)
		return EExternalDataResult::EExternalDataResult_Ignore;

	return Result;
}

void UED_RespawnPoint::Reset_Implementation()
{
	Pawn = nullptr;
}

void UED_RespawnPoint::SetPawnInfo(APawn* InPawnInfo)
{

	Pawn = InPawnInfo;
}



