// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UTexture2D;
#ifdef SIMPLELEAPMOTION_LeapImage_generated_h
#error "LeapImage.generated.h already included, missing '#pragma once' in LeapImage.h"
#endif
#define SIMPLELEAPMOTION_LeapImage_generated_h

#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapImage_h_21_SPARSE_DATA
#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapImage_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWarp); \
	DECLARE_FUNCTION(execRectify); \
	DECLARE_FUNCTION(execDistortionUE); \
	DECLARE_FUNCTION(execDistortion); \
	DECLARE_FUNCTION(execTexture);


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapImage_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWarp); \
	DECLARE_FUNCTION(execRectify); \
	DECLARE_FUNCTION(execDistortionUE); \
	DECLARE_FUNCTION(execDistortion); \
	DECLARE_FUNCTION(execTexture);


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapImage_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULeapImage(); \
	friend struct Z_Construct_UClass_ULeapImage_Statics; \
public: \
	DECLARE_CLASS(ULeapImage, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleLeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapImage)


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapImage_h_21_INCLASS \
private: \
	static void StaticRegisterNativesULeapImage(); \
	friend struct Z_Construct_UClass_ULeapImage_Statics; \
public: \
	DECLARE_CLASS(ULeapImage, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleLeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapImage)


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapImage_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapImage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapImage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapImage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapImage(ULeapImage&&); \
	NO_API ULeapImage(const ULeapImage&); \
public:


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapImage_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapImage(ULeapImage&&); \
	NO_API ULeapImage(const ULeapImage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapImage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapImage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapImage)


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapImage_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PImagePointer() { return STRUCT_OFFSET(ULeapImage, PImagePointer); } \
	FORCEINLINE static uint32 __PPO__PDistortionPointer() { return STRUCT_OFFSET(ULeapImage, PDistortionPointer); }


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapImage_h_16_PROLOG
#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapImage_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapImage_h_21_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapImage_h_21_SPARSE_DATA \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapImage_h_21_RPC_WRAPPERS \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapImage_h_21_INCLASS \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapImage_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapImage_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapImage_h_21_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapImage_h_21_SPARSE_DATA \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapImage_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapImage_h_21_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapImage_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLELEAPMOTION_API UClass* StaticClass<class ULeapImage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapImage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
