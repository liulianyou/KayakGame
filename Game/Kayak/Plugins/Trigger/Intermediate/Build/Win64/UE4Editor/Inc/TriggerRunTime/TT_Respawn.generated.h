// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACharacter;
struct FTransform;
#ifdef TRIGGERRUNTIME_TT_Respawn_generated_h
#error "TT_Respawn.generated.h already included, missing '#pragma once' in TT_Respawn.h"
#endif
#define TRIGGERRUNTIME_TT_Respawn_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_Respawn_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FToggledPawnInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FToggledPawnInfo>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_Respawn_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRespawnInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FRespawnInfo>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_Respawn_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FControllerData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FControllerData>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_Respawn_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FCharacterData>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_Respawn_h_92_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_Respawn_h_92_RPC_WRAPPERS \
	virtual void SetCharacterTransform_Implementation(ACharacter* Character, FTransform Transform); \
 \
	DECLARE_FUNCTION(execDeferredPawnDestroyed); \
	DECLARE_FUNCTION(execActorDestroyedEvent); \
	DECLARE_FUNCTION(execPawnDeadEvent); \
	DECLARE_FUNCTION(execSetCharacterTransform);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_Respawn_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetCharacterTransform_Implementation(ACharacter* Character, FTransform Transform); \
 \
	DECLARE_FUNCTION(execDeferredPawnDestroyed); \
	DECLARE_FUNCTION(execActorDestroyedEvent); \
	DECLARE_FUNCTION(execPawnDeadEvent); \
	DECLARE_FUNCTION(execSetCharacterTransform);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_Respawn_h_92_EVENT_PARMS \
	struct TT_Respawn_eventSetCharacterTransform_Parms \
	{ \
		ACharacter* Character; \
		FTransform Transform; \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_Respawn_h_92_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_Respawn_h_92_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTT_Respawn(); \
	friend struct Z_Construct_UClass_UTT_Respawn_Statics; \
public: \
	DECLARE_CLASS(UTT_Respawn, UTriggerTaskBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTT_Respawn) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_Respawn_h_92_INCLASS \
private: \
	static void StaticRegisterNativesUTT_Respawn(); \
	friend struct Z_Construct_UClass_UTT_Respawn_Statics; \
public: \
	DECLARE_CLASS(UTT_Respawn, UTriggerTaskBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTT_Respawn) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_Respawn_h_92_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTT_Respawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTT_Respawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTT_Respawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTT_Respawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTT_Respawn(UTT_Respawn&&); \
	NO_API UTT_Respawn(const UTT_Respawn&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_Respawn_h_92_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTT_Respawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTT_Respawn(UTT_Respawn&&); \
	NO_API UTT_Respawn(const UTT_Respawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTT_Respawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTT_Respawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTT_Respawn)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_Respawn_h_92_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_Respawn_h_89_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_Respawn_h_92_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_Respawn_h_92_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_Respawn_h_92_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_Respawn_h_92_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_Respawn_h_92_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_Respawn_h_92_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_Respawn_h_92_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_Respawn_h_92_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_Respawn_h_92_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_Respawn_h_92_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_Respawn_h_92_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_Respawn_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_Respawn_h_92_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_Respawn_h_92_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_Respawn_h_92_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TT_Respawn."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTT_Respawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_RespawnTask_TT_Respawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
