// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef TRIGGERRUNTIME_TriggerRepeatConditionBase_generated_h
#error "TriggerRepeatConditionBase.generated.h already included, missing '#pragma once' in TriggerRepeatConditionBase.h"
#endif
#define TRIGGERRUNTIME_TriggerRepeatConditionBase_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_TriggerRepeatConditionBase_h_23_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_TriggerRepeatConditionBase_h_23_RPC_WRAPPERS \
	virtual bool TryToRepeat_Implementation(UObject* Object); \
	virtual int32 GetRepeatCount_Implementation(); \
 \
	DECLARE_FUNCTION(execTryToRepeat); \
	DECLARE_FUNCTION(execGetRepeatCount);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_TriggerRepeatConditionBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool TryToRepeat_Implementation(UObject* Object); \
	virtual int32 GetRepeatCount_Implementation(); \
 \
	DECLARE_FUNCTION(execTryToRepeat); \
	DECLARE_FUNCTION(execGetRepeatCount);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_TriggerRepeatConditionBase_h_23_EVENT_PARMS \
	struct TriggerTaskRepeatCondtionBase_eventGetRepeatCount_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerTaskRepeatCondtionBase_eventGetRepeatCount_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct TriggerTaskRepeatCondtionBase_eventTryToRepeat_Parms \
	{ \
		UObject* Object; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerTaskRepeatCondtionBase_eventTryToRepeat_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_TriggerRepeatConditionBase_h_23_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_TriggerRepeatConditionBase_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerTaskRepeatCondtionBase(); \
	friend struct Z_Construct_UClass_UTriggerTaskRepeatCondtionBase_Statics; \
public: \
	DECLARE_CLASS(UTriggerTaskRepeatCondtionBase, UEvaluatorCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerTaskRepeatCondtionBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_TriggerRepeatConditionBase_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUTriggerTaskRepeatCondtionBase(); \
	friend struct Z_Construct_UClass_UTriggerTaskRepeatCondtionBase_Statics; \
public: \
	DECLARE_CLASS(UTriggerTaskRepeatCondtionBase, UEvaluatorCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerTaskRepeatCondtionBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_TriggerRepeatConditionBase_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerTaskRepeatCondtionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerTaskRepeatCondtionBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerTaskRepeatCondtionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerTaskRepeatCondtionBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerTaskRepeatCondtionBase(UTriggerTaskRepeatCondtionBase&&); \
	NO_API UTriggerTaskRepeatCondtionBase(const UTriggerTaskRepeatCondtionBase&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_TriggerRepeatConditionBase_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerTaskRepeatCondtionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerTaskRepeatCondtionBase(UTriggerTaskRepeatCondtionBase&&); \
	NO_API UTriggerTaskRepeatCondtionBase(const UTriggerTaskRepeatCondtionBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerTaskRepeatCondtionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerTaskRepeatCondtionBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerTaskRepeatCondtionBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_TriggerRepeatConditionBase_h_23_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_TriggerRepeatConditionBase_h_20_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_TriggerRepeatConditionBase_h_23_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_TriggerRepeatConditionBase_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_TriggerRepeatConditionBase_h_23_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_TriggerRepeatConditionBase_h_23_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_TriggerRepeatConditionBase_h_23_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_TriggerRepeatConditionBase_h_23_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_TriggerRepeatConditionBase_h_23_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_TriggerRepeatConditionBase_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_TriggerRepeatConditionBase_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_TriggerRepeatConditionBase_h_23_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_TriggerRepeatConditionBase_h_23_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_TriggerRepeatConditionBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_TriggerRepeatConditionBase_h_23_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_TriggerRepeatConditionBase_h_23_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_TriggerRepeatConditionBase_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerTaskRepeatCondtionBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTriggerTaskRepeatCondtionBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_TriggerRepeatConditionBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
