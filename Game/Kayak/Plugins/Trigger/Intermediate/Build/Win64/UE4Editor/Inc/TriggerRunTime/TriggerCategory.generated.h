// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
struct FGameplayTag;
class UTriggerCategoryBase;
struct FGameplayTagContainer;
class UObject;
#ifdef TRIGGERRUNTIME_TriggerCategory_generated_h
#error "TriggerCategory.generated.h already included, missing '#pragma once' in TriggerCategory.h"
#endif
#define TRIGGERRUNTIME_TriggerCategory_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_22_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_22_RPC_WRAPPERS \
	virtual void GetExportedMapNameByParentCategory_Implementation(TArray<FString>& OutMapNames, UTriggerCategoryBase* ParentCategory) const; \
	virtual void GetExportedMapName_Implementation(TArray<FString>& OutMapNames) const; \
	virtual bool IsChildCategoryOfGameplayTagContainer_Implementation(FGameplayTagContainer const& ParentTagContainer) const; \
	virtual bool IsChildCategoryOfTriggerCategory_Implementation(UTriggerCategoryBase* ParentCategory) const; \
	virtual bool IsMathcedForCurrrentRuntimeContent_Implementation() const; \
 \
	DECLARE_FUNCTION(execGenerateMapNameFromCategroyTag); \
	DECLARE_FUNCTION(execMarkScenerioDirty); \
	DECLARE_FUNCTION(execMarkDifficultyDirty); \
	DECLARE_FUNCTION(execMarkCategoryDirty); \
	DECLARE_FUNCTION(execIsValidCategory); \
	DECLARE_FUNCTION(execHaveValidScenarioNode); \
	DECLARE_FUNCTION(execHaveValidDifficultyNode); \
	DECLARE_FUNCTION(execGetMapName); \
	DECLARE_FUNCTION(execUpdateCategoryToCurrentMap); \
	DECLARE_FUNCTION(execGetExportedMapNameByParentCategory); \
	DECLARE_FUNCTION(execGetExportedMapName); \
	DECLARE_FUNCTION(execIsChildCategoryOfGameplayTagContainer); \
	DECLARE_FUNCTION(execIsChildCategoryOfTriggerCategory); \
	DECLARE_FUNCTION(execIsMathcedForCurrrentRuntimeContent); \
	DECLARE_FUNCTION(execGetOwner); \
	DECLARE_FUNCTION(execInitializeCategory);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GetExportedMapNameByParentCategory_Implementation(TArray<FString>& OutMapNames, UTriggerCategoryBase* ParentCategory) const; \
	virtual void GetExportedMapName_Implementation(TArray<FString>& OutMapNames) const; \
	virtual bool IsChildCategoryOfGameplayTagContainer_Implementation(FGameplayTagContainer const& ParentTagContainer) const; \
	virtual bool IsChildCategoryOfTriggerCategory_Implementation(UTriggerCategoryBase* ParentCategory) const; \
	virtual bool IsMathcedForCurrrentRuntimeContent_Implementation() const; \
 \
	DECLARE_FUNCTION(execGenerateMapNameFromCategroyTag); \
	DECLARE_FUNCTION(execMarkScenerioDirty); \
	DECLARE_FUNCTION(execMarkDifficultyDirty); \
	DECLARE_FUNCTION(execMarkCategoryDirty); \
	DECLARE_FUNCTION(execIsValidCategory); \
	DECLARE_FUNCTION(execHaveValidScenarioNode); \
	DECLARE_FUNCTION(execHaveValidDifficultyNode); \
	DECLARE_FUNCTION(execGetMapName); \
	DECLARE_FUNCTION(execUpdateCategoryToCurrentMap); \
	DECLARE_FUNCTION(execGetExportedMapNameByParentCategory); \
	DECLARE_FUNCTION(execGetExportedMapName); \
	DECLARE_FUNCTION(execIsChildCategoryOfGameplayTagContainer); \
	DECLARE_FUNCTION(execIsChildCategoryOfTriggerCategory); \
	DECLARE_FUNCTION(execIsMathcedForCurrrentRuntimeContent); \
	DECLARE_FUNCTION(execGetOwner); \
	DECLARE_FUNCTION(execInitializeCategory);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_22_EVENT_PARMS \
	struct TriggerCategoryBase_eventGetExportedMapName_Parms \
	{ \
		TArray<FString> OutMapNames; \
	}; \
	struct TriggerCategoryBase_eventGetExportedMapNameByParentCategory_Parms \
	{ \
		TArray<FString> OutMapNames; \
		UTriggerCategoryBase* ParentCategory; \
	}; \
	struct TriggerCategoryBase_eventIsChildCategoryOfGameplayTagContainer_Parms \
	{ \
		FGameplayTagContainer ParentTagContainer; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerCategoryBase_eventIsChildCategoryOfGameplayTagContainer_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TriggerCategoryBase_eventIsChildCategoryOfTriggerCategory_Parms \
	{ \
		UTriggerCategoryBase* ParentCategory; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerCategoryBase_eventIsChildCategoryOfTriggerCategory_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TriggerCategoryBase_eventIsMathcedForCurrrentRuntimeContent_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerCategoryBase_eventIsMathcedForCurrrentRuntimeContent_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TriggerCategoryBase_eventOnInitializeCategory_Parms \
	{ \
		UObject* InOwner; \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_22_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerCategoryBase(); \
	friend struct Z_Construct_UClass_UTriggerCategoryBase_Statics; \
public: \
	DECLARE_CLASS(UTriggerCategoryBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerCategoryBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUTriggerCategoryBase(); \
	friend struct Z_Construct_UClass_UTriggerCategoryBase_Statics; \
public: \
	DECLARE_CLASS(UTriggerCategoryBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerCategoryBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerCategoryBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerCategoryBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerCategoryBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerCategoryBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerCategoryBase(UTriggerCategoryBase&&); \
	NO_API UTriggerCategoryBase(const UTriggerCategoryBase&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerCategoryBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerCategoryBase(UTriggerCategoryBase&&); \
	NO_API UTriggerCategoryBase(const UTriggerCategoryBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerCategoryBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerCategoryBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerCategoryBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_22_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_19_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_22_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_22_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_22_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_22_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_22_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_22_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_22_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_22_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_22_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_22_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerCategoryBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTriggerCategoryBase>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_218_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_218_RPC_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_218_RPC_WRAPPERS_NO_PURE_DECLS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_218_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTaskComponentCategory(); \
	friend struct Z_Construct_UClass_UTaskComponentCategory_Statics; \
public: \
	DECLARE_CLASS(UTaskComponentCategory, UTriggerCategoryBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTaskComponentCategory)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_218_INCLASS \
private: \
	static void StaticRegisterNativesUTaskComponentCategory(); \
	friend struct Z_Construct_UClass_UTaskComponentCategory_Statics; \
public: \
	DECLARE_CLASS(UTaskComponentCategory, UTriggerCategoryBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTaskComponentCategory)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_218_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTaskComponentCategory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTaskComponentCategory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTaskComponentCategory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTaskComponentCategory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTaskComponentCategory(UTaskComponentCategory&&); \
	NO_API UTaskComponentCategory(const UTaskComponentCategory&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_218_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTaskComponentCategory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTaskComponentCategory(UTaskComponentCategory&&); \
	NO_API UTaskComponentCategory(const UTaskComponentCategory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTaskComponentCategory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTaskComponentCategory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTaskComponentCategory)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_218_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_215_PROLOG
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_218_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_218_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_218_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_218_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_218_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_218_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_218_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_218_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_218_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_218_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_218_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h_218_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TaskComponentCategory."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTaskComponentCategory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_Category_TriggerCategory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
