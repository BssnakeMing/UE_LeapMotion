// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLELEAPMOTION_LeapEnums_generated_h
#error "LeapEnums.generated.h already included, missing '#pragma once' in LeapEnums.h"
#endif
#define SIMPLELEAPMOTION_LeapEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapEnums_h


#define FOREACH_ENUM_ELEAPZONE(op) \
	op(ELeapZone::ZONE_ERROR) \
	op(ELeapZone::ZONE_NONE) \
	op(ELeapZone::ZONE_HOVERING) \
	op(ELeapZone::ZONE_TOUCHING) 

enum class ELeapZone : uint8;
template<> SIMPLELEAPMOTION_API UEnum* StaticEnum<ELeapZone>();

#define FOREACH_ENUM_ELEAPHANDTYPE(op) \
	op(ELeapHandType::HAND_UNKNOWN) \
	op(ELeapHandType::HAND_LEFT) \
	op(ELeapHandType::HAND_RIGHT) 

enum class ELeapHandType : uint8;
template<> SIMPLELEAPMOTION_API UEnum* StaticEnum<ELeapHandType>();

#define FOREACH_ENUM_ELEAPBASICDIRECTION(op) \
	op(ELeapBasicDirection::DIRECTION_NONE) \
	op(ELeapBasicDirection::DIRECTION_LEFT) \
	op(ELeapBasicDirection::DIRECTION_RIGHT) \
	op(ELeapBasicDirection::DIRECTION_UP) \
	op(ELeapBasicDirection::DIRECTION_DOWN) \
	op(ELeapBasicDirection::DIRECTION_AWAY) \
	op(ELeapBasicDirection::DIRECTION_TOWARD) 

enum class ELeapBasicDirection : uint8;
template<> SIMPLELEAPMOTION_API UEnum* StaticEnum<ELeapBasicDirection>();

#define FOREACH_ENUM_ELEAPGESTURESTATE(op) \
	op(ELeapGestureState::GESTURE_STATE_INVALID) \
	op(ELeapGestureState::GESTURE_STATE_START) \
	op(ELeapGestureState::GESTURE_STATE_UPDATE) \
	op(ELeapGestureState::GESTURE_STATE_STOP) 

enum class ELeapGestureState : uint8;
template<> SIMPLELEAPMOTION_API UEnum* StaticEnum<ELeapGestureState>();

#define FOREACH_ENUM_ELEAPGESTURETYPE(op) \
	op(ELeapGestureType::GESTURE_TYPE_INVALID) \
	op(ELeapGestureType::GESTURE_TYPE_SWIPE) \
	op(ELeapGestureType::GESTURE_TYPE_CIRCLE) \
	op(ELeapGestureType::GESTURE_TYPE_SCREEN_TAP) \
	op(ELeapGestureType::GESTURE_TYPE_KEY_TAP) 

enum class ELeapGestureType : uint8;
template<> SIMPLELEAPMOTION_API UEnum* StaticEnum<ELeapGestureType>();

#define FOREACH_ENUM_ELEAPBONETYPE(op) \
	op(ELeapBoneType::TYPE_METACARPAL) \
	op(ELeapBoneType::TYPE_PROXIMAL) \
	op(ELeapBoneType::TYPE_INTERMEDIATE) \
	op(ELeapBoneType::TYPE_DISTAL) \
	op(ELeapBoneType::TYPE_ERROR) 

enum class ELeapBoneType : uint8;
template<> SIMPLELEAPMOTION_API UEnum* StaticEnum<ELeapBoneType>();

#define FOREACH_ENUM_ELEAPFINGERTYPE(op) \
	op(ELeapFingerType::FINGER_TYPE_THUMB) \
	op(ELeapFingerType::FINGER_TYPE_INDEX) \
	op(ELeapFingerType::FINGER_TYPE_MIDDLE) \
	op(ELeapFingerType::FINGER_TYPE_RING) \
	op(ELeapFingerType::FINGER_TYPE_PINKY) 

enum class ELeapFingerType : uint8;
template<> SIMPLELEAPMOTION_API UEnum* StaticEnum<ELeapFingerType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
