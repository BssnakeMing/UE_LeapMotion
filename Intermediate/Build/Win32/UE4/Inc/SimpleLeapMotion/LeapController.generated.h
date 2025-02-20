// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FVector;
enum class ELeapGestureType : uint8;
class ULeapFrame;
#ifdef SIMPLELEAPMOTION_LeapController_generated_h
#error "LeapController.generated.h already included, missing '#pragma once' in LeapController.h"
#endif
#define SIMPLELEAPMOTION_LeapController_generated_h

#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapController_h_23_SPARSE_DATA
#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapController_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsTrackingPaused); \
	DECLARE_FUNCTION(execSetTrackingPause); \
	DECLARE_FUNCTION(execSetInterfaceDelegate); \
	DECLARE_FUNCTION(execSetLeapMountToHMDOffset); \
	DECLARE_FUNCTION(execEnableGesture); \
	DECLARE_FUNCTION(execEnableBackgroundTracking); \
	DECLARE_FUNCTION(execEnableImageSupport); \
	DECLARE_FUNCTION(execOptimizeForHMD); \
	DECLARE_FUNCTION(execIsServiceConnected); \
	DECLARE_FUNCTION(execHasFocus); \
	DECLARE_FUNCTION(execFrame); \
	DECLARE_FUNCTION(execIsConnected);


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapController_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsTrackingPaused); \
	DECLARE_FUNCTION(execSetTrackingPause); \
	DECLARE_FUNCTION(execSetInterfaceDelegate); \
	DECLARE_FUNCTION(execSetLeapMountToHMDOffset); \
	DECLARE_FUNCTION(execEnableGesture); \
	DECLARE_FUNCTION(execEnableBackgroundTracking); \
	DECLARE_FUNCTION(execEnableImageSupport); \
	DECLARE_FUNCTION(execOptimizeForHMD); \
	DECLARE_FUNCTION(execIsServiceConnected); \
	DECLARE_FUNCTION(execHasFocus); \
	DECLARE_FUNCTION(execFrame); \
	DECLARE_FUNCTION(execIsConnected);


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapController_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULeapController(); \
	friend struct Z_Construct_UClass_ULeapController_Statics; \
public: \
	DECLARE_CLASS(ULeapController, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimpleLeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapController)


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapController_h_23_INCLASS \
private: \
	static void StaticRegisterNativesULeapController(); \
	friend struct Z_Construct_UClass_ULeapController_Statics; \
public: \
	DECLARE_CLASS(ULeapController, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimpleLeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapController)


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapController_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapController(ULeapController&&); \
	NO_API ULeapController(const ULeapController&); \
public:


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapController_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapController(ULeapController&&); \
	NO_API ULeapController(const ULeapController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapController)


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapController_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PFrame() { return STRUCT_OFFSET(ULeapController, PFrame); }


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapController_h_20_PROLOG
#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapController_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapController_h_23_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapController_h_23_SPARSE_DATA \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapController_h_23_RPC_WRAPPERS \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapController_h_23_INCLASS \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapController_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapController_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapController_h_23_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapController_h_23_SPARSE_DATA \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapController_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapController_h_23_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapController_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLELEAPMOTION_API UClass* StaticClass<class ULeapController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
