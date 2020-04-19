// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KeepItAlive/BaseNPC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseNPC() {}
// Cross Module References
	KEEPITALIVE_API UClass* Z_Construct_UClass_ABaseNPC_NoRegister();
	KEEPITALIVE_API UClass* Z_Construct_UClass_ABaseNPC();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	UPackage* Z_Construct_UPackage__Script_KeepItAlive();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	KEEPITALIVE_API UClass* Z_Construct_UClass_UDamageComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
	KEEPITALIVE_API UClass* Z_Construct_UClass_AKeepItAliveGameStateBase_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
// End Cross Module References
	void ABaseNPC::StaticRegisterNativesABaseNPC()
	{
	}
	UClass* Z_Construct_UClass_ABaseNPC_NoRegister()
	{
		return ABaseNPC::StaticClass();
	}
	struct Z_Construct_UClass_ABaseNPC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DieAnimationHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DieAnimationHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaperSpriteComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PaperSpriteComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DieAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DieAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RunAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseNPC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_KeepItAlive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNPC_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseNPC.h" },
		{ "ModuleRelativePath", "BaseNPC.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNPC_Statics::NewProp_DieAnimationHandler_MetaData[] = {
		{ "ModuleRelativePath", "BaseNPC.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseNPC_Statics::NewProp_DieAnimationHandler = { "DieAnimationHandler", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseNPC, DieAnimationHandler), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ABaseNPC_Statics::NewProp_DieAnimationHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNPC_Statics::NewProp_DieAnimationHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNPC_Statics::NewProp_DamageComponent_MetaData[] = {
		{ "Category", "BaseNPC" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseNPC.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseNPC_Statics::NewProp_DamageComponent = { "DamageComponent", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseNPC, DamageComponent), Z_Construct_UClass_UDamageComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseNPC_Statics::NewProp_DamageComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNPC_Statics::NewProp_DamageComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNPC_Statics::NewProp_CollisionCheck_MetaData[] = {
		{ "Category", "BaseNPC" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseNPC.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseNPC_Statics::NewProp_CollisionCheck = { "CollisionCheck", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseNPC, CollisionCheck), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseNPC_Statics::NewProp_CollisionCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNPC_Statics::NewProp_CollisionCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNPC_Statics::NewProp_PaperSpriteComponent_MetaData[] = {
		{ "Category", "Sprite" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseNPC.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseNPC_Statics::NewProp_PaperSpriteComponent = { "PaperSpriteComponent", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseNPC, PaperSpriteComponent), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseNPC_Statics::NewProp_PaperSpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNPC_Statics::NewProp_PaperSpriteComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNPC_Statics::NewProp_GameState_MetaData[] = {
		{ "ModuleRelativePath", "BaseNPC.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseNPC_Statics::NewProp_GameState = { "GameState", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseNPC, GameState), Z_Construct_UClass_AKeepItAliveGameStateBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseNPC_Statics::NewProp_GameState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNPC_Statics::NewProp_GameState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNPC_Statics::NewProp_DieAnimation_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "BaseNPC.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseNPC_Statics::NewProp_DieAnimation = { "DieAnimation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseNPC, DieAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseNPC_Statics::NewProp_DieAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNPC_Statics::NewProp_DieAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNPC_Statics::NewProp_ActionAnimation_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "BaseNPC.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseNPC_Statics::NewProp_ActionAnimation = { "ActionAnimation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseNPC, ActionAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseNPC_Statics::NewProp_ActionAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNPC_Statics::NewProp_ActionAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNPC_Statics::NewProp_RunAnimation_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "BaseNPC.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseNPC_Statics::NewProp_RunAnimation = { "RunAnimation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseNPC, RunAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseNPC_Statics::NewProp_RunAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNPC_Statics::NewProp_RunAnimation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseNPC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseNPC_Statics::NewProp_DieAnimationHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseNPC_Statics::NewProp_DamageComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseNPC_Statics::NewProp_CollisionCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseNPC_Statics::NewProp_PaperSpriteComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseNPC_Statics::NewProp_GameState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseNPC_Statics::NewProp_DieAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseNPC_Statics::NewProp_ActionAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseNPC_Statics::NewProp_RunAnimation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseNPC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseNPC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseNPC_Statics::ClassParams = {
		&ABaseNPC::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseNPC_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNPC_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseNPC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNPC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseNPC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseNPC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseNPC, 79323723);
	template<> KEEPITALIVE_API UClass* StaticClass<ABaseNPC>()
	{
		return ABaseNPC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseNPC(Z_Construct_UClass_ABaseNPC, &ABaseNPC::StaticClass, TEXT("/Script/KeepItAlive"), TEXT("ABaseNPC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseNPC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
