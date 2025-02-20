// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULeapBone;
enum class ELeapHandType : uint8;
struct FRotator;
#ifdef SIMPLELEAPMOTION_LeapBone_generated_h
#error "LeapBone.generated.h already included, missing '#pragma once' in LeapBone.h"
#endif
#define SIMPLELEAPMOTION_LeapBone_generated_h

#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapBone_h_22_SPARSE_DATA
#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapBone_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEqual); \
	DECLARE_FUNCTION(execDifferent); \
	DECLARE_FUNCTION(execGetOrientation);


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapBone_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEqual); \
	DECLARE_FUNCTION(execDifferent); \
	DECLARE_FUNCTION(execGetOrientation);


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapBone_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULeapBone(); \
	friend struct Z_Construct_UClass_ULeapBone_Statics; \
public: \
	DECLARE_CLASS(ULeapBone, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleLeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapBone)


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapBone_h_22_INCLASS \
private: \
	static void StaticRegisterNativesULeapBone(); \
	friend struct Z_Construct_UClass_ULeapBone_Statics; \
public: \
	DECLARE_CLASS(ULeapBone, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleLeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapBone)


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapBone_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapBone(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapBone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapBone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapBone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapBone(ULeapBone&&); \
	NO_API ULeapBone(const ULeapBone&); \
public:


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapBone_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapBone(ULeapBone&&); \
	NO_API ULeapBone(const ULeapBone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapBone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapBone); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapBone)


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapBone_h_22_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapBone_h_19_PROLOG
#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapBone_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapBone_h_22_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapBone_h_22_SPARSE_DATA \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapBone_h_22_RPC_WRAPPERS \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapBone_h_22_INCLASS \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapBone_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapBone_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapBone_h_22_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapBone_h_22_SPARSE_DATA \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapBone_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapBone_h_22_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapBone_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLELEAPMOTION_API UClass* StaticClass<class ULeapBone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapBone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
