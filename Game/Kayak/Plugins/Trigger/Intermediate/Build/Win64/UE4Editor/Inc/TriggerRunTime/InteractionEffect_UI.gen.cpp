// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffect_UI.h"
#include "TriggerRunTime/Public/TriggerTask/InteractionTask/TT_Interaction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionEffect_UI() {}
// Cross Module References
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FOpenWidgetInfo();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_Interaction_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UInteractionEffect_UI_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UInteractionEffect_UI();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UInteractionEffectBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
class UScriptStruct* FOpenWidgetInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FOpenWidgetInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOpenWidgetInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("OpenWidgetInfo"), sizeof(FOpenWidgetInfo), Get_Z_Construct_UScriptStruct_FOpenWidgetInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FOpenWidgetInfo>()
{
	return FOpenWidgetInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOpenWidgetInfo(FOpenWidgetInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("OpenWidgetInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFOpenWidgetInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFOpenWidgetInfo()
	{
		UScriptStruct::DeferCppStructOps<FOpenWidgetInfo>(FName(TEXT("OpenWidgetInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFOpenWidgetInfo;
	struct Z_Construct_UScriptStruct_FOpenWidgetInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Task;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenWidgetInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffect_UI.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOpenWidgetInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOpenWidgetInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenWidgetInfo_Statics::NewProp_Task_MetaData[] = {
		{ "Category", "OpenWidgetInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffect_UI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOpenWidgetInfo_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x001000000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenWidgetInfo, Task), Z_Construct_UClass_UTT_Interaction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenWidgetInfo_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenWidgetInfo_Statics::NewProp_Task_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenWidgetInfo_Statics::NewProp_Widget_MetaData[] = {
		{ "Category", "OpenWidgetInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffect_UI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOpenWidgetInfo_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenWidgetInfo, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenWidgetInfo_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenWidgetInfo_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOpenWidgetInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenWidgetInfo_Statics::NewProp_Task,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenWidgetInfo_Statics::NewProp_Widget,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOpenWidgetInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"OpenWidgetInfo",
		sizeof(FOpenWidgetInfo),
		alignof(FOpenWidgetInfo),
		Z_Construct_UScriptStruct_FOpenWidgetInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenWidgetInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenWidgetInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenWidgetInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOpenWidgetInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOpenWidgetInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OpenWidgetInfo"), sizeof(FOpenWidgetInfo), Get_Z_Construct_UScriptStruct_FOpenWidgetInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOpenWidgetInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOpenWidgetInfo_Hash() { return 2358951654U; }
class UScriptStruct* FWidgetInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FWidgetInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("WidgetInfo"), sizeof(FWidgetInfo), Get_Z_Construct_UScriptStruct_FWidgetInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FWidgetInfo>()
{
	return FWidgetInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWidgetInfo(FWidgetInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("WidgetInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFWidgetInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFWidgetInfo()
	{
		UScriptStruct::DeferCppStructOps<FWidgetInfo>(FName(TEXT("WidgetInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFWidgetInfo;
	struct Z_Construct_UScriptStruct_FWidgetInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsExecutive_MetaData[];
#endif
		static void NewProp_IsExecutive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsExecutive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffect_UI.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetInfo_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "WidgetInfo" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffect_UI.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWidgetInfo_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWidgetInfo, WidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetInfo_Statics::NewProp_WidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetInfo_Statics::NewProp_WidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetInfo_Statics::NewProp_IsExecutive_MetaData[] = {
		{ "Category", "WidgetInfo" },
		{ "Comment", "//Flag to check weather this widget should only have one instance in the target client\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffect_UI.h" },
		{ "ToolTip", "Flag to check weather this widget should only have one instance in the target client" },
	};
#endif
	void Z_Construct_UScriptStruct_FWidgetInfo_Statics::NewProp_IsExecutive_SetBit(void* Obj)
	{
		((FWidgetInfo*)Obj)->IsExecutive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWidgetInfo_Statics::NewProp_IsExecutive = { "IsExecutive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWidgetInfo), &Z_Construct_UScriptStruct_FWidgetInfo_Statics::NewProp_IsExecutive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetInfo_Statics::NewProp_IsExecutive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetInfo_Statics::NewProp_IsExecutive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetInfo_Statics::NewProp_WidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetInfo_Statics::NewProp_IsExecutive,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"WidgetInfo",
		sizeof(FWidgetInfo),
		alignof(FWidgetInfo),
		Z_Construct_UScriptStruct_FWidgetInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWidgetInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WidgetInfo"), sizeof(FWidgetInfo), Get_Z_Construct_UScriptStruct_FWidgetInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWidgetInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWidgetInfo_Hash() { return 3393680811U; }
	DEFINE_FUNCTION(UInteractionEffect_UI::execGetInteractionPawn)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->GetInteractionPawn(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionEffect_UI::execWorldTearDown)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WorldTearDown(Z_Param_World);
		P_NATIVE_END;
	}
	void UInteractionEffect_UI::StaticRegisterNativesUInteractionEffect_UI()
	{
		UClass* Class = UInteractionEffect_UI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInteractionPawn", &UInteractionEffect_UI::execGetInteractionPawn },
			{ "WorldTearDown", &UInteractionEffect_UI::execWorldTearDown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractionEffect_UI_GetInteractionPawn_Statics
	{
		struct InteractionEffect_UI_eventGetInteractionPawn_Parms
		{
			AActor* Actor;
			APawn* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionEffect_UI_GetInteractionPawn_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionEffect_UI_eventGetInteractionPawn_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionEffect_UI_GetInteractionPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionEffect_UI_eventGetInteractionPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionEffect_UI_GetInteractionPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionEffect_UI_GetInteractionPawn_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionEffect_UI_GetInteractionPawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionEffect_UI_GetInteractionPawn_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Get the pawn who toggle this Interaction task to active this effect\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffect_UI.h" },
		{ "ToolTip", "Get the pawn who toggle this Interaction task to active this effect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionEffect_UI_GetInteractionPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionEffect_UI, nullptr, "GetInteractionPawn", nullptr, nullptr, sizeof(InteractionEffect_UI_eventGetInteractionPawn_Parms), Z_Construct_UFunction_UInteractionEffect_UI_GetInteractionPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionEffect_UI_GetInteractionPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionEffect_UI_GetInteractionPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionEffect_UI_GetInteractionPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionEffect_UI_GetInteractionPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionEffect_UI_GetInteractionPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionEffect_UI_WorldTearDown_Statics
	{
		struct InteractionEffect_UI_eventWorldTearDown_Parms
		{
			UWorld* World;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionEffect_UI_WorldTearDown_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionEffect_UI_eventWorldTearDown_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionEffect_UI_WorldTearDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionEffect_UI_WorldTearDown_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionEffect_UI_WorldTearDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffect_UI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionEffect_UI_WorldTearDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionEffect_UI, nullptr, "WorldTearDown", nullptr, nullptr, sizeof(InteractionEffect_UI_eventWorldTearDown_Parms), Z_Construct_UFunction_UInteractionEffect_UI_WorldTearDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionEffect_UI_WorldTearDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionEffect_UI_WorldTearDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionEffect_UI_WorldTearDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionEffect_UI_WorldTearDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionEffect_UI_WorldTearDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractionEffect_UI_NoRegister()
	{
		return UInteractionEffect_UI::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionEffect_UI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WidgetInfos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionEffect_UI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionEffectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractionEffect_UI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionEffect_UI_GetInteractionPawn, "GetInteractionPawn" }, // 3207435727
		{ &Z_Construct_UFunction_UInteractionEffect_UI_WorldTearDown, "WorldTearDown" }, // 3131129593
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionEffect_UI_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TriggerTask/InteractionTask/InteractionEffect/InteractionEffect_UI.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffect_UI.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractionEffect_UI_Statics::NewProp_WidgetInfos_Inner = { "WidgetInfos", nullptr, (EPropertyFlags)0x0000000000000008, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWidgetInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionEffect_UI_Statics::NewProp_WidgetInfos_MetaData[] = {
		{ "Category", "InteractionEffect" },
		{ "Comment", "//All the widgets class that will be showed in the effect\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffect_UI.h" },
		{ "ToolTip", "All the widgets class that will be showed in the effect" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInteractionEffect_UI_Statics::NewProp_WidgetInfos = { "WidgetInfos", nullptr, (EPropertyFlags)0x001000000000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionEffect_UI, WidgetInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInteractionEffect_UI_Statics::NewProp_WidgetInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionEffect_UI_Statics::NewProp_WidgetInfos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionEffect_UI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionEffect_UI_Statics::NewProp_WidgetInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionEffect_UI_Statics::NewProp_WidgetInfos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionEffect_UI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionEffect_UI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractionEffect_UI_Statics::ClassParams = {
		&UInteractionEffect_UI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInteractionEffect_UI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionEffect_UI_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionEffect_UI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionEffect_UI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionEffect_UI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractionEffect_UI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionEffect_UI, 240966920);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UInteractionEffect_UI>()
	{
		return UInteractionEffect_UI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionEffect_UI(Z_Construct_UClass_UInteractionEffect_UI, &UInteractionEffect_UI::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UInteractionEffect_UI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionEffect_UI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
