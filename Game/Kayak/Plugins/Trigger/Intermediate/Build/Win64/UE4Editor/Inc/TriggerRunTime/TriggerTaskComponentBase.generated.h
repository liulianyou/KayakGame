// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTaskComponentCategory;
class UTriggerTaskComponentBase;
class UTriggerTaskBase;
struct FGuid;
class ITriggerInterface;
class UOperationInformationBase;
class UTriggerEventChainBase;
class UTriggerManager;
struct FTriggerTaskComponentInformation;
struct FGameplayTagContainer;
enum class ETriggerTaskAutomaticallyEndType : uint8;
class AActor;
struct FTriggerTaskRuntimeInfo;
#ifdef TRIGGERRUNTIME_TriggerTaskComponentBase_generated_h
#error "TriggerTaskComponentBase.generated.h already included, missing '#pragma once' in TriggerTaskComponentBase.h"
#endif
#define TRIGGERRUNTIME_TriggerTaskComponentBase_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerTaskComponentBase_h_49_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerTaskComponentBase_h_49_RPC_WRAPPERS \
	virtual void GetChildTriggers_Implementation(TArray<TScriptInterface<ITriggerInterface> >& OuterTriggers, FGameplayTagContainer const& Category); \
	virtual void GetParentTriggers_Implementation(TArray<TScriptInterface<ITriggerInterface> >& OuterTriggers, FGameplayTagContainer const& Category); \
	virtual bool AddChildNode_Implementation(TScriptInterface<ITriggerInterface> const& ChildNode, TSubclassOf<UTriggerEventChainBase>  TargetEventChainClass, FGameplayTagContainer const& Category, bool NeedUpdateEventInfoInChildNode); \
	virtual bool AddParentNode_Implementation(TScriptInterface<ITriggerInterface> const& ParentNode, TSubclassOf<UTriggerEventChainBase>  TargetEventChainClass, FGameplayTagContainer const& Category, bool NeedUpdateEventInParentNode); \
	virtual void RemoveParentNode_Implementation(TScriptInterface<ITriggerInterface> const& ParentNode, FGameplayTagContainer const& Category, bool NeedUpdateChildNodeInParentNode); \
	virtual void RemoveChildNode_Implementation(TScriptInterface<ITriggerInterface> const& ChildNode, FGameplayTagContainer const& Category, bool NeedUpdateParentNodeInChildNode); \
	virtual bool IsMatchedForCurrentRunTimeContent_Implementation() const; \
	virtual bool NetMulti_StartTask_Validate(FTriggerTaskRuntimeInfo const& , bool , bool ); \
	virtual void NetMulti_StartTask_Implementation(FTriggerTaskRuntimeInfo const& RuntimeInfo, bool CanRunOnServer, bool CanRunOnClient); \
 \
	DECLARE_FUNCTION(execGetCategories); \
	DECLARE_FUNCTION(execGetConstCategories); \
	DECLARE_FUNCTION(execRemoveCategory); \
	DECLARE_FUNCTION(execAddNewCategory); \
	DECLARE_FUNCTION(execDuplicateTaskComponent); \
	DECLARE_FUNCTION(execRemoveTask); \
	DECLARE_FUNCTION(execAddTask); \
	DECLARE_FUNCTION(execGetTaskIndexByTaskClass); \
	DECLARE_FUNCTION(execGetTriggerTaskByClass); \
	DECLARE_FUNCTION(execGetTaskIndex); \
	DECLARE_FUNCTION(execGetComponentID); \
	DECLARE_FUNCTION(execGetTriggerTaskByID); \
	DECLARE_FUNCTION(execGetTriggerTaskByIndex); \
	DECLARE_FUNCTION(execGetTriggerObjectOwner); \
	DECLARE_FUNCTION(execTryToNotifyChildNodeToStartRunTask); \
	DECLARE_FUNCTION(execIsAllTaskFinished); \
	DECLARE_FUNCTION(execCreateNewTaskByClass); \
	DECLARE_FUNCTION(execCreateNewTaskByObject); \
	DECLARE_FUNCTION(execIsParentNodeOfEventInfo); \
	DECLARE_FUNCTION(execIsChildNodeOfEventInfo); \
	DECLARE_FUNCTION(execIsParentNodeOfComponent); \
	DECLARE_FUNCTION(execIsChildNodeOfComponent); \
	DECLARE_FUNCTION(execRemoveEventChain); \
	DECLARE_FUNCTION(execAddNewEventChain); \
	DECLARE_FUNCTION(execGetConstEventChains); \
	DECLARE_FUNCTION(execGetEventChains); \
	DECLARE_FUNCTION(execGetTriggerManager); \
	DECLARE_FUNCTION(execGetNextComponentInfo); \
	DECLARE_FUNCTION(execAddNextComponentInfo); \
	DECLARE_FUNCTION(execRemoveNextComponentInfo); \
	DECLARE_FUNCTION(execGetChildTriggers); \
	DECLARE_FUNCTION(execGetParentTriggers); \
	DECLARE_FUNCTION(execAddChildNode); \
	DECLARE_FUNCTION(execAddParentNode); \
	DECLARE_FUNCTION(execRemoveParentNode); \
	DECLARE_FUNCTION(execRemoveChildNode); \
	DECLARE_FUNCTION(execGetParentTriggerTaskComponents); \
	DECLARE_FUNCTION(execGetChildTriggerTaskComponents); \
	DECLARE_FUNCTION(execRecevieTaskInformation); \
	DECLARE_FUNCTION(execTransfereTaskToTargetTask); \
	DECLARE_FUNCTION(execTransfereTask); \
	DECLARE_FUNCTION(execResumeTask); \
	DECLARE_FUNCTION(execPauseTask); \
	DECLARE_FUNCTION(execEndTask); \
	DECLARE_FUNCTION(execTickTask); \
	DECLARE_FUNCTION(execStartTask); \
	DECLARE_FUNCTION(execSetInstigator); \
	DECLARE_FUNCTION(execCanBeToggled); \
	DECLARE_FUNCTION(execGetTemplateTasks); \
	DECLARE_FUNCTION(execGetAllTriggerTasks); \
	DECLARE_FUNCTION(execIsMatchedForCurrentRunTimeContent); \
	DECLARE_FUNCTION(execUnRegisterTaskComponent); \
	DECLARE_FUNCTION(execRegisterTaskComponent); \
	DECLARE_FUNCTION(execNetMulti_StartTask);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerTaskComponentBase_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GetChildTriggers_Implementation(TArray<TScriptInterface<ITriggerInterface> >& OuterTriggers, FGameplayTagContainer const& Category); \
	virtual void GetParentTriggers_Implementation(TArray<TScriptInterface<ITriggerInterface> >& OuterTriggers, FGameplayTagContainer const& Category); \
	virtual bool AddChildNode_Implementation(TScriptInterface<ITriggerInterface> const& ChildNode, TSubclassOf<UTriggerEventChainBase>  TargetEventChainClass, FGameplayTagContainer const& Category, bool NeedUpdateEventInfoInChildNode); \
	virtual bool AddParentNode_Implementation(TScriptInterface<ITriggerInterface> const& ParentNode, TSubclassOf<UTriggerEventChainBase>  TargetEventChainClass, FGameplayTagContainer const& Category, bool NeedUpdateEventInParentNode); \
	virtual void RemoveParentNode_Implementation(TScriptInterface<ITriggerInterface> const& ParentNode, FGameplayTagContainer const& Category, bool NeedUpdateChildNodeInParentNode); \
	virtual void RemoveChildNode_Implementation(TScriptInterface<ITriggerInterface> const& ChildNode, FGameplayTagContainer const& Category, bool NeedUpdateParentNodeInChildNode); \
	virtual bool IsMatchedForCurrentRunTimeContent_Implementation() const; \
	virtual bool NetMulti_StartTask_Validate(FTriggerTaskRuntimeInfo const& , bool , bool ); \
	virtual void NetMulti_StartTask_Implementation(FTriggerTaskRuntimeInfo const& RuntimeInfo, bool CanRunOnServer, bool CanRunOnClient); \
 \
	DECLARE_FUNCTION(execGetCategories); \
	DECLARE_FUNCTION(execGetConstCategories); \
	DECLARE_FUNCTION(execRemoveCategory); \
	DECLARE_FUNCTION(execAddNewCategory); \
	DECLARE_FUNCTION(execDuplicateTaskComponent); \
	DECLARE_FUNCTION(execRemoveTask); \
	DECLARE_FUNCTION(execAddTask); \
	DECLARE_FUNCTION(execGetTaskIndexByTaskClass); \
	DECLARE_FUNCTION(execGetTriggerTaskByClass); \
	DECLARE_FUNCTION(execGetTaskIndex); \
	DECLARE_FUNCTION(execGetComponentID); \
	DECLARE_FUNCTION(execGetTriggerTaskByID); \
	DECLARE_FUNCTION(execGetTriggerTaskByIndex); \
	DECLARE_FUNCTION(execGetTriggerObjectOwner); \
	DECLARE_FUNCTION(execTryToNotifyChildNodeToStartRunTask); \
	DECLARE_FUNCTION(execIsAllTaskFinished); \
	DECLARE_FUNCTION(execCreateNewTaskByClass); \
	DECLARE_FUNCTION(execCreateNewTaskByObject); \
	DECLARE_FUNCTION(execIsParentNodeOfEventInfo); \
	DECLARE_FUNCTION(execIsChildNodeOfEventInfo); \
	DECLARE_FUNCTION(execIsParentNodeOfComponent); \
	DECLARE_FUNCTION(execIsChildNodeOfComponent); \
	DECLARE_FUNCTION(execRemoveEventChain); \
	DECLARE_FUNCTION(execAddNewEventChain); \
	DECLARE_FUNCTION(execGetConstEventChains); \
	DECLARE_FUNCTION(execGetEventChains); \
	DECLARE_FUNCTION(execGetTriggerManager); \
	DECLARE_FUNCTION(execGetNextComponentInfo); \
	DECLARE_FUNCTION(execAddNextComponentInfo); \
	DECLARE_FUNCTION(execRemoveNextComponentInfo); \
	DECLARE_FUNCTION(execGetChildTriggers); \
	DECLARE_FUNCTION(execGetParentTriggers); \
	DECLARE_FUNCTION(execAddChildNode); \
	DECLARE_FUNCTION(execAddParentNode); \
	DECLARE_FUNCTION(execRemoveParentNode); \
	DECLARE_FUNCTION(execRemoveChildNode); \
	DECLARE_FUNCTION(execGetParentTriggerTaskComponents); \
	DECLARE_FUNCTION(execGetChildTriggerTaskComponents); \
	DECLARE_FUNCTION(execRecevieTaskInformation); \
	DECLARE_FUNCTION(execTransfereTaskToTargetTask); \
	DECLARE_FUNCTION(execTransfereTask); \
	DECLARE_FUNCTION(execResumeTask); \
	DECLARE_FUNCTION(execPauseTask); \
	DECLARE_FUNCTION(execEndTask); \
	DECLARE_FUNCTION(execTickTask); \
	DECLARE_FUNCTION(execStartTask); \
	DECLARE_FUNCTION(execSetInstigator); \
	DECLARE_FUNCTION(execCanBeToggled); \
	DECLARE_FUNCTION(execGetTemplateTasks); \
	DECLARE_FUNCTION(execGetAllTriggerTasks); \
	DECLARE_FUNCTION(execIsMatchedForCurrentRunTimeContent); \
	DECLARE_FUNCTION(execUnRegisterTaskComponent); \
	DECLARE_FUNCTION(execRegisterTaskComponent); \
	DECLARE_FUNCTION(execNetMulti_StartTask);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerTaskComponentBase_h_49_EVENT_PARMS \
	struct TriggerTaskComponentBase_eventAddChildNode_Parms \
	{ \
		TScriptInterface<ITriggerInterface> ChildNode; \
		TSubclassOf<UTriggerEventChainBase>  TargetEventChainClass; \
		FGameplayTagContainer Category; \
		bool NeedUpdateEventInfoInChildNode; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerTaskComponentBase_eventAddChildNode_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TriggerTaskComponentBase_eventAddParentNode_Parms \
	{ \
		TScriptInterface<ITriggerInterface> ParentNode; \
		TSubclassOf<UTriggerEventChainBase>  TargetEventChainClass; \
		FGameplayTagContainer Category; \
		bool NeedUpdateEventInParentNode; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerTaskComponentBase_eventAddParentNode_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TriggerTaskComponentBase_eventGetChildTriggers_Parms \
	{ \
		TArray<TScriptInterface<ITriggerInterface> > OuterTriggers; \
		FGameplayTagContainer Category; \
	}; \
	struct TriggerTaskComponentBase_eventGetParentTriggers_Parms \
	{ \
		TArray<TScriptInterface<ITriggerInterface> > OuterTriggers; \
		FGameplayTagContainer Category; \
	}; \
	struct TriggerTaskComponentBase_eventIsMatchedForCurrentRunTimeContent_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerTaskComponentBase_eventIsMatchedForCurrentRunTimeContent_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TriggerTaskComponentBase_eventNetMulti_StartTask_Parms \
	{ \
		FTriggerTaskRuntimeInfo RuntimeInfo; \
		bool CanRunOnServer; \
		bool CanRunOnClient; \
	}; \
	struct TriggerTaskComponentBase_eventOnDispatchTask_Parms \
	{ \
		bool ForceStart; \
		UOperationInformationBase* StartOperationInfo; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerTaskComponentBase_eventOnDispatchTask_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TriggerTaskComponentBase_eventOnGetChildTriggerTaskComponents_Parms \
	{ \
		TArray<UTriggerTaskComponentBase*> OutTriggerTaskComponents; \
		UTriggerTaskBase* Task; \
		UOperationInformationBase* StartOperationInfo; \
	}; \
	struct TriggerTaskComponentBase_eventOnGetParentTriggerTaskComponents_Parms \
	{ \
		TArray<UTriggerTaskComponentBase*> OutTriggerTaskComponents; \
	}; \
	struct TriggerTaskComponentBase_eventRemoveChildNode_Parms \
	{ \
		TScriptInterface<ITriggerInterface> ChildNode; \
		FGameplayTagContainer Category; \
		bool NeedUpdateParentNodeInChildNode; \
	}; \
	struct TriggerTaskComponentBase_eventRemoveParentNode_Parms \
	{ \
		TScriptInterface<ITriggerInterface> ParentNode; \
		FGameplayTagContainer Category; \
		bool NeedUpdateChildNodeInParentNode; \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerTaskComponentBase_h_49_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerTaskComponentBase_h_49_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UTriggerTaskComponentBase, NO_API)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerTaskComponentBase_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerTaskComponentBase(); \
	friend struct Z_Construct_UClass_UTriggerTaskComponentBase_Statics; \
public: \
	DECLARE_CLASS(UTriggerTaskComponentBase, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerTaskComponentBase) \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerTaskComponentBase_h_49_ARCHIVESERIALIZER


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerTaskComponentBase_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUTriggerTaskComponentBase(); \
	friend struct Z_Construct_UClass_UTriggerTaskComponentBase_Statics; \
public: \
	DECLARE_CLASS(UTriggerTaskComponentBase, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerTaskComponentBase) \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerTaskComponentBase_h_49_ARCHIVESERIALIZER


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerTaskComponentBase_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerTaskComponentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerTaskComponentBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerTaskComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerTaskComponentBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerTaskComponentBase(UTriggerTaskComponentBase&&); \
	NO_API UTriggerTaskComponentBase(const UTriggerTaskComponentBase&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerTaskComponentBase_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerTaskComponentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerTaskComponentBase(UTriggerTaskComponentBase&&); \
	NO_API UTriggerTaskComponentBase(const UTriggerTaskComponentBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerTaskComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerTaskComponentBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerTaskComponentBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerTaskComponentBase_h_49_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EventChains() { return STRUCT_OFFSET(UTriggerTaskComponentBase, EventChains); } \
	FORCEINLINE static uint32 __PPO__TriggerTasks() { return STRUCT_OFFSET(UTriggerTaskComponentBase, TriggerTasks); } \
	FORCEINLINE static uint32 __PPO__Categories() { return STRUCT_OFFSET(UTriggerTaskComponentBase, Categories); } \
	FORCEINLINE static uint32 __PPO__ID() { return STRUCT_OFFSET(UTriggerTaskComponentBase, ID); }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerTaskComponentBase_h_46_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerTaskComponentBase_h_49_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerTaskComponentBase_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerTaskComponentBase_h_49_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerTaskComponentBase_h_49_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerTaskComponentBase_h_49_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerTaskComponentBase_h_49_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerTaskComponentBase_h_49_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerTaskComponentBase_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerTaskComponentBase_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerTaskComponentBase_h_49_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerTaskComponentBase_h_49_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerTaskComponentBase_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerTaskComponentBase_h_49_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerTaskComponentBase_h_49_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerTaskComponentBase_h_49_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerTaskComponentBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTriggerTaskComponentBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerTaskComponentBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
