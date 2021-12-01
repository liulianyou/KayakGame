// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/OperationInformation/TriggerTaskPauseInformation/TriggerTaskPauseInformationBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerTaskPauseInformationBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskPauseInformationBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskPauseInformationBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UOperationInformationBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	void UTriggerTaskPauseInformationBase::StaticRegisterNativesUTriggerTaskPauseInformationBase()
	{
	}
	UClass* Z_Construct_UClass_UTriggerTaskPauseInformationBase_NoRegister()
	{
		return UTriggerTaskPauseInformationBase::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerTaskPauseInformationBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerTaskPauseInformationBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOperationInformationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskPauseInformationBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|OperationInfo" },
		{ "IncludePath", "Tool/OperationInformation/TriggerTaskPauseInformation/TriggerTaskPauseInformationBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskPauseInformation/TriggerTaskPauseInformationBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerTaskPauseInformationBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerTaskPauseInformationBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerTaskPauseInformationBase_Statics::ClassParams = {
		&UTriggerTaskPauseInformationBase::StaticClass,
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
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskPauseInformationBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskPauseInformationBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerTaskPauseInformationBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerTaskPauseInformationBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerTaskPauseInformationBase, 3328554505);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerTaskPauseInformationBase>()
	{
		return UTriggerTaskPauseInformationBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerTaskPauseInformationBase(Z_Construct_UClass_UTriggerTaskPauseInformationBase, &UTriggerTaskPauseInformationBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerTaskPauseInformationBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerTaskPauseInformationBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
