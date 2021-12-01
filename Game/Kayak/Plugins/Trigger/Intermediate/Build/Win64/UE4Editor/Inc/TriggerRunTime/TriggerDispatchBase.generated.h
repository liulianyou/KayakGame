// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TRIGGERRUNTIME_TriggerDispatchBase_generated_h
#error "TriggerDispatchBase.generated.h already included, missing '#pragma once' in TriggerDispatchBase.h"
#endif
#define TRIGGERRUNTIME_TriggerDispatchBase_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_TriggerDispatchBase_h_16_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_TriggerDispatchBase_h_16_RPC_WRAPPERS \
	virtual bool Dispatch_Implementation(); \
 \
	DECLARE_FUNCTION(execDispatch);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_TriggerDispatchBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Dispatch_Implementation(); \
 \
	DECLARE_FUNCTION(execDispatch);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_TriggerDispatchBase_h_16_EVENT_PARMS \
	struct TriggerDispatchBase_eventDispatch_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerDispatchBase_eventDispatch_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_TriggerDispatchBase_h_16_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_TriggerDispatchBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerDispatchBase(); \
	friend struct Z_Construct_UClass_UTriggerDispatchBase_Statics; \
public: \
	DECLARE_CLASS(UTriggerDispatchBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerDispatchBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_TriggerDispatchBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUTriggerDispatchBase(); \
	friend struct Z_Construct_UClass_UTriggerDispatchBase_Statics; \
public: \
	DECLARE_CLASS(UTriggerDispatchBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerDispatchBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_TriggerDispatchBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerDispatchBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerDispatchBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerDispatchBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerDispatchBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerDispatchBase(UTriggerDispatchBase&&); \
	NO_API UTriggerDispatchBase(const UTriggerDispatchBase&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_TriggerDispatchBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerDispatchBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerDispatchBase(UTriggerDispatchBase&&); \
	NO_API UTriggerDispatchBase(const UTriggerDispatchBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerDispatchBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerDispatchBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerDispatchBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_TriggerDispatchBase_h_16_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_TriggerDispatchBase_h_13_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_TriggerDispatchBase_h_16_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_TriggerDispatchBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_TriggerDispatchBase_h_16_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_TriggerDispatchBase_h_16_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_TriggerDispatchBase_h_16_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_TriggerDispatchBase_h_16_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_TriggerDispatchBase_h_16_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_TriggerDispatchBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_TriggerDispatchBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_TriggerDispatchBase_h_16_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_TriggerDispatchBase_h_16_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_TriggerDispatchBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_TriggerDispatchBase_h_16_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_TriggerDispatchBase_h_16_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_TriggerDispatchBase_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerDispatchBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTriggerDispatchBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_TriggerDispatchBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
