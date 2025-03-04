#pragma once

#include "IInputDevice.h"
#include "LeapHMDSnapshot.h"

#include "Leap_NoPI.h"

struct FKey;

/**
* Stores raw controller data and custom toggles
*/
struct LeapControllerData
{
	//Reference to the Leap Controller base
	Leap::Controller LeapController;

	//Public custom controller toggles
	bool bAllowImageEvents = false;
	bool bOptimizeForHMD = false;
	bool bUseGammaCorrection = false;
	bool bImageEventsEnabled = false;
	bool bUseMountOffset = true;
	bool bTimeWarpEnabled = false;	//v 2.0.1 disable timewarp until it works correctly
	float TimeWarpAmountMs = 0.f;	//In milliseconds
	float TimeWarpFactor = 1.f;	//0-1.f magnitude of timewarp applied
	float TimeWarpTween = 1.f;
	LeapHMDSnapshot TimeWarpSnapshot;	//latest timewarp snapshot
};

using FLeapMotionListener = Leap::Listener ;

class FLeapMotionInputDevice : public IInputDevice ,public FLeapMotionListener
{
public:
	FLeapMotionInputDevice(const TSharedRef< FGenericApplicationMessageHandler >& MessageHandler);

	/** Tick the interface (e.g. check for new controllers) */
	virtual void Tick(float DeltaTime) override;

	/** Poll for controller state and send events if needed */
	virtual void SendControllerEvents() override;

	void ParseEvents();

	/** Set which MessageHandler will get the events from SendControllerEvents. */
	virtual void SetMessageHandler(const TSharedRef< FGenericApplicationMessageHandler >& InMessageHandler) override;

	/** Exec handler to allow console commands to be passed through for debugging */
	virtual bool Exec(UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar) override;

	/** IForceFeedbackSystem pass through functions **/
	virtual void SetChannelValue(int32 ControllerId, FForceFeedbackChannelType ChannelType, float Value) override;
	virtual void SetChannelValues(int32 ControllerId, const FForceFeedbackValues &values) override;

	virtual ~FLeapMotionInputDevice();

	TSharedRef< FGenericApplicationMessageHandler > MessageHandler;

	// FLeapMotionListener
public:
	/*
	 * 当控制器对象与 Leap Motion 软件断开连接时调用，或者 Leap Motion 硬件已拔下。
	 * 拔下 Leap Motion 设备时，控制器可以断开连接，此时用户关闭 Leap Motion 软件，或 Leap Motion 软件遇到不可恢复的错误。
	 */
	virtual void onDisconnect(const Leap::Controller&) override;

public:
	/** Main Controller data and settings reference*/
	LeapControllerData ControllerData;
	
	void AddEventDelegate(UObject* EventDelegate);
	void RemoveEventDelegate(UObject* EventDelegate);

private:
	//Private UProperties
	void ClearReferences(UObject* object);
	class ULeapBaseObject* PRoot = nullptr;
	class ULeapHand* PEventHand = nullptr;
	class ULeapFinger* PEventFinger = nullptr;
	class ULeapGesture* PEventGesture = nullptr;
	class ULeapCircleGesture* PEventCircleGesture = nullptr;
	class ULeapKeyTapGesture* PEventKeyTapGesture = nullptr;
	class ULeapScreenTapGesture* PEventScreenTapGesture = nullptr;
	class ULeapSwipeGesture* PEventSwipeGesture = nullptr;
	class ULeapImage* PEventImage1 = nullptr;
	class ULeapImage* PEventImage2 = nullptr;

	ULeapHand* LeftHand = nullptr;
	ULeapHand* RightHand = nullptr;

	class LeapStateData* PastState;			//state handling
	TArray<UObject*> EventDelegates;		//delegate storage
	class HMDSnapshotSamples* HMDSamples;	//timewarp

	//Private utility methods
	void CallFunctionOnDelegates(TFunction< void(UObject*)> InFunction);	//lambda multi-cast convenience wrapper
	bool EmitKeyUpEventForKey(FKey Key, int32 User, bool Repeat);
	bool EmitKeyDownEventForKey(FKey Key, int32 User, bool Repeat);
	bool EmitAnalogInputEventForKey(FKey Key, float Value, int32 User, bool Repeat);
	bool HandClosed(float Strength);
	bool HandPinched(float Strength);
	bool HandForId(int32 CheckId, Leap::HandList Hands, Leap::Hand& ReturnHand);
};