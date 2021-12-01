#include "TriggerTaskStateSwitchBase.h"
#include "TimerManager.h"
#include "TriggerDefinition.h"

UTriggerTaskStateSwitchBase::UTriggerTaskStateSwitchBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	bIsRunning = false;
}

void UTriggerTaskStateSwitchBase::Initialize(UTriggerTaskBase* Owner)
{
	OnInitialzie(Owner);

	TaskOwner = Owner;
}

void UTriggerTaskStateSwitchBase::StartEvaluator()
{
	OnStartEvaluator();

	bIsRunning = true;
}

void UTriggerTaskStateSwitchBase::EndEvaluator()
{
	if(!IsUnreachable())
		OnEndEvaluator();

	bIsRunning = false;
}

void UTriggerTaskStateSwitchBase::Evaluator()
{
	
}

bool UTriggerTaskStateSwitchBase::IsRunning() const
{
	return bIsRunning;
}

bool UTriggerTaskStateSwitchBase::IsSwitchOn() const
{
	return false;
}

void UTriggerTaskStateSwitchBase::SwitchState_Implementation()
{
	TriggerTaskStateSwitchEvent.Broadcast();
}

void UTriggerTaskStateSwitchBase::MarkEvaluateable_Implementation()
{
	UE_LOG(LogTrigger, Warning, TEXT("Please implement function MarkEvaluateable at subclass for %s"), *GetPathName());
}

void UTriggerTaskStateSwitchBase::AddNewConditionAndStyle_Implementation(UEvaluatorBase* Condition, UTriggerStyleBase* Style /* = nullptr */, bool CondtionAndStyleMapped)
{
	UE_LOG(LogTrigger, Warning, TEXT("Please implement function AddNewCondition at subclass for %s"), *GetPathName());
}

void UTriggerTaskStateSwitchBase::Reset_Implementation()
{
	UE_LOG(LogTrigger, Warning, TEXT("Please implement function Reset at subclass for %s"), *GetPathName());
}


void UTriggerTaskStateSwitchBase::GetPassedCondition(TArray<UEvaluatorBase*>& Conditions, bool ContainOperators /* = false */) const
{
	UE_LOG(LogTrigger, Warning, TEXT("Please implement function GetPassedCondition at subclass for %s"), *GetPathName());
}


void UTriggerTaskStateSwitchBase::GetAllEvaluatorConditions(TArray<UEvaluatorCondition*>& Conditions) const
{
	UE_LOG(LogTrigger, Warning, TEXT("Please implement function GetAllEvaluatorConditions at subclass for %s"), *GetPathName());
}

void UTriggerTaskStateSwitchBase::GetAllConditions(TArray<UEvaluatorBase*>& Conditions) const
{
	UE_LOG(LogTrigger, Warning, TEXT("Please implement function GetAllConditions at subclass for %s"), *GetPathName());
}

void UTriggerTaskStateSwitchBase::GetAllStyles(TArray<UTriggerStyleBase*>& Styles) const
{
	UE_LOG(LogTrigger, Warning, TEXT("Please implement function GetAllStyles at subclass for %s"), *GetPathName());
}

void UTriggerTaskStateSwitchBase::GetPassedStyles(TArray<UTriggerStyleBase*>& Styles) const
{
	UE_LOG(LogTrigger, Warning, TEXT("Please implement function GetPassedStyles at subclass for %s"), *GetPathName());
}