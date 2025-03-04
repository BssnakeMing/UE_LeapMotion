#include "AnimBody/AnimBody.h"

UAnimBody::UAnimBody()
{
	Left = CreateDefaultSubobject<UAnimHand>(TEXT("Left"));
	Right = CreateDefaultSubobject<UAnimHand>(TEXT("Right"));

	Head = CreateDefaultSubobject<UAnimBone>(TEXT("Head"));
}


bool UAnimBody::Enabled()
{
	return Alpha == 1.f;
}

void UAnimBody::SetEnabled(bool Enable)
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
	Left->SetEnabled(Enable);
	Right->SetEnabled(Enable);

	Head->SetEnabled(Enable);
}

void UAnimBody::TranslateBody(FVector Shift)
{
	//Shift all hands
	Left->TranslateHand(Shift);
	Right->TranslateHand(Shift);

	//Shift head
	Head->TranslateBone(Shift);
}

void UAnimBody::ChangeBasis(FRotator PreBase, FRotator PostBase, bool AdjustVectors)
{
	//Change Basis for all hands
	Left->ChangeBasis(PreBase, PostBase, AdjustVectors);
	Right->ChangeBasis(PreBase, PostBase, AdjustVectors);

	//Careful with this tbh...
	Head->ChangeBasis(PreBase, PostBase, AdjustVectors);
}