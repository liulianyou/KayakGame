// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarGameplayTagAction.h"
#include "TriggerRunTime/Public/TriggerEvaluator/AvatarAttributes/CheckAvatarAttribute.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAvatarGameplayTagAction() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAvatarGameplayTagAction_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAvatarGameplayTagAction();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAvatarInspectedDataBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	DEFINE_FUNCTION(UAvatarGameplayTagAction::execOnTagsChanged)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_TagChange);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTagsChanged(Z_Param_TagChange,Z_Param_NewCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAvatarGameplayTagAction::execGetHasTagsMatched)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHasTagsMatched();
		P_NATIVE_END;
	}
	void UAvatarGameplayTagAction::StaticRegisterNativesUAvatarGameplayTagAction()
	{
		UClass* Class = UAvatarGameplayTagAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHasTagsMatched", &UAvatarGameplayTagAction::execGetHasTagsMatched },
			{ "OnTagsChanged", &UAvatarGameplayTagAction::execOnTagsChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAvatarGameplayTagAction_GetHasTagsMatched_Statics
	{
		struct AvatarGameplayTagAction_eventGetHasTagsMatched_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAvatarGameplayTagAction_GetHasTagsMatched_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AvatarGameplayTagAction_eventGetHasTagsMatched_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAvatarGameplayTagAction_GetHasTagsMatched_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AvatarGameplayTagAction_eventGetHasTagsMatched_Parms), &Z_Construct_UFunction_UAvatarGameplayTagAction_GetHasTagsMatched_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAvatarGameplayTagAction_GetHasTagsMatched_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvatarGameplayTagAction_GetHasTagsMatched_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvatarGameplayTagAction_GetHasTagsMatched_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Override UAvatarInspectedDataBase\n" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarGameplayTagAction.h" },
		{ "ToolTip", "Override UAvatarInspectedDataBase" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAvatarGameplayTagAction_GetHasTagsMatched_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvatarGameplayTagAction, nullptr, "GetHasTagsMatched", nullptr, nullptr, sizeof(AvatarGameplayTagAction_eventGetHasTagsMatched_Parms), Z_Construct_UFunction_UAvatarGameplayTagAction_GetHasTagsMatched_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarGameplayTagAction_GetHasTagsMatched_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAvatarGameplayTagAction_GetHasTagsMatched_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarGameplayTagAction_GetHasTagsMatched_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAvatarGameplayTagAction_GetHasTagsMatched()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAvatarGameplayTagAction_GetHasTagsMatched_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAvatarGameplayTagAction_OnTagsChanged_Statics
	{
		struct AvatarGameplayTagAction_eventOnTagsChanged_Parms
		{
			FGameplayTag TagChange;
			int32 NewCount;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagChange;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAvatarGameplayTagAction_OnTagsChanged_Statics::NewProp_TagChange = { "TagChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AvatarGameplayTagAction_eventOnTagsChanged_Parms, TagChange), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAvatarGameplayTagAction_OnTagsChanged_Statics::NewProp_NewCount = { "NewCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AvatarGameplayTagAction_eventOnTagsChanged_Parms, NewCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAvatarGameplayTagAction_OnTagsChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvatarGameplayTagAction_OnTagsChanged_Statics::NewProp_TagChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvatarGameplayTagAction_OnTagsChanged_Statics::NewProp_NewCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvatarGameplayTagAction_OnTagsChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarGameplayTagAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAvatarGameplayTagAction_OnTagsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvatarGameplayTagAction, nullptr, "OnTagsChanged", nullptr, nullptr, sizeof(AvatarGameplayTagAction_eventOnTagsChanged_Parms), Z_Construct_UFunction_UAvatarGameplayTagAction_OnTagsChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarGameplayTagAction_OnTagsChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAvatarGameplayTagAction_OnTagsChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarGameplayTagAction_OnTagsChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAvatarGameplayTagAction_OnTagsChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAvatarGameplayTagAction_OnTagsChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAvatarGameplayTagAction_NoRegister()
	{
		return UAvatarGameplayTagAction::StaticClass();
	}
	struct Z_Construct_UClass_UAvatarGameplayTagAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAvatarGameplayTagAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAvatarInspectedDataBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAvatarGameplayTagAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAvatarGameplayTagAction_GetHasTagsMatched, "GetHasTagsMatched" }, // 2141749277
		{ &Z_Construct_UFunction_UAvatarGameplayTagAction_OnTagsChanged, "OnTagsChanged" }, // 48182431
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvatarGameplayTagAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * used to inspect the avatars do any game-play-tag action or not.\n */" },
		{ "IncludePath", "TriggerEvaluator/AvatarAttributes/AvatarData/AvatarGameplayTagAction.h" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarGameplayTagAction.h" },
		{ "ToolTip", "used to inspect the avatars do any game-play-tag action or not." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvatarGameplayTagAction_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "AvatarGameplayTagAction" },
		{ "Comment", "//The tags this data inspect\n" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarGameplayTagAction.h" },
		{ "ToolTip", "The tags this data inspect" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAvatarGameplayTagAction_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAvatarGameplayTagAction, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UAvatarGameplayTagAction_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAvatarGameplayTagAction_Statics::NewProp_Tags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAvatarGameplayTagAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvatarGameplayTagAction_Statics::NewProp_Tags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAvatarGameplayTagAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAvatarGameplayTagAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAvatarGameplayTagAction_Statics::ClassParams = {
		&UAvatarGameplayTagAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAvatarGameplayTagAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAvatarGameplayTagAction_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAvatarGameplayTagAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAvatarGameplayTagAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAvatarGameplayTagAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAvatarGameplayTagAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAvatarGameplayTagAction, 4265348647);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UAvatarGameplayTagAction>()
	{
		return UAvatarGameplayTagAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAvatarGameplayTagAction(Z_Construct_UClass_UAvatarGameplayTagAction, &UAvatarGameplayTagAction::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UAvatarGameplayTagAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAvatarGameplayTagAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
