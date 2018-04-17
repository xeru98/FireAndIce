// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PC_Menu_FireandIce.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePC_Menu_FireandIce() {}
// Cross Module References
	FIREANDICE_API UClass* Z_Construct_UClass_APC_Menu_FireandIce_NoRegister();
	FIREANDICE_API UClass* Z_Construct_UClass_APC_Menu_FireandIce();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_FireAndIce();
// End Cross Module References
	void APC_Menu_FireandIce::StaticRegisterNativesAPC_Menu_FireandIce()
	{
	}
	UClass* Z_Construct_UClass_APC_Menu_FireandIce_NoRegister()
	{
		return APC_Menu_FireandIce::StaticClass();
	}
	UClass* Z_Construct_UClass_APC_Menu_FireandIce()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerController,
				(UObject* (*)())Z_Construct_UPackage__Script_FireAndIce,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "PC_Menu_FireandIce.h" },
				{ "ModuleRelativePath", "PC_Menu_FireandIce.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APC_Menu_FireandIce>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APC_Menu_FireandIce::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900284u,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APC_Menu_FireandIce, 4041069542);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APC_Menu_FireandIce(Z_Construct_UClass_APC_Menu_FireandIce, &APC_Menu_FireandIce::StaticClass, TEXT("/Script/FireAndIce"), TEXT("APC_Menu_FireandIce"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APC_Menu_FireandIce);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
