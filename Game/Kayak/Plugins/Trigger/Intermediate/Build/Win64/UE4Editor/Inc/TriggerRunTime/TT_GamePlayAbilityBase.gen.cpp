// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/TT_GamePlayAbilityBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTT_GamePlayAbilityBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_GamePlayAbilityBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_GamePlayAbilityBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTT_GamePlayAbilityBase::execGetGameplayAbilitySystem)
	{
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilitySystemComponent**)Z_Param__Result=P_THIS->GetGameplayAbilitySystem(Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_GamePlayAbilityBase::execGetApplayedActor)
	{
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetApplayedActor_Implementation(Z_Param_Target);
		P_NATIVE_END;
	}
	static FName NAME_UTT_GamePlayAbilityBase_GetApplayedActor = FName(TEXT("GetApplayedActor"));
	AActor* UTT_GamePlayAbilityBase::GetApplayedActor(UObject* Target)
	{
		TT_GamePlayAbilityBase_eventGetApplayedActor_Parms Parms;
		Parms.Target=Target;
		ProcessEvent(FindFunctionChecked(NAME_UTT_GamePlayAbilityBase_GetApplayedActor),&Parms);
		return Parms.ReturnValue;
	}
	void UTT_GamePlayAbilityBase::StaticRegisterNativesUTT_GamePlayAbilityBase()
	{
		UClass* Class = UTT_GamePlayAbilityBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetApplayedActor", &UTT_GamePlayAbilityBase::execGetApplayedActor },
			{ "GetGameplayAbilitySystem", &UTT_GamePlayAbilityBase::execGetGameplayAbilitySystem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTT_GamePlayAbilityBase_GetApplayedActor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_GamePlayAbilityBase_GetApplayedActor_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_GamePlayAbilityBase_eventGetApplayedActor_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_GamePlayAbilityBase_GetApplayedActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_GamePlayAbilityBase_eventGetApplayedActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_GamePlayAbilityBase_GetApplayedActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_GamePlayAbilityBase_GetApplayedActor_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_GamePlayAbilityBase_GetApplayedActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_GamePlayAbilityBase_GetApplayedActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "GamePlayAbility" },
		{ "Comment", "/*\n\x09* Get the actor which will apply this ability to\n*\x09* @param Target\x09\x09if this value is none I will find the actor form the mostly toggled information\n* \x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/TT_GamePlayAbilityBase.h" },
		{ "ToolTip", "* Get the actor which will apply this ability to\n*      * @param Target         if this value is none I will find the actor form the mostly toggled information" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_GamePlayAbilityBase_GetApplayedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_GamePlayAbilityBase, nullptr, "GetApplayedActor", nullptr, nullptr, sizeof(TT_GamePlayAbilityBase_eventGetApplayedActor_Parms), Z_Construct_UFunction_UTT_GamePlayAbilityBase_GetApplayedActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_GamePlayAbilityBase_GetApplayedActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_GamePlayAbilityBase_GetApplayedActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_GamePlayAbilityBase_GetApplayedActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_GamePlayAbilityBase_GetApplayedActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_GamePlayAbilityBase_GetApplayedActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_GamePlayAbilityBase_GetGameplayAbilitySystem_Statics
	{
		struct TT_GamePlayAbilityBase_eventGetGameplayAbilitySystem_Parms
		{
			UObject* Target;
			UAbilitySystemComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_GamePlayAbilityBase_GetGameplayAbilitySystem_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_GamePlayAbilityBase_eventGetGameplayAbilitySystem_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_GamePlayAbilityBase_GetGameplayAbilitySystem_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_GamePlayAbilityBase_GetGameplayAbilitySystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_GamePlayAbilityBase_eventGetGameplayAbilitySystem_Parms, ReturnValue), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTT_GamePlayAbilityBase_GetGameplayAbilitySystem_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_GamePlayAbilityBase_GetGameplayAbilitySystem_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_GamePlayAbilityBase_GetGameplayAbilitySystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_GamePlayAbilityBase_GetGameplayAbilitySystem_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_GamePlayAbilityBase_GetGameplayAbilitySystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_GamePlayAbilityBase_GetGameplayAbilitySystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "GamePlayAbility" },
		{ "CPP_Default_Target", "None" },
		{ "ModuleRelativePath", "Public/TriggerTask/TT_GamePlayAbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_GamePlayAbilityBase_GetGameplayAbilitySystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_GamePlayAbilityBase, nullptr, "GetGameplayAbilitySystem", nullptr, nullptr, sizeof(TT_GamePlayAbilityBase_eventGetGameplayAbilitySystem_Parms), Z_Construct_UFunction_UTT_GamePlayAbilityBase_GetGameplayAbilitySystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_GamePlayAbilityBase_GetGameplayAbilitySystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_GamePlayAbilityBase_GetGameplayAbilitySystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_GamePlayAbilityBase_GetGameplayAbilitySystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_GamePlayAbilityBase_GetGameplayAbilitySystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_GamePlayAbilityBase_GetGameplayAbilitySystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTT_GamePlayAbilityBase_NoRegister()
	{
		return UTT_GamePlayAbilityBase::StaticClass();
	}
	struct Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsedBySelf_MetaData[];
#endif
		static void NewProp_UsedBySelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UsedBySelf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveAbilityAutomatically_MetaData[];
#endif
		static void NewProp_ActiveAbilityAutomatically_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ActiveAbilityAutomatically;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InputID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerTaskBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTT_GamePlayAbilityBase_GetApplayedActor, "GetApplayedActor" }, // 1187344792
		{ &Z_Construct_UFunction_UTT_GamePlayAbilityBase_GetGameplayAbilitySystem, "GetGameplayAbilitySystem" }, // 300694115
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n* This task is used to give one ability to the target actor not only the player\n* If you used this task you must make sure the ability which this task used have inherited form the interface: IGamePlayAbilityInterface\n*/" },
		{ "DisplayName", "TT_GameplayAbility" },
		{ "IncludePath", "TriggerTask/TT_GamePlayAbilityBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/TT_GamePlayAbilityBase.h" },
		{ "ToolTip", "* This task is used to give one ability to the target actor not only the player\n* If you used this task you must make sure the ability which this task used have inherited form the interface: IGamePlayAbilityInterface" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::NewProp_AbilityClass_MetaData[] = {
		{ "Category", "GamePlayAbility" },
		{ "Comment", "//The ability that this task will will give the other player\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TT_GamePlayAbilityBase.h" },
		{ "ToolTip", "The ability that this task will will give the other player" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_GamePlayAbilityBase, AbilityClass), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::NewProp_AbilityClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::NewProp_AbilityClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::NewProp_UsedBySelf_MetaData[] = {
		{ "Category", "GamePlayAbility" },
		{ "Comment", "//Flag to check weather this ability is used by this trigger self, such as create one area filled with fire\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TT_GamePlayAbilityBase.h" },
		{ "ToolTip", "Flag to check weather this ability is used by this trigger self, such as create one area filled with fire" },
	};
#endif
	void Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::NewProp_UsedBySelf_SetBit(void* Obj)
	{
		((UTT_GamePlayAbilityBase*)Obj)->UsedBySelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::NewProp_UsedBySelf = { "UsedBySelf", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTT_GamePlayAbilityBase), &Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::NewProp_UsedBySelf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::NewProp_UsedBySelf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::NewProp_UsedBySelf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::NewProp_ActiveAbilityAutomatically_MetaData[] = {
		{ "Category", "GamePlayAbility" },
		{ "Comment", "//Flag to check weather this ability can be used automatically\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TT_GamePlayAbilityBase.h" },
		{ "ToolTip", "Flag to check weather this ability can be used automatically" },
	};
#endif
	void Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::NewProp_ActiveAbilityAutomatically_SetBit(void* Obj)
	{
		((UTT_GamePlayAbilityBase*)Obj)->ActiveAbilityAutomatically = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::NewProp_ActiveAbilityAutomatically = { "ActiveAbilityAutomatically", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTT_GamePlayAbilityBase), &Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::NewProp_ActiveAbilityAutomatically_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::NewProp_ActiveAbilityAutomatically_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::NewProp_ActiveAbilityAutomatically_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "GamePlayAbility" },
		{ "Comment", "//The level the target ability will use\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TT_GamePlayAbilityBase.h" },
		{ "ToolTip", "The level the target ability will use" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_GamePlayAbilityBase, Level), METADATA_PARAMS(Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::NewProp_InputID_MetaData[] = {
		{ "Category", "GamePlayAbility" },
		{ "Comment", "//The shortcut of input to active this ability\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TT_GamePlayAbilityBase.h" },
		{ "ToolTip", "The shortcut of input to active this ability" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::NewProp_InputID = { "InputID", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_GamePlayAbilityBase, InputID), METADATA_PARAMS(Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::NewProp_InputID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::NewProp_InputID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::NewProp_AbilityClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::NewProp_UsedBySelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::NewProp_ActiveAbilityAutomatically,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::NewProp_InputID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTT_GamePlayAbilityBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::ClassParams = {
		&UTT_GamePlayAbilityBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTT_GamePlayAbilityBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTT_GamePlayAbilityBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTT_GamePlayAbilityBase, 3076761061);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTT_GamePlayAbilityBase>()
	{
		return UTT_GamePlayAbilityBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTT_GamePlayAbilityBase(Z_Construct_UClass_UTT_GamePlayAbilityBase, &UTT_GamePlayAbilityBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTT_GamePlayAbilityBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTT_GamePlayAbilityBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
