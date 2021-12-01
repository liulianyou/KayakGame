#include "ReplicateType/Replicate_Yes.h"

UReplicate_Yes::UReplicate_Yes(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}

bool UReplicate_Yes::CanReplicate_Implementation()
{
	return true;
}


