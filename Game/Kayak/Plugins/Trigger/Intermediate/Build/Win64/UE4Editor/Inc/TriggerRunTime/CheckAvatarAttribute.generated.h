// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UAvatarAccessRuleBase;
#ifdef TRIGGERRUNTIME_CheckAvatarAttribute_generated_h
#error "CheckAvatarAttribute.generated.h already included, missing '#pragma once' in CheckAvatarAttribute.h"
#endif
#define TRIGGERRUNTIME_CheckAvatarAttribute_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_CheckAvatarAttribute_h_20_DELEGATE \
struct _Script_TriggerRunTime_eventAvatarsChangedEvent_Parms \
{ \
	TArray<UObject*> Avatars; \
	bool bIsAdded; \
}; \
static inline void FAvatarsChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& AvatarsChangedEvent, TArray<UObject*> const& Avatars, bool bIsAdded) \
{ \
	_Script_TriggerRunTime_eventAvatarsChangedEvent_Parms Parms; \
	Parms.Avatars=Avatars; \
	Parms.bIsAdded=bIsAdded ? true : false; \
	AvatarsChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_CheckAvatarAttribute_h_26_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_CheckAvatarAttribute_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAvatars); \
	DECLARE_FUNCTION(execGetAvatorAccessRule);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_CheckAvatarAttribute_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAvatars); \
	DECLARE_FUNCTION(execGetAvatorAccessRule);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_CheckAvatarAttribute_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCheckAvatarAttribute(); \
	friend struct Z_Construct_UClass_UCheckAvatarAttribute_Statics; \
public: \
	DECLARE_CLASS(UCheckAvatarAttribute, UEvaluatorCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UCheckAvatarAttribute)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_CheckAvatarAttribute_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUCheckAvatarAttribute(); \
	friend struct Z_Construct_UClass_UCheckAvatarAttribute_Statics; \
public: \
	DECLARE_CLASS(UCheckAvatarAttribute, UEvaluatorCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UCheckAvatarAttribute)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_CheckAvatarAttribute_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCheckAvatarAttribute(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCheckAvatarAttribute) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCheckAvatarAttribute); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheckAvatarAttribute); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCheckAvatarAttribute(UCheckAvatarAttribute&&); \
	NO_API UCheckAvatarAttribute(const UCheckAvatarAttribute&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_CheckAvatarAttribute_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCheckAvatarAttribute(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCheckAvatarAttribute(UCheckAvatarAttribute&&); \
	NO_API UCheckAvatarAttribute(const UCheckAvatarAttribute&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCheckAvatarAttribute); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheckAvatarAttribute); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCheckAvatarAttribute)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_CheckAvatarAttribute_h_26_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_CheckAvatarAttribute_h_23_PROLOG
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_CheckAvatarAttribute_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_CheckAvatarAttribute_h_26_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_CheckAvatarAttribute_h_26_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_CheckAvatarAttribute_h_26_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_CheckAvatarAttribute_h_26_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_CheckAvatarAttribute_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_CheckAvatarAttribute_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_CheckAvatarAttribute_h_26_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_CheckAvatarAttribute_h_26_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_CheckAvatarAttribute_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_CheckAvatarAttribute_h_26_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_CheckAvatarAttribute_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CheckAvatarAttribute."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UCheckAvatarAttribute>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_CheckAvatarAttribute_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
