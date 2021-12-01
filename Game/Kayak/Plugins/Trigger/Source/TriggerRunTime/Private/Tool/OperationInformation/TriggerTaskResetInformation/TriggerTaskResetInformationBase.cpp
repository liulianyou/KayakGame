#include "TriggerTaskResetInformationBase.h"

UTriggerTaskResetInformationBase::UTriggerTaskResetInformationBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	ResetType = ETriggerTaskResetType::ETriggerTaskResetType_All;
}