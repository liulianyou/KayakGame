#include "TriggerResetStyleBase.h"
#include "TriggerDefinition.h"

UTriggerResetStyleBase::UTriggerResetStyleBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

void UTriggerResetStyleBase::Execute()
{
	Reset(GetOwner());
}

void UTriggerResetStyleBase::Reset(UObject* Target)
{
	BP_Reset(Target);
}


