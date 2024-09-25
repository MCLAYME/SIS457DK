// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong/MuroPegajoso.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuroPegajoso() {}
// Cross Module References
	DONKEYKONG_API UClass* Z_Construct_UClass_AMuroPegajoso_NoRegister();
	DONKEYKONG_API UClass* Z_Construct_UClass_AMuroPegajoso();
	DONKEYKONG_API UClass* Z_Construct_UClass_AMuro();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	void AMuroPegajoso::StaticRegisterNativesAMuroPegajoso()
	{
	}
	UClass* Z_Construct_UClass_AMuroPegajoso_NoRegister()
	{
		return AMuroPegajoso::StaticClass();
	}
	struct Z_Construct_UClass_AMuroPegajoso_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuroPegajosoMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuroPegajosoMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StickyMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StickyMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuroPegajoso_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMuro,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroPegajoso_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MuroPegajoso.h" },
		{ "ModuleRelativePath", "MuroPegajoso.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroPegajoso_Statics::NewProp_MuroPegajosoMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MuroPegajoso.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMuroPegajoso_Statics::NewProp_MuroPegajosoMesh = { "MuroPegajosoMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMuroPegajoso, MuroPegajosoMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMuroPegajoso_Statics::NewProp_MuroPegajosoMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroPegajoso_Statics::NewProp_MuroPegajosoMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroPegajoso_Statics::NewProp_StickyMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "MuroPegajoso.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMuroPegajoso_Statics::NewProp_StickyMaterial = { "StickyMaterial", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMuroPegajoso, StickyMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMuroPegajoso_Statics::NewProp_StickyMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroPegajoso_Statics::NewProp_StickyMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMuroPegajoso_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuroPegajoso_Statics::NewProp_MuroPegajosoMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuroPegajoso_Statics::NewProp_StickyMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuroPegajoso_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuroPegajoso>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuroPegajoso_Statics::ClassParams = {
		&AMuroPegajoso::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMuroPegajoso_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMuroPegajoso_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMuroPegajoso_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroPegajoso_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuroPegajoso()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuroPegajoso_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuroPegajoso, 3684348066);
	template<> DONKEYKONG_API UClass* StaticClass<AMuroPegajoso>()
	{
		return AMuroPegajoso::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuroPegajoso(Z_Construct_UClass_AMuroPegajoso, &AMuroPegajoso::StaticClass, TEXT("/Script/DonkeyKong"), TEXT("AMuroPegajoso"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuroPegajoso);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
