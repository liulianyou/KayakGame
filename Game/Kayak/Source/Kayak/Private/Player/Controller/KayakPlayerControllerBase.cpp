#include "KayakPlayerControllerBase.h"
#include "TriggerNetPlayerSupportComponent.h"

AKayakPlayerControllerBase::AKayakPlayerControllerBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	TriggerNetSupport = CreateDefaultSubobject<UTriggerNetPlayerSupportComponent>(TEXT("TriggerNetSupport"));
}