// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/OperationInformation/TriggerTaskResumeInformation/TriggerTaskResumeInformationBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerTaskResumeInformationBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskResumeInformationBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskResumeInformationBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UOperationInformationBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	void UTriggerTaskResumeInformationBase::StaticRegisterNativesUTriggerTaskResumeInformationBase()
	{
	}
	UClass* Z_Construct_UClass_UTriggerTaskResumeInformationBase_NoRegister()
	{
		return UTriggerTaskResumeInformationBase::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerTaskResumeInformationBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerTaskResumeInformationBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOperationInformationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskResumeInformationBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|OperationInfo" },
		{ "IncludePath", "Tool/OperationInformation/TriggerTaskResumeInformation/TriggerTaskResumeInformationBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskResumeInformation/TriggerTaskResumeInformationBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerTaskResumeInformationBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerTaskResumeInformationBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerTaskResumeInformationBase_Statics::ClassParams = {
		&UTriggerTaskResumeInformationBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskResumeInformationBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskResumeInformationBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerTaskResumeInformationBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerTaskResumeInformationBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerTaskResumeInformationBase, 3658890288);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerTaskResumeInformationBase>()
	{
		return UTriggerTaskResumeInformationBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerTaskResumeInformationBase(Z_Construct_UClass_UTriggerTaskResumeInformationBase, &UTriggerTaskResumeInformationBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerTaskResumeInformationBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerTaskResumeInformationBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
