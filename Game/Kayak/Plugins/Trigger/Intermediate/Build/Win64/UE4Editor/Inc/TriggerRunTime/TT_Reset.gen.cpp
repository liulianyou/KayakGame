// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/TT_Reset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTT_Reset() {}
// Cross Module References
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_EResetType();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_Reset_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_Reset();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase();
// End Cross Module References
	static UEnum* EResetType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TriggerRunTime_EResetType, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("EResetType"));
		}
		return Singleton;
	}
	template<> TRIGGERRUNTIME_API UEnum* StaticEnum<EResetType>()
	{
		return EResetType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EResetType(EResetType_StaticEnum, TEXT("/Script/TriggerRunTime"), TEXT("EResetType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TriggerRunTime_EResetType_Hash() { return 2792177547U; }
	UEnum* Z_Construct_UEnum_TriggerRunTime_EResetType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EResetType"), 0, Get_Z_Construct_UEnum_TriggerRunTime_EResetType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EResetType::EResetType_ResetCharacterAttributes", (int64)EResetType::EResetType_ResetCharacterAttributes },
				{ "EResetType::EResetType_ResetTriggers", (int64)EResetType::EResetType_ResetTriggers },
				{ "EResetType::EResetType_ResetALL", (int64)EResetType::EResetType_ResetALL },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EResetType_ResetALL.Comment", "//We will reset all aspects of this game mode, just like the player reload this map\n" },
				{ "EResetType_ResetALL.DisplayName", "Reset all" },
				{ "EResetType_ResetALL.Name", "EResetType::EResetType_ResetALL" },
				{ "EResetType_ResetALL.ToolTip", "We will reset all aspects of this game mode, just like the player reload this map" },
				{ "EResetType_ResetCharacterAttributes.Comment", "//Only reset attributes of character, no other values\n" },
				{ "EResetType_ResetCharacterAttributes.DisplayName", "Reset Character attributes" },
				{ "EResetType_ResetCharacterAttributes.Name", "EResetType::EResetType_ResetCharacterAttributes" },
				{ "EResetType_ResetCharacterAttributes.ToolTip", "Only reset attributes of character, no other values" },
				{ "EResetType_ResetTriggers.Comment", "//Only reset triggers.\n" },
				{ "EResetType_ResetTriggers.DisplayName", "Reset triggers" },
				{ "EResetType_ResetTriggers.Name", "EResetType::EResetType_ResetTriggers" },
				{ "EResetType_ResetTriggers.ToolTip", "Only reset triggers." },
				{ "ModuleRelativePath", "Public/TriggerTask/TT_Reset.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TriggerRunTime,
				nullptr,
				"EResetType",
				"EResetType",
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
	DEFINE_FUNCTION(UTT_Reset::execResetAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_Reset::execResetCharacterAttributes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetCharacterAttributes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_Reset::execResetTrigger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetTrigger();
		P_NATIVE_END;
	}
	void UTT_Reset::StaticRegisterNativesUTT_Reset()
	{
		UClass* Class = UTT_Reset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetAll", &UTT_Reset::execResetAll },
			{ "ResetCharacterAttributes", &UTT_Reset::execResetCharacterAttributes },
			{ "ResetTrigger", &UTT_Reset::execResetTrigger },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTT_Reset_ResetAll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Reset_ResetAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Trigger|Task" },
		{ "ModuleRelativePath", "Public/TriggerTask/TT_Reset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_Reset_ResetAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_Reset, nullptr, "ResetAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_Reset_ResetAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Reset_ResetAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_Reset_ResetAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_Reset_ResetAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_Reset_ResetCharacterAttributes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Reset_ResetCharacterAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Trigger|Task" },
		{ "ModuleRelativePath", "Public/TriggerTask/TT_Reset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_Reset_ResetCharacterAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_Reset, nullptr, "ResetCharacterAttributes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_Reset_ResetCharacterAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Reset_ResetCharacterAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_Reset_ResetCharacterAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_Reset_ResetCharacterAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_Reset_ResetTrigger_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Reset_ResetTrigger_Statics::Function_MetaDataParams[] = {
		{ "Category", "Trigger|Task" },
		{ "ModuleRelativePath", "Public/TriggerTask/TT_Reset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_Reset_ResetTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_Reset, nullptr, "ResetTrigger", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_Reset_ResetTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Reset_ResetTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_Reset_ResetTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_Reset_ResetTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTT_Reset_NoRegister()
	{
		return UTT_Reset::StaticClass();
	}
	struct Z_Construct_UClass_UTT_Reset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetToLastSavePoint_MetaData[];
#endif
		static void NewProp_ResetToLastSavePoint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ResetToLastSavePoint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ResetType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ResetType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTT_Reset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerTaskBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTT_Reset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTT_Reset_ResetAll, "ResetAll" }, // 3376902604
		{ &Z_Construct_UFunction_UTT_Reset_ResetCharacterAttributes, "ResetCharacterAttributes" }, // 2034259234
		{ &Z_Construct_UFunction_UTT_Reset_ResetTrigger, "ResetTrigger" }, // 2529795723
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_Reset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Trigger|Task" },
		{ "IncludePath", "TriggerTask/TT_Reset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/TT_Reset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_Reset_Statics::NewProp_ResetToLastSavePoint_MetaData[] = {
		{ "Category", "Trigger|Task" },
		{ "ModuleRelativePath", "Public/TriggerTask/TT_Reset.h" },
	};
#endif
	void Z_Construct_UClass_UTT_Reset_Statics::NewProp_ResetToLastSavePoint_SetBit(void* Obj)
	{
		((UTT_Reset*)Obj)->ResetToLastSavePoint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTT_Reset_Statics::NewProp_ResetToLastSavePoint = { "ResetToLastSavePoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTT_Reset), &Z_Construct_UClass_UTT_Reset_Statics::NewProp_ResetToLastSavePoint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTT_Reset_Statics::NewProp_ResetToLastSavePoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_Reset_Statics::NewProp_ResetToLastSavePoint_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTT_Reset_Statics::NewProp_ResetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_Reset_Statics::NewProp_ResetType_MetaData[] = {
		{ "Category", "Trigger|Task" },
		{ "Comment", "//Different reset type will cause different appearance\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TT_Reset.h" },
		{ "ToolTip", "Different reset type will cause different appearance" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTT_Reset_Statics::NewProp_ResetType = { "ResetType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_Reset, ResetType), Z_Construct_UEnum_TriggerRunTime_EResetType, METADATA_PARAMS(Z_Construct_UClass_UTT_Reset_Statics::NewProp_ResetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_Reset_Statics::NewProp_ResetType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTT_Reset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_Reset_Statics::NewProp_ResetToLastSavePoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_Reset_Statics::NewProp_ResetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_Reset_Statics::NewProp_ResetType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTT_Reset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTT_Reset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTT_Reset_Statics::ClassParams = {
		&UTT_Reset::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTT_Reset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTT_Reset_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTT_Reset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_Reset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTT_Reset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTT_Reset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTT_Reset, 700115034);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTT_Reset>()
	{
		return UTT_Reset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTT_Reset(Z_Construct_UClass_UTT_Reset, &UTT_Reset::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTT_Reset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTT_Reset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
