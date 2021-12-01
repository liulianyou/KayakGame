// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef TRIGGERRUNTIME_TriggerFilterBase_generated_h
#error "TriggerFilterBase.generated.h already included, missing '#pragma once' in TriggerFilterBase.h"
#endif
#define TRIGGERRUNTIME_TriggerFilterBase_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Filter_TriggerFilterBase_h_20_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Filter_TriggerFilterBase_h_20_RPC_WRAPPERS \
	virtual void BP_Reset_Implementation(); \
	virtual bool BP_Pass_Implementation() const; \
 \
	DECLARE_FUNCTION(execBP_Reset); \
	DECLARE_FUNCTION(execBP_Pass); \
	DECLARE_FUNCTION(execGetUObjectData);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Filter_TriggerFilterBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BP_Reset_Implementation(); \
	virtual bool BP_Pass_Implementation() const; \
 \
	DECLARE_FUNCTION(execBP_Reset); \
	DECLARE_FUNCTION(execBP_Pass); \
	DECLARE_FUNCTION(execGetUObjectData);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Filter_TriggerFilterBase_h_20_EVENT_PARMS \
	struct TriggerFilterBase_eventBP_Pass_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerFilterBase_eventBP_Pass_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Filter_TriggerFilterBase_h_20_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Filter_TriggerFilterBase_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerFilterBase(); \
	friend struct Z_Construct_UClass_UTriggerFilterBase_Statics; \
public: \
	DECLARE_CLASS(UTriggerFilterBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerFilterBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Filter_TriggerFilterBase_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUTriggerFilterBase(); \
	friend struct Z_Construct_UClass_UTriggerFilterBase_Statics; \
public: \
	DECLARE_CLASS(UTriggerFilterBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerFilterBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Filter_TriggerFilterBase_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerFilterBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerFilterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerFilterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerFilterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerFilterBase(UTriggerFilterBase&&); \
	NO_API UTriggerFilterBase(const UTriggerFilterBase&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Filter_TriggerFilterBase_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerFilterBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerFilterBase(UTriggerFilterBase&&); \
	NO_API UTriggerFilterBase(const UTriggerFilterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerFilterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerFilterBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerFilterBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Filter_TriggerFilterBase_h_20_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Filter_TriggerFilterBase_h_17_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Filter_TriggerFilterBase_h_20_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Filter_TriggerFilterBase_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Filter_TriggerFilterBase_h_20_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Filter_TriggerFilterBase_h_20_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Filter_TriggerFilterBase_h_20_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Filter_TriggerFilterBase_h_20_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Filter_TriggerFilterBase_h_20_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Filter_TriggerFilterBase_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Filter_TriggerFilterBase_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Filter_TriggerFilterBase_h_20_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Filter_TriggerFilterBase_h_20_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Filter_TriggerFilterBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Filter_TriggerFilterBase_h_20_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Filter_TriggerFilterBase_h_20_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Filter_TriggerFilterBase_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerFilterBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTriggerFilterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Filter_TriggerFilterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
