// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "ILeapMotionPlugin.h"


class FSimpleLeapMotionModule : public ILeapMotionPlugin
{
public:
	virtual TSharedPtr< class IInputDevice > CreateInputDevice(const TSharedRef< FGenericApplicationMessageHandler >& InMessageHandler);

	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	virtual struct LeapControllerData* ControllerData() override;
	virtual void AddEventDelegate(UObject* EventDelegate) override;
	virtual void RemoveEventDelegate(UObject* EventDelegate) override;

	bool IsActive();

	TSharedPtr< class FLeapMotionInputDevice > LeapInputDevice;

private:
	bool bActive = false;
};
