// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TRIGGERRUNTIME_RS_RepeatTaskAfterStateDelay_generated_h
#error "RS_RepeatTaskAfterStateDelay.generated.h already included, missing '#pragma once' in RS_RepeatTaskAfterStateDelay.h"
#endif
#define TRIGGERRUNTIME_RS_RepeatTaskAfterStateDelay_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStyle_RepeatStyle_RS_RepeatTaskAfterStateDelay_h_19_DELEGATE \
struct RS_RepeatTaskAfterStateDelay_eventOnDelayTimerEvent_Parms \
{ \
	float LeftTime; \
}; \
static inline void FOnDelayTimerEvent_DelegateWrapper(const FMulticastScriptDelegate& OnDelayTimerEvent, float LeftTime) \
{ \
	RS_RepeatTaskAfterStateDelay_eventOnDelayTimerEvent_Parms Parms; \
	Parms.LeftTime=LeftTime; \
	OnDelayTimerEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStyle_RepeatStyle_RS_RepeatTaskAfterStateDelay_h_17_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStyle_RepeatStyle_RS_RepeatTaskAfterStateDelay_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleDelayTime); \
	DECLARE_FUNCTION(execGetLeftTime);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStyle_RepeatStyle_RS_RepeatTaskAfterStateDelay_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleDelayTime); \
	DECLARE_FUNCTION(execGetLeftTime);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStyle_RepeatStyle_RS_RepeatTaskAfterStateDelay_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURS_RepeatTaskAfterStateDelay(); \
	friend struct Z_Construct_UClass_URS_RepeatTaskAfterStateDelay_Statics; \
public: \
	DECLARE_CLASS(URS_RepeatTaskAfterStateDelay, URS_RepeatTaskWhenReachTargetStateBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(URS_RepeatTaskAfterStateDelay)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStyle_RepeatStyle_RS_RepeatTaskAfterStateDelay_h_17_INCLASS \
private: \
	static void StaticRegisterNativesURS_RepeatTaskAfterStateDelay(); \
	friend struct Z_Construct_UClass_URS_RepeatTaskAfterStateDelay_Statics; \
public: \
	DECLARE_CLASS(URS_RepeatTaskAfterStateDelay, URS_RepeatTaskWhenReachTargetStateBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(URS_RepeatTaskAfterStateDelay)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStyle_RepeatStyle_RS_RepeatTaskAfterStateDelay_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URS_RepeatTaskAfterStateDelay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URS_RepeatTaskAfterStateDelay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URS_RepeatTaskAfterStateDelay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URS_RepeatTaskAfterStateDelay); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URS_RepeatTaskAfterStateDelay(URS_RepeatTaskAfterStateDelay&&); \
	NO_API URS_RepeatTaskAfterStateDelay(const URS_RepeatTaskAfterStateDelay&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStyle_RepeatStyle_RS_RepeatTaskAfterStateDelay_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URS_RepeatTaskAfterStateDelay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URS_RepeatTaskAfterStateDelay(URS_RepeatTaskAfterStateDelay&&); \
	NO_API URS_RepeatTaskAfterStateDelay(const URS_RepeatTaskAfterStateDelay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URS_RepeatTaskAfterStateDelay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URS_RepeatTaskAfterStateDelay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URS_RepeatTaskAfterStateDelay)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStyle_RepeatStyle_RS_RepeatTaskAfterStateDelay_h_17_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStyle_RepeatStyle_RS_RepeatTaskAfterStateDelay_h_14_PROLOG
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStyle_RepeatStyle_RS_RepeatTaskAfterStateDelay_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStyle_RepeatStyle_RS_RepeatTaskAfterStateDelay_h_17_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStyle_RepeatStyle_RS_RepeatTaskAfterStateDelay_h_17_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStyle_RepeatStyle_RS_RepeatTaskAfterStateDelay_h_17_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStyle_RepeatStyle_RS_RepeatTaskAfterStateDelay_h_17_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStyle_RepeatStyle_RS_RepeatTaskAfterStateDelay_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStyle_RepeatStyle_RS_RepeatTaskAfterStateDelay_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStyle_RepeatStyle_RS_RepeatTaskAfterStateDelay_h_17_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStyle_RepeatStyle_RS_RepeatTaskAfterStateDelay_h_17_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStyle_RepeatStyle_RS_RepeatTaskAfterStateDelay_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStyle_RepeatStyle_RS_RepeatTaskAfterStateDelay_h_17_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStyle_RepeatStyle_RS_RepeatTaskAfterStateDelay_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RS_RepeatTaskAfterStateDelay."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class URS_RepeatTaskAfterStateDelay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStyle_RepeatStyle_RS_RepeatTaskAfterStateDelay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
