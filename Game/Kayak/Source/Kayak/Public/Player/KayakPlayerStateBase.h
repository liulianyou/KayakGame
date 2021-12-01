#pragma once

/*
* Author:	Liulianyou
* Time		2021/12/30
* Purpose:	The state which will be used in the player so that the client can replicated some important properties or some RPC functions
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "GameFramework/PlayerState.h"

#include "KayakPlayerStateBase.generated.h"

UCLASS(Blueprintable, BlueprintType, Abstract, Category = "Kayak|Player|PlayerState")
class KAYAK_API AKayakPlayerStateBase : public APlayerState
{
	GENERATED_UCLASS_BODY()

public:

};
