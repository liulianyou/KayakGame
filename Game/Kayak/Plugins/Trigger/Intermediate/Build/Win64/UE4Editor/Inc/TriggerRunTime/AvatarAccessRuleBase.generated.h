// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef TRIGGERRUNTIME_AvatarAccessRuleBase_generated_h
#error "AvatarAccessRuleBase.generated.h already included, missing '#pragma once' in AvatarAccessRuleBase.h"
#endif
#define TRIGGERRUNTIME_AvatarAccessRuleBase_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarAccessRule_AvatarAccessRuleBase_h_20_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarAccessRule_AvatarAccessRuleBase_h_20_RPC_WRAPPERS \
	virtual void GetTargetAvatars_Implementation(TArray<UObject*>& Avatars) const; \
	virtual void Reset_Implementation(); \
 \
	DECLARE_FUNCTION(execNotifyOwnerNewAvatarRemoved); \
	DECLARE_FUNCTION(execNotifyOwnerNewAvatarAdded); \
	DECLARE_FUNCTION(execGetOwner); \
	DECLARE_FUNCTION(execGetTargetAvatars); \
	DECLARE_FUNCTION(execReset);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarAccessRule_AvatarAccessRuleBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GetTargetAvatars_Implementation(TArray<UObject*>& Avatars) const; \
	virtual void Reset_Implementation(); \
 \
	DECLARE_FUNCTION(execNotifyOwnerNewAvatarRemoved); \
	DECLARE_FUNCTION(execNotifyOwnerNewAvatarAdded); \
	DECLARE_FUNCTION(execGetOwner); \
	DECLARE_FUNCTION(execGetTargetAvatars); \
	DECLARE_FUNCTION(execReset);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarAccessRule_AvatarAccessRuleBase_h_20_EVENT_PARMS \
	struct AvatarAccessRuleBase_eventGetTargetAvatars_Parms \
	{ \
		TArray<UObject*> Avatars; \
	}; \
	struct AvatarAccessRuleBase_eventOnInitialize_Parms \
	{ \
		UObject* Owner; \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarAccessRule_AvatarAccessRuleBase_h_20_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarAccessRule_AvatarAccessRuleBase_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvatarAccessRuleBase(); \
	friend struct Z_Construct_UClass_UAvatarAccessRuleBase_Statics; \
public: \
	DECLARE_CLASS(UAvatarAccessRuleBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UAvatarAccessRuleBase) \
	DECLARE_WITHIN(UCheckAvatarAttribute)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarAccessRule_AvatarAccessRuleBase_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAvatarAccessRuleBase(); \
	friend struct Z_Construct_UClass_UAvatarAccessRuleBase_Statics; \
public: \
	DECLARE_CLASS(UAvatarAccessRuleBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UAvatarAccessRuleBase) \
	DECLARE_WITHIN(UCheckAvatarAttribute)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarAccessRule_AvatarAccessRuleBase_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvatarAccessRuleBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvatarAccessRuleBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvatarAccessRuleBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvatarAccessRuleBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAvatarAccessRuleBase(UAvatarAccessRuleBase&&); \
	NO_API UAvatarAccessRuleBase(const UAvatarAccessRuleBase&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarAccessRule_AvatarAccessRuleBase_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvatarAccessRuleBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAvatarAccessRuleBase(UAvatarAccessRuleBase&&); \
	NO_API UAvatarAccessRuleBase(const UAvatarAccessRuleBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvatarAccessRuleBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvatarAccessRuleBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvatarAccessRuleBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarAccessRule_AvatarAccessRuleBase_h_20_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarAccessRule_AvatarAccessRuleBase_h_17_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarAccessRule_AvatarAccessRuleBase_h_20_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarAccessRule_AvatarAccessRuleBase_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarAccessRule_AvatarAccessRuleBase_h_20_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarAccessRule_AvatarAccessRuleBase_h_20_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarAccessRule_AvatarAccessRuleBase_h_20_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarAccessRule_AvatarAccessRuleBase_h_20_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarAccessRule_AvatarAccessRuleBase_h_20_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarAccessRule_AvatarAccessRuleBase_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarAccessRule_AvatarAccessRuleBase_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarAccessRule_AvatarAccessRuleBase_h_20_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarAccessRule_AvatarAccessRuleBase_h_20_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarAccessRule_AvatarAccessRuleBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarAccessRule_AvatarAccessRuleBase_h_20_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarAccessRule_AvatarAccessRuleBase_h_20_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarAccessRule_AvatarAccessRuleBase_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AvatarAccessRuleBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UAvatarAccessRuleBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEvaluator_AvatarAttributes_AvatarAccessRule_AvatarAccessRuleBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
