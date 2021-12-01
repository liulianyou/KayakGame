// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/TT_LevelSequence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTT_LevelSequence() {}
// Cross Module References
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_ETTLevelSequenceState();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_LevelSequence_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_LevelSequence();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
// End Cross Module References
	static UEnum* ETTLevelSequenceState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TriggerRunTime_ETTLevelSequenceState, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("ETTLevelSequenceState"));
		}
		return Singleton;
	}
	template<> TRIGGERRUNTIME_API UEnum* StaticEnum<ETTLevelSequenceState>()
	{
		return ETTLevelSequenceState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETTLevelSequenceState(ETTLevelSequenceState_StaticEnum, TEXT("/Script/TriggerRunTime"), TEXT("ETTLevelSequenceState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TriggerRunTime_ETTLevelSequenceState_Hash() { return 2361837903U; }
	UEnum* Z_Construct_UEnum_TriggerRunTime_ETTLevelSequenceState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETTLevelSequenceState"), 0, Get_Z_Construct_UEnum_TriggerRunTime_ETTLevelSequenceState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETTLevelSequenceState::ETTLSS_NotPlay", (int64)ETTLevelSequenceState::ETTLSS_NotPlay },
				{ "ETTLevelSequenceState::ETTLSS_Playing", (int64)ETTLevelSequenceState::ETTLSS_Playing },
				{ "ETTLevelSequenceState::ETTLSS_Finished", (int64)ETTLevelSequenceState::ETTLSS_Finished },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ETTLSS_Finished.Name", "ETTLevelSequenceState::ETTLSS_Finished" },
				{ "ETTLSS_NotPlay.Name", "ETTLevelSequenceState::ETTLSS_NotPlay" },
				{ "ETTLSS_Playing.Name", "ETTLevelSequenceState::ETTLSS_Playing" },
				{ "ModuleRelativePath", "Public/TriggerTask/TT_LevelSequence.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TriggerRunTime,
				nullptr,
				"ETTLevelSequenceState",
				"ETTLevelSequenceState",
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
	DEFINE_FUNCTION(UTT_LevelSequence::execOnRep_IsSequencePlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsSequencePlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_LevelSequence::execOnSequenceFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSequenceFinished();
		P_NATIVE_END;
	}
	void UTT_LevelSequence::StaticRegisterNativesUTT_LevelSequence()
	{
		UClass* Class = UTT_LevelSequence::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_IsSequencePlaying", &UTT_LevelSequence::execOnRep_IsSequencePlaying },
			{ "OnSequenceFinished", &UTT_LevelSequence::execOnSequenceFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTT_LevelSequence_OnRep_IsSequencePlaying_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_LevelSequence_OnRep_IsSequencePlaying_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TT_LevelSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_LevelSequence_OnRep_IsSequencePlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_LevelSequence, nullptr, "OnRep_IsSequencePlaying", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_LevelSequence_OnRep_IsSequencePlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_LevelSequence_OnRep_IsSequencePlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_LevelSequence_OnRep_IsSequencePlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_LevelSequence_OnRep_IsSequencePlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_LevelSequence_OnSequenceFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_LevelSequence_OnSequenceFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TT_LevelSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_LevelSequence_OnSequenceFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_LevelSequence, nullptr, "OnSequenceFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_LevelSequence_OnSequenceFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_LevelSequence_OnSequenceFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_LevelSequence_OnSequenceFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_LevelSequence_OnSequenceFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTT_LevelSequence_NoRegister()
	{
		return UTT_LevelSequence::StaticClass();
	}
	struct Z_Construct_UClass_UTT_LevelSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelSequenceActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelSequenceActor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SequenceState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequenceState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SequenceState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTT_LevelSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerTaskBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTT_LevelSequence_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTT_LevelSequence_OnRep_IsSequencePlaying, "OnRep_IsSequencePlaying" }, // 2949207113
		{ &Z_Construct_UFunction_UTT_LevelSequence_OnSequenceFinished, "OnSequenceFinished" }, // 749099667
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_LevelSequence_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Task to play level sequence.\n */" },
		{ "IncludePath", "TriggerTask/TT_LevelSequence.h" },
		{ "ModuleRelativePath", "Public/TriggerTask/TT_LevelSequence.h" },
		{ "ToolTip", "Task to play level sequence." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_LevelSequence_Statics::NewProp_LevelSequenceActor_MetaData[] = {
		{ "Category", "LevelSequence" },
		{ "ModuleRelativePath", "Public/TriggerTask/TT_LevelSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTT_LevelSequence_Statics::NewProp_LevelSequenceActor = { "LevelSequenceActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_LevelSequence, LevelSequenceActor), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTT_LevelSequence_Statics::NewProp_LevelSequenceActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_LevelSequence_Statics::NewProp_LevelSequenceActor_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTT_LevelSequence_Statics::NewProp_SequenceState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_LevelSequence_Statics::NewProp_SequenceState_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TT_LevelSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTT_LevelSequence_Statics::NewProp_SequenceState = { "SequenceState", "OnRep_IsSequencePlaying", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_LevelSequence, SequenceState), Z_Construct_UEnum_TriggerRunTime_ETTLevelSequenceState, METADATA_PARAMS(Z_Construct_UClass_UTT_LevelSequence_Statics::NewProp_SequenceState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_LevelSequence_Statics::NewProp_SequenceState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTT_LevelSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_LevelSequence_Statics::NewProp_LevelSequenceActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_LevelSequence_Statics::NewProp_SequenceState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_LevelSequence_Statics::NewProp_SequenceState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTT_LevelSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTT_LevelSequence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTT_LevelSequence_Statics::ClassParams = {
		&UTT_LevelSequence::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTT_LevelSequence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTT_LevelSequence_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTT_LevelSequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_LevelSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTT_LevelSequence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTT_LevelSequence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTT_LevelSequence, 3544610570);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTT_LevelSequence>()
	{
		return UTT_LevelSequence::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTT_LevelSequence(Z_Construct_UClass_UTT_LevelSequence, &UTT_LevelSequence::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTT_LevelSequence"), false, nullptr, nullptr, nullptr);

	void UTT_LevelSequence::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_SequenceState(TEXT("SequenceState"));

		const bool bIsValid = true
			&& Name_SequenceState == ClassReps[(int32)ENetFields_Private::SequenceState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UTT_LevelSequence"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTT_LevelSequence);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
