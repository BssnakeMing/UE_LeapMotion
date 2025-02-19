#pragma once
#include "LeapEnums.h"


#include "LeapHand.generated.h"

namespace Leap
{
	class Hand;
}

/**
* The Hand class reports the physical characteristics of a detected hand.
* Hand tracking data includes a palm position and velocity; vectors for 
* the palm normal and direction to the fingers; properties of a sphere 
* fit to the hand; and lists of the attached fingers.
* 手部追踪数据包括手掌的位置和速度；手掌法线向量和指向手指方向的向量；拟合到手的球体的属性；以及附属手指的列表。
*
* Leap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.Hand.html
*/
UCLASS(BlueprintType)
class SIMPLELEAPMOTION_API ULeapHand : public UObject
{
	GENERATED_BODY()
public:
	ULeapHand(const FObjectInitializer &ObjectInitializer);
	~ULeapHand();
	
	/**
	* The arm to which this hand is attached.
	* 此手所连接的手臂。
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Hand")
	class ULeapArm* Arm;

	/**
	* The orientation of the hand as a basis matrix.
	* 手的方向作为基矩阵。
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Hand")
	FMatrix Basis;

	/**
	* How confident we are with a given hand pose.
	* The confidence level ranges between 0.0 and 1.0 inclusive.
	* 我们对给定手部姿势的置信度。
	* 置信度范围介于 0.0 和 1.0 之间（含 0.0 和 1.0）
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Hand")
	float Confidence;

	/**
	* The direction from the palm position toward the fingers.
	* 从手掌位置到手指的方向。
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Hand")
	FVector Direction;

	/**
	* The list of Finger objects detected in this frame that are attached to this hand,
	* given in order from thumb to pinky.
	* 此帧中检测到的、附着在该手上的手指对象的列表，按从拇指到小指的顺序排列。
	*
	* @return	The FingerList containing all Finger objects attached to this hand.
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Fingers"), Category = "Leap Hand")
	class ULeapFingerList* Fingers();

	/**
	* The Frame associated with this Hand.
	* 与此手关联的帧。
	* 如果可用，则返回关联的 Frame 对象；否则，返回一个无效的 Frame 对象。
	*
	* @return	The associated Frame object, if available; otherwise, an invalid Frame object is returned.
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Frame"), Category = "Leap Hand")
	class ULeapFrame* Frame();

	/**
	* The strength of a grab hand pose as a float value in the [0..1] range representing 
	* the holding strength of the pose.
	* 抓取手势的强度，以 [0..1] 范围内的浮点值表示，代表该手势的抓握强度。
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Hand")
	float GrabStrength;

	/**
	* Identifies whether this hand is Left, Right, or Unknown
	* 标识此手是左手、右手还是未知。
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Hand")
	ELeapHandType HandType;

	/*
	* A unique ID assigned to this Hand object, whose value remains the same across consecutive 
	* frames while the tracked hand remains visible.
	* 分配给此 Hand 对象的唯一 ID，只要被跟踪的手保持可见，其值在连续帧之间保持不变。
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Hand")
	int32 Id;

	/**
	* Identifies whether this Hand is a left hand.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Hand")
	bool IsLeft;

	/**
	* Whether this is a right hand.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Hand")
	bool IsRight;

	/**
	* Reports whether this is a valid Hand object.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Hand")
	bool IsValid;

	/**
	* The normal vector to the palm. If your hand is flat, this vector will point downward,
	* or �out� of the front surface of your palm.
	* 手掌的法线向量。如果你的手是平的，这个向量将指向下方，或者说“朝外”，从你手掌的前表面指出。
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Hand")
	FVector PalmNormal;

	/**
	* Custom API, Origin is a flat palm facing down.
	* 自定义 API，原点是手掌朝下的平面。
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Hand")
	FRotator PalmOrientation;

	/**
	* The center position of the palm in centimeters from the Leap Motion Controller origin.
	* 手掌中心的位置，以厘米为单位，相对于 Leap Motion 控制器的原点。
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Hand")
	FVector PalmPosition;

	/**
	* The rate of change of the palm position in centimeters/second.
	* 手掌位置的变化率，单位为厘米/秒。
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Hand")
	FVector PalmVelocity;

	/**
	* The estimated width of the palm when the hand is in a flat position.
	* 当手处于平放位置时手掌的估计宽度。
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Hand")
	float PalmWidth;

	/**
	* The holding strength of a pinch hand pose. The strength is zero for an open hand, 
	* and blends to 1.0 when a pinching hand pose is recognized. Pinching can be done 
	* between the thumb and any other finger of the same hand.
	* 捏合手势的抓握强度。张开手时强度为零，当识别到捏合手势时，强度会逐渐变为 1.0。捏合可以在同一只手的拇指和其他任何手指之间进行。
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Hand")
	float PinchStrength;

	/**
	* The angle of rotation around the rotation axis derived from the change in orientation 
	* of this hand, and any associated fingers, between the current frame and the specified frame.
	* 围绕旋转轴的旋转角度，该角度由当前帧和指定帧之间此手及任何相关手指的姿态变化得出。
	*
	* @param	OtherFrame	The starting frame for computing the relative rotation.用于计算相对旋转的起始帧。
	* @return	A positive value representing the heuristically determined rotational change of the hand between the current frame and that specified in the sinceFrame parameter.
	*			一个正值，表示启发式确定方法计算出的手在当前帧和 sinceFrame 参数指定帧之间的旋转变化。
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "RotationAngle"), Category = "Leap Hand")
	float RotationAngle(class ULeapFrame *OtherFrame);

	/**
	* The angle of rotation around the specified axis derived from the change in orientation 
	* of this hand, and any associated fingers, between the current frame and the specified frame.
	* 围绕指定轴的旋转角度，该角度由当前帧和指定帧之间此手及任何相关手指的姿态变化得出。
	*
	* @param	OtherFrame	The starting frame for computing the relative rotation.
	* @param	Axis		The axis to measure rotation around.
	* @return	A value representing the heuristically determined rotational change of the hand between the current frame and that specified in the sinceFrame parameter around the specified axis.
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "RotationAngleWithAxis"), Category = "Leap Hand")
	float RotationAngleWithAxis(class ULeapFrame *OtherFrame, const FVector &Axis);

	/**
	* The axis of rotation derived from the change in orientation of this hand, and any associated 
	* fingers, between the current frame and the specified frame.
	* 旋转轴，由当前帧和指定帧之间此手及任何相关手指的姿态变化得出。
	*
	* @param	OtherFrame	The starting frame for computing the relative rotation.
	* @return	A normalized direction Vector representing the heuristically determined axis of rotational change of the hand between the current frame and that specified in the sinceFrame parameter.
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "RotationAxis"), Category = "Leap Hand")
	FVector RotationAxis(const class ULeapFrame *OtherFrame);

	/**
	* The transform matrix expressing the rotation derived from the change in orientation of this 
	* hand, and any associated fingers, between the current frame and the specified frame.
	* 变换矩阵，表示由当前帧和指定帧之间此手及任何相关手指的姿态变化得出的旋转。
	*
	* @param	OtherFrame	The starting frame for computing the relative rotation.
	* @return	A transformation Matrix representing the heuristically determined rotational change of the hand between the current frame and that specified in the sinceFrame parameter.
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "RotationMatrix"), Category = "Leap Hand")
	FMatrix RotationMatrix(const class ULeapFrame *OtherFrame);

	/**
	* The estimated probability that the hand motion between the current frame and the specified 
	* frame is intended to be a rotating motion.
	* 当前帧和指定帧之间手部运动被认为是旋转运动的估计概率。
	*
	* @param	OtherFrame	The starting frame for computing the relative rotation.
	* @return	A value between 0 and 1 representing the estimated probability that the hand motion between the current frame and the specified frame is intended to be a rotating motion.
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "RotationProbability"), Category = "Leap Hand")
	float RotationProbability(const class ULeapFrame *OtherFrame);

	/**
	* The scale factor derived from this hand�s motion between the current frame and the specified frame.
	* 由当前帧和指定帧之间此手的运动得出的缩放因子。
	*
	* @param	OtherFrame	The starting frame for computing the relative scaling.
	* @return	A positive value representing the heuristically determined scaling change ratio of the hand between the current frame and that specified in the sinceFrame parameter.
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "ScaleFactor"), Category = "Leap Hand")
	float ScaleFactor(const class ULeapFrame *OtherFrame);

	/**
	* The estimated probability that the hand motion between the current frame and the specified 
	* frame is intended to be a scaling motion.
	* 估计的概率，表示当前帧和指定帧之间的手部运动是否意图为缩放运动。
	*
	* @param	OtherFrame	The starting frame for computing the relative scaling.
	* @return	A value between 0 and 1 representing the estimated probability that the hand motion between the current frame and the specified frame is intended to be a scaling motion.
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "ScaleProbability"), Category = "Leap Hand")
	float ScaleProbability(const class ULeapFrame *OtherFrame);

	/**
	* The center of a sphere fit to the curvature of this hand. This sphere is placed roughly as 
	* if the hand were holding a ball.
	* 拟合到此手曲率的球体的中心。这个球体的位置大致就像手握着一个球一样。
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Hand")
	FVector SphereCenter;

	/**
	* The radius of a sphere fit to the curvature of this hand. This sphere is placed roughly as
	* if the hand were holding a ball.
	* 拟合到此手曲率的球体的半径。这个球体的位置大致就像手握着一个球一样。
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Hand")
	float SphereRadius;

	/**
	* The stabilized palm position of this Hand.
	* 此手的稳定手掌位置。
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Hand")
	FVector StabilizedPalmPosition;

	/**
	* The duration of time this Hand has been visible to the Leap Motion Controller.
	* 此手对 Leap Motion 控制器可见的时长。
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Hand")
	float TimeVisible;

	/**
	* Returns a timestamp indicating when this frame began being captured on the device. Can't be exposed to blueprint due to 64bit nature.
	* 返回一个时间戳，指示此帧何时开始在设备上捕获。由于 64 位性质，无法在蓝图中公开。
	*/
	//UPROPERTY(EditAnywhere)
	int64 Timestamp;

