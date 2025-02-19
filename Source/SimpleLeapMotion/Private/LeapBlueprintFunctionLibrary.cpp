#pragma once

#include "LeapBlueprintFunctionLibrary.h"

#include "IXRTrackingSystem.h"

#include "FLeapMotionInputDevice.h"
#include "IHeadMountedDisplay.h"
#include "ILeapMotionPlugin.h"

#include "Engine/Engine.h"



ULeapBlueprintFunctionLibrary::ULeapBlueprintFunctionLibrary(const class FObjectInitializer& Initializer)
	: Super(Initializer)
{

}

void ULeapBlueprintFunctionLibrary::EnableTimeWarp(bool Enable /*= true*/, float Factor /*=1.f*/, float Tween)
{
	if (ILeapMotionPlugin::IsAvailable())
	{
		LeapControllerData* Data = ILeapMotionPlugin::Get().ControllerData();
		if (Data != nullptr)
		{
			Data->bTimeWarpEnabled = Enable;
			Data->TimeWarpFactor = Factor;
			Data->TimeWarpTween = Tween;
		}
	}
}

void ULeapBlueprintFunctionLibrary::GetHMDFieldOfView(float& OutHFOVInDegrees, float& OutVFOVInDegrees)
{
	float HFOV, VFOV;
	HFOV = VFOV = 0.0f;
	IHeadMountedDisplay* HMD = GEngine && GEngine->XRSystem.IsValid() ? GEngine->XRSystem->GetHMDDevice() : nullptr;
	if (HMD)
	{
		HMD->GetFieldOfView(HFOV, VFOV);
	}
	
	OutHFOVInDegrees = HFOV;
	OutVFOVInDegrees = VFOV;
}

void ULeapBlueprintFunctionLibrary::GetTimewarpStats(bool& OutEnabled, float& OutFactor, float& OutTimeWarpAmountMs)
{
	if (ILeapMotionPlugin::IsAvailable())
	{
		LeapControllerData* Data = ILeapMotionPlugin::Get().ControllerData();
		if (Data != nullptr)
		{
			OutTimeWarpAmountMs = Data->TimeWarpAmountMs;
			OutFactor = Data->TimeWarpFactor;
			OutEnabled = Data->bTimeWarpEnabled;
		}
	}
}


