// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class AActor;
#ifdef TRIGGERRUNTIME_TT_CheckPoint_generated_h
#error "TT_CheckPoint.generated.h already included, missing '#pragma once' in TT_CheckPoint.h"
#endif
#define TRIGGERRUNTIME_TT_CheckPoint_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_CheckPoint_h_104_DELEGATE \
struct _Script_TriggerRunTime_eventNewCheckPointActivated_Parms \
{ \
	APawn* ToggledPawn; \
	TArray<APawn*> OutPawns; \
}; \
static inline void FNewCheckPointActivated_DelegateWrapper(const FMulticastScriptDelegate& NewCheckPointActivated, APawn* ToggledPawn, TArray<APawn*> const& OutPawns) \
{ \
	_Script_TriggerRunTime_eventNewCheckPointActivated_Parms Parms; \
	Parms.ToggledPawn=ToggledPawn; \
	Parms.OutPawns=OutPawns; \
	NewCheckPointActivated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_CheckPoint_h_109_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_CheckPoint_h_109_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPawnOnEndPlay); \
	DECLARE_FUNCTION(execPawnDestroyedEventCallback);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_CheckPoint_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPawnOnEndPlay); \
	DECLARE_FUNCTION(execPawnDestroyedEventCallback);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_CheckPoint_h_109_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTT_CheckPoint(); \
	friend struct Z_Construct_UClass_UTT_CheckPoint_Statics; \
public: \
	DECLARE_CLASS(UTT_CheckPoint, UTT_Respawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTT_CheckPoint)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_CheckPoint_h_109_INCLASS \
private: \
	static void StaticRegisterNativesUTT_CheckPoint(); \
	friend struct Z_Construct_UClass_UTT_CheckPoint_Statics; \
public: \
	DECLARE_CLASS(UTT_CheckPoint, UTT_Respawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTT_CheckPoint)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_CheckPoint_h_109_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTT_CheckPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTT_CheckPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTT_CheckPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTT_CheckPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTT_CheckPoint(UTT_CheckPoint&&); \
	NO_API UTT_CheckPoint(const UTT_CheckPoint&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_CheckPoint_h_109_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTT_CheckPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTT_CheckPoint(UTT_CheckPoint&&); \
	NO_API UTT_CheckPoint(const UTT_CheckPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTT_CheckPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTT_CheckPoint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTT_CheckPoint)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_CheckPoint_h_109_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_CheckPoint_h_106_PROLOG
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_CheckPoint_h_109_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_CheckPoint_h_109_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_CheckPoint_h_109_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_CheckPoint_h_109_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_CheckPoint_h_109_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_CheckPoint_h_109_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_CheckPoint_h_109_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_CheckPoint_h_109_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_CheckPoint_h_109_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_CheckPoint_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_CheckPoint_h_109_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_CheckPoint_h_109_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TT_CheckPoint."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTT_CheckPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_CheckPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
