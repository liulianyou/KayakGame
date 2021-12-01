// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOperationInformationBase;
#ifdef TRIGGERRUNTIME_TT_DelayTime_generated_h
#error "TT_DelayTime.generated.h already included, missing '#pragma once' in TT_DelayTime.h"
#endif
#define TRIGGERRUNTIME_TT_DelayTime_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_DelayTime_TT_DelayTime_h_28_DELEGATE \
struct _Script_TriggerRunTime_eventTriggerTaskDelayTimeUpdate_Parms \
{ \
	float PassedTime; \
}; \
static inline void FTriggerTaskDelayTimeUpdate_DelegateWrapper(const FMulticastScriptDelegate& TriggerTaskDelayTimeUpdate, float PassedTime) \
{ \
	_Script_TriggerRunTime_eventTriggerTaskDelayTimeUpdate_Parms Parms; \
	Parms.PassedTime=PassedTime; \
	TriggerTaskDelayTimeUpdate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_DelayTime_TT_DelayTime_h_33_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_DelayTime_TT_DelayTime_h_33_RPC_WRAPPERS \
	virtual bool CanBeStopped_Implementation(UOperationInformationBase* Causer); \
 \
	DECLARE_FUNCTION(execCanBeStopped);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_DelayTime_TT_DelayTime_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CanBeStopped_Implementation(UOperationInformationBase* Causer); \
 \
	DECLARE_FUNCTION(execCanBeStopped);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_DelayTime_TT_DelayTime_h_33_EVENT_PARMS \
	struct TT_DelayTime_eventCanBeStopped_Parms \
	{ \
		UOperationInformationBase* Causer; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TT_DelayTime_eventCanBeStopped_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TT_DelayTime_eventOnDelayTimeUpdate_Parms \
	{ \
		float PassedTime; \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_DelayTime_TT_DelayTime_h_33_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_DelayTime_TT_DelayTime_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTT_DelayTime(); \
	friend struct Z_Construct_UClass_UTT_DelayTime_Statics; \
public: \
	DECLARE_CLASS(UTT_DelayTime, UTriggerTaskBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTT_DelayTime)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_DelayTime_TT_DelayTime_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUTT_DelayTime(); \
	friend struct Z_Construct_UClass_UTT_DelayTime_Statics; \
public: \
	DECLARE_CLASS(UTT_DelayTime, UTriggerTaskBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTT_DelayTime)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_DelayTime_TT_DelayTime_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTT_DelayTime(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTT_DelayTime) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTT_DelayTime); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTT_DelayTime); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTT_DelayTime(UTT_DelayTime&&); \
	NO_API UTT_DelayTime(const UTT_DelayTime&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_DelayTime_TT_DelayTime_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTT_DelayTime(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTT_DelayTime(UTT_DelayTime&&); \
	NO_API UTT_DelayTime(const UTT_DelayTime&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTT_DelayTime); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTT_DelayTime); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTT_DelayTime)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_DelayTime_TT_DelayTime_h_33_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_DelayTime_TT_DelayTime_h_30_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_DelayTime_TT_DelayTime_h_33_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_DelayTime_TT_DelayTime_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_DelayTime_TT_DelayTime_h_33_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_DelayTime_TT_DelayTime_h_33_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_DelayTime_TT_DelayTime_h_33_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_DelayTime_TT_DelayTime_h_33_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_DelayTime_TT_DelayTime_h_33_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_DelayTime_TT_DelayTime_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_DelayTime_TT_DelayTime_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_DelayTime_TT_DelayTime_h_33_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_DelayTime_TT_DelayTime_h_33_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_DelayTime_TT_DelayTime_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_DelayTime_TT_DelayTime_h_33_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_DelayTime_TT_DelayTime_h_33_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_DelayTime_TT_DelayTime_h_33_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TT_DelayTime."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTT_DelayTime>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_DelayTime_TT_DelayTime_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
