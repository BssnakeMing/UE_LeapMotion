// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULeapFinger;
enum class ELeapHandType : uint8;
struct FRotator;
struct FTransform;
struct FVector;
#ifdef SIMPLELEAPMOTION_AnimFinger_generated_h
#error "AnimFinger.generated.h already included, missing '#pragma once' in AnimFinger.h"
#endif
#define SIMPLELEAPMOTION_AnimFinger_generated_h

#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_AnimBody_AnimFinger_h_24_SPARSE_DATA
#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_AnimBody_AnimFinger_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetFromLeapFinger); \
	DECLARE_FUNCTION(execChangeBasis); \
	DECLARE_FUNCTION(execTransformFinger); \
	DECLARE_FUNCTION(execTranslateFinger); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execEnabled);


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_AnimBody_AnimFinger_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetFromLeapFinger); \
	DECLARE_FUNCTION(execChangeBasis); \
	DECLARE_FUNCTION(execTransformFinger); \
	DECLARE_FUNCTION(execTranslateFinger); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execEnabled);


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_AnimBody_AnimFinger_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimFinger(); \
	friend struct Z_Construct_UClass_UAnimFinger_Statics; \
public: \
	DECLARE_CLASS(UAnimFinger, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleLeapMotion"), NO_API) \
	DECLARE_SERIALIZER(UAnimFinger)


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_AnimBody_AnimFinger_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUAnimFinger(); \
	friend struct Z_Construct_UClass_UAnimFinger_Statics; \
public: \
	DECLARE_CLASS(UAnimFinger, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleLeapMotion"), NO_API) \
	DECLARE_SERIALIZER(UAnimFinger)


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_AnimBody_AnimFinger_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimFinger(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimFinger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimFinger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimFinger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimFinger(UAnimFinger&&); \
	NO_API UAnimFinger(const UAnimFinger&); \
public:


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_AnimBody_AnimFinger_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimFinger(UAnimFinger&&); \
	NO_API UAnimFinger(const UAnimFinger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimFinger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimFinger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimFinger)


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_AnimBody_AnimFinger_h_24_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_AnimBody_AnimFinger_h_21_PROLOG
#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_AnimBody_AnimFinger_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_AnimBody_AnimFinger_h_24_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_AnimBody_AnimFinger_h_24_SPARSE_DATA \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_AnimBody_AnimFinger_h_24_RPC_WRAPPERS \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_AnimBody_AnimFinger_h_24_INCLASS \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_AnimBody_AnimFinger_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_AnimBody_AnimFinger_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_AnimBody_AnimFinger_h_24_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_AnimBody_AnimFinger_h_24_SPARSE_DATA \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_AnimBody_AnimFinger_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_AnimBody_AnimFinger_h_24_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_AnimBody_AnimFinger_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLELEAPMOTION_API UClass* StaticClass<class UAnimFinger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SimpleLeapMotion_Source_SimpleLeapMotion_Public_AnimBody_AnimFinger_h


#define FOREACH_ENUM_EANIMHANDTYPE(op) \
	op(EAnimHandType::ANIM_HAND_UNKNOWN) \
	op(EAnimHandType::ANIM_HAND_LEFT) \
	op(EAnimHandType::ANIM_HAND_RIGHT) 

enum class EAnimHandType : uint8;
template<> SIMPLELEAPMOTION_API UEnum* StaticEnum<EAnimHandType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
