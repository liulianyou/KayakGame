// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef TRIGGERRUNTIME_ReplicateTypeBase_generated_h
#error "ReplicateTypeBase.generated.h already included, missing '#pragma once' in ReplicateTypeBase.h"
#endif
#define TRIGGERRUNTIME_ReplicateTypeBase_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ReplicateType_ReplicateTypeBase_h_16_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ReplicateType_ReplicateTypeBase_h_16_RPC_WRAPPERS \
	virtual bool CanReplicate_Implementation(); \
 \
	DECLARE_FUNCTION(execGetObjectOwner); \
	DECLARE_FUNCTION(execCanReplicate);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ReplicateType_ReplicateTypeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CanReplicate_Implementation(); \
 \
	DECLARE_FUNCTION(execGetObjectOwner); \
	DECLARE_FUNCTION(execCanReplicate);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ReplicateType_ReplicateTypeBase_h_16_EVENT_PARMS \
	struct ReplicateTypeBase_eventBP_InitilalizeByTriggerTask_Parms \
	{ \
		UObject* Task; \
	}; \
	struct ReplicateTypeBase_eventCanReplicate_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ReplicateTypeBase_eventCanReplicate_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ReplicateType_ReplicateTypeBase_h_16_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ReplicateType_ReplicateTypeBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplicateTypeBase(); \
	friend struct Z_Construct_UClass_UReplicateTypeBase_Statics; \
public: \
	DECLARE_CLASS(UReplicateTypeBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UReplicateTypeBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ReplicateType_ReplicateTypeBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUReplicateTypeBase(); \
	friend struct Z_Construct_UClass_UReplicateTypeBase_Statics; \
public: \
	DECLARE_CLASS(UReplicateTypeBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UReplicateTypeBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ReplicateType_ReplicateTypeBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReplicateTypeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReplicateTypeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReplicateTypeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicateTypeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReplicateTypeBase(UReplicateTypeBase&&); \
	NO_API UReplicateTypeBase(const UReplicateTypeBase&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ReplicateType_ReplicateTypeBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReplicateTypeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReplicateTypeBase(UReplicateTypeBase&&); \
	NO_API UReplicateTypeBase(const UReplicateTypeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReplicateTypeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicateTypeBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReplicateTypeBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ReplicateType_ReplicateTypeBase_h_16_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ReplicateType_ReplicateTypeBase_h_13_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ReplicateType_ReplicateTypeBase_h_16_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ReplicateType_ReplicateTypeBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ReplicateType_ReplicateTypeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ReplicateType_ReplicateTypeBase_h_16_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ReplicateType_ReplicateTypeBase_h_16_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ReplicateType_ReplicateTypeBase_h_16_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ReplicateType_ReplicateTypeBase_h_16_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ReplicateType_ReplicateTypeBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ReplicateType_ReplicateTypeBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ReplicateType_ReplicateTypeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ReplicateType_ReplicateTypeBase_h_16_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ReplicateType_ReplicateTypeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ReplicateType_ReplicateTypeBase_h_16_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ReplicateType_ReplicateTypeBase_h_16_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ReplicateType_ReplicateTypeBase_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ReplicateTypeBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UReplicateTypeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ReplicateType_ReplicateTypeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
