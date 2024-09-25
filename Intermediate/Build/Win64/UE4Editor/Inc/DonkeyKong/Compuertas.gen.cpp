// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong/Compuertas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompuertas() {}
// Cross Module References
	DONKEYKONG_API UClass* Z_Construct_UClass_ACompuertas_NoRegister();
	DONKEYKONG_API UClass* Z_Construct_UClass_ACompuertas();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(ACompuertas::execTeletransportar)
	{
		P_GET_OBJECT(AActor,Z_Param_ActorATeletransportar);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Teletransportar(Z_Param_ActorATeletransportar);
		P_NATIVE_END;
	}
	void ACompuertas::StaticRegisterNativesACompuertas()
	{
		UClass* Class = ACompuertas::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Teletransportar", &ACompuertas::execTeletransportar },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACompuertas_Teletransportar_Statics
	{
		struct Compuertas_eventTeletransportar_Parms
		{
			AActor* ActorATeletransportar;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorATeletransportar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompuertas_Teletransportar_Statics::NewProp_ActorATeletransportar = { "ActorATeletransportar", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Compuertas_eventTeletransportar_Parms, ActorATeletransportar), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompuertas_Teletransportar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompuertas_Teletransportar_Statics::NewProp_ActorATeletransportar,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompuertas_Teletransportar_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Funci?n para teletransportar al jugador\n" },
		{ "ModuleRelativePath", "Compuertas.h" },
		{ "ToolTip", "Funci?n para teletransportar al jugador" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompuertas_Teletransportar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompuertas, nullptr, "Teletransportar", nullptr, nullptr, sizeof(Compuertas_eventTeletransportar_Parms), Z_Construct_UFunction_ACompuertas_Teletransportar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompuertas_Teletransportar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompuertas_Teletransportar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompuertas_Teletransportar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompuertas_Teletransportar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACompuertas_Teletransportar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACompuertas_NoRegister()
	{
		return ACompuertas::StaticClass();
	}
	struct Z_Construct_UClass_ACompuertas_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompuertaVisual_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CompuertaVisual;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinoTeletransporte_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DestinoTeletransporte;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACompuertas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACompuertas_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACompuertas_Teletransportar, "Teletransportar" }, // 1750873279
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompuertas_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Compuertas.h" },
		{ "ModuleRelativePath", "Compuertas.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompuertas_Statics::NewProp_TriggerBox_MetaData[] = {
		{ "Category", "Compuertas" },
		{ "Comment", "// BoxComponent para detectar la colisi?n\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Compuertas.h" },
		{ "ToolTip", "BoxComponent para detectar la colisi?n" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACompuertas_Statics::NewProp_TriggerBox = { "TriggerBox", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACompuertas, TriggerBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACompuertas_Statics::NewProp_TriggerBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompuertas_Statics::NewProp_TriggerBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompuertas_Statics::NewProp_CompuertaVisual_MetaData[] = {
		{ "Category", "Compuertas" },
		{ "Comment", "// Componente visual (malla est?tica)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Compuertas.h" },
		{ "ToolTip", "Componente visual (malla est?tica)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACompuertas_Statics::NewProp_CompuertaVisual = { "CompuertaVisual", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACompuertas, CompuertaVisual), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACompuertas_Statics::NewProp_CompuertaVisual_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompuertas_Statics::NewProp_CompuertaVisual_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompuertas_Statics::NewProp_DestinoTeletransporte_MetaData[] = {
		{ "Category", "Teletransporte" },
		{ "Comment", "// Lugar de destino de teletransporte\n" },
		{ "ModuleRelativePath", "Compuertas.h" },
		{ "ToolTip", "Lugar de destino de teletransporte" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACompuertas_Statics::NewProp_DestinoTeletransporte = { "DestinoTeletransporte", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACompuertas, DestinoTeletransporte), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACompuertas_Statics::NewProp_DestinoTeletransporte_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompuertas_Statics::NewProp_DestinoTeletransporte_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACompuertas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompuertas_Statics::NewProp_TriggerBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompuertas_Statics::NewProp_CompuertaVisual,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompuertas_Statics::NewProp_DestinoTeletransporte,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACompuertas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACompuertas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACompuertas_Statics::ClassParams = {
		&ACompuertas::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACompuertas_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACompuertas_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACompuertas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACompuertas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACompuertas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACompuertas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACompuertas, 3190975382);
	template<> DONKEYKONG_API UClass* StaticClass<ACompuertas>()
	{
		return ACompuertas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACompuertas(Z_Construct_UClass_ACompuertas, &ACompuertas::StaticClass, TEXT("/Script/DonkeyKong"), TEXT("ACompuertas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACompuertas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
