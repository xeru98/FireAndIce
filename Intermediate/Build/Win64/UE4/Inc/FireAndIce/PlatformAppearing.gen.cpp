// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PlatformAppearing.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformAppearing() {}
// Cross Module References
	FIREANDICE_API UClass* Z_Construct_UClass_APlatformAppearing_NoRegister();
	FIREANDICE_API UClass* Z_Construct_UClass_APlatformAppearing();
	FIREANDICE_API UClass* Z_Construct_UClass_APlatformBase();
	UPackage* Z_Construct_UPackage__Script_FireAndIce();
// End Cross Module References
	void APlatformAppearing::StaticRegisterNativesAPlatformAppearing()
	{
	}
	UClass* Z_Construct_UClass_APlatformAppearing_NoRegister()
	{
		return APlatformAppearing::StaticClass();
	}
	UClass* Z_Construct_UClass_APlatformAppearing()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlatformBase,
				(UObject* (*)())Z_Construct_UPackage__Script_FireAndIce,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "PlatformAppearing.h" },
				{ "ModuleRelativePath", "PlatformAppearing.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APlatformAppearing>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APlatformAppearing::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlatformAppearing, 3265369876);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlatformAppearing(Z_Construct_UClass_APlatformAppearing, &APlatformAppearing::StaticClass, TEXT("/Script/FireAndIce"), TEXT("APlatformAppearing"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformAppearing);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
