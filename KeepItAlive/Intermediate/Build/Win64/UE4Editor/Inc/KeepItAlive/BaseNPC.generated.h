// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KEEPITALIVE_BaseNPC_generated_h
#error "BaseNPC.generated.h already included, missing '#pragma once' in BaseNPC.h"
#endif
#define KEEPITALIVE_BaseNPC_generated_h

#define KeepItAlive_Source_KeepItAlive_BaseNPC_h_17_SPARSE_DATA
#define KeepItAlive_Source_KeepItAlive_BaseNPC_h_17_RPC_WRAPPERS
#define KeepItAlive_Source_KeepItAlive_BaseNPC_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define KeepItAlive_Source_KeepItAlive_BaseNPC_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseNPC(); \
	friend struct Z_Construct_UClass_ABaseNPC_Statics; \
public: \
	DECLARE_CLASS(ABaseNPC, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KeepItAlive"), NO_API) \
	DECLARE_SERIALIZER(ABaseNPC)


#define KeepItAlive_Source_KeepItAlive_BaseNPC_h_17_INCLASS \
private: \
	static void StaticRegisterNativesABaseNPC(); \
	friend struct Z_Construct_UClass_ABaseNPC_Statics; \
public: \
	DECLARE_CLASS(ABaseNPC, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KeepItAlive"), NO_API) \
	DECLARE_SERIALIZER(ABaseNPC)


#define KeepItAlive_Source_KeepItAlive_BaseNPC_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseNPC(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseNPC) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseNPC); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseNPC); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseNPC(ABaseNPC&&); \
	NO_API ABaseNPC(const ABaseNPC&); \
public:


#define KeepItAlive_Source_KeepItAlive_BaseNPC_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseNPC(ABaseNPC&&); \
	NO_API ABaseNPC(const ABaseNPC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseNPC); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseNPC); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseNPC)


#define KeepItAlive_Source_KeepItAlive_BaseNPC_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PaperSpriteComponent() { return STRUCT_OFFSET(ABaseNPC, PaperSpriteComponent); } \
	FORCEINLINE static uint32 __PPO__CollisionCheck() { return STRUCT_OFFSET(ABaseNPC, CollisionCheck); } \
	FORCEINLINE static uint32 __PPO__DamageComponent() { return STRUCT_OFFSET(ABaseNPC, DamageComponent); } \
	FORCEINLINE static uint32 __PPO__DieAnimationHandler() { return STRUCT_OFFSET(ABaseNPC, DieAnimationHandler); }


#define KeepItAlive_Source_KeepItAlive_BaseNPC_h_14_PROLOG
#define KeepItAlive_Source_KeepItAlive_BaseNPC_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KeepItAlive_Source_KeepItAlive_BaseNPC_h_17_PRIVATE_PROPERTY_OFFSET \
	KeepItAlive_Source_KeepItAlive_BaseNPC_h_17_SPARSE_DATA \
	KeepItAlive_Source_KeepItAlive_BaseNPC_h_17_RPC_WRAPPERS \
	KeepItAlive_Source_KeepItAlive_BaseNPC_h_17_INCLASS \
	KeepItAlive_Source_KeepItAlive_BaseNPC_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KeepItAlive_Source_KeepItAlive_BaseNPC_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KeepItAlive_Source_KeepItAlive_BaseNPC_h_17_PRIVATE_PROPERTY_OFFSET \
	KeepItAlive_Source_KeepItAlive_BaseNPC_h_17_SPARSE_DATA \
	KeepItAlive_Source_KeepItAlive_BaseNPC_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	KeepItAlive_Source_KeepItAlive_BaseNPC_h_17_INCLASS_NO_PURE_DECLS \
	KeepItAlive_Source_KeepItAlive_BaseNPC_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KEEPITALIVE_API UClass* StaticClass<class ABaseNPC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KeepItAlive_Source_KeepItAlive_BaseNPC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
