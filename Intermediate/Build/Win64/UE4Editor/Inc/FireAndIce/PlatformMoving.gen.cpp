// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PlatformMoving.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformMoving() {}
// Cross Module References
	FIREANDICE_API UClass* Z_Construct_UClass_APlatformMoving_NoRegister();
	FIREANDICE_API UClass* Z_Construct_UClass_APlatformMoving();
	FIREANDICE_API UClass* Z_Construct_UClass_APlatformBase();
	UPackage* Z_Construct_UPackage__Script_FireAndIce();
	FIREANDICE_API UFunction* Z_Construct_UFunction_APlatformMoving_BeginOverlap();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APlatformMoving::StaticRegisterNativesAPlatformMoving()
	{
		UClass* Class = APlatformMoving::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginOverlap", (Native)&APlatformMoving::execBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_APlatformMoving_BeginOverlap()
	{
		struct PlatformMoving_eventBeginOverlap_Parms
		{
			AActor* OtherActor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlatformMoving_eventBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PlatformMoving.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlatformMoving, "BeginOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PlatformMoving_eventBeginOverlap_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlatformMoving_NoRegister()
	{
		return APlatformMoving::StaticClass();
	}
	UClass* Z_Construct_UClass_APlatformMoving()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlatformBase,
				(UObject* (*)())Z_Construct_UPackage__Script_FireAndIce,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_APlatformMoving_BeginOverlap, "BeginOverlap" }, // 4279341555
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "PlatformMoving.h" },
				{ "ModuleRelativePath", "PlatformMoving.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[] = {
				{ "Category", "Movement" },
				{ "ModuleRelativePath", "PlatformMoving.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "MovementSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlatformMoving, MovementSpeed), METADATA_PARAMS(NewProp_MovementSpeed_MetaData, ARRAY_COUNT(NewProp_MovementSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFreezable_MetaData[] = {
				{ "Category", "Movement" },
				{ "ModuleRelativePath", "PlatformMoving.h" },
			};
#endif
			auto NewProp_IsFreezable_SetBit = [](void* Obj){ ((APlatformMoving*)Obj)->IsFreezable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFreezable = { UE4CodeGen_Private::EPropertyClass::Bool, "IsFreezable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APlatformMoving), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsFreezable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsFreezable_MetaData, ARRAY_COUNT(NewProp_IsFreezable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[] = {
				{ "Category", "Scene" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "PlatformMoving.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Destination = { UE4CodeGen_Private::EPropertyClass::Object, "Destination", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(APlatformMoving, Destination), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Destination_MetaData, ARRAY_COUNT(NewProp_Destination_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovementSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsFreezable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Destination,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APlatformMoving>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APlatformMoving::StaticClass,
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
	IMPLEMENT_CLASS(APlatformMoving, 211969126);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlatformMoving(Z_Construct_UClass_APlatformMoving, &APlatformMoving::StaticClass, TEXT("/Script/FireAndIce"), TEXT("APlatformMoving"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformMoving);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
