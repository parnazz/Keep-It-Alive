// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KEEPITALIVE_BaseWorker_generated_h
#error "BaseWorker.generated.h already included, missing '#pragma once' in BaseWorker.h"
#endif
#define KEEPITALIVE_BaseWorker_generated_h

#define KeepItAlive_Source_KeepItAlive_BaseWorker_h_15_SPARSE_DATA
#define KeepItAlive_Source_KeepItAlive_BaseWorker_h_15_RPC_WRAPPERS
#define KeepItAlive_Source_KeepItAlive_BaseWorker_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define KeepItAlive_Source_KeepItAlive_BaseWorker_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseWorker(); \
	friend struct Z_Construct_UClass_ABaseWorker_Statics; \
public: \
	DECLARE_CLASS(ABaseWorker, ABaseNPC, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KeepItAlive"), NO_API) \
	DECLARE_SERIALIZER(ABaseWorker)


#define KeepItAlive_Source_KeepItAlive_BaseWorker_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABaseWorker(); \
	friend struct Z_Construct_UClass_ABaseWorker_Statics; \
public: \
	DECLARE_CLASS(ABaseWorker, ABaseNPC, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KeepItAlive"), NO_API) \
	DECLARE_SERIALIZER(ABaseWorker)


#define KeepItAlive_Source_KeepItAlive_BaseWorker_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseWorker(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseWorker) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseWorker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseWorker); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseWorker(ABaseWorker&&); \
	NO_API ABaseWorker(const ABaseWorker&); \
public:


#define KeepItAlive_Source_KeepItAlive_BaseWorker_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseWorker(ABaseWorker&&); \
	NO_API ABaseWorker(const ABaseWorker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseWorker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseWorker); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseWorker)


#define KeepItAlive_Source_KeepItAlive_BaseWorker_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StateMachine() { return STRUCT_OFFSET(ABaseWorker, StateMachine); }


#define KeepItAlive_Source_KeepItAlive_BaseWorker_h_12_PROLOG
#define KeepItAlive_Source_KeepItAlive_BaseWorker_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KeepItAlive_Source_KeepItAlive_BaseWorker_h_15_PRIVATE_PROPERTY_OFFSET \
	KeepItAlive_Source_KeepItAlive_BaseWorker_h_15_SPARSE_DATA \
	KeepItAlive_Source_KeepItAlive_BaseWorker_h_15_RPC_WRAPPERS \
	KeepItAlive_Source_KeepItAlive_BaseWorker_h_15_INCLASS \
	KeepItAlive_Source_KeepItAlive_BaseWorker_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KeepItAlive_Source_KeepItAlive_BaseWorker_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KeepItAlive_Source_KeepItAlive_BaseWorker_h_15_PRIVATE_PROPERTY_OFFSET \
	KeepItAlive_Source_KeepItAlive_BaseWorker_h_15_SPARSE_DATA \
	KeepItAlive_Source_KeepItAlive_BaseWorker_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	KeepItAlive_Source_KeepItAlive_BaseWorker_h_15_INCLASS_NO_PURE_DECLS \
	KeepItAlive_Source_KeepItAlive_BaseWorker_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KEEPITALIVE_API UClass* StaticClass<class ABaseWorker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KeepItAlive_Source_KeepItAlive_BaseWorker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
