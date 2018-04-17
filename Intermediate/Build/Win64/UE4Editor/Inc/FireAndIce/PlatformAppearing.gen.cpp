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
	FIREANDICE_API UFunction* Z_Construct_UFunction_APlatformAppearing_BeginOverlap();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APlatformAppearing::StaticRegisterNativesAPlatformAppearing()
	{
		UClass* Class = APlatformAppearing::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginOverlap", (Native)&APlatformAppearing::execBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_APlatformAppearing_BeginOverlap()
	{
		struct PlatformAppearing_eventBeginOverlap_Parms
		{
			AActor* OtherActor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlatformAppearing_eventBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PlatformAppearing.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlatformAppearing, "BeginOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PlatformAppearing_eventBeginOverlap_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
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
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_APlatformAppearing_BeginOverlap, "BeginOverlap" }, // 2863568161
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "PlatformAppearing.h" },
				{ "ModuleRelativePath", "PlatformAppearing.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFrozen_MetaData[] = {
				{ "Category", "Appearing" },
				{ "ModuleRelativePath", "PlatformAppearing.h" },
			};
#endif
			auto NewProp_IsFrozen_SetBit = [](void* Obj){ ((APlatformAppearing*)Obj)->IsFrozen = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFrozen = { UE4CodeGen_Private::EPropertyClass::Bool, "IsFrozen", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APlatformAppearing), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsFrozen_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsFrozen_MetaData, ARRAY_COUNT(NewProp_IsFrozen_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeltedMesh_MetaData[] = {
				{ "Category", "Mesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "PlatformAppearing.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeltedMesh = { UE4CodeGen_Private::EPropertyClass::Object, "MeltedMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(APlatformAppearing, MeltedMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_MeltedMesh_MetaData, ARRAY_COUNT(NewProp_MeltedMesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsFrozen,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeltedMesh,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APlatformAppearing>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APlatformAppearing::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlatformAppearing, 2396696722);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlatformAppearing(Z_Construct_UClass_APlatformAppearing, &APlatformAppearing::StaticClass, TEXT("/Script/FireAndIce"), TEXT("APlatformAppearing"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformAppearing);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
