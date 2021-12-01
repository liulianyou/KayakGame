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
#ifdef TRIGGEREDITOR_TriggerChainPanel_generated_h
#error "TriggerChainPanel.generated.h already included, missing '#pragma once' in TriggerChainPanel.h"
#endif
#define TRIGGEREDITOR_TriggerChainPanel_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerChainPanel_h_21_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerChainPanel_h_21_RPC_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerChainPanel_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITOR
#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerChainPanel_h_21_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSelectComponents); \
	DECLARE_FUNCTION(execOnSelectedTrigger); \
	DECLARE_FUNCTION(execOnTriggerTreeExpansionChanged); \
	DECLARE_FUNCTION(execGetTriggersInLevel);


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerChainPanel_h_21_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSelectComponents); \
	DECLARE_FUNCTION(execOnSelectedTrigger); \
	DECLARE_FUNCTION(execOnTriggerTreeExpansionChanged); \
	DECLARE_FUNCTION(execGetTriggersInLevel);


#else
#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerChainPanel_h_21_EDITOR_ONLY_RPC_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerChainPanel_h_21_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerChainPanel_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerChainPanel(); \
	friend struct Z_Construct_UClass_UTriggerChainPanel_Statics; \
public: \
	DECLARE_CLASS(UTriggerChainPanel, UEditorUtilityWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TriggerEditor"), NO_API) \
	DECLARE_SERIALIZER(UTriggerChainPanel)


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerChainPanel_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUTriggerChainPanel(); \
	friend struct Z_Construct_UClass_UTriggerChainPanel_Statics; \
public: \
	DECLARE_CLASS(UTriggerChainPanel, UEditorUtilityWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TriggerEditor"), NO_API) \
	DECLARE_SERIALIZER(UTriggerChainPanel)


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerChainPanel_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerChainPanel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerChainPanel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerChainPanel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerChainPanel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerChainPanel(UTriggerChainPanel&&); \
	NO_API UTriggerChainPanel(const UTriggerChainPanel&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerChainPanel_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerChainPanel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerChainPanel(UTriggerChainPanel&&); \
	NO_API UTriggerChainPanel(const UTriggerChainPanel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerChainPanel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerChainPanel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerChainPanel)


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerChainPanel_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TreeView() { return STRUCT_OFFSET(UTriggerChainPanel, TreeView); } \
	FORCEINLINE static uint32 __PPO__CurSelectedTrigger() { return STRUCT_OFFSET(UTriggerChainPanel, CurSelectedTrigger); } \
	FORCEINLINE static uint32 __PPO__TreeViewObjectArr() { return STRUCT_OFFSET(UTriggerChainPanel, TreeViewObjectArr); } \
	FORCEINLINE static uint32 __PPO__DetailsView() { return STRUCT_OFFSET(UTriggerChainPanel, DetailsView); } \
	FORCEINLINE static uint32 __PPO__RadioButton() { return STRUCT_OFFSET(UTriggerChainPanel, RadioButton); }


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerChainPanel_h_18_PROLOG
#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerChainPanel_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerChainPanel_h_21_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerChainPanel_h_21_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerChainPanel_h_21_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerChainPanel_h_21_EDITOR_ONLY_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerChainPanel_h_21_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerChainPanel_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerChainPanel_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerChainPanel_h_21_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerChainPanel_h_21_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerChainPanel_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerChainPanel_h_21_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerChainPanel_h_21_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerChainPanel_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerChainPanel."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGEREDITOR_API UClass* StaticClass<class UTriggerChainPanel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerChainPanel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
