// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULeapFrame;
struct FVector;
struct FMatrix;
class ULeapFingerList;
#ifdef SIMPLELEAPMOTION_LeapHand_generated_h
#error "LeapHand.generated.h already included, missing '#pragma once' in LeapHand.h"
#endif
#define SIMPLELEAPMOTION_LeapHand_generated_h

#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapHand_h_24_SPARSE_DATA
#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapHand_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTranslationProbability); \
	DECLARE_FUNCTION(execTranslation); \
	DECLARE_FUNCTION(execScaleProbability); \
	DECLARE_FUNCTION(execScaleFactor); \
	DECLARE_FUNCTION(execRotationProbability); \
	DECLARE_FUNCTION(execRotationMatrix); \
	DECLARE_FUNCTION(execRotationAxis); \
	DECLARE_FUNCTION(execRotationAngleWithAxis); \
	DECLARE_FUNCTION(execRotationAngle); \
	DECLARE_FUNCTION(execFrame); \
	DECLARE_FUNCTION(execFingers);


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapHand_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTranslationProbability); \
	DECLARE_FUNCTION(execTranslation); \
	DECLARE_FUNCTION(execScaleProbability); \
	DECLARE_FUNCTION(execScaleFactor); \
	DECLARE_FUNCTION(execRotationProbability); \
	DECLARE_FUNCTION(execRotationMatrix); \
	DECLARE_FUNCTION(execRotationAxis); \
	DECLARE_FUNCTION(execRotationAngleWithAxis); \
	DECLARE_FUNCTION(execRotationAngle); \
	DECLARE_FUNCTION(execFrame); \
	DECLARE_FUNCTION(execFingers);


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapHand_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULeapHand(); \
	friend struct Z_Construct_UClass_ULeapHand_Statics; \
public: \
	DECLARE_CLASS(ULeapHand, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleLeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapHand)


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapHand_h_24_INCLASS \
private: \
	static void StaticRegisterNativesULeapHand(); \
	friend struct Z_Construct_UClass_ULeapHand_Statics; \
public: \
	DECLARE_CLASS(ULeapHand, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleLeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapHand)


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapHand_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapHand(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapHand) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapHand); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapHand); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapHand(ULeapHand&&); \
	NO_API ULeapHand(const ULeapHand&); \
public:


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapHand_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapHand(ULeapHand&&); \
	NO_API ULeapHand(const ULeapHand&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapHand); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapHand); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapHand)


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapHand_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PFrame() { return STRUCT_OFFSET(ULeapHand, PFrame); } \
	FORCEINLINE static uint32 __PPO__PFingers() { return STRUCT_OFFSET(ULeapHand, PFingers); }


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapHand_h_21_PROLOG
#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapHand_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapHand_h_24_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapHand_h_24_SPARSE_DATA \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapHand_h_24_RPC_WRAPPERS \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapHand_h_24_INCLASS \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapHand_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapHand_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapHand_h_24_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapHand_h_24_SPARSE_DATA \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapHand_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapHand_h_24_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapHand_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLELEAPMOTION_API UClass* StaticClass<class ULeapHand>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapHand_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
