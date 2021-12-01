#pragma once

#include "CoreMinimal.h"
#include "Tool/Editor/TriggerEditorActorBase.h"
#include "AISpawnPointActor.generated.h"

class UTextRenderComponent;
class UAnimMontage;
class UStaticMesh;
class UStaticMeshComponent;
class UCapsuleComponent;
class UArrowComponent;
class AAISpawnerTemplate;
class USplineComponent;
class UMaterialInterface;
class UFont;

/**
 * the spawn point, show like PreviewCharacter.
 * and data about spawn,will be set to AGaiaAIPreviewCharacter.
 * see detail at https://ztgame.feishu.cn/docs/doccnMJqEX3JNtkgkUzicSfcS8E
 */
UCLASS(Blueprintable, BlueprintType)
class TRIGGERRUNTIME_API AAISpawnPointActor : public ATriggerEditorActorBase
{
    GENERATED_UCLASS_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SpawnPoint")
	TArray<UAnimMontage*> SpawnMontages;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SpawnPoint")
	bool bSetAllPlayerToAIThreat;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Preview")
	UStaticMesh* PreviewMesh;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Preview", AdvancedDisplay)
    FVector PreviewMeshLocation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Preview", AdvancedDisplay)
    FRotator PreviewMeshRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Preview", AdvancedDisplay)
    float TextRelativeHeight;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= "Preview", AdvancedDisplay)
	UMaterialInterface* TextMaterial;
	
	/** Text font */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= "Preview", AdvancedDisplay)
	UFont* Font;
    
	/** Color of the text, can be accessed as vertex color */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Preview", AdvancedDisplay)
	FColor TextRenderColor;

	/** Vertical size of the fonts largest character in world units. Transform, XScale and YScale will affect final size. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Preview", AdvancedDisplay)
	float TextWorldSize;
public:
    virtual void PostLoad() override;
    virtual void PostDuplicate(bool bDuplicateForPIE) override;

    virtual void Destroyed() override;

    const TArray<UAnimMontage*>& GetSpawnMontages() const;
    bool IsSetAllPlayerToAIThreat() const;

    FVector GetTextLocation() const;

#if WITH_EDITOR
    virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;

    virtual void EditorApplyTranslation(const FVector& DeltaTranslation, bool bAltDown, bool bShiftDown, bool bCtrlDown);
    virtual void EditorApplyRotation(const FRotator& DeltaRotation, bool bAltDown, bool bShiftDown, bool bCtrlDown);
    virtual void EditorApplyScale(const FVector& DeltaScale, const FVector* PivotLocation, bool bAltDown, bool bShiftDown, bool bCtrlDown);

    void ShowPreviewRelationshipTo(FVector Endposition);
    void HidePreviewRelationShip();
    void UsedInSpawner(AAISpawnerTemplate* InSpawner);
    void RemovedInSpawner(AAISpawnerTemplate* InSpawner);
    
    void ShowIndexText(int32 IndexValue, bool bNeedInit);
    void HideIndexText();

protected:
    void UpdateTextRender();
    void SynchronizeToSpanwer();

    void OnSelectedInEditor(UObject* SelectedObject);

    void ClearEditorInfo();
#endif
protected:
    //show index in spawner.
    UPROPERTY(BlueprintReadOnly)
    UTextRenderComponent* TextComponent;
    
	/** The main skeletal mesh associated with this Character (optional sub-object). */
	UPROPERTY(Category=Character, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"))
	UStaticMeshComponent* PreviewMeshComponent;

	/** The CapsuleComponent being used for movement collision (by CharacterMovement). Always treated as being vertically aligned in simple collision check functions. */
	UPROPERTY(Category=Character, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"))
	UCapsuleComponent* PreviewCapsuleComponent;

#if WITH_EDITORONLY_DATA
	/** Component shown in the editor only to indicate character facing */
	UPROPERTY()
	UArrowComponent* PreviewArrowComponent;

    FString IndexText;
#endif
    
	UPROPERTY()
	USplineComponent* RelationShipLine;
    
    //to store triggers which use the spawner, the value is the use times.
    UPROPERTY(VisibleAnywhere, Category = "UsedInSpawner", meta = (DisplayName = "Spawner And Reference Count"))
	TMap<AAISpawnerTemplate*, int32> SpawnerAndCountMap;

    /*
    * Flag to check weather we change the preview character's transform by drag the point in the viewport.
    * There is two way to change AIPreviewCharacter's Transform:
    * One: When we drag the asset form browser to viewport and not drop it, at this time I will change the AIPreivewCharacter transform by the AISpawnPointComponent
    * Second: Drop this actor on the viewport and drag the arrow point to change AIPreivewCharacter Transform
    */
    bool bEditorApplyTransform;//copy from AAISpawnGroupDataTemplate
};
