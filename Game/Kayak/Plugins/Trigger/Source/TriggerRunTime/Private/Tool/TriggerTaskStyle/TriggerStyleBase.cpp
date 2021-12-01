#include "TriggerStyleBase.h"

UTriggerStyleBase::UTriggerStyleBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	
}


void UTriggerStyleBase::InitializeStyle(UObject* OwnerObject)
{
	OnInitializeStyle(OwnerObject);

	Owner = OwnerObject;
}

void UTriggerStyleBase::Execute()
{
	OnExecute();
}
