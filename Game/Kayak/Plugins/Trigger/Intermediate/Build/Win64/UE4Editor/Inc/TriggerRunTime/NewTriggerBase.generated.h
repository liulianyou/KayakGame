// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTriggerTaskBase;
class UTriggerTaskComponentBase;
class UTriggerManager;
class ULevel;
class ITriggerInterface;
struct FGuid;
struct FVector;
#ifdef TRIGGERRUNTIME_NewTriggerBase_generated_h
#error "NewTriggerBase.generated.h already included, missing '#pragma once' in NewTriggerBase.h"
#endif
#define TRIGGERRUNTIME_NewTriggerBase_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_NewTriggerBase_h_16_DELEGATE \
struct _Script_TriggerRunTime_eventTaskRunningStateSignature_Parms \
{ \
	UTriggerTaskBase* Target; \
}; \
static inline void FTaskRunningStateSignature_DelegateWrapper(const FMulticastScriptDelegate& TaskRunningStateSignature, UTriggerTaskBase* Target) \
{ \
	_Script_TriggerRunTime_eventTaskRunningStateSignature_Parms Parms; \
	Parms.Target=Target; \
	TaskRunningStateSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_NewTriggerBase_h_26_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_NewTriggerBase_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsAllTaskInThisTriggerFinished); \
	DECLARE_FUNCTION(execHasBeenToggled); \
	DECLARE_FUNCTION(execCanRepeat); \
	DECLARE_FUNCTION(execGetTriggerTaskComponent); \
	DECLARE_FUNCTION(execGetTriggerManager); \
	DECLARE_FUNCTION(execTaskRunStatusCheck); \
	DECLARE_FUNCTION(execCanbeToggled); \
	DECLARE_FUNCTION(execDuplicateTrigger); \
	DECLARE_FUNCTION(execRemoveTriggerTaskComponent); \
	DECLARE_FUNCTION(execAddTriggerTaskComponent); \
	DECLARE_FUNCTION(execGetTriggerTaskComponents); \
	DECLARE_FUNCTION(execGetUniqueRuntimeID); \
	DECLARE_FUNCTION(execGetBoxBounds);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_NewTriggerBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsAllTaskInThisTriggerFinished); \
	DECLARE_FUNCTION(execHasBeenToggled); \
	DECLARE_FUNCTION(execCanRepeat); \
	DECLARE_FUNCTION(execGetTriggerTaskComponent); \
	DECLARE_FUNCTION(execGetTriggerManager); \
	DECLARE_FUNCTION(execTaskRunStatusCheck); \
	DECLARE_FUNCTION(execCanbeToggled); \
	DECLARE_FUNCTION(execDuplicateTrigger); \
	DECLARE_FUNCTION(execRemoveTriggerTaskComponent); \
	DECLARE_FUNCTION(execAddTriggerTaskComponent); \
	DECLARE_FUNCTION(execGetTriggerTaskComponents); \
	DECLARE_FUNCTION(execGetUniqueRuntimeID); \
	DECLARE_FUNCTION(execGetBoxBounds);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_NewTriggerBase_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANewTriggerBase(); \
	friend struct Z_Construct_UClass_ANewTriggerBase_Statics; \
public: \
	DECLARE_CLASS(ANewTriggerBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(ANewTriggerBase) \
	virtual UObject* _getUObject() const override { return const_cast<ANewTriggerBase*>(this); }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_NewTriggerBase_h_26_INCLASS \
private: \
	static void StaticRegisterNativesANewTriggerBase(); \
	friend struct Z_Construct_UClass_ANewTriggerBase_Statics; \
public: \
	DECLARE_CLASS(ANewTriggerBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(ANewTriggerBase) \
	virtual UObject* _getUObject() const override { return const_cast<ANewTriggerBase*>(this); }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_NewTriggerBase_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANewTriggerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANewTriggerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANewTriggerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANewTriggerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANewTriggerBase(ANewTriggerBase&&); \
	NO_API ANewTriggerBase(const ANewTriggerBase&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_NewTriggerBase_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANewTriggerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANewTriggerBase(ANewTriggerBase&&); \
	NO_API ANewTriggerBase(const ANewTriggerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANewTriggerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANewTriggerBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANewTriggerBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_NewTriggerBase_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RegistedStateEventTasks() { return STRUCT_OFFSET(ANewTriggerBase, RegistedStateEventTasks); }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_NewTriggerBase_h_23_PROLOG
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_NewTriggerBase_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_NewTriggerBase_h_26_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_NewTriggerBase_h_26_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_NewTriggerBase_h_26_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_NewTriggerBase_h_26_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_NewTriggerBase_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_NewTriggerBase_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_NewTriggerBase_h_26_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_NewTriggerBase_h_26_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_NewTriggerBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_NewTriggerBase_h_26_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_NewTriggerBase_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NewTriggerBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class ANewTriggerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_NewTriggerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
