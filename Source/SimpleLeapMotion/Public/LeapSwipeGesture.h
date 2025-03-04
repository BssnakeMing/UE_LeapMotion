#pragma once

#include "LeapGesture.h"
#include "LeapSwipeGesture.generated.h"

namespace Leap
{
	class SwipeGesture;
}

/** 
* The SwipeGesture class represents a swiping motion a finger or tool.
* SwipeGesture objects are generated for each visible finger or tool. 
* Swipe gestures are continuous; a gesture object with the same ID value
* will appear in each frame while the gesture continues.
*
* Leap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.SwipeGesture.html
*/
UCLASS(BlueprintType)
class SIMPLELEAPMOTION_API ULeapSwipeGesture : public ULeapGesture
{
	GENERATED_BODY()
public:
	ULeapSwipeGesture(const FObjectInitializer &ObjectInitializer);
	~ULeapSwipeGesture();

	/**
	* The unit direction vector parallel to the swipe motion in basic enum form, useful for switching through common directions checks (Up/Down, Left/Right, In/Out)
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Swipe Gesture")
	ELeapBasicDirection BasicDirection;

	/**
	* The unit direction vector parallel to the swipe motion.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Swipe Gesture")
	FVector Direction;

	/**
	* The finger performing the swipe gesture.
	*
	* @return	A Pointable object representing the swiping finger.
	*/
	UFUNCTION(BlueprintCallable, Category = "Leap Swipe Gesture")
	class ULeapPointable* Pointable();

	/**
	* The current position of the swipe.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Swipe Gesture")
	FVector Position;

	/**
	* The swipe speed in cm/second.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Swipe Gesture")
	float Speed;

	/**
	* The position where the swipe began.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Swipe Gesture")
	FVector StartPosition;
	
	void SetGesture(const class Leap::SwipeGesture &Gesture);

private:
	class PrivateSwipeGesture* Private;

	UPROPERTY()
	ULeapPointable* PPointable = nullptr;
};