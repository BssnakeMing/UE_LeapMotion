#include "LeapFinger.h"

#include "LeapBone.h"
#include "LeapInterfaceUtility.h"


class PrivateFinger
{
public:
	ELeapFingerType UEFingerType(Leap::Finger::Type type){
		switch (type){
		case Leap::Finger::Type::TYPE_THUMB:
			return ELeapFingerType::FINGER_TYPE_THUMB;
			break;
		case Leap::Finger::Type::TYPE_INDEX:
			return ELeapFingerType::FINGER_TYPE_INDEX;
			break;
		case Leap::Finger::Type::TYPE_MIDDLE:
			return ELeapFingerType::FINGER_TYPE_MIDDLE;
			break;
		case Leap::Finger::Type::TYPE_RING:
			return ELeapFingerType::FINGER_TYPE_RING;
			break;
		case Leap::Finger::Type::TYPE_PINKY:
			return ELeapFingerType::FINGER_TYPE_PINKY;
			break;
		default:
			UE_LOG(LeapPluginLog, Warning, TEXT("Warning! LeapFingerType, unknown type."));
			return ELeapFingerType::FINGER_TYPE_THUMB;
			break;
		}
	}

	Leap::Finger Finger;
};

ULeapFinger::ULeapFinger(const FObjectInitializer &ObjectInitializer) : ULeapPointable(ObjectInitializer), Private(new PrivateFinger())
{
}

ULeapFinger::~ULeapFinger()
{
	delete Private;
}

ULeapBone *ULeapFinger::Bone(ELeapBoneType mType)
{
	Leap::Bone::Type RType;
	Leap::Bone RBone;
	ULeapBone *Bone;

	Bone = NewObject<ULeapBone>(this, ULeapBone::StaticClass());
	switch(mType)
	{
	case ELeapBoneType::TYPE_METACARPAL:
		RType = Leap::Bone::TYPE_METACARPAL;
		break;
	case ELeapBoneType::TYPE_PROXIMAL:
		RType = Leap::Bone::TYPE_PROXIMAL;
		break;
	case ELeapBoneType::TYPE_INTERMEDIATE:
		RType = Leap::Bone::TYPE_INTERMEDIATE;
		break;
	case ELeapBoneType::TYPE_DISTAL:
		RType = Leap::Bone::TYPE_DISTAL;
		break;
	default:
		RType = Leap::Bone::TYPE_METACARPAL;
		break;
	}
	RBone = Private->Finger.bone(RType);
	Bone->SetBone(RBone);
	return (Bone);
}


void ULeapFinger::SetFinger(const Leap::Finger &Finger)
{
	Private->Finger = Finger;

	SetPointable(Private->Finger);

	//Set convenience bones
	if (!Metacarpal)
	{
		Metacarpal = NewObject<ULeapBone>(this, ULeapBone::StaticClass());
	}
	Metacarpal->SetBone(Private->Finger.bone(Leap::Bone::TYPE_METACARPAL));

	if (!Proximal)
	{
		Proximal = NewObject<ULeapBone>(this, ULeapBone::StaticClass());
	}
	Proximal->SetBone(Private->Finger.bone(Leap::Bone::TYPE_PROXIMAL));

	if (!Intermediate)
	{
		Intermediate = NewObject<ULeapBone>(this, ULeapBone::StaticClass());
	}
	Intermediate->SetBone(Private->Finger.bone(Leap::Bone::TYPE_INTERMEDIATE));

	if (!Distal) 
	{
		Distal = NewObject<ULeapBone>(this, ULeapBone::StaticClass());
	}
	Distal->SetBone(Private->Finger.bone(Leap::Bone::TYPE_DISTAL));

	//Set type
	Type = Private->UEFingerType(Private->Finger.type());
}