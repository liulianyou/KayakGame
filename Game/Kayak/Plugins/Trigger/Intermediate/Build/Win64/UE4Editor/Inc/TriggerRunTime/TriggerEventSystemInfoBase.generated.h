// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTagContainer;
struct FOperationInfoContainer;
#ifdef TRIGGERRUNTIME_TriggerEventSystemInfoBase_generated_h
#error "TriggerEventSystemInfoBase.generated.h already included, missing '#pragma once' in TriggerEventSystemInfoBase.h"
#endif
#define TRIGGERRUNTIME_TriggerEventSystemInfoBase_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEventSystemInfoBase_h_28_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEventSystemInfoBase_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_TriggerTags); \
	DECLARE_FUNCTION(execOnRep_OperationContainer); \
	DECLARE_FUNCTION(execGetTriggerTags); \
	DECLARE_FUNCTION(execGetOperationContainer);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEventSystemInfoBase_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_TriggerTags); \
	DECLARE_FUNCTION(execOnRep_OperationContainer); \
	DECLARE_FUNCTION(execGetTriggerTags); \
	DECLARE_FUNCTION(execGetOperationContainer);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEventSystemInfoBase_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATriggerEventSystemInfoBase(); \
	friend struct Z_Construct_UClass_ATriggerEventSystemInfoBase_Statics; \
public: \
	DECLARE_CLASS(ATriggerEventSystemInfoBase, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(ATriggerEventSystemInfoBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OperationContainer=NETFIELD_REP_START, \
		TriggerTags, \
		NETFIELD_REP_END=TriggerTags	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEventSystemInfoBase_h_28_INCLASS \
private: \
	static void StaticRegisterNativesATriggerEventSystemInfoBase(); \
	friend struct Z_Construct_UClass_ATriggerEventSystemInfoBase_Statics; \
public: \
	DECLARE_CLASS(ATriggerEventSystemInfoBase, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(ATriggerEventSystemInfoBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OperationContainer=NETFIELD_REP_START, \
		TriggerTags, \
		NETFIELD_REP_END=TriggerTags	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEventSystemInfoBase_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATriggerEventSystemInfoBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATriggerEventSystemInfoBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerEventSystemInfoBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerEventSystemInfoBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATriggerEventSystemInfoBase(ATriggerEventSystemInfoBase&&); \
	NO_API ATriggerEventSystemInfoBase(const ATriggerEventSystemInfoBase&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEventSystemInfoBase_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATriggerEventSystemInfoBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATriggerEventSystemInfoBase(ATriggerEventSystemInfoBase&&); \
	NO_API ATriggerEventSystemInfoBase(const ATriggerEventSystemInfoBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerEventSystemInfoBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerEventSystemInfoBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATriggerEventSystemInfoBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEventSystemInfoBase_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OperationContainer() { return STRUCT_OFFSET(ATriggerEventSystemInfoBase, OperationContainer); } \
	FORCEINLINE static uint32 __PPO__TriggerTags() { return STRUCT_OFFSET(ATriggerEventSystemInfoBase, TriggerTags); }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEventSystemInfoBase_h_25_PROLOG
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEventSystemInfoBase_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEventSystemInfoBase_h_28_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEventSystemInfoBase_h_28_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEventSystemInfoBase_h_28_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEventSystemInfoBase_h_28_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEventSystemInfoBase_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEventSystemInfoBase_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEventSystemInfoBase_h_28_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEventSystemInfoBase_h_28_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEventSystemInfoBase_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEventSystemInfoBase_h_28_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEventSystemInfoBase_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerEventSystemInfoBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class ATriggerEventSystemInfoBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerEventSystemInfoBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
