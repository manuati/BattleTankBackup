// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLETANK_TankAIController_generated_h
#error "TankAIController.generated.h already included, missing '#pragma once' in TankAIController.h"
#endif
#define BATTLETANK_TankAIController_generated_h

#define BattleTank_Source_BattleTank_TankAIController_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPossesedTankDeath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPossesedTankDeath(); \
		P_NATIVE_END; \
	}


#define BattleTank_Source_BattleTank_TankAIController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPossesedTankDeath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPossesedTankDeath(); \
		P_NATIVE_END; \
	}


#define BattleTank_Source_BattleTank_TankAIController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankAIController(); \
	friend struct Z_Construct_UClass_ATankAIController_Statics; \
public: \
	DECLARE_CLASS(ATankAIController, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BattleTank"), NO_API) \
	DECLARE_SERIALIZER(ATankAIController)


#define BattleTank_Source_BattleTank_TankAIController_h_18_INCLASS \
private: \
	static void StaticRegisterNativesATankAIController(); \
	friend struct Z_Construct_UClass_ATankAIController_Statics; \
public: \
	DECLARE_CLASS(ATankAIController, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BattleTank"), NO_API) \
	DECLARE_SERIALIZER(ATankAIController)


#define BattleTank_Source_BattleTank_TankAIController_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankAIController(ATankAIController&&); \
	NO_API ATankAIController(const ATankAIController&); \
public:


#define BattleTank_Source_BattleTank_TankAIController_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankAIController(ATankAIController&&); \
	NO_API ATankAIController(const ATankAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankAIController)


#define BattleTank_Source_BattleTank_TankAIController_h_18_PRIVATE_PROPERTY_OFFSET
#define BattleTank_Source_BattleTank_TankAIController_h_15_PROLOG
#define BattleTank_Source_BattleTank_TankAIController_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Source_BattleTank_TankAIController_h_18_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Source_BattleTank_TankAIController_h_18_RPC_WRAPPERS \
	BattleTank_Source_BattleTank_TankAIController_h_18_INCLASS \
	BattleTank_Source_BattleTank_TankAIController_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleTank_Source_BattleTank_TankAIController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Source_BattleTank_TankAIController_h_18_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Source_BattleTank_TankAIController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleTank_Source_BattleTank_TankAIController_h_18_INCLASS_NO_PURE_DECLS \
	BattleTank_Source_BattleTank_TankAIController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTLETANK_API UClass* StaticClass<class ATankAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleTank_Source_BattleTank_TankAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
