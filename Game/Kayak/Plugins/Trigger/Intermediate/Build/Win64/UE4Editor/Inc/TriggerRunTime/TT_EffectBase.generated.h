// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UTriggerEffectDataBase;
#ifdef TRIGGERRUNTIME_TT_EffectBase_generated_h
#error "TT_EffectBase.generated.h already included, missing '#pragma once' in TT_EffectBase.h"
#endif
#define TRIGGERRUNTIME_TT_EffectBase_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TT_EffectBase_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEffectDataOperator_Statics; \
	TRIGGERRUNTIME_API static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FEffectDataOperator>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TT_EffectBase_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOpenEffectData_Statics; \
	TRIGGERRUNTIME_API static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FOpenEffectData>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TT_EffectBase_h_55_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TT_EffectBase_h_55_RPC_WRAPPERS \
	virtual void NetMuti_OpenEffect_Implementation(TArray<UObject*> const& Causers, int32 EffectDataIndex); \
	virtual void NetMuti_CloseEffect_Implementation(TArray<UObject*> const& Causers, int32 EffectDataIndex); \
 \
	DECLARE_FUNCTION(execRep_OnEffectOperators); \
	DECLARE_FUNCTION(execNetMuti_OpenEffect); \
	DECLARE_FUNCTION(execNetMuti_CloseEffect); \
	DECLARE_FUNCTION(execDataChanged); \
	DECLARE_FUNCTION(execOpenEffect); \
	DECLARE_FUNCTION(execCloseEffect); \
	DECLARE_FUNCTION(execCanOpenTargetEffectData); \
	DECLARE_FUNCTION(execIsEffectDataClosed); \
	DECLARE_FUNCTION(execGetEffectDataIndex); \
	DECLARE_FUNCTION(execGetEffectData); \
	DECLARE_FUNCTION(execGetEffectDatas);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TT_EffectBase_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void NetMuti_OpenEffect_Implementation(TArray<UObject*> const& Causers, int32 EffectDataIndex); \
	virtual void NetMuti_CloseEffect_Implementation(TArray<UObject*> const& Causers, int32 EffectDataIndex); \
 \
	DECLARE_FUNCTION(execRep_OnEffectOperators); \
	DECLARE_FUNCTION(execNetMuti_OpenEffect); \
	DECLARE_FUNCTION(execNetMuti_CloseEffect); \
	DECLARE_FUNCTION(execDataChanged); \
	DECLARE_FUNCTION(execOpenEffect); \
	DECLARE_FUNCTION(execCloseEffect); \
	DECLARE_FUNCTION(execCanOpenTargetEffectData); \
	DECLARE_FUNCTION(execIsEffectDataClosed); \
	DECLARE_FUNCTION(execGetEffectDataIndex); \
	DECLARE_FUNCTION(execGetEffectData); \
	DECLARE_FUNCTION(execGetEffectDatas);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TT_EffectBase_h_55_EVENT_PARMS \
	struct TT_EffectBase_eventNetMuti_CloseEffect_Parms \
	{ \
		TArray<UObject*> Causers; \
		int32 EffectDataIndex; \
	}; \
	struct TT_EffectBase_eventNetMuti_OpenEffect_Parms \
	{ \
		TArray<UObject*> Causers; \
		int32 EffectDataIndex; \
	}; \
	struct TT_EffectBase_eventOnDataChanged_Parms \
	{ \
		const UTriggerEffectDataBase* EffectData; \
		FName DataName; \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TT_EffectBase_h_55_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TT_EffectBase_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTT_EffectBase(); \
	friend struct Z_Construct_UClass_UTT_EffectBase_Statics; \
public: \
	DECLARE_CLASS(UTT_EffectBase, UTriggerTaskBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTT_EffectBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EffectDatas=NETFIELD_REP_START, \
		EffectOperators, \
		NETFIELD_REP_END=EffectOperators	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TT_EffectBase_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUTT_EffectBase(); \
	friend struct Z_Construct_UClass_UTT_EffectBase_Statics; \
public: \
	DECLARE_CLASS(UTT_EffectBase, UTriggerTaskBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTT_EffectBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EffectDatas=NETFIELD_REP_START, \
		EffectOperators, \
		NETFIELD_REP_END=EffectOperators	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TT_EffectBase_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTT_EffectBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTT_EffectBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTT_EffectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTT_EffectBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTT_EffectBase(UTT_EffectBase&&); \
	NO_API UTT_EffectBase(const UTT_EffectBase&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TT_EffectBase_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTT_EffectBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTT_EffectBase(UTT_EffectBase&&); \
	NO_API UTT_EffectBase(const UTT_EffectBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTT_EffectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTT_EffectBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTT_EffectBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TT_EffectBase_h_55_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EffectDatas() { return STRUCT_OFFSET(UTT_EffectBase, EffectDatas); } \
	FORCEINLINE static uint32 __PPO__SupportedDataTypes() { return STRUCT_OFFSET(UTT_EffectBase, SupportedDataTypes); } \
	FORCEINLINE static uint32 __PPO__EffectOperators() { return STRUCT_OFFSET(UTT_EffectBase, EffectOperators); }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TT_EffectBase_h_52_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TT_EffectBase_h_55_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TT_EffectBase_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TT_EffectBase_h_55_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TT_EffectBase_h_55_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TT_EffectBase_h_55_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TT_EffectBase_h_55_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TT_EffectBase_h_55_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TT_EffectBase_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TT_EffectBase_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TT_EffectBase_h_55_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TT_EffectBase_h_55_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TT_EffectBase_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TT_EffectBase_h_55_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TT_EffectBase_h_55_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TT_EffectBase_h_55_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TT_EffectBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTT_EffectBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TT_EffectBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
