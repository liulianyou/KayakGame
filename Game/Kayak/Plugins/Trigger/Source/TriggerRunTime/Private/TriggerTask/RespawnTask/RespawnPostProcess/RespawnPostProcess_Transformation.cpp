#include "RespawnPostProcess/RespawnPostProcess_Transformation.h"
#include "TriggerNetPlayerSupportComponent.h"
#include "TriggerBlueprintLib.h"

#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"

URespawnPostProcess_Transformation::URespawnPostProcess_Transformation(const FObjectInitializer& ObjectInitializer):
	Super(ObjectInitializer)
{
	
}

void URespawnPostProcess_Transformation::ApplayPostProcess(APawn* OldCharacter, APawn* NewCharacter)
{
	Super::ApplayPostProcess(OldCharacter, NewCharacter);

	if (NewCharacter == nullptr)
		return;

	 UTriggerNetPlayerSupportComponent* TNPSC = UTriggerBlueprintLib::GetTriggerNetPlayerSupportFromActor(NewCharacter);

	 if (TNPSC == nullptr)
	 {
		 return;
	 }

	 FTransform Transform(Rotation, Position, Scale);

	 TNPSC->Multicast_ChangeTranfrom(UserCustomizePosition, UserCustomizeRotation, UserCustomizeScale, Transform);

}