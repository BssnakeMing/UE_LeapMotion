#pragma once

#include "LeapGesture.h"
#include "LeapKeyTapGesture.generated.h"

namespace Leap
{
	class KeyTapGesture;
}

/**
* The KeyTapGesture class represents a tapping gesture by a finger or tool.
* A key tap gesture is recognized when the tip of a finger rotates down toward 
* the palm and then springs back to approximately the original position, as if
* tapping.
*
* Leap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.KeyTapGesture.html
*/
UCLASS(BlueprintType)
class SIMPLELEAPMOTION_API ULeapKeyTapGesture : public ULeapGesture
{
	GENERATED_BODY()
public:
	ULeapKeyTapGesture(const FObjectInitializer &ObjectInitializer);
	~ULeapKeyTapGesture();

	/**
	* The direction of finger tip motion in basic enum form, useful for switching
	* through common directions checks (Up/Down, Left/Right, In/Out)
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Key Tap  Gesture")
	ELeapBasicDirection BasicDirection;

	/**
	* The direction of finger tip motion.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Key Tap Gesture")
	FVector Direction;

	/**
	* The finger performing the key tap gesture.
	*
	* @return	A Pointable object representing the tapping finger.
	*/
	UFUNCTION(BlueprintCallable, Category = "Leap Key Tap Gesture")
	class ULeapPointable* Pointable();

	/**
	* The position where the key tap is registered.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Key Tap Gesture")
	FVector Position;

	/**
	* The progress value is always 1.0 for a key tap gesture.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Key Tap Gesture")
	float Progress;

	void SetGesture(const class Leap::KeyTapGesture &Gesture);

private:
	class PrivateKeyTapGesture* Private;

	UPROPERTY()
	ULeapPointable* PPointable = nullptr;
};