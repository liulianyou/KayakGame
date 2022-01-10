#pragma once

/*
* Author:		Liulianyou
* Time:			2021/1/22
* Purpose:		This is actor which is used to place in the world which will hold the other actor.
*				We can use it to combine different actor in one actor blueprint class, so that the we can reuse this class in different class easily
*				Although UE have default component: ChildActorComponent, this component can't work well on the DS/Client mode when the target actor is lay on the Stream Level.
*				When the DS have loaded the stream level and the environment on the client to load the stream level is different, the two serialized actor maybe have different serialized ID,
*				which will cause the connect between two actor mission.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "GameFramework/Actor.h"

#include "PlaceableActorContainer.generated.h"

class UTaskComponentCategory;

USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FChildActorInfo
{
	GENERATED_BODY()

public:

	bool IsValid();

	UPROPERTY(VisibleAnywhere, Category = "TriggerRuntime")
	TSoftObjectPtr<AActor> Actor;

public:
	
	UPROPERTY(VisibleInstanceOnly, Category = "TriggerRuntime")
	TSoftObjectPtr<UChildActorComponent> ChildActorComponent;

};

/*
* This class will still use the UE4 default ChildActorComponent, 
* but I will only use this component to get class, Transform information. and that component will only exist in the editor
*/
UCLASS(BlueprintType, Blueprintable, Category = "TriggerRuntime")
class TRIGGERRUNTIME_API APlaceableActorContainer : public AActor
{
	GENERATED_UCLASS_BODY()


public:

#if WITH_EDITORONLY_DATA
	virtual void EditorApplyTranslation(const FVector& DeltaTranslation, bool bAltDown, bool bShiftDown, bool bCtrlDown) override;
	virtual void EditorApplyRotation(const FRotator& DeltaRotation, bool bAltDown, bool bShiftDown, bool bCtrlDown) override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

#if WITH_EDITOR
	virtual void PostEditMove(bool bFinished) override;

#endif

public:
	
	//Override Object Begin
	virtual void PostInitProperties() override;
	virtual void PostLoad() override;
	virtual void Serialize(FArchive& Ar) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	//Override Object End

	//Override Actor begin
	virtual void Destroyed() override;
	virtual void PostInitializeComponents() override;
	//Override Actor end

public:

	/*
	* Make all the child actor's transform are correspond to the component
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	void UpdateChildActorsTransform();
	
	/*
	* Remove all child actors which is hold by this actor.
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	void RemoveAllChildActors();

	/*
	* Generate the child actors according to the ChildActorComponent. Only use the component which owner is this actor
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	void GenerateChildActors();

	//Callback when child actor is destroyed
	UFUNCTION()
	void OnChildActorDestroyed(AActor* DestroyedActor);

	/*
	* Populate the information hold in this actor to the child actors
	* 
	* @param TargetActors The actors that need to update its attributes upon this actor
	*/
	UFUNCTION(BlueprintNativeEvent, CallInEditor)
	void PopulateChildActorAttributes( const TArray<AActor*>& TargetActors );

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	void GetChildActors(UPARAM(ref) TArray<AActor*>& OutActorArr);
protected:

	/*
	* Get all the child actor component which have not spawned new child actor at the world
	*/
	void GetUnmappedChildActorComponents(TArray<UChildActorComponent*>& OutComponents);

	/*
	* Get the child actor component which is stand for the child actor.
	* 
	* @param ExculdeComponents the component which should be exclude from the child actor components pool
	*/
	UChildActorComponent* GetMappedComponent( AActor* ChildActor, const TArray<UChildActorComponent*>& ExcludeComponents );


	/*
	* Try to update the attributes in trigger task in the child actor if the child task is a trigger
	*/
	void TryToPopulateAttributeToTriggerTask();

public:

	//The actor which is combined with this actor, or you can treat them as the child actor of the PlaceableActor
	UPROPERTY(VisibleAnywhere, Category = "TriggerRuntime")
	TArray<FChildActorInfo> ChildActorInfos;

private:
	
	UFUNCTION()
	void OnRep_ActorRemoved();

	/*
	* Used to replicate to client to destroyed the child actors in the client
	*/
	UPROPERTY(Transient, ReplicatedUsing=OnRep_ActorRemoved)
	TArray<uint32> DestroyedActorNameHashes;

private:
#if WITH_EDITORONLY_DATA

	//Callback function when this actor have been ReInstanced
	void OnReinstanced();
	FDelegateHandle ReInstancedHandle;


	//Callback function when the develop compile the BP, and the Editor replace the instance in the world
	void OnObjectReplaced(const TMap<UObject*, UObject*>& OldToNewMap);
	FDelegateHandle ObjectReplacedHanded;

	/*
	* These categories will be copied to the actors this container hold
	*/
	UPROPERTY(EditAnywhere, Instanced, Category = "Category", meta = (AllowPrivateAccess = "true"))
	TArray<UTaskComponentCategory*> Categories;

#endif

};
