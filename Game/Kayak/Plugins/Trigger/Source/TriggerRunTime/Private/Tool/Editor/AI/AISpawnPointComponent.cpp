#include "Editor/AI/AISpawnPointComponent.h"
#include "Editor/AI/AIPreviewCharacter.h"
#include "TriggerConfig.h"
#include "Editor/AI/AISpawnGroupDataTemplate.h"

UAISpawnPointComponent::UAISpawnPointComponent(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
#if WITH_EDITORONLY_DATA
	TransformUpdated.AddUObject(this, &UAISpawnPointComponent::UpdateAIPreview);
#endif

	//Only used in the editor mode
	bIsEditorOnly = true;

}

#if WITH_EDITORONLY_DATA
void UAISpawnPointComponent::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (FProperty* PropertyThatChanged = PropertyChangedEvent.Property)
	{
		const FName PropertyName = PropertyThatChanged->GetFName();
	}
}

void UAISpawnPointComponent::UpdateAIPreview(USceneComponent* UpdatedComponent, EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport)
{
	AAISpawnGroupDataTemplate* AISpawnGroupDataTemplate = Cast<AAISpawnGroupDataTemplate>(GetOwner());

	/*
	* When Add new actor form the browser to the world, and then move it in the world the Engine will set the actor transform directly,
	* and the actor will update its components so we need to call the actor to update the AIPreivewCharacter 	  
	* 
	* When add new Actor to the world from browser the Component in its owner actor will changed each frame by duplicate object form the archly type.
	* The AIPreview is created after the Actor created, so this also make this Component to invoke the owner actor to update the AIPreveiew
	*/
	if (AISpawnGroupDataTemplate != nullptr && AISpawnGroupDataTemplate->GetTargetOwner() != nullptr)
	{
		TArray<UAISpawnPointComponent*> OutComponents;
		AISpawnGroupDataTemplate->GetAttachedSpawnPointsComponents(AISpawnGroupDataTemplate, OutComponents);

		AISpawnGroupDataTemplate->UpdatePreviewCharacter(Cast<UAISpawnPointComponent>(UpdatedComponent));
	}
}
#endif

void UAISpawnPointComponent::PostInitProperties()
{
	Super::PostInitProperties();



}

void UAISpawnPointComponent::EndPlay(EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	//DestroyPreviewCharacter();
}

void UAISpawnPointComponent::OnComponentDestroyed(bool bDestroyingHierarchy)
{
	Super::OnComponentDestroyed(bDestroyingHierarchy);

	//DestroyPreviewCharacter();
}

void UAISpawnPointComponent::BeginDestroy()
{
	Super::BeginDestroy();

	//DestroyPreviewCharacter();
}

void UAISpawnPointComponent::SetPreviewCharacter(AAIPreviewCharacter* AIPreviewCharacter)
{
	PreviewCharacter = AIPreviewCharacter;

	if(PreviewCharacter == nullptr)
		return;

	PreviewCharacter->SetDelayTime(DelayTime);
	PreviewCharacter->SetWaitTime(WaitTime);
	FAISpawnBehaviorCommand LocalAICommand;
	LocalAICommand = AICommand;
	LocalAICommand.TargetPosition = GetComponentTransform().TransformVector(AICommand.TargetPosition);
	PreviewCharacter->SetAICommand(LocalAICommand);
	PreviewCharacter->SetNPCID(NPCID);
}

AAIPreviewCharacter* UAISpawnPointComponent::GetPreviewCharacter()
{
	return PreviewCharacter;
}

void UAISpawnPointComponent::DestroyPreviewCharacter()
{
	if (PreviewCharacter != nullptr && PreviewCharacter->IsValidLowLevel())
	{
		PreviewCharacter->Destroy();
		PreviewCharacter = nullptr;
	}
}