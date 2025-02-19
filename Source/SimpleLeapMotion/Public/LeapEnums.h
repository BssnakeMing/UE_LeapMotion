#pragma once
#include "LeapEnums.generated.h"

UENUM(BlueprintType)
enum class ELeapFingerType : uint8
{
    // 拇指
    FINGER_TYPE_THUMB,
    // 食指
    FINGER_TYPE_INDEX,
    // 中指
    FINGER_TYPE_MIDDLE,
    // 无名指
    FINGER_TYPE_RING,
    // 小指
    FINGER_TYPE_PINKY
};

UENUM(BlueprintType)
enum class ELeapBoneType  : uint8
{
    // 掌骨（连接手指到手掌的骨头）
    TYPE_METACARPAL,
    // 近节指骨（最靠近手掌的指骨）
    TYPE_PROXIMAL,
    // 中节指骨（近节指骨和远节指骨之间的指骨，拇指没有）
    TYPE_INTERMEDIATE,
    // 远节指骨（手指最末端的指骨）
    TYPE_DISTAL,
    // 错误类型（无法识别或无效的骨骼类型）
    TYPE_ERROR
};


UENUM(BlueprintType)
enum class ELeapGestureType  : uint8
{
    // 无效的手势
    GESTURE_TYPE_INVALID,
    // 扫动手势
    GESTURE_TYPE_SWIPE,
    // 圆周手势
    GESTURE_TYPE_CIRCLE,
    // 屏幕点击
    GESTURE_TYPE_SCREEN_TAP,
    // 空中点击（或者说按下键？VR）
    GESTURE_TYPE_KEY_TAP
};

UENUM(BlueprintType)
enum class ELeapGestureState : uint8
{
    // 无效状态
    GESTURE_STATE_INVALID,
    // 手势开始
    GESTURE_STATE_START,
    // 手势更新
    GESTURE_STATE_UPDATE,
    // 手势结束
    GESTURE_STATE_STOP,
};

UENUM(BlueprintType)
enum class ELeapBasicDirection : uint8
{
    DIRECTION_NONE,
    DIRECTION_LEFT,
    DIRECTION_RIGHT,
    DIRECTION_UP,
    DIRECTION_DOWN,
    // 远离（远离感应设备）
    DIRECTION_AWAY,
    // 朝向（靠近感应设备）
    DIRECTION_TOWARD,
};

UENUM(BlueprintType)
enum class ELeapHandType : uint8
{
    HAND_UNKNOWN,
    HAND_LEFT,
    HAND_RIGHT
};

// 用于描述手指或工具与感应设备之间的交互状态
UENUM(BlueprintType)
enum class ELeapZone : uint8
{
    // 错误区域（表示无法识别或错误的区域状态）
    ZONE_ERROR,
    // 无区域（表示手指或工具不在任何定义的区域内）
    ZONE_NONE,
    // 悬停区域（表示手指或工具在感应设备上方，但未接触）
    ZONE_HOVERING,
    // 接触区域（表示手指或工具与感应设备接触）
    ZONE_TOUCHING
};

