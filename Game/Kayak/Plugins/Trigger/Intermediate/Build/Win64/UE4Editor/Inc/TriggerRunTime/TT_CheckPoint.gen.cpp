// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/RespawnTask/TT_CheckPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTT_CheckPoint() {}
// Cross Module References
	TRIGGERRUNTIME_API UFunction* Z_Construct_UDelegateFunction_TriggerRunTime_NewCheckPointActivated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_CheckPoint_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_CheckPoint();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_Respawn();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerRecordBase_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TriggerRunTime_NewCheckPointActivated__DelegateSignature_Statics
	{
		struct _Script_TriggerRunTime_eventNewCheckPointActivated_Parms
		{
			APawn* ToggledPawn;
			TArray<APawn*> OutPawns;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToggledPawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutPawns_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutPawns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutPawns;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TriggerRunTime_NewCheckPointActivated__DelegateSignature_Statics::NewProp_ToggledPawn = { "ToggledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TriggerRunTime_eventNewCheckPointActivated_Parms, ToggledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TriggerRunTime_NewCheckPointActivated__DelegateSignature_Statics::NewProp_OutPawns_Inner = { "OutPawns", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TriggerRunTime_NewCheckPointActivated__DelegateSignature_Statics::NewProp_OutPawns_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_TriggerRunTime_NewCheckPointActivated__DelegateSignature_Statics::NewProp_OutPawns = { "OutPawns", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TriggerRunTime_eventNewCheckPointActivated_Parms, OutPawns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_TriggerRunTime_NewCheckPointActivated__DelegateSignature_Statics::NewProp_OutPawns_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TriggerRunTime_NewCheckPointActivated__DelegateSignature_Statics::NewProp_OutPawns_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TriggerRunTime_NewCheckPointActivated__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TriggerRunTime_NewCheckPointActivated__DelegateSignature_Statics::NewProp_ToggledPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TriggerRunTime_NewCheckPointActivated__DelegateSignature_Statics::NewProp_OutPawns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TriggerRunTime_NewCheckPointActivated__DelegateSignature_Statics::NewProp_OutPawns,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TriggerRunTime_NewCheckPointActivated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n* Event which is used to define the environment of new check point activated information\n* \n* @param ToggledPawn\x09\x09\x09Who toggled this check point\n* @param OutPawns\x09\x09\x09\x09The pawns who will be respawned at this check point\n*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/TT_CheckPoint.h" },
		{ "ToolTip", "* Event which is used to define the environment of new check point activated information\n*\n* @param ToggledPawn                   Who toggled this check point\n* @param OutPawns                              The pawns who will be respawned at this check point" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TriggerRunTime_NewCheckPointActivated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TriggerRunTime, nullptr, "NewCheckPointActivated__DelegateSignature", nullptr, nullptr, sizeof(_Script_TriggerRunTime_eventNewCheckPointActivated_Parms), Z_Construct_UDelegateFunction_TriggerRunTime_NewCheckPointActivated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TriggerRunTime_NewCheckPointActivated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TriggerRunTime_NewCheckPointActivated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TriggerRunTime_NewCheckPointActivated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TriggerRunTime_NewCheckPointActivated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TriggerRunTime_NewCheckPointActivated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UTT_CheckPoint::execPawnOnEndPlay)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PawnOnEndPlay(Z_Param_Actor,EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_CheckPoint::execPawnDestroyedEventCallback)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PawnDestroyedEventCallback(Z_Param_Actor);
		P_NATIVE_END;
	}
	void UTT_CheckPoint::StaticRegisterNativesUTT_CheckPoint()
	{
		UClass* Class = UTT_CheckPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PawnDestroyedEventCallback", &UTT_CheckPoint::execPawnDestroyedEventCallback },
			{ "PawnOnEndPlay", &UTT_CheckPoint::execPawnOnEndPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTT_CheckPoint_PawnDestroyedEventCallback_Statics
	{
		struct TT_CheckPoint_eventPawnDestroyedEventCallback_Parms
		{
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_CheckPoint_PawnDestroyedEventCallback_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_CheckPoint_eventPawnDestroyedEventCallback_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_CheckPoint_PawnDestroyedEventCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_CheckPoint_PawnDestroyedEventCallback_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_CheckPoint_PawnDestroyedEventCallback_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Callback for destroyed event of pawn\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/TT_CheckPoint.h" },
		{ "ToolTip", "* Callback for destroyed event of pawn" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_CheckPoint_PawnDestroyedEventCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_CheckPoint, nullptr, "PawnDestroyedEventCallback", nullptr, nullptr, sizeof(TT_CheckPoint_eventPawnDestroyedEventCallback_Parms), Z_Construct_UFunction_UTT_CheckPoint_PawnDestroyedEventCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_CheckPoint_PawnDestroyedEventCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_CheckPoint_PawnDestroyedEventCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_CheckPoint_PawnDestroyedEventCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_CheckPoint_PawnDestroyedEventCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_CheckPoint_PawnDestroyedEventCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_CheckPoint_PawnOnEndPlay_Statics
	{
		struct TT_CheckPoint_eventPawnOnEndPlay_Parms
		{
			AActor* Actor;
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_CheckPoint_PawnOnEndPlay_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_CheckPoint_eventPawnOnEndPlay_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTT_CheckPoint_PawnOnEndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_CheckPoint_eventPawnOnEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_CheckPoint_PawnOnEndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_CheckPoint_PawnOnEndPlay_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_CheckPoint_PawnOnEndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_CheckPoint_PawnOnEndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/TT_CheckPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_CheckPoint_PawnOnEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_CheckPoint, nullptr, "PawnOnEndPlay", nullptr, nullptr, sizeof(TT_CheckPoint_eventPawnOnEndPlay_Parms), Z_Construct_UFunction_UTT_CheckPoint_PawnOnEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_CheckPoint_PawnOnEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_CheckPoint_PawnOnEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_CheckPoint_PawnOnEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_CheckPoint_PawnOnEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_CheckPoint_PawnOnEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTT_CheckPoint_NoRegister()
	{
		return UTT_CheckPoint::StaticClass();
	}
	struct Z_Construct_UClass_UTT_CheckPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecordTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RecordTemplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewCheckPointActivated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_NewCheckPointActivated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTT_CheckPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTT_Respawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTT_CheckPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTT_CheckPoint_PawnDestroyedEventCallback, "PawnDestroyedEventCallback" }, // 4071892762
		{ &Z_Construct_UFunction_UTT_CheckPoint_PawnOnEndPlay, "PawnOnEndPlay" }, // 4283677065
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_CheckPoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "IncludePath", "TriggerTask/RespawnTask/TT_CheckPoint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/TT_CheckPoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_CheckPoint_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "CheckPoint" },
		{ "Comment", "/*\n\x09* The level for this check point.\n\x09* As there are a lot check point in one map, and only one check point should work at once(Just like the base class TT_Respawn).\n\x09* the check point with high level will override the one with lower level, and the high level will be the only one check point at current game thread.\n\x09* and the low level will never be toggled again.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/TT_CheckPoint.h" },
		{ "ToolTip", "* The level for this check point.\n* As there are a lot check point in one map, and only one check point should work at once(Just like the base class TT_Respawn).\n* the check point with high level will override the one with lower level, and the high level will be the only one check point at current game thread.\n* and the low level will never be toggled again." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTT_CheckPoint_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_CheckPoint, Level), METADATA_PARAMS(Z_Construct_UClass_UTT_CheckPoint_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_CheckPoint_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_CheckPoint_Statics::NewProp_RecordTemplate_MetaData[] = {
		{ "Category", "CheckPoint" },
		{ "Comment", "/*\n\x09* When this task activates, Some recored things will be processed\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/TT_CheckPoint.h" },
		{ "ToolTip", "* When this task activates, Some recored things will be processed" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTT_CheckPoint_Statics::NewProp_RecordTemplate = { "RecordTemplate", nullptr, (EPropertyFlags)0x001200000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_CheckPoint, RecordTemplate), Z_Construct_UClass_UTriggerRecordBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTT_CheckPoint_Statics::NewProp_RecordTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_CheckPoint_Statics::NewProp_RecordTemplate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_CheckPoint_Statics::NewProp_NewCheckPointActivated_MetaData[] = {
		{ "Comment", "//Called when the target toggled pawn have activate new check point\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/TT_CheckPoint.h" },
		{ "ToolTip", "Called when the target toggled pawn have activate new check point" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTT_CheckPoint_Statics::NewProp_NewCheckPointActivated = { "NewCheckPointActivated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_CheckPoint, NewCheckPointActivated), Z_Construct_UDelegateFunction_TriggerRunTime_NewCheckPointActivated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTT_CheckPoint_Statics::NewProp_NewCheckPointActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_CheckPoint_Statics::NewProp_NewCheckPointActivated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTT_CheckPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_CheckPoint_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_CheckPoint_Statics::NewProp_RecordTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_CheckPoint_Statics::NewProp_NewCheckPointActivated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTT_CheckPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTT_CheckPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTT_CheckPoint_Statics::ClassParams = {
		&UTT_CheckPoint::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTT_CheckPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTT_CheckPoint_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTT_CheckPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_CheckPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTT_CheckPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTT_CheckPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTT_CheckPoint, 3579129526);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTT_CheckPoint>()
	{
		return UTT_CheckPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTT_CheckPoint(Z_Construct_UClass_UTT_CheckPoint, &UTT_CheckPoint::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTT_CheckPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTT_CheckPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
