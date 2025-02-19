// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleLeapMotionModule.h"

#include "FLeapMotionInputDevice.h"

#define LOCTEXT_NAMESPACE "FSimpleLeapMontionModule"
#define PLUGIN_VERSION "2.0.0"

void FSimpleLeapMotionModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	IModularFeatures::Get().RegisterModularFeature(IInputDeviceModule::GetModularFeatureName(), this);
}

void FSimpleLeapMotionModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	IModularFeatures::Get().UnregisterModularFeature(IInputDeviceModule::GetModularFeatureName(), this);
}


LeapControllerData* FSimpleLeapMotionModule::ControllerData()
{
	if (bActive) 
	{
		return &(LeapInputDevice->ControllerData);
	}
	else
	{
		return nullptr;
	}
}

void FSimpleLeapMotionModule::AddEventDelegate(UObject* EventDelegate)
{
	if (LeapInputDevice)
	{
		LeapInputDevice->AddEventDelegate(EventDelegate);
	}
}


void FSimpleLeapMotionModule::RemoveEventDelegate(UObject* EventDelegate)
{
	if (LeapInputDevice)
	{
		LeapInputDevice->RemoveEventDelegate(EventDelegate);
	}
}

TSharedPtr< class IInputDevice > FSimpleLeapMotionModule::CreateInputDevice(const TSharedRef< FGenericApplicationMessageHandler >& InMessageHandler)
{
	UE_LOG(LeapPluginLog, Log, TEXT("CreateInputDevice LeapPlugin version %s"), TEXT(PLUGIN_VERSION));

	//Expose all of our input mapping keys to the engine
	EKeys::AddKey(FKeyDetails(EKeysLeap::LeapLeftPinch, LOCTEXT("LeapLeftPinch", "Leap Left Pinch"), FKeyDetails::GamepadKey));
	EKeys::AddKey(FKeyDetails(EKeysLeap::LeapLeftGrab, LOCTEXT("LeapLeftGrab", "Leap Left Grab"), FKeyDetails::GamepadKey));

	EKeys::AddKey(FKeyDetails(EKeysLeap::LeapLeftPalmPitch, LOCTEXT("LeapLeftPalmPitch", "Leap Left Palm Pitch"), FKeyDetails::Axis1D));
	EKeys::AddKey(FKeyDetails(EKeysLeap::LeapLeftPalmYaw, LOCTEXT("LeapLeftPalmYaw", "Leap Left Palm Yaw"), FKeyDetails::Axis1D));
	EKeys::AddKey(FKeyDetails(EKeysLeap::LeapLeftPalmRoll, LOCTEXT("LeapLeftPalmRoll", "Leap Left Palm Roll"), FKeyDetails::Axis1D));

	EKeys::AddKey(FKeyDetails(EKeysLeap::LeapRightPinch, LOCTEXT("LeapRightPinch", "Leap Right Pinch"), FKeyDetails::GamepadKey));
	EKeys::AddKey(FKeyDetails(EKeysLeap::LeapRightGrab, LOCTEXT("LeapRightGrab", "Leap Right Grab"), FKeyDetails::GamepadKey));

	EKeys::AddKey(FKeyDetails(EKeysLeap::LeapRightPalmPitch, LOCTEXT("LeapRightPalmPitch", "Leap Right Palm Pitch"), FKeyDetails::Axis1D));
	EKeys::AddKey(FKeyDetails(EKeysLeap::LeapRightPalmYaw, LOCTEXT("LeapRightPalmYaw", "Leap Right Palm Yaw"), FKeyDetails::Axis1D));
	EKeys::AddKey(FKeyDetails(EKeysLeap::LeapRightPalmRoll, LOCTEXT("LeapRightPalmRoll", "Leap Right Palm Roll"), FKeyDetails::Axis1D));

	FSimpleLeapMotionModule::LeapInputDevice = MakeShareable(new FLeapMotionInputDevice(InMessageHandler));

	bActive = true;

	return TSharedPtr< class IInputDevice >(LeapInputDevice);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSimpleLeapMotionModule, SimpleLeapMotion)