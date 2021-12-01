// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEvaluatorBase;
class UEvaluatorBase; struct FEvaluatEventInfo;
class UEvaluatorCondition;
#ifdef TRIGGERRUNTIME_EvaluatorOperation_generated_h
#error "EvaluatorOperation.generated.h already included, missing '#pragma once' in EvaluatorOperation.h"
#endif
#define TRIGGERRUNTIME_EvaluatorOperation_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorOperation_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEvaluatEventInfo_Statics; \
	TRIGGERRUNTIME_API static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FEvaluatEventInfo>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorOperation_h_42_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorOperation_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEvaluatorCallback); \
	DECLARE_FUNCTION(execGetCashedResult); \
	DECLARE_FUNCTION(execGetAllPassedEvaluators); \
	DECLARE_FUNCTION(execGetAllConditions);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorOperation_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEvaluatorCallback); \
	DECLARE_FUNCTION(execGetCashedResult); \
	DECLARE_FUNCTION(execGetAllPassedEvaluators); \
	DECLARE_FUNCTION(execGetAllConditions);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorOperation_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEvaluatorOperation(); \
	friend struct Z_Construct_UClass_UEvaluatorOperation_Statics; \
public: \
	DECLARE_CLASS(UEvaluatorOperation, UEvaluatorBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UEvaluatorOperation)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorOperation_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUEvaluatorOperation(); \
	friend struct Z_Construct_UClass_UEvaluatorOperation_Statics; \
public: \
	DECLARE_CLASS(UEvaluatorOperation, UEvaluatorBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UEvaluatorOperation)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorOperation_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEvaluatorOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEvaluatorOperation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEvaluatorOperation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEvaluatorOperation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEvaluatorOperation(UEvaluatorOperation&&); \
	NO_API UEvaluatorOperation(const UEvaluatorOperation&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorOperation_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEvaluatorOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEvaluatorOperation(UEvaluatorOperation&&); \
	NO_API UEvaluatorOperation(const UEvaluatorOperation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEvaluatorOperation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEvaluatorOperation); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEvaluatorOperation)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorOperation_h_42_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorOperation_h_39_PROLOG
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorOperation_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorOperation_h_42_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorOperation_h_42_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorOperation_h_42_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorOperation_h_42_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorOperation_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorOperation_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorOperation_h_42_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorOperation_h_42_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorOperation_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorOperation_h_42_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorOperation_h_42_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EvaluatorOperation."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UEvaluatorOperation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorOperation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
