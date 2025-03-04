#include "LeapHandList.h"

#include "Leap_NoPI.h"

#include "LeapHand.h"


class PrivateHandList
{
public:
	Leap::HandList Hands;
};

ULeapHandList::ULeapHandList(const FObjectInitializer &ObjectInitializer) : UObject(ObjectInitializer), Private(new PrivateHandList())
{
}

ULeapHandList::~ULeapHandList()
{
	delete Private;
}

ULeapHand* ULeapHandList::Frontmost()
{
	if (PFrontmost == nullptr)
	{
		PFrontmost = NewObject<ULeapHand>(this);
	}
	PFrontmost->SetHand(Private->Hands.frontmost());
	return (PFrontmost);
}

ULeapHand* ULeapHandList::Leftmost()
{
	if (PLeftmost == nullptr)
	{
		PLeftmost = NewObject<ULeapHand>(this);
	}
	PLeftmost->SetHand(Private->Hands.leftmost());
	return (PLeftmost);
}

ULeapHand* ULeapHandList::Rightmost()
{
	if (PRightmost == nullptr)
	{
		PRightmost = NewObject<ULeapHand>(this);
	}
	PRightmost->SetHand(Private->Hands.rightmost());
	return (PRightmost);
}

ULeapHand* ULeapHandList::GetIndex(int32 Index)
{
	if (PIndexHand == nullptr)
	{
		PIndexHand = NewObject<ULeapHand>(this);
	}
	PIndexHand->SetHand(Private->Hands[Index]);
	return (PIndexHand);
}

void ULeapHandList::SetHandList(const Leap::HandList &Handlist)
{
	Private->Hands = Handlist;

	Count = Private->Hands.count();
	IsEmpty = Private->Hands.isEmpty();
}