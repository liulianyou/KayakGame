// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAISpawnDataBase;
class AAIController;
class APawn;
struct FAIInfo;
class UAICreatorBase;
class UTriggerTaskBase;
#ifdef TRIGGERRUNTIME_AISpawnDataBase_generated_h
#error "AISpawnDataBase.generated.h already included, missing '#pragma once' in AISpawnDataBase.h"
#endif
#define TRIGGERRUNTIME_AISpawnDataBase_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataBase_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAIInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FAIInfo>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataBase_h_125_DELEGATE \
struct _Script_TriggerRunTime_eventAISapwnFinishd_Parms \
{ \
	UAISpawnDataBase* SpawnData; \
}; \
static inline void FAISapwnFinishd_DelegateWrapper(const FMulticastScriptDelegate& AISapwnFinishd, UAISpawnDataBase* SpawnData) \
{ \
	_Script_TriggerRunTime_eventAISapwnFinishd_Parms Parms; \
	Parms.SpawnData=SpawnData; \
	AISapwnFinishd.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataBase_h_130_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataBase_h_130_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetALLNPCIDs); \
	DECLARE_FUNCTION(execSpawnAIPostProcess); \
	DECLARE_FUNCTION(execGetAIRemainedToSpawnInCurrentRound); \
	DECLARE_FUNCTION(execGetNumberOfTotalDeadAI); \
	DECLARE_FUNCTION(execGetNumberOfTotalSpawnedAI); \
	DECLARE_FUNCTION(execGetMaxRound); \
	DECLARE_FUNCTION(execGetCurrentRound); \
	DECLARE_FUNCTION(execGetCurrentVaildAIInfoToSpawn); \
	DECLARE_FUNCTION(execGetAICreator); \
	DECLARE_FUNCTION(execCreateNewAI); \
	DECLARE_FUNCTION(execInitData);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataBase_h_130_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetALLNPCIDs); \
	DECLARE_FUNCTION(execSpawnAIPostProcess); \
	DECLARE_FUNCTION(execGetAIRemainedToSpawnInCurrentRound); \
	DECLARE_FUNCTION(execGetNumberOfTotalDeadAI); \
	DECLARE_FUNCTION(execGetNumberOfTotalSpawnedAI); \
	DECLARE_FUNCTION(execGetMaxRound); \
	DECLARE_FUNCTION(execGetCurrentRound); \
	DECLARE_FUNCTION(execGetCurrentVaildAIInfoToSpawn); \
	DECLARE_FUNCTION(execGetAICreator); \
	DECLARE_FUNCTION(execCreateNewAI); \
	DECLARE_FUNCTION(execInitData);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataBase_h_130_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAISpawnDataBase(); \
	friend struct Z_Construct_UClass_UAISpawnDataBase_Statics; \
public: \
	DECLARE_CLASS(UAISpawnDataBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UAISpawnDataBase) \
	DECLARE_WITHIN(UTT_AISpawnBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataBase_h_130_INCLASS \
private: \
	static void StaticRegisterNativesUAISpawnDataBase(); \
	friend struct Z_Construct_UClass_UAISpawnDataBase_Statics; \
public: \
	DECLARE_CLASS(UAISpawnDataBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UAISpawnDataBase) \
	DECLARE_WITHIN(UTT_AISpawnBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataBase_h_130_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISpawnDataBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISpawnDataBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISpawnDataBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISpawnDataBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISpawnDataBase(UAISpawnDataBase&&); \
	NO_API UAISpawnDataBase(const UAISpawnDataBase&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataBase_h_130_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISpawnDataBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISpawnDataBase(UAISpawnDataBase&&); \
	NO_API UAISpawnDataBase(const UAISpawnDataBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISpawnDataBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISpawnDataBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISpawnDataBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataBase_h_130_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TaskOwner() { return STRUCT_OFFSET(UAISpawnDataBase, TaskOwner); }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataBase_h_127_PROLOG
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataBase_h_130_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataBase_h_130_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataBase_h_130_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataBase_h_130_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataBase_h_130_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataBase_h_130_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataBase_h_130_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataBase_h_130_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataBase_h_130_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataBase_h_130_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataBase_h_130_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataBase_h_130_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AISpawnDataBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UAISpawnDataBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnData_AISpawnDataBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
