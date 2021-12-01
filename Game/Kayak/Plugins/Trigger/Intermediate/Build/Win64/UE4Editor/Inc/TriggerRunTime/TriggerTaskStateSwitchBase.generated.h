// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTriggerStyleBase;
class UEvaluatorCondition;
class UEvaluatorBase;
class UTriggerTaskBase;
#ifdef TRIGGERRUNTIME_TriggerTaskStateSwitchBase_generated_h
#error "TriggerTaskStateSwitchBase.generated.h already included, missing '#pragma once' in TriggerTaskStateSwitchBase.h"
#endif
#define TRIGGERRUNTIME_TriggerTaskStateSwitchBase_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStateSwitch_TriggerTaskStateSwitchBase_h_20_DELEGATE \
static inline void FTriggerTaskStateSwitchEvent_DelegateWrapper(const FMulticastScriptDelegate& TriggerTaskStateSwitchEvent) \
{ \
	TriggerTaskStateSwitchEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStateSwitch_TriggerTaskStateSwitchBase_h_25_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStateSwitch_TriggerTaskStateSwitchBase_h_25_RPC_WRAPPERS \
	virtual void MarkEvaluateable_Implementation(); \
	virtual void SwitchState_Implementation(); \
	virtual void Reset_Implementation(); \
	virtual void AddNewConditionAndStyle_Implementation(UEvaluatorBase* Condition, UTriggerStyleBase* Style, bool CondtionAndStyleMapped); \
 \
	DECLARE_FUNCTION(execEvaluator); \
	DECLARE_FUNCTION(execMarkEvaluateable); \
	DECLARE_FUNCTION(execSwitchState); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execGetPassedStyles); \
	DECLARE_FUNCTION(execGetAllEvaluatorConditions); \
	DECLARE_FUNCTION(execGetAllStyles); \
	DECLARE_FUNCTION(execGetAllConditions); \
	DECLARE_FUNCTION(execGetPassedCondition); \
	DECLARE_FUNCTION(execAddNewConditionAndStyle); \
	DECLARE_FUNCTION(execIsSwitchOn); \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execEndEvaluator); \
	DECLARE_FUNCTION(execStartEvaluator); \
	DECLARE_FUNCTION(execInitialize);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStateSwitch_TriggerTaskStateSwitchBase_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MarkEvaluateable_Implementation(); \
	virtual void SwitchState_Implementation(); \
	virtual void Reset_Implementation(); \
	virtual void AddNewConditionAndStyle_Implementation(UEvaluatorBase* Condition, UTriggerStyleBase* Style, bool CondtionAndStyleMapped); \
 \
	DECLARE_FUNCTION(execEvaluator); \
	DECLARE_FUNCTION(execMarkEvaluateable); \
	DECLARE_FUNCTION(execSwitchState); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execGetPassedStyles); \
	DECLARE_FUNCTION(execGetAllEvaluatorConditions); \
	DECLARE_FUNCTION(execGetAllStyles); \
	DECLARE_FUNCTION(execGetAllConditions); \
	DECLARE_FUNCTION(execGetPassedCondition); \
	DECLARE_FUNCTION(execAddNewConditionAndStyle); \
	DECLARE_FUNCTION(execIsSwitchOn); \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execEndEvaluator); \
	DECLARE_FUNCTION(execStartEvaluator); \
	DECLARE_FUNCTION(execInitialize);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStateSwitch_TriggerTaskStateSwitchBase_h_25_EVENT_PARMS \
	struct TriggerTaskStateSwitchBase_eventAddNewConditionAndStyle_Parms \
	{ \
		UEvaluatorBase* Condition; \
		UTriggerStyleBase* Style; \
		bool CondtionAndStyleMapped; \
	}; \
	struct TriggerTaskStateSwitchBase_eventOnInitialzie_Parms \
	{ \
		UTriggerTaskBase* Owner; \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStateSwitch_TriggerTaskStateSwitchBase_h_25_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStateSwitch_TriggerTaskStateSwitchBase_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerTaskStateSwitchBase(); \
	friend struct Z_Construct_UClass_UTriggerTaskStateSwitchBase_Statics; \
public: \
	DECLARE_CLASS(UTriggerTaskStateSwitchBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerTaskStateSwitchBase) \
	DECLARE_WITHIN(UTriggerTaskBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStateSwitch_TriggerTaskStateSwitchBase_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUTriggerTaskStateSwitchBase(); \
	friend struct Z_Construct_UClass_UTriggerTaskStateSwitchBase_Statics; \
public: \
	DECLARE_CLASS(UTriggerTaskStateSwitchBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerTaskStateSwitchBase) \
	DECLARE_WITHIN(UTriggerTaskBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStateSwitch_TriggerTaskStateSwitchBase_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerTaskStateSwitchBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerTaskStateSwitchBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerTaskStateSwitchBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerTaskStateSwitchBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerTaskStateSwitchBase(UTriggerTaskStateSwitchBase&&); \
	NO_API UTriggerTaskStateSwitchBase(const UTriggerTaskStateSwitchBase&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStateSwitch_TriggerTaskStateSwitchBase_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerTaskStateSwitchBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerTaskStateSwitchBase(UTriggerTaskStateSwitchBase&&); \
	NO_API UTriggerTaskStateSwitchBase(const UTriggerTaskStateSwitchBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerTaskStateSwitchBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerTaskStateSwitchBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerTaskStateSwitchBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStateSwitch_TriggerTaskStateSwitchBase_h_25_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStateSwitch_TriggerTaskStateSwitchBase_h_22_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStateSwitch_TriggerTaskStateSwitchBase_h_25_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStateSwitch_TriggerTaskStateSwitchBase_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStateSwitch_TriggerTaskStateSwitchBase_h_25_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStateSwitch_TriggerTaskStateSwitchBase_h_25_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStateSwitch_TriggerTaskStateSwitchBase_h_25_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStateSwitch_TriggerTaskStateSwitchBase_h_25_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStateSwitch_TriggerTaskStateSwitchBase_h_25_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStateSwitch_TriggerTaskStateSwitchBase_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStateSwitch_TriggerTaskStateSwitchBase_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStateSwitch_TriggerTaskStateSwitchBase_h_25_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStateSwitch_TriggerTaskStateSwitchBase_h_25_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStateSwitch_TriggerTaskStateSwitchBase_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStateSwitch_TriggerTaskStateSwitchBase_h_25_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStateSwitch_TriggerTaskStateSwitchBase_h_25_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStateSwitch_TriggerTaskStateSwitchBase_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerTaskStateSwitchBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTriggerTaskStateSwitchBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerTaskStateSwitch_TriggerTaskStateSwitchBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
