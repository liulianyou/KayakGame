// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTriggerTaskComponentBase;
struct FGuid;
class UObject;
#ifdef TRIGGERRUNTIME_TriggerInterfaceSupportBase_generated_h
#error "TriggerInterfaceSupportBase.generated.h already included, missing '#pragma once' in TriggerInterfaceSupportBase.h"
#endif
#define TRIGGERRUNTIME_TriggerInterfaceSupportBase_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerInterfaceSupport_TriggerInterfaceSupportBase_h_21_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerInterfaceSupport_TriggerInterfaceSupportBase_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanbeToggled); \
	DECLARE_FUNCTION(execGetUniqueRuntimeID); \
	DECLARE_FUNCTION(execAddTriggerTaskComponent); \
	DECLARE_FUNCTION(execRemoveTriggerTaskComponent); \
	DECLARE_FUNCTION(execGetTriggerTaskComponents); \
	DECLARE_FUNCTION(execGetOwnerObject); \
	DECLARE_FUNCTION(execInitialize);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerInterfaceSupport_TriggerInterfaceSupportBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanbeToggled); \
	DECLARE_FUNCTION(execGetUniqueRuntimeID); \
	DECLARE_FUNCTION(execAddTriggerTaskComponent); \
	DECLARE_FUNCTION(execRemoveTriggerTaskComponent); \
	DECLARE_FUNCTION(execGetTriggerTaskComponents); \
	DECLARE_FUNCTION(execGetOwnerObject); \
	DECLARE_FUNCTION(execInitialize);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerInterfaceSupport_TriggerInterfaceSupportBase_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerInterfaceSupportBase(); \
	friend struct Z_Construct_UClass_UTriggerInterfaceSupportBase_Statics; \
public: \
	DECLARE_CLASS(UTriggerInterfaceSupportBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerInterfaceSupportBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerInterfaceSupport_TriggerInterfaceSupportBase_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUTriggerInterfaceSupportBase(); \
	friend struct Z_Construct_UClass_UTriggerInterfaceSupportBase_Statics; \
public: \
	DECLARE_CLASS(UTriggerInterfaceSupportBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerInterfaceSupportBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerInterfaceSupport_TriggerInterfaceSupportBase_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerInterfaceSupportBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerInterfaceSupportBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerInterfaceSupportBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerInterfaceSupportBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerInterfaceSupportBase(UTriggerInterfaceSupportBase&&); \
	NO_API UTriggerInterfaceSupportBase(const UTriggerInterfaceSupportBase&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerInterfaceSupport_TriggerInterfaceSupportBase_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerInterfaceSupportBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerInterfaceSupportBase(UTriggerInterfaceSupportBase&&); \
	NO_API UTriggerInterfaceSupportBase(const UTriggerInterfaceSupportBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerInterfaceSupportBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerInterfaceSupportBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerInterfaceSupportBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerInterfaceSupport_TriggerInterfaceSupportBase_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Owner() { return STRUCT_OFFSET(UTriggerInterfaceSupportBase, Owner); }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerInterfaceSupport_TriggerInterfaceSupportBase_h_18_PROLOG
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerInterfaceSupport_TriggerInterfaceSupportBase_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerInterfaceSupport_TriggerInterfaceSupportBase_h_21_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerInterfaceSupport_TriggerInterfaceSupportBase_h_21_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerInterfaceSupport_TriggerInterfaceSupportBase_h_21_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerInterfaceSupport_TriggerInterfaceSupportBase_h_21_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerInterfaceSupport_TriggerInterfaceSupportBase_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerInterfaceSupport_TriggerInterfaceSupportBase_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerInterfaceSupport_TriggerInterfaceSupportBase_h_21_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerInterfaceSupport_TriggerInterfaceSupportBase_h_21_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerInterfaceSupport_TriggerInterfaceSupportBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerInterfaceSupport_TriggerInterfaceSupportBase_h_21_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerInterfaceSupport_TriggerInterfaceSupportBase_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerInterfaceSupportBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTriggerInterfaceSupportBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerInterfaceSupport_TriggerInterfaceSupportBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
