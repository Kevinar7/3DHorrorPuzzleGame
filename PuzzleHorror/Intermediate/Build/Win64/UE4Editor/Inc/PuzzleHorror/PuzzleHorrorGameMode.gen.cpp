// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PuzzleHorror/PuzzleHorrorGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzleHorrorGameMode() {}
// Cross Module References
	PUZZLEHORROR_API UClass* Z_Construct_UClass_APuzzleHorrorGameMode_NoRegister();
	PUZZLEHORROR_API UClass* Z_Construct_UClass_APuzzleHorrorGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PuzzleHorror();
// End Cross Module References
	void APuzzleHorrorGameMode::StaticRegisterNativesAPuzzleHorrorGameMode()
	{
	}
	UClass* Z_Construct_UClass_APuzzleHorrorGameMode_NoRegister()
	{
		return APuzzleHorrorGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APuzzleHorrorGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APuzzleHorrorGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PuzzleHorror,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleHorrorGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PuzzleHorrorGameMode.h" },
		{ "ModuleRelativePath", "PuzzleHorrorGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APuzzleHorrorGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuzzleHorrorGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APuzzleHorrorGameMode_Statics::ClassParams = {
		&APuzzleHorrorGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APuzzleHorrorGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleHorrorGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APuzzleHorrorGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APuzzleHorrorGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APuzzleHorrorGameMode, 3115407361);
	template<> PUZZLEHORROR_API UClass* StaticClass<APuzzleHorrorGameMode>()
	{
		return APuzzleHorrorGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APuzzleHorrorGameMode(Z_Construct_UClass_APuzzleHorrorGameMode, &APuzzleHorrorGameMode::StaticClass, TEXT("/Script/PuzzleHorror"), TEXT("APuzzleHorrorGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuzzleHorrorGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
