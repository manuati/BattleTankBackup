// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleTank/TankTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankTrack() {}
// Cross Module References
	BATTLETANK_API UClass* Z_Construct_UClass_UTankTrack_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankTrack();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
	BATTLETANK_API UFunction* Z_Construct_UFunction_UTankTrack_SetThrottle();
// End Cross Module References
	void UTankTrack::StaticRegisterNativesUTankTrack()
	{
		UClass* Class = UTankTrack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetThrottle", &UTankTrack::execSetThrottle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTankTrack_SetThrottle_Statics
	{
		struct TankTrack_eventSetThrottle_Parms
		{
			float Throttle;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Throttle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTankTrack_SetThrottle_Statics::NewProp_Throttle = { "Throttle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankTrack_eventSetThrottle_Parms, Throttle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTankTrack_SetThrottle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTankTrack_SetThrottle_Statics::NewProp_Throttle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTankTrack_SetThrottle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TankTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTankTrack_SetThrottle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankTrack, nullptr, "SetThrottle", sizeof(TankTrack_eventSetThrottle_Parms), Z_Construct_UFunction_UTankTrack_SetThrottle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTankTrack_SetThrottle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTankTrack_SetThrottle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTankTrack_SetThrottle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTankTrack_SetThrottle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTankTrack_SetThrottle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTankTrack_NoRegister()
	{
		return UTankTrack::StaticClass();
	}
	struct Z_Construct_UClass_UTankTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackMaxDrivingForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrackMaxDrivingForce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTankTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleTank,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTankTrack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTankTrack_SetThrottle, "SetThrottle" }, // 775763832
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankTrack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "TankTrack.h" },
		{ "ModuleRelativePath", "TankTrack.h" },
		{ "ToolTip", "TankTrack is used to set maximum driving force, and to apply forces to the tank" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankTrack_Statics::NewProp_TrackMaxDrivingForce_MetaData[] = {
		{ "Category", "TankTrack" },
		{ "ModuleRelativePath", "TankTrack.h" },
		{ "ToolTip", "Max force per track, in newtons" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTankTrack_Statics::NewProp_TrackMaxDrivingForce = { "TrackMaxDrivingForce", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTankTrack, TrackMaxDrivingForce), METADATA_PARAMS(Z_Construct_UClass_UTankTrack_Statics::NewProp_TrackMaxDrivingForce_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTankTrack_Statics::NewProp_TrackMaxDrivingForce_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTankTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankTrack_Statics::NewProp_TrackMaxDrivingForce,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTankTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTankTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTankTrack_Statics::ClassParams = {
		&UTankTrack::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTankTrack_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UTankTrack_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTankTrack_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTankTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTankTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTankTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTankTrack, 2364600238);
	template<> BATTLETANK_API UClass* StaticClass<UTankTrack>()
	{
		return UTankTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankTrack(Z_Construct_UClass_UTankTrack, &UTankTrack::StaticClass, TEXT("/Script/BattleTank"), TEXT("UTankTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
