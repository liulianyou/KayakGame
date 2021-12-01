// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/Editor/ResespawnData/RespawnEditorDataBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRespawnEditorDataBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ARespawnEditorDataBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ARespawnEditorDataBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ATriggerEditorActorBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	void ARespawnEditorDataBase::StaticRegisterNativesARespawnEditorDataBase()
	{
	}
	UClass* Z_Construct_UClass_ARespawnEditorDataBase_NoRegister()
	{
		return ARespawnEditorDataBase::StaticClass();
	}
	struct Z_Construct_UClass_ARespawnEditorDataBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARespawnEditorDataBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerEditorActorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARespawnEditorDataBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tool/Editor/ResespawnData/RespawnEditorDataBase.h" },
		{ "ModuleRelativePath", "Public/Tool/Editor/ResespawnData/RespawnEditorDataBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARespawnEditorDataBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARespawnEditorDataBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARespawnEditorDataBase_Statics::ClassParams = {
		&ARespawnEditorDataBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARespawnEditorDataBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARespawnEditorDataBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARespawnEditorDataBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARespawnEditorDataBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARespawnEditorDataBase, 3108274917);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<ARespawnEditorDataBase>()
	{
		return ARespawnEditorDataBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARespawnEditorDataBase(Z_Construct_UClass_ARespawnEditorDataBase, &ARespawnEditorDataBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("ARespawnEditorDataBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARespawnEditorDataBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
