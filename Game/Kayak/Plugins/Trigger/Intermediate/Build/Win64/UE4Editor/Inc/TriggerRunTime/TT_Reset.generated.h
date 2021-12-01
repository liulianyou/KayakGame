// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TRIGGERRUNTIME_TT_Reset_generated_h
#error "TT_Reset.generated.h already included, missing '#pragma once' in TT_Reset.h"
#endif
#define TRIGGERRUNTIME_TT_Reset_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_Reset_h_40_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_Reset_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetAll); \
	DECLARE_FUNCTION(execResetCharacterAttributes); \
	DECLARE_FUNCTION(execResetTrigger);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_Reset_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetAll); \
	DECLARE_FUNCTION(execResetCharacterAttributes); \
	DECLARE_FUNCTION(execResetTrigger);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_Reset_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTT_Reset(); \
	friend struct Z_Construct_UClass_UTT_Reset_Statics; \
public: \
	DECLARE_CLASS(UTT_Reset, UTriggerTaskBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTT_Reset) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_Reset_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUTT_Reset(); \
	friend struct Z_Construct_UClass_UTT_Reset_Statics; \
public: \
	DECLARE_CLASS(UTT_Reset, UTriggerTaskBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTT_Reset) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_Reset_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTT_Reset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTT_Reset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTT_Reset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTT_Reset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTT_Reset(UTT_Reset&&); \
	NO_API UTT_Reset(const UTT_Reset&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_Reset_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTT_Reset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTT_Reset(UTT_Reset&&); \
	NO_API UTT_Reset(const UTT_Reset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTT_Reset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTT_Reset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTT_Reset)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_Reset_h_40_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_Reset_h_36_PROLOG
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_Reset_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_Reset_h_40_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_Reset_h_40_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_Reset_h_40_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_Reset_h_40_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_Reset_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_Reset_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_Reset_h_40_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_Reset_h_40_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_Reset_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_Reset_h_40_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_Reset_h_40_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TT_Reset."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTT_Reset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_Reset_h


#define FOREACH_ENUM_ERESETTYPE(op) \
	op(EResetType::EResetType_ResetCharacterAttributes) \
	op(EResetType::EResetType_ResetTriggers) \
	op(EResetType::EResetType_ResetALL) 

enum class EResetType : uint8;
template<> TRIGGERRUNTIME_API UEnum* StaticEnum<EResetType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
