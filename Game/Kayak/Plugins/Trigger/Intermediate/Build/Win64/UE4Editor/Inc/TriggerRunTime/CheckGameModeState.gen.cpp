// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerEvaluator/GameState/CheckGameModeState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckGameModeState() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckGameModeState_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckGameModeState();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEvaluatorCondition();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerGameModeDataBase_NoRegister();
// End Cross Module References
	void UCheckGameModeState::StaticRegisterNativesUCheckGameModeState()
	{
	}
	UClass* Z_Construct_UClass_UCheckGameModeState_NoRegister()
	{
		return UCheckGameModeState::StaticClass();
	}
	struct Z_Construct_UClass_UCheckGameModeState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InspectData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InspectData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCheckGameModeState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEvaluatorCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckGameModeState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TriggerEvaluator/GameState/CheckGameModeState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameState/CheckGameModeState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckGameModeState_Statics::NewProp_InspectData_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//The data that this condition need to inspect the game mode\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameState/CheckGameModeState.h" },
		{ "ToolTip", "The data that this condition need to inspect the game mode" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCheckGameModeState_Statics::NewProp_InspectData = { "InspectData", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckGameModeState, InspectData), Z_Construct_UClass_UTriggerGameModeDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCheckGameModeState_Statics::NewProp_InspectData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckGameModeState_Statics::NewProp_InspectData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCheckGameModeState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckGameModeState_Statics::NewProp_InspectData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCheckGameModeState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckGameModeState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCheckGameModeState_Statics::ClassParams = {
		&UCheckGameModeState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCheckGameModeState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCheckGameModeState_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCheckGameModeState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckGameModeState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCheckGameModeState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCheckGameModeState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCheckGameModeState, 1443463470);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UCheckGameModeState>()
	{
		return UCheckGameModeState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCheckGameModeState(Z_Construct_UClass_UCheckGameModeState, &UCheckGameModeState::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UCheckGameModeState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckGameModeState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
