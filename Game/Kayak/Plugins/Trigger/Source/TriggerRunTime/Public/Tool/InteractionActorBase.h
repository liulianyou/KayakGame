#pragma once

/*
* Author:	Liulianyou
* Time:		2020/10/30
* Purpose:	This is the base actor class which is used by the player interact with
*			Mostly the interaction actor is also one trigger which combined with the trigger task and effect, 
*			but sometimes there is one actor which is affected by the trigger, and this actor only do some local visual effect,
*			The player only interact with the trigger and the trigger will affect the target interaction actor.
*			or one actor will be interacted by the player directly but the toggle condition is in another trigger.
*			such as when one player toggle one trigger ,and this trigger notify the interaction actor the player will interact with it
*			
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "Gameframework/Actor.h"

#include "TriggerDefinition.h"

#include "InteractionActorBase.generated.h"

UCLASS(Blueprintable,BlueprintType,Abstract,Category="TriggerRuntime")
class TRIGGERRUNTIME_API AInteractionActorBase : public AActor
{
	GENERATED_UCLASS_BODY()

public:

	//After this invocation this actor can be affected by the player's interaction
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	void StartInteract();

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	void InteractionValueChanged();

	//After this invocation this actor can not response to the player's interaction
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	void EndInteract(EInteractionEndType Type);


};
