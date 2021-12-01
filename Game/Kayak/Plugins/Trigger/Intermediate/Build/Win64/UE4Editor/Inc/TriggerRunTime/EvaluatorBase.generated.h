// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEvaluatorBase;
class UObject;
class UEvaluatorDataBase;
#ifdef TRIGGERRUNTIME_EvaluatorBase_generated_h
#error "EvaluatorBase.generated.h already included, missing '#pragma once' in EvaluatorBase.h"
#endif
#define TRIGGERRUNTIME_EvaluatorBase_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorBase_h_17_DELEGATE \
struct _Script_TriggerRunTime_eventEvaluatorDelegate_Parms \
{ \
	UEvaluatorBase* Evaluator; \
	bool EvaluatorResult; \
}; \
static inline void FEvaluatorDelegate_DelegateWrapper(const FMulticastScriptDelegate& EvaluatorDelegate, UEvaluatorBase* Evaluator, bool EvaluatorResult) \
{ \
	_Script_TriggerRunTime_eventEvaluatorDelegate_Parms Parms; \
	Parms.Evaluator=Evaluator; \
	Parms.EvaluatorResult=EvaluatorResult ? true : false; \
	EvaluatorDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorBase_h_23_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorBase_h_23_RPC_WRAPPERS \
	virtual void BP_Reset_Implementation(); \
	virtual bool BP_Evaluator_Implementation(); \
 \
	DECLARE_FUNCTION(execNotifyToEvaluate); \
	DECLARE_FUNCTION(execMarkEvaluateable); \
	DECLARE_FUNCTION(execGetOwner); \
	DECLARE_FUNCTION(execCreateNewExternalData); \
	DECLARE_FUNCTION(execSetExternalData); \
	DECLARE_FUNCTION(execGetExternalData); \
	DECLARE_FUNCTION(execGetEvaluateCount); \
	DECLARE_FUNCTION(execGetLastEvaluatorResult); \
	DECLARE_FUNCTION(execBP_Reset); \
	DECLARE_FUNCTION(execBP_Evaluator);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BP_Reset_Implementation(); \
	virtual bool BP_Evaluator_Implementation(); \
 \
	DECLARE_FUNCTION(execNotifyToEvaluate); \
	DECLARE_FUNCTION(execMarkEvaluateable); \
	DECLARE_FUNCTION(execGetOwner); \
	DECLARE_FUNCTION(execCreateNewExternalData); \
	DECLARE_FUNCTION(execSetExternalData); \
	DECLARE_FUNCTION(execGetExternalData); \
	DECLARE_FUNCTION(execGetEvaluateCount); \
	DECLARE_FUNCTION(execGetLastEvaluatorResult); \
	DECLARE_FUNCTION(execBP_Reset); \
	DECLARE_FUNCTION(execBP_Evaluator);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorBase_h_23_EVENT_PARMS \
	struct EvaluatorBase_eventBP_Evaluator_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EvaluatorBase_eventBP_Evaluator_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EvaluatorBase_eventBP_Initialize_Parms \
	{ \
		UObject* OwnerObject; \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorBase_h_23_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorBase_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEvaluatorBase(); \
	friend struct Z_Construct_UClass_UEvaluatorBase_Statics; \
public: \
	DECLARE_CLASS(UEvaluatorBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UEvaluatorBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorBase_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUEvaluatorBase(); \
	friend struct Z_Construct_UClass_UEvaluatorBase_Statics; \
public: \
	DECLARE_CLASS(UEvaluatorBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UEvaluatorBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorBase_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEvaluatorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEvaluatorBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEvaluatorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEvaluatorBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEvaluatorBase(UEvaluatorBase&&); \
	NO_API UEvaluatorBase(const UEvaluatorBase&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorBase_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEvaluatorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEvaluatorBase(UEvaluatorBase&&); \
	NO_API UEvaluatorBase(const UEvaluatorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEvaluatorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEvaluatorBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEvaluatorBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorBase_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ExternalData() { return STRUCT_OFFSET(UEvaluatorBase, ExternalData); } \
	FORCEINLINE static uint32 __PPO__Owner() { return STRUCT_OFFSET(UEvaluatorBase, Owner); }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorBase_h_19_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorBase_h_23_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorBase_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorBase_h_23_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorBase_h_23_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorBase_h_23_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorBase_h_23_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorBase_h_23_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorBase_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorBase_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorBase_h_23_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorBase_h_23_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorBase_h_23_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorBase_h_23_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorBase_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EvaluatorBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UEvaluatorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_EvaluatorBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
