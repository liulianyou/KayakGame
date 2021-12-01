#pragma once

/*
* Author:	Liulianyou
* Time:		2020/9/26
* Purpose:	This is the editor used only component which is just the place hold of AI spawn point. 
*/


#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "Components/StaticMeshComponent.h"

#include "TriggerDefinition.h"

#include "AISpawnPointComponent.generated.h"

class AAIPreviewCharacter;

//Editor used only for the place hold of the AI spawn point
UCLASS(BlueprintType, Blueprintable, hideCategories = (Sockets, Physics, Variable, Collision, Lighting, Rendering, VirtualTexture, Tags, "Component Replication", Cooking), meta = (BlueprintSpawnableComponent))
class TRIGGERRUNTIME_API UAISpawnPointComponent : public UStaticMeshComponent
{
	GENERATED_UCLASS_BODY()

public:
	virtual void PostInitProperties();
	virtual void EndPlay(EEndPlayReason::Type EdnPlayReason);
	virtual void BeginDestroy() override;
	virtual void OnComponentDestroyed(bool bDestroyingHierarchy) override;
public:
	void SetPreviewCharacter(AAIPreviewCharacter* AIPreviewCharacter);
	AAIPreviewCharacter* GetPreviewCharacter();
	void DestroyPreviewCharacter();

protected:
	

#if WITH_EDITORONLY_DATA

protected:
	void UpdateAIPreview(USceneComponent* UpdatedComponent, EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport);

public:

	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;

#endif
public:

	//The preferred type AI that want to spawn here
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime")
	int NPCID;

	//After the AI spawned we should make it do something immediately
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime")
	FAISpawnBehaviorCommand AICommand;

	//When current AI spawned at runtime, how much time should be delayed to spawn new AI
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime")
	float DelayTime;

	//When the last AI have been spawned how much time should be waited to spawn current AI
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime")
	float WaitTime;

	/*
	* The Index for this AI spawn point in the chain of the components
	* we can't accord to the default order in the GetComponentByClass or any similar function
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime")
	int Index;

private:
	UPROPERTY()
	AAIPreviewCharacter* PreviewCharacter;
};