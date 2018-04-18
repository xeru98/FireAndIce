// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PlatformBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformBase() {}
// Cross Module References
	FIREANDICE_API UClass* Z_Construct_UClass_APlatformBase_NoRegister();
	FIREANDICE_API UClass* Z_Construct_UClass_APlatformBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FireAndIce();
	FIREANDICE_API UFunction* Z_Construct_UFunction_APlatformBase_BeginOverlap();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APlatformBase::StaticRegisterNativesAPlatformBase()
	{
		UClass* Class = APlatformBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginOverlap", (Native)&APlatformBase::execBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_APlatformBase_BeginOverlap()
	{
		struct PlatformBase_eventBeginOverlap_Parms
		{
			AActor* OtherActor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlatformBase_eventBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PlatformBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlatformBase, "BeginOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PlatformBase_eventBeginOverlap_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlatformBase_NoRegister()
	{
		return APlatformBase::StaticClass();
	}
	UClass* Z_Construct_UClass_APlatformBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_FireAndIce,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_APlatformBase_BeginOverlap, "BeginOverlap" }, // 3726844285
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "PlatformBase.h" },
				{ "ModuleRelativePath", "PlatformBase.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockCollision_MetaData[] = {
				{ "Category", "Collision" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "PlatformBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockCollision = { UE4CodeGen_Private::EPropertyClass::Object, "BlockCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000b0009, 1, nullptr, STRUCT_OFFSET(APlatformBase, BlockCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(NewProp_BlockCollision_MetaData, ARRAY_COUNT(NewProp_BlockCollision_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapCollision_MetaData[] = {
				{ "Category", "Collision" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "PlatformBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapCollision = { UE4CodeGen_Private::EPropertyClass::Object, "OverlapCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000b0009, 1, nullptr, STRUCT_OFFSET(APlatformBase, OverlapCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(NewProp_OverlapCollision_MetaData, ARRAY_COUNT(NewProp_OverlapCollision_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
				{ "Category", "Scene" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "PlatformBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Origin = { UE4CodeGen_Private::EPropertyClass::Object, "Origin", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(APlatformBase, Origin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_Origin_MetaData, ARRAY_COUNT(NewProp_Origin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
				{ "Category", "Mesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "PlatformBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(APlatformBase, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_MeshComponent_MetaData, ARRAY_COUNT(NewProp_MeshComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlockCollision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverlapCollision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Origin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APlatformBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APlatformBase::StaticClass,
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
	IMPLEMENT_CLASS(APlatformBase, 4068492277);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlatformBase(Z_Construct_UClass_APlatformBase, &APlatformBase::StaticClass, TEXT("/Script/FireAndIce"), TEXT("APlatformBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