	/**
	* The change of position of this hand between the current frame and the specified frame.
	* 此手在当前帧和指定帧之间的位置变化。
	*
	* @param	OtherFrame	The starting frame for computing the translation.
	* @return	A Vector representing the heuristically determined change in hand position between the current frame and that specified in the sinceFrame parameter.
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Translation"), Category = "Leap Hand")
	FVector Translation(const class ULeapFrame *OtherFrame);

	/**
	* The estimated probability that the hand motion between the current frame and the specified 
	* frame is intended to be a translating motion.+
	* 估计的概率，表示当前帧和指定帧之间的手部运动是否意图为平移运动。
	*
	* @param	OtherFrame	The starting frame for computing the translation.
	* @return	A value between 0 and 1 representing the estimated probability that the hand motion between the current frame and the specified frame is intended to be a translating motion.
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "TranslationProbability"), Category = "Leap Hand")
	float TranslationProbability(const class ULeapFrame *OtherFrame);

	/**
	* The position of the wrist of this hand.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Hand")
	FVector WristPosition;

	bool operator!=(const ULeapHand &) const;

	bool operator==(const ULeapHand &) const;

	void SetHand(const class Leap::Hand &Hand);

private:
	class PrivateHand* Private;

	UPROPERTY()
	ULeapFrame* PFrame = nullptr;
	UPROPERTY()
	ULeapFingerList* PFingers = nullptr;
};