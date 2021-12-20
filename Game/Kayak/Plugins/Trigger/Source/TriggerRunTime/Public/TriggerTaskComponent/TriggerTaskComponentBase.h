#pragma once

/*
* Author:	Liulianyou
* Time:		2020/9/4
* Purpose:	This is the task component for the scene trigger.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Components/SceneComponent.h"
#include "TriggerTask/TriggerTaskBase.h"
#include "TaskActiveInformation.h"
#include "TriggerDefinition.h"
#include "GameplayTagContainer.h"
#include "Misc/EnumClassFlags.h"
#include "TriggerTaskComponentBase.generated.h"

class UEvaluatorBase;
class UTaskComponentCategory;
class UTriggerEventChainBase;
class UOperationInformationBase;
class UTriggerTaskComponentBase;
class UTriggerNetPlayerSupportComponent;

/*
* Maybe there are old code which is not use the enumeration type as its scope when use its enumeration value. and this will cause compile error.
* So I need to force the compiler to use the enumeration by the namespace
*/
namespace Trigger
{
	enum ETaskRunType
	{
		/** This target task is active on the server which invoked by the client, we should the RPC function through the PlayerController */
		Server = 0x1,
		/** This task is active on the client which invoked by the server, we should use NetMutiCast directly */
		Client = 0x2,
		/** This task should be active locally */
		Local = 0x4,
	};
}


ENUM_CLASS_FLAGS(Trigger::ETaskRunType)

UCLASS(BlueprintType, Blueprintable, hidedropdown, hidecategories = (Object, LOD, Activation, Tags, Cooking, Physics, Transform, Rendering, AssetUserData, Collision), editinlinenew, Category = "TriggerRuntime|Component" )
class TRIGGERRUNTIME_API UTriggerTaskComponentBase : public USceneComponent
{
	GENERATED_UCLASS_BODY()

public:
	virtual void BeginPlay() override;
	virtual void OnComponentCreated() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void PostInitProperties() override;
	virtual void InitializeComponent() override;
	virtual void OnRegister() override;
	virtual void OnUnregister() override;
	virtual void Serialize(FArchive& Ar) override;
	virtual void BeginDestroy() override;

#if WITH_EDITORONLY_DATA

	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;

	void SelectedInEditor(UObject* Selctor);

#endif

#pragma region Net
public:
	virtual bool IsSupportedForNetworking() const override;
	virtual bool ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags) override;
	virtual void PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker);
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:

	/*
	* Make all connections to start to run task
	* 
	* @param RuntimeInfo		The runtime information for the target task 
	* @param CanRunOnServer		Weather this NetMulti function can be run on the server
	* @param CanRunOnClient		Weather this NetMulti function can be run on client
	*/
	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void NetMulti_StartTask( const FTriggerTaskRuntimeInfo& RuntimeInfo, bool CanRunOnServer = false, bool CanRunOnClient = true);
#pragma endregion Net

public:

	//Register all tasks in this component to TriggerTaskManager
	UFUNCTION()
	virtual void RegisterTaskComponent();

	//UnRegister all tasks in this component to TriggerTaskManager
	UFUNCTION()
	virtual void UnRegisterTaskComponent();

public:

	/*
	* Weather this task is matched for current runtime content.
	* For example one trigger Actor have several task components, and each of them is used for specific difficulties such as Easy, Normal, Hard
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime|TaskComponent")
	bool IsMatchedForCurrentRunTimeContent() const;

	/*
	* Get All trigger tasks in this component include Template task and instanced task
	* 
	* @param IncludeChildTask true means all task in the child task will also be reached
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	void GetAllTriggerTasks( TArray<UTriggerTaskBase*>& OutTasks, bool IncludeChildTask = false) const;

	//Get the trigger tasks which is configured by the designer at editor mode
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	TArray<UTriggerTaskBase*>& GetTemplateTasks() { return TriggerTasks; }
	

	//If we start to run tasks in this component I will use this function to check weather this component can be toggled
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	bool CanBeToggled() const;

	//Set instigator for the target task
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	void SetInstigator( AActor* Insigator, UTriggerTaskBase* Task = nullptr );

	/*
	* The style to dispatch the task
	*
	* @param ForceStart		true means before run this target task I will reset the target task first. False means it target task will be run according its repeatedly style, if the target task is running
    * @param ExternalData   The external data that need to be processed by the child task
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime|TaskComponent")
	bool OnDispatchTask(bool ForceStart = false, UOperationInformationBase* StartOperationInfo = nullptr);

	/*
	* Interface for subclass to determine how to dispatch task
	*
	* @param ForceStart		true means before run this target task I will reset the target task first. False means it target task will be run according its repeatedly style, if the target task is running
	* @param ExternalObject The external data that the child task should process 
	* @return true means this dispatch have been implemented by the BP, so we will use BP instead of native implementation
	*/
	virtual bool DispatchTask(bool ForceStart = false, UOperationInformationBase* ExternalObject = nullptr);

	/*
	* Start to execute Task.
	*
	* @param Task			null means we will start all tasks in this component,\n if this task is not in this component, we will not process it
	* @param ForceStart		true means before run this target task I will reset the target task first. False means it target task will be run according its repeatedly style, if the target task is running
	* @param ExternalData	The external data that the child task should process 
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	bool StartTask(bool ForceStart = false, UTriggerTaskBase* Task = nullptr, UOperationInformationBase* StartOperationInfo = nullptr);

	/*
	* Tick the task, All the task cannot tick itself, how and when they tick should be
	* determined by its own component
	*
	* @param Task			null means we will start all tasks in this component
	*						if this task is not in this component, we will not process it
	* @DeltaTime
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	bool TickTask(float DeltaTime, UTriggerTaskBase* Task = nullptr);

	/*
	* Start to stop the task
	*
	* @param Task			null means we will start all tasks in this component
	*						if this task is not in this component, we will not process it
	* @param IsStop			True means the task will never be reactivated again
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	bool EndTask(	UOperationInformationBase* EndOperationInfo,
					bool IsStop = false,
					UTriggerTaskBase* Task = nullptr, 
					ETriggerTaskAutomaticallyEndType EndType = ETriggerTaskAutomaticallyEndType::ETriggerTaskAutomaticallyEndType_EndOverlap);

	/*
	* Start to pause the task
	*
	* @param Task			null means we will start all tasks in this component
	*						if this task is not in this component, we will not process it
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	bool PauseTask(UTriggerTaskBase* Task = nullptr, UOperationInformationBase* PauseOperaitonInfo = nullptr);

	/*
	* Start to resume the task
	*
	* @param Task			null means we will start all tasks in this component
	*						if this task is not in this component, we will not process it
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	bool ResumeTask(UTriggerTaskBase* Task = nullptr, UOperationInformationBase* ResumeInfo = nullptr);

	/*
	* Transfer task to other component
	* 
	* @param ResouceTask	Task in this component which rise up this component to notify target component to do something
	* @param TargetTask		The task in the target component which this component will notify it to some thing
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	bool TransfereTask(UTriggerTaskComponentBase* TargetComponent, UTriggerTaskBase* ResourceTask, UOperationInformationBase* StartOperationInfo = nullptr, UTriggerTaskBase* TargetTask = nullptr);

	/*
	* Notify the target task to run by the sender task
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	bool TransfereTaskToTargetTask(UTriggerTaskBase* SenderTask, UTriggerTaskBase* TargetTask, UOperationInformationBase* StartOperationInfo = nullptr);

	/*
	* Receive notification from task of the ResourceComponent
	* 
	* @param ResourceComponent the component which notify the task in this component to do something
	* @param ResourceTask	The task in resource component which rise up the resource component to notify the task in this component to do something
	* @param TargetTask		The task in this component which is notified by the resource task
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	bool RecevieTaskInformation(UTriggerTaskComponentBase* ResourceComponent, UTriggerTaskBase* ResourceTask, UOperationInformationBase* StartOperationInfo = nullptr, UTriggerTaskBase* TargetTask = nullptr);

	/*
	* Get the child trigger task component.
	* The child component will be used when one of this task have finished.
	* When one of the task in this component have finished it will TRY to notify the child trigger task component to notify its task to execute.
	* This function is invoked in the function GetChildTriggerTaskComponents, which can be override by child class
	* 
	* @param Task	The task who want to know child components, and try to start tasks in child components
	* @param ExternalData	The behavior which is describe how the task to start child components
	* @param OutTriggerTaskComponents	The child components that the target task want to notify
	* 
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime|TaskComponent")
	void OnGetChildTriggerTaskComponents(TArray<UTriggerTaskComponentBase*>& OutTriggerTaskComponents, UTriggerTaskBase* Task = nullptr, UOperationInformationBase* StartOperationInfo = nullptr);

	/*
	* If you want to use this function to get the child task component please make sure all essential conditions are meet such as the map which the target component lied is loaded
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	virtual void GetChildTriggerTaskComponents(TArray<UTriggerTaskComponentBase*>& OutTriggerTaskComponents, UTriggerTaskBase* Task = nullptr, UOperationInformationBase* StartOperationInfo = nullptr);

	/*
	* This is different form the function: GetParentComponent in base class, This function will get the parent component which is maintained by trigger system not UE engine
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime|TaskComponent")
	void OnGetParentTriggerTaskComponents(TArray<UTriggerTaskComponentBase*>& OutTriggerTaskComponents);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	void GetParentTriggerTaskComponents(TArray<UTriggerTaskComponentBase*>& OutTriggerTaskComponents);

	/*
	* remove child node from all event chains which belong to this component
	*
	* @param NeedUpdateParentNodeInChildNode true means it should update the parent node information in the child node
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime|EventInfo")
	void RemoveChildNode(const TScriptInterface<ITriggerInterface>& ChildNode, const FGameplayTagContainer& Category = FGameplayTagContainer::EmptyContainer, bool NeedUpdateParentNodeInChildNode = true);


	/*
	* Remove the parent node from all event chains which belong to this component
	*
	* @param NeedUpdateChildNodeInParentNode true means it should update the child node information in the child node
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime|EventInfo")
	void RemoveParentNode(const TScriptInterface<ITriggerInterface>& ParentNode, const FGameplayTagContainer& Category = FGameplayTagContainer::EmptyContainer, bool NeedUpdateChildNodeInParentNode = true);

	/*
	* Add the parent node to all event chains which belong to this component
	*
	* @param NeedUpdateEventInParentNode		true means it should update the parent node information in the child node
	* @param TargetEventChainClass				the class of event chain to hold the target child node
	* 
	* #return true means add successfully, visa verse
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime|EventInfo")
	bool AddParentNode(	const TScriptInterface<ITriggerInterface>& ParentNode, 
							TSubclassOf<UTriggerEventChainBase> TargetEventChainClass = nullptr,
							const FGameplayTagContainer& Category = FGameplayTagContainer::EmptyContainer,
							bool NeedUpdateEventInParentNode = true);

	/*
	* Add new child node to this component
	*
	* @param NeedUpdateEventInfoInChildNode		true means it should update the parent node information in the child node
	* @param TargetEventChainClass				the class of event chain to hold the target child node
	* 
	* #return true means add successfully, visa verse
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime|EventInfo")
	bool AddChildNode(	const TScriptInterface<ITriggerInterface>& ChildNode, 
						TSubclassOf<UTriggerEventChainBase> TargetEventChainClass = nullptr,
						const FGameplayTagContainer& Category = FGameplayTagContainer::EmptyContainer,
						bool NeedUpdateEventInfoInChildNode = true);

	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime|EventInfo")
	void GetParentTriggers(TArray<TScriptInterface<ITriggerInterface>>& OuterTriggers, const FGameplayTagContainer& Category = FGameplayTagContainer::EmptyContainer);

	/*
	* Get All Child Triggers which matched the Category.
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerRuntime|EventInfo")
	void GetChildTriggers(TArray<TScriptInterface<ITriggerInterface>>& OuterTriggers, const FGameplayTagContainer& Category = FGameplayTagContainer::EmptyContainer);

	/*
	* Remove the next component info from all event chain
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|EventInfo")
	void RemoveNextComponentInfo(FString MapName, FGuid ComponentID);

	/*
	* Add the next component info to all event chain
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|EventInfo")
	void AddNextComponentInfo(FString MapName, FGuid ComponentID);

	/*
	* Get All NextComponentInfos
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|EventInfo")
	void GetNextComponentInfo(TArray<FTriggerTaskComponentInformation>& OuterInfos);

	//Interface to get trigger manager
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	UTriggerManager* GetTriggerManager() const;

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	TArray<UTriggerEventChainBase*>& GetEventChains() { return EventChains; }

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	const TArray<UTriggerEventChainBase*>& GetConstEventChains() const { return EventChains; }

	/*
	* Add new event chain to the the event chains pool.
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	UTriggerEventChainBase* AddNewEventChain(UTriggerEventChainBase* NewChain, bool CreateNewInstance = true);

	/*
	* Remove the target event chain from event chains pool
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	void RemoveEventChain(UTriggerEventChainBase* OldChain);

	/*
	* Try to check weather current component is the child node of the target parent component
	*
	* The relationship between two components can be child/Parent, or no relationship,
	* So if you want to make sure weather this component is child or parent of the other component you should invoke each function.
	*
	* @param ParentNode the component which is used to check weather this is the parent node of this component
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	bool IsChildNodeOfComponent(const UTriggerTaskComponentBase* ParentNode) const;

	/*
	* Check weather this component is the parent node of the target child node.
	*
	* The relationship between two components can be child/Parent, or no relationship,
	* So if you want to make sure weather this component is child or parent of the other component you should invoke each function.
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	bool IsParentNodeOfComponent(const UTriggerTaskComponentBase* ChildNode) const;

	/*
	* Try to check weather this component can be child node for target event info.
	* When this function invoked, I assume all data is stable, and you just want to check the child nodes in checked event info
	*
	* The relationship between two components can be child/Parent, or no relationship,
	* So if you want to make sure weather this component is child or parent of the other component you should invoke each function.
	*
	* @param IgnoreDiffentLevel false means when the check event info is at different level of this component, I will make this function return false
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	bool IsChildNodeOfEventInfo(const UTriggerEventChainBase* CheckedEventInfo, bool IgnoreDiffentLevel = true) const;

	/*
	* Check weather this component is parent node of the target event info.
	*
	* The relationship between two components can be child/Parent, or no relationship,
	* So if you want to make sure weather this component is child or parent of the other component you should invoke each function.
	*
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	bool IsParentNodeOfEventInfo(const UTriggerEventChainBase* CheckedEventInfo, bool IgnoreDiffentLevel = true) const;


	/*
	* Get the information of this component, it maybe output all potential infos for this component if CurrentEnvironment is empty
	* One component maybe exist in different map or different environment. such as one component can exist at easy map, hard map, normal map.
	* 
	* @param OutInfos The outer information for this component
	* @param CurrentEnvironment	
	*/
	//UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	//void GetSelfComponentInfo(TArray<FTriggerTaskComponentInformation>& OutInfos, const FGameplayTagContainer& CurrentEnvironment = FGameplayTagContainer()){};


	/*
	* Create new task use the task as template to this component
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	UTriggerTaskBase* CreateNewTaskByObject(UTriggerTaskBase* Task, bool AsTemplate = false);

	/*
	* Create new task use the target task class to this component
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	UTriggerTaskBase* CreateNewTaskByClass(TSubclassOf<UTriggerTaskBase> Task, bool AsTemplate = false);

	/*
	* Check weather all tasks in the component have finished 
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	bool IsAllTaskFinished();

	/*
	* Try to notify all the child nodes to start to run task, but the actual activation of the tasks in the child node
 	* is according to its own conditions 
	*
	* @param Task The task which invoked to notify the child nodes to run. This should never be nullptr
	* @param ExteranlData the external data which will be used in the child node 
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	void TryToNotifyChildNodeToStartRunTask(UTriggerTaskBase* Task, UOperationInformationBase* StartOperationInfo);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	TScriptInterface<ITriggerInterface> GetTriggerObjectOwner() const;

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	UTriggerTaskBase* GetTriggerTaskByIndex( int Index, bool SearchInTemplateTask = true );
	
	//Get TriggerTask according the FGUI
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	UTriggerTaskBase* GetTriggerTaskByID( FGuid ID, bool SearchInTemplateTask = true);

	//Get the unique and persistent ID for this component
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	const FGuid& GetComponentID() const {return ID;}

	/*
	* Get the index of the task in target tasks
	* if SearchInConfiguredTask is false this index is in all tasks in this component, and this index is mutable
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	int GetTaskIndex( UTriggerTaskBase* Task, bool SearchInTemplateTask = true );

	//Get all task with the same TaskClass, if the TaskClass is none then just return the TriggerTasks
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	void GetTriggerTaskByClass(TArray<UTriggerTaskBase*>& OutTasks, TSubclassOf<UTriggerTaskBase> TaskClass, bool SearchInConfiguredTask = true);
	
	//Get the index when first hit the target task class
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	int GetTaskIndexByTaskClass(TSubclassOf<UTriggerTaskBase> TaskClass, bool SearchInConfiguredTask = false);

	//Add new task to task pool in this component
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	void AddTask(UTriggerTaskBase* Task);
	//Remove task form task pool in this component
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	void RemoveTask(UTriggerTaskBase* Task);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	bool DuplicateTaskComponent( UTriggerTaskComponentBase* SourceComponent );

#pragma region CategoryOperation

	/*
	* Add NewCategory to this component
	*
	* @param NewCategory	If the new category is valid then add its copy to the Categories
	* @param DontCreateCopy	False means this function will copy the new category to create new one and then add it. 
	*						At this situation when you add the same category you should remove it first, or it will add category unexpected
	*						True this function will add the new category directly
	*						
	* 
	* #return the index for the new category, INDEX_NONE means add failed
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	int AddNewCategory(UTaskComponentCategory* NewCategory, bool CreateCopy = false);

	/*
	* Remove Category from the Categories
	*
	* @param OldCategory null means it will remove all categories in this component
	*
	* #return true remove successfully, vice verse.
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	bool RemoveCategory(UTaskComponentCategory* OldCategory);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	const TArray<UTaskComponentCategory*>& GetConstCategories() const { return Categories; }

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TaskComponent")
	TArray<UTaskComponentCategory*>& GetCategories() { return Categories; }

#pragma endregion CategoryOperation

	/*
	* Get the task run type according the combination of the two task run type
	*/
	Trigger::ETaskRunType GetTaskRunType(UTriggerTaskBase* SenderTask, UTriggerTaskBase* TargetTask);

	/*
	* Get the run type for the target trigger task
	*/
	Trigger::ETaskRunType GetTaskRunType(UTriggerTaskBase* TriggerTask);

