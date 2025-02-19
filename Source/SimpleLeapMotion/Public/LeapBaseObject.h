#pragma once

#include "LeapBaseObject.generated.h"

/**
* Optional base class for custom memory management
*/
UCLASS()
class SIMPLELEAPMOTION_API ULeapBaseObject : public UObject
{
	GENERATED_BODY()
public:
	ULeapBaseObject(const FObjectInitializer &ObjectInitializer);
	virtual void CleanupRootReferences() {};
};