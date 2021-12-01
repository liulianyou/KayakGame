#pragma once

/*
* Author:	Liulianyou
* Time:		2020/9/24
* Purpose:	The base class which will used to spawn the AI
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "Templates/SubclassOf.h"
#include "GameFramework/Pawn.h"
#include "AIController.h"

#include "Editor/AI/AIPreviewCharacter.h"
#include "TriggerTaskInterface.h"
#include "AISpawnDataBase.generated.h"

class APawn;
class AAIController;
class UAICreatorBase;
class UAIInfoAccessorBase;
class UTriggerTaskBase;
class AAIPreviewCharacter;

USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FAIInfo
{
	GENERATED_BODY()

public:
	FAIInfo() { Handle = GeneratedNewHandle(); }

	~FAIInfo();
	FAIInfo(const FAIInfo& Other);


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime")
	UClass* ControllerClass = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime")
	UClass* PawnClass = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime")
	FSoftObjectPath BTPath;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime")
	FVector Location;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime")
	FRotator Rotation;

	//The external data that the specific data will assign to
	void* ExternalData = nullptr;

	int ExternalDataSize = INDEX_NONE;

	bool operator==(const FAIInfo& OtherData);

	FAIInfo& operator=(const FAIInfo& OtherData);

	int GetHandle() const {return Handle;}

	template<class T>
	void CreateExternalDataBuffer()
	{
		ExternalDataSize = sizeof(T);
		ExternalData = FMemory::Malloc(sizeof(T));

		ExternalData = new(ExternalData) T();
	}

	void FreeExternalDataBuffer();


	void DuplicateData(FAIInfo& OutValue) const;

	template<class T>
	void DuplicateData(FAIInfo& OutValue)
	{
		OutValue.ControllerClass = ControllerClass;
		OutValue.PawnClass = PawnClass;
		OutValue.Location = Location;
		OutValue.Rotation = Rotation;
		OutValue.BTPath = BTPath;

		if (OutValue.ExternalData != nullptr)
		{
			FMemory::Free(OutValue.ExternalData);
			OutValue.ExternalData = nullptr;
		}

		OutValue.CreateExternalDataBuffer<T>();

		FMemory::Memcpy(OutValue.ExternalData, ExternalData, ExternalDataSize);

		//T* LocalExternalData = new (OutValue.ExternalData)T();
		//*LocalExternalData = *(T*)(ExternalData);
	}

	bool IsValid();

	void Invaidate();

	FString ToString();

	static FAIInfo InvalidValue;

	static int GeneratedNewHandle();

private:
	
	/*
	* The handle of this AI information.
	* Different AI information maybe have the same data: ControllerClass, PawnClass, Location, Rotation and so on.
	* So I need one external identification to distinguish them
	*/
	unsigned long long Handle = 0;

};


//Delegate for other module the check weather all the AI have spawned finished for one condition and after this point next category AI maybe start to spawned
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAISapwnFinishd, UAISpawnDataBase*, SpawnData);

UCLASS(Blueprintable,BlueprintType, abstract, Within=TT_AISpawnBase, editinlinenew, Category = "TriggerRuntime")
class TRIGGERRUNTIME_API UAISpawnDataBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	
	//Initialize
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	virtual void InitData( UTriggerTaskBase* TaskOwner );

	virtual void Reset( ETriggerTaskResetType ResetType )PURE_VIRTUAL(&UAISpawnDataBase::Reset, );

	/*
	* Create new AI accroding to the AIInfo 
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	AAIController* CreateNewAI(const FAIInfo& AIInfo, APawn*& NewPawn );

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	UAICreatorBase* GetAICreator() const { return AICreator; }

	/*
	* Get the current valid AI info that will be spawned in the world
	*
	* @param DeltaTime			The current Tick time 
	* @param BreakSpawnChain	true means we should stop to spawn new AI
	* @param SkipCurrentSpawn	true means make the current AIInfo valid but don't spawn any AI
	*/
	UFUNCTION( BlueprintCallable, Category = "TriggerRuntime" )
	virtual void GetCurrentVaildAIInfoToSpawn( float DeltaTime, TArray<FAIInfo>& AIInfos, bool& BreakSpawnChain, bool&SkipCurrentSpawn) PURE_VIRTUAL(&UAISpawnDataBase::GetCurrentVaildAIInfoToSpawn,);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	virtual int GetCurrentRound() PURE_VIRTUAL(&UAISpawnDataBase::GetCurrentRound,return -1;);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	virtual int GetMaxRound() PURE_VIRTUAL(&UAISpawnDataBase::GetMaxRound, return -1;);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	virtual int GetNumberOfTotalSpawnedAI() PURE_VIRTUAL(&UAISpawnDataBase::GetNumberOfTotalSpawnedAI, return -1;);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	virtual int GetNumberOfTotalDeadAI() PURE_VIRTUAL(&UAISpawnDataBase::GetNumberOfTotalDeadAI, return -1;);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	virtual int GetAIRemainedToSpawnInCurrentRound() PURE_VIRTUAL(&UAISpawnDataBase::GetAIRemainedToSpawnInCurrentRound, return -1;);

	virtual bool PreProcessNewPawn( AController* Controller, APawn* Pawn, FAIInfo& AIInfo )PURE_VIRTUAL(&UAISpawnDataBase::PreProcessNewPawn,return true;);

	virtual bool PostProcessNewPawn(AController* Controller, APawn* Pawn, FAIInfo& AIInfo )PURE_VIRTUAL(&UAISpawnDataBase::PostProcessNewPawn, return true;);

	//When the AI have spawned successfully we may be want to make the AI to do something immediately
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	virtual void SpawnAIPostProcess( AAIController* Controller, APawn* Pawn, FAIInfo& AIInfo) PURE_VIRTUAL(&UAISpawnDataBase::SpawnAIPostProcess, );
	/*
	* As the AIPreview character will stand for the actual AI it holds some information for designer the change, when these values changed we should directly apply these data 
	*/
	virtual void ApplayDataFromAIPreviewCharacter(AAIPreviewCharacter* Character) PURE_VIRTUAL(&UAISpawnDataBase::ApplayDataFromAIPreviewCharacter, );

	virtual void ControllerDeadOrDestroyedCallback(bool IsDead, AAIController* Controller) PURE_VIRTUAL(&UAISpawnDataBase::ControllerDeadOrDestroyedCallback, );

	FString ConvertPathReferencValueToVaild(FString ReferencePath, bool Add_CSuffix = false);

	//Get All NPCIDs which is confined this data by the LD
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	virtual void GetALLNPCIDs(TArray<int>& NPCIDs) PURE_VIRTUAL(&UAISpawnDataBase::GetALLNPCIDs, );

	/*
	* Function used to check weather current processing action can be stopped
	*
	* As sometimes the owner who own this data want to stop but this data still have some AIs to spawn then it can notify the owner do not stop
	*/
	virtual bool CanStopSpawnAI()PURE_VIRTUAL(&UAISpawnDataBase::CanStopSpawnAI, return true;);

	int GetPlayerNum();

#if WITH_EDITORONLY_DATA
	virtual void SelectedInEditor(UObject* SelectedObject) PURE_VIRTUAL(&UAISpawnDataBase::SelectedInEditor, );

	virtual void ShowEditorInformaiton() PURE_VIRTUAL(&UAISpawnDataBase::ShowEditorInformaiton, );
	virtual void ClearEditorInformaiton() PURE_VIRTUAL(&UAISpawnDataBase::ClearEditorInformaiton, );

private:
	UPROPERTY()
	TArray<AAIPreviewCharacter*> AIPreviewCharacters;
#endif

public:
	UPROPERTY(BlueprintAssignable, Category = "AI Spawn Data")
	FAISapwnFinishd AISpawnFinished;

	//Defines how to create new AI
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Category = "AI Spawn Data")
	UAICreatorBase* AICreator = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Category = "AI Spawn Data")
	UAIInfoAccessorBase* AIInfoAccessor = nullptr;

public:
	UTriggerTaskBase* GetTaskOwner(){return TaskOwner;}

private:
	
	//The owner of this data
	UPROPERTY()
	UTriggerTaskBase* TaskOwner;


};