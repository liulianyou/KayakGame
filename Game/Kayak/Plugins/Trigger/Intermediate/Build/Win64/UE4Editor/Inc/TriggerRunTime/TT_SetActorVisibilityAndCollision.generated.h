// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef TRIGGERRUNTIME_TT_SetActorVisibilityAndCollision_generated_h
#error "TT_SetActorVisibilityAndCollision.generated.h already included, missing '#pragma once' in TT_SetActorVisibilityAndCollision.h"
#endif
#define TRIGGERRUNTIME_TT_SetActorVisibilityAndCollision_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_SetActorVisibilityAndCollision_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorInformation_Statics; \
	TRIGGERRUNTIME_API static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FActorInformation>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_SetActorVisibilityAndCollision_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics; \
	TRIGGERRUNTIME_API static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FSAV_ActorInfo>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_SetActorVisibilityAndCollision_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSAV_ComponentInfo_Statics; \
	TRIGGERRUNTIME_API static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FSAV_ComponentInfo>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_SetActorVisibilityAndCollision_h_85_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_SetActorVisibilityAndCollision_h_85_RPC_WRAPPERS \
	virtual void MutiCast_SetVisibleAndCollision_Implementation(); \
 \
	DECLARE_FUNCTION(execDestroyedActor); \
	DECLARE_FUNCTION(execRep_ReplicatedActorInformations); \
	DECLARE_FUNCTION(execMutiCast_SetVisibleAndCollision);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_SetActorVisibilityAndCollision_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MutiCast_SetVisibleAndCollision_Implementation(); \
 \
	DECLARE_FUNCTION(execDestroyedActor); \
	DECLARE_FUNCTION(execRep_ReplicatedActorInformations); \
	DECLARE_FUNCTION(execMutiCast_SetVisibleAndCollision);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_SetActorVisibilityAndCollision_h_85_EVENT_PARMS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_SetActorVisibilityAndCollision_h_85_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_SetActorVisibilityAndCollision_h_85_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UTT_SetActorVisibilityAndCollision, NO_API)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_SetActorVisibilityAndCollision_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTT_SetActorVisibilityAndCollision(); \
	friend struct Z_Construct_UClass_UTT_SetActorVisibilityAndCollision_Statics; \
public: \
	DECLARE_CLASS(UTT_SetActorVisibilityAndCollision, UTriggerTaskBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTT_SetActorVisibilityAndCollision) \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_SetActorVisibilityAndCollision_h_85_ARCHIVESERIALIZER \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedActorInformations=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedActorInformations	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_SetActorVisibilityAndCollision_h_85_INCLASS \
private: \
	static void StaticRegisterNativesUTT_SetActorVisibilityAndCollision(); \
	friend struct Z_Construct_UClass_UTT_SetActorVisibilityAndCollision_Statics; \
public: \
	DECLARE_CLASS(UTT_SetActorVisibilityAndCollision, UTriggerTaskBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTT_SetActorVisibilityAndCollision) \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_SetActorVisibilityAndCollision_h_85_ARCHIVESERIALIZER \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedActorInformations=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedActorInformations	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_SetActorVisibilityAndCollision_h_85_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTT_SetActorVisibilityAndCollision(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTT_SetActorVisibilityAndCollision) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTT_SetActorVisibilityAndCollision); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTT_SetActorVisibilityAndCollision); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTT_SetActorVisibilityAndCollision(UTT_SetActorVisibilityAndCollision&&); \
	NO_API UTT_SetActorVisibilityAndCollision(const UTT_SetActorVisibilityAndCollision&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_SetActorVisibilityAndCollision_h_85_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTT_SetActorVisibilityAndCollision(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTT_SetActorVisibilityAndCollision(UTT_SetActorVisibilityAndCollision&&); \
	NO_API UTT_SetActorVisibilityAndCollision(const UTT_SetActorVisibilityAndCollision&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTT_SetActorVisibilityAndCollision); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTT_SetActorVisibilityAndCollision); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTT_SetActorVisibilityAndCollision)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_SetActorVisibilityAndCollision_h_85_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_SetActorVisibilityAndCollision_h_82_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_SetActorVisibilityAndCollision_h_85_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_SetActorVisibilityAndCollision_h_85_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_SetActorVisibilityAndCollision_h_85_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_SetActorVisibilityAndCollision_h_85_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_SetActorVisibilityAndCollision_h_85_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_SetActorVisibilityAndCollision_h_85_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_SetActorVisibilityAndCollision_h_85_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_SetActorVisibilityAndCollision_h_85_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_SetActorVisibilityAndCollision_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_SetActorVisibilityAndCollision_h_85_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_SetActorVisibilityAndCollision_h_85_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_SetActorVisibilityAndCollision_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_SetActorVisibilityAndCollision_h_85_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_SetActorVisibilityAndCollision_h_85_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_SetActorVisibilityAndCollision_h_85_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TT_SetActorVisibilityAndCollision."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTT_SetActorVisibilityAndCollision>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TT_SetActorVisibilityAndCollision_h


#define FOREACH_ENUM_EVISIBLETYPE(op) \
	op(EVisibleType::EVisibleType_VisibleAndCollision) \
	op(EVisibleType::EVisibleType_VisibleButNoCollision) \
	op(EVisibleType::EVisibleType_InvisibleButCollision) \
	op(EVisibleType::EVisibleType_InvisibleAndNoCollision) \
	op(EVisibleType::EVisibleType_Max) 

enum class EVisibleType : uint8;
template<> TRIGGERRUNTIME_API UEnum* StaticEnum<EVisibleType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
