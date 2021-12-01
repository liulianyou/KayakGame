#pragma once

/*
* Author:	Liulianyou
* Time:		2020/8/26
* Purpose:	This effect used to open door
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "Templates/SubclassOf.h"
#include "Animation/AnimInstance.h"
#include "LevelSequence.h"
#include "InteractionEffectBase.h"

#include "InteractionEffect_OpenDoor.generated.h"

//The door type that we want to operate
UMETA(BlueprintType)
enum class EDoorType : uint8
{
	EDoorType_SingleSide	UMETA(DisplayName = "Single Side"),
	EDoorType_TwoSide		UMETA(DisplayName = "Two Side")
};

/*
* The direction to open the door
*/
UENUM(BlueprintType)
enum class EOpenDirection : uint8
{
	EOpenDirection_PositiveAxis		UMETA(DisplayName = "Outer"),
	EOpenDirection_NativeAxis		UMETA(DisplayName = "Inner")
};

UENUM(BlueprintType)
enum class EOpenAxis : uint8
{
	EOpenAxis_X			UMETA(DisplayName = "X"),
	EOpenAxis_Y			UMETA(DisplayName = "Y"),
	EOpenAxis_Z			UMETA(DisplayName = "Z"),
	EOpenAxis_AnyAxis	UMETA(DisplayName = "AnyAxis"),
};

USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FOpenDoorInfo
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<AActor*> Doors;

	//Flag to check weather to use the animation instance in actor
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool UseAnimation = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (EditCondition = UseAnimation))
	class TSubclassOf<UAnimInstance> AnimClass;

	//Flag to check weather to use  sequence to play animation(not Actor animation which will use skeleton)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (EditCondition = UseAnimation))
	bool UseSequence = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (EditCondition = UseSequence))
	class TSubclassOf<ULevelSequence> LevelSequence;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EOpenDirection Direction;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EOpenAxis OpenAxisType;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FVector Axis;
};


UCLASS(/*BlueprintType, Blueprintable*/)
class TRIGGERRUNTIME_API UInteractionEffect_OpenDoor : public UInteractionEffectBase
{
	GENERATED_UCLASS_BODY()

public:

	virtual void OpenEffect(UTriggerEffectDataOperationStyleBase* OpenStyle) override;
	virtual void CloseEffect(UTriggerEffectDataOperationStyleBase* CloseStyle) override;
	virtual void ValueInInteractionRuleChanged(AActor* Cuaser, UInteractionRuleDataBase* InInteractionRule) override;

protected:



public:

	/*
	* The target door that we need to operate
	*/
	UPROPERTY(BlueprintReadOnly, EditAnywhere, export, Category = "InteractionEffect")
	TArray<FOpenDoorInfo> Informations;

};

