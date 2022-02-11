#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "GameModeData/GameModeDataBase.h"

#include "GameModeData.generated.h"

UCLASS(Blueprintable, BlueprintType)
class EVALUATOR_API UIsGameInProgress : public UTriggerGameModeDataBase
{
	GENERATED_UCLASS_BODY()

public:

	//Override TriggerGameModeDataBase
	virtual void Initialize(UCheckGameModeState* OwnerObject) override;
	virtual bool IsPassed() override;
	//Override TriggerGameModeDataBase

public:
	
	UFUNCTION()
	void OnGameModeMatchStateCallback( FName NewState );

};
