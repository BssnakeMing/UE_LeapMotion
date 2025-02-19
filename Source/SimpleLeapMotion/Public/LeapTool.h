#pragma once

#include "LeapPointable.h"
#include "LeapTool.generated.h"

namespace Leap
{
	class Tool;
}

/**
* The Tool class represents a tracked tool.
* Tools are Pointable objects that the Leap Motion software has classified as a tool.
* Get valid Tool objects from a Frame object.
*
* Leap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.Tool.html
*/
UCLASS(BlueprintType)
class SIMPLELEAPMOTION_API ULeapTool : public ULeapPointable
{
	GENERATED_BODY()
public:
	ULeapTool(const FObjectInitializer &ObjectInitializer);
	~ULeapTool();

	void SetTool(const class Leap::Tool &Tool);

private:
	class PrivateTool* Private;
};