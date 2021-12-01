// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EExternalDataResult : uint8;
class UEvaluatorBase;
#ifdef TRIGGERRUNTIME_EvaluatorDataBase_generated_h
#error "EvaluatorDataBase.generated.h already included, missing '#pragma once' in EvaluatorDataBase.h"
#endif
#define TRIGGERRUNTIME_EvaluatorDataBase_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorData_EvaluatorDataBase_h_29_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorData_EvaluatorDataBase_h_29_RPC_WRAPPERS \
	virtual void Reset_Implementation(); \
	virtual EExternalDataResult CheckEvaluator_Implementation(UEvaluatorBase* Evaluator); \
 \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execCheckEvaluator);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorData_EvaluatorDataBase_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Reset_Implementation(); \
	virtual EExternalDataResult CheckEvaluator_Implementation(UEvaluatorBase* Evaluator); \
 \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execCheckEvaluator);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorData_EvaluatorDataBase_h_29_EVENT_PARMS \
	struct EvaluatorDataBase_eventCheckEvaluator_Parms \
	{ \
		UEvaluatorBase* Evaluator; \
		EExternalDataResult ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EvaluatorDataBase_eventCheckEvaluator_Parms() \
			: ReturnValue((EExternalDataResult)0) \
		{ \
		} \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorData_EvaluatorDataBase_h_29_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorData_EvaluatorDataBase_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEvaluatorDataBase(); \
	friend struct Z_Construct_UClass_UEvaluatorDataBase_Statics; \
public: \
	DECLARE_CLASS(UEvaluatorDataBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UEvaluatorDataBase) \
	DECLARE_WITHIN(UEvaluatorBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorData_EvaluatorDataBase_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUEvaluatorDataBase(); \
	friend struct Z_Construct_UClass_UEvaluatorDataBase_Statics; \
public: \
	DECLARE_CLASS(UEvaluatorDataBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UEvaluatorDataBase) \
	DECLARE_WITHIN(UEvaluatorBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorData_EvaluatorDataBase_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEvaluatorDataBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEvaluatorDataBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEvaluatorDataBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEvaluatorDataBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEvaluatorDataBase(UEvaluatorDataBase&&); \
	NO_API UEvaluatorDataBase(const UEvaluatorDataBase&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorData_EvaluatorDataBase_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEvaluatorDataBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEvaluatorDataBase(UEvaluatorDataBase&&); \
	NO_API UEvaluatorDataBase(const UEvaluatorDataBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEvaluatorDataBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEvaluatorDataBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEvaluatorDataBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorData_EvaluatorDataBase_h_29_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorData_EvaluatorDataBase_h_26_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorData_EvaluatorDataBase_h_29_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorData_EvaluatorDataBase_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorData_EvaluatorDataBase_h_29_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorData_EvaluatorDataBase_h_29_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorData_EvaluatorDataBase_h_29_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorData_EvaluatorDataBase_h_29_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorData_EvaluatorDataBase_h_29_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorData_EvaluatorDataBase_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorData_EvaluatorDataBase_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorData_EvaluatorDataBase_h_29_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorData_EvaluatorDataBase_h_29_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorData_EvaluatorDataBase_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorData_EvaluatorDataBase_h_29_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorData_EvaluatorDataBase_h_29_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorData_EvaluatorDataBase_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EvaluatorDataBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UEvaluatorDataBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorData_EvaluatorDataBase_h


#define FOREACH_ENUM_EEXTERNALDATARESULT(op) \
	op(EExternalDataResult::EExternalDataResult_Faild) \
	op(EExternalDataResult::EExternalDataResult_Success) \
	op(EExternalDataResult::EExternalDataResult_Ignore) 

enum class EExternalDataResult : uint8;
template<> TRIGGERRUNTIME_API UEnum* StaticEnum<EExternalDataResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
