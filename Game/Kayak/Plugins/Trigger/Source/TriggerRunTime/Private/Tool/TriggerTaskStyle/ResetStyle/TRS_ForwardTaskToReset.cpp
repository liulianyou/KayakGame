#include "TRS_ForwardTaskToReset.h"
#include "TriggerTaskResetCommonOperationInfos.h"

UTRS_ForwardTaskToReset::UTRS_ForwardTaskToReset(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

#if WITH_EDITOR
void UTRS_ForwardTaskToReset::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);


	if (FProperty* PropertyThatChanged = PropertyChangedEvent.Property)
	{
		const FName PropertyName = PropertyThatChanged->GetFName();

		if (PropertyName == GET_MEMBER_NAME_CHECKED(UTRS_ForwardTaskToReset, ResetType))
		{
			//Forbid the designer to config this value to be ETriggerTaskResetType_Customize, or this will cause infinite loop
			if (ResetType == ETriggerTaskResetType::ETriggerTaskResetType_Customize)
			{
				ResetType = ETriggerTaskResetType::ETriggerTaskResetType_None;
			}
		}
	}
}
#endif

void UTRS_ForwardTaskToReset::Execute()
{
	Reset(GetOwner());
}

void UTRS_ForwardTaskToReset::Reset(UObject* Target)
{
	if(Target == nullptr)
		return;

	UTriggerTaskBase* TriggerTask = Cast<UTriggerTaskBase>(Target->GetTypedOuter<UTriggerTaskBase>());

	if (TriggerTask != nullptr)
	{
		UTriggerTaskReset_CommonReset* ResetOption = UTriggerTaskReset_CommonReset::CommonReset(ResetType, GetOwner(), TriggerTask, nullptr, this);

		TriggerTask->Reset(ResetOption);
	}
}

