// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef TRIGGERRUNTIME_PlaceableActorContainer_generated_h
#error "PlaceableActorContainer.generated.h already included, missing '#pragma once' in PlaceableActorContainer.h"
#endif
#define TRIGGERRUNTIME_PlaceableActorContainer_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_PlaceableActorContainer_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChildActorInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FChildActorInfo>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_PlaceableActorContainer_h_49_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_PlaceableActorContainer_h_49_RPC_WRAPPERS \
	virtual void PopulateChildActorAttributes_Implementation(TArray<AActor*> const& TargetActors); \
 \
	DECLARE_FUNCTION(execGetChildActors); \
	DECLARE_FUNCTION(execPopulateChildActorAttributes); \
	DECLARE_FUNCTION(execOnChildActorDestroyed); \
	DECLARE_FUNCTION(execGenerateChildActors); \
	DECLARE_FUNCTION(execRemoveAllChildActors); \
	DECLARE_FUNCTION(execUpdateChildActorsTransform);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_PlaceableActorContainer_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PopulateChildActorAttributes_Implementation(TArray<AActor*> const& TargetActors); \
 \
	DECLARE_FUNCTION(execGetChildActors); \
	DECLARE_FUNCTION(execPopulateChildActorAttributes); \
	DECLARE_FUNCTION(execOnChildActorDestroyed); \
	DECLARE_FUNCTION(execGenerateChildActors); \
	DECLARE_FUNCTION(execRemoveAllChildActors); \
	DECLARE_FUNCTION(execUpdateChildActorsTransform);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_PlaceableActorContainer_h_49_EVENT_PARMS \
	struct PlaceableActorContainer_eventPopulateChildActorAttributes_Parms \
	{ \
		TArray<AActor*> TargetActors; \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_PlaceableActorContainer_h_49_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_PlaceableActorContainer_h_49_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(APlaceableActorContainer, NO_API)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_PlaceableActorContainer_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlaceableActorContainer(); \
	friend struct Z_Construct_UClass_APlaceableActorContainer_Statics; \
public: \
	DECLARE_CLASS(APlaceableActorContainer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(APlaceableActorContainer) \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_PlaceableActorContainer_h_49_ARCHIVESERIALIZER


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_PlaceableActorContainer_h_49_INCLASS \
private: \
	static void StaticRegisterNativesAPlaceableActorContainer(); \
	friend struct Z_Construct_UClass_APlaceableActorContainer_Statics; \
public: \
	DECLARE_CLASS(APlaceableActorContainer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(APlaceableActorContainer) \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_PlaceableActorContainer_h_49_ARCHIVESERIALIZER


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_PlaceableActorContainer_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlaceableActorContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlaceableActorContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlaceableActorContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlaceableActorContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlaceableActorContainer(APlaceableActorContainer&&); \
	NO_API APlaceableActorContainer(const APlaceableActorContainer&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_PlaceableActorContainer_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlaceableActorContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlaceableActorContainer(APlaceableActorContainer&&); \
	NO_API APlaceableActorContainer(const APlaceableActorContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlaceableActorContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlaceableActorContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlaceableActorContainer)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_PlaceableActorContainer_h_49_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_PlaceableActorContainer_h_46_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_PlaceableActorContainer_h_49_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_PlaceableActorContainer_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_PlaceableActorContainer_h_49_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_PlaceableActorContainer_h_49_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_PlaceableActorContainer_h_49_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_PlaceableActorContainer_h_49_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_PlaceableActorContainer_h_49_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_PlaceableActorContainer_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_PlaceableActorContainer_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_PlaceableActorContainer_h_49_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_PlaceableActorContainer_h_49_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_PlaceableActorContainer_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_PlaceableActorContainer_h_49_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_PlaceableActorContainer_h_49_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_PlaceableActorContainer_h_49_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlaceableActorContainer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class APlaceableActorContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_PlaceableActorContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
