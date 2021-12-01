#pragma once

/*
* Author:		Liulianyou
* Time:			2021/3/17
* Purpose:		Base class to hold the respawn point for respawn task, this will only be used in the editor
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "GameFramework/Character.h"

#include "RespawnEditorPointBase.generated.h"

UCLASS(BlueprintType, Blueprintable, Category = "TriggerEditor")
class TRIGGERRUNTIME_API ARespawnEditorPointBase : public ACharacter
{
	GENERATED_UCLASS_BODY()

public:
#if WITH_EDITOR

	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual void EditorApplyTranslation(const FVector& DeltaTranslation, bool bAltDown, bool bShiftDown, bool bCtrlDown) override;
	virtual void EditorApplyRotation(const FRotator& DeltaRotation, bool bAltDown, bool bShiftDown, bool bCtrlDown) override;
	virtual void EditorApplyScale(const FVector& DeltaScale, const FVector* PivotLocation, bool bAltDown, bool bShiftDown, bool bCtrlDown)override;
#endif

public:
	virtual void ApplayLocalData() PURE_VIRTUAL(&ARespawnEditorPointBase::ApplayLocalData,) ;

};