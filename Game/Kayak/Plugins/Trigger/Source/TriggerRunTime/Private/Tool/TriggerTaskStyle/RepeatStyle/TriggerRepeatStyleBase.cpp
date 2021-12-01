#include "TriggerRepeatStyleBase.h"

UTriggerRepeatStyleBase::UTriggerRepeatStyleBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

void UTriggerRepeatStyleBase::Execute()
{
	TryToRepeat(GetOwner());
}

bool UTriggerRepeatStyleBase::TryToRepeat_Implementation(UObject* Object)
{
	//By default the repeat style will not process any object
	return false;
}

