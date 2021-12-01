// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTriggerTreeViewObject;
class ANewTriggerBase;
#ifdef TRIGGEREDITOR_TriggerEditPanel_generated_h
#error "TriggerEditPanel.generated.h already included, missing '#pragma once' in TriggerEditPanel.h"
#endif
#define TRIGGEREDITOR_TriggerEditPanel_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerEditPanel_h_20_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerEditPanel_h_20_RPC_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerEditPanel_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITOR
#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerEditPanel_h_20_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSelectComponents); \
	DECLARE_FUNCTION(execOnSelectedTrigger); \
	DECLARE_FUNCTION(execOnTriggerTreeExpansionChanged); \
	DECLARE_FUNCTION(execGetTriggersInLevel);


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerEditPanel_h_20_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSelectComponents); \
	DECLARE_FUNCTION(execOnSelectedTrigger); \
	DECLARE_FUNCTION(execOnTriggerTreeExpansionChanged); \
	DECLARE_FUNCTION(execGetTriggersInLevel);


#else
#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerEditPanel_h_20_EDITOR_ONLY_RPC_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerEditPanel_h_20_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerEditPanel_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerEditPanel(); \
	friend struct Z_Construct_UClass_UTriggerEditPanel_Statics; \
public: \
	DECLARE_CLASS(UTriggerEditPanel, UEditorUtilityWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TriggerEditor"), NO_API) \
	DECLARE_SERIALIZER(UTriggerEditPanel)


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerEditPanel_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUTriggerEditPanel(); \
	friend struct Z_Construct_UClass_UTriggerEditPanel_Statics; \
public: \
	DECLARE_CLASS(UTriggerEditPanel, UEditorUtilityWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TriggerEditor"), NO_API) \
	DECLARE_SERIALIZER(UTriggerEditPanel)


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerEditPanel_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerEditPanel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerEditPanel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerEditPanel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerEditPanel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerEditPanel(UTriggerEditPanel&&); \
	NO_API UTriggerEditPanel(const UTriggerEditPanel&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerEditPanel_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerEditPanel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerEditPanel(UTriggerEditPanel&&); \
	NO_API UTriggerEditPanel(const UTriggerEditPanel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerEditPanel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerEditPanel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerEditPanel)


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerEditPanel_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TreeView() { return STRUCT_OFFSET(UTriggerEditPanel, TreeView); } \
	FORCEINLINE static uint32 __PPO__CurSelectedTrigger() { return STRUCT_OFFSET(UTriggerEditPanel, CurSelectedTrigger); } \
	FORCEINLINE static uint32 __PPO__TreeViewObjectArr() { return STRUCT_OFFSET(UTriggerEditPanel, TreeViewObjectArr); } \
	FORCEINLINE static uint32 __PPO__DetailsView() { return STRUCT_OFFSET(UTriggerEditPanel, DetailsView); } \
	FORCEINLINE static uint32 __PPO__RadioButton() { return STRUCT_OFFSET(UTriggerEditPanel, RadioButton); }


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerEditPanel_h_17_PROLOG
#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerEditPanel_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerEditPanel_h_20_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerEditPanel_h_20_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerEditPanel_h_20_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerEditPanel_h_20_EDITOR_ONLY_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerEditPanel_h_20_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerEditPanel_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerEditPanel_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerEditPanel_h_20_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerEditPanel_h_20_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerEditPanel_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerEditPanel_h_20_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerEditPanel_h_20_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerEditPanel_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerEditPanel."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGEREDITOR_API UClass* StaticClass<class UTriggerEditPanel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerEditPanel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
