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
#ifdef DONKEYKONG_DonkeyKongCharacter_generated_h
#error "DonkeyKongCharacter.generated.h already included, missing '#pragma once' in DonkeyKongCharacter.h"
#endif
#define DONKEYKONG_DonkeyKongCharacter_generated_h

#define DonkeyKong_Source_DonkeyKong_DonkeyKongCharacter_h_12_SPARSE_DATA
#define DonkeyKong_Source_DonkeyKong_DonkeyKongCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnProximityOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap); \
	DECLARE_FUNCTION(execFireProyectil);


#define DonkeyKong_Source_DonkeyKong_DonkeyKongCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnProximityOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap); \
	DECLARE_FUNCTION(execFireProyectil);


#define DonkeyKong_Source_DonkeyKong_DonkeyKongCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADonkeyKongCharacter(); \
	friend struct Z_Construct_UClass_ADonkeyKongCharacter_Statics; \
public: \
	DECLARE_CLASS(ADonkeyKongCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DonkeyKong"), NO_API) \
	DECLARE_SERIALIZER(ADonkeyKongCharacter)


#define DonkeyKong_Source_DonkeyKong_DonkeyKongCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADonkeyKongCharacter(); \
	friend struct Z_Construct_UClass_ADonkeyKongCharacter_Statics; \
public: \
	DECLARE_CLASS(ADonkeyKongCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DonkeyKong"), NO_API) \
	DECLARE_SERIALIZER(ADonkeyKongCharacter)


#define DonkeyKong_Source_DonkeyKong_DonkeyKongCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADonkeyKongCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADonkeyKongCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADonkeyKongCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADonkeyKongCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADonkeyKongCharacter(ADonkeyKongCharacter&&); \
	NO_API ADonkeyKongCharacter(const ADonkeyKongCharacter&); \
public:


#define DonkeyKong_Source_DonkeyKong_DonkeyKongCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADonkeyKongCharacter(ADonkeyKongCharacter&&); \
	NO_API ADonkeyKongCharacter(const ADonkeyKongCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADonkeyKongCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADonkeyKongCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADonkeyKongCharacter)


#define DonkeyKong_Source_DonkeyKong_DonkeyKongCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ADonkeyKongCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ADonkeyKongCharacter, FollowCamera); }


#define DonkeyKong_Source_DonkeyKong_DonkeyKongCharacter_h_9_PROLOG
#define DonkeyKong_Source_DonkeyKong_DonkeyKongCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DonkeyKong_Source_DonkeyKong_DonkeyKongCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	DonkeyKong_Source_DonkeyKong_DonkeyKongCharacter_h_12_SPARSE_DATA \
	DonkeyKong_Source_DonkeyKong_DonkeyKongCharacter_h_12_RPC_WRAPPERS \
	DonkeyKong_Source_DonkeyKong_DonkeyKongCharacter_h_12_INCLASS \
	DonkeyKong_Source_DonkeyKong_DonkeyKongCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DonkeyKong_Source_DonkeyKong_DonkeyKongCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DonkeyKong_Source_DonkeyKong_DonkeyKongCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	DonkeyKong_Source_DonkeyKong_DonkeyKongCharacter_h_12_SPARSE_DATA \
	DonkeyKong_Source_DonkeyKong_DonkeyKongCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DonkeyKong_Source_DonkeyKong_DonkeyKongCharacter_h_12_INCLASS_NO_PURE_DECLS \
	DonkeyKong_Source_DonkeyKong_DonkeyKongCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DONKEYKONG_API UClass* StaticClass<class ADonkeyKongCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DonkeyKong_Source_DonkeyKong_DonkeyKongCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
