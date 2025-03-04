#pragma once

#include "LeapGestureList.generated.h"

namespace Leap
{
	class GestureList;
}

/**
* The GestureList class represents a list of Gesture objects.
*
* Leap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.GestureList.html
*/
UCLASS(BlueprintType)
class SIMPLELEAPMOTION_API ULeapGestureList : public UObject
{
	GENERATED_BODY()
public:
	ULeapGestureList(const FObjectInitializer &ObjectInitializer);
	~ULeapGestureList();
	
	/**
	* Reports whether the list is empty.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Gesture List")
	bool IsEmpty;

	/**
	* The length of this list.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Gesture List")
	int32 Count;
	
	/**
	* Access a list member by its position in the list.
	*
	* @param index	The zero-based list position index.
	* @return		The Gesture object at the specified index.
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "getIndex", CompactNodeTitle = "[]", Keywords = "get index"), Category = "Leap Gesture List")
	class ULeapGesture *GetIndex(int32 Index);

	ULeapGesture* operator[](int Index);

	void SetGestureList(const class Leap::GestureList &Gesturelist);

private:
	class PrivateGestureList* Private;

	UPROPERTY()
	ULeapGesture* PGesture = nullptr;
};