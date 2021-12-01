// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UCheckAvatarAttribute;
#ifdef TRIGGERRUNTIME_AvatarInspectedDataBase_generated_h
#error "AvatarInspectedDataBase.generated.h already included, missing '#pragma once' in AvatarInspectedDataBase.h"
#endif
#define TRIGGERRUNTIME_AvatarInspectedDataBase_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarData_AvatarInspectedDataBase_h_26_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarData_AvatarInspectedDataBase_h_26_RPC_WRAPPERS \
	virtual bool IsDataExceedExpectation_Implementation(); \
 \
	DECLARE_FUNCTION(execOnAvatarChanged); \
	DECLARE_FUNCTION(execUnRegisterEvents); \
	DECLARE_FUNCTION(execRegisterEvents); \
	DECLARE_FUNCTION(execNotifyEvalutorContentChanged); \
	DECLARE_FUNCTION(execGetAllAvatars); \
	DECLARE_FUNCTION(execGetConditionOwner); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execIsDataExceedExpectation);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarData_AvatarInspectedDataBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsDataExceedExpectation_Implementation(); \
 \
	DECLARE_FUNCTION(execOnAvatarChanged); \
	DECLARE_FUNCTION(execUnRegisterEvents); \
	DECLARE_FUNCTION(execRegisterEvents); \
	DECLARE_FUNCTION(execNotifyEvalutorContentChanged); \
	DECLARE_FUNCTION(execGetAllAvatars); \
	DECLARE_FUNCTION(execGetConditionOwner); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execIsDataExceedExpectation);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarData_AvatarInspectedDataBase_h_26_EVENT_PARMS \
	struct AvatarInspectedDataBase_eventBP_OnUnRegisterEvents_Parms \
	{ \
		TArray<UObject*> Avatars; \
	}; \
	struct AvatarInspectedDataBase_eventIsDataExceedExpectation_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AvatarInspectedDataBase_eventIsDataExceedExpectation_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct AvatarInspectedDataBase_eventOnGetAllAvatars_Parms \
	{ \
		TArray<UObject*> Avators; \
	}; \
	struct AvatarInspectedDataBase_eventOnInitialize_Parms \
	{ \
		UCheckAvatarAttribute* Owner; \
	}; \
	struct AvatarInspectedDataBase_eventOnRegisterEvents_Parms \
	{ \
		TArray<UObject*> Avatars; \
	}; \
	struct AvatarInspectedDataBase_eventOnUnRegisterEvents_Parms \
	{ \
		TArray<UObject*> Avatars; \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarData_AvatarInspectedDataBase_h_26_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarData_AvatarInspectedDataBase_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvatarInspectedDataBase(); \
	friend struct Z_Construct_UClass_UAvatarInspectedDataBase_Statics; \
public: \
	DECLARE_CLASS(UAvatarInspectedDataBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UAvatarInspectedDataBase) \
	DECLARE_WITHIN(UCheckAvatarAttribute)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarData_AvatarInspectedDataBase_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUAvatarInspectedDataBase(); \
	friend struct Z_Construct_UClass_UAvatarInspectedDataBase_Statics; \
public: \
	DECLARE_CLASS(UAvatarInspectedDataBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UAvatarInspectedDataBase) \
	DECLARE_WITHIN(UCheckAvatarAttribute)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarData_AvatarInspectedDataBase_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvatarInspectedDataBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvatarInspectedDataBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvatarInspectedDataBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvatarInspectedDataBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAvatarInspectedDataBase(UAvatarInspectedDataBase&&); \
	NO_API UAvatarInspectedDataBase(const UAvatarInspectedDataBase&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarData_AvatarInspectedDataBase_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvatarInspectedDataBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAvatarInspectedDataBase(UAvatarInspectedDataBase&&); \
	NO_API UAvatarInspectedDataBase(const UAvatarInspectedDataBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvatarInspectedDataBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvatarInspectedDataBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvatarInspectedDataBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarData_AvatarInspectedDataBase_h_26_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarData_AvatarInspectedDataBase_h_23_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarData_AvatarInspectedDataBase_h_26_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarData_AvatarInspectedDataBase_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarData_AvatarInspectedDataBase_h_26_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarData_AvatarInspectedDataBase_h_26_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarData_AvatarInspectedDataBase_h_26_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarData_AvatarInspectedDataBase_h_26_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarData_AvatarInspectedDataBase_h_26_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarData_AvatarInspectedDataBase_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarData_AvatarInspectedDataBase_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarData_AvatarInspectedDataBase_h_26_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarData_AvatarInspectedDataBase_h_26_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarData_AvatarInspectedDataBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarData_AvatarInspectedDataBase_h_26_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarData_AvatarInspectedDataBase_h_26_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarData_AvatarInspectedDataBase_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AvatarInspectedDataBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UAvatarInspectedDataBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarData_AvatarInspectedDataBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
