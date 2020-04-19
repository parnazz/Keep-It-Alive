// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KeepItAlive/WorkerStateMachine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorkerStateMachine() {}
// Cross Module References
	KEEPITALIVE_API UClass* Z_Construct_UClass_UWorkerStateMachine_NoRegister();
	KEEPITALIVE_API UClass* Z_Construct_UClass_UWorkerStateMachine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_KeepItAlive();
	KEEPITALIVE_API UClass* Z_Construct_UClass_UWorkerRunningState_NoRegister();
	KEEPITALIVE_API UClass* Z_Construct_UClass_UWorkerRunningState();
	KEEPITALIVE_API UClass* Z_Construct_UClass_ABaseWorker_NoRegister();
	KEEPITALIVE_API UClass* Z_Construct_UClass_UWorkerJobState_NoRegister();
	KEEPITALIVE_API UClass* Z_Construct_UClass_UWorkerJobState();
	KEEPITALIVE_API UClass* Z_Construct_UClass_UWorkerDeathState_NoRegister();
	KEEPITALIVE_API UClass* Z_Construct_UClass_UWorkerDeathState();
	KEEPITALIVE_API UFunction* Z_Construct_UFunction_UWorkerDeathState_OnDeath();
// End Cross Module References
	void UWorkerStateMachine::StaticRegisterNativesUWorkerStateMachine()
	{
	}
	UClass* Z_Construct_UClass_UWorkerStateMachine_NoRegister()
	{
		return UWorkerStateMachine::StaticClass();
	}
	struct Z_Construct_UClass_UWorkerStateMachine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorkerStateMachine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_KeepItAlive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorkerStateMachine_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WorkerStateMachine.h" },
		{ "ModuleRelativePath", "WorkerStateMachine.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorkerStateMachine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorkerStateMachine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWorkerStateMachine_Statics::ClassParams = {
		&UWorkerStateMachine::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWorkerStateMachine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorkerStateMachine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorkerStateMachine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWorkerStateMachine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWorkerStateMachine, 2142612250);
	template<> KEEPITALIVE_API UClass* StaticClass<UWorkerStateMachine>()
	{
		return UWorkerStateMachine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWorkerStateMachine(Z_Construct_UClass_UWorkerStateMachine, &UWorkerStateMachine::StaticClass, TEXT("/Script/KeepItAlive"), TEXT("UWorkerStateMachine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorkerStateMachine);
	void UWorkerRunningState::StaticRegisterNativesUWorkerRunningState()
	{
	}
	UClass* Z_Construct_UClass_UWorkerRunningState_NoRegister()
	{
		return UWorkerRunningState::StaticClass();
	}
	struct Z_Construct_UClass_UWorkerRunningState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Worker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Worker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorkerRunningState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorkerStateMachine,
		(UObject* (*)())Z_Construct_UPackage__Script_KeepItAlive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorkerRunningState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorkerStateMachine.h" },
		{ "ModuleRelativePath", "WorkerStateMachine.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorkerRunningState_Statics::NewProp_Worker_MetaData[] = {
		{ "ModuleRelativePath", "WorkerStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorkerRunningState_Statics::NewProp_Worker = { "Worker", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWorkerRunningState, Worker), Z_Construct_UClass_ABaseWorker_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorkerRunningState_Statics::NewProp_Worker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorkerRunningState_Statics::NewProp_Worker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorkerRunningState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorkerRunningState_Statics::NewProp_Worker,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorkerRunningState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorkerRunningState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWorkerRunningState_Statics::ClassParams = {
		&UWorkerRunningState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorkerRunningState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorkerRunningState_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWorkerRunningState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorkerRunningState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorkerRunningState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWorkerRunningState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWorkerRunningState, 4112935673);
	template<> KEEPITALIVE_API UClass* StaticClass<UWorkerRunningState>()
	{
		return UWorkerRunningState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWorkerRunningState(Z_Construct_UClass_UWorkerRunningState, &UWorkerRunningState::StaticClass, TEXT("/Script/KeepItAlive"), TEXT("UWorkerRunningState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorkerRunningState);
	void UWorkerJobState::StaticRegisterNativesUWorkerJobState()
	{
	}
	UClass* Z_Construct_UClass_UWorkerJobState_NoRegister()
	{
		return UWorkerJobState::StaticClass();
	}
	struct Z_Construct_UClass_UWorkerJobState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Worker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Worker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorkerJobState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorkerStateMachine,
		(UObject* (*)())Z_Construct_UPackage__Script_KeepItAlive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorkerJobState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorkerStateMachine.h" },
		{ "ModuleRelativePath", "WorkerStateMachine.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorkerJobState_Statics::NewProp_Worker_MetaData[] = {
		{ "ModuleRelativePath", "WorkerStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorkerJobState_Statics::NewProp_Worker = { "Worker", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWorkerJobState, Worker), Z_Construct_UClass_ABaseWorker_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorkerJobState_Statics::NewProp_Worker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorkerJobState_Statics::NewProp_Worker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorkerJobState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorkerJobState_Statics::NewProp_Worker,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorkerJobState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorkerJobState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWorkerJobState_Statics::ClassParams = {
		&UWorkerJobState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorkerJobState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorkerJobState_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWorkerJobState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorkerJobState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorkerJobState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWorkerJobState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWorkerJobState, 3009248714);
	template<> KEEPITALIVE_API UClass* StaticClass<UWorkerJobState>()
	{
		return UWorkerJobState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWorkerJobState(Z_Construct_UClass_UWorkerJobState, &UWorkerJobState::StaticClass, TEXT("/Script/KeepItAlive"), TEXT("UWorkerJobState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorkerJobState);
	void UWorkerDeathState::StaticRegisterNativesUWorkerDeathState()
	{
		UClass* Class = UWorkerDeathState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDeath", &UWorkerDeathState::execOnDeath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWorkerDeathState_OnDeath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorkerDeathState_OnDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WorkerStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorkerDeathState_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorkerDeathState, nullptr, "OnDeath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorkerDeathState_OnDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorkerDeathState_OnDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorkerDeathState_OnDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWorkerDeathState_OnDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWorkerDeathState_NoRegister()
	{
		return UWorkerDeathState::StaticClass();
	}
	struct Z_Construct_UClass_UWorkerDeathState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Worker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Worker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorkerDeathState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorkerStateMachine,
		(UObject* (*)())Z_Construct_UPackage__Script_KeepItAlive,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWorkerDeathState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWorkerDeathState_OnDeath, "OnDeath" }, // 2845340899
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorkerDeathState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorkerStateMachine.h" },
		{ "ModuleRelativePath", "WorkerStateMachine.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorkerDeathState_Statics::NewProp_Worker_MetaData[] = {
		{ "ModuleRelativePath", "WorkerStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorkerDeathState_Statics::NewProp_Worker = { "Worker", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWorkerDeathState, Worker), Z_Construct_UClass_ABaseWorker_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorkerDeathState_Statics::NewProp_Worker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorkerDeathState_Statics::NewProp_Worker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorkerDeathState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorkerDeathState_Statics::NewProp_Worker,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorkerDeathState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorkerDeathState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWorkerDeathState_Statics::ClassParams = {
		&UWorkerDeathState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWorkerDeathState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorkerDeathState_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWorkerDeathState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorkerDeathState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorkerDeathState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWorkerDeathState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWorkerDeathState, 796832555);
	template<> KEEPITALIVE_API UClass* StaticClass<UWorkerDeathState>()
	{
		return UWorkerDeathState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWorkerDeathState(Z_Construct_UClass_UWorkerDeathState, &UWorkerDeathState::StaticClass, TEXT("/Script/KeepItAlive"), TEXT("UWorkerDeathState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorkerDeathState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
