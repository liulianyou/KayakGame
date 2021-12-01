// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTriggerTaskBase;
class UOperationInformationBase;
#ifdef TRIGGERRUNTIME_TriggerTaskExternalDataBase_generated_h
#error "TriggerTaskExternalDataBase.generated.h already included, missing '#pragma once' in TriggerTaskExternalDataBase.h"
#endif
#define TRIGGERRUNTIME_TriggerTaskExternalDataBase_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerTaskExternalDataBase_h_24_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerTaskExternalDataBase_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTriggerTaskOwner);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerTaskExternalDataBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTriggerTaskOwner);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerTaskExternalDataBase_h_24_EVENT_PARMS \
	struct TriggerTaskExternalDataBase_eventOnInitialize_Parms \
	{ \
		UTriggerTaskBase* Owner; \
	}; \
	struct TriggerTaskExternalDataBase_eventOnReset_Parms \
	{ \
		UOperationInformationBase* ResetOperationInfo; \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerTaskExternalDataBase_h_24_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerTaskExternalDataBase_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerTaskExternalDataBase(); \
	friend struct Z_Construct_UClass_UTriggerTaskExternalDataBase_Statics; \
public: \
	DECLARE_CLASS(UTriggerTaskExternalDataBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerTaskExternalDataBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerTaskExternalDataBase_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUTriggerTaskExternalDataBase(); \
	friend struct Z_Construct_UClass_UTriggerTaskExternalDataBase_Statics; \
public: \
	DECLARE_CLASS(UTriggerTaskExternalDataBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerTaskExternalDataBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerTaskExternalDataBase_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerTaskExternalDataBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerTaskExternalDataBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerTaskExternalDataBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerTaskExternalDataBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerTaskExternalDataBase(UTriggerTaskExternalDataBase&&); \
	NO_API UTriggerTaskExternalDataBase(const UTriggerTaskExternalDataBase&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerTaskExternalDataBase_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerTaskExternalDataBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerTaskExternalDataBase(UTriggerTaskExternalDataBase&&); \
	NO_API UTriggerTaskExternalDataBase(const UTriggerTaskExternalDataBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerTaskExternalDataBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerTaskExternalDataBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerTaskExternalDataBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerTaskExternalDataBase_h_24_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerTaskExternalDataBase_h_21_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerTaskExternalDataBase_h_24_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerTaskExternalDataBase_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerTaskExternalDataBase_h_24_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerTaskExternalDataBase_h_24_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerTaskExternalDataBase_h_24_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerTaskExternalDataBase_h_24_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerTaskExternalDataBase_h_24_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerTaskExternalDataBase_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerTaskExternalDataBase_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerTaskExternalDataBase_h_24_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerTaskExternalDataBase_h_24_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerTaskExternalDataBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerTaskExternalDataBase_h_24_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerTaskExternalDataBase_h_24_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerTaskExternalDataBase_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerTaskExternalDataBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTriggerTaskExternalDataBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerTaskExternalDataBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
