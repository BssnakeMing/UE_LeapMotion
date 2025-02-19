// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULeapPointableList;
class ULeapHandList;
class ULeapFrame;
#ifdef SIMPLELEAPMOTION_LeapGesture_generated_h
#error "LeapGesture.generated.h already included, missing '#pragma once' in LeapGesture.h"
#endif
#define SIMPLELEAPMOTION_LeapGesture_generated_h

#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapGesture_h_26_SPARSE_DATA
#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapGesture_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPointables); \
	DECLARE_FUNCTION(execHands); \
	DECLARE_FUNCTION(execFrame);


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapGesture_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPointables); \
	DECLARE_FUNCTION(execHands); \
	DECLARE_FUNCTION(execFrame);


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapGesture_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULeapGesture(); \
	friend struct Z_Construct_UClass_ULeapGesture_Statics; \
public: \
	DECLARE_CLASS(ULeapGesture, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleLeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapGesture)


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapGesture_h_26_INCLASS \
private: \
	static void StaticRegisterNativesULeapGesture(); \
	friend struct Z_Construct_UClass_ULeapGesture_Statics; \
public: \
	DECLARE_CLASS(ULeapGesture, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleLeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapGesture)


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapGesture_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapGesture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapGesture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapGesture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapGesture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapGesture(ULeapGesture&&); \
	NO_API ULeapGesture(const ULeapGesture&); \
public:


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapGesture_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapGesture(ULeapGesture&&); \
	NO_API ULeapGesture(const ULeapGesture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapGesture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapGesture); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapGesture)


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapGesture_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PFrame() { return STRUCT_OFFSET(ULeapGesture, PFrame); } \
	FORCEINLINE static uint32 __PPO__PHands() { return STRUCT_OFFSET(ULeapGesture, PHands); } \
	FORCEINLINE static uint32 __PPO__PPointables() { return STRUCT_OFFSET(ULeapGesture, PPointables); }


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapGesture_h_23_PROLOG
#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapGesture_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapGesture_h_26_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapGesture_h_26_SPARSE_DATA \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapGesture_h_26_RPC_WRAPPERS \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapGesture_h_26_INCLASS \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapGesture_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapGesture_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapGesture_h_26_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapGesture_h_26_SPARSE_DATA \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapGesture_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapGesture_h_26_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapGesture_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLELEAPMOTION_API UClass* StaticClass<class ULeapGesture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapGesture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
