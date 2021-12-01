#include "TriggerTaskStartInformationBase.h"
#include "TriggerDefinition.h"

UTriggerTaskStartInformationBase::UTriggerTaskStartInformationBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
}

AActor* UTriggerTaskStartInformationBase::GetToggledActor_Implementation() const
{
	return nullptr;
}

void UTriggerTaskStartInformationBase::CopyFromActiveInfo_Implementation(const FTaskActivationInfo& ActiveInfo)
{
	if (ActiveInfo.ProcessedExternalData != nullptr)
	{
		UTriggerTaskStartInformationBase* StartOperationInfo = Cast<UTriggerTaskStartInformationBase>(ActiveInfo.ProcessedExternalData);

		if (StartOperationInfo != nullptr)
		{
			SetWaitRelatedComponentLoaded(StartOperationInfo->NeedWaitTargetComponentLoaded());
		}
	}
}

void UTriggerTaskStartInformationBase::SetWaitRelatedComponentLoaded(bool NewValue)
{
	WaitRelatedComponentLoaded = NewValue; 
}

bool UTriggerTaskStartInformationBase::NeedWaitTargetComponentLoaded_Implementation(const FTriggerTaskComponentInformation& ComponentInfo) const
{
	bool Result = WaitRelatedComponentLoaded;

	return Result;
}

bool UTriggerTaskStartInformationBase::Equal_Implementation(const UTriggerTaskStartInformationBase* OtherInfo) const
{
	if(this == OtherInfo)
		return true;
	else if( OtherInfo == nullptr)
		return false;
	else if (GetToggledActor() == OtherInfo->GetToggledActor() &&
		GetClass() == OtherInfo->GetClass() &&
		NeedWaitTargetComponentLoaded() == OtherInfo->NeedWaitTargetComponentLoaded())
		return true;
	else
		return false;
}

void UTriggerTaskStartInformationBase::SetNeedToEvaluateStartConditions(bool Value)
{
	NeedToEvaluateStartConditions = Value;
}


bool operator==(const UTriggerTaskStartInformationBase& Left, const UTriggerTaskStartInformationBase& Right)
{
	if (Left.Equal(&Right))
		return true;
	else
		return false;
}

