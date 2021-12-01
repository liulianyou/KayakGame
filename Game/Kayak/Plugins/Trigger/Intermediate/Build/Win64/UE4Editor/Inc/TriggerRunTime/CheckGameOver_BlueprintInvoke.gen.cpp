// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerEvaluator/GameOverCondition/CheckGameOver_BlueprintInvoke.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckGameOver_BlueprintInvoke() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckGameOver_BlueprintInvoke_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckGameOver_BlueprintInvoke();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckGameOverBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	void UCheckGameOver_BlueprintInvoke::StaticRegisterNativesUCheckGameOver_BlueprintInvoke()
	{
	}
	UClass* Z_Construct_UClass_UCheckGameOver_BlueprintInvoke_NoRegister()
	{
		return UCheckGameOver_BlueprintInvoke::StaticClass();
	}
	struct Z_Construct_UClass_UCheckGameOver_BlueprintInvoke_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCheckGameOver_BlueprintInvoke_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCheckGameOverBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckGameOver_BlueprintInvoke_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n* This class only used to create game over condition dynamically\n*/" },
		{ "IncludePath", "TriggerEvaluator/GameOverCondition/CheckGameOver_BlueprintInvoke.h" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameOverCondition/CheckGameOver_BlueprintInvoke.h" },
		{ "ToolTip", "* This class only used to create game over condition dynamically" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCheckGameOver_BlueprintInvoke_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckGameOver_BlueprintInvoke>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCheckGameOver_BlueprintInvoke_Statics::ClassParams = {
		&UCheckGameOver_BlueprintInvoke::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCheckGameOver_BlueprintInvoke_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckGameOver_BlueprintInvoke_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCheckGameOver_BlueprintInvoke()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCheckGameOver_BlueprintInvoke_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCheckGameOver_BlueprintInvoke, 1674610653);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UCheckGameOver_BlueprintInvoke>()
	{
		return UCheckGameOver_BlueprintInvoke::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCheckGameOver_BlueprintInvoke(Z_Construct_UClass_UCheckGameOver_BlueprintInvoke, &UCheckGameOver_BlueprintInvoke::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UCheckGameOver_BlueprintInvoke"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckGameOver_BlueprintInvoke);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
