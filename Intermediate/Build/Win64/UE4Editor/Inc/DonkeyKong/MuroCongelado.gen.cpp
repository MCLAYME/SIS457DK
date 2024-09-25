// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong/MuroCongelado.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuroCongelado() {}
// Cross Module References
	DONKEYKONG_API UClass* Z_Construct_UClass_AMuroCongelado_NoRegister();
	DONKEYKONG_API UClass* Z_Construct_UClass_AMuroCongelado();
	DONKEYKONG_API UClass* Z_Construct_UClass_AMuro();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	void AMuroCongelado::StaticRegisterNativesAMuroCongelado()
	{
	}
	UClass* Z_Construct_UClass_AMuroCongelado_NoRegister()
	{
		return AMuroCongelado::StaticClass();
	}
	struct Z_Construct_UClass_AMuroCongelado_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuroCongeladoMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuroCongeladoMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrozenMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FrozenMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuroCongelado_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMuro,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroCongelado_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MuroCongelado.h" },
		{ "ModuleRelativePath", "MuroCongelado.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroCongelado_Statics::NewProp_MuroCongeladoMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MuroCongelado.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMuroCongelado_Statics::NewProp_MuroCongeladoMesh = { "MuroCongeladoMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMuroCongelado, MuroCongeladoMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMuroCongelado_Statics::NewProp_MuroCongeladoMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroCongelado_Statics::NewProp_MuroCongeladoMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroCongelado_Statics::NewProp_FrozenMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "MuroCongelado.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMuroCongelado_Statics::NewProp_FrozenMaterial = { "FrozenMaterial", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMuroCongelado, FrozenMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMuroCongelado_Statics::NewProp_FrozenMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroCongelado_Statics::NewProp_FrozenMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMuroCongelado_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuroCongelado_Statics::NewProp_MuroCongeladoMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuroCongelado_Statics::NewProp_FrozenMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuroCongelado_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuroCongelado>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuroCongelado_Statics::ClassParams = {
		&AMuroCongelado::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMuroCongelado_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMuroCongelado_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMuroCongelado_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroCongelado_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuroCongelado()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuroCongelado_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuroCongelado, 652378268);
	template<> DONKEYKONG_API UClass* StaticClass<AMuroCongelado>()
	{
		return AMuroCongelado::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuroCongelado(Z_Construct_UClass_AMuroCongelado, &AMuroCongelado::StaticClass, TEXT("/Script/DonkeyKong"), TEXT("AMuroCongelado"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuroCongelado);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
