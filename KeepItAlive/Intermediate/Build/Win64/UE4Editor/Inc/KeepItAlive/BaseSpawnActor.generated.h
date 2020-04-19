// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KEEPITALIVE_BaseSpawnActor_generated_h
#error "BaseSpawnActor.generated.h already included, missing '#pragma once' in BaseSpawnActor.h"
#endif
#define KEEPITALIVE_BaseSpawnActor_generated_h

#define KeepItAlive_Source_KeepItAlive_BaseSpawnActor_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpawnableCharacter_Statics; \
	KEEPITALIVE_API static class UScriptStruct* StaticStruct();


template<> KEEPITALIVE_API UScriptStruct* StaticStruct<struct FSpawnableCharacter>();

#define KeepItAlive_Source_KeepItAlive_BaseSpawnActor_h_33_SPARSE_DATA
#define KeepItAlive_Source_KeepItAlive_BaseSpawnActor_h_33_RPC_WRAPPERS
#define KeepItAlive_Source_KeepItAlive_BaseSpawnActor_h_33_RPC_WRAPPERS_NO_PURE_DECLS
#define KeepItAlive_Source_KeepItAlive_BaseSpawnActor_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseSpawnActor(); \
	friend struct Z_Construct_UClass_ABaseSpawnActor_Statics; \
public: \
	DECLARE_CLASS(ABaseSpawnActor, APaperSpriteActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KeepItAlive"), NO_API) \
	DECLARE_SERIALIZER(ABaseSpawnActor)


#define KeepItAlive_Source_KeepItAlive_BaseSpawnActor_h_33_INCLASS \
private: \
	static void StaticRegisterNativesABaseSpawnActor(); \
	friend struct Z_Construct_UClass_ABaseSpawnActor_Statics; \
public: \
	DECLARE_CLASS(ABaseSpawnActor, APaperSpriteActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KeepItAlive"), NO_API) \
	DECLARE_SERIALIZER(ABaseSpawnActor)


#define KeepItAlive_Source_KeepItAlive_BaseSpawnActor_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseSpawnActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseSpawnActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseSpawnActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseSpawnActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseSpawnActor(ABaseSpawnActor&&); \
	NO_API ABaseSpawnActor(const ABaseSpawnActor&); \
public:


#define KeepItAlive_Source_KeepItAlive_BaseSpawnActor_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseSpawnActor(ABaseSpawnActor&&); \
	NO_API ABaseSpawnActor(const ABaseSpawnActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseSpawnActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseSpawnActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseSpawnActor)


#define KeepItAlive_Source_KeepItAlive_BaseSpawnActor_h_33_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WaveToSpawn() { return STRUCT_OFFSET(ABaseSpawnActor, WaveToSpawn); } \
	FORCEINLINE static uint32 __PPO__OriginPoolForCharacters() { return STRUCT_OFFSET(ABaseSpawnActor, OriginPoolForCharacters); } \
	FORCEINLINE static uint32 __PPO__GameState() { return STRUCT_OFFSET(ABaseSpawnActor, GameState); }


#define KeepItAlive_Source_KeepItAlive_BaseSpawnActor_h_30_PROLOG
#define KeepItAlive_Source_KeepItAlive_BaseSpawnActor_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KeepItAlive_Source_KeepItAlive_BaseSpawnActor_h_33_PRIVATE_PROPERTY_OFFSET \
	KeepItAlive_Source_KeepItAlive_BaseSpawnActor_h_33_SPARSE_DATA \
	KeepItAlive_Source_KeepItAlive_BaseSpawnActor_h_33_RPC_WRAPPERS \
	KeepItAlive_Source_KeepItAlive_BaseSpawnActor_h_33_INCLASS \
	KeepItAlive_Source_KeepItAlive_BaseSpawnActor_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KeepItAlive_Source_KeepItAlive_BaseSpawnActor_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KeepItAlive_Source_KeepItAlive_BaseSpawnActor_h_33_PRIVATE_PROPERTY_OFFSET \
	KeepItAlive_Source_KeepItAlive_BaseSpawnActor_h_33_SPARSE_DATA \
	KeepItAlive_Source_KeepItAlive_BaseSpawnActor_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	KeepItAlive_Source_KeepItAlive_BaseSpawnActor_h_33_INCLASS_NO_PURE_DECLS \
	KeepItAlive_Source_KeepItAlive_BaseSpawnActor_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KEEPITALIVE_API UClass* StaticClass<class ABaseSpawnActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KeepItAlive_Source_KeepItAlive_BaseSpawnActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
