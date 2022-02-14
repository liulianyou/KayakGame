#pragma once

/*
* Author:	Liulianyou
* Time:		2022/2/11
* Purpose:	This is used to define the global definition which is used for this plugin
*/

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/ObjectMacros.h"

#include "EvaluatorDefinition.generated.h"

class UEvaluatorBase;
class AActor;

DECLARE_LOG_CATEGORY_EXTERN(LogEvaluator, Log, All);

/*
* All delegates which is used by other modules, mostly these delegate should be resisted in the outer modules
*/
struct EVALUATOR_API FEvaluatorGlobalDelegate
{
	/*
	* Invoked when one evaluator try to evaluate itself to check weather it have been passed
	*
	* @param Evaluator			The target evaluator which is evaluating
	* @param EvaluatorResult	the result for current resulting
	*/
	DECLARE_MULTICAST_DELEGATE_TwoParams(FEvaluatorNativeEvent, UEvaluatorBase* /*Evaluator*/, bool /*EvaluatorResult*/);
	static FEvaluatorNativeEvent EvaluatorNativeEvent;
};

/*
* The following delegate will be resisted by this evaluator plugin to inspect some outer environment
* These delegate should be broadcast in the outer code, and resisted in this module
*/
struct EVALUATOR_API FEvaluatorNeededDelegate
{
	/*
	* When the player want to aboard this game, and run to other map, the player should call this delegate to make sure the GameOverTask can work
	* If the causer is null means all players in this game should exist
	*/
	DECLARE_MULTICAST_DELEGATE_TwoParams(FreExistCurrentMapNativeEvent, AActor* /*Causer*/, FString /*URL*/);
	static FreExistCurrentMapNativeEvent ExitCurrentMapNativeEvent;

	//When the current player disconnect from the DS it should call this delegate to make sure the GameOverTask can work effectually
	DECLARE_MULTICAST_DELEGATE_OneParam(FDisconnectNativeEvent, AActor* /*Causer*/);
	static FDisconnectNativeEvent DisconnectNativeEvent;

	//When the player is field if some conditions meets
	DECLARE_MULTICAST_DELEGATE_OneParam(FGameFailedEvent, TArray<AActor*>& /*Causeres*/);
	static FGameFailedEvent GameFailedEvent;
};


UINTERFACE(MinimalAPI, BlueprintType, Category = "Evaluator|Dead")
class UDeadSupportInterface : public UInterface
{
	GENERATED_BODY()
};

/*
* If you want to use this task you should make your character inherited from this class
*/
class EVALUATOR_API IDeadSupportInterface
{
	GENERATED_BODY()

public:

	/*
	* This delegate should be broadcast when the pawn is dead
	* Sometimes when the character try to go into dead state he may do some other things or something should be done before he is really dead
	* Such as maybe he can live for one minute to wait for others to rescuer him
	*/
	DECLARE_MULTICAST_DELEGATE_OneParam(FPreCharacterDead, AActor*);
	FPreCharacterDead OnCharacterPreEnterDead;

	/*
	* This delegate should be broadcast when this player is dead at game play logic.
	* And at this moment the actor have not been treated actually dead and have not trigger dead effect.
	* Such as if one player is dead but there is one button for player to confirm he is dead
	*/
	DECLARE_MULTICAST_DELEGATE_OneParam(FCharacterStartToDead, AActor*);
	FCharacterStartToDead OnCharacterEnterDead;

	/*
	* The delegate should be broad casted when the target actor is dead and confirmed by others.
	* Such as one player is dead and there is one button for the player to confirm dead state.
	*/
	DECLARE_MULTICAST_DELEGATE_OneParam(FCharacterDead, AActor*);
	FCharacterDead OnCharacterConfirmDead;

	/*
	* This delegate should be broad casted when the target actor alive out from the dead state.
	*/
	DECLARE_MULTICAST_DELEGATE_OneParam(FCharacterAlive, AActor*);
	FCharacterAlive OnCharacterAlive;
};