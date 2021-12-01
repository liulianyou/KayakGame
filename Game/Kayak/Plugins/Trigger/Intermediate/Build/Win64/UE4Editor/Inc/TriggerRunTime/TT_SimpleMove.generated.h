// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef TRIGGERRUNTIME_TT_SimpleMove_generated_h
#error "TT_SimpleMove.generated.h already included, missing '#pragma once' in TT_SimpleMove.h"
#endif
#define TRIGGERRUNTIME_TT_SimpleMove_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_MoveTask_TT_SimpleMove_h_21_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_MoveTask_TT_SimpleMove_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveOverlapEvent); \
	DECLARE_FUNCTION(execOnTargetActorOverlap);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_MoveTask_TT_SimpleMove_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveOverlapEvent); \
	DECLARE_FUNCTION(execOnTargetActorOverlap);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_MoveTask_TT_SimpleMove_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTT_SimpleMove(); \
	friend struct Z_Construct_UClass_UTT_SimpleMove_Statics; \
public: \
	DECLARE_CLASS(UTT_SimpleMove, UTT_MoveBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTT_SimpleMove)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_MoveTask_TT_SimpleMove_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUTT_SimpleMove(); \
	friend struct Z_Construct_UClass_UTT_SimpleMove_Statics; \
public: \
	DECLARE_CLASS(UTT_SimpleMove, UTT_MoveBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTT_SimpleMove)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_MoveTask_TT_SimpleMove_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTT_SimpleMove(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTT_SimpleMove) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTT_SimpleMove); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTT_SimpleMove); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTT_SimpleMove(UTT_SimpleMove&&); \
	NO_API UTT_SimpleMove(const UTT_SimpleMove&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_MoveTask_TT_SimpleMove_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTT_SimpleMove(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTT_SimpleMove(UTT_SimpleMove&&); \
	NO_API UTT_SimpleMove(const UTT_SimpleMove&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTT_SimpleMove); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTT_SimpleMove); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTT_SimpleMove)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_MoveTask_TT_SimpleMove_h_21_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_MoveTask_TT_SimpleMove_h_18_PROLOG
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_MoveTask_TT_SimpleMove_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_MoveTask_TT_SimpleMove_h_21_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_MoveTask_TT_SimpleMove_h_21_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_MoveTask_TT_SimpleMove_h_21_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_MoveTask_TT_SimpleMove_h_21_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_MoveTask_TT_SimpleMove_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_MoveTask_TT_SimpleMove_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_MoveTask_TT_SimpleMove_h_21_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_MoveTask_TT_SimpleMove_h_21_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_MoveTask_TT_SimpleMove_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_MoveTask_TT_SimpleMove_h_21_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_MoveTask_TT_SimpleMove_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TT_SimpleMove."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTT_SimpleMove>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_MoveTask_TT_SimpleMove_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
