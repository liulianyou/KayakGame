// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarGamePlayAttributeData.h"
#include "TriggerRunTime/Public/TriggerEvaluator/AvatarAttributes/CheckAvatarAttribute.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAvatarGamePlayAttributeData() {}
// Cross Module References
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_ECompareOperation();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAvatarGamePlayAttributeData_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAvatarGamePlayAttributeData();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAvatarInspectedDataBase();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
// End Cross Module References
	static UEnum* ECompareOperation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TriggerRunTime_ECompareOperation, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("ECompareOperation"));
		}
		return Singleton;
	}
	template<> TRIGGERRUNTIME_API UEnum* StaticEnum<ECompareOperation>()
	{
		return ECompareOperation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECompareOperation(ECompareOperation_StaticEnum, TEXT("/Script/TriggerRunTime"), TEXT("ECompareOperation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TriggerRunTime_ECompareOperation_Hash() { return 2570677546U; }
	UEnum* Z_Construct_UEnum_TriggerRunTime_ECompareOperation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECompareOperation"), 0, Get_Z_Construct_UEnum_TriggerRunTime_ECompareOperation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECompareOperation::PlaceHold", (int64)ECompareOperation::PlaceHold },
				{ "ECompareOperation::Equal", (int64)ECompareOperation::Equal },
				{ "ECompareOperation::Larger", (int64)ECompareOperation::Larger },
				{ "ECompareOperation::Smaller", (int64)ECompareOperation::Smaller },
				{ "ECompareOperation::LargerAndEqual", (int64)ECompareOperation::LargerAndEqual },
				{ "ECompareOperation::SmallerAndEqual", (int64)ECompareOperation::SmallerAndEqual },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Equal.DisplayName", "=" },
				{ "Equal.Name", "ECompareOperation::Equal" },
				{ "Larger.DisplayName", ">" },
				{ "Larger.Name", "ECompareOperation::Larger" },
				{ "LargerAndEqual.DisplayName", ">=" },
				{ "LargerAndEqual.Name", "ECompareOperation::LargerAndEqual" },
				{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarGamePlayAttributeData.h" },
				{ "PlaceHold.Hidden", "" },
				{ "PlaceHold.Name", "ECompareOperation::PlaceHold" },
				{ "Smaller.DisplayName", "<" },
				{ "Smaller.Name", "ECompareOperation::Smaller" },
				{ "SmallerAndEqual.DisplayName", "<=" },
				{ "SmallerAndEqual.Name", "ECompareOperation::SmallerAndEqual" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TriggerRunTime,
				nullptr,
				"ECompareOperation",
				"ECompareOperation",
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
	void UAvatarGamePlayAttributeData::StaticRegisterNativesUAvatarGamePlayAttributeData()
	{
	}
	UClass* Z_Construct_UClass_UAvatarGamePlayAttributeData_NoRegister()
	{
		return UAvatarGamePlayAttributeData::StaticClass();
	}
	struct Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attributes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompareType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompareType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CompareType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompareToTargetGameplayAttribute_MetaData[];
#endif
		static void NewProp_CompareToTargetGameplayAttribute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CompareToTargetGameplayAttribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsePercentage_MetaData[];
#endif
		static void NewProp_UsePercentage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UsePercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThresholdValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThresholdValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComparedAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComparedAttributes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAvatarInspectedDataBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TriggerEvaluator/AvatarAttributes/AvatarData/AvatarGamePlayAttributeData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarGamePlayAttributeData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_Attributes_MetaData[] = {
		{ "Category", "AvatarData" },
		{ "Comment", "//The attribute this data inspect\n" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarGamePlayAttributeData.h" },
		{ "ToolTip", "The attribute this data inspect" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAvatarGamePlayAttributeData, Attributes), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_Attributes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_CompareType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_CompareType_MetaData[] = {
		{ "Category", "AvatarData" },
		{ "Comment", "/*\n\x09* How to check this attributes\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarGamePlayAttributeData.h" },
		{ "ToolTip", "* How to check this attributes" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_CompareType = { "CompareType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAvatarGamePlayAttributeData, CompareType), Z_Construct_UEnum_TriggerRunTime_ECompareOperation, METADATA_PARAMS(Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_CompareType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_CompareType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_CompareToTargetGameplayAttribute_MetaData[] = {
		{ "Category", "AvatarData" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarGamePlayAttributeData.h" },
	};
#endif
	void Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_CompareToTargetGameplayAttribute_SetBit(void* Obj)
	{
		((UAvatarGamePlayAttributeData*)Obj)->CompareToTargetGameplayAttribute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_CompareToTargetGameplayAttribute = { "CompareToTargetGameplayAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAvatarGamePlayAttributeData), &Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_CompareToTargetGameplayAttribute_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_CompareToTargetGameplayAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_CompareToTargetGameplayAttribute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_UsePercentage_MetaData[] = {
		{ "Category", "AvatarData" },
		{ "Comment", "/*\n\x09* Weather this data will only focus on the percentage\n\x09* When this value is true means the value will be percentage\n\x09*/" },
		{ "EditCondition", "!CompareToTargetGameplayAttribute" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarGamePlayAttributeData.h" },
		{ "ToolTip", "* Weather this data will only focus on the percentage\n* When this value is true means the value will be percentage" },
	};
#endif
	void Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_UsePercentage_SetBit(void* Obj)
	{
		((UAvatarGamePlayAttributeData*)Obj)->UsePercentage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_UsePercentage = { "UsePercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAvatarGamePlayAttributeData), &Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_UsePercentage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_UsePercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_UsePercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_ThresholdValue_MetaData[] = {
		{ "Category", "AvatarData" },
		{ "Comment", "/*\n\x09* the value which will used to compare\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarGamePlayAttributeData.h" },
		{ "ToolTip", "* the value which will used to compare" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_ThresholdValue = { "ThresholdValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAvatarGamePlayAttributeData, ThresholdValue), METADATA_PARAMS(Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_ThresholdValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_ThresholdValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_MaxValue_MetaData[] = {
		{ "Category", "AvatarData" },
		{ "Comment", "/*\n\x09* the value which will used to compare\n\x09*/" },
		{ "EditCondition", "!CompareToTargetGameplayAttribute && UsePercentage" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarGamePlayAttributeData.h" },
		{ "ToolTip", "* the value which will used to compare" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAvatarGamePlayAttributeData, MaxValue), METADATA_PARAMS(Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_MaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_MaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_ComparedAttributes_MetaData[] = {
		{ "Category", "AvatarData" },
		{ "Comment", "//The attribute which should be compared with the Attribute\n" },
		{ "EditCondition", "CompareToTargetGameplayAttribute" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarGamePlayAttributeData.h" },
		{ "ToolTip", "The attribute which should be compared with the Attribute" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_ComparedAttributes = { "ComparedAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAvatarGamePlayAttributeData, ComparedAttributes), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_ComparedAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_ComparedAttributes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_Attributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_CompareType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_CompareType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_CompareToTargetGameplayAttribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_UsePercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_ThresholdValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_MaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::NewProp_ComparedAttributes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAvatarGamePlayAttributeData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::ClassParams = {
		&UAvatarGamePlayAttributeData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAvatarGamePlayAttributeData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAvatarGamePlayAttributeData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAvatarGamePlayAttributeData, 614171958);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UAvatarGamePlayAttributeData>()
	{
		return UAvatarGamePlayAttributeData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAvatarGamePlayAttributeData(Z_Construct_UClass_UAvatarGamePlayAttributeData, &UAvatarGamePlayAttributeData::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UAvatarGamePlayAttributeData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAvatarGamePlayAttributeData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
