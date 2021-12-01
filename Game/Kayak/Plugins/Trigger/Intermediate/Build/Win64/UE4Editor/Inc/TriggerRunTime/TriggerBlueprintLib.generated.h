// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevel;
class ITriggerInterface;
struct FGameplayTagContainer;
struct FGameplayTag;
enum class ECategoryFormat : uint8;
class APlayerController;
class UTriggerEventRewardManager;
class UOperationInformationManager;
class UTriggerRuntimeContent;
class UTriggerSaveGameManager;
class UTriggerManager;
class UTriggerTaskManager;
class UTriggerStaticsBase;
class UTS_AIStatics;
class UDeadSystemManager;
class UTriggerTaskComponentBase;
class UTriggerTaskBase;
class AActor;
class UContributeRuleBase;
class UTriggerNetPlayerSupportComponent;
#ifdef TRIGGERRUNTIME_TriggerBlueprintLib_generated_h
#error "TriggerBlueprintLib.generated.h already included, missing '#pragma once' in TriggerBlueprintLib.h"
#endif
#define TRIGGERRUNTIME_TriggerBlueprintLib_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerBlueprintLib_h_32_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerBlueprintLib_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDebugBreak); \
	DECLARE_FUNCTION(execGetSubTriggerLevelDirectoryPath); \
	DECLARE_FUNCTION(execGetSubTriggerLevelAssetPath); \
	DECLARE_FUNCTION(execIsFirstTriggerNode); \
	DECLARE_FUNCTION(execIsValidTriggerCategory); \
	DECLARE_FUNCTION(execGetTriggerCategoryNodeName); \
	DECLARE_FUNCTION(execConvertPathReferencValueToVaild); \
	DECLARE_FUNCTION(execAddRegionIndex); \
	DECLARE_FUNCTION(execGameOver); \
	DECLARE_FUNCTION(execGetTriggerEventRewardManager); \
	DECLARE_FUNCTION(execGetOperationInfoManager); \
	DECLARE_FUNCTION(execGetTriggerRunTimeContent); \
	DECLARE_FUNCTION(execGetTriggerSaveGameManager); \
	DECLARE_FUNCTION(execGetTriggerManager); \
	DECLARE_FUNCTION(execGetTriggerTaskManager); \
	DECLARE_FUNCTION(execGetAIStatics); \
	DECLARE_FUNCTION(execGetDeadSystemInstance); \
	DECLARE_FUNCTION(execGetTriggerTaskByClass); \
	DECLARE_FUNCTION(execGetTriggerTaskByIndex); \
	DECLARE_FUNCTION(execMakeAddContributor); \
	DECLARE_FUNCTION(execMakeCancleContributor); \
	DECLARE_FUNCTION(execGetTriggerNetPlayerSupportFromActor);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerBlueprintLib_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDebugBreak); \
	DECLARE_FUNCTION(execGetSubTriggerLevelDirectoryPath); \
	DECLARE_FUNCTION(execGetSubTriggerLevelAssetPath); \
	DECLARE_FUNCTION(execIsFirstTriggerNode); \
	DECLARE_FUNCTION(execIsValidTriggerCategory); \
	DECLARE_FUNCTION(execGetTriggerCategoryNodeName); \
	DECLARE_FUNCTION(execConvertPathReferencValueToVaild); \
	DECLARE_FUNCTION(execAddRegionIndex); \
	DECLARE_FUNCTION(execGameOver); \
	DECLARE_FUNCTION(execGetTriggerEventRewardManager); \
	DECLARE_FUNCTION(execGetOperationInfoManager); \
	DECLARE_FUNCTION(execGetTriggerRunTimeContent); \
	DECLARE_FUNCTION(execGetTriggerSaveGameManager); \
	DECLARE_FUNCTION(execGetTriggerManager); \
	DECLARE_FUNCTION(execGetTriggerTaskManager); \
	DECLARE_FUNCTION(execGetAIStatics); \
	DECLARE_FUNCTION(execGetDeadSystemInstance); \
	DECLARE_FUNCTION(execGetTriggerTaskByClass); \
	DECLARE_FUNCTION(execGetTriggerTaskByIndex); \
	DECLARE_FUNCTION(execMakeAddContributor); \
	DECLARE_FUNCTION(execMakeCancleContributor); \
	DECLARE_FUNCTION(execGetTriggerNetPlayerSupportFromActor);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerBlueprintLib_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerBlueprintLib(); \
	friend struct Z_Construct_UClass_UTriggerBlueprintLib_Statics; \
public: \
	DECLARE_CLASS(UTriggerBlueprintLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerBlueprintLib)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerBlueprintLib_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUTriggerBlueprintLib(); \
	friend struct Z_Construct_UClass_UTriggerBlueprintLib_Statics; \
public: \
	DECLARE_CLASS(UTriggerBlueprintLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerBlueprintLib)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerBlueprintLib_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerBlueprintLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerBlueprintLib) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerBlueprintLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerBlueprintLib); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerBlueprintLib(UTriggerBlueprintLib&&); \
	NO_API UTriggerBlueprintLib(const UTriggerBlueprintLib&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerBlueprintLib_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerBlueprintLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerBlueprintLib(UTriggerBlueprintLib&&); \
	NO_API UTriggerBlueprintLib(const UTriggerBlueprintLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerBlueprintLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerBlueprintLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerBlueprintLib)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerBlueprintLib_h_32_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerBlueprintLib_h_29_PROLOG
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerBlueprintLib_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerBlueprintLib_h_32_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerBlueprintLib_h_32_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerBlueprintLib_h_32_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerBlueprintLib_h_32_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerBlueprintLib_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerBlueprintLib_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerBlueprintLib_h_32_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerBlueprintLib_h_32_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerBlueprintLib_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerBlueprintLib_h_32_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerBlueprintLib_h_32_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerBlueprintLib."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTriggerBlueprintLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerBlueprintLib_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
