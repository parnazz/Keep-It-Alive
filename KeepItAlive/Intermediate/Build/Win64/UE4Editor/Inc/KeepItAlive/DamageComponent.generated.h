// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDamageType;
class AController;
#ifdef KEEPITALIVE_DamageComponent_generated_h
#error "DamageComponent.generated.h already included, missing '#pragma once' in DamageComponent.h"
#endif
#define KEEPITALIVE_DamageComponent_generated_h

#define KeepItAlive_Source_KeepItAlive_DamageComponent_h_13_SPARSE_DATA
#define KeepItAlive_Source_KeepItAlive_DamageComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnDamageTaken) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_DamagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDamageTaken(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define KeepItAlive_Source_KeepItAlive_DamageComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnDamageTaken) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_DamagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDamageTaken(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define KeepItAlive_Source_KeepItAlive_DamageComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDamageComponent(); \
	friend struct Z_Construct_UClass_UDamageComponent_Statics; \
public: \
	DECLARE_CLASS(UDamageComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KeepItAlive"), NO_API) \
	DECLARE_SERIALIZER(UDamageComponent)


#define KeepItAlive_Source_KeepItAlive_DamageComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUDamageComponent(); \
	friend struct Z_Construct_UClass_UDamageComponent_Statics; \
public: \
	DECLARE_CLASS(UDamageComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KeepItAlive"), NO_API) \
	DECLARE_SERIALIZER(UDamageComponent)


#define KeepItAlive_Source_KeepItAlive_DamageComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDamageComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamageComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDamageComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDamageComponent(UDamageComponent&&); \
	NO_API UDamageComponent(const UDamageComponent&); \
public:


#define KeepItAlive_Source_KeepItAlive_DamageComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDamageComponent(UDamageComponent&&); \
	NO_API UDamageComponent(const UDamageComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDamageComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDamageComponent)


#define KeepItAlive_Source_KeepItAlive_DamageComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(UDamageComponent, MaxHealth); } \
	FORCEINLINE static uint32 __PPO__CurrentHealth() { return STRUCT_OFFSET(UDamageComponent, CurrentHealth); }


#define KeepItAlive_Source_KeepItAlive_DamageComponent_h_10_PROLOG
#define KeepItAlive_Source_KeepItAlive_DamageComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KeepItAlive_Source_KeepItAlive_DamageComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	KeepItAlive_Source_KeepItAlive_DamageComponent_h_13_SPARSE_DATA \
	KeepItAlive_Source_KeepItAlive_DamageComponent_h_13_RPC_WRAPPERS \
	KeepItAlive_Source_KeepItAlive_DamageComponent_h_13_INCLASS \
	KeepItAlive_Source_KeepItAlive_DamageComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KeepItAlive_Source_KeepItAlive_DamageComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KeepItAlive_Source_KeepItAlive_DamageComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	KeepItAlive_Source_KeepItAlive_DamageComponent_h_13_SPARSE_DATA \
	KeepItAlive_Source_KeepItAlive_DamageComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	KeepItAlive_Source_KeepItAlive_DamageComponent_h_13_INCLASS_NO_PURE_DECLS \
	KeepItAlive_Source_KeepItAlive_DamageComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KEEPITALIVE_API UClass* StaticClass<class UDamageComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KeepItAlive_Source_KeepItAlive_DamageComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
