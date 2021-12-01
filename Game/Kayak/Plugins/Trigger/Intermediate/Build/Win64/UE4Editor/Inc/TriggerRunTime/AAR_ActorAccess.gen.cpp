// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerEvaluator/AvatarAttributes/AvatarAccessRule/AAR_ActorAccess.h"
#include "TriggerRunTime/Public/TriggerEvaluator/AvatarAttributes/CheckAvatarAttribute.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAAR_ActorAccess() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAAR_AvatarAccessWithFilter_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAAR_AvatarAccessWithFilter();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAvatarAccessRuleBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerFilterBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAAR_AllSpawnedActors_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAAR_AllSpawnedActors();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAAR_AllActors_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAAR_AllActors();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAAR_AllPlayerControllers_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAAR_AllPlayerControllers();
// End Cross Module References
	DEFINE_FUNCTION(UAAR_AvatarAccessWithFilter::execIsFilterPassed)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFilterPassed(Z_Param_Object);
		P_NATIVE_END;
	}
	void UAAR_AvatarAccessWithFilter::StaticRegisterNativesUAAR_AvatarAccessWithFilter()
	{
		UClass* Class = UAAR_AvatarAccessWithFilter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsFilterPassed", &UAAR_AvatarAccessWithFilter::execIsFilterPassed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAAR_AvatarAccessWithFilter_IsFilterPassed_Statics
	{
		struct AAR_AvatarAccessWithFilter_eventIsFilterPassed_Parms
		{
			UObject* Object;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAAR_AvatarAccessWithFilter_IsFilterPassed_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAR_AvatarAccessWithFilter_eventIsFilterPassed_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAAR_AvatarAccessWithFilter_IsFilterPassed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AAR_AvatarAccessWithFilter_eventIsFilterPassed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAAR_AvatarAccessWithFilter_IsFilterPassed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAR_AvatarAccessWithFilter_eventIsFilterPassed_Parms), &Z_Construct_UFunction_UAAR_AvatarAccessWithFilter_IsFilterPassed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAAR_AvatarAccessWithFilter_IsFilterPassed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAAR_AvatarAccessWithFilter_IsFilterPassed_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAAR_AvatarAccessWithFilter_IsFilterPassed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAAR_AvatarAccessWithFilter_IsFilterPassed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Check weather the target object can pass the filter\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarAccessRule/AAR_ActorAccess.h" },
		{ "ToolTip", "* Check weather the target object can pass the filter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAAR_AvatarAccessWithFilter_IsFilterPassed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAAR_AvatarAccessWithFilter, nullptr, "IsFilterPassed", nullptr, nullptr, sizeof(AAR_AvatarAccessWithFilter_eventIsFilterPassed_Parms), Z_Construct_UFunction_UAAR_AvatarAccessWithFilter_IsFilterPassed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAAR_AvatarAccessWithFilter_IsFilterPassed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAAR_AvatarAccessWithFilter_IsFilterPassed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAAR_AvatarAccessWithFilter_IsFilterPassed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAAR_AvatarAccessWithFilter_IsFilterPassed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAAR_AvatarAccessWithFilter_IsFilterPassed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAAR_AvatarAccessWithFilter_NoRegister()
	{
		return UAAR_AvatarAccessWithFilter::StaticClass();
	}
	struct Z_Construct_UClass_UAAR_AvatarAccessWithFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvatarFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AvatarFilter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAAR_AvatarAccessWithFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAvatarAccessRuleBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAAR_AvatarAccessWithFilter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAAR_AvatarAccessWithFilter_IsFilterPassed, "IsFilterPassed" }, // 4233333301
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAAR_AvatarAccessWithFilter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* The access which will use some filters to filter the avatars\n*/" },
		{ "IncludePath", "TriggerEvaluator/AvatarAttributes/AvatarAccessRule/AAR_ActorAccess.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarAccessRule/AAR_ActorAccess.h" },
		{ "ToolTip", "* The access which will use some filters to filter the avatars" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAAR_AvatarAccessWithFilter_Statics::NewProp_AvatarFilter_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/*\n\x09* Which type of avatar this condition will focus\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarAccessRule/AAR_ActorAccess.h" },
		{ "ToolTip", "* Which type of avatar this condition will focus" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAAR_AvatarAccessWithFilter_Statics::NewProp_AvatarFilter = { "AvatarFilter", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAAR_AvatarAccessWithFilter, AvatarFilter), Z_Construct_UClass_UTriggerFilterBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAAR_AvatarAccessWithFilter_Statics::NewProp_AvatarFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAAR_AvatarAccessWithFilter_Statics::NewProp_AvatarFilter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAAR_AvatarAccessWithFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAAR_AvatarAccessWithFilter_Statics::NewProp_AvatarFilter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAAR_AvatarAccessWithFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAAR_AvatarAccessWithFilter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAAR_AvatarAccessWithFilter_Statics::ClassParams = {
		&UAAR_AvatarAccessWithFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAAR_AvatarAccessWithFilter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAAR_AvatarAccessWithFilter_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAAR_AvatarAccessWithFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAAR_AvatarAccessWithFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAAR_AvatarAccessWithFilter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAAR_AvatarAccessWithFilter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAAR_AvatarAccessWithFilter, 1081285098);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UAAR_AvatarAccessWithFilter>()
	{
		return UAAR_AvatarAccessWithFilter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAAR_AvatarAccessWithFilter(Z_Construct_UClass_UAAR_AvatarAccessWithFilter, &UAAR_AvatarAccessWithFilter::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UAAR_AvatarAccessWithFilter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAAR_AvatarAccessWithFilter);
	DEFINE_FUNCTION(UAAR_AllSpawnedActors::execOnActorDestroyed)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorDestroyed(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAAR_AllSpawnedActors::execOnActorCreated)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorCreated(Z_Param_Actor);
		P_NATIVE_END;
	}
	void UAAR_AllSpawnedActors::StaticRegisterNativesUAAR_AllSpawnedActors()
	{
		UClass* Class = UAAR_AllSpawnedActors::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnActorCreated", &UAAR_AllSpawnedActors::execOnActorCreated },
			{ "OnActorDestroyed", &UAAR_AllSpawnedActors::execOnActorDestroyed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAAR_AllSpawnedActors_OnActorCreated_Statics
	{
		struct AAR_AllSpawnedActors_eventOnActorCreated_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAAR_AllSpawnedActors_OnActorCreated_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAR_AllSpawnedActors_eventOnActorCreated_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAAR_AllSpawnedActors_OnActorCreated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAAR_AllSpawnedActors_OnActorCreated_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAAR_AllSpawnedActors_OnActorCreated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarAccessRule/AAR_ActorAccess.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAAR_AllSpawnedActors_OnActorCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAAR_AllSpawnedActors, nullptr, "OnActorCreated", nullptr, nullptr, sizeof(AAR_AllSpawnedActors_eventOnActorCreated_Parms), Z_Construct_UFunction_UAAR_AllSpawnedActors_OnActorCreated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAAR_AllSpawnedActors_OnActorCreated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAAR_AllSpawnedActors_OnActorCreated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAAR_AllSpawnedActors_OnActorCreated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAAR_AllSpawnedActors_OnActorCreated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAAR_AllSpawnedActors_OnActorCreated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAAR_AllSpawnedActors_OnActorDestroyed_Statics
	{
		struct AAR_AllSpawnedActors_eventOnActorDestroyed_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAAR_AllSpawnedActors_OnActorDestroyed_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAR_AllSpawnedActors_eventOnActorDestroyed_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAAR_AllSpawnedActors_OnActorDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAAR_AllSpawnedActors_OnActorDestroyed_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAAR_AllSpawnedActors_OnActorDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarAccessRule/AAR_ActorAccess.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAAR_AllSpawnedActors_OnActorDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAAR_AllSpawnedActors, nullptr, "OnActorDestroyed", nullptr, nullptr, sizeof(AAR_AllSpawnedActors_eventOnActorDestroyed_Parms), Z_Construct_UFunction_UAAR_AllSpawnedActors_OnActorDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAAR_AllSpawnedActors_OnActorDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAAR_AllSpawnedActors_OnActorDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAAR_AllSpawnedActors_OnActorDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAAR_AllSpawnedActors_OnActorDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAAR_AllSpawnedActors_OnActorDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAAR_AllSpawnedActors_NoRegister()
	{
		return UAAR_AllSpawnedActors::StaticClass();
	}
	struct Z_Construct_UClass_UAAR_AllSpawnedActors_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAAR_AllSpawnedActors_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAAR_AvatarAccessWithFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAAR_AllSpawnedActors_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAAR_AllSpawnedActors_OnActorCreated, "OnActorCreated" }, // 3854436794
		{ &Z_Construct_UFunction_UAAR_AllSpawnedActors_OnActorDestroyed, "OnActorDestroyed" }, // 3997144145
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAAR_AllSpawnedActors_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Get all actors which is spawned after this instance of this class work\n*/" },
		{ "DisplayName", "AllSpawnedActors" },
		{ "IncludePath", "TriggerEvaluator/AvatarAttributes/AvatarAccessRule/AAR_ActorAccess.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarAccessRule/AAR_ActorAccess.h" },
		{ "ToolTip", "* Get all actors which is spawned after this instance of this class work" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAAR_AllSpawnedActors_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAAR_AllSpawnedActors>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAAR_AllSpawnedActors_Statics::ClassParams = {
		&UAAR_AllSpawnedActors::StaticClass,
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
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAAR_AllSpawnedActors_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAAR_AllSpawnedActors_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAAR_AllSpawnedActors()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAAR_AllSpawnedActors_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAAR_AllSpawnedActors, 2985528511);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UAAR_AllSpawnedActors>()
	{
		return UAAR_AllSpawnedActors::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAAR_AllSpawnedActors(Z_Construct_UClass_UAAR_AllSpawnedActors, &UAAR_AllSpawnedActors::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UAAR_AllSpawnedActors"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAAR_AllSpawnedActors);
	void UAAR_AllActors::StaticRegisterNativesUAAR_AllActors()
	{
	}
	UClass* Z_Construct_UClass_UAAR_AllActors_NoRegister()
	{
		return UAAR_AllActors::StaticClass();
	}
	struct Z_Construct_UClass_UAAR_AllActors_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAAR_AllActors_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAAR_AvatarAccessWithFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAAR_AllActors_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Get all actors in the world, this will take a lot resource,\n* This will get all actors which is already existed at current world\n*/" },
		{ "DisplayName", "All Actors" },
		{ "IncludePath", "TriggerEvaluator/AvatarAttributes/AvatarAccessRule/AAR_ActorAccess.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarAccessRule/AAR_ActorAccess.h" },
		{ "ToolTip", "* Get all actors in the world, this will take a lot resource,\n* This will get all actors which is already existed at current world" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAAR_AllActors_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAAR_AllActors>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAAR_AllActors_Statics::ClassParams = {
		&UAAR_AllActors::StaticClass,
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
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAAR_AllActors_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAAR_AllActors_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAAR_AllActors()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAAR_AllActors_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAAR_AllActors, 2425656737);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UAAR_AllActors>()
	{
		return UAAR_AllActors::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAAR_AllActors(Z_Construct_UClass_UAAR_AllActors, &UAAR_AllActors::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UAAR_AllActors"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAAR_AllActors);
	void UAAR_AllPlayerControllers::StaticRegisterNativesUAAR_AllPlayerControllers()
	{
	}
	UClass* Z_Construct_UClass_UAAR_AllPlayerControllers_NoRegister()
	{
		return UAAR_AllPlayerControllers::StaticClass();
	}
	struct Z_Construct_UClass_UAAR_AllPlayerControllers_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeControlledPawns_MetaData[];
#endif
		static void NewProp_IncludeControlledPawns_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludeControlledPawns;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAAR_AllPlayerControllers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAAR_AvatarAccessWithFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAAR_AllPlayerControllers_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Get all player controllers in this world.\n* This will get all player controllers which is already exist at current world\n*/" },
		{ "DisplayName", "All Player Controllers" },
		{ "IncludePath", "TriggerEvaluator/AvatarAttributes/AvatarAccessRule/AAR_ActorAccess.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarAccessRule/AAR_ActorAccess.h" },
		{ "ToolTip", "* Get all player controllers in this world.\n* This will get all player controllers which is already exist at current world" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAAR_AllPlayerControllers_Statics::NewProp_IncludeControlledPawns_MetaData[] = {
		{ "Category", "AllPlayerControllers" },
		{ "Comment", "//Flag to check weather this access will get all pawns which the player controller owned\n" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarAccessRule/AAR_ActorAccess.h" },
		{ "ToolTip", "Flag to check weather this access will get all pawns which the player controller owned" },
	};
#endif
	void Z_Construct_UClass_UAAR_AllPlayerControllers_Statics::NewProp_IncludeControlledPawns_SetBit(void* Obj)
	{
		((UAAR_AllPlayerControllers*)Obj)->IncludeControlledPawns = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAAR_AllPlayerControllers_Statics::NewProp_IncludeControlledPawns = { "IncludeControlledPawns", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAAR_AllPlayerControllers), &Z_Construct_UClass_UAAR_AllPlayerControllers_Statics::NewProp_IncludeControlledPawns_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAAR_AllPlayerControllers_Statics::NewProp_IncludeControlledPawns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAAR_AllPlayerControllers_Statics::NewProp_IncludeControlledPawns_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAAR_AllPlayerControllers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAAR_AllPlayerControllers_Statics::NewProp_IncludeControlledPawns,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAAR_AllPlayerControllers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAAR_AllPlayerControllers>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAAR_AllPlayerControllers_Statics::ClassParams = {
		&UAAR_AllPlayerControllers::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAAR_AllPlayerControllers_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAAR_AllPlayerControllers_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAAR_AllPlayerControllers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAAR_AllPlayerControllers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAAR_AllPlayerControllers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAAR_AllPlayerControllers_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAAR_AllPlayerControllers, 2536486420);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UAAR_AllPlayerControllers>()
	{
		return UAAR_AllPlayerControllers::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAAR_AllPlayerControllers(Z_Construct_UClass_UAAR_AllPlayerControllers, &UAAR_AllPlayerControllers::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UAAR_AllPlayerControllers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAAR_AllPlayerControllers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
