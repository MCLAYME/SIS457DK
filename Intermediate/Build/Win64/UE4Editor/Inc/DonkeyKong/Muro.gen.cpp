// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong/Muro.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuro() {}
// Cross Module References
	DONKEYKONG_API UClass* Z_Construct_UClass_AMuro_NoRegister();
	DONKEYKONG_API UClass* Z_Construct_UClass_AMuro();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMuro::execChocar)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Chocar();
		P_NATIVE_END;
	}
	void AMuro::StaticRegisterNativesAMuro()
	{
		UClass* Class = AMuro::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Chocar", &AMuro::execChocar },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMuro_Chocar_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMuro_Chocar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Muro.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMuro_Chocar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMuro, nullptr, "Chocar", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMuro_Chocar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMuro_Chocar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMuro_Chocar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMuro_Chocar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMuro_NoRegister()
	{
		return AMuro::StaticClass();
	}
	struct Z_Construct_UClass_AMuro_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImpactParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImpactSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuro_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMuro_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMuro_Chocar, "Chocar" }, // 3286978051
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuro_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Muro.h" },
		{ "ModuleRelativePath", "Muro.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuro_Statics::NewProp_ImpactParticles_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "// Efecto de part?culas a aplicar cuando el muro sea chocado\n" },
		{ "ModuleRelativePath", "Muro.h" },
		{ "ToolTip", "Efecto de part?culas a aplicar cuando el muro sea chocado" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMuro_Statics::NewProp_ImpactParticles = { "ImpactParticles", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMuro, ImpactParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMuro_Statics::NewProp_ImpactParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMuro_Statics::NewProp_ImpactParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuro_Statics::NewProp_ImpactSound_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "// Efecto de sonido a reproducir cuando el muro sea chocado\n" },
		{ "ModuleRelativePath", "Muro.h" },
		{ "ToolTip", "Efecto de sonido a reproducir cuando el muro sea chocado" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMuro_Statics::NewProp_ImpactSound = { "ImpactSound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMuro, ImpactSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMuro_Statics::NewProp_ImpactSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMuro_Statics::NewProp_ImpactSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMuro_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuro_Statics::NewProp_ImpactParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuro_Statics::NewProp_ImpactSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuro_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuro>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuro_Statics::ClassParams = {
		&AMuro::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMuro_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMuro_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMuro_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuro_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuro()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuro_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuro, 1654080265);
	template<> DONKEYKONG_API UClass* StaticClass<AMuro>()
	{
		return AMuro::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuro(Z_Construct_UClass_AMuro, &AMuro::StaticClass, TEXT("/Script/DonkeyKong"), TEXT("AMuro"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuro);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
