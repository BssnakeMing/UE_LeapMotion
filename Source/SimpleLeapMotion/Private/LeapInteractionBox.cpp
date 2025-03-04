#include "LeapInteractionBox.h"

#include "LeapInterfaceUtility.h"


class PrivateInteractionBox
{
public:
	Leap::InteractionBox InteractionBox;
};


ULeapInteractionBox::ULeapInteractionBox(const FObjectInitializer &ObjectInitializer) : UObject(ObjectInitializer), Private(new PrivateInteractionBox())
{
}

ULeapInteractionBox::~ULeapInteractionBox()
{
	delete Private;
}


FVector ULeapInteractionBox::DenormalizePoint(FVector Vector) const
{
	Leap::Vector LeapVector = ConvertAndScaleUEToLeap(Vector);
	return (ConvertAndScaleLeapToUE(Private->InteractionBox.denormalizePoint(LeapVector)));
}

FVector ULeapInteractionBox::NormalizePoint(FVector Vector, bool Clamp) const
{
	Leap::Vector LeapVector = ConvertAndScaleUEToLeap(Vector);
	return (ConvertAndScaleLeapToUE(Private->InteractionBox.normalizePoint(LeapVector, Clamp)));
}

void ULeapInteractionBox::SetInteractionBox(const Leap::InteractionBox &InteractionBox)
{
	Private->InteractionBox = InteractionBox;
	Center = ConvertAndScaleLeapToUE(Private->InteractionBox.center());
	Depth = Private->InteractionBox.depth();
	Height = Private->InteractionBox.height();
	IsValid = Private->InteractionBox.isValid();
	Width = Private->InteractionBox.width();
}