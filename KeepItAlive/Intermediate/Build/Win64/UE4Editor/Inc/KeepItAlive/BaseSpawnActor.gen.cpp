// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KeepItAlive/BaseSpawnActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseSpawnActor() {}
// Cross Module References
	KEEPITALIVE_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnableCharacter();
	UPackage* Z_Construct_UPackage__Script_KeepItAlive();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter_NoRegister();
	KEEPITALIVE_API UClass* Z_Construct_UClass_ABaseSpawnActor_NoRegister();
	KEEPITALIVE_API UClass* Z_Construct_UClass_ABaseSpawnActor();
	PAPER2D_API UClass* Z_Construct_UClass_APaperSpriteActor();
// End Cross Module References
class UScriptStruct* FSpawnableCharacter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KEEPITALIVE_API uint32 Get_Z_Construct_UScriptStruct_FSpawnableCharacter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnableCharacter, Z_Construct_UPackage__Script_KeepItAlive(), TEXT("SpawnableCharacter"), sizeof(FSpawnableCharacter), Get_Z_Construct_UScriptStruct_FSpawnableCharacter_Hash());
	}
	return Singleton;
}
template<> KEEPITALIVE_API UScriptStruct* StaticStruct<FSpawnableCharacter>()
{
	return FSpawnableCharacter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpawnableCharacter(FSpawnableCharacter::StaticStruct, TEXT("/Script/KeepItAlive"), TEXT("SpawnableCharacter"), false, nullptr, nullptr);
static struct FScriptStruct_KeepItAlive_StaticRegisterNativesFSpawnableCharacter
{
	FScriptStruct_KeepItAlive_StaticRegisterNativesFSpawnableCharacter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpawnableCharacter")),new UScriptStruct::TCppStructOps<FSpawnableCharacter>);
	}
} ScriptStruct_KeepItAlive_StaticRegisterNativesFSpawnableCharacter;
	struct Z_Construct_UScriptStruct_FSpawnableCharacter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaneNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LaneNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableCharacter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseSpawnActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpawnableCharacter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnableCharacter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableCharacter_Statics::NewProp_LaneNumber_MetaData[] = {
		{ "Category", "SpawnableCharacter" },
		{ "ModuleRelativePath", "BaseSpawnActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpawnableCharacter_Statics::NewProp_LaneNumber = { "LaneNumber", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableCharacter, LaneNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableCharacter_Statics::NewProp_LaneNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableCharacter_Statics::NewProp_LaneNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableCharacter_Statics::NewProp_TimeToSpawn_MetaData[] = {
		{ "Category", "SpawnableCharacter" },
		{ "ModuleRelativePath", "BaseSpawnActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpawnableCharacter_Statics::NewProp_TimeToSpawn = { "TimeToSpawn", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableCharacter, TimeToSpawn), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableCharacter_Statics::NewProp_TimeToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableCharacter_Statics::NewProp_TimeToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableCharacter_Statics::NewProp_CharacterToSpawn_MetaData[] = {
		{ "ModuleRelativePath", "BaseSpawnActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnableCharacter_Statics::NewProp_CharacterToSpawn = { "CharacterToSpawn", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableCharacter, CharacterToSpawn), Z_Construct_UClass_APaperCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableCharacter_Statics::NewProp_CharacterToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableCharacter_Statics::NewProp_CharacterToSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnableCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableCharacter_Statics::NewProp_LaneNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableCharacter_Statics::NewProp_TimeToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableCharacter_Statics::NewProp_CharacterToSpawn,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnableCharacter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KeepItAlive,
		nullptr,
		&NewStructOps,
		"SpawnableCharacter",
		sizeof(FSpawnableCharacter),
		alignof(FSpawnableCharacter),
		Z_Construct_UScriptStruct_FSpawnableCharacter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableCharacter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableCharacter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableCharacter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpawnableCharacter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpawnableCharacter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KeepItAlive();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpawnableCharacter"), sizeof(FSpawnableCharacter), Get_Z_Construct_UScriptStruct_FSpawnableCharacter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpawnableCharacter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpawnableCharacter_Hash() { return 2663710212U; }
	void ABaseSpawnActor::StaticRegisterNativesABaseSpawnActor()
	{
	}
	UClass* Z_Construct_UClass_ABaseSpawnActor_NoRegister()
	{
		return ABaseSpawnActor::StaticClass();
	}
	struct Z_Construct_UClass_ABaseSpawnActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseSpawnActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperSpriteActor,
		(UObject* (*)())Z_Construct_UPackage__Script_KeepItAlive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseSpawnActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BaseSpawnActor.h" },
		{ "ModuleRelativePath", "BaseSpawnActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseSpawnActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseSpawnActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseSpawnActor_Statics::ClassParams = {
		&ABaseSpawnActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseSpawnActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseSpawnActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseSpawnActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseSpawnActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseSpawnActor, 2660599606);
	template<> KEEPITALIVE_API UClass* StaticClass<ABaseSpawnActor>()
	{
		return ABaseSpawnActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseSpawnActor(Z_Construct_UClass_ABaseSpawnActor, &ABaseSpawnActor::StaticClass, TEXT("/Script/KeepItAlive"), TEXT("ABaseSpawnActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseSpawnActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
