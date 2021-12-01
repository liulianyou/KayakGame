#pragma once

/*
* Author:	Liulianyou
* Time:		2020/8/31
* Purpose:	This post process for the respawn is only change the target character's transformation
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "RespawnPostProcessBase.h"

#include "RespawnPostProcess_Transformation.generated.h"

UCLASS(BlueprintType, Blueprintable, editinlinenew, DefaultToInstanced )
class TRIGGERRUNTIME_API URespawnPostProcess_Transformation : public URespawnPostProcessBase
{
	GENERATED_UCLASS_BODY()

public:

	//Override RespawnPostProcessBase
	virtual void ApplayPostProcess(APawn* OldCharacter, APawn* NewCharacter) override;
	//Override RespawnPostProcessBase

public:

	//Flag to check weather we will use the specified position for the character position after it is spawned
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool UserCustomizePosition;

	//The character's position
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (EditCondition = UserCustomizePosition))
	FVector Position;

	//Flag to check weather we will use the specified rotation for the character rotation after it is spawned
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool UserCustomizeRotation;

	//The character's rotation
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (EditCondition = UserCustomizeRotation))
	FRotator Rotation;

	//Flag to check weather we will use the specified scale for the character scale after it is spawned
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool UserCustomizeScale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (EditCondition = UserCustomizeScale))
	FVector Scale;
};
