// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UAbilitySystemComponent;
class AActor;
#ifdef TRIGGERRUNTIME_TT_GamePlayAbilityBase_generated_h
#error "TT_GamePlayAbilityBase.generated.h already included, missing '#pragma once' in TT_GamePlayAbilityBase.h"
#endif
#define TRIGGERRUNTIME_TT_GamePlayAbilityBase_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_GamePlayAbilityBase_h_28_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_GamePlayAbilityBase_h_28_RPC_WRAPPERS \
	virtual AActor* GetApplayedActor_Implementation(UObject* Target); \
 \
	DECLARE_FUNCTION(execGetGameplayAbilitySystem); \
	DECLARE_FUNCTION(execGetApplayedActor);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_GamePlayAbilityBase_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual AActor* GetApplayedActor_Implementation(UObject* Target); \
 \
	DECLARE_FUNCTION(execGetGameplayAbilitySystem); \
	DECLARE_FUNCTION(execGetApplayedActor);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_GamePlayAbilityBase_h_28_EVENT_PARMS \
	struct TT_GamePlayAbilityBase_eventGetApplayedActor_Parms \
	{ \
		UObject* Target; \
		AActor* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TT_GamePlayAbilityBase_eventGetApplayedActor_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_GamePlayAbilityBase_h_28_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_GamePlayAbilityBase_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTT_GamePlayAbilityBase(); \
	friend struct Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics; \
public: \
	DECLARE_CLASS(UTT_GamePlayAbilityBase, UTriggerTaskBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTT_GamePlayAbilityBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_GamePlayAbilityBase_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUTT_GamePlayAbilityBase(); \
	friend struct Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics; \
public: \
	DECLARE_CLASS(UTT_GamePlayAbilityBase, UTriggerTaskBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTT_GamePlayAbilityBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_GamePlayAbilityBase_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTT_GamePlayAbilityBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTT_GamePlayAbilityBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTT_GamePlayAbilityBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTT_GamePlayAbilityBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTT_GamePlayAbilityBase(UTT_GamePlayAbilityBase&&); \
	NO_API UTT_GamePlayAbilityBase(const UTT_GamePlayAbilityBase&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_GamePlayAbilityBase_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTT_GamePlayAbilityBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTT_GamePlayAbilityBase(UTT_GamePlayAbilityBase&&); \
	NO_API UTT_GamePlayAbilityBase(const UTT_GamePlayAbilityBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTT_GamePlayAbilityBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTT_GamePlayAbilityBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTT_GamePlayAbilityBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_GamePlayAbilityBase_h_28_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_GamePlayAbilityBase_h_25_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_GamePlayAbilityBase_h_28_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_GamePlayAbilityBase_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_GamePlayAbilityBase_h_28_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_GamePlayAbilityBase_h_28_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_GamePlayAbilityBase_h_28_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_GamePlayAbilityBase_h_28_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_GamePlayAbilityBase_h_28_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_GamePlayAbilityBase_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_GamePlayAbilityBase_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_GamePlayAbilityBase_h_28_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_GamePlayAbilityBase_h_28_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_GamePlayAbilityBase_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_GamePlayAbilityBase_h_28_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_GamePlayAbilityBase_h_28_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_GamePlayAbilityBase_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TT_GamePlayAbilityBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTT_GamePlayAbilityBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_GamePlayAbilityBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
