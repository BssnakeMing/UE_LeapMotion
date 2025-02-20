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
class ULeapToolList;
class ULeapTool;
class ULeapPointableList;
class ULeapPointable;
class ULeapInteractionBox;
class ULeapImageList;
class ULeapHandList;
class ULeapHand;
class ULeapGestureList;
class ULeapGesture;
class ULeapFingerList;
class ULeapFinger;
#ifdef SIMPLELEAPMOTION_LeapFrame_generated_h
#error "LeapFrame.generated.h already included, missing '#pragma once' in LeapFrame.h"
#endif
#define SIMPLELEAPMOTION_LeapFrame_generated_h

#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapFrame_h_26_SPARSE_DATA
#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapFrame_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTranslationProbability); \
	DECLARE_FUNCTION(execTranslation); \
	DECLARE_FUNCTION(execTools); \
	DECLARE_FUNCTION(execTool); \
	DECLARE_FUNCTION(execScaleProbability); \
	DECLARE_FUNCTION(execScaleFactor); \
	DECLARE_FUNCTION(execRotationProbability); \
	DECLARE_FUNCTION(execRotationAxis); \
	DECLARE_FUNCTION(execRotationAngleAroundAxis); \
	DECLARE_FUNCTION(execRotationAngle); \
	DECLARE_FUNCTION(execPointables); \
	DECLARE_FUNCTION(execPointable); \
	DECLARE_FUNCTION(execInteractionBox); \
	DECLARE_FUNCTION(execImages); \
	DECLARE_FUNCTION(execHands); \
	DECLARE_FUNCTION(execHand); \
	DECLARE_FUNCTION(execGesturesSinceFrame); \
	DECLARE_FUNCTION(execGestures); \
	DECLARE_FUNCTION(execGesture); \
	DECLARE_FUNCTION(execFingers); \
	DECLARE_FUNCTION(execFinger);


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapFrame_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTranslationProbability); \
	DECLARE_FUNCTION(execTranslation); \
	DECLARE_FUNCTION(execTools); \
	DECLARE_FUNCTION(execTool); \
	DECLARE_FUNCTION(execScaleProbability); \
	DECLARE_FUNCTION(execScaleFactor); \
	DECLARE_FUNCTION(execRotationProbability); \
	DECLARE_FUNCTION(execRotationAxis); \
	DECLARE_FUNCTION(execRotationAngleAroundAxis); \
	DECLARE_FUNCTION(execRotationAngle); \
	DECLARE_FUNCTION(execPointables); \
	DECLARE_FUNCTION(execPointable); \
	DECLARE_FUNCTION(execInteractionBox); \
	DECLARE_FUNCTION(execImages); \
	DECLARE_FUNCTION(execHands); \
	DECLARE_FUNCTION(execHand); \
	DECLARE_FUNCTION(execGesturesSinceFrame); \
	DECLARE_FUNCTION(execGestures); \
	DECLARE_FUNCTION(execGesture); \
	DECLARE_FUNCTION(execFingers); \
	DECLARE_FUNCTION(execFinger);


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapFrame_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULeapFrame(); \
	friend struct Z_Construct_UClass_ULeapFrame_Statics; \
public: \
	DECLARE_CLASS(ULeapFrame, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleLeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapFrame)


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapFrame_h_26_INCLASS \
private: \
	static void StaticRegisterNativesULeapFrame(); \
	friend struct Z_Construct_UClass_ULeapFrame_Statics; \
public: \
	DECLARE_CLASS(ULeapFrame, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleLeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapFrame)


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapFrame_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapFrame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapFrame) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapFrame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapFrame); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapFrame(ULeapFrame&&); \
	NO_API ULeapFrame(const ULeapFrame&); \
public:


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapFrame_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapFrame(ULeapFrame&&); \
	NO_API ULeapFrame(const ULeapFrame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapFrame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapFrame); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapFrame)


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapFrame_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PFinger() { return STRUCT_OFFSET(ULeapFrame, PFinger); } \
	FORCEINLINE static uint32 __PPO__PFingers() { return STRUCT_OFFSET(ULeapFrame, PFingers); } \
	FORCEINLINE static uint32 __PPO__PGesture() { return STRUCT_OFFSET(ULeapFrame, PGesture); } \
	FORCEINLINE static uint32 __PPO__PGestures() { return STRUCT_OFFSET(ULeapFrame, PGestures); } \
	FORCEINLINE static uint32 __PPO__PHand() { return STRUCT_OFFSET(ULeapFrame, PHand); } \
	FORCEINLINE static uint32 __PPO__PHands() { return STRUCT_OFFSET(ULeapFrame, PHands); } \
	FORCEINLINE static uint32 __PPO__PImages() { return STRUCT_OFFSET(ULeapFrame, PImages); } \
	FORCEINLINE static uint32 __PPO__PInteractionBox() { return STRUCT_OFFSET(ULeapFrame, PInteractionBox); } \
	FORCEINLINE static uint32 __PPO__PPointable() { return STRUCT_OFFSET(ULeapFrame, PPointable); } \
	FORCEINLINE static uint32 __PPO__PPointables() { return STRUCT_OFFSET(ULeapFrame, PPointables); } \
	FORCEINLINE static uint32 __PPO__PTool() { return STRUCT_OFFSET(ULeapFrame, PTool); } \
	FORCEINLINE static uint32 __PPO__PTools() { return STRUCT_OFFSET(ULeapFrame, PTools); }


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapFrame_h_23_PROLOG
#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapFrame_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapFrame_h_26_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapFrame_h_26_SPARSE_DATA \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapFrame_h_26_RPC_WRAPPERS \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapFrame_h_26_INCLASS \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapFrame_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapFrame_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapFrame_h_26_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapFrame_h_26_SPARSE_DATA \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapFrame_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapFrame_h_26_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapFrame_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLELEAPMOTION_API UClass* StaticClass<class ULeapFrame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapFrame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
