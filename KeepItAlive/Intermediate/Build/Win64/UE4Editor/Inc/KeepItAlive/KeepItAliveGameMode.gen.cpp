// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KeepItAlive/KeepItAliveGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeepItAliveGameMode() {}
// Cross Module References
	KEEPITALIVE_API UEnum* Z_Construct_UEnum_KeepItAlive_EInGameState();
	UPackage* Z_Construct_UPackage__Script_KeepItAlive();
	KEEPITALIVE_API UClass* Z_Construct_UClass_AKeepItAliveGameMode_NoRegister();
	KEEPITALIVE_API UClass* Z_Construct_UClass_AKeepItAliveGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	KEEPITALIVE_API UClass* Z_Construct_UClass_ABaseSpawnActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	KEEPITALIVE_API UClass* Z_Construct_UClass_AKeepItAliveGameStateBase_NoRegister();
// End Cross Module References
	static UEnum* EInGameState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_KeepItAlive_EInGameState, Z_Construct_UPackage__Script_KeepItAlive(), TEXT("EInGameState"));
		}
		return Singleton;
	}
	template<> KEEPITALIVE_API UEnum* StaticEnum<EInGameState>()
	{
		return EInGameState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInGameState(EInGameState_StaticEnum, TEXT("/Script/KeepItAlive"), TEXT("EInGameState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_KeepItAlive_EInGameState_Hash() { return 2825914667U; }
	UEnum* Z_Construct_UEnum_KeepItAlive_EInGameState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_KeepItAlive();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInGameState"), 0, Get_Z_Construct_UEnum_KeepItAlive_EInGameState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInGameState::EBattle", (int64)EInGameState::EBattle },
				{ "EInGameState::EWaveSpawn", (int64)EInGameState::EWaveSpawn },
				{ "EInGameState::ESpawnWorkers", (int64)EInGameState::ESpawnWorkers },
				{ "EInGameState::EBetweenWaves", (int64)EInGameState::EBetweenWaves },
				{ "EInGameState::EGameOver", (int64)EInGameState::EGameOver },
				{ "EInGameState::EWon", (int64)EInGameState::EWon },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EBattle.Name", "EInGameState::EBattle" },
				{ "EBetweenWaves.Name", "EInGameState::EBetweenWaves" },
				{ "EGameOver.Name", "EInGameState::EGameOver" },
				{ "ESpawnWorkers.Name", "EInGameState::ESpawnWorkers" },
				{ "EWaveSpawn.Name", "EInGameState::EWaveSpawn" },
				{ "EWon.Name", "EInGameState::EWon" },
				{ "ModuleRelativePath", "KeepItAliveGameMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_KeepItAlive,
				nullptr,
				"EInGameState",
				"EInGameState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AKeepItAliveGameMode::StaticRegisterNativesAKeepItAliveGameMode()
	{
	}
	UClass* Z_Construct_UClass_AKeepItAliveGameMode_NoRegister()
	{
		return AKeepItAliveGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AKeepItAliveGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenWaves_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenWaves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkersToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WorkersToSpawn;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WorkersToSpawn_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToSpawn;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorsToSpawn_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationOfWorkersSpawnActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationOfWorkersSpawnActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationOfEnemySpawnActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationOfEnemySpawnActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationOfWorkersSpawnActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationOfWorkersSpawnActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationOfEnemySpawnActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationOfEnemySpawnActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameStateBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameStateBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKeepItAliveGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KeepItAlive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeepItAliveGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The GameMode defines the game being played. It governs the game rules, scoring, what actors\n * are allowed to exist in this game type, and who may enter the game.\n *\n * This game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of KeepItAliveCharacter\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "KeepItAliveGameMode.h" },
		{ "ModuleRelativePath", "KeepItAliveGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "The GameMode defines the game being played. It governs the game rules, scoring, what actors\nare allowed to exist in this game type, and who may enter the game.\n\nThis game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of KeepItAliveCharacter" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_TimeBetweenWaves_MetaData[] = {
		{ "Category", "Spawn Properties" },
		{ "ModuleRelativePath", "KeepItAliveGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_TimeBetweenWaves = { "TimeBetweenWaves", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKeepItAliveGameMode, TimeBetweenWaves), METADATA_PARAMS(Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_TimeBetweenWaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_TimeBetweenWaves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_SpawnActor_MetaData[] = {
		{ "ModuleRelativePath", "KeepItAliveGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_SpawnActor = { "SpawnActor", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKeepItAliveGameMode, SpawnActor), Z_Construct_UClass_ABaseSpawnActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_SpawnActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_SpawnActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_WorkersToSpawn_MetaData[] = {
		{ "Category", "KeepItAliveGameMode" },
		{ "DisplayName", "Workers Waves" },
		{ "ModuleRelativePath", "KeepItAliveGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_WorkersToSpawn = { "WorkersToSpawn", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKeepItAliveGameMode, WorkersToSpawn), METADATA_PARAMS(Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_WorkersToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_WorkersToSpawn_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_WorkersToSpawn_Inner = { "WorkersToSpawn", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABaseSpawnActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_ActorsToSpawn_MetaData[] = {
		{ "Category", "KeepItAliveGameMode" },
		{ "DisplayName", "Enemy Waves" },
		{ "ModuleRelativePath", "KeepItAliveGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_ActorsToSpawn = { "ActorsToSpawn", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKeepItAliveGameMode, ActorsToSpawn), METADATA_PARAMS(Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_ActorsToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_ActorsToSpawn_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_ActorsToSpawn_Inner = { "ActorsToSpawn", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABaseSpawnActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_RotationOfWorkersSpawnActor_MetaData[] = {
		{ "Category", "Spawn Properties" },
		{ "ModuleRelativePath", "KeepItAliveGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_RotationOfWorkersSpawnActor = { "RotationOfWorkersSpawnActor", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKeepItAliveGameMode, RotationOfWorkersSpawnActor), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_RotationOfWorkersSpawnActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_RotationOfWorkersSpawnActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_RotationOfEnemySpawnActor_MetaData[] = {
		{ "Category", "Spawn Properties" },
		{ "ModuleRelativePath", "KeepItAliveGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_RotationOfEnemySpawnActor = { "RotationOfEnemySpawnActor", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKeepItAliveGameMode, RotationOfEnemySpawnActor), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_RotationOfEnemySpawnActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_RotationOfEnemySpawnActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_LocationOfWorkersSpawnActor_MetaData[] = {
		{ "Category", "Spawn Properties" },
		{ "ModuleRelativePath", "KeepItAliveGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_LocationOfWorkersSpawnActor = { "LocationOfWorkersSpawnActor", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKeepItAliveGameMode, LocationOfWorkersSpawnActor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_LocationOfWorkersSpawnActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_LocationOfWorkersSpawnActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_LocationOfEnemySpawnActor_MetaData[] = {
		{ "Category", "Spawn Properties" },
		{ "ModuleRelativePath", "KeepItAliveGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_LocationOfEnemySpawnActor = { "LocationOfEnemySpawnActor", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKeepItAliveGameMode, LocationOfEnemySpawnActor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_LocationOfEnemySpawnActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_LocationOfEnemySpawnActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_GameStateBase_MetaData[] = {
		{ "ModuleRelativePath", "KeepItAliveGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_GameStateBase = { "GameStateBase", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKeepItAliveGameMode, GameStateBase), Z_Construct_UClass_AKeepItAliveGameStateBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_GameStateBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_GameStateBase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKeepItAliveGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_TimeBetweenWaves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_SpawnActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_WorkersToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_WorkersToSpawn_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_ActorsToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_ActorsToSpawn_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_RotationOfWorkersSpawnActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_RotationOfEnemySpawnActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_LocationOfWorkersSpawnActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_LocationOfEnemySpawnActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeepItAliveGameMode_Statics::NewProp_GameStateBase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKeepItAliveGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKeepItAliveGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKeepItAliveGameMode_Statics::ClassParams = {
		&AKeepItAliveGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AKeepItAliveGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AKeepItAliveGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AKeepItAliveGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKeepItAliveGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKeepItAliveGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKeepItAliveGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKeepItAliveGameMode, 829579464);
	template<> KEEPITALIVE_API UClass* StaticClass<AKeepItAliveGameMode>()
	{
		return AKeepItAliveGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKeepItAliveGameMode(Z_Construct_UClass_AKeepItAliveGameMode, &AKeepItAliveGameMode::StaticClass, TEXT("/Script/KeepItAlive"), TEXT("AKeepItAliveGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKeepItAliveGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
