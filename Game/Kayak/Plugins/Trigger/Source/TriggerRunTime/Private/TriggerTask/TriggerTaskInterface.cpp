#include "TriggerTask/TriggerTaskInterface.h"
#include "TriggerBlueprintLib.h"

UTriggerTaskInterface::UTriggerTaskInterface(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}


FString ITriggerTaskInterface::ConvertPathReferencValueToVaild(FString ReferencePath, bool Add_CSuffix)
{
	return UTriggerBlueprintLib::ConvertPathReferencValueToVaild(ReferencePath, Add_CSuffix);
}
