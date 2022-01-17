#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/3
* Purpose:	The base controller class which is used for player
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "GameFramework/PlayerController.h"

#include "KayakPlayerControllerBase.generated.h"

class UTriggerNetPlayerSupportComponent;
class UItemNetworkSupportComponent;

UCLASS(Blueprintable, BlueprintType, Abstract, Category = "Kayak|PlayerController")
class KAYAK_API AKayakPlayerControllerBase : public APlayerController
{
	GENERATED_UCLASS_BODY()

public:
private:

	/*
	* Used for trigger event system, so that the trigger event system can use the RPC(Client/Server).
	*/
	UPROPERTY()
	UTriggerNetPlayerSupportComponent* TriggerNetSupport;

	/*
	* Used for item system to expand its net work while one item has no avatar owner
	*/
	UPROPERTY()
	UItemNetworkSupportComponent* ItemNetSupport;
};