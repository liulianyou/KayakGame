// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef TRIGGERRUNTIME_AISpawnDataGroup_generated_h
#error "AISpawnDataGroup.generated.h already included, missing '#pragma once' in AISpawnDataGroup.h"
#endif
#define TRIGGERRUNTIME_AISpawnDataGroup_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataGroup_h_190_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEnemyInfo_Statics; \
	TRIGGERRUNTIME_API static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FEnemyInfo>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataGroup_h_153_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo_Statics; \
	TRIGGERRUNTIME_API static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FSingleGroupSpawnRoundInfo>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataGroup_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics; \
	TRIGGERRUNTIME_API static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FSingleGroupDataInfo>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataGroup_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGroupAITimeRange_Statics; \
	TRIGGERRUNTIME_API static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FGroupAITimeRange>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataGroup_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSinglePawnData_Statics; \
	TRIGGERRUNTIME_API static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FSinglePawnData>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataGroup_h_217_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataGroup_h_217_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAISpawnGroupDataTemplateDestoryed); \
	DECLARE_FUNCTION(execSetStartRoundIndex);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataGroup_h_217_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAISpawnGroupDataTemplateDestoryed); \
	DECLARE_FUNCTION(execSetStartRoundIndex);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataGroup_h_217_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAISpawnDataGroup(); \
	friend struct Z_Construct_UClass_UAISpawnDataGroup_Statics; \
public: \
	DECLARE_CLASS(UAISpawnDataGroup, UAISpawnDataBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UAISpawnDataGroup)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataGroup_h_217_INCLASS \
private: \
	static void StaticRegisterNativesUAISpawnDataGroup(); \
	friend struct Z_Construct_UClass_UAISpawnDataGroup_Statics; \
public: \
	DECLARE_CLASS(UAISpawnDataGroup, UAISpawnDataBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UAISpawnDataGroup)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataGroup_h_217_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISpawnDataGroup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISpawnDataGroup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISpawnDataGroup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISpawnDataGroup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISpawnDataGroup(UAISpawnDataGroup&&); \
	NO_API UAISpawnDataGroup(const UAISpawnDataGroup&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataGroup_h_217_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISpawnDataGroup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISpawnDataGroup(UAISpawnDataGroup&&); \
	NO_API UAISpawnDataGroup(const UAISpawnDataGroup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISpawnDataGroup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISpawnDataGroup); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISpawnDataGroup)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataGroup_h_217_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AIInfosAtCurrentRound() { return STRUCT_OFFSET(UAISpawnDataGroup, AIInfosAtCurrentRound); }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataGroup_h_214_PROLOG
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataGroup_h_217_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataGroup_h_217_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataGroup_h_217_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataGroup_h_217_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataGroup_h_217_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataGroup_h_217_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataGroup_h_217_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataGroup_h_217_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataGroup_h_217_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataGroup_h_217_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataGroup_h_217_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataGroup_h_217_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AISpawnDataGroup."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UAISpawnDataGroup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataGroup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
