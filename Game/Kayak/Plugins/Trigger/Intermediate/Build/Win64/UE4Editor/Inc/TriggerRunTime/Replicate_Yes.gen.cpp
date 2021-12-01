// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/ReplicateType/Replicate_Yes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicate_Yes() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UReplicate_Yes_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UReplicate_Yes();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UReplicateTypeBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	void UReplicate_Yes::StaticRegisterNativesUReplicate_Yes()
	{
	}
	UClass* Z_Construct_UClass_UReplicate_Yes_NoRegister()
	{
		return UReplicate_Yes::StaticClass();
	}
	struct Z_Construct_UClass_UReplicate_Yes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplicate_Yes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicateTypeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicate_Yes_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRunttime" },
		{ "IncludePath", "Tool/ReplicateType/Replicate_Yes.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/ReplicateType/Replicate_Yes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplicate_Yes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicate_Yes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReplicate_Yes_Statics::ClassParams = {
		&UReplicate_Yes::StaticClass,
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
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReplicate_Yes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicate_Yes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReplicate_Yes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReplicate_Yes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReplicate_Yes, 86122265);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UReplicate_Yes>()
	{
		return UReplicate_Yes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReplicate_Yes(Z_Construct_UClass_UReplicate_Yes, &UReplicate_Yes::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UReplicate_Yes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicate_Yes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
