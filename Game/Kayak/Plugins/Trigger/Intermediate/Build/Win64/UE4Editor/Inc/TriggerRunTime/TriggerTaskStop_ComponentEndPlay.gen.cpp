// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/OperationInformation/TriggerTaskStopInformation/TriggerTaskStop_ComponentEndPlay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerTaskStop_ComponentEndPlay() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStop_ComponentEndPlay_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStop_ComponentEndPlay();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStopInformationBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	void UTriggerTaskStop_ComponentEndPlay::StaticRegisterNativesUTriggerTaskStop_ComponentEndPlay()
	{
	}
	UClass* Z_Construct_UClass_UTriggerTaskStop_ComponentEndPlay_NoRegister()
	{
		return UTriggerTaskStop_ComponentEndPlay::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerTaskStop_ComponentEndPlay_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerTaskStop_ComponentEndPlay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerTaskStopInformationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskStop_ComponentEndPlay_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|OperationInfo|TriggerTaskStop" },
		{ "Comment", "/*\n* This operation will be occurred at the begin destroy function of trigger task\n*/" },
		{ "IncludePath", "Tool/OperationInformation/TriggerTaskStopInformation/TriggerTaskStop_ComponentEndPlay.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStopInformation/TriggerTaskStop_ComponentEndPlay.h" },
		{ "ToolTip", "* This operation will be occurred at the begin destroy function of trigger task" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerTaskStop_ComponentEndPlay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerTaskStop_ComponentEndPlay>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerTaskStop_ComponentEndPlay_Statics::ClassParams = {
		&UTriggerTaskStop_ComponentEndPlay::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskStop_ComponentEndPlay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskStop_ComponentEndPlay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerTaskStop_ComponentEndPlay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerTaskStop_ComponentEndPlay_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerTaskStop_ComponentEndPlay, 2372029269);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerTaskStop_ComponentEndPlay>()
	{
		return UTriggerTaskStop_ComponentEndPlay::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerTaskStop_ComponentEndPlay(Z_Construct_UClass_UTriggerTaskStop_ComponentEndPlay, &UTriggerTaskStop_ComponentEndPlay::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerTaskStop_ComponentEndPlay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerTaskStop_ComponentEndPlay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
