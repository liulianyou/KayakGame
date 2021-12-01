// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerEvaluator/Tool/TriggerTaskRelationshipInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerTaskRelationshipInterface() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskRelationshipInterface_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskRelationshipInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	void UTriggerTaskRelationshipInterface::StaticRegisterNativesUTriggerTaskRelationshipInterface()
	{
	}
	UClass* Z_Construct_UClass_UTriggerTaskRelationshipInterface_NoRegister()
	{
		return UTriggerTaskRelationshipInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerTaskRelationshipInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerTaskRelationshipInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskRelationshipInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerEvaluator/Tool/TriggerTaskRelationshipInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerTaskRelationshipInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITriggerTaskRelationshipInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerTaskRelationshipInterface_Statics::ClassParams = {
		&UTriggerTaskRelationshipInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskRelationshipInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskRelationshipInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerTaskRelationshipInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerTaskRelationshipInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerTaskRelationshipInterface, 1171311066);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerTaskRelationshipInterface>()
	{
		return UTriggerTaskRelationshipInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerTaskRelationshipInterface(Z_Construct_UClass_UTriggerTaskRelationshipInterface, &UTriggerTaskRelationshipInterface::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerTaskRelationshipInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerTaskRelationshipInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
