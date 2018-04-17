// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef FIREANDICE_GM_Menu_FireandIce_generated_h
#error "GM_Menu_FireandIce.generated.h already included, missing '#pragma once' in GM_Menu_FireandIce.h"
#endif
#define FIREANDICE_GM_Menu_FireandIce_generated_h

#define FireAndIce_Source_FireAndIce_GM_Menu_FireandIce_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeMenuWidget) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewWidgetClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ChangeMenuWidget(Z_Param_NewWidgetClass); \
		P_NATIVE_END; \
	}


#define FireAndIce_Source_FireAndIce_GM_Menu_FireandIce_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeMenuWidget) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewWidgetClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ChangeMenuWidget(Z_Param_NewWidgetClass); \
		P_NATIVE_END; \
	}


#define FireAndIce_Source_FireAndIce_GM_Menu_FireandIce_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGM_Menu_FireandIce(); \
	friend FIREANDICE_API class UClass* Z_Construct_UClass_AGM_Menu_FireandIce(); \
public: \
	DECLARE_CLASS(AGM_Menu_FireandIce, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/FireAndIce"), NO_API) \
	DECLARE_SERIALIZER(AGM_Menu_FireandIce) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FireAndIce_Source_FireAndIce_GM_Menu_FireandIce_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAGM_Menu_FireandIce(); \
	friend FIREANDICE_API class UClass* Z_Construct_UClass_AGM_Menu_FireandIce(); \
public: \
	DECLARE_CLASS(AGM_Menu_FireandIce, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/FireAndIce"), NO_API) \
	DECLARE_SERIALIZER(AGM_Menu_FireandIce) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FireAndIce_Source_FireAndIce_GM_Menu_FireandIce_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGM_Menu_FireandIce(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGM_Menu_FireandIce) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGM_Menu_FireandIce); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGM_Menu_FireandIce); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGM_Menu_FireandIce(AGM_Menu_FireandIce&&); \
	NO_API AGM_Menu_FireandIce(const AGM_Menu_FireandIce&); \
public:


#define FireAndIce_Source_FireAndIce_GM_Menu_FireandIce_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGM_Menu_FireandIce(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGM_Menu_FireandIce(AGM_Menu_FireandIce&&); \
	NO_API AGM_Menu_FireandIce(const AGM_Menu_FireandIce&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGM_Menu_FireandIce); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGM_Menu_FireandIce); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGM_Menu_FireandIce)


#define FireAndIce_Source_FireAndIce_GM_Menu_FireandIce_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StartingWidgetClass() { return STRUCT_OFFSET(AGM_Menu_FireandIce, StartingWidgetClass); } \
	FORCEINLINE static uint32 __PPO__CurrentWidget() { return STRUCT_OFFSET(AGM_Menu_FireandIce, CurrentWidget); }


#define FireAndIce_Source_FireAndIce_GM_Menu_FireandIce_h_13_PROLOG
#define FireAndIce_Source_FireAndIce_GM_Menu_FireandIce_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FireAndIce_Source_FireAndIce_GM_Menu_FireandIce_h_16_PRIVATE_PROPERTY_OFFSET \
	FireAndIce_Source_FireAndIce_GM_Menu_FireandIce_h_16_RPC_WRAPPERS \
	FireAndIce_Source_FireAndIce_GM_Menu_FireandIce_h_16_INCLASS \
	FireAndIce_Source_FireAndIce_GM_Menu_FireandIce_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FireAndIce_Source_FireAndIce_GM_Menu_FireandIce_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FireAndIce_Source_FireAndIce_GM_Menu_FireandIce_h_16_PRIVATE_PROPERTY_OFFSET \
	FireAndIce_Source_FireAndIce_GM_Menu_FireandIce_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FireAndIce_Source_FireAndIce_GM_Menu_FireandIce_h_16_INCLASS_NO_PURE_DECLS \
	FireAndIce_Source_FireAndIce_GM_Menu_FireandIce_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FireAndIce_Source_FireAndIce_GM_Menu_FireandIce_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
