// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TRIGGERRUNTIME_TT_LevelSequence_generated_h
#error "TT_LevelSequence.generated.h already included, missing '#pragma once' in TT_LevelSequence.h"
#endif
#define TRIGGERRUNTIME_TT_LevelSequence_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_LevelSequence_h_26_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_LevelSequence_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_IsSequencePlaying); \
	DECLARE_FUNCTION(execOnSequenceFinished);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_LevelSequence_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_IsSequencePlaying); \
	DECLARE_FUNCTION(execOnSequenceFinished);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_LevelSequence_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTT_LevelSequence(); \
	friend struct Z_Construct_UClass_UTT_LevelSequence_Statics; \
public: \
	DECLARE_CLASS(UTT_LevelSequence, UTriggerTaskBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTT_LevelSequence) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SequenceState=NETFIELD_REP_START, \
		NETFIELD_REP_END=SequenceState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_LevelSequence_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUTT_LevelSequence(); \
	friend struct Z_Construct_UClass_UTT_LevelSequence_Statics; \
public: \
	DECLARE_CLASS(UTT_LevelSequence, UTriggerTaskBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTT_LevelSequence) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SequenceState=NETFIELD_REP_START, \
		NETFIELD_REP_END=SequenceState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_LevelSequence_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTT_LevelSequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTT_LevelSequence) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTT_LevelSequence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTT_LevelSequence); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTT_LevelSequence(UTT_LevelSequence&&); \
	NO_API UTT_LevelSequence(const UTT_LevelSequence&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_LevelSequence_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTT_LevelSequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTT_LevelSequence(UTT_LevelSequence&&); \
	NO_API UTT_LevelSequence(const UTT_LevelSequence&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTT_LevelSequence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTT_LevelSequence); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTT_LevelSequence)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_LevelSequence_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SequenceState() { return STRUCT_OFFSET(UTT_LevelSequence, SequenceState); }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_LevelSequence_h_23_PROLOG
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_LevelSequence_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_LevelSequence_h_26_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_LevelSequence_h_26_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_LevelSequence_h_26_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_LevelSequence_h_26_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_LevelSequence_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_LevelSequence_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_LevelSequence_h_26_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_LevelSequence_h_26_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_LevelSequence_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_LevelSequence_h_26_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_LevelSequence_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TT_LevelSequence."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTT_LevelSequence>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_LevelSequence_h


#define FOREACH_ENUM_ETTLEVELSEQUENCESTATE(op) \
	op(ETTLevelSequenceState::ETTLSS_NotPlay) \
	op(ETTLevelSequenceState::ETTLSS_Playing) \
	op(ETTLevelSequenceState::ETTLSS_Finished) 

enum class ETTLevelSequenceState : uint8;
template<> TRIGGERRUNTIME_API UEnum* StaticEnum<ETTLevelSequenceState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
