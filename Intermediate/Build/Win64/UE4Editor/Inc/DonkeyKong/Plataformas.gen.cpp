// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong/Plataformas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlataformas() {}
// Cross Module References
	DONKEYKONG_API UClass* Z_Construct_UClass_APlataformas_NoRegister();
	DONKEYKONG_API UClass* Z_Construct_UClass_APlataformas();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong();
// End Cross Module References
	void APlataformas::StaticRegisterNativesAPlataformas()
	{
	}
	UClass* Z_Construct_UClass_APlataformas_NoRegister()
	{
		return APlataformas::StaticClass();
	}
	struct Z_Construct_UClass_APlataformas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlataformas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlataformas_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Plataformas.h" },
		{ "ModuleRelativePath", "Plataformas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlataformas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlataformas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlataformas_Statics::ClassParams = {
		&APlataformas::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlataformas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlataformas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlataformas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlataformas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlataformas, 807399386);
	template<> DONKEYKONG_API UClass* StaticClass<APlataformas>()
	{
		return APlataformas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlataformas(Z_Construct_UClass_APlataformas, &APlataformas::StaticClass, TEXT("/Script/DonkeyKong"), TEXT("APlataformas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlataformas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
