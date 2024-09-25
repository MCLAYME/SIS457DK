// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DONKEYKONG_Capsula_generated_h
#error "Capsula.generated.h already included, missing '#pragma once' in Capsula.h"
#endif
#define DONKEYKONG_Capsula_generated_h

#define DonkeyKong_Source_DonkeyKong_Capsula_h_15_SPARSE_DATA
#define DonkeyKong_Source_DonkeyKong_Capsula_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExplote); \
	DECLARE_FUNCTION(execDetectarCharacter); \
	DECLARE_FUNCTION(execDisparar);


#define DonkeyKong_Source_DonkeyKong_Capsula_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExplote); \
	DECLARE_FUNCTION(execDetectarCharacter); \
	DECLARE_FUNCTION(execDisparar);


#define DonkeyKong_Source_DonkeyKong_Capsula_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACapsula(); \
	friend struct Z_Construct_UClass_ACapsula_Statics; \
public: \
	DECLARE_CLASS(ACapsula, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DonkeyKong"), NO_API) \
	DECLARE_SERIALIZER(ACapsula)


#define DonkeyKong_Source_DonkeyKong_Capsula_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACapsula(); \
	friend struct Z_Construct_UClass_ACapsula_Statics; \
public: \
	DECLARE_CLASS(ACapsula, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DonkeyKong"), NO_API) \
	DECLARE_SERIALIZER(ACapsula)


#define DonkeyKong_Source_DonkeyKong_Capsula_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACapsula(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACapsula) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACapsula); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACapsula); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACapsula(ACapsula&&); \
	NO_API ACapsula(const ACapsula&); \
public:


#define DonkeyKong_Source_DonkeyKong_Capsula_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACapsula(ACapsula&&); \
	NO_API ACapsula(const ACapsula&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACapsula); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACapsula); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACapsula)


#define DonkeyKong_Source_DonkeyKong_Capsula_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerCharacter() { return STRUCT_OFFSET(ACapsula, PlayerCharacter); } \
	FORCEINLINE static uint32 __PPO__RangoPatrullaje() { return STRUCT_OFFSET(ACapsula, RangoPatrullaje); } \
	FORCEINLINE static uint32 __PPO__VelocidadPatrullaje() { return STRUCT_OFFSET(ACapsula, VelocidadPatrullaje); } \
	FORCEINLINE static uint32 __PPO__TiempoEntreDisparos() { return STRUCT_OFFSET(ACapsula, TiempoEntreDisparos); } \
	FORCEINLINE static uint32 __PPO__CapsulaVisual() { return STRUCT_OFFSET(ACapsula, CapsulaVisual); } \
	FORCEINLINE static uint32 __PPO__ExplosionParticle() { return STRUCT_OFFSET(ACapsula, ExplosionParticle); } \
	FORCEINLINE static uint32 __PPO__MaterialInstance() { return STRUCT_OFFSET(ACapsula, MaterialInstance); }


#define DonkeyKong_Source_DonkeyKong_Capsula_h_12_PROLOG
#define DonkeyKong_Source_DonkeyKong_Capsula_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DonkeyKong_Source_DonkeyKong_Capsula_h_15_PRIVATE_PROPERTY_OFFSET \
	DonkeyKong_Source_DonkeyKong_Capsula_h_15_SPARSE_DATA \
	DonkeyKong_Source_DonkeyKong_Capsula_h_15_RPC_WRAPPERS \
	DonkeyKong_Source_DonkeyKong_Capsula_h_15_INCLASS \
	DonkeyKong_Source_DonkeyKong_Capsula_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DonkeyKong_Source_DonkeyKong_Capsula_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DonkeyKong_Source_DonkeyKong_Capsula_h_15_PRIVATE_PROPERTY_OFFSET \
	DonkeyKong_Source_DonkeyKong_Capsula_h_15_SPARSE_DATA \
	DonkeyKong_Source_DonkeyKong_Capsula_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DonkeyKong_Source_DonkeyKong_Capsula_h_15_INCLASS_NO_PURE_DECLS \
	DonkeyKong_Source_DonkeyKong_Capsula_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DONKEYKONG_API UClass* StaticClass<class ACapsula>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DonkeyKong_Source_DonkeyKong_Capsula_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
