// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULeapPointable;
class ULeapHand;
class ULeapFrame;
#ifdef SIMPLELEAPMOTION_LeapPointable_generated_h
#error "LeapPointable.generated.h already included, missing '#pragma once' in LeapPointable.h"
#endif
#define SIMPLELEAPMOTION_LeapPointable_generated_h

#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapPointable_h_21_SPARSE_DATA
#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapPointable_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDifferent); \
	DECLARE_FUNCTION(execEqual); \
	DECLARE_FUNCTION(execHand); \
	DECLARE_FUNCTION(execFrame);


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapPointable_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDifferent); \
	DECLARE_FUNCTION(execEqual); \
	DECLARE_FUNCTION(execHand); \
	DECLARE_FUNCTION(execFrame);


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapPointable_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULeapPointable(); \
	friend struct Z_Construct_UClass_ULeapPointable_Statics; \
public: \
	DECLARE_CLASS(ULeapPointable, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleLeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapPointable)


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapPointable_h_21_INCLASS \
private: \
	static void StaticRegisterNativesULeapPointable(); \
	friend struct Z_Construct_UClass_ULeapPointable_Statics; \
public: \
	DECLARE_CLASS(ULeapPointable, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleLeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapPointable)


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapPointable_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapPointable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapPointable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapPointable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapPointable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapPointable(ULeapPointable&&); \
	NO_API ULeapPointable(const ULeapPointable&); \
public:


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapPointable_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapPointable(ULeapPointable&&); \
	NO_API ULeapPointable(const ULeapPointable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapPointable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapPointable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapPointable)


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapPointable_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PFrame() { return STRUCT_OFFSET(ULeapPointable, PFrame); } \
	FORCEINLINE static uint32 __PPO__PHand() { return STRUCT_OFFSET(ULeapPointable, PHand); }


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapPointable_h_18_PROLOG
#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapPointable_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapPointable_h_21_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapPointable_h_21_SPARSE_DATA \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapPointable_h_21_RPC_WRAPPERS \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapPointable_h_21_INCLASS \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapPointable_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapPointable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapPointable_h_21_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapPointable_h_21_SPARSE_DATA \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapPointable_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapPointable_h_21_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapPointable_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLELEAPMOTION_API UClass* StaticClass<class ULeapPointable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapPointable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
