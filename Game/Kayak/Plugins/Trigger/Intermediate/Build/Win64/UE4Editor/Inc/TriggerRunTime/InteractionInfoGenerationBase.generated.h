// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInteractionInfo;
enum class EActorLayer : uint8;
class AActor;
class UTriggerTaskBase;
class UObject;
class UTT_Interaction;
#ifdef TRIGGERRUNTIME_InteractionInfoGenerationBase_generated_h
#error "InteractionInfoGenerationBase.generated.h already included, missing '#pragma once' in InteractionInfoGenerationBase.h"
#endif
#define TRIGGERRUNTIME_InteractionInfoGenerationBase_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionInfoGenerator_InteractionInfoGenerationBase_h_21_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionInfoGenerator_InteractionInfoGenerationBase_h_21_RPC_WRAPPERS \
	virtual EActorLayer GetInteractionLayer_Implementation(AActor* Actor, UTriggerTaskBase* Task); \
 \
	DECLARE_FUNCTION(execGetinteractionInfo); \
	DECLARE_FUNCTION(execGetConstInteractionInfo); \
	DECLARE_FUNCTION(execHasValidInteractionInfo); \
	DECLARE_FUNCTION(execGetInteractionLayer); \
	DECLARE_FUNCTION(execSetCurrentEffectInteractionInfo); \
	DECLARE_FUNCTION(execGetCurrentEffectInteractionInfo); \
	DECLARE_FUNCTION(execFindOrAddInteractionInfo); \
	DECLARE_FUNCTION(execRemoveInteraction);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionInfoGenerator_InteractionInfoGenerationBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual EActorLayer GetInteractionLayer_Implementation(AActor* Actor, UTriggerTaskBase* Task); \
 \
	DECLARE_FUNCTION(execGetinteractionInfo); \
	DECLARE_FUNCTION(execGetConstInteractionInfo); \
	DECLARE_FUNCTION(execHasValidInteractionInfo); \
	DECLARE_FUNCTION(execGetInteractionLayer); \
	DECLARE_FUNCTION(execSetCurrentEffectInteractionInfo); \
	DECLARE_FUNCTION(execGetCurrentEffectInteractionInfo); \
	DECLARE_FUNCTION(execFindOrAddInteractionInfo); \
	DECLARE_FUNCTION(execRemoveInteraction);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionInfoGenerator_InteractionInfoGenerationBase_h_21_EVENT_PARMS \
	struct InteractionGenerationBase_eventGetInteractionLayer_Parms \
	{ \
		AActor* Actor; \
		UTriggerTaskBase* Task; \
		EActorLayer ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InteractionGenerationBase_eventGetInteractionLayer_Parms() \
			: ReturnValue((EActorLayer)0) \
		{ \
		} \
	}; \
	struct InteractionGenerationBase_eventOnGenerateInteractionInfo_Parms \
	{ \
		FInteractionInfo OutData; \
		FString InteractState; \
		UTT_Interaction* Task; \
		AActor* Actor; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InteractionGenerationBase_eventOnGenerateInteractionInfo_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionInfoGenerator_InteractionInfoGenerationBase_h_21_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionInfoGenerator_InteractionInfoGenerationBase_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionGenerationBase(); \
	friend struct Z_Construct_UClass_UInteractionGenerationBase_Statics; \
public: \
	DECLARE_CLASS(UInteractionGenerationBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UInteractionGenerationBase) \
	DECLARE_WITHIN(UTT_Interaction) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentEffectInteractionInfo=NETFIELD_REP_START, \
		InteractionInfos, \
		NETFIELD_REP_END=InteractionInfos	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UInteractionGenerationBase) \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionInfoGenerator_InteractionInfoGenerationBase_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUInteractionGenerationBase(); \
	friend struct Z_Construct_UClass_UInteractionGenerationBase_Statics; \
public: \
	DECLARE_CLASS(UInteractionGenerationBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UInteractionGenerationBase) \
	DECLARE_WITHIN(UTT_Interaction) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentEffectInteractionInfo=NETFIELD_REP_START, \
		InteractionInfos, \
		NETFIELD_REP_END=InteractionInfos	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UInteractionGenerationBase) \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionInfoGenerator_InteractionInfoGenerationBase_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionGenerationBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionGenerationBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionGenerationBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionGenerationBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionGenerationBase(UInteractionGenerationBase&&); \
	NO_API UInteractionGenerationBase(const UInteractionGenerationBase&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionInfoGenerator_InteractionInfoGenerationBase_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionGenerationBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionGenerationBase(UInteractionGenerationBase&&); \
	NO_API UInteractionGenerationBase(const UInteractionGenerationBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionGenerationBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionGenerationBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionGenerationBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionInfoGenerator_InteractionInfoGenerationBase_h_21_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionInfoGenerator_InteractionInfoGenerationBase_h_18_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionInfoGenerator_InteractionInfoGenerationBase_h_21_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionInfoGenerator_InteractionInfoGenerationBase_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionInfoGenerator_InteractionInfoGenerationBase_h_21_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionInfoGenerator_InteractionInfoGenerationBase_h_21_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionInfoGenerator_InteractionInfoGenerationBase_h_21_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionInfoGenerator_InteractionInfoGenerationBase_h_21_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionInfoGenerator_InteractionInfoGenerationBase_h_21_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionInfoGenerator_InteractionInfoGenerationBase_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionInfoGenerator_InteractionInfoGenerationBase_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionInfoGenerator_InteractionInfoGenerationBase_h_21_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionInfoGenerator_InteractionInfoGenerationBase_h_21_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionInfoGenerator_InteractionInfoGenerationBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionInfoGenerator_InteractionInfoGenerationBase_h_21_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionInfoGenerator_InteractionInfoGenerationBase_h_21_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionInfoGenerator_InteractionInfoGenerationBase_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InteractionGenerationBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UInteractionGenerationBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionInfoGenerator_InteractionInfoGenerationBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
