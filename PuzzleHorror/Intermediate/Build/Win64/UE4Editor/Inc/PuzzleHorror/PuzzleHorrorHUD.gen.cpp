// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PuzzleHorror/PuzzleHorrorHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzleHorrorHUD() {}
// Cross Module References
	PUZZLEHORROR_API UClass* Z_Construct_UClass_APuzzleHorrorHUD_NoRegister();
	PUZZLEHORROR_API UClass* Z_Construct_UClass_APuzzleHorrorHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_PuzzleHorror();
// End Cross Module References
	void APuzzleHorrorHUD::StaticRegisterNativesAPuzzleHorrorHUD()
	{
	}
	UClass* Z_Construct_UClass_APuzzleHorrorHUD_NoRegister()
	{
		return APuzzleHorrorHUD::StaticClass();
	}
	struct Z_Construct_UClass_APuzzleHorrorHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APuzzleHorrorHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_PuzzleHorror,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleHorrorHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "PuzzleHorrorHUD.h" },
		{ "ModuleRelativePath", "PuzzleHorrorHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APuzzleHorrorHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuzzleHorrorHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APuzzleHorrorHUD_Statics::ClassParams = {
		&APuzzleHorrorHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APuzzleHorrorHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleHorrorHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APuzzleHorrorHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APuzzleHorrorHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APuzzleHorrorHUD, 3681960021);
	template<> PUZZLEHORROR_API UClass* StaticClass<APuzzleHorrorHUD>()
	{
		return APuzzleHorrorHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APuzzleHorrorHUD(Z_Construct_UClass_APuzzleHorrorHUD, &APuzzleHorrorHUD::StaticClass, TEXT("/Script/PuzzleHorror"), TEXT("APuzzleHorrorHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuzzleHorrorHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
