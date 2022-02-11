#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/1
* Purpose:	This is the base character class for player.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "KayakCharacterBase.h"
#include "TriggerDefinition.h"
#include "EvaluatorDefinition.h"
#include "KayakPlayerCharacterBase.generated.h"

/*
* The base character of player
*/
UCLASS(Blueprintable, BlueprintType, Abstract, Category = "Kayak|Player")
class KAYAK_API AKayakPlayerCharacterBase : public AKayakCharacterBase, public IDeadSupportInterface
{
	GENERATED_UCLASS_BODY()

public:

	//Override Pawn
	virtual void SetupPlayerInputComponent(UInputComponent* InInputComponent) override;
	//Override Pawn

	//Override AKayakCharacterBase
	virtual void MoveForward(float Val);
	virtual void MoveRight(float Val);
	virtual void MoveUp_World(float Val);
	virtual void TurnAtRate(float Rate);
	virtual void LookUpAtRate(float Rate);
	//Override AKayakCharacterBase


};

