// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong/DonkeyKongGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDonkeyKongGameMode() {}
// Cross Module References
	DONKEYKONG_API UClass* Z_Construct_UClass_ADonkeyKongGameMode_NoRegister();
	DONKEYKONG_API UClass* Z_Construct_UClass_ADonkeyKongGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong();
	DONKEYKONG_API UClass* Z_Construct_UClass_APlataformas_NoRegister();
// End Cross Module References
	void ADonkeyKongGameMode::StaticRegisterNativesADonkeyKongGameMode()
	{
	}
	UClass* Z_Construct_UClass_ADonkeyKongGameMode_NoRegister()
	{
		return ADonkeyKongGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADonkeyKongGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_componentesPlataforma_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_componentesPlataforma_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_componentesPlataforma;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADonkeyKongGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonkeyKongGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DonkeyKongGameMode.h" },
		{ "ModuleRelativePath", "DonkeyKongGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADonkeyKongGameMode_Statics::NewProp_componentesPlataforma_Inner = { "componentesPlataforma", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlataformas_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonkeyKongGameMode_Statics::NewProp_componentesPlataforma_MetaData[] = {
		{ "Category", "Plataformas" },
		{ "ModuleRelativePath", "DonkeyKongGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADonkeyKongGameMode_Statics::NewProp_componentesPlataforma = { "componentesPlataforma", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonkeyKongGameMode, componentesPlataforma), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADonkeyKongGameMode_Statics::NewProp_componentesPlataforma_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKongGameMode_Statics::NewProp_componentesPlataforma_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADonkeyKongGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonkeyKongGameMode_Statics::NewProp_componentesPlataforma_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonkeyKongGameMode_Statics::NewProp_componentesPlataforma,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADonkeyKongGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADonkeyKongGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADonkeyKongGameMode_Statics::ClassParams = {
		&ADonkeyKongGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADonkeyKongGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKongGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADonkeyKongGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKongGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADonkeyKongGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADonkeyKongGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADonkeyKongGameMode, 2402394379);
	template<> DONKEYKONG_API UClass* StaticClass<ADonkeyKongGameMode>()
	{
		return ADonkeyKongGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADonkeyKongGameMode(Z_Construct_UClass_ADonkeyKongGameMode, &ADonkeyKongGameMode::StaticClass, TEXT("/Script/DonkeyKong"), TEXT("ADonkeyKongGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADonkeyKongGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
