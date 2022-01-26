#pragma once

/*
* Author:	Liulianyou
* Time:		2021/10/27
* Purpose:	This is data use to define which tag will be created at specific state for the trigger task
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerTaskExternalDataBase.h"
#include "TriggerToolInterface.h"
#include "EvaluatorCondition.h"

#include "Templates/SharedPointer.h"
#include "GameplayTags.h"

#include "TTED_TriggerRuntimTagConfig.generated.h"

class UTTED_TriggerRuntimeTagConfig;

UCLASS(Blueprintable, BlueprintType, Category = "TriggerRuntime|ExternalData", meta = (DisplayName = "RuntimeTag"))
class TRIGGERRUNTIME_API UTTED_TriggerRuntimeTagConfig : public UTriggerTaskExternalDataBase
{
	GENERATED_UCLASS_BODY()

public:
	
	//Override UObject
	
	virtual void BeginDestroy() override;

	//Override UObject

	//Override UTriggerTaskExternalDataBase
	virtual void Initialize(UTriggerTaskBase* Owner) override;
	virtual void Reset(UOperationInformationBase* ResetOperationInfo) override;
	virtual void Finialize() override;
	//Override UTriggerTaskExternalDataBase

protected:

	//Register state event to trigger task so that this data can inspire the state of target trigger task
	void RegisterTriggerTask();

	//UnRegister the state event from the target trigger task
	void UnregisterTriggerTask();

	//When trigger task state is changed then expose the target tag container
	void ExposeTagContainer( const FGameplayTagContainer& TagContainer );

	/*
	* Release all the containers except the specific tag container
	* 
	* @param ExceptTagContainer if it is empty then means it will realse all contaner
	*/
	void ReleaseTagContaner(const FGameplayTagContainer& ExceptTagContainer);

private:

	UFUNCTION()
	void OnTriggerTaskStateChange(UTriggerTaskBase* Task);


public:

	/*
	* The tags that will be exposed to the trigger event system when the target task star to run
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ExternalData")
	FGameplayTagContainer StartTagContanier;

	/*
	* The tags that will be exposed to the trigger event system when the target task at Active state
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ExternalData")
	FGameplayTagContainer ActiveTagContanier;

	/*
	* The tags that will be exposed to the trigger event system when the target task finished
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ExternalData")
	FGameplayTagContainer FinishedTagContanier;

	/*
	* The tags that will be exposed to the trigger event system when the target task skipped
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ExternalData")
	FGameplayTagContainer SkippedTagContanier;

	/*
	* The tags that will be exposed to the trigger event system when the target task at Sleep state
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ExternalData")
	FGameplayTagContainer SleepTagContanier;

	/*
	* The tags that will be exposed to the trigger event system when the target task at stopped state
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ExternalData")
	FGameplayTagContainer StopTagContanier;

	/*
	* The tags that will be exposed to the trigger event system when the target task at Pause state
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ExternalData")
	FGameplayTagContainer PauseTagContanier;

	/*
	* The tags that will be exposed to the trigger event system when the target task at Resume state
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ExternalData")
	FGameplayTagContainer ResumeTagContanier;

private:

	//Access the tag container form the task state more easily
	TMap<ETriggerTaskState, const FGameplayTagContainer*> TagMaps;
};

/*
* The condition used to check weather the trigger event system have the specific tag container
*/
UCLASS(Blueprintable, BlueprintType, Category = "TriggerRuntime", meta = (DisplayName = "CheckTriggerTag"))
class TRIGGERRUNTIME_API UCheckTriggerTag : public UEvaluatorCondition
{
	GENERATED_UCLASS_BODY()

public:
	
	//Override UObject
	virtual void BeginDestroy() override;
	//Override UObject

	//Override Evaluator Base
	virtual bool NativeEvaluator(bool DoLocalCheck = false) override;
	virtual void NativeInitialize(UObject* OwnerObject) override;
	virtual void NativeReset() override;
	//Override Evaluator Base

public:

	virtual void OnTriggerTagChanged( bool IsRemoved, const FGameplayTagContainer& ChangedTags );

public:

	/*
	* The tags that this condition need to check in the trigger event system
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FGameplayTagContainer TagContanier;

private:

	bool HasMeetCondition = false;

	FDelegateHandle TriggerTagChangedHandle;
};


namespace TriggerTaskTag
{

	DECLARE_MULTICAST_DELEGATE_TwoParams(FTriggerContainerChangeEvent, bool /*IsRemoved*/, const FGameplayTagContainer&/* ChangedTags*/)

	struct FTriggerTagContanier
	{
	public:
		explicit FTriggerTagContanier(const FTriggerTagContanier& OtherTriggerTagContainer);
		explicit FTriggerTagContanier(const FGameplayTagContainer& InTagContainer);

	public:

		const FGameplayTagContainer& GetTagContainer() const { return TagContainer; }

		//Add tag data to this container
		int AddTagData(UTTED_TriggerRuntimeTagConfig* NewData);

		/*
		* remove tag data to this container
		* 
		* #return the remain data referenced to this game play tag container
		*/
		int RemoveTagData(UTTED_TriggerRuntimeTagConfig* NewData);

		//False means this container have no tag data referenced
		bool IsEmpty();

		//False means this container have no valid game play tag container
		bool IsValid();

		friend bool operator==(const FTriggerTagContanier& LeftValue, const FTriggerTagContanier& RightValue);

	private:
		//Which data this tag container referenced
		TArray<UTTED_TriggerRuntimeTagConfig*> TagDatas;

		//The trigger task tag exposed by the data in the TagDatas
		FGameplayTagContainer TagContainer;

	private:
		FTriggerTagContanier();
	};

	bool operator==(const FTriggerTagContanier& LeftValue, const FTriggerTagContanier& RightValue);


	/*
	* One tool to manage all tags which is occurred at trigger task in trigger event system.
	*
	*/
	class TRIGGERRUNTIME_API FTriggerTaskTagTool : public TSharedFromThis<FTriggerTaskTagTool>, public TriggerToolInterface
	{
	public:
		ClassInfo(FTriggerStaticsTool, TriggerToolInterface);

		FTriggerTaskTagTool();
		virtual ~FTriggerTaskTagTool();


	public:
		//Override TriggerToolInterface
		virtual void InitlalizeTriggerTool() override;
		//Override TriggerToolInterface

	public:

		//Get the trigger tags in this tool, the trigger tags should never be mortified outside
		const TArray<FTriggerTagContanier>& GetTriggerTags() const { return TriggerTags; }

		/*
		* Add new trigger tag container to this trigger tags pool.
		*/
		void AddNewTriggerTagContainer(UTTED_TriggerRuntimeTagConfig* Data, const FGameplayTagContainer& TagContainer);

		/*
		* Remove the trigger tag container by the game play tag
		* 
		* @param TagContainer removed the trigger tags which contain this specific game play tag, if this parameter is not valid this function will not work
		* @param NetMode	Used to distinguish where this action is occurred
		*/
		void RemoveTriggerTagContainer(const FGameplayTagContainer& TagContainer, ENetMode NetMode = ENetMode::NM_Standalone);

		/*
		* Remove the trigger tag container by the trigger tag config data
		*/
		void RemoveTriggerTagContainer(UTTED_TriggerRuntimeTagConfig* Data);

		//Get the trigger tag changed event
		FTriggerContainerChangeEvent& OnTriggerTagChangedEvent() { return TriggerTagChangedEvent; }

	protected:
		
		/*
		* When new tag container is removed from this tool try to notify the trigger manager to do something
		* 
		* @param NetMode	Used to distinguish where this action is occurred
		*/
		void RemovedTagsInTriggerEventSystemInfo( const FGameplayTagContainer& RemovedTriggerTag, ENetMode NetMode = ENetMode::NM_Standalone);

		/*
		* When new tag container is added to this tool try to notify the trigger manager to do something
		* 
		* @param NetMode	Used to distinguish where this action is occurred
		*/
		void AddTagsToTriggerEventSystemInfo( const FGameplayTagContainer& AddedTriggerTag, ENetMode NetMode = ENetMode::NM_Standalone);


	private:

		//This map used to hold the target tag referenced number, if the target tag's referenced number is less then 1, mean it should be removed
		TArray<FTriggerTagContanier> TriggerTags;

		//The event when the trigger tag have changed
		FTriggerContainerChangeEvent TriggerTagChangedEvent;

	};
}


