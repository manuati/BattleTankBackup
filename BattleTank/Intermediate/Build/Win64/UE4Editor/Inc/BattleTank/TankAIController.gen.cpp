// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleTank/TankAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankAIController() {}
// Cross Module References
	BATTLETANK_API UClass* Z_Construct_UClass_ATankAIController_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_ATankAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
// End Cross Module References
	void ATankAIController::StaticRegisterNativesATankAIController()
	{
	}
	UClass* Z_Construct_UClass_ATankAIController_NoRegister()
	{
		return ATankAIController::StaticClass();
	}
	struct Z_Construct_UClass_ATankAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptanceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleTank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TankAIController.h" },
		{ "ModuleRelativePath", "TankAIController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankAIController_Statics::NewProp_AcceptanceRadius_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "TankAIController.h" },
		{ "ToolTip", "How close can the AI tank get" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankAIController_Statics::NewProp_AcceptanceRadius = { "AcceptanceRadius", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankAIController, AcceptanceRadius), METADATA_PARAMS(Z_Construct_UClass_ATankAIController_Statics::NewProp_AcceptanceRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATankAIController_Statics::NewProp_AcceptanceRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATankAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankAIController_Statics::NewProp_AcceptanceRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATankAIController_Statics::ClassParams = {
		&ATankAIController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATankAIController_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ATankAIController_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATankAIController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATankAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATankAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATankAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATankAIController, 2429699263);
	template<> BATTLETANK_API UClass* StaticClass<ATankAIController>()
	{
		return ATankAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATankAIController(Z_Construct_UClass_ATankAIController, &ATankAIController::StaticClass, TEXT("/Script/BattleTank"), TEXT("ATankAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
