// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KeepItAlive/EnemyStateMachine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyStateMachine() {}
// Cross Module References
	KEEPITALIVE_API UClass* Z_Construct_UClass_UEnemyStateMachine_NoRegister();
	KEEPITALIVE_API UClass* Z_Construct_UClass_UEnemyStateMachine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_KeepItAlive();
	KEEPITALIVE_API UClass* Z_Construct_UClass_UEnemyRunningState_NoRegister();
	KEEPITALIVE_API UClass* Z_Construct_UClass_UEnemyRunningState();
	KEEPITALIVE_API UClass* Z_Construct_UClass_ABaseEnemy_NoRegister();
	KEEPITALIVE_API UClass* Z_Construct_UClass_UEnemyAttackingState_NoRegister();
	KEEPITALIVE_API UClass* Z_Construct_UClass_UEnemyAttackingState();
	KEEPITALIVE_API UClass* Z_Construct_UClass_UEnemyDeathState_NoRegister();
	KEEPITALIVE_API UClass* Z_Construct_UClass_UEnemyDeathState();
	KEEPITALIVE_API UFunction* Z_Construct_UFunction_UEnemyDeathState_OnDeath();
// End Cross Module References
	void UEnemyStateMachine::StaticRegisterNativesUEnemyStateMachine()
	{
	}
	UClass* Z_Construct_UClass_UEnemyStateMachine_NoRegister()
	{
		return UEnemyStateMachine::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyStateMachine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyStateMachine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_KeepItAlive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyStateMachine_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnemyStateMachine.h" },
		{ "ModuleRelativePath", "EnemyStateMachine.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyStateMachine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyStateMachine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemyStateMachine_Statics::ClassParams = {
		&UEnemyStateMachine::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyStateMachine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyStateMachine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyStateMachine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemyStateMachine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemyStateMachine, 4224339483);
	template<> KEEPITALIVE_API UClass* StaticClass<UEnemyStateMachine>()
	{
		return UEnemyStateMachine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemyStateMachine(Z_Construct_UClass_UEnemyStateMachine, &UEnemyStateMachine::StaticClass, TEXT("/Script/KeepItAlive"), TEXT("UEnemyStateMachine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyStateMachine);
	void UEnemyRunningState::StaticRegisterNativesUEnemyRunningState()
	{
	}
	UClass* Z_Construct_UClass_UEnemyRunningState_NoRegister()
	{
		return UEnemyRunningState::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyRunningState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enemy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyRunningState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnemyStateMachine,
		(UObject* (*)())Z_Construct_UPackage__Script_KeepItAlive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyRunningState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyStateMachine.h" },
		{ "ModuleRelativePath", "EnemyStateMachine.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyRunningState_Statics::NewProp_Enemy_MetaData[] = {
		{ "ModuleRelativePath", "EnemyStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyRunningState_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyRunningState, Enemy), Z_Construct_UClass_ABaseEnemy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemyRunningState_Statics::NewProp_Enemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyRunningState_Statics::NewProp_Enemy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyRunningState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyRunningState_Statics::NewProp_Enemy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyRunningState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyRunningState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemyRunningState_Statics::ClassParams = {
		&UEnemyRunningState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnemyRunningState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyRunningState_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyRunningState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyRunningState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyRunningState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemyRunningState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemyRunningState, 1050472459);
	template<> KEEPITALIVE_API UClass* StaticClass<UEnemyRunningState>()
	{
		return UEnemyRunningState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemyRunningState(Z_Construct_UClass_UEnemyRunningState, &UEnemyRunningState::StaticClass, TEXT("/Script/KeepItAlive"), TEXT("UEnemyRunningState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyRunningState);
	void UEnemyAttackingState::StaticRegisterNativesUEnemyAttackingState()
	{
	}
	UClass* Z_Construct_UClass_UEnemyAttackingState_NoRegister()
	{
		return UEnemyAttackingState::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyAttackingState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enemy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyAttackingState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnemyStateMachine,
		(UObject* (*)())Z_Construct_UPackage__Script_KeepItAlive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAttackingState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyStateMachine.h" },
		{ "ModuleRelativePath", "EnemyStateMachine.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAttackingState_Statics::NewProp_Enemy_MetaData[] = {
		{ "ModuleRelativePath", "EnemyStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyAttackingState_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyAttackingState, Enemy), Z_Construct_UClass_ABaseEnemy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemyAttackingState_Statics::NewProp_Enemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAttackingState_Statics::NewProp_Enemy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyAttackingState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAttackingState_Statics::NewProp_Enemy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyAttackingState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyAttackingState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemyAttackingState_Statics::ClassParams = {
		&UEnemyAttackingState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnemyAttackingState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAttackingState_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyAttackingState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAttackingState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyAttackingState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemyAttackingState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemyAttackingState, 1193258827);
	template<> KEEPITALIVE_API UClass* StaticClass<UEnemyAttackingState>()
	{
		return UEnemyAttackingState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemyAttackingState(Z_Construct_UClass_UEnemyAttackingState, &UEnemyAttackingState::StaticClass, TEXT("/Script/KeepItAlive"), TEXT("UEnemyAttackingState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyAttackingState);
	void UEnemyDeathState::StaticRegisterNativesUEnemyDeathState()
	{
		UClass* Class = UEnemyDeathState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDeath", &UEnemyDeathState::execOnDeath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnemyDeathState_OnDeath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyDeathState_OnDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyDeathState_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyDeathState, nullptr, "OnDeath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemyDeathState_OnDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyDeathState_OnDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemyDeathState_OnDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnemyDeathState_OnDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEnemyDeathState_NoRegister()
	{
		return UEnemyDeathState::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyDeathState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enemy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyDeathState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnemyStateMachine,
		(UObject* (*)())Z_Construct_UPackage__Script_KeepItAlive,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnemyDeathState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemyDeathState_OnDeath, "OnDeath" }, // 1867032287
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyDeathState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyStateMachine.h" },
		{ "ModuleRelativePath", "EnemyStateMachine.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyDeathState_Statics::NewProp_Enemy_MetaData[] = {
		{ "ModuleRelativePath", "EnemyStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyDeathState_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyDeathState, Enemy), Z_Construct_UClass_ABaseEnemy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemyDeathState_Statics::NewProp_Enemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyDeathState_Statics::NewProp_Enemy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyDeathState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyDeathState_Statics::NewProp_Enemy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyDeathState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyDeathState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemyDeathState_Statics::ClassParams = {
		&UEnemyDeathState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEnemyDeathState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyDeathState_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyDeathState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyDeathState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyDeathState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemyDeathState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemyDeathState, 2045333718);
	template<> KEEPITALIVE_API UClass* StaticClass<UEnemyDeathState>()
	{
		return UEnemyDeathState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemyDeathState(Z_Construct_UClass_UEnemyDeathState, &UEnemyDeathState::StaticClass, TEXT("/Script/KeepItAlive"), TEXT("UEnemyDeathState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyDeathState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
