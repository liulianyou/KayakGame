// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGameStateBase;
class AGameModeBase;
class UCheckGameModeState;
#ifdef TRIGGERRUNTIME_TriggerGameModeDataBase_generated_h
#error "TriggerGameModeDataBase.generated.h already included, missing '#pragma once' in TriggerGameModeDataBase.h"
#endif
#define TRIGGERRUNTIME_TriggerGameModeDataBase_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_GameState_GameModeData_TriggerGameModeDataBase_h_25_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_GameState_GameModeData_TriggerGameModeDataBase_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNotifyOwnerToEvaluate); \
	DECLARE_FUNCTION(execGetGameState); \
	DECLARE_FUNCTION(execGetGameMode); \
	DECLARE_FUNCTION(execGetOwner); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execIsPassed);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_GameState_GameModeData_TriggerGameModeDataBase_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNotifyOwnerToEvaluate); \
	DECLARE_FUNCTION(execGetGameState); \
	DECLARE_FUNCTION(execGetGameMode); \
	DECLARE_FUNCTION(execGetOwner); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execIsPassed);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_GameState_GameModeData_TriggerGameModeDataBase_h_25_EVENT_PARMS \
	struct TriggerGameModeDataBase_eventOnInitialize_Parms \
	{ \
		UCheckGameModeState* OwnerObject; \
	}; \
	struct TriggerGameModeDataBase_eventOnIsPassed_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerGameModeDataBase_eventOnIsPassed_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_GameState_GameModeData_TriggerGameModeDataBase_h_25_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_GameState_GameModeData_TriggerGameModeDataBase_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerGameModeDataBase(); \
	friend struct Z_Construct_UClass_UTriggerGameModeDataBase_Statics; \
public: \
	DECLARE_CLASS(UTriggerGameModeDataBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerGameModeDataBase) \
	DECLARE_WITHIN(UCheckGameModeState)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_GameState_GameModeData_TriggerGameModeDataBase_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUTriggerGameModeDataBase(); \
	friend struct Z_Construct_UClass_UTriggerGameModeDataBase_Statics; \
public: \
	DECLARE_CLASS(UTriggerGameModeDataBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerGameModeDataBase) \
	DECLARE_WITHIN(UCheckGameModeState)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_GameState_GameModeData_TriggerGameModeDataBase_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerGameModeDataBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerGameModeDataBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerGameModeDataBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerGameModeDataBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerGameModeDataBase(UTriggerGameModeDataBase&&); \
	NO_API UTriggerGameModeDataBase(const UTriggerGameModeDataBase&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_GameState_GameModeData_TriggerGameModeDataBase_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerGameModeDataBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerGameModeDataBase(UTriggerGameModeDataBase&&); \
	NO_API UTriggerGameModeDataBase(const UTriggerGameModeDataBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerGameModeDataBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerGameModeDataBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerGameModeDataBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_GameState_GameModeData_TriggerGameModeDataBase_h_25_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_GameState_GameModeData_TriggerGameModeDataBase_h_22_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_GameState_GameModeData_TriggerGameModeDataBase_h_25_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_GameState_GameModeData_TriggerGameModeDataBase_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_GameState_GameModeData_TriggerGameModeDataBase_h_25_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_GameState_GameModeData_TriggerGameModeDataBase_h_25_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_GameState_GameModeData_TriggerGameModeDataBase_h_25_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_GameState_GameModeData_TriggerGameModeDataBase_h_25_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_GameState_GameModeData_TriggerGameModeDataBase_h_25_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_GameState_GameModeData_TriggerGameModeDataBase_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_GameState_GameModeData_TriggerGameModeDataBase_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_GameState_GameModeData_TriggerGameModeDataBase_h_25_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_GameState_GameModeData_TriggerGameModeDataBase_h_25_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_GameState_GameModeData_TriggerGameModeDataBase_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_GameState_GameModeData_TriggerGameModeDataBase_h_25_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_GameState_GameModeData_TriggerGameModeDataBase_h_25_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_GameState_GameModeData_TriggerGameModeDataBase_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerGameModeDataBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTriggerGameModeDataBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_GameState_GameModeData_TriggerGameModeDataBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
