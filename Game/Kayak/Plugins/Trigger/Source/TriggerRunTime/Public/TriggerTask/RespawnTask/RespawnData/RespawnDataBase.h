#pragma once

/*
* Author:	Liulianyou
* Time:		2021/3/15
* Purpose:	The base data which will be used for Respawn task in event system
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "TriggerTaskInterface.h"
#include "RespawnDataBase.generated.h"

class UTT_Respawn;
class URespawnPostProcessBase;
class UOperationInformationBase;
class ARespawnEditorPointBase;

//The information which will be referenced by respawn task to determine weather to respawn new pawn
USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FNeedSpawnedPawnInfo
{
	GENERATED_BODY()

public:
	FNeedSpawnedPawnInfo() :
		OldPawn(nullptr)
	{
		PostProcess.Empty();
	}

	FNeedSpawnedPawnInfo(APawn* Pawn) :
		OldPawn(Pawn)
	{
		PostProcess.Empty();
	}

	/*
	* The information from the respawn task the the respawn data need to process
	*/
#pragma region InValue
	APawn* OldPawn;
#pragma endregion InValue


	/*
	* The data get from the respawn data that the respawn task will actual need
	*/
#pragma region OutValue
	FTransform Transform;

	//These post process will be used to apply additional effect to the new pawn, Such as add new animation.
	TArray<URespawnPostProcessBase*> PostProcess;
#pragma endregion OutValue

public:

	//Flag to check weather this data have been processed and all the OutValues is valid
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Respawn")
	bool IsOutValueValid = false;

};


UCLASS(Abstract, BlueprintType, Blueprintable, editinlinenew)
class URespawnDataBase : public UObject
{
	GENERATED_UCLASS_BODY()
	
public:
	
	/*
	* Get the final data which the respawn task need to respawn new pawn
	*/
	UFUNCTION( BlueprintCallable )
	virtual void GetRespawnInfo(TArray<FNeedSpawnedPawnInfo>& RespawnInfo) PURE_VIRTUAL(&URespawnDataBase::GetRespawnInfo,);
	
	UFUNCTION(BlueprintCallable)
	virtual void Reset(UOperationInformationBase* Operation) PURE_VIRTUAL(&URespawnDataBase::Reset,);

#if WITH_EDITOR
	virtual void ApplyEditorConfigData( ARespawnEditorPointBase* PointInfo ) PURE_VIRTUAL(&URespawnDataBase::ApplyEditorConfigData, );

#endif

#if WITH_EDITORONLY_DATA
	//Create the information at editor world so that the designer can manipulate it
	virtual void CreateEditorViewInfo() PURE_VIRTUAL(&URespawnDataBase::CreateEditorViewInfo, );
	virtual void UpdateEditorViewInfo() PURE_VIRTUAL(&URespawnDataBase::UpdateEditorViewInfo, );
	/*
	* Get the transform of the target actor which the point should belong to
	* 
	* @param RespawnPoint The point which need to be searched
	*/
	virtual void GetBelongedEditorDataActor( TArray<AActor*>& BelongedActors, ARespawnEditorPointBase* RespawnPoint);

#endif

	//Initialize this data
	virtual void InitializeData(UTT_Respawn* Owner);

	UTT_Respawn* GetRespawnTaskOwner() const { return RespawnTaskOwner;}

private:
	UTT_Respawn* RespawnTaskOwner;



};