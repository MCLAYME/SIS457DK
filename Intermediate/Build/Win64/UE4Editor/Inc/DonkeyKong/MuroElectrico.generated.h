// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef DONKEYKONG_MuroElectrico_generated_h
#error "MuroElectrico.generated.h already included, missing '#pragma once' in MuroElectrico.h"
#endif
#define DONKEYKONG_MuroElectrico_generated_h

#define DonkeyKong_Source_DonkeyKong_MuroElectrico_h_15_SPARSE_DATA
#define DonkeyKong_Source_DonkeyKong_MuroElectrico_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define DonkeyKong_Source_DonkeyKong_MuroElectrico_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define DonkeyKong_Source_DonkeyKong_MuroElectrico_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMuroElectrico(); \
	friend struct Z_Construct_UClass_AMuroElectrico_Statics; \
public: \
	DECLARE_CLASS(AMuroElectrico, AMuro, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DonkeyKong"), NO_API) \
	DECLARE_SERIALIZER(AMuroElectrico)


#define DonkeyKong_Source_DonkeyKong_MuroElectrico_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMuroElectrico(); \
	friend struct Z_Construct_UClass_AMuroElectrico_Statics; \
public: \
	DECLARE_CLASS(AMuroElectrico, AMuro, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DonkeyKong"), NO_API) \
	DECLARE_SERIALIZER(AMuroElectrico)


#define DonkeyKong_Source_DonkeyKong_MuroElectrico_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMuroElectrico(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMuroElectrico) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMuroElectrico); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMuroElectrico); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMuroElectrico(AMuroElectrico&&); \
	NO_API AMuroElectrico(const AMuroElectrico&); \
public:


#define DonkeyKong_Source_DonkeyKong_MuroElectrico_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMuroElectrico(AMuroElectrico&&); \
	NO_API AMuroElectrico(const AMuroElectrico&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMuroElectrico); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMuroElectrico); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMuroElectrico)


#define DonkeyKong_Source_DonkeyKong_MuroElectrico_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MuroElectricoMesh() { return STRUCT_OFFSET(AMuroElectrico, MuroElectricoMesh); } \
	FORCEINLINE static uint32 __PPO__ElectricMaterial() { return STRUCT_OFFSET(AMuroElectrico, ElectricMaterial); } \
	FORCEINLINE static uint32 __PPO__ElectricParticleSystemAsset() { return STRUCT_OFFSET(AMuroElectrico, ElectricParticleSystemAsset); }


#define DonkeyKong_Source_DonkeyKong_MuroElectrico_h_12_PROLOG
#define DonkeyKong_Source_DonkeyKong_MuroElectrico_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DonkeyKong_Source_DonkeyKong_MuroElectrico_h_15_PRIVATE_PROPERTY_OFFSET \
	DonkeyKong_Source_DonkeyKong_MuroElectrico_h_15_SPARSE_DATA \
	DonkeyKong_Source_DonkeyKong_MuroElectrico_h_15_RPC_WRAPPERS \
	DonkeyKong_Source_DonkeyKong_MuroElectrico_h_15_INCLASS \
	DonkeyKong_Source_DonkeyKong_MuroElectrico_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DonkeyKong_Source_DonkeyKong_MuroElectrico_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DonkeyKong_Source_DonkeyKong_MuroElectrico_h_15_PRIVATE_PROPERTY_OFFSET \
	DonkeyKong_Source_DonkeyKong_MuroElectrico_h_15_SPARSE_DATA \
	DonkeyKong_Source_DonkeyKong_MuroElectrico_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DonkeyKong_Source_DonkeyKong_MuroElectrico_h_15_INCLASS_NO_PURE_DECLS \
	DonkeyKong_Source_DonkeyKong_MuroElectrico_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DONKEYKONG_API UClass* StaticClass<class AMuroElectrico>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DonkeyKong_Source_DonkeyKong_MuroElectrico_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
