// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KeepItAlive/BaseWorker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseWorker() {}
// Cross Module References
	KEEPITALIVE_API UClass* Z_Construct_UClass_ABaseWorker_NoRegister();
	KEEPITALIVE_API UClass* Z_Construct_UClass_ABaseWorker();
	KEEPITALIVE_API UClass* Z_Construct_UClass_ABaseNPC();
	UPackage* Z_Construct_UPackage__Script_KeepItAlive();
	KEEPITALIVE_API UClass* Z_Construct_UClass_UWorkerStateMachine_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ABaseWorker::StaticRegisterNativesABaseWorker()
	{
	}
	UClass* Z_Construct_UClass_ABaseWorker_NoRegister()
	{
		return ABaseWorker::StaticClass();
	}
	struct Z_Construct_UClass_ABaseWorker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateMachine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StateMachine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseWorker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseNPC,
		(UObject* (*)())Z_Construct_UPackage__Script_KeepItAlive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWorker_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseWorker.h" },
		{ "ModuleRelativePath", "BaseWorker.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWorker_Statics::NewProp_StateMachine_MetaData[] = {
		{ "ModuleRelativePath", "BaseWorker.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseWorker_Statics::NewProp_StateMachine = { "StateMachine", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWorker, StateMachine), Z_Construct_UClass_UWorkerStateMachine_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseWorker_Statics::NewProp_StateMachine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWorker_Statics::NewProp_StateMachine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWorker_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "BaseWorker" },
		{ "ModuleRelativePath", "BaseWorker.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseWorker_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWorker, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABaseWorker_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWorker_Statics::NewProp_TargetLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseWorker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWorker_Statics::NewProp_StateMachine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWorker_Statics::NewProp_TargetLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseWorker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseWorker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseWorker_Statics::ClassParams = {
		&ABaseWorker::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseWorker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWorker_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseWorker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWorker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseWorker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseWorker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseWorker, 2623217487);
	template<> KEEPITALIVE_API UClass* StaticClass<ABaseWorker>()
	{
		return ABaseWorker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseWorker(Z_Construct_UClass_ABaseWorker, &ABaseWorker::StaticClass, TEXT("/Script/KeepItAlive"), TEXT("ABaseWorker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseWorker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
