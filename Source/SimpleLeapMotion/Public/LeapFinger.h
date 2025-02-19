#pragma once

#include "LeapPointable.h"
#include "LeapFinger.generated.h"

namespace Leap
{
	class Finger;
}

/**
* The Finger class represents a tracked finger.
*
* Fingers are Pointable objects that the Leap Motion software has classified as a 
* finger. Get valid Finger objects from a Frame or a Hand object.
* Finger 类表示一个被跟踪的手指。
* 手指是 Pointable 对象，Leap Motion 软件已将其归类为手指。从 Frame 或 Hand 对象获取有效的 Finger 对象。
*
* Leap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.Finger.html
*/
UCLASS(BlueprintType)
class SIMPLELEAPMOTION_API ULeapFinger : public ULeapPointable
{
	GENERATED_BODY()
public:
	ULeapFinger(const FObjectInitializer &ObjectInitializer);
	~ULeapFinger();

	/**
	* The bone at a given bone type index on this finger.
	* 此手指上给定骨骼类型索引处的骨骼。
	*
	* @param	mType value from the LeapBoneType enumeration identifying the bone of interest.
	* @return	The Bone that has the specified bone type.
	*/
	UFUNCTION(BlueprintCallable, meta = (Category = "Leap Finger"))
	class ULeapBone *Bone(enum ELeapBoneType mType);

	/**
	* The Metacarpal bone of this finger.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Finger")
	class ULeapBone *Metacarpal;

	/**
	* The Proximal bone of this finger.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Finger")
	class ULeapBone *Proximal;

	/**
	* The Intermediate bone of this finger.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Finger")
	class ULeapBone *Intermediate;
	
	/**
	* The Distal bone of this finger.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Finger")
	class ULeapBone *Distal;

	/**
	* Type of finger as enum (see LeapFingerType enum)
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Finger")
	ELeapFingerType Type;

	void SetFinger(const class Leap::Finger &Pointable);

private:
	class PrivateFinger* Private;
};