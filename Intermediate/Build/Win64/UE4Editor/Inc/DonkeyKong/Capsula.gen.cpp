// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong/Capsula.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsula() {}
// Cross Module References
	DONKEYKONG_API UClass* Z_Construct_UClass_ACapsula_NoRegister();
	DONKEYKONG_API UClass* Z_Construct_UClass_ACapsula();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong();
	DONKEYKONG_API UClass* Z_Construct_UClass_ADonkeyKongCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACapsula::execExplote)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Explote();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACapsula::execDetectarCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DetectarCharacter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACapsula::execDisparar)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Disparar();
		P_NATIVE_END;
	}
	void ACapsula::StaticRegisterNativesACapsula()
	{
		UClass* Class = ACapsula::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DetectarCharacter", &ACapsula::execDetectarCharacter },
			{ "Disparar", &ACapsula::execDisparar },
			{ "Explote", &ACapsula::execExplote },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACapsula_DetectarCharacter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACapsula_DetectarCharacter_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Funci?n para detectar al personaje\n" },
		{ "ModuleRelativePath", "Capsula.h" },
		{ "ToolTip", "Funci?n para detectar al personaje" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACapsula_DetectarCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACapsula, nullptr, "DetectarCharacter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACapsula_DetectarCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACapsula_DetectarCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACapsula_DetectarCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACapsula_DetectarCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACapsula_Disparar_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACapsula_Disparar_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Funci?n para disparar al personaje\n" },
		{ "ModuleRelativePath", "Capsula.h" },
		{ "ToolTip", "Funci?n para disparar al personaje" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACapsula_Disparar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACapsula, nullptr, "Disparar", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACapsula_Disparar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACapsula_Disparar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACapsula_Disparar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACapsula_Disparar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACapsula_Explote_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACapsula_Explote_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Funci?n para explotar y destruir la c?psula\n" },
		{ "ModuleRelativePath", "Capsula.h" },
		{ "ToolTip", "Funci?n para explotar y destruir la c?psula" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACapsula_Explote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACapsula, nullptr, "Explote", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACapsula_Explote_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACapsula_Explote_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACapsula_Explote()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACapsula_Explote_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACapsula_NoRegister()
	{
		return ACapsula::StaticClass();
	}
	struct Z_Construct_UClass_ACapsula_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangoPatrullaje_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangoPatrullaje;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocidadPatrullaje_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocidadPatrullaje;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TiempoEntreDisparos_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TiempoEntreDisparos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsulaVisual_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsulaVisual;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapsula_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACapsula_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACapsula_DetectarCharacter, "DetectarCharacter" }, // 2550513984
		{ &Z_Construct_UFunction_ACapsula_Disparar, "Disparar" }, // 3238338017
		{ &Z_Construct_UFunction_ACapsula_Explote, "Explote" }, // 4199919708
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsula_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Capsula.h" },
		{ "ModuleRelativePath", "Capsula.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsula_Statics::NewProp_PlayerCharacter_MetaData[] = {
		{ "Comment", "// Referencia al personaje del jugador\n" },
		{ "ModuleRelativePath", "Capsula.h" },
		{ "ToolTip", "Referencia al personaje del jugador" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapsula_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACapsula, PlayerCharacter), Z_Construct_UClass_ADonkeyKongCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACapsula_Statics::NewProp_PlayerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsula_Statics::NewProp_PlayerCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsula_Statics::NewProp_RangoPatrullaje_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "Comment", "// Rango de patrullaje horizontal\n" },
		{ "ModuleRelativePath", "Capsula.h" },
		{ "ToolTip", "Rango de patrullaje horizontal" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACapsula_Statics::NewProp_RangoPatrullaje = { "RangoPatrullaje", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACapsula, RangoPatrullaje), METADATA_PARAMS(Z_Construct_UClass_ACapsula_Statics::NewProp_RangoPatrullaje_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsula_Statics::NewProp_RangoPatrullaje_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsula_Statics::NewProp_VelocidadPatrullaje_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "Comment", "// Velocidad de patrullaje horizontal\n" },
		{ "ModuleRelativePath", "Capsula.h" },
		{ "ToolTip", "Velocidad de patrullaje horizontal" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACapsula_Statics::NewProp_VelocidadPatrullaje = { "VelocidadPatrullaje", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACapsula, VelocidadPatrullaje), METADATA_PARAMS(Z_Construct_UClass_ACapsula_Statics::NewProp_VelocidadPatrullaje_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsula_Statics::NewProp_VelocidadPatrullaje_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsula_Statics::NewProp_TiempoEntreDisparos_MetaData[] = {
		{ "Category", "Disparo" },
		{ "Comment", "// Tiempo entre disparos\n" },
		{ "ModuleRelativePath", "Capsula.h" },
		{ "ToolTip", "Tiempo entre disparos" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACapsula_Statics::NewProp_TiempoEntreDisparos = { "TiempoEntreDisparos", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACapsula, TiempoEntreDisparos), METADATA_PARAMS(Z_Construct_UClass_ACapsula_Statics::NewProp_TiempoEntreDisparos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsula_Statics::NewProp_TiempoEntreDisparos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsula_Statics::NewProp_CapsulaVisual_MetaData[] = {
		{ "Category", "Visual" },
		{ "Comment", "// Componente visual de la c?psula\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Capsula.h" },
		{ "ToolTip", "Componente visual de la c?psula" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapsula_Statics::NewProp_CapsulaVisual = { "CapsulaVisual", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACapsula, CapsulaVisual), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACapsula_Statics::NewProp_CapsulaVisual_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsula_Statics::NewProp_CapsulaVisual_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsula_Statics::NewProp_ExplosionParticle_MetaData[] = {
		{ "Category", "Efectos" },
		{ "Comment", "// Sistema de part?culas para el efecto de explosi?n\n" },
		{ "ModuleRelativePath", "Capsula.h" },
		{ "ToolTip", "Sistema de part?culas para el efecto de explosi?n" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapsula_Statics::NewProp_ExplosionParticle = { "ExplosionParticle", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACapsula, ExplosionParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACapsula_Statics::NewProp_ExplosionParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsula_Statics::NewProp_ExplosionParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsula_Statics::NewProp_MaterialInstance_MetaData[] = {
		{ "Comment", "// Material din?mico para cambiar el color\n" },
		{ "ModuleRelativePath", "Capsula.h" },
		{ "ToolTip", "Material din?mico para cambiar el color" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapsula_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACapsula, MaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACapsula_Statics::NewProp_MaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsula_Statics::NewProp_MaterialInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACapsula_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapsula_Statics::NewProp_PlayerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapsula_Statics::NewProp_RangoPatrullaje,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapsula_Statics::NewProp_VelocidadPatrullaje,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapsula_Statics::NewProp_TiempoEntreDisparos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapsula_Statics::NewProp_CapsulaVisual,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapsula_Statics::NewProp_ExplosionParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapsula_Statics::NewProp_MaterialInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapsula_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapsula>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapsula_Statics::ClassParams = {
		&ACapsula::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACapsula_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACapsula_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACapsula_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsula_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapsula()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapsula_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACapsula, 56410363);
	template<> DONKEYKONG_API UClass* StaticClass<ACapsula>()
	{
		return ACapsula::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapsula(Z_Construct_UClass_ACapsula, &ACapsula::StaticClass, TEXT("/Script/DonkeyKong"), TEXT("ACapsula"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapsula);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
