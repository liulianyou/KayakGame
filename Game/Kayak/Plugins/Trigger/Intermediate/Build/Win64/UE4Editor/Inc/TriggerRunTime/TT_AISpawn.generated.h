// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FCurrentRoundSpawnInfor;
class UAICreatorBase;
struct FSpawnRuleData;
#ifdef TRIGGERRUNTIME_TT_AISpawn_generated_h
#error "TT_AISpawn.generated.h already included, missing '#pragma once' in TT_AISpawn.h"
#endif
#define TRIGGERRUNTIME_TT_AISpawn_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_TT_AISpawn_h_144_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FCurrentRoundSpawnInfor>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_TT_AISpawn_h_133_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpawnRuleData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FSpawnRuleData>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_TT_AISpawn_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAICategory_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FAICategory>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_TT_AISpawn_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPawnInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FPawnInfo>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_TT_AISpawn_h_175_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_TT_AISpawn_h_175_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnActorDestoryCallback); \
	DECLARE_FUNCTION(execGetCurrentRoundDeadAI); \
	DECLARE_FUNCTION(execGetCurrentRoundInfo); \
	DECLARE_FUNCTION(execGetAICreator); \
	DECLARE_FUNCTION(execStartNewAISpawnRound); \
	DECLARE_FUNCTION(execGetNumberOfPendingSpawnedAI); \
	DECLARE_FUNCTION(execAIKilledInOneRound); \
	DECLARE_FUNCTION(execGetTotalNPCID); \
	DECLARE_FUNCTION(execGetConstSpawnData); \
	DECLARE_FUNCTION(execGetTotalDeadAI); \
	DECLARE_FUNCTION(execGetCurrentRound); \
	DECLARE_FUNCTION(execGetTotalRound);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_TT_AISpawn_h_175_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnActorDestoryCallback); \
	DECLARE_FUNCTION(execGetCurrentRoundDeadAI); \
	DECLARE_FUNCTION(execGetCurrentRoundInfo); \
	DECLARE_FUNCTION(execGetAICreator); \
	DECLARE_FUNCTION(execStartNewAISpawnRound); \
	DECLARE_FUNCTION(execGetNumberOfPendingSpawnedAI); \
	DECLARE_FUNCTION(execAIKilledInOneRound); \
	DECLARE_FUNCTION(execGetTotalNPCID); \
	DECLARE_FUNCTION(execGetConstSpawnData); \
	DECLARE_FUNCTION(execGetTotalDeadAI); \
	DECLARE_FUNCTION(execGetCurrentRound); \
	DECLARE_FUNCTION(execGetTotalRound);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_TT_AISpawn_h_175_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTT_AISpawn(); \
	friend struct Z_Construct_UClass_UTT_AISpawn_Statics; \
public: \
	DECLARE_CLASS(UTT_AISpawn, UTriggerTaskBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTT_AISpawn) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TotalDeadAI=NETFIELD_REP_START, \
		CurrentRound, \
		NETFIELD_REP_END=CurrentRound	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_TT_AISpawn_h_175_INCLASS \
private: \
	static void StaticRegisterNativesUTT_AISpawn(); \
	friend struct Z_Construct_UClass_UTT_AISpawn_Statics; \
public: \
	DECLARE_CLASS(UTT_AISpawn, UTriggerTaskBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTT_AISpawn) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TotalDeadAI=NETFIELD_REP_START, \
		CurrentRound, \
		NETFIELD_REP_END=CurrentRound	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_TT_AISpawn_h_175_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTT_AISpawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTT_AISpawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTT_AISpawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTT_AISpawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTT_AISpawn(UTT_AISpawn&&); \
	NO_API UTT_AISpawn(const UTT_AISpawn&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_TT_AISpawn_h_175_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTT_AISpawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTT_AISpawn(UTT_AISpawn&&); \
	NO_API UTT_AISpawn(const UTT_AISpawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTT_AISpawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTT_AISpawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTT_AISpawn)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_TT_AISpawn_h_175_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TotalDeadAI() { return STRUCT_OFFSET(UTT_AISpawn, TotalDeadAI); } \
	FORCEINLINE static uint32 __PPO__CurrentRound() { return STRUCT_OFFSET(UTT_AISpawn, CurrentRound); } \
	FORCEINLINE static uint32 __PPO__RoundInfo() { return STRUCT_OFFSET(UTT_AISpawn, RoundInfo); }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_TT_AISpawn_h_172_PROLOG
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_TT_AISpawn_h_175_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_TT_AISpawn_h_175_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_TT_AISpawn_h_175_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_TT_AISpawn_h_175_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_TT_AISpawn_h_175_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_TT_AISpawn_h_175_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_TT_AISpawn_h_175_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_TT_AISpawn_h_175_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_TT_AISpawn_h_175_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_TT_AISpawn_h_175_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_TT_AISpawn_h_175_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_TT_AISpawn_h_175_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TT_AISpawn."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTT_AISpawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_TT_AISpawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
