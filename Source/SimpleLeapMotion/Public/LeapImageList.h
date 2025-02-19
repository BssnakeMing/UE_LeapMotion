#pragma once

#include "LeapImageList.generated.h"

namespace Leap
{
	class ImageList;
}

/**
* The ImageList class represents a list of Image objects.
*
* Leap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.ImageList.html
*/
UCLASS(BlueprintType)
class SIMPLELEAPMOTION_API ULeapImageList : public UObject
{
	GENERATED_BODY()
public:
	ULeapImageList(const FObjectInitializer &ObjectInitializer);
	~ULeapImageList();
	
	/**
	* Whether the list is empty.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Image List")
	bool IsEmpty;

	/**
	* The number of images in this list.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Image List")
	int32 Count;
	
	/**
	* Access a list member by its position in the list.
	*
	* @param	Index	The zero-based list position index.
	* @return	The Image object at the specified index.
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "getIndex", CompactNodeTitle = "", Keywords = "get index"), Category = "Leap Image List")
	class ULeapImage* GetIndex(int32 Index);

	ULeapImage* operator[](int Index);

	void SetLeapImageList(const class Leap::ImageList &LeapImageList);

private:
	class PrivateLeapImageList* Private;

	UPROPERTY()
	ULeapImage* PIndexImage1 = nullptr;
	UPROPERTY()
	ULeapImage* PIndexImage2 = nullptr;
};