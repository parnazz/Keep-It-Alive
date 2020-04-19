// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KeepItAlive/KeepItAliveGameStateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeepItAliveGameStateBase() {}
// Cross Module References
	KEEPITALIVE_API UClass* Z_Construct_UClass_AKeepItAliveGameStateBase_NoRegister();
	KEEPITALIVE_API UClass* Z_Construct_UClass_AKeepItAliveGameStateBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_KeepItAlive();
// End Cross Module References
	void AKeepItAliveGameStateBase::StaticRegisterNativesAKeepItAliveGameStateBase()
	{
	}
	UClass* Z_Construct_UClass_AKeepItAliveGameStateBase_NoRegister()
	{
		return AKeepItAliveGameStateBase::StaticClass();
	}
	struct Z_Construct_UClass_AKeepItAliveGameStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKeepItAliveGameStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KeepItAlive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeepItAliveGameStateBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "KeepItAliveGameStateBase.h" },
		{ "ModuleRelativePath", "KeepItAliveGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKeepItAliveGameStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKeepItAliveGameStateBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKeepItAliveGameStateBase_Statics::ClassParams = {
		&AKeepItAliveGameStateBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AKeepItAliveGameStateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKeepItAliveGameStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKeepItAliveGameStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKeepItAliveGameStateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKeepItAliveGameStateBase, 1877601565);
	template<> KEEPITALIVE_API UClass* StaticClass<AKeepItAliveGameStateBase>()
	{
		return AKeepItAliveGameStateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKeepItAliveGameStateBase(Z_Construct_UClass_AKeepItAliveGameStateBase, &AKeepItAliveGameStateBase::StaticClass, TEXT("/Script/KeepItAlive"), TEXT("AKeepItAliveGameStateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKeepItAliveGameStateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
