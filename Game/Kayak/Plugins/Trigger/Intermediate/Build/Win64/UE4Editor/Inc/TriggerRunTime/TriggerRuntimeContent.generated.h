// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTagContainer;
struct FTriggerTaskComponentInformation;
struct FGameplayTag;
class APlayerController;
struct FTriggerScenarioHandle;
struct FTriggerScenarioInfo;
#ifdef TRIGGERRUNTIME_TriggerRuntimeContent_generated_h
#error "TriggerRuntimeContent.generated.h already included, missing '#pragma once' in TriggerRuntimeContent.h"
#endif
#define TRIGGERRUNTIME_TriggerRuntimeContent_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerRuntimeContent_h_87_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FTriggerScenarioInfo>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerRuntimeContent_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScenarioParticipatorInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FScenarioParticipatorInfo>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerRuntimeContent_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTriggerScenarioHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FTriggerScenarioHandle>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerRuntimeContent_h_130_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerRuntimeContent_h_130_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTriggerCategory); \
	DECLARE_FUNCTION(execSetTriggerCategory); \
	DECLARE_FUNCTION(execSetTriggerCategoryByString); \
	DECLARE_FUNCTION(execCanUseComponentInfo); \
	DECLARE_FUNCTION(execAddSceneario); \
	DECLARE_FUNCTION(execGetAllOpenedScenarios); \
	DECLARE_FUNCTION(execGetAllActiveScenarios); \
	DECLARE_FUNCTION(execGetScenerioInfo); \
	DECLARE_FUNCTION(execGetOpenedScenarioInfosByPlayerController); \
	DECLARE_FUNCTION(execInitializeRuntimeContent);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerRuntimeContent_h_130_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTriggerCategory); \
	DECLARE_FUNCTION(execSetTriggerCategory); \
	DECLARE_FUNCTION(execSetTriggerCategoryByString); \
	DECLARE_FUNCTION(execCanUseComponentInfo); \
	DECLARE_FUNCTION(execAddSceneario); \
	DECLARE_FUNCTION(execGetAllOpenedScenarios); \
	DECLARE_FUNCTION(execGetAllActiveScenarios); \
	DECLARE_FUNCTION(execGetScenerioInfo); \
	DECLARE_FUNCTION(execGetOpenedScenarioInfosByPlayerController); \
	DECLARE_FUNCTION(execInitializeRuntimeContent);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerRuntimeContent_h_130_EVENT_PARMS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerRuntimeContent_h_130_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerRuntimeContent_h_130_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerRuntimeContent(); \
	friend struct Z_Construct_UClass_UTriggerRuntimeContent_Statics; \
public: \
	DECLARE_CLASS(UTriggerRuntimeContent, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerRuntimeContent)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerRuntimeContent_h_130_INCLASS \
private: \
	static void StaticRegisterNativesUTriggerRuntimeContent(); \
	friend struct Z_Construct_UClass_UTriggerRuntimeContent_Statics; \
public: \
	DECLARE_CLASS(UTriggerRuntimeContent, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerRuntimeContent)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerRuntimeContent_h_130_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerRuntimeContent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerRuntimeContent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerRuntimeContent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerRuntimeContent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerRuntimeContent(UTriggerRuntimeContent&&); \
	NO_API UTriggerRuntimeContent(const UTriggerRuntimeContent&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerRuntimeContent_h_130_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerRuntimeContent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerRuntimeContent(UTriggerRuntimeContent&&); \
	NO_API UTriggerRuntimeContent(const UTriggerRuntimeContent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerRuntimeContent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerRuntimeContent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerRuntimeContent)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerRuntimeContent_h_130_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerRuntimeContent_h_127_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerRuntimeContent_h_130_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerRuntimeContent_h_130_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerRuntimeContent_h_130_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerRuntimeContent_h_130_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerRuntimeContent_h_130_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerRuntimeContent_h_130_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerRuntimeContent_h_130_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerRuntimeContent_h_130_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerRuntimeContent_h_130_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerRuntimeContent_h_130_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerRuntimeContent_h_130_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerRuntimeContent_h_130_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerRuntimeContent_h_130_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerRuntimeContent_h_130_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerRuntimeContent_h_130_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerRuntimeContent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTriggerRuntimeContent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerRuntimeContent_h


#define FOREACH_ENUM_ESCENARIORUNSTATE(op) \
	op(EScenarioRunState::EScenarioRunState_Open) \
	op(EScenarioRunState::EScenarioRunState_Suspend) \
	op(EScenarioRunState::EScenarioRunState_Closed) 

enum class EScenarioRunState : uint8;
template<> TRIGGERRUNTIME_API UEnum* StaticEnum<EScenarioRunState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
