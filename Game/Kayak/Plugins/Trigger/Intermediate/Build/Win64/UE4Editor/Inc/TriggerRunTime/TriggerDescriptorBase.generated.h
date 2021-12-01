// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TRIGGERRUNTIME_TriggerDescriptorBase_generated_h
#error "TriggerDescriptorBase.generated.h already included, missing '#pragma once' in TriggerDescriptorBase.h"
#endif
#define TRIGGERRUNTIME_TriggerDescriptorBase_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerDescriptor_TriggerDescriptorBase_h_18_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerDescriptor_TriggerDescriptorBase_h_18_RPC_WRAPPERS \
	virtual FString GetDescription_Implementation(); \
	virtual FString GetAlias_Implementation(); \
 \
	DECLARE_FUNCTION(execGetDescription); \
	DECLARE_FUNCTION(execGetAlias);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerDescriptor_TriggerDescriptorBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FString GetDescription_Implementation(); \
	virtual FString GetAlias_Implementation(); \
 \
	DECLARE_FUNCTION(execGetDescription); \
	DECLARE_FUNCTION(execGetAlias);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerDescriptor_TriggerDescriptorBase_h_18_EVENT_PARMS \
	struct TriggerDescriptorBase_eventGetAlias_Parms \
	{ \
		FString ReturnValue; \
	}; \
	struct TriggerDescriptorBase_eventGetDescription_Parms \
	{ \
		FString ReturnValue; \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerDescriptor_TriggerDescriptorBase_h_18_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerDescriptor_TriggerDescriptorBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerDescriptorBase(); \
	friend struct Z_Construct_UClass_UTriggerDescriptorBase_Statics; \
public: \
	DECLARE_CLASS(UTriggerDescriptorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerDescriptorBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerDescriptor_TriggerDescriptorBase_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUTriggerDescriptorBase(); \
	friend struct Z_Construct_UClass_UTriggerDescriptorBase_Statics; \
public: \
	DECLARE_CLASS(UTriggerDescriptorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerDescriptorBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerDescriptor_TriggerDescriptorBase_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerDescriptorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerDescriptorBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerDescriptorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerDescriptorBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerDescriptorBase(UTriggerDescriptorBase&&); \
	NO_API UTriggerDescriptorBase(const UTriggerDescriptorBase&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerDescriptor_TriggerDescriptorBase_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerDescriptorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerDescriptorBase(UTriggerDescriptorBase&&); \
	NO_API UTriggerDescriptorBase(const UTriggerDescriptorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerDescriptorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerDescriptorBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerDescriptorBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerDescriptor_TriggerDescriptorBase_h_18_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerDescriptor_TriggerDescriptorBase_h_15_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerDescriptor_TriggerDescriptorBase_h_18_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerDescriptor_TriggerDescriptorBase_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerDescriptor_TriggerDescriptorBase_h_18_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerDescriptor_TriggerDescriptorBase_h_18_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerDescriptor_TriggerDescriptorBase_h_18_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerDescriptor_TriggerDescriptorBase_h_18_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerDescriptor_TriggerDescriptorBase_h_18_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerDescriptor_TriggerDescriptorBase_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerDescriptor_TriggerDescriptorBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerDescriptor_TriggerDescriptorBase_h_18_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerDescriptor_TriggerDescriptorBase_h_18_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerDescriptor_TriggerDescriptorBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerDescriptor_TriggerDescriptorBase_h_18_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerDescriptor_TriggerDescriptorBase_h_18_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerDescriptor_TriggerDescriptorBase_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerDescriptorBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTriggerDescriptorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerDescriptor_TriggerDescriptorBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
