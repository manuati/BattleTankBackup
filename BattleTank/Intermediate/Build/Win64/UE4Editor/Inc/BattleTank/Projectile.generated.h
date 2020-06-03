// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLETANK_Projectile_generated_h
#error "Projectile.generated.h already included, missing '#pragma once' in Projectile.h"
#endif
#define BATTLETANK_Projectile_generated_h

#define BattleTank_Source_BattleTank_Projectile_h_17_RPC_WRAPPERS
#define BattleTank_Source_BattleTank_Projectile_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define BattleTank_Source_BattleTank_Projectile_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BattleTank"), NO_API) \
	DECLARE_SERIALIZER(AProjectile)


#define BattleTank_Source_BattleTank_Projectile_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BattleTank"), NO_API) \
	DECLARE_SERIALIZER(AProjectile)


#define BattleTank_Source_BattleTank_Projectile_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public:


#define BattleTank_Source_BattleTank_Projectile_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectile)


#define BattleTank_Source_BattleTank_Projectile_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionMesh() { return STRUCT_OFFSET(AProjectile, CollisionMesh); } \
	FORCEINLINE static uint32 __PPO__LaunchBlast() { return STRUCT_OFFSET(AProjectile, LaunchBlast); } \
	FORCEINLINE static uint32 __PPO__ImpactBlast() { return STRUCT_OFFSET(AProjectile, ImpactBlast); } \
	FORCEINLINE static uint32 __PPO__ExplosionForce() { return STRUCT_OFFSET(AProjectile, ExplosionForce); } \
	FORCEINLINE static uint32 __PPO__DestroyDelay() { return STRUCT_OFFSET(AProjectile, DestroyDelay); }


#define BattleTank_Source_BattleTank_Projectile_h_14_PROLOG
#define BattleTank_Source_BattleTank_Projectile_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Source_BattleTank_Projectile_h_17_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Source_BattleTank_Projectile_h_17_RPC_WRAPPERS \
	BattleTank_Source_BattleTank_Projectile_h_17_INCLASS \
	BattleTank_Source_BattleTank_Projectile_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleTank_Source_BattleTank_Projectile_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Source_BattleTank_Projectile_h_17_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Source_BattleTank_Projectile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleTank_Source_BattleTank_Projectile_h_17_INCLASS_NO_PURE_DECLS \
	BattleTank_Source_BattleTank_Projectile_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTLETANK_API UClass* StaticClass<class AProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleTank_Source_BattleTank_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
