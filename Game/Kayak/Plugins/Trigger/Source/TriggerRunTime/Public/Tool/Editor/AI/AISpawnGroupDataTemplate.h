#pragma once

/*
* Author:	Liulianyou
* Time:		2020/9/24
* Purpose:	This is the data used for group AI spawn which is only worked on the editor
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "Editor/TriggerEditorActorBase.h"

#include "AISpawnPointComponent.h"

#include "AISpawnGroupDataTemplate.generated.h"


class AAIPreviewCharacter;
class USplineComponent;
class ANewTriggerBase;
class UAISpawnDataGroup;
class UBillboardComponent;

UCLASS(BlueprintType, Blueprintable, hideCategories= (Object, Activation, "Components|Activation", "Actor Tick", Replication, Rendering, Collision, Input, Actor,Cooking, LOD))
class TRIGGERRUNTIME_API AAISpawnGroupDataTemplate : public ATriggerEditorActorBase
{
	GENERATED_UCLASS_BODY()

public:
	virtual void BeginDestroy() override;
	virtual void Destroyed() override;

	virtual void PostInitProperties() override;
	virtual void PostInitializeComponents() override;
	virtual void PostLoad() override;

	//When this actor is created by the creator which contains the actual AI spawn data, this function will be invoked
	void InitializeActor( UObject* Creator , int Round, int Group);

	//Get the trigger actor who own the data which spawn this actor
	ANewTriggerBase* GetOwnedTrigger();
	const UObject* GetTargetOwner() const {return TargetOwner;}
	int GetRoundIndex() const { return RoundIndex; }
	int GetGroupIndex() const { return GroupIndex; }

	void ApplayAIPreviewDataToSpawnAIData( AAIPreviewCharacter* Character );

	bool FindAppropriateAIPreviewCharacter(FString& Name, int AIIndex);

public:
	UFUNCTION(meta = (CallInEditor = true))
	void OnAIPreviewCharacterDestroyed(AActor* DestroyedActor);

#if WITH_EDITORONLY_DATA

public:
	virtual void PreEditChange(FProperty* PropertyThatWillChange) override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual void EditorApplyTranslation(const FVector& DeltaTranslation, bool bAltDown, bool bShiftDown, bool bCtrlDown);
	virtual void EditorApplyRotation(const FRotator& DeltaRotation, bool bAltDown, bool bShiftDown, bool bCtrlDown);
	virtual void EditorApplyScale(const FVector& DeltaScale, const FVector* PivotLocation, bool bAltDown, bool bShiftDown, bool bCtrlDown);
	//Update the preview character when some properties have changed in this actor
	void UpdatePreviewCharacter(UAISpawnPointComponent* SpawnComponent);

	void SelectedInEditor(UObject* SelectedObject);
	void SelectedChangeInEditor(UObject* SelectedObject);
	void SaveWorldInEditor(uint32, class UWorld*);

private:
	// When the target actor is spawned in the editor I need to initialize the spawn point component if it have
	void InitializeAISpawnPointComponent(AAISpawnGroupDataTemplate* Actor );
	void ClearEditorInfo();
#endif
	
public:
	/*
	* AI PreivewCharacter should always correspond to this Actor, when we add this actor form browser to world
	* the components in this actor will always created new by duplicating
	*/
	UPROPERTY()
	TArray<AAIPreviewCharacter*> PreviewCharacters;

	//The offset transform between the preview character and the AISpawnPointComponent offset
	UPROPERTY()
	TArray<FTransform> PosintsOffsetTransform;

private:
	void ShowRelationShipToTrigger();

	/*
* 	* Get The actual transform form the Data.
	* If the specific transform is different form the base transform I will use the transform in the data to spawn the AIPreview character 
	*/
	bool GetActualTransform(UAISpawnDataGroup* Data, int PawnIndex, const FTransform& BaseTransform, FTransform& OutTransform);
	
	//Override the data in the component according the data
	bool InitializeActorComponentData(UAISpawnDataGroup* Data, int Round, int Group);
public:
	
	//Callback function when this actor added to world
	UFUNCTION()
	void OnAISpawnGroupDataTempleteAddedToWorld( AActor* Actor );

	//Get the attached components in this actor
	void GetAttachedSpawnPointsComponents( AActor* Actor, TArray<UAISpawnPointComponent*>& OutComponents );

	AAIPreviewCharacter* SpawnNewAIPreview(AAISpawnGroupDataTemplate* Actor, UAISpawnPointComponent* SpawnPoint, int AIIndex);
private:
	void InternalGetSpawnPointComponents( UActorComponent* ParentComponent, TArray<UAISpawnPointComponent*>& OutComponents);

	

public:
	//I will use this component to show the relation ship between the other Actor and this Character in editor
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USplineComponent* RelationShipLine;

	UPROPERTY()
	UBillboardComponent* SpriteComponent;

private:

	UPROPERTY()
	TArray<FSoftObjectPath> SoftObjectPath;

	/*
	* Flag to check weather we change the preview character's transform by drag the point in the viewport.
	* There is two way to change AIPreviewCharacter's Transform:
	* One: When we drag the asset form browser to viewport and not drop it, at this time I will change the AIPreivewCharacter transform by the AISpawnPointComponent
	* Second: Drop this actor on the viewport and drag the arrow point to change AIPreivewCharacter Transform	
	*/
	bool bEditorApplyTransform;

	//The owner who start to create this Actor to world
	UPROPERTY()
	UObject* TargetOwner;

	//I will use the below two member variables to identify the specific data in the AI spawn data
	UPROPERTY()
	int RoundIndex;
	UPROPERTY()
	int GroupIndex;

#if WITH_EDITOR
public:
	static AAISpawnGroupDataTemplate* FindAppropicateTemplateActors(UObject* Data, int RoundIndex, int GroupIndex);

private:
	static TArray<AAISpawnGroupDataTemplate*> GroupDataTemplatePool;

private:

	//Callback function when the develop compile the BP, and the Editor replace the instance in the world
	void static OnObjectReplaced(const TMap<UObject*, UObject*>& OldToNewMap);
	static FDelegateHandle ObjectReplacedHanded;
#endif
};