#include "ReplicateType/Replicate_No.h"

UReplicate_No::UReplicate_No(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}

bool UReplicate_No::CanReplicate_Implementation()
{
	return false;
}
