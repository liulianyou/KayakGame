#include "RespawnPostProcess/RespawnPostProcessBase.h"

URespawnPostProcessBase::URespawnPostProcessBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}

void URespawnPostProcessBase::ApplayPostProcess(APawn* OldCharacter, APawn* NewCharacter)
{
	if (NewCharacter == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("Can't apply post process of respawn to the target character as its value empty!!"));

		return;
	}

	OnApplayPostProcess(OldCharacter, NewCharacter);
}
