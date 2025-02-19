#pragma once

#include "AnimFinger.h"
#include "LeapHand.h"
#include "AnimHand.generated.h"

/**
* Animation Hand object used to hold tracked animation state and provide
* convenience functions for re-basing and shifting tracked hand data.
* 用于保存跟踪动画状态并为重新定位和移动跟踪手部数据提供便利函数的动画手部对象。
*/
UCLASS(BlueprintType)
class SIMPLELEAPMOTION_API UAnimHand : public UObject
{
	GENERATED_BODY()

public:
	UAnimHand();
	
	/**
	* Tracked state alpha. Vary the value to blend animation with tracked information.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Anim Hand")
	float Alpha;

	/**
	* Confidence in pose as determined by tracking
	* 由跟踪确定的姿势置信度。
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Anim Hand Hand")
	float Confidence;

	//Fingers

	/**
	* Tracked thumb finger.
	* 拇指
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Anim Hand Finger")
	UAnimFinger* Thumb;

	/**
	* Tracked index finger.
	* 食指
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Anim Hand Finger")
	UAnimFinger* Index;
	
	/**
	* Tracked middle finger.
	* 中指
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Anim Hand Finger")
	UAnimFinger* Middle;

	/**
	* Tracked ring finger.
	* 无名指
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Anim Hand Finger")
	UAnimFinger* Ring;

	/**
	* Tracked pinky finger.
	* 小指
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Anim Hand Finger")
	UAnimFinger* Pinky;
	
	/**
	* Tracked wrist bone.
	* 手腕
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Anim Hand")
	UAnimBone* Wrist;

	/**
	* Tracked palm bone.
	* 手掌
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Anim Hand")
	UAnimBone* Palm;
	
	/**
	* Tracked lowerarm bone.
	* 前臂
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Anim Hand")
	UAnimBone* LowerArm;

	/**
	* Check whether alpha blend is 1.f
	*
	* @return  True if alpha is 1.f
	*/
	UFUNCTION(BlueprintCallable, Category = "Anim Hand")
	bool Enabled();

	/**
	* Set enabled state for animation query, Alpha = 1.f
	* Will affect a child bones.
	*
	* @param  Enable default to true
	*/
	UFUNCTION(BlueprintCallable, Category = "Anim Hand")
	void SetEnabled(bool Enable = true);

	/**
	* Translate all the bones in the hand by given vector amount
	*
	* @param  Shift		Vector amount
	*/
	UFUNCTION(BlueprintCallable, Category = "Anim Hand")
	void TranslateHand(FVector Shift);

	/**
	* Transform all the bones in the hand by the given transform
	*
	* @param ByTransform	Affecting transform
	*/
	UFUNCTION(BlueprintCallable, Category = "Anim Finger")
	void TransformHand(FTransform& ByTransform);

	/**
	* Changes the Basis by rotations sets. Used for rotating from XForward to YForward defaults
	* in animation.
	*
	* @param  PreBase		Basis offset affecting input
	* @param  PostBase		Fixed offset not affecting input
	* @param  AdjustVectors Whether the basis should affect vectors or just orientation
	*/
	UFUNCTION(BlueprintCallable, Category = "Anim Hand")
	void ChangeBasis(FRotator PreBase, FRotator PostBase, bool AdjustVectors = true);


	/**
	* Convenience function to copy the state of the AnimHand from the LeapHand
	* 从 LeapHand 复制 AnimHand 状态的便捷函数
	*
	* @param Hand hand to copy from
	*/
	UFUNCTION(BlueprintCallable, Category = "Anim Hand")
	void SetFromLeapHand(class ULeapHand* LeapHand);

	/**
	* Apply the timewarp now
	*/
	UFUNCTION(BlueprintCallable, Category = "Anim Hand")
	void ApplyTimewarp();
};