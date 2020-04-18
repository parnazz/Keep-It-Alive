// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef KEEPITALIVE_BasicProjectile_generated_h
#error "BasicProjectile.generated.h already included, missing '#pragma once' in BasicProjectile.h"
#endif
#define KEEPITALIVE_BasicProjectile_generated_h

#define KeepItAlive_Source_KeepItAlive_BasicProjectile_h_15_SPARSE_DATA
#define KeepItAlive_Source_KeepItAlive_BasicProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnWallHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnWallHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEnemyOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEnemyOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define KeepItAlive_Source_KeepItAlive_BasicProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnWallHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnWallHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEnemyOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEnemyOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define KeepItAlive_Source_KeepItAlive_BasicProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasicProjectile(); \
	friend struct Z_Construct_UClass_ABasicProjectile_Statics; \
public: \
	DECLARE_CLASS(ABasicProjectile, APaperSpriteActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KeepItAlive"), NO_API) \
	DECLARE_SERIALIZER(ABasicProjectile)


#define KeepItAlive_Source_KeepItAlive_BasicProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABasicProjectile(); \
	friend struct Z_Construct_UClass_ABasicProjectile_Statics; \
public: \
	DECLARE_CLASS(ABasicProjectile, APaperSpriteActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KeepItAlive"), NO_API) \
	DECLARE_SERIALIZER(ABasicProjectile)


#define KeepItAlive_Source_KeepItAlive_BasicProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasicProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasicProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicProjectile(ABasicProjectile&&); \
	NO_API ABasicProjectile(const ABasicProjectile&); \
public:


#define KeepItAlive_Source_KeepItAlive_BasicProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicProjectile(ABasicProjectile&&); \
	NO_API ABasicProjectile(const ABasicProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasicProjectile)


#define KeepItAlive_Source_KeepItAlive_BasicProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CapsuleComponent() { return STRUCT_OFFSET(ABasicProjectile, CapsuleComponent); } \
	FORCEINLINE static uint32 __PPO__PaperSpriteComponent() { return STRUCT_OFFSET(ABasicProjectile, PaperSpriteComponent); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovementComponent() { return STRUCT_OFFSET(ABasicProjectile, ProjectileMovementComponent); }


#define KeepItAlive_Source_KeepItAlive_BasicProjectile_h_12_PROLOG
#define KeepItAlive_Source_KeepItAlive_BasicProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KeepItAlive_Source_KeepItAlive_BasicProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	KeepItAlive_Source_KeepItAlive_BasicProjectile_h_15_SPARSE_DATA \
	KeepItAlive_Source_KeepItAlive_BasicProjectile_h_15_RPC_WRAPPERS \
	KeepItAlive_Source_KeepItAlive_BasicProjectile_h_15_INCLASS \
	KeepItAlive_Source_KeepItAlive_BasicProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KeepItAlive_Source_KeepItAlive_BasicProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KeepItAlive_Source_KeepItAlive_BasicProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	KeepItAlive_Source_KeepItAlive_BasicProjectile_h_15_SPARSE_DATA \
	KeepItAlive_Source_KeepItAlive_BasicProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	KeepItAlive_Source_KeepItAlive_BasicProjectile_h_15_INCLASS_NO_PURE_DECLS \
	KeepItAlive_Source_KeepItAlive_BasicProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KEEPITALIVE_API UClass* StaticClass<class ABasicProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KeepItAlive_Source_KeepItAlive_BasicProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
