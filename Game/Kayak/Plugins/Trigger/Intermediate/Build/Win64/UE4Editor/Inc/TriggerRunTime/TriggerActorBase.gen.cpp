// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerType/SceneTrigger/TriggerActorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerActorBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ATriggerActorBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ATriggerActorBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerInterfaceSupportBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerInterface_NoRegister();
// End Cross Module References
	void ATriggerActorBase::StaticRegisterNativesATriggerActorBase()
	{
	}
	UClass* Z_Construct_UClass_ATriggerActorBase_NoRegister()
	{
		return ATriggerActorBase::StaticClass();
	}
	struct Z_Construct_UClass_ATriggerActorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterfaceSupport_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InterfaceSupport;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATriggerActorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerActorBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "IncludePath", "TriggerType/SceneTrigger/TriggerActorBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/TriggerActorBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerActorBase_Statics::NewProp_InterfaceSupport_MetaData[] = {
		{ "Category", "TriggerActor|InterfaceSupport" },
		{ "Comment", "/*\n\x09* The implementation to support the interface\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/TriggerActorBase.h" },
		{ "ToolTip", "* The implementation to support the interface" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerActorBase_Statics::NewProp_InterfaceSupport = { "InterfaceSupport", nullptr, (EPropertyFlags)0x001200000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerActorBase, InterfaceSupport), Z_Construct_UClass_UTriggerInterfaceSupportBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerActorBase_Statics::NewProp_InterfaceSupport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerActorBase_Statics::NewProp_InterfaceSupport_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATriggerActorBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerActorBase_Statics::NewProp_InterfaceSupport,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATriggerActorBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTriggerInterface_NoRegister, (int32)VTABLE_OFFSET(ATriggerActorBase, ITriggerInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATriggerActorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerActorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATriggerActorBase_Statics::ClassParams = {
		&ATriggerActorBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATriggerActorBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerActorBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x049000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ATriggerActorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerActorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATriggerActorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATriggerActorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATriggerActorBase, 3378356778);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<ATriggerActorBase>()
	{
		return ATriggerActorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATriggerActorBase(Z_Construct_UClass_ATriggerActorBase, &ATriggerActorBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("ATriggerActorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerActorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
