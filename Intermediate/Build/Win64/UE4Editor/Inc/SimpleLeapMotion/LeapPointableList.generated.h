// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULeapPointable;
class ULeapPointableList;
class ULeapToolList;
class ULeapFingerList;
#ifdef SIMPLELEAPMOTION_LeapPointableList_generated_h
#error "LeapPointableList.generated.h already included, missing '#pragma once' in LeapPointableList.h"
#endif
#define SIMPLELEAPMOTION_LeapPointableList_generated_h

#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapPointableList_h_18_SPARSE_DATA
#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapPointableList_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRightmost); \
	DECLARE_FUNCTION(execGetPointableByIndex); \
	DECLARE_FUNCTION(execLeftmost); \
	DECLARE_FUNCTION(execFrontmost); \
	DECLARE_FUNCTION(execExtended); \
	DECLARE_FUNCTION(execAppendTools); \
	DECLARE_FUNCTION(execAppendFingers); \
	DECLARE_FUNCTION(execAppend);


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapPointableList_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRightmost); \
	DECLARE_FUNCTION(execGetPointableByIndex); \
	DECLARE_FUNCTION(execLeftmost); \
	DECLARE_FUNCTION(execFrontmost); \
	DECLARE_FUNCTION(execExtended); \
	DECLARE_FUNCTION(execAppendTools); \
	DECLARE_FUNCTION(execAppendFingers); \
	DECLARE_FUNCTION(execAppend);


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapPointableList_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULeapPointableList(); \
	friend struct Z_Construct_UClass_ULeapPointableList_Statics; \
public: \
	DECLARE_CLASS(ULeapPointableList, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleLeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapPointableList)


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapPointableList_h_18_INCLASS \
private: \
	static void StaticRegisterNativesULeapPointableList(); \
	friend struct Z_Construct_UClass_ULeapPointableList_Statics; \
public: \
	DECLARE_CLASS(ULeapPointableList, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleLeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapPointableList)


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapPointableList_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapPointableList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapPointableList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapPointableList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapPointableList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapPointableList(ULeapPointableList&&); \
	NO_API ULeapPointableList(const ULeapPointableList&); \
public:


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapPointableList_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapPointableList(ULeapPointableList&&); \
	NO_API ULeapPointableList(const ULeapPointableList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapPointableList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapPointableList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapPointableList)


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapPointableList_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PLeftmost() { return STRUCT_OFFSET(ULeapPointableList, PLeftmost); } \
	FORCEINLINE static uint32 __PPO__PRightmost() { return STRUCT_OFFSET(ULeapPointableList, PRightmost); } \
	FORCEINLINE static uint32 __PPO__PFrontmost() { return STRUCT_OFFSET(ULeapPointableList, PFrontmost); } \
	FORCEINLINE static uint32 __PPO__PPointableByIndex() { return STRUCT_OFFSET(ULeapPointableList, PPointableByIndex); } \
	FORCEINLINE static uint32 __PPO__PAppendedList() { return STRUCT_OFFSET(ULeapPointableList, PAppendedList); } \
	FORCEINLINE static uint32 __PPO__PExtendedList() { return STRUCT_OFFSET(ULeapPointableList, PExtendedList); }


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapPointableList_h_15_PROLOG
#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapPointableList_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapPointableList_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapPointableList_h_18_SPARSE_DATA \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapPointableList_h_18_RPC_WRAPPERS \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapPointableList_h_18_INCLASS \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapPointableList_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapPointableList_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapPointableList_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapPointableList_h_18_SPARSE_DATA \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapPointableList_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapPointableList_h_18_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapPointableList_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLELEAPMOTION_API UClass* StaticClass<class ULeapPointableList>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_LeapPointableList_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
