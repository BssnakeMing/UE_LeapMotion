#pragma once

#include "AnimBone.generated.h"

/**
* Animation Finger object used to hold tracked animation state and provide
* convenience functions for re-basing and shifting tracked finger data.
* 用于保存跟踪动画状态并为重新定位和移动跟踪手指数据提供便利函数的动画手指对象。
*/
UCLASS(BlueprintType)
class SIMPLELEAPMOTION_API UAnimBone : public UObject
{
	GENERATED_BODY()
public:
	UAnimBone(const FObjectInitializer &ObjectInitializer);

	/**
	* Bone raw transform position.
	* 骨骼原始变换位置。
	*/
	UPROPERTY(BlueprintReadWrite, Category = "Anim Bone")
	FVector Position;

	/**
	* Bone raw transform orientation.
	* 骨骼原始变换方向。
	*/
	UPROPERTY(BlueprintReadWrite, Category = "Anim Bone")
	FRotator Orientation;

	/**
	* Bone raw transform scale.
	* 骨骼原始变换比例。
	*/
	UPROPERTY(BlueprintReadWrite, Category = "Anim Bone")
	FVector Scale;

	/**
	* Bone Length in cm.
	*/
	UPROPERTY(BlueprintReadWrite, Category = "Anim Bone")
	float Length;

	/**
	* Tracked state alpha. Vary the value to blend animation with tracked information.
	* 跟踪状态 Alpha。改变该值以将动画与跟踪信息混合。
	*/
	UPROPERTY(BlueprintReadWrite, Category = "Anim Bone")
	float Alpha;


	/**
	* Optional vector of the previous joint (outward)
	* 前一个关节的可选向量 （向外）
	*/
	UPROPERTY(BlueprintReadWrite, Category = "Anim Bone")
	FVector NextJoint;


	/**
	* Optional vector of the previous joint (inward)
	* 前一个关节的可选向量 （向内）
	*/
	UPROPERTY(BlueprintReadWrite, Category = "Anim Bone")
	FVector PrevJoint;

	/**
	* Check whether alpha blend is 1.f
	*
	* @return  True if alpha is 1.f
	*/
	UFUNCTION(BlueprintCallable, Category = "Anim Bone")
	bool Enabled();

	/**
	* Set enabled state for animation query, Alpha = 1.f
	*
	* @param  Enable default to true
	*/
	UFUNCTION(BlueprintCallable, Category = "Anim Bone")
	void SetEnabled(bool Enable = true);

	/**
	* Sets raw values from transform
	* 设置骨骼原始变换
	*
	* @param  Transform		Transform
	*/
	UFUNCTION(BlueprintCallable, Category = "Anim Bone")
	void SetFromTransform(const FTransform& Transform);

	/**
	* Transform from raw values
	* 获取原始变换
	*
	* 	* @return Transform
	*/
	UFUNCTION(BlueprintPure, Category = "Anim Bone")
	FTransform GetTransform();

	/**
	* Moves the bone by given amount
	* 按给定量移动骨骼
	*
	* @param  Shift		Vector amount
	*/
	UFUNCTION(BlueprintCallable, Category = "Anim Bone")
	void TranslateBone(FVector Shift);


	/**
	* Transform the bone by the given transform
	* 通过给定的变换变换骨骼
	*
	* @param ByTransform	Affecting transform
	*/
	UFUNCTION(BlueprintCallable, Category = "Anim Bone")
	void TransformBone(FTransform& ByTransform);
	
	/**
	* Changes the Basis by rotations sets. Used for rotating from XForward to YForward defaults
	* in animation.
	* 通过旋转集合更改基准。用于在动画中将默认值从 XForward 旋转到 YForward。
	*
	* @param  PreBase		Basis offset affecting input
	* @param  PostBase		Fixed offset not affecting input
	* @param  AdjustVectors Whether the basis should affect vectors or just orientation
	*/
	UFUNCTION(BlueprintCallable, Category = "Anim Bone")
	void ChangeBasis(FRotator PreBase, FRotator PostBase, bool AdjustVectors = true);
};