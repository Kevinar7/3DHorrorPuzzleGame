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
struct FVector;
struct FHitResult;
#ifdef PUZZLEHORROR_PuzzleHorrorProjectile_generated_h
#error "PuzzleHorrorProjectile.generated.h already included, missing '#pragma once' in PuzzleHorrorProjectile.h"
#endif
#define PUZZLEHORROR_PuzzleHorrorProjectile_generated_h

#define PuzzleHorror_Source_PuzzleHorror_PuzzleHorrorProjectile_h_15_SPARSE_DATA
#define PuzzleHorror_Source_PuzzleHorror_PuzzleHorrorProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PuzzleHorror_Source_PuzzleHorror_PuzzleHorrorProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PuzzleHorror_Source_PuzzleHorror_PuzzleHorrorProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPuzzleHorrorProjectile(); \
	friend struct Z_Construct_UClass_APuzzleHorrorProjectile_Statics; \
public: \
	DECLARE_CLASS(APuzzleHorrorProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PuzzleHorror"), NO_API) \
	DECLARE_SERIALIZER(APuzzleHorrorProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PuzzleHorror_Source_PuzzleHorror_PuzzleHorrorProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPuzzleHorrorProjectile(); \
	friend struct Z_Construct_UClass_APuzzleHorrorProjectile_Statics; \
public: \
	DECLARE_CLASS(APuzzleHorrorProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PuzzleHorror"), NO_API) \
	DECLARE_SERIALIZER(APuzzleHorrorProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PuzzleHorror_Source_PuzzleHorror_PuzzleHorrorProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APuzzleHorrorProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APuzzleHorrorProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APuzzleHorrorProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APuzzleHorrorProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APuzzleHorrorProjectile(APuzzleHorrorProjectile&&); \
	NO_API APuzzleHorrorProjectile(const APuzzleHorrorProjectile&); \
public:


#define PuzzleHorror_Source_PuzzleHorror_PuzzleHorrorProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APuzzleHorrorProjectile(APuzzleHorrorProjectile&&); \
	NO_API APuzzleHorrorProjectile(const APuzzleHorrorProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APuzzleHorrorProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APuzzleHorrorProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APuzzleHorrorProjectile)


#define PuzzleHorror_Source_PuzzleHorror_PuzzleHorrorProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(APuzzleHorrorProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(APuzzleHorrorProjectile, ProjectileMovement); }


#define PuzzleHorror_Source_PuzzleHorror_PuzzleHorrorProjectile_h_12_PROLOG
#define PuzzleHorror_Source_PuzzleHorror_PuzzleHorrorProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PuzzleHorror_Source_PuzzleHorror_PuzzleHorrorProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	PuzzleHorror_Source_PuzzleHorror_PuzzleHorrorProjectile_h_15_SPARSE_DATA \
	PuzzleHorror_Source_PuzzleHorror_PuzzleHorrorProjectile_h_15_RPC_WRAPPERS \
	PuzzleHorror_Source_PuzzleHorror_PuzzleHorrorProjectile_h_15_INCLASS \
	PuzzleHorror_Source_PuzzleHorror_PuzzleHorrorProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PuzzleHorror_Source_PuzzleHorror_PuzzleHorrorProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PuzzleHorror_Source_PuzzleHorror_PuzzleHorrorProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	PuzzleHorror_Source_PuzzleHorror_PuzzleHorrorProjectile_h_15_SPARSE_DATA \
	PuzzleHorror_Source_PuzzleHorror_PuzzleHorrorProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PuzzleHorror_Source_PuzzleHorror_PuzzleHorrorProjectile_h_15_INCLASS_NO_PURE_DECLS \
	PuzzleHorror_Source_PuzzleHorror_PuzzleHorrorProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUZZLEHORROR_API UClass* StaticClass<class APuzzleHorrorProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PuzzleHorror_Source_PuzzleHorror_PuzzleHorrorProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
