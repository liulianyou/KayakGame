#include "KayakPlayerControllerBase.h"
#include "TriggerNetPlayerSupportComponent.h"
#include "ItemNetworkSupportComponent.h"

AKayakPlayerControllerBase::AKayakPlayerControllerBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	TriggerNetSupport = CreateDefaultSubobject<UTriggerNetPlayerSupportComponent>(TEXT("TriggerNetSupport"));
	ItemNetSupport = CreateDefaultSubobject<UItemNetworkSupportComponent>(TEXT("ItemNetSupport"));
}