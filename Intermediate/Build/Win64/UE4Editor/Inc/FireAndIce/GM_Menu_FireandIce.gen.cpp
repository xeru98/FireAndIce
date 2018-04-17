// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GM_Menu_FireandIce.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGM_Menu_FireandIce() {}
// Cross Module References
	FIREANDICE_API UClass* Z_Construct_UClass_AGM_Menu_FireandIce_NoRegister();
	FIREANDICE_API UClass* Z_Construct_UClass_AGM_Menu_FireandIce();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FireAndIce();
	FIREANDICE_API UFunction* Z_Construct_UFunction_AGM_Menu_FireandIce_ChangeMenuWidget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void AGM_Menu_FireandIce::StaticRegisterNativesAGM_Menu_FireandIce()
	{
		UClass* Class = AGM_Menu_FireandIce::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeMenuWidget", (Native)&AGM_Menu_FireandIce::execChangeMenuWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AGM_Menu_FireandIce_ChangeMenuWidget()
	{
		struct GM_Menu_FireandIce_eventChangeMenuWidget_Parms
		{
			TSubclassOf<UUserWidget>  NewWidgetClass;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewWidgetClass = { UE4CodeGen_Private::EPropertyClass::Class, "NewWidgetClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(GM_Menu_FireandIce_eventChangeMenuWidget_Parms, NewWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewWidgetClass,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UMG Game" },
				{ "ModuleRelativePath", "GM_Menu_FireandIce.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGM_Menu_FireandIce, "ChangeMenuWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(GM_Menu_FireandIce_eventChangeMenuWidget_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGM_Menu_FireandIce_NoRegister()
	{
		return AGM_Menu_FireandIce::StaticClass();
	}
	UClass* Z_Construct_UClass_AGM_Menu_FireandIce()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_FireAndIce,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AGM_Menu_FireandIce_ChangeMenuWidget, "ChangeMenuWidget" }, // 2892184293
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "GM_Menu_FireandIce.h" },
				{ "ModuleRelativePath", "GM_Menu_FireandIce.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "GM_Menu_FireandIce.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentWidget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080008, 1, nullptr, STRUCT_OFFSET(AGM_Menu_FireandIce, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(NewProp_CurrentWidget_MetaData, ARRAY_COUNT(NewProp_CurrentWidget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingWidgetClass_MetaData[] = {
				{ "Category", "UMG Game" },
				{ "ModuleRelativePath", "GM_Menu_FireandIce.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_StartingWidgetClass = { UE4CodeGen_Private::EPropertyClass::Class, "StartingWidgetClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000000015, 1, nullptr, STRUCT_OFFSET(AGM_Menu_FireandIce, StartingWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_StartingWidgetClass_MetaData, ARRAY_COUNT(NewProp_StartingWidgetClass_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentWidget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartingWidgetClass,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AGM_Menu_FireandIce>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AGM_Menu_FireandIce::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
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
	IMPLEMENT_CLASS(AGM_Menu_FireandIce, 3561634029);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGM_Menu_FireandIce(Z_Construct_UClass_AGM_Menu_FireandIce, &AGM_Menu_FireandIce::StaticClass, TEXT("/Script/FireAndIce"), TEXT("AGM_Menu_FireandIce"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGM_Menu_FireandIce);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
