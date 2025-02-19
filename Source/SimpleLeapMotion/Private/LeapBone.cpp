#include "LeapBone.h"

#include "LeapInterfaceUtility.h"


class PrivateBone
{
public:
	Leap::Bone Bone;
};

ULeapBone::ULeapBone(const FObjectInitializer &ObjectInitializer) : UObject(ObjectInitializer), Private(new PrivateBone())
{
}

ULeapBone::~ULeapBone()
{
	delete Private;
}


FRotator ULeapBone::GetOrientation(ELeapHandType HandType)
{
	if (HandType == ELeapHandType::HAND_LEFT)
	{
		return SwapLeftHandRuleForRight(Basis).Rotator();
	}
	else
	{
		return Basis.Rotator();
	}
}

bool ULeapBone::Different(const ULeapBone *Other) const
{
	return (Private->Bone != Other->Private->Bone);
}

bool ULeapBone::Equal(const ULeapBone *Other) const
{
	return (Private->Bone == Other->Private->Bone);
}

ELeapBoneType ConvertBoneType(Leap::Bone::Type Type)
{
	switch(Type)
	{
	case Leap::Bone::TYPE_METACARPAL:
		return ELeapBoneType::TYPE_METACARPAL;
	case Leap::Bone::TYPE_PROXIMAL:
		return ELeapBoneType::TYPE_PROXIMAL;
	case Leap::Bone::TYPE_INTERMEDIATE:
		return ELeapBoneType::TYPE_INTERMEDIATE;
	case Leap::Bone::TYPE_DISTAL:
		return ELeapBoneType::TYPE_DISTAL;
	default:
		return ELeapBoneType::TYPE_ERROR;
	}
}

void ULeapBone::SetBone(const Leap::Bone &Bone)
{
	Private->Bone = Bone;

	Basis = ConvertLeapBasisMatrix(Private->Bone.basis());
	Center = ConvertAndScaleLeapToUE(Private->Bone.center());
	Direction = ConvertLeapToUE(Private->Bone.direction());
	//Orientation = FRotationMatrix::MakeFromZX(PalmNormal*-1.f, Direction).Rotator(); use GetOrientation()
	IsValid = Private->Bone.isValid();
	Length = ScaleLeapToUE(Private->Bone.length());
	NextJoint = ConvertAndScaleLeapToUE(Private->Bone.nextJoint());
	PrevJoint = ConvertAndScaleLeapToUE(Private->Bone.prevJoint());
	Type = ConvertBoneType(Private->Bone.type());
	Width = ScaleLeapToUE(Private->Bone.width());
}