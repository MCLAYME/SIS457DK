// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong/BombaNave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombaNave() {}
// Cross Module References
	DONKEYKONG_API UClass* Z_Construct_UClass_ABombaNave_NoRegister();
	DONKEYKONG_API UClass* Z_Construct_UClass_ABombaNave();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABombaNave::StaticRegisterNativesABombaNave()
	{
	}
	UClass* Z_Construct_UClass_ABombaNave_NoRegister()
	{
		return ABombaNave::StaticClass();
	}
	struct Z_Construct_UClass_ABombaNave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BombaMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BombaMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocidad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Velocidad;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABombaNave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABombaNave_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BombaNave.h" },
		{ "ModuleRelativePath", "BombaNave.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABombaNave_Statics::NewProp_BombaMesh_MetaData[] = {
		{ "Category", "Nave" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BombaNave.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABombaNave_Statics::NewProp_BombaMesh = { "BombaMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABombaNave, BombaMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABombaNave_Statics::NewProp_BombaMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABombaNave_Statics::NewProp_BombaMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABombaNave_Statics::NewProp_Velocidad_MetaData[] = {
		{ "Category", "Bomba" },
		{ "Comment", "// Velocidad de la bomba\n" },
		{ "ModuleRelativePath", "BombaNave.h" },
		{ "ToolTip", "Velocidad de la bomba" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABombaNave_Statics::NewProp_Velocidad = { "Velocidad", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABombaNave, Velocidad), METADATA_PARAMS(Z_Construct_UClass_ABombaNave_Statics::NewProp_Velocidad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABombaNave_Statics::NewProp_Velocidad_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABombaNave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABombaNave_Statics::NewProp_BombaMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABombaNave_Statics::NewProp_Velocidad,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABombaNave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABombaNave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABombaNave_Statics::ClassParams = {
		&ABombaNave::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABombaNave_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABombaNave_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABombaNave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABombaNave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABombaNave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABombaNave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABombaNave, 1958196838);
	template<> DONKEYKONG_API UClass* StaticClass<ABombaNave>()
	{
		return ABombaNave::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABombaNave(Z_Construct_UClass_ABombaNave, &ABombaNave::StaticClass, TEXT("/Script/DonkeyKong"), TEXT("ABombaNave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABombaNave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
