// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EInteractionEndType : uint8;
#ifdef TRIGGERRUNTIME_InteractionActorBase_generated_h
#error "InteractionActorBase.generated.h already included, missing '#pragma once' in InteractionActorBase.h"
#endif
#define TRIGGERRUNTIME_InteractionActorBase_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_InteractionActorBase_h_27_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_InteractionActorBase_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndInteract); \
	DECLARE_FUNCTION(execInteractionValueChanged); \
	DECLARE_FUNCTION(execStartInteract);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_InteractionActorBase_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndInteract); \
	DECLARE_FUNCTION(execInteractionValueChanged); \
	DECLARE_FUNCTION(execStartInteract);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_InteractionActorBase_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractionActorBase(); \
	friend struct Z_Construct_UClass_AInteractionActorBase_Statics; \
public: \
	DECLARE_CLASS(AInteractionActorBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(AInteractionActorBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_InteractionActorBase_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAInteractionActorBase(); \
	friend struct Z_Construct_UClass_AInteractionActorBase_Statics; \
public: \
	DECLARE_CLASS(AInteractionActorBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(AInteractionActorBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_InteractionActorBase_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractionActorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractionActorBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractionActorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractionActorBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractionActorBase(AInteractionActorBase&&); \
	NO_API AInteractionActorBase(const AInteractionActorBase&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_InteractionActorBase_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractionActorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractionActorBase(AInteractionActorBase&&); \
	NO_API AInteractionActorBase(const AInteractionActorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractionActorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractionActorBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractionActorBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_InteractionActorBase_h_27_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_InteractionActorBase_h_24_PROLOG
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_InteractionActorBase_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_InteractionActorBase_h_27_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_InteractionActorBase_h_27_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_InteractionActorBase_h_27_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_InteractionActorBase_h_27_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_InteractionActorBase_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_InteractionActorBase_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_InteractionActorBase_h_27_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_InteractionActorBase_h_27_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_InteractionActorBase_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_InteractionActorBase_h_27_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_InteractionActorBase_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InteractionActorBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class AInteractionActorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_InteractionActorBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
