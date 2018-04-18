// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef FIREANDICE_PlatformBase_generated_h
#error "PlatformBase.generated.h already included, missing '#pragma once' in PlatformBase.h"
#endif
#define FIREANDICE_PlatformBase_generated_h

#define FireAndIce_Alpha_Source_FireAndIce_PlatformBase_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBeginOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BeginOverlap(Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define FireAndIce_Alpha_Source_FireAndIce_PlatformBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBeginOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BeginOverlap(Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define FireAndIce_Alpha_Source_FireAndIce_PlatformBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlatformBase(); \
	friend FIREANDICE_API class UClass* Z_Construct_UClass_APlatformBase(); \
public: \
	DECLARE_CLASS(APlatformBase, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FireAndIce"), NO_API) \
	DECLARE_SERIALIZER(APlatformBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FireAndIce_Alpha_Source_FireAndIce_PlatformBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPlatformBase(); \
	friend FIREANDICE_API class UClass* Z_Construct_UClass_APlatformBase(); \
public: \
	DECLARE_CLASS(APlatformBase, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FireAndIce"), NO_API) \
	DECLARE_SERIALIZER(APlatformBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FireAndIce_Alpha_Source_FireAndIce_PlatformBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlatformBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlatformBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlatformBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlatformBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlatformBase(APlatformBase&&); \
	NO_API APlatformBase(const APlatformBase&); \
public:


#define FireAndIce_Alpha_Source_FireAndIce_PlatformBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlatformBase(APlatformBase&&); \
	NO_API APlatformBase(const APlatformBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlatformBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlatformBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlatformBase)


#define FireAndIce_Alpha_Source_FireAndIce_PlatformBase_h_13_PRIVATE_PROPERTY_OFFSET
#define FireAndIce_Alpha_Source_FireAndIce_PlatformBase_h_10_PROLOG
#define FireAndIce_Alpha_Source_FireAndIce_PlatformBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FireAndIce_Alpha_Source_FireAndIce_PlatformBase_h_13_PRIVATE_PROPERTY_OFFSET \
	FireAndIce_Alpha_Source_FireAndIce_PlatformBase_h_13_RPC_WRAPPERS \
	FireAndIce_Alpha_Source_FireAndIce_PlatformBase_h_13_INCLASS \
	FireAndIce_Alpha_Source_FireAndIce_PlatformBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FireAndIce_Alpha_Source_FireAndIce_PlatformBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FireAndIce_Alpha_Source_FireAndIce_PlatformBase_h_13_PRIVATE_PROPERTY_OFFSET \
	FireAndIce_Alpha_Source_FireAndIce_PlatformBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FireAndIce_Alpha_Source_FireAndIce_PlatformBase_h_13_INCLASS_NO_PURE_DECLS \
	FireAndIce_Alpha_Source_FireAndIce_PlatformBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FireAndIce_Alpha_Source_FireAndIce_PlatformBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
