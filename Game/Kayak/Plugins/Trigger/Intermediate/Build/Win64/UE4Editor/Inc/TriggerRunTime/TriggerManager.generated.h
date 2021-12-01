// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevel;
class UWorld;
class AGameModeBase;
class ATriggerEventSystemInfoBase;
struct FTriggerTaskComponentInformation;
class UObject;
class UTriggerTaskComponentBase;
class UTriggerOctreeControllerBase;
enum class EClearStrategy : uint8;
class UTriggerRuntimeContent;
class UOperationInformationManager;
class UTriggerSaveGameManager;
class UTriggerTaskManager;
#ifdef TRIGGERRUNTIME_TriggerManager_generated_h
#error "TriggerManager.generated.h already included, missing '#pragma once' in TriggerManager.h"
#endif
#define TRIGGERRUNTIME_TriggerManager_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerManager_h_74_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerManager_h_74_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadLevelStream); \
	DECLARE_FUNCTION(execNewMapLoadedCallback); \
	DECLARE_FUNCTION(execOnGameModeInitialize); \
	DECLARE_FUNCTION(execGetTriggerEventSystemInfo); \
	DECLARE_FUNCTION(execCreateNewTriggerEventSystemInfo); \
	DECLARE_FUNCTION(execSetTriggerEventSystemInfo); \
	DECLARE_FUNCTION(execTryToLoadNewTriggerMap); \
	DECLARE_FUNCTION(execGetTriggerTaskComponentsByComponentInfo); \
	DECLARE_FUNCTION(execGetTriggerController); \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execGetRuntimeContent); \
	DECLARE_FUNCTION(execGetOperationInformationManager); \
	DECLARE_FUNCTION(execGetTriggerSaveGameManager); \
	DECLARE_FUNCTION(execGetTriggerTaskManager);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerManager_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadLevelStream); \
	DECLARE_FUNCTION(execNewMapLoadedCallback); \
	DECLARE_FUNCTION(execOnGameModeInitialize); \
	DECLARE_FUNCTION(execGetTriggerEventSystemInfo); \
	DECLARE_FUNCTION(execCreateNewTriggerEventSystemInfo); \
	DECLARE_FUNCTION(execSetTriggerEventSystemInfo); \
	DECLARE_FUNCTION(execTryToLoadNewTriggerMap); \
	DECLARE_FUNCTION(execGetTriggerTaskComponentsByComponentInfo); \
	DECLARE_FUNCTION(execGetTriggerController); \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execGetRuntimeContent); \
	DECLARE_FUNCTION(execGetOperationInformationManager); \
	DECLARE_FUNCTION(execGetTriggerSaveGameManager); \
	DECLARE_FUNCTION(execGetTriggerTaskManager);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerManager_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerManager(); \
	friend struct Z_Construct_UClass_UTriggerManager_Statics; \
public: \
	DECLARE_CLASS(UTriggerManager, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerManager)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerManager_h_74_INCLASS \
private: \
	static void StaticRegisterNativesUTriggerManager(); \
	friend struct Z_Construct_UClass_UTriggerManager_Statics; \
public: \
	DECLARE_CLASS(UTriggerManager, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerManager)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerManager_h_74_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerManager(UTriggerManager&&); \
	NO_API UTriggerManager(const UTriggerManager&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerManager_h_74_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerManager(UTriggerManager&&); \
	NO_API UTriggerManager(const UTriggerManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTriggerManager)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerManager_h_74_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TrigerTaskManager() { return STRUCT_OFFSET(UTriggerManager, TrigerTaskManager); } \
	FORCEINLINE static uint32 __PPO__TriggerSaveGameManager() { return STRUCT_OFFSET(UTriggerManager, TriggerSaveGameManager); } \
	FORCEINLINE static uint32 __PPO__TriggerOctreeController() { return STRUCT_OFFSET(UTriggerManager, TriggerOctreeController); } \
	FORCEINLINE static uint32 __PPO__RuntimeContent() { return STRUCT_OFFSET(UTriggerManager, RuntimeContent); } \
	FORCEINLINE static uint32 __PPO__OperationManager() { return STRUCT_OFFSET(UTriggerManager, OperationManager); } \
	FORCEINLINE static uint32 __PPO__EventSystemInfos() { return STRUCT_OFFSET(UTriggerManager, EventSystemInfos); }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerManager_h_71_PROLOG
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerManager_h_74_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerManager_h_74_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerManager_h_74_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerManager_h_74_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerManager_h_74_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerManager_h_74_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerManager_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerManager_h_74_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerManager_h_74_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerManager_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerManager_h_74_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerManager_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTriggerManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerManager_h


#define FOREACH_ENUM_ECLEARSTRATEGY(op) \
	op(EClearStrategy::EClearStrategy_All) \
	op(EClearStrategy::EClearStrategy_Scene) \
	op(EClearStrategy::EClearStrategy_Item) \
	op(EClearStrategy::EClearStrategy_Mission) \
	op(EClearStrategy::EClearStrategy_Heuristic) \
	op(EClearStrategy::EClearStrategy_Max) 

enum class EClearStrategy : uint8;
template<> TRIGGERRUNTIME_API UEnum* StaticEnum<EClearStrategy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
