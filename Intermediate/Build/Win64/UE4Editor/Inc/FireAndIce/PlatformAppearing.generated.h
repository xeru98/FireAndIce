// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
<<<<<<< HEAD
=======
class AActor;
>>>>>>> e11e291622e225cea3163c65daa8690dd96a2d02
#ifdef FIREANDICE_PlatformAppearing_generated_h
#error "PlatformAppearing.generated.h already included, missing '#pragma once' in PlatformAppearing.h"
#endif
#define FIREANDICE_PlatformAppearing_generated_h

<<<<<<< HEAD
#define FireAndIce_Source_FireAndIce_PlatformAppearing_h_15_RPC_WRAPPERS
#define FireAndIce_Source_FireAndIce_PlatformAppearing_h_15_RPC_WRAPPERS_NO_PURE_DECLS
=======
#define FireAndIce_Source_FireAndIce_PlatformAppearing_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBeginOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BeginOverlap(Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define FireAndIce_Source_FireAndIce_PlatformAppearing_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBeginOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BeginOverlap(Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


>>>>>>> e11e291622e225cea3163c65daa8690dd96a2d02
#define FireAndIce_Source_FireAndIce_PlatformAppearing_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlatformAppearing(); \
	friend FIREANDICE_API class UClass* Z_Construct_UClass_APlatformAppearing(); \
public: \
	DECLARE_CLASS(APlatformAppearing, APlatformBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FireAndIce"), NO_API) \
	DECLARE_SERIALIZER(APlatformAppearing) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FireAndIce_Source_FireAndIce_PlatformAppearing_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPlatformAppearing(); \
	friend FIREANDICE_API class UClass* Z_Construct_UClass_APlatformAppearing(); \
public: \
	DECLARE_CLASS(APlatformAppearing, APlatformBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FireAndIce"), NO_API) \
	DECLARE_SERIALIZER(APlatformAppearing) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FireAndIce_Source_FireAndIce_PlatformAppearing_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
<<<<<<< HEAD
	NO_API APlatformAppearing(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
=======
	NO_API APlatformAppearing(const FObjectInitializer& ObjectInitializer); \
>>>>>>> e11e291622e225cea3163c65daa8690dd96a2d02
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlatformAppearing) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlatformAppearing); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlatformAppearing); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlatformAppearing(APlatformAppearing&&); \
	NO_API APlatformAppearing(const APlatformAppearing&); \
public:


#define FireAndIce_Source_FireAndIce_PlatformAppearing_h_15_ENHANCED_CONSTRUCTORS \
<<<<<<< HEAD
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlatformAppearing() { }; \
=======
>>>>>>> e11e291622e225cea3163c65daa8690dd96a2d02
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlatformAppearing(APlatformAppearing&&); \
	NO_API APlatformAppearing(const APlatformAppearing&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlatformAppearing); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlatformAppearing); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlatformAppearing)


#define FireAndIce_Source_FireAndIce_PlatformAppearing_h_15_PRIVATE_PROPERTY_OFFSET
#define FireAndIce_Source_FireAndIce_PlatformAppearing_h_12_PROLOG
#define FireAndIce_Source_FireAndIce_PlatformAppearing_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FireAndIce_Source_FireAndIce_PlatformAppearing_h_15_PRIVATE_PROPERTY_OFFSET \
	FireAndIce_Source_FireAndIce_PlatformAppearing_h_15_RPC_WRAPPERS \
	FireAndIce_Source_FireAndIce_PlatformAppearing_h_15_INCLASS \
	FireAndIce_Source_FireAndIce_PlatformAppearing_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FireAndIce_Source_FireAndIce_PlatformAppearing_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FireAndIce_Source_FireAndIce_PlatformAppearing_h_15_PRIVATE_PROPERTY_OFFSET \
	FireAndIce_Source_FireAndIce_PlatformAppearing_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FireAndIce_Source_FireAndIce_PlatformAppearing_h_15_INCLASS_NO_PURE_DECLS \
	FireAndIce_Source_FireAndIce_PlatformAppearing_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FireAndIce_Source_FireAndIce_PlatformAppearing_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
