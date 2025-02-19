#pragma once

#include "Components/ActorComponent.h"
#include "AnimHand.h"
#include "AnimBody.generated.h"

/**
* Animation Body object used to hold tracked animation state and provide
* convenience functions for re-basing and shifting the whole skeleton data.
* 用于保存跟踪动画状态并为重新定位和移动整个骨骼数据提供便利函数的动画身体对象。
*/
UCLASS(ClassGroup = "Animation Skeleton", meta = (BlueprintSpawnableComponent))
class SIMPLELEAPMOTION_API UAnimBody : public UActorComponent
{
	GENERATED_BODY()
public:
	UAnimBody();

	/**
	* Tracked state alpha. Vary the value to blend animation with tracked information.
	* 跟踪状态 Alpha 值。调整此值可以混合动画和跟踪信息。
	*/
	UPROPERTY(BlueprintReadWrite, Category = "Anim Body")
	float Alpha;

	/**
	* Left Anim Hand
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Anim Body")
	UAnimHand* Left;

	/**
	* Right Anim Hand
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Anim Body")
	UAnimHand* Right;

	/**
	* Head Bone
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Anim Body")
	UAnimBone* Head;

	/**
	* Check whether alpha blend is 1.f
	* 检查 Alpha 混合是否为 1.0f。
	*
	* @return  True if alpha is 1.f
	*/
	UFUNCTION(BlueprintCallable, Category = "Anim Body")
	bool Enabled();

	/**
	* Set enabled state for animation query, Alpha = 1.f.
	* Will affect a child bones.
	* 设置动画查询的启用状态，Alpha = 1.0f。
	* 这将影响子骨骼。
	*
	* @param  Enable default to true
	*/
	UFUNCTION(BlueprintCallable, Category = "Anim Body")
	void SetEnabled(bool Enable = true);

	/**
	* Translate all the bones in the body by given vector amount
	* 将身体中所有骨骼按给定向量量平移
	*
	* @param  Shift		Vector amount
	*/
	UFUNCTION(BlueprintCallable, Category = "Anim Body")
	void TranslateBody(FVector Shift);

	/**
	* 通过旋转集合更改基准。用于在动画中将默认值从 XForward 旋转到 YForward。
	* 
	* @param PreBase 影响输入的基准偏移
	* @param PostBase 不影响输入的固定偏移
	* @param AdjustVectors 基准是否应该影响向量，还是只影响方向
	*/
	UFUNCTION(BlueprintCallable, Category = "Anim Body")
	void ChangeBasis(FRotator PreBase, FRotator PostBase, bool AdjustVectors = true);
};