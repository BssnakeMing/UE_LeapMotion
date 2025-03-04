#include "AnimBody/AnimFinger.h"

#include "LeapFinger.h"
#include "LeapBone.h"


UAnimFinger::UAnimFinger()
{
	Metacarpal = CreateDefaultSubobject<UAnimBone>(TEXT("Metacarpal"));
	Proximal = CreateDefaultSubobject<UAnimBone>(TEXT("Proximal"));
	Intermediate = CreateDefaultSubobject<UAnimBone>(TEXT("Intermediate"));
	Distal = CreateDefaultSubobject<UAnimBone>(TEXT("Distal"));
}

bool UAnimFinger::Enabled()
{
	return Alpha == 1.f;
}

void UAnimFinger::SetEnabled(bool Enable)
{
	if (Enable)
	{
		Alpha = 1.f;
	}
	else
	{
		Alpha = 0.f;
	}

	//Forward to every finger
	Metacarpal->SetEnabled(Enable);
	Proximal->SetEnabled(Enable);
	Intermediate->SetEnabled(Enable);
	Distal->SetEnabled(Enable);
}

void UAnimFinger::TranslateFinger(FVector Shift)
{
	//Shift all bones
	Metacarpal->TranslateBone(Shift);
	Proximal->TranslateBone(Shift);
	Intermediate->TranslateBone(Shift);
	Distal->TranslateBone(Shift);
}


void UAnimFinger::TransformFinger(FTransform& ByTransform)
{
	Metacarpal->TransformBone(ByTransform);
	Proximal->TransformBone(ByTransform);
	Intermediate->TransformBone(ByTransform);
	Distal->TransformBone(ByTransform);
}

void UAnimFinger::ChangeBasis(FRotator PreBase, FRotator PostBase, bool AdjustVectors)
{
	//Change Basis for all bones
	Metacarpal->ChangeBasis(PreBase, PostBase, AdjustVectors);
	Proximal->ChangeBasis(PreBase, PostBase, AdjustVectors);
	Intermediate->ChangeBasis(PreBase, PostBase, AdjustVectors);
	Distal->ChangeBasis(PreBase, PostBase, AdjustVectors);
}

void UAnimFinger::SetFromLeapFinger(ULeapFinger* Finger, ELeapHandType HandType)
{
	//Orientation, we need the hand type to reverse matrix basis for left hand bones
	Metacarpal->Orientation = Finger->Metacarpal->GetOrientation(HandType);
	Proximal->Orientation = Finger->Proximal->GetOrientation(HandType);
	Intermediate->Orientation = Finger->Intermediate->GetOrientation(HandType);
	Distal->Orientation = Finger->Distal->GetOrientation(HandType);

	//Position
	Metacarpal->Position = Finger->Metacarpal->Center;
	Proximal->Position = Finger->Proximal->Center;
	Intermediate->Position = Finger->Intermediate->Center;
	Distal->Position = Finger->Distal->Center;

	//Length
	Metacarpal->Length = Finger->Metacarpal->Length;
	Proximal->Length = Finger->Proximal->Length;
	Intermediate->Length = Finger->Intermediate->Length;
	Distal->Length = Finger->Distal->Length;

	//Joints
	Metacarpal->PrevJoint = Finger->Metacarpal->PrevJoint;
	Metacarpal->NextJoint = Finger->Metacarpal->NextJoint;
	Proximal->PrevJoint = Finger->Proximal->PrevJoint;
	Proximal->NextJoint = Finger->Proximal->NextJoint;
	Intermediate->PrevJoint = Finger->Intermediate->PrevJoint;
	Intermediate->NextJoint = Finger->Intermediate->NextJoint;
	Distal->PrevJoint = Finger->Distal->PrevJoint;
	Distal->NextJoint = Finger->Distal->NextJoint;

}