// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULeapHand;
#ifdef SIMPLELEAPMOTION_LeapHandList_generated_h
#error "LeapHandList.generated.h already included, missing '#pragma once' in LeapHandList.h"
#endif
#define SIMPLELEAPMOTION_LeapHandList_generated_h

#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapHandList_h_19_SPARSE_DATA
#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapHandList_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetIndex); \
	DECLARE_FUNCTION(execRightmost); \
	DECLARE_FUNCTION(execLeftmost); \
	DECLARE_FUNCTION(execFrontmost);


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapHandList_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetIndex); \
	DECLARE_FUNCTION(execRightmost); \
	DECLARE_FUNCTION(execLeftmost); \
	DECLARE_FUNCTION(execFrontmost);


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapHandList_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULeapHandList(); \
	friend struct Z_Construct_UClass_ULeapHandList_Statics; \
public: \
	DECLARE_CLASS(ULeapHandList, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleLeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapHandList)


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapHandList_h_19_INCLASS \
private: \
	static void StaticRegisterNativesULeapHandList(); \
	friend struct Z_Construct_UClass_ULeapHandList_Statics; \
public: \
	DECLARE_CLASS(ULeapHandList, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleLeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapHandList)


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapHandList_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapHandList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapHandList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapHandList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapHandList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapHandList(ULeapHandList&&); \
	NO_API ULeapHandList(const ULeapHandList&); \
public:


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapHandList_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapHandList(ULeapHandList&&); \
	NO_API ULeapHandList(const ULeapHandList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapHandList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapHandList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapHandList)


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapHandList_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PFrontmost() { return STRUCT_OFFSET(ULeapHandList, PFrontmost); } \
	FORCEINLINE static uint32 __PPO__PLeftmost() { return STRUCT_OFFSET(ULeapHandList, PLeftmost); } \
	FORCEINLINE static uint32 __PPO__PRightmost() { return STRUCT_OFFSET(ULeapHandList, PRightmost); } \
	FORCEINLINE static uint32 __PPO__PIndexHand() { return STRUCT_OFFSET(ULeapHandList, PIndexHand); }


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapHandList_h_16_PROLOG
#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapHandList_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapHandList_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapHandList_h_19_SPARSE_DATA \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapHandList_h_19_RPC_WRAPPERS \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapHandList_h_19_INCLASS \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapHandList_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapHandList_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapHandList_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapHandList_h_19_SPARSE_DATA \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapHandList_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapHandList_h_19_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapHandList_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLELEAPMOTION_API UClass* StaticClass<class ULeapHandList>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapHandList_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
