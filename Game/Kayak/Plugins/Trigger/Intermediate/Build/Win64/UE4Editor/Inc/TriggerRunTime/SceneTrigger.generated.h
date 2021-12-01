// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
struct FVector;
#ifdef TRIGGERRUNTIME_SceneTrigger_generated_h
#error "SceneTrigger.generated.h already included, missing '#pragma once' in SceneTrigger.h"
#endif
#define TRIGGERRUNTIME_SceneTrigger_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerType_SceneTrigger_SceneTrigger_h_25_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerType_SceneTrigger_SceneTrigger_h_25_RPC_WRAPPERS \
	virtual void OnComponentEndOverlap_Implementation(AActor* OtherActor); \
	virtual void OnComponentHit_Implementation(AActor* OtherActors); \
	virtual void OnComponentBeginOverlap_Implementation(AActor* OtherActor); \
 \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnComponentHit); \
	DECLARE_FUNCTION(execOnComponentBeginOverlap); \
	DECLARE_FUNCTION(execComponentEndOverlap); \
	DECLARE_FUNCTION(execComponentBeginOverlap); \
	DECLARE_FUNCTION(execComponentHit);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerType_SceneTrigger_SceneTrigger_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnComponentEndOverlap_Implementation(AActor* OtherActor); \
	virtual void OnComponentHit_Implementation(AActor* OtherActors); \
	virtual void OnComponentBeginOverlap_Implementation(AActor* OtherActor); \
 \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnComponentHit); \
	DECLARE_FUNCTION(execOnComponentBeginOverlap); \
	DECLARE_FUNCTION(execComponentEndOverlap); \
	DECLARE_FUNCTION(execComponentBeginOverlap); \
	DECLARE_FUNCTION(execComponentHit);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerType_SceneTrigger_SceneTrigger_h_25_EVENT_PARMS \
	struct SceneTrigger_eventOnComponentBeginOverlap_Parms \
	{ \
		AActor* OtherActor; \
	}; \
	struct SceneTrigger_eventOnComponentEndOverlap_Parms \
	{ \
		AActor* OtherActor; \
	}; \
	struct SceneTrigger_eventOnComponentHit_Parms \
	{ \
		AActor* OtherActors; \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerType_SceneTrigger_SceneTrigger_h_25_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerType_SceneTrigger_SceneTrigger_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASceneTrigger(); \
	friend struct Z_Construct_UClass_ASceneTrigger_Statics; \
public: \
	DECLARE_CLASS(ASceneTrigger, ANewTriggerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(ASceneTrigger) \
	virtual UObject* _getUObject() const override { return const_cast<ASceneTrigger*>(this); }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerType_SceneTrigger_SceneTrigger_h_25_INCLASS \
private: \
	static void StaticRegisterNativesASceneTrigger(); \
	friend struct Z_Construct_UClass_ASceneTrigger_Statics; \
public: \
	DECLARE_CLASS(ASceneTrigger, ANewTriggerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(ASceneTrigger) \
	virtual UObject* _getUObject() const override { return const_cast<ASceneTrigger*>(this); }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerType_SceneTrigger_SceneTrigger_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASceneTrigger(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASceneTrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASceneTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASceneTrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASceneTrigger(ASceneTrigger&&); \
	NO_API ASceneTrigger(const ASceneTrigger&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerType_SceneTrigger_SceneTrigger_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASceneTrigger(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASceneTrigger(ASceneTrigger&&); \
	NO_API ASceneTrigger(const ASceneTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASceneTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASceneTrigger); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASceneTrigger)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerType_SceneTrigger_SceneTrigger_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComponent() { return STRUCT_OFFSET(ASceneTrigger, CollisionComponent); }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerType_SceneTrigger_SceneTrigger_h_22_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerType_SceneTrigger_SceneTrigger_h_25_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerType_SceneTrigger_SceneTrigger_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerType_SceneTrigger_SceneTrigger_h_25_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerType_SceneTrigger_SceneTrigger_h_25_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerType_SceneTrigger_SceneTrigger_h_25_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerType_SceneTrigger_SceneTrigger_h_25_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerType_SceneTrigger_SceneTrigger_h_25_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerType_SceneTrigger_SceneTrigger_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerType_SceneTrigger_SceneTrigger_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerType_SceneTrigger_SceneTrigger_h_25_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerType_SceneTrigger_SceneTrigger_h_25_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerType_SceneTrigger_SceneTrigger_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerType_SceneTrigger_SceneTrigger_h_25_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerType_SceneTrigger_SceneTrigger_h_25_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerType_SceneTrigger_SceneTrigger_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SceneTrigger."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class ASceneTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerType_SceneTrigger_SceneTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