protected:

	//Register all the trigger tasks in this component
	void RegisterTasks();

	//Register all the trigger tasks in this component
	void UnRegisterTasks();

	/*
	* The difference between CanActive and CanRunning is CanActive means these task can be activated by trigger task component, 
	* while CanRunning means these tasks can do the actual task content.
	* The tasks can be activated by trigger task component may not do the task content as it is a template and have create new instance flag for instance type.
	* The task which can do the task content can be activated by trigger task component, although some of the instanced task must be activated by the template task,
	* we can still treat it as it activated by the trigger task component as the template task is activated by the trigger task component
	*/

	/*
	* Get the tasks which can be activated by this component
	* As some instanced task is bind to the template task, and these tasks should be activated through template task.
	*/
	void GetCanActivatedTasks(TArray<UTriggerTaskBase*>& OutTasks);

	/*
	* Get the task which can run directly without create new instance and notify it to prepare to active
	*/
	void GetCanRunningTasks(TArray<UTriggerTaskBase*>& OutTasks);

	/*
	* When new task have been notified to run successfully then update the runtime content.
	* The two tasks SenderTask, TargetTask are running.
	*/
	void UpdateRuntimeContent( UTriggerTaskBase* SenderTask, UTriggerTaskComponentBase* TargetTaskComponent, UTriggerTaskBase* TargetTask, UOperationInformationBase* StartOperationInfo);

	/*
	* Check weather this scope is valid 
	*/
	bool CheckIsvalidScope( int TaskRunScope );

	/*
	* @param SenderComponent	The component who rise up this action,
	* @param SenderTask			The task in resource component which start to rise up this action
	* @param TargetTask			The task in this component which is notified by the task in the resource component
	*/
	bool RunOnServer(UTriggerTaskComponentBase* SenderComponent, UTriggerTaskBase* SenderTask, UTriggerTaskBase* TargetTask, UOperationInformationBase* StartOperationInfo);
	bool RunOnLocal(UTriggerTaskComponentBase* SenderComponent, UTriggerTaskBase* SenderTask, UTriggerTaskBase* TargetTask, UOperationInformationBase* StartOperationInfo);
	bool RunOnClient(UTriggerTaskComponentBase* SenderComponent, UTriggerTaskBase* SenderTask, UTriggerTaskBase* TargetTask, UOperationInformationBase* StartOperationInfo);

	//Get the valid net support component form the external data or the target task
	UTriggerNetPlayerSupportComponent* GetNetSupportComponent( UOperationInformationBase* StartOperationInfo = nullptr, UTriggerTaskBase* Task = nullptr );

	void GetChildTaskInternal(TArray<UTriggerTaskBase*>& OuterTasks, UTriggerTaskBase* RootTask) const;

private:

	Trigger::ETaskRunType GetTaskRunTypeInternal(ERunType RunType, UTriggerTaskBase* TriggerTask);

	bool RunTaskInternal(UTriggerTaskComponentBase* Component, UTriggerTaskBase* Task, UOperationInformationBase* StartOperationInfo, UTriggerTaskBase* TargetTask);

	/*
	* @param IsAddParentNode true means add parent node
	* 
	* #return true means add successfully, visa verse
	*/
	bool AddNodeToEventChainInternal(	const TScriptInterface<ITriggerInterface>& Node,
										const TSubclassOf<UTriggerEventChainBase>& TargetEventChainClass,
										const FGameplayTagContainer& Category,
										bool NeedUpdateEventInfo,
										bool IsAddParentNode);

	/*
	* When transfer task to the target component I need to try to run on the components at sublevel.
	* 
	* #return false transfer task to the another level instead of transferring directly.
	*/
	bool TryToTransferToDifferentLevel(UTriggerTaskComponentBase* TargetComponent, UTriggerTaskBase* ResouceTask, UOperationInformationBase* StartOperationInfo, UTriggerTaskBase* TargetTask);

public:

	/*
	* The default side this component will run.
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "NetWork")
	ERunType RunType;

	//The task which will replicated to clients
	UPROPERTY(Transient)
	TArray<UTriggerTaskBase*> ReplicatedTasks;

	//The task which will not replicated to clients
	UPROPERTY(Transient)
	TArray<UTriggerTaskBase*> UnReplicatedTasks;

private:

	/*
	* The chain used to describe the relationship between this component and other components
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Category = "EventChain", meta = (DisplayName = "EventInfos", AllowPrivateAccess = "true"))
	TArray<UTriggerEventChainBase*> EventChains;

	/*
	* Template asset to instance new trigger task, I will change it to read form Excel in the feature
	* This array is just used for designer to do config in the map
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Category = "Template", meta = (DisplayName = "TemplateTasks", AllowPrivateAccess = "true"))
	TArray<UTriggerTaskBase*> TriggerTasks;

	/*
	* The category can be treated as the life scope which this component work.
	*/
	UPROPERTY(EditAnywhere, Instanced, Category = "Category", meta = (AllowPrivateAccess = "true"))
	TArray<UTaskComponentCategory*> Categories;

	//The unique identification for this component, this should never changed if it has been assigned
	UPROPERTY(VisibleAnywhere, Category = "Serialize")
	FGuid ID;

public:

#if WITH_EDITORONLY_DATA
	/*
	* Flag export to the designer to identify this trigger is the first trigger in the event line
	* Maybe it will be removed in the feature, weather the trigger is the first trigger I will check it dynamically not by config
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Editor")
	bool IsFirstTrigger = false;
#endif

};