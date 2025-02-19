#pragma once

#include "AnimBone.h"
#include "LeapEnums.h"

#include "AnimFinger.generated.h"

/**
* Animation Finger object used to hold tracked animation state and provide
* convenience functions for re-basing and shifting tracked finger data.
* 用于保存跟踪动画状态并为重新定位和移动跟踪手指数据提供便利函数的动画手指对象。
*/
UENUM(BlueprintType)
enum class EAnimHandType : uint8
{
	ANIM_HAND_UNKNOWN,
	ANIM_HAND_LEFT,
	ANIM_HAND_RIGHT
};

UCLASS(BlueprintType)
class SIMPLELEAPMOTION_API UAnimFinger : public UObject
{
	GENERATED_BODY()
public:
	UAnimFinger();

	/**
	* Metacarpal Animation Bone
	* 掌骨
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Anim Finger")
	UAnimBone* Metacarpal;

	/**
	* Proximal Animation Bone
	* 近节
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Anim Finger")
	UAnimBone* Proximal;

	/**
	* Intermediate Animation Bone
	* 中节
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Anim Finger")
	UAnimBone* Intermediate;

	/**
	* Distal Animation Bone
	* 末节
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Anim Finger")
	UAnimBone* Distal;

	/**
	* Animation alpha blend
	*/
	UPROPERTY(BlueprintReadWrite, Category = "Anim Finger")
	float Alpha;

	/**
	* Check whether alpha blend is 1.f
	*
	* @return  True if alpha is 1.f
	*/
	UFUNCTION(BlueprintCallable, Category = "Anim Finger")
	bool Enabled();

	/**
	* Set enabled state for animation query, Alpha = 1.f
	* Will affect a child bones.
	*
	* @param  Enable default to true
	*/
	UFUNCTION(BlueprintCallable, Category = "Anim Finger")
	void SetEnabled(bool Enable = true);

	/**
	* Translate all the bones in the finger by given vector amount
	* 按给定的向量量平移手指中的所有骨骼
	*
	* @param  Shift		Vector amount
	*/
	UFUNCTION(BlueprintCallable, Category = "Anim Finger")
	void TranslateFinger(FVector Shift);

	/**
	* Transform all the bones in the finger by the given transform
	* 通过给定的变换变换手指中的所有骨骼
	*
	* @param ByTransform	Affecting transform
	*/
	UFUNCTION(BlueprintCallable, Category = "Anim Finger")
	void TransformFinger(FTransform& ByTransform);

	/**
	* Changes the Basis by rotations sets. Used for rotating from XForward to YForward defaults
	* in animation.
	* 通过旋转集合更改基准。用于在动画中将默认值从 XForward 旋转到 YForward。
	*
	* @param  PreBase		Basis offset affecting input
	* @param  PostBase		Fixed offset not affecting input
	* @param  AdjustVectors Whether the basis should affect vectors or just orientation
	*/
	UFUNCTION(BlueprintCallable, Category = "Anim Finger")
	void ChangeBasis(FRotator PreBase, FRotator PostBase, bool AdjustVectors = true);

	/**
	* Convenience function to copy the state of the AnimFinger from the LeapFinger
	* 将 AnimFinger 的状态从 LeapFinger 复制过来的便捷函数。
	*
	* @param Finger finger to copy from
	* @param HandType left or right
	*/
	UFUNCTION(BlueprintCallable, Category = "Anim Finger")
	void SetFromLeapFinger(class ULeapFinger* Finger, ELeapHandType HandType);
};