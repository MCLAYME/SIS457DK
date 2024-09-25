// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong/Nave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNave() {}
// Cross Module References
	DONKEYKONG_API UClass* Z_Construct_UClass_ANave_NoRegister();
	DONKEYKONG_API UClass* Z_Construct_UClass_ANave();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void ANave::StaticRegisterNativesANave()
	{
	}
	UClass* Z_Construct_UClass_ANave_NoRegister()
	{
		return ANave::StaticClass();
	}
	struct Z_Construct_UClass_ANave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NaveMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NaveMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PuntoA_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PuntoA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PuntoB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PuntoB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMoviendoHaciaPuntoA_MetaData[];
#endif
		static void NewProp_bMoviendoHaciaPuntoA_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMoviendoHaciaPuntoA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TiempoMovido_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TiempoMovido;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TiempoMaximo_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TiempoMaximo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotacionInicial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotacionInicial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovimientoNave_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovimientoNave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotacionCambio_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotacionCambio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nave.h" },
		{ "ModuleRelativePath", "Nave.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Statics::NewProp_NaveMesh_MetaData[] = {
		{ "Category", "Nave" },
		{ "Comment", "// Componente de malla est?tica para la nave\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Nave.h" },
		{ "ToolTip", "Componente de malla est?tica para la nave" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANave_Statics::NewProp_NaveMesh = { "NaveMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave, NaveMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANave_Statics::NewProp_NaveMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Statics::NewProp_NaveMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Statics::NewProp_PuntoA_MetaData[] = {
		{ "Category", "Nave" },
		{ "Comment", "// Variables para el movimiento entre dos puntos\n" },
		{ "ModuleRelativePath", "Nave.h" },
		{ "ToolTip", "Variables para el movimiento entre dos puntos" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANave_Statics::NewProp_PuntoA = { "PuntoA", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave, PuntoA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ANave_Statics::NewProp_PuntoA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Statics::NewProp_PuntoA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Statics::NewProp_PuntoB_MetaData[] = {
		{ "Category", "Nave" },
		{ "ModuleRelativePath", "Nave.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANave_Statics::NewProp_PuntoB = { "PuntoB", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave, PuntoB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ANave_Statics::NewProp_PuntoB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Statics::NewProp_PuntoB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Statics::NewProp_bMoviendoHaciaPuntoA_MetaData[] = {
		{ "Category", "Nave" },
		{ "ModuleRelativePath", "Nave.h" },
	};
#endif
	void Z_Construct_UClass_ANave_Statics::NewProp_bMoviendoHaciaPuntoA_SetBit(void* Obj)
	{
		((ANave*)Obj)->bMoviendoHaciaPuntoA = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANave_Statics::NewProp_bMoviendoHaciaPuntoA = { "bMoviendoHaciaPuntoA", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANave), &Z_Construct_UClass_ANave_Statics::NewProp_bMoviendoHaciaPuntoA_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANave_Statics::NewProp_bMoviendoHaciaPuntoA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Statics::NewProp_bMoviendoHaciaPuntoA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Statics::NewProp_TiempoMovido_MetaData[] = {
		{ "Category", "Nave" },
		{ "Comment", "// Variables para controlar el tiempo de movimiento\n" },
		{ "ModuleRelativePath", "Nave.h" },
		{ "ToolTip", "Variables para controlar el tiempo de movimiento" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANave_Statics::NewProp_TiempoMovido = { "TiempoMovido", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave, TiempoMovido), METADATA_PARAMS(Z_Construct_UClass_ANave_Statics::NewProp_TiempoMovido_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Statics::NewProp_TiempoMovido_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Statics::NewProp_TiempoMaximo_MetaData[] = {
		{ "Category", "Nave" },
		{ "ModuleRelativePath", "Nave.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANave_Statics::NewProp_TiempoMaximo = { "TiempoMaximo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave, TiempoMaximo), METADATA_PARAMS(Z_Construct_UClass_ANave_Statics::NewProp_TiempoMaximo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Statics::NewProp_TiempoMaximo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Statics::NewProp_RotacionInicial_MetaData[] = {
		{ "Category", "Nave" },
		{ "ModuleRelativePath", "Nave.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANave_Statics::NewProp_RotacionInicial = { "RotacionInicial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave, RotacionInicial), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ANave_Statics::NewProp_RotacionInicial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Statics::NewProp_RotacionInicial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Statics::NewProp_MovimientoNave_MetaData[] = {
		{ "Category", "Nave" },
		{ "Comment", "// Velocidad de movimiento\n" },
		{ "ModuleRelativePath", "Nave.h" },
		{ "ToolTip", "Velocidad de movimiento" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANave_Statics::NewProp_MovimientoNave = { "MovimientoNave", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave, MovimientoNave), METADATA_PARAMS(Z_Construct_UClass_ANave_Statics::NewProp_MovimientoNave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Statics::NewProp_MovimientoNave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Statics::NewProp_RotacionCambio_MetaData[] = {
		{ "Category", "Nave" },
		{ "Comment", "// Rotaci?n en 180 grados\n" },
		{ "ModuleRelativePath", "Nave.h" },
		{ "ToolTip", "Rotaci?n en 180 grados" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANave_Statics::NewProp_RotacionCambio = { "RotacionCambio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave, RotacionCambio), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ANave_Statics::NewProp_RotacionCambio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Statics::NewProp_RotacionCambio_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Statics::NewProp_NaveMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Statics::NewProp_PuntoA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Statics::NewProp_PuntoB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Statics::NewProp_bMoviendoHaciaPuntoA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Statics::NewProp_TiempoMovido,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Statics::NewProp_TiempoMaximo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Statics::NewProp_RotacionInicial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Statics::NewProp_MovimientoNave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Statics::NewProp_RotacionCambio,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANave_Statics::ClassParams = {
		&ANave::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANave_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANave, 3313582261);
	template<> DONKEYKONG_API UClass* StaticClass<ANave>()
	{
		return ANave::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANave(Z_Construct_UClass_ANave, &ANave::StaticClass, TEXT("/Script/DonkeyKong"), TEXT("ANave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
