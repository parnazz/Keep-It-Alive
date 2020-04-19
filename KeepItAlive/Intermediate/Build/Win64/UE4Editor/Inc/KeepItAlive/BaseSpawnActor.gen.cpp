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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	KEEPITALIVE_API UClass* Z_Construct_UClass_ABaseNPC_NoRegister();
	KEEPITALIVE_API UClass* Z_Construct_UClass_ABaseSpawnActor_NoRegister();
	KEEPITALIVE_API UClass* Z_Construct_UClass_ABaseSpawnActor();
	PAPER2D_API UClass* Z_Construct_UClass_APaperSpriteActor();
	KEEPITALIVE_API UClass* Z_Construct_UClass_AKeepItAliveGameStateBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterToSpawnClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CharacterToSpawnClass;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableCharacter_Statics::NewProp_CharacterToSpawnClass_MetaData[] = {
		{ "Category", "SpawnableCharacter" },
		{ "ModuleRelativePath", "BaseSpawnActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSpawnableCharacter_Statics::NewProp_CharacterToSpawnClass = { "CharacterToSpawnClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableCharacter, CharacterToSpawnClass), Z_Construct_UClass_ABaseNPC_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableCharacter_Statics::NewProp_CharacterToSpawnClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableCharacter_Statics::NewProp_CharacterToSpawnClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnableCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableCharacter_Statics::NewProp_LaneNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableCharacter_Statics::NewProp_TimeToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableCharacter_Statics::NewProp_CharacterToSpawnClass,
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
	uint32 Get_Z_Construct_UScriptStruct_FSpawnableCharacter_Hash() { return 3022611576U; }
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginPoolForCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginPoolForCharacters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaveToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WaveToSpawn;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WaveToSpawn_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseSpawnActor_Statics::NewProp_GameState_MetaData[] = {
		{ "ModuleRelativePath", "BaseSpawnActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseSpawnActor_Statics::NewProp_GameState = { "GameState", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseSpawnActor, GameState), Z_Construct_UClass_AKeepItAliveGameStateBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseSpawnActor_Statics::NewProp_GameState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseSpawnActor_Statics::NewProp_GameState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseSpawnActor_Statics::NewProp_OriginPoolForCharacters_MetaData[] = {
		{ "Category", "BaseSpawnActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseSpawnActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseSpawnActor_Statics::NewProp_OriginPoolForCharacters = { "OriginPoolForCharacters", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseSpawnActor, OriginPoolForCharacters), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseSpawnActor_Statics::NewProp_OriginPoolForCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseSpawnActor_Statics::NewProp_OriginPoolForCharacters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseSpawnActor_Statics::NewProp_WaveToSpawn_MetaData[] = {
		{ "Category", "Spawn Properties" },
		{ "ModuleRelativePath", "BaseSpawnActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseSpawnActor_Statics::NewProp_WaveToSpawn = { "WaveToSpawn", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseSpawnActor, WaveToSpawn), METADATA_PARAMS(Z_Construct_UClass_ABaseSpawnActor_Statics::NewProp_WaveToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseSpawnActor_Statics::NewProp_WaveToSpawn_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseSpawnActor_Statics::NewProp_WaveToSpawn_Inner = { "WaveToSpawn", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSpawnableCharacter, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseSpawnActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseSpawnActor_Statics::NewProp_GameState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseSpawnActor_Statics::NewProp_OriginPoolForCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseSpawnActor_Statics::NewProp_WaveToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseSpawnActor_Statics::NewProp_WaveToSpawn_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseSpawnActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseSpawnActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseSpawnActor_Statics::ClassParams = {
		&ABaseSpawnActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseSpawnActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseSpawnActor_Statics::PropPointers),
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
	IMPLEMENT_CLASS(ABaseSpawnActor, 1826368429);
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
