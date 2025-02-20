#pragma once

#include "UObject/Interface.h"

#include "LeapHand.h"
#include "LeapEventInterface.generated.h"

UINTERFACE(MinimalAPI)
class ULeapEventInterface : public UInterface
{
	GENERATED_BODY()
public:
	ULeapEventInterface(const FObjectInitializer& Init);
};

/**
* Event driven interface you can attach to any blueprint to receive leap 
* events as they are processed. Events are called after attaching 
* LeapControllerComponent to your blueprint and it will automatically call
* the events if the interface is also set.
* 
* Leap API reference: https://github.com/getnamo/leap-ue4/
*/
class SIMPLELEAPMOTION_API ILeapEventInterface
{
	GENERATED_BODY()

public:

	//Hands

	/**
	* Event triggered for each hand that is visible and tracked.
	* 为每手可见和跟踪的手牌触发的事件。
	*
	* @param Hand		reference to LeapHand object containing data for the tracked hand
	*/
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "HandMoved", CompactNodeTitle = "", Keywords = "hand moved"), Category = "Leap Interface Event")
	void LeapHandMoved(ULeapHand* Hand);

	/**
	* Event triggered for when the left hand is visible and tracked.
	* 当左手可见并被跟踪时触发的事件。
	*
	* @param Hand		reference to LeapHand object containing data for the tracked hand
	*/
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "LeftHandMoved", CompactNodeTitle = "", Keywords = "left hand moved"), Category = "Leap Interface Event")
	void LeapLeftHandMoved(ULeapHand* Hand);

	/**
	* Event triggered for when the right hand that is visible and tracked.
	* 当右手可见并被跟踪时触发的事件。
	*
	* @param Hand		reference to LeapHand object containing data for the tracked hand
	*/
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "RightHandMoved", CompactNodeTitle = "", Keywords = "right hand moved"), Category = "Leap Interface Event")
	void LeapRightHandMoved(ULeapHand* Hand);

	/**
	* Event triggered when the given hand has grabbed stronger than the grab trigger (grab strength>=0.5)
	* 当给定的手的抓取力度超过抓取触发器时触发的事件（抓取力度 >= 0.5）
	*
	* @param Strength	grabbing strength from 0-1.0 抓取力度
	* @param Hand		reference to LeapHand object containing data for the tracked hand
	*/
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "HandGrabbed", CompactNodeTitle = "", Keywords = "hand grab"), Category = "Leap Interface Event")
	void LeapHandGrabbed(float Strength, ULeapHand* Hand);

	/**
	* Event triggered continuously when the given hand has a grab strength greater than 0.5
	* 当给定的手的抓取力度大于 0.5 时持续触发的事件。
	*
	* @param Strength	grabbing strength from 0-1.0
	* @param Hand		reference to LeapHand object containing data for the tracked hand
	*/
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "HandGrabbing", CompactNodeTitle = "", Keywords = "hand grab"), Category = "Leap Interface Event")
	void LeapHandGrabbing(float Strength, ULeapHand* Hand);

	/**
	* Event triggered when the given hand's grab strength has fallen below the grab trigger (grab strength<0.5) after having grabbed earlier.
	* 当给定的手的抓取力度在之前抓取后下降到抓取触发器以下时触发的事件（抓取力度 < 0.5）。
	*
	* @param Strength	grabbing strength from 0-1.0
	* @param Hand		reference to LeapHand object containing data for the tracked hand
	*/
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "HandReleased", CompactNodeTitle = "", Keywords = "hand released ungrab"), Category = "Leap Interface Event")
	void LeapHandReleased(float Strength, ULeapHand* Hand);

	/**
	* Event triggered when the given hand has pinched stronger than the pinch trigger (pinch strength>=0.5)
	* 当给定的手的捏取力度超过捏取触发器时触发的事件（捏取力度 >= 0.5）。
	*
	* @param Strength	pinch strength from 0-1.0
	* @param Hand		reference to LeapHand object containing data for the tracked hand
	*/
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "HandPinched", CompactNodeTitle = "", Keywords = "hand pinch"), Category = "Leap Interface Event")
	void LeapHandPinched(float Strength, ULeapHand* Hand);

	/**
	* Event triggered continuously when the given hand has a pinch strength greater than 0.5
	* 当给定的手的捏取力度大于 0.5 时持续触发的事件。
	*
	* @param Strength	pinch strength from 0-1.0
	* @param Hand		reference to LeapHand object containing data for the tracked hand
	*/
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "HandPinching", CompactNodeTitle = "", Keywords = "hand grab"), Category = "Leap Interface Event")
	void LeapHandPinching(float Strength, ULeapHand* Hand);

	/**
	* Event triggered when the given hand's pinch strength has fallen below the pinch trigger (pinch strength<0.5) after having pinched earlier.
	* 当给定的手的捏取力度在之前捏取后下降到捏取触发器以下时触发的事件（捏取力度 < 0.5）。
	*
	* @param Strength	pinch strength from 0-1.0
	* @param Hand		reference to LeapHand object containing data for the tracked hand
	*/
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "HandUnpinched", CompactNodeTitle = "", Keywords = "hand unpinch"), Category = "Leap Interface Event")
	void LeapHandUnpinched(float Strength, ULeapHand* Hand);

	/**
	* Event triggered when number of hands changed from a previous frame.
	* 当手的数量与前一帧相比发生变化时触发的事件。
	*
	* @param Count		Number of hands visible
	*/
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "HandCountChanged", CompactNodeTitle = "", Keywords = "hand count"), Category = "Leap Interface Event")
	void HandCountChanged(int32 Count);

	/**
	* Event triggered when number of hands changed from a previous frame.
	* 当手的数量与前一帧相比发生变化时触发的事件。
	* 注意：使用前必须先检查是否有效
	*
	* @param LeftHand		是左手被移除了吗
	* @param RightHand		是右手被移除了吗
	*/
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "LeapHandRemoved", CompactNodeTitle = "", Keywords = "hand removed"), Category = "Leap Interface Event")
	void LeapHandRemoved(ELeapHandType HandType,ULeapHand* Hand);
	
	//Fingers

	/**
	* Event triggered for each finger that is visible and tracked.
	* 为每个可见且被追踪的手指触发的事件。
	*
	* @param Finger		reference to LeapFinger object containing data for the tracked finger
	*/
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "FingerMoved", CompactNodeTitle = "", Keywords = "finger moved"), Category = "Leap Interface Event")
	void LeapFingerMoved(ULeapFinger* Finger);

	/**
	* Event triggered for the finger that is frontmost from the perspective of the leap (X Positive) for each visible hand
	* 为每只可见手中从 Leap 视角看最靠前的手指（X 轴正方向）触发的事件。
	*
	* @param Finger		reference to LeapFinger object containing data for the tracked finger
	*/
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "FrontFingerMoved", CompactNodeTitle = "", Keywords = "finger front most moved"), Category = "Leap Interface Event")
	void LeapFrontMostFingerMoved(ULeapFinger* Finger);

	/**
	* Event triggered for the finger that is rightmost from the perspective of the leap (Y Positive) for each visible hand
	* 为每只可见手中从 Leap 视角看最靠右的手指（Y 轴正方向）触发的事件。
	*
	* @param Finger		reference to LeapFinger object containing data for the tracked finger
	*/
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "LeftFingerMoved", CompactNodeTitle = "", Keywords = "finger left most moved"), Category = "Leap Interface Event")
	void LeapRightMostFingerMoved(ULeapFinger* Finger);

	/**
	* Event triggered for the finger that is leftmost from the perspective of the leap (YNegative)
	* 为每只可见手中从 Leap 视角看最靠左的手指（Y 轴负方向）触发的事件。
	*
	* @param Finger		reference to LeapFinger object containing data for the tracked finger
	*/
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "RightFingerMoved", CompactNodeTitle = "", Keywords = "finger right most moved"), Category = "Leap Interface Event")
	void LeapLeftMostFingerMoved(ULeapFinger* Finger);

	/**
	* Event triggered only for the frontmost finger when it is touching, defined as
	* TouchDistance < 0, a value proportional to the distance between this Pointable object and the adaptive touch plane.
	* 仅在最前面的手指触摸时触发事件，定义为 TouchDistance < 0，该值与此 Pointable 对象与自适应触控平面之间的距离成正比。
	*
	* @param Finger		reference to LeapFinger object containing data for the tracked finger
	*/
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "LeapFrontFingerTouch", CompactNodeTitle = "", Keywords = "finger touched"), Category = "Leap Interface Event")
	void LeapFrontFingerTouch(ULeapFinger* Finger);		//emitted only for frontmost finger, typically best use case

	/**
	* Event triggered when number of fingers changed from a previous frame.
	* 当手指数量与上一帧相比发生变化时触发事件。
	*
	* @param Count		Number of fingers visible
	*/
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "FingerCountChanged", CompactNodeTitle = "", Keywords = "finger count"), Category = "Leap Interface Event")
	void FingerCountChanged(int32 Count);

	//Gestures - Only emits if enabled

	/**
	* Event triggered when any gesture is detected. Gestures need to be enabled in the LeapController to receive their events.
	* 检测到任何手势时触发的事件。需要在 LeapController 中启用手势才能接收其事件。
	*
	* @param Gesture		gesture object detected, can be cast to a sub-class for specific methods
	*/
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "GestureDetected", CompactNodeTitle = "", Keywords = "gesture detect"), Category = "Leap Interface Event")
	void GestureDetected(ULeapGesture* Gesture);

	/**
	* Event triggered when a circle gesture is detected.  Gestures need to be enabled in the LeapController to receive their events.
	* 检测到圆圈手势时触发的事件。 需要在 LeapController 中启用手势才能接收其事件。
	*
	* @param Gesture		circle gesture object detected, can be queried to get details of the event such as radius
	*/
	UFUNCTION(BlueprintImplementableEvent, meta = (Keywords = "gesture circle detect"), Category = "Leap Interface Event")
	void CircleGestureDetected(ULeapCircleGesture* Gesture);

	/**
	* Event triggered when a key tap gesture is detected.  Gestures need to be enabled in the LeapController to receive their events.
	* 检测到按键手势时触发的事件。 需要在 LeapController 中启用手势才能接收其事件。
	*
	* @param Gesture		key tap gesture object detected, can be queried to get details of the event
	*/
	UFUNCTION(BlueprintImplementableEvent, meta = (Keywords = "gesture key tap detect"), Category = "Leap Interface Event")
	void KeyTapGestureDetected(ULeapKeyTapGesture* Gesture);

	/**
	* Event triggered when a screen tap gesture is detected.  Gestures need to be enabled in the LeapController to receive their events.
	* 检测到屏幕点击手势时触发的事件。 需要在 LeapController 中启用手势才能接收其事件。
	*
	* @param Gesture		screen tap gesture object detected, can be queried to get details of the event
	*/
	UFUNCTION(BlueprintImplementableEvent, meta = (Keywords = "gesture screen tap detect"), Category = "Leap Interface Event")
	void ScreenTapGestureDetected(ULeapScreenTapGesture* Gesture);

	/**
	* Event triggered when a swipe gesture is detected.  Gestures need to be enabled in the LeapController to receive their events.
	* 检测到滑动手势时触发的事件。 需要在 LeapController 中启用手势才能接收其事件。
	*
	* @param Gesture		swipe gesture object detected, can be queried to get details of the event
	*/
	UFUNCTION(BlueprintImplementableEvent, meta = (Keywords = "gesture swipe detect"), Category = "Leap Interface Event")
	void SwipeGestureDetected(ULeapSwipeGesture* Gesture);

	//Images - Only emits if enabled

	/**
	* Event triggered when a raw image has been processed.  Raw images need to be enabled in the LeapController to receive their events.
	* 处理 Raw 图像时触发的事件。 需要在 LeapController 中启用 Raw 图像才能接收其事件。
	*
	* @param Texture		UTexture2D representation of the raw leap image
	* @param Image			image object containing details relevant to the image such as distorion
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "Leap Interface Event")
	void RawImageReceived(UTexture2D* Texture, ULeapImage* Image);

	// Server
	
	/* 当控制器对象与 Leap Motion 软件断开连接时调用，或者 Leap Motion 硬件已拔下。
	 * 拔下 Leap Motion 设备时，控制器可以断开连接，此时用户关闭 Leap Motion 软件，或 Leap Motion 软件遇到不可恢复的错误。
	 */
	UFUNCTION(BlueprintImplementableEvent, Category = "Leap Interface Event")
	void LeapMotionOnDisconnect();
	
	//Help identifying
	virtual FString ToString();
};