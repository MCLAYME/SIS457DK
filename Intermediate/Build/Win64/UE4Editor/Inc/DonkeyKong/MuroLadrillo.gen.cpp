// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong/MuroLadrillo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuroLadrillo() {}
// Cross Module References
	DONKEYKONG_API UClass* Z_Construct_UClass_AMuroLadrillo_NoRegister();
	DONKEYKONG_API UClass* Z_Construct_UClass_AMuroLadrillo();
	DONKEYKONG_API UClass* Z_Construct_UClass_AMuro();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	void AMuroLadrillo::StaticRegisterNativesAMuroLadrillo()
	{
	}
	UClass* Z_Construct_UClass_AMuroLadrillo_NoRegister()
	{
		return AMuroLadrillo::StaticClass();
	}
	struct Z_Construct_UClass_AMuroLadrillo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuroLadrilloMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuroLadrilloMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrickMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BrickMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuroLadrillo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMuro,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroLadrillo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuroLadrillo.h" },
		{ "ModuleRelativePath", "MuroLadrillo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroLadrillo_Statics::NewProp_MuroLadrilloMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "// Componente de malla est?tica del muro\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MuroLadrillo.h" },
		{ "ToolTip", "Componente de malla est?tica del muro" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMuroLadrillo_Statics::NewProp_MuroLadrilloMesh = { "MuroLadrilloMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMuroLadrillo, MuroLadrilloMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMuroLadrillo_Statics::NewProp_MuroLadrilloMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroLadrillo_Statics::NewProp_MuroLadrilloMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroLadrillo_Statics::NewProp_BrickMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "// Material del muro\n" },
		{ "ModuleRelativePath", "MuroLadrillo.h" },
		{ "ToolTip", "Material del muro" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMuroLadrillo_Statics::NewProp_BrickMaterial = { "BrickMaterial", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMuroLadrillo, BrickMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMuroLadrillo_Statics::NewProp_BrickMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroLadrillo_Statics::NewProp_BrickMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMuroLadrillo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuroLadrillo_Statics::NewProp_MuroLadrilloMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuroLadrillo_Statics::NewProp_BrickMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuroLadrillo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuroLadrillo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuroLadrillo_Statics::ClassParams = {
		&AMuroLadrillo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMuroLadrillo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMuroLadrillo_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMuroLadrillo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroLadrillo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuroLadrillo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuroLadrillo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuroLadrillo, 682605485);
	template<> DONKEYKONG_API UClass* StaticClass<AMuroLadrillo>()
	{
		return AMuroLadrillo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuroLadrillo(Z_Construct_UClass_AMuroLadrillo, &AMuroLadrillo::StaticClass, TEXT("/Script/DonkeyKong"), TEXT("AMuroLadrillo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuroLadrillo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
