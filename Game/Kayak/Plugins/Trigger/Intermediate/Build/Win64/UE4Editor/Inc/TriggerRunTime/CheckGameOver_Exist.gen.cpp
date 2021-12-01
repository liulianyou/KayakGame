// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerEvaluator/GameOverCondition/CheckGameOver_Exist.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckGameOver_Exist() {}
// Cross Module References
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FExistPlayerInfo();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckGameOver_Exist_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckGameOver_Exist();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckGameOverBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FExistPlayerInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FExistPlayerInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExistPlayerInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("ExistPlayerInfo"), sizeof(FExistPlayerInfo), Get_Z_Construct_UScriptStruct_FExistPlayerInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FExistPlayerInfo>()
{
	return FExistPlayerInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExistPlayerInfo(FExistPlayerInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("ExistPlayerInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFExistPlayerInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFExistPlayerInfo()
	{
		UScriptStruct::DeferCppStructOps<FExistPlayerInfo>(FName(TEXT("ExistPlayerInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFExistPlayerInfo;
	struct Z_Construct_UScriptStruct_FExistPlayerInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckedCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CheckedCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExistPlayerInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameOverCondition/CheckGameOver_Exist.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExistPlayerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExistPlayerInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExistPlayerInfo_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "ExistPlayerInfo" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameOverCondition/CheckGameOver_Exist.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExistPlayerInfo_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExistPlayerInfo, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExistPlayerInfo_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExistPlayerInfo_Statics::NewProp_Player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExistPlayerInfo_Statics::NewProp_CheckedCount_MetaData[] = {
		{ "Category", "ExistPlayerInfo" },
		{ "Comment", "//The number for this player been check in the evaluator\n" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameOverCondition/CheckGameOver_Exist.h" },
		{ "ToolTip", "The number for this player been check in the evaluator" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FExistPlayerInfo_Statics::NewProp_CheckedCount = { "CheckedCount", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExistPlayerInfo, CheckedCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FExistPlayerInfo_Statics::NewProp_CheckedCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExistPlayerInfo_Statics::NewProp_CheckedCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExistPlayerInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExistPlayerInfo_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExistPlayerInfo_Statics::NewProp_CheckedCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExistPlayerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"ExistPlayerInfo",
		sizeof(FExistPlayerInfo),
		alignof(FExistPlayerInfo),
		Z_Construct_UScriptStruct_FExistPlayerInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExistPlayerInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExistPlayerInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExistPlayerInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExistPlayerInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExistPlayerInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExistPlayerInfo"), sizeof(FExistPlayerInfo), Get_Z_Construct_UScriptStruct_FExistPlayerInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExistPlayerInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExistPlayerInfo_Hash() { return 3654153917U; }
	DEFINE_FUNCTION(UCheckGameOver_Exist::execExistCurrentMapEventCallback)
	{
		P_GET_OBJECT(AActor,Z_Param_Causer);
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExistCurrentMapEventCallback(Z_Param_Causer,Z_Param_URL);
		P_NATIVE_END;
	}
	void UCheckGameOver_Exist::StaticRegisterNativesUCheckGameOver_Exist()
	{
		UClass* Class = UCheckGameOver_Exist::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExistCurrentMapEventCallback", &UCheckGameOver_Exist::execExistCurrentMapEventCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCheckGameOver_Exist_ExistCurrentMapEventCallback_Statics
	{
		struct CheckGameOver_Exist_eventExistCurrentMapEventCallback_Parms
		{
			AActor* Causer;
			FString URL;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causer;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheckGameOver_Exist_ExistCurrentMapEventCallback_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckGameOver_Exist_eventExistCurrentMapEventCallback_Parms, Causer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCheckGameOver_Exist_ExistCurrentMapEventCallback_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckGameOver_Exist_eventExistCurrentMapEventCallback_Parms, URL), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckGameOver_Exist_ExistCurrentMapEventCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckGameOver_Exist_ExistCurrentMapEventCallback_Statics::NewProp_Causer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckGameOver_Exist_ExistCurrentMapEventCallback_Statics::NewProp_URL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckGameOver_Exist_ExistCurrentMapEventCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameOverCondition/CheckGameOver_Exist.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckGameOver_Exist_ExistCurrentMapEventCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckGameOver_Exist, nullptr, "ExistCurrentMapEventCallback", nullptr, nullptr, sizeof(CheckGameOver_Exist_eventExistCurrentMapEventCallback_Parms), Z_Construct_UFunction_UCheckGameOver_Exist_ExistCurrentMapEventCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckGameOver_Exist_ExistCurrentMapEventCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckGameOver_Exist_ExistCurrentMapEventCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckGameOver_Exist_ExistCurrentMapEventCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckGameOver_Exist_ExistCurrentMapEventCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCheckGameOver_Exist_ExistCurrentMapEventCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCheckGameOver_Exist_NoRegister()
	{
		return UCheckGameOver_Exist::StaticClass();
	}
	struct Z_Construct_UClass_UCheckGameOver_Exist_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCheckGameOver_Exist_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCheckGameOverBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCheckGameOver_Exist_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCheckGameOver_Exist_ExistCurrentMapEventCallback, "ExistCurrentMapEventCallback" }, // 6433102
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckGameOver_Exist_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TriggerEvaluator/GameOverCondition/CheckGameOver_Exist.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameOverCondition/CheckGameOver_Exist.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCheckGameOver_Exist_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckGameOver_Exist>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCheckGameOver_Exist_Statics::ClassParams = {
		&UCheckGameOver_Exist::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCheckGameOver_Exist_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckGameOver_Exist_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCheckGameOver_Exist()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCheckGameOver_Exist_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCheckGameOver_Exist, 1353640843);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UCheckGameOver_Exist>()
	{
		return UCheckGameOver_Exist::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCheckGameOver_Exist(Z_Construct_UClass_UCheckGameOver_Exist, &UCheckGameOver_Exist::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UCheckGameOver_Exist"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckGameOver_Exist);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
