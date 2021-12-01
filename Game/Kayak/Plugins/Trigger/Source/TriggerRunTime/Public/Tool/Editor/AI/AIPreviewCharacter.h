#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "GameFramework/Character.h"
#include "TriggerDefinition.h"

#include "AIPreviewCharacter.generated.h"

class UTriggerTaskBase;
class UTT_AISpawn;
class USplineComponent;
class AAISpawnGroupDataTemplate;

USTRUCT(BlueprintType)
struct FPreviewInfo
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime")
	int RoundIndex = -1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime")
	int GroupIndex = -1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime")
	int PawnIndex = -1;
};

//the delegate is called when it`s Translation is edited. and the parameter is the mirror parameter of EditorApplyTranslation.
//AActor*, PreviewCharacter, const FVector&, DeltaTranslation, bool, bAltDown, bool, bShiftDown, bool, bCtrlDown
DECLARE_MULTICAST_DELEGATE_FiveParams(FOnPreviewCharacterTranslationEdit, const AActor*, const FVector&, bool, bool, bool);

//the delegate is called when it`s Rotation is edited. and the parameter is the mirror parameter of EditorApplyRotation.
//AActor*, PreviewCharacter, const FRotator&, DeltaRotation, bool, bAltDown, bool, bShiftDown, bool, bCtrlDown
DECLARE_MULTICAST_DELEGATE_FiveParams(FOnPreviewCharacterRotationEdit, const AActor*, const FRotator&, bool, bool, bool);

//the delegate is called when it`s Scale is edited. and the parameter is the mirror parameter of EditorApplyScale.
//AActor*, PreviewCharacter, const FVector&, DeltaScale, const FVector*, PivotLocation, bool, bAltDown, bool, bShiftDown, bool, bCtrlDown
DECLARE_MULTICAST_DELEGATE_SixParams(FOnPreviewCharacterScaleEdit, const AActor*, const FVector&, const FVector*, bool, bool, bool);


UCLASS(Blueprintable, BlueprintType, hidedropdown, hideCategories=(Physics,Collision,Lighting,Rendering,"Virtual Texture","Skin Weights",Tags,Activation,Cooking,Clothing))
class TRIGGERRUNTIME_API AAIPreviewCharacter : public ACharacter
{
	GENERATED_UCLASS_BODY()

public:
	virtual void PostInitProperties() override;

	virtual void Destroyed();

	virtual void BeginDestroy() override;

#if WITH_EDITORONLY_DATA

	virtual void EditorApplyTranslation(const FVector& DeltaTranslation, bool bAltDown, bool bShiftDown, bool bCtrlDown);
	virtual void EditorApplyRotation(const FRotator& DeltaRotation, bool bAltDown, bool bShiftDown, bool bCtrlDown);
	virtual void EditorApplyScale(const FVector& DeltaScale, const FVector* PivotLocation, bool bAltDown, bool bShiftDown, bool bCtrlDown);

	void  SelectedInEditor(UObject* SelectedActor);
	void SelectedChangeInEditor(UObject* SelectedActor);

	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;

	void InitializeData(UTriggerTaskBase* Task, int RoundIndex, int PawnIndex);

#endif

public:

	void SetCharacterLocation( FVector Location, FVector TargetLocation);
	void SetCharacterRotation( FRotator& Rotation );
	void SetCharacterScale( FVector& Scale);
	void SetCharacterTransform( FTransform& Transform );
	void SetDelayTime(float NewDelayTime);
	void SetWaitTime(float NewWaitTime);
	void SetAICommand(FAISpawnBehaviorCommand& NewCommand);
	void SetNPCID(int NPCID);
public:
	
	//When the preview character location changed we should update the end position of Spline
	void UpdateSpilineEndPosition(FVector Endposition);

private:
	
	//Update the start point of the spline which is always respect for the AIPreviewCharacter's position
	void UpdateSplineStartPosition(FVector& StartPosition);

public:

	//The identification for the NPC which will used to read resource form the excel file
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime")
	int NPCID;

	//The AI class type 
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime")
	FSoftObjectPath AIClassType;

	//After the AI spawned we should make it do something immediately
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime")
	FAISpawnBehaviorCommand AICommand;

	//When current AI spawned at runtime, how much time should be delayed to spawn new AI
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime")
	float DelayTime = -1.0f;

	//When the last AI have been spawned how much time should be waited to spawn current AI
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime")
	float WaitTime = -1.0f;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "TriggerRuntime")
	int RoundIndex = -1;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "TriggerRuntime")
	int GroupIndex = -1;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "TriggerRuntime")
	int PawnIndex = -1;

	//This should be removed in the feature
	//UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime")
	TArray<FPreviewInfo> PreviewInfos;

	//Owner of the trigger task which will use this character
	UTT_AISpawn* AISpawnTask;

	//The root actor which will manipulate the child AIPreviewCharacter
	AAISpawnGroupDataTemplate* AISpawnGroupDataTemplate;

	//I will use this component to show the relation ship between the other Actor and this Character in editor
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USplineComponent* RelationShipLine;

    FOnPreviewCharacterTranslationEdit OnTranslationEdit;
    FOnPreviewCharacterRotationEdit OnRotationEdit;
    FOnPreviewCharacterScaleEdit OnScaleEdit;
};


