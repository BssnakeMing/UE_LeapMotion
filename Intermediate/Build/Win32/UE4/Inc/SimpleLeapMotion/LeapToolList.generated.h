// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULeapTool;
class ULeapPointable;
class ULeapToolList;
#ifdef SIMPLELEAPMOTION_LeapToolList_generated_h
#error "LeapToolList.generated.h already included, missing '#pragma once' in LeapToolList.h"
#endif
#define SIMPLELEAPMOTION_LeapToolList_generated_h

#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapToolList_h_18_SPARSE_DATA
#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapToolList_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRightmost); \
	DECLARE_FUNCTION(execGetPointableByIndex); \
	DECLARE_FUNCTION(execLeftmost); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execFrontmost); \
	DECLARE_FUNCTION(execCount); \
	DECLARE_FUNCTION(execAppend);


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapToolList_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRightmost); \
	DECLARE_FUNCTION(execGetPointableByIndex); \
	DECLARE_FUNCTION(execLeftmost); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execFrontmost); \
	DECLARE_FUNCTION(execCount); \
	DECLARE_FUNCTION(execAppend);


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapToolList_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULeapToolList(); \
	friend struct Z_Construct_UClass_ULeapToolList_Statics; \
public: \
	DECLARE_CLASS(ULeapToolList, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleLeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapToolList)


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapToolList_h_18_INCLASS \
private: \
	static void StaticRegisterNativesULeapToolList(); \
	friend struct Z_Construct_UClass_ULeapToolList_Statics; \
public: \
	DECLARE_CLASS(ULeapToolList, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleLeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapToolList)


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapToolList_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapToolList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapToolList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapToolList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapToolList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapToolList(ULeapToolList&&); \
	NO_API ULeapToolList(const ULeapToolList&); \
public:


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapToolList_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapToolList(ULeapToolList&&); \
	NO_API ULeapToolList(const ULeapToolList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapToolList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapToolList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapToolList)


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapToolList_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PLeftmost() { return STRUCT_OFFSET(ULeapToolList, PLeftmost); } \
	FORCEINLINE static uint32 __PPO__PRightmost() { return STRUCT_OFFSET(ULeapToolList, PRightmost); } \
	FORCEINLINE static uint32 __PPO__PFrontmost() { return STRUCT_OFFSET(ULeapToolList, PFrontmost); } \
	FORCEINLINE static uint32 __PPO__PPointableById() { return STRUCT_OFFSET(ULeapToolList, PPointableById); } \
	FORCEINLINE static uint32 __PPO__PAppendedList() { return STRUCT_OFFSET(ULeapToolList, PAppendedList); }


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapToolList_h_15_PROLOG
#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapToolList_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapToolList_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapToolList_h_18_SPARSE_DATA \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapToolList_h_18_RPC_WRAPPERS \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapToolList_h_18_INCLASS \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapToolList_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapToolList_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapToolList_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapToolList_h_18_SPARSE_DATA \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapToolList_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapToolList_h_18_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapToolList_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLELEAPMOTION_API UClass* StaticClass<class ULeapToolList>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapToolList_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
