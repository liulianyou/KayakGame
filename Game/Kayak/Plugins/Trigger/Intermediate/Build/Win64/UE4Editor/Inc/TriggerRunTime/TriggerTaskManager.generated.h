// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTriggerTaskBase;
class UTriggerEventRewardManager;
class UTriggerTaskRunHelp;
class UTriggerManager;
class UTriggerTaskComponentBase;
#ifdef TRIGGERRUNTIME_TriggerTaskManager_generated_h
#error "TriggerTaskManager.generated.h already included, missing '#pragma once' in TriggerTaskManager.h"
#endif
#define TRIGGERRUNTIME_TriggerTaskManager_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskManager_h_25_DELEGATE \
struct _Script_TriggerRunTime_eventTaskUnRegisterEvent_Parms \
{ \
	UTriggerTaskBase* TriggerTask; \
}; \
static inline void FTaskUnRegisterEvent_DelegateWrapper(const FMulticastScriptDelegate& TaskUnRegisterEvent, UTriggerTaskBase* TriggerTask) \
{ \
	_Script_TriggerRunTime_eventTaskUnRegisterEvent_Parms Parms; \
	Parms.TriggerTask=TriggerTask; \
	TaskUnRegisterEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskManager_h_24_DELEGATE \
struct _Script_TriggerRunTime_eventTaskRegisterEvent_Parms \
{ \
	UTriggerTaskBase* TriggerTask; \
}; \
static inline void FTaskRegisterEvent_DelegateWrapper(const FMulticastScriptDelegate& TaskRegisterEvent, UTriggerTaskBase* TriggerTask) \
{ \
	_Script_TriggerRunTime_eventTaskRegisterEvent_Parms Parms; \
	Parms.TriggerTask=TriggerTask; \
	TaskRegisterEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskManager_h_30_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskManager_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRewardManager); \
	DECLARE_FUNCTION(execGetTriggerTaskRunHelp); \
	DECLARE_FUNCTION(execGetTriggerManager); \
	DECLARE_FUNCTION(execUnRegisterTask); \
	DECLARE_FUNCTION(execRegisterTask); \
	DECLARE_FUNCTION(execCreateNewTaskByObject); \
	DECLARE_FUNCTION(execCreateNewTaskByClass);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskManager_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRewardManager); \
	DECLARE_FUNCTION(execGetTriggerTaskRunHelp); \
	DECLARE_FUNCTION(execGetTriggerManager); \
	DECLARE_FUNCTION(execUnRegisterTask); \
	DECLARE_FUNCTION(execRegisterTask); \
	DECLARE_FUNCTION(execCreateNewTaskByObject); \
	DECLARE_FUNCTION(execCreateNewTaskByClass);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskManager_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerTaskManager(); \
	friend struct Z_Construct_UClass_UTriggerTaskManager_Statics; \
public: \
	DECLARE_CLASS(UTriggerTaskManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerTaskManager)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskManager_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUTriggerTaskManager(); \
	friend struct Z_Construct_UClass_UTriggerTaskManager_Statics; \
public: \
	DECLARE_CLASS(UTriggerTaskManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerTaskManager)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskManager_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerTaskManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerTaskManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerTaskManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerTaskManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerTaskManager(UTriggerTaskManager&&); \
	NO_API UTriggerTaskManager(const UTriggerTaskManager&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskManager_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerTaskManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerTaskManager(UTriggerTaskManager&&); \
	NO_API UTriggerTaskManager(const UTriggerTaskManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerTaskManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerTaskManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerTaskManager)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskManager_h_30_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TriggerTaskRunHelp() { return STRUCT_OFFSET(UTriggerTaskManager, TriggerTaskRunHelp); } \
	FORCEINLINE static uint32 __PPO__RewardManager() { return STRUCT_OFFSET(UTriggerTaskManager, RewardManager); }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskManager_h_27_PROLOG
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskManager_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskManager_h_30_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskManager_h_30_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskManager_h_30_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskManager_h_30_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskManager_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskManager_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskManager_h_30_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskManager_h_30_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskManager_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskManager_h_30_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskManager_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerTaskManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTriggerTaskManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
