// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
struct FTriggerTaskRuntimeInfo;
class UOperationInformationBase;
class UTriggerTaskComponentBase;
class UTriggerTaskBase;
#ifdef TRIGGERRUNTIME_TriggerTaskRunHelp_generated_h
#error "TriggerTaskRunHelp.generated.h already included, missing '#pragma once' in TriggerTaskRunHelp.h"
#endif
#define TRIGGERRUNTIME_TriggerTaskRunHelp_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskRunHelp_h_22_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskRunHelp_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNewMapLoaded); \
	DECLARE_FUNCTION(execTryToRemovePendingRuntimeInfo); \
	DECLARE_FUNCTION(execRunTriggerTaskWithRuntimeInfo); \
	DECLARE_FUNCTION(execRunTriggerTaskByID); \
	DECLARE_FUNCTION(execRunTriggerTaskByTaskIndex); \
	DECLARE_FUNCTION(execRunTriggerTask); \
	DECLARE_FUNCTION(execInitializeTriggerTaskRunHelp);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskRunHelp_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNewMapLoaded); \
	DECLARE_FUNCTION(execTryToRemovePendingRuntimeInfo); \
	DECLARE_FUNCTION(execRunTriggerTaskWithRuntimeInfo); \
	DECLARE_FUNCTION(execRunTriggerTaskByID); \
	DECLARE_FUNCTION(execRunTriggerTaskByTaskIndex); \
	DECLARE_FUNCTION(execRunTriggerTask); \
	DECLARE_FUNCTION(execInitializeTriggerTaskRunHelp);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskRunHelp_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerTaskRunHelp(); \
	friend struct Z_Construct_UClass_UTriggerTaskRunHelp_Statics; \
public: \
	DECLARE_CLASS(UTriggerTaskRunHelp, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerTaskRunHelp)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskRunHelp_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUTriggerTaskRunHelp(); \
	friend struct Z_Construct_UClass_UTriggerTaskRunHelp_Statics; \
public: \
	DECLARE_CLASS(UTriggerTaskRunHelp, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerTaskRunHelp)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskRunHelp_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerTaskRunHelp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerTaskRunHelp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerTaskRunHelp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerTaskRunHelp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerTaskRunHelp(UTriggerTaskRunHelp&&); \
	NO_API UTriggerTaskRunHelp(const UTriggerTaskRunHelp&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskRunHelp_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerTaskRunHelp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerTaskRunHelp(UTriggerTaskRunHelp&&); \
	NO_API UTriggerTaskRunHelp(const UTriggerTaskRunHelp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerTaskRunHelp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerTaskRunHelp); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerTaskRunHelp)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskRunHelp_h_22_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskRunHelp_h_18_PROLOG
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskRunHelp_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskRunHelp_h_22_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskRunHelp_h_22_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskRunHelp_h_22_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskRunHelp_h_22_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskRunHelp_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskRunHelp_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskRunHelp_h_22_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskRunHelp_h_22_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskRunHelp_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskRunHelp_h_22_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskRunHelp_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerTaskRunHelp."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTriggerTaskRunHelp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskRunHelp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
