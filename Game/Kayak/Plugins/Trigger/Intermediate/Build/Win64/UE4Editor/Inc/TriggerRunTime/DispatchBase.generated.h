// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TRIGGERRUNTIME_DispatchBase_generated_h
#error "DispatchBase.generated.h already included, missing '#pragma once' in DispatchBase.h"
#endif
#define TRIGGERRUNTIME_DispatchBase_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_DispatchBase_h_27_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_DispatchBase_h_27_RPC_WRAPPERS \
	virtual bool Dispatch_Implementation(); \
 \
	DECLARE_FUNCTION(execDispatch);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_DispatchBase_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Dispatch_Implementation(); \
 \
	DECLARE_FUNCTION(execDispatch);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_DispatchBase_h_27_EVENT_PARMS \
	struct DispatchBase_eventDispatch_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DispatchBase_eventDispatch_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_DispatchBase_h_27_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_DispatchBase_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDispatchBase(); \
	friend struct Z_Construct_UClass_UDispatchBase_Statics; \
public: \
	DECLARE_CLASS(UDispatchBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UDispatchBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_DispatchBase_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUDispatchBase(); \
	friend struct Z_Construct_UClass_UDispatchBase_Statics; \
public: \
	DECLARE_CLASS(UDispatchBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UDispatchBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_DispatchBase_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDispatchBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDispatchBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDispatchBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDispatchBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDispatchBase(UDispatchBase&&); \
	NO_API UDispatchBase(const UDispatchBase&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_DispatchBase_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDispatchBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDispatchBase(UDispatchBase&&); \
	NO_API UDispatchBase(const UDispatchBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDispatchBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDispatchBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDispatchBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_DispatchBase_h_27_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_DispatchBase_h_24_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_DispatchBase_h_27_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_DispatchBase_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_DispatchBase_h_27_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_DispatchBase_h_27_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_DispatchBase_h_27_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_DispatchBase_h_27_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_DispatchBase_h_27_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_DispatchBase_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_DispatchBase_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_DispatchBase_h_27_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_DispatchBase_h_27_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_DispatchBase_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_DispatchBase_h_27_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_DispatchBase_h_27_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_DispatchBase_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DispatchBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UDispatchBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDispatchType_DispatchBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
