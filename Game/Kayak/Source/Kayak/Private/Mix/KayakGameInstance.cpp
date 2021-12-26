#include "KayakGameInstance.h"
#include "AbilitySystemGlobals.h"

UKayakGameInstance::UKayakGameInstance( const FObjectInitializer& ObjectInitializer )
	:Super(ObjectInitializer)
{
	
}

void UKayakGameInstance::Init()
{
	Super::Init();

	UAbilitySystemGlobals::Get().InitGlobalData();
}