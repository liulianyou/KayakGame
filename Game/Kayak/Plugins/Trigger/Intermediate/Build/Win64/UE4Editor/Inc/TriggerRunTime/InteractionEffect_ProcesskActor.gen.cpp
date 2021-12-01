// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffect_ProcesskActor.h"
#include "TriggerRunTime/Public/TriggerTask/InteractionTask/TT_Interaction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionEffect_ProcesskActor() {}
// Cross Module References
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_EProcessType();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UInteractionEffect_ProcessActor_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UInteractionEffect_ProcessActor();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UInteractionEffectBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static UEnum* EProcessType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TriggerRunTime_EProcessType, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("EProcessType"));
		}
		return Singleton;
	}
	template<> TRIGGERRUNTIME_API UEnum* StaticEnum<EProcessType>()
	{
		return EProcessType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EProcessType(EProcessType_StaticEnum, TEXT("/Script/TriggerRunTime"), TEXT("EProcessType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TriggerRunTime_EProcessType_Hash() { return 3738240178U; }
	UEnum* Z_Construct_UEnum_TriggerRunTime_EProcessType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EProcessType"), 0, Get_Z_Construct_UEnum_TriggerRunTime_EProcessType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EProcessType::EProcessType_Click", (int64)EProcessType::EProcessType_Click },
				{ "EProcessType::EProcessType_Hover", (int64)EProcessType::EProcessType_Hover },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "//The processed type that the player want to interact with the target actor\n" },
				{ "EProcessType_Click.DisplayName", "Click" },
				{ "EProcessType_Click.Name", "EProcessType::EProcessType_Click" },
				{ "EProcessType_Hover.DisplayName", "Hover" },
				{ "EProcessType_Hover.Name", "EProcessType::EProcessType_Hover" },
				{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffect_ProcesskActor.h" },
				{ "ToolTip", "The processed type that the player want to interact with the target actor" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TriggerRunTime,
				nullptr,
				"EProcessType",
				"EProcessType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UInteractionEffect_ProcessActor::StaticRegisterNativesUInteractionEffect_ProcessActor()
	{
	}
	UClass* Z_Construct_UClass_UInteractionEffect_ProcessActor_NoRegister()
	{
		return UInteractionEffect_ProcessActor::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionEffect_ProcessActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProcessType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcessType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProcessType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionEffect_ProcessActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionEffectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionEffect_ProcessActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*Blueprintable, BlueprintType, editinlinenew, DefaultToInstanced, Within = \"TT_Interaction\"*/" },
		{ "IncludePath", "TriggerTask/InteractionTask/InteractionEffect/InteractionEffect_ProcesskActor.h" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffect_ProcesskActor.h" },
		{ "ToolTip", "Blueprintable, BlueprintType, editinlinenew, DefaultToInstanced, Within = \"TT_Interaction\"" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInteractionEffect_ProcessActor_Statics::NewProp_ProcessType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionEffect_ProcessActor_Statics::NewProp_ProcessType_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffect_ProcesskActor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInteractionEffect_ProcessActor_Statics::NewProp_ProcessType = { "ProcessType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionEffect_ProcessActor, ProcessType), Z_Construct_UEnum_TriggerRunTime_EProcessType, METADATA_PARAMS(Z_Construct_UClass_UInteractionEffect_ProcessActor_Statics::NewProp_ProcessType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionEffect_ProcessActor_Statics::NewProp_ProcessType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionEffect_ProcessActor_Statics::NewProp_TargetActor_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffect_ProcesskActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionEffect_ProcessActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionEffect_ProcessActor, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractionEffect_ProcessActor_Statics::NewProp_TargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionEffect_ProcessActor_Statics::NewProp_TargetActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionEffect_ProcessActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionEffect_ProcessActor_Statics::NewProp_ProcessType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionEffect_ProcessActor_Statics::NewProp_ProcessType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionEffect_ProcessActor_Statics::NewProp_TargetActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionEffect_ProcessActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionEffect_ProcessActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractionEffect_ProcessActor_Statics::ClassParams = {
		&UInteractionEffect_ProcessActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInteractionEffect_ProcessActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionEffect_ProcessActor_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionEffect_ProcessActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionEffect_ProcessActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionEffect_ProcessActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractionEffect_ProcessActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionEffect_ProcessActor, 1946808592);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UInteractionEffect_ProcessActor>()
	{
		return UInteractionEffect_ProcessActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionEffect_ProcessActor(Z_Construct_UClass_UInteractionEffect_ProcessActor, &UInteractionEffect_ProcessActor::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UInteractionEffect_ProcessActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionEffect_ProcessActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
