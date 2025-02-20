// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleLeapMotion/Public/LeapEventInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapEventInterface() {}
// Cross Module References
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapEventInterface_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapEventInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_SimpleLeapMotion();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapCircleGesture_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapGesture_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapKeyTapGesture_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapFinger_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapHand_NoRegister();
	SIMPLELEAPMOTION_API UEnum* Z_Construct_UEnum_SimpleLeapMotion_ELeapHandType();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapImage_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapScreenTapGesture_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapSwipeGesture_NoRegister();
// End Cross Module References
	void ILeapEventInterface::CircleGestureDetected(ULeapCircleGesture* Gesture)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CircleGestureDetected instead.");
	}
	void ILeapEventInterface::FingerCountChanged(int32 Count)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_FingerCountChanged instead.");
	}
	void ILeapEventInterface::GestureDetected(ULeapGesture* Gesture)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GestureDetected instead.");
	}
	void ILeapEventInterface::HandCountChanged(int32 Count)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HandCountChanged instead.");
	}
	void ILeapEventInterface::KeyTapGestureDetected(ULeapKeyTapGesture* Gesture)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_KeyTapGestureDetected instead.");
	}
	void ILeapEventInterface::LeapFingerMoved(ULeapFinger* Finger)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LeapFingerMoved instead.");
	}
	void ILeapEventInterface::LeapFrontFingerTouch(ULeapFinger* Finger)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LeapFrontFingerTouch instead.");
	}
	void ILeapEventInterface::LeapFrontMostFingerMoved(ULeapFinger* Finger)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LeapFrontMostFingerMoved instead.");
	}
	void ILeapEventInterface::LeapHandGrabbed(float Strength, ULeapHand* Hand)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LeapHandGrabbed instead.");
	}
	void ILeapEventInterface::LeapHandGrabbing(float Strength, ULeapHand* Hand)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LeapHandGrabbing instead.");
	}
	void ILeapEventInterface::LeapHandMoved(ULeapHand* Hand)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LeapHandMoved instead.");
	}
	void ILeapEventInterface::LeapHandPinched(float Strength, ULeapHand* Hand)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LeapHandPinched instead.");
	}
	void ILeapEventInterface::LeapHandPinching(float Strength, ULeapHand* Hand)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LeapHandPinching instead.");
	}
	void ILeapEventInterface::LeapHandReleased(float Strength, ULeapHand* Hand)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LeapHandReleased instead.");
	}
	void ILeapEventInterface::LeapHandRemoved(ELeapHandType HandType, ULeapHand* Hand)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LeapHandRemoved instead.");
	}
	void ILeapEventInterface::LeapHandUnpinched(float Strength, ULeapHand* Hand)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LeapHandUnpinched instead.");
	}
	void ILeapEventInterface::LeapLeftHandMoved(ULeapHand* Hand)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LeapLeftHandMoved instead.");
	}
	void ILeapEventInterface::LeapLeftMostFingerMoved(ULeapFinger* Finger)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LeapLeftMostFingerMoved instead.");
	}
	void ILeapEventInterface::LeapMotionOnDisconnect()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LeapMotionOnDisconnect instead.");
	}
	void ILeapEventInterface::LeapRightHandMoved(ULeapHand* Hand)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LeapRightHandMoved instead.");
	}
	void ILeapEventInterface::LeapRightMostFingerMoved(ULeapFinger* Finger)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LeapRightMostFingerMoved instead.");
	}
	void ILeapEventInterface::RawImageReceived(UTexture2D* Texture, ULeapImage* Image)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RawImageReceived instead.");
	}
	void ILeapEventInterface::ScreenTapGestureDetected(ULeapScreenTapGesture* Gesture)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ScreenTapGestureDetected instead.");
	}
	void ILeapEventInterface::SwipeGestureDetected(ULeapSwipeGesture* Gesture)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SwipeGestureDetected instead.");
	}
	void ULeapEventInterface::StaticRegisterNativesULeapEventInterface()
	{
	}
	struct Z_Construct_UFunction_ULeapEventInterface_CircleGestureDetected_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Gesture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapEventInterface_CircleGestureDetected_Statics::NewProp_Gesture = { "Gesture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapEventInterface_eventCircleGestureDetected_Parms, Gesture), Z_Construct_UClass_ULeapCircleGesture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapEventInterface_CircleGestureDetected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapEventInterface_CircleGestureDetected_Statics::NewProp_Gesture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapEventInterface_CircleGestureDetected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Interface Event" },
		{ "Comment", "/**\n\x09* Event triggered when a circle gesture is detected.  Gestures need to be enabled in the LeapController to receive their events.\n\x09* \xe6\xa3\x80\xe6\xb5\x8b\xe5\x88\xb0\xe5\x9c\x86\xe5\x9c\x88\xe6\x89\x8b\xe5\x8a\xbf\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82 \xe9\x9c\x80\xe8\xa6\x81\xe5\x9c\xa8 LeapController \xe4\xb8\xad\xe5\x90\xaf\xe7\x94\xa8\xe6\x89\x8b\xe5\x8a\xbf\xe6\x89\x8d\xe8\x83\xbd\xe6\x8e\xa5\xe6\x94\xb6\xe5\x85\xb6\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\x09*\n\x09* @param Gesture\x09\x09""circle gesture object detected, can be queried to get details of the event such as radius\n\x09*/" },
		{ "Keywords", "gesture circle detect" },
		{ "ModuleRelativePath", "Public/LeapEventInterface.h" },
		{ "ToolTip", "Event triggered when a circle gesture is detected.  Gestures need to be enabled in the LeapController to receive their events.\n\xe6\xa3\x80\xe6\xb5\x8b\xe5\x88\xb0\xe5\x9c\x86\xe5\x9c\x88\xe6\x89\x8b\xe5\x8a\xbf\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82 \xe9\x9c\x80\xe8\xa6\x81\xe5\x9c\xa8 LeapController \xe4\xb8\xad\xe5\x90\xaf\xe7\x94\xa8\xe6\x89\x8b\xe5\x8a\xbf\xe6\x89\x8d\xe8\x83\xbd\xe6\x8e\xa5\xe6\x94\xb6\xe5\x85\xb6\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\n@param Gesture                circle gesture object detected, can be queried to get details of the event such as radius" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapEventInterface_CircleGestureDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapEventInterface, nullptr, "CircleGestureDetected", nullptr, nullptr, sizeof(LeapEventInterface_eventCircleGestureDetected_Parms), Z_Construct_UFunction_ULeapEventInterface_CircleGestureDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_CircleGestureDetected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapEventInterface_CircleGestureDetected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_CircleGestureDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapEventInterface_CircleGestureDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapEventInterface_CircleGestureDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapEventInterface_FingerCountChanged_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULeapEventInterface_FingerCountChanged_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapEventInterface_eventFingerCountChanged_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapEventInterface_FingerCountChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapEventInterface_FingerCountChanged_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapEventInterface_FingerCountChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Interface Event" },
		{ "Comment", "/**\n\x09* Event triggered when number of fingers changed from a previous frame.\n\x09* \xe5\xbd\x93\xe6\x89\x8b\xe6\x8c\x87\xe6\x95\xb0\xe9\x87\x8f\xe4\xb8\x8e\xe4\xb8\x8a\xe4\xb8\x80\xe5\xb8\xa7\xe7\x9b\xb8\xe6\xaf\x94\xe5\x8f\x91\xe7\x94\x9f\xe5\x8f\x98\xe5\x8c\x96\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\x09*\n\x09* @param Count\x09\x09Number of fingers visible\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "FingerCountChanged" },
		{ "Keywords", "finger count" },
		{ "ModuleRelativePath", "Public/LeapEventInterface.h" },
		{ "ToolTip", "Event triggered when number of fingers changed from a previous frame.\n\xe5\xbd\x93\xe6\x89\x8b\xe6\x8c\x87\xe6\x95\xb0\xe9\x87\x8f\xe4\xb8\x8e\xe4\xb8\x8a\xe4\xb8\x80\xe5\xb8\xa7\xe7\x9b\xb8\xe6\xaf\x94\xe5\x8f\x91\xe7\x94\x9f\xe5\x8f\x98\xe5\x8c\x96\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\n@param Count          Number of fingers visible" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapEventInterface_FingerCountChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapEventInterface, nullptr, "FingerCountChanged", nullptr, nullptr, sizeof(LeapEventInterface_eventFingerCountChanged_Parms), Z_Construct_UFunction_ULeapEventInterface_FingerCountChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_FingerCountChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapEventInterface_FingerCountChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_FingerCountChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapEventInterface_FingerCountChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapEventInterface_FingerCountChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapEventInterface_GestureDetected_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Gesture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapEventInterface_GestureDetected_Statics::NewProp_Gesture = { "Gesture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapEventInterface_eventGestureDetected_Parms, Gesture), Z_Construct_UClass_ULeapGesture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapEventInterface_GestureDetected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapEventInterface_GestureDetected_Statics::NewProp_Gesture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapEventInterface_GestureDetected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Interface Event" },
		{ "Comment", "/**\n\x09* Event triggered when any gesture is detected. Gestures need to be enabled in the LeapController to receive their events.\n\x09* \xe6\xa3\x80\xe6\xb5\x8b\xe5\x88\xb0\xe4\xbb\xbb\xe4\xbd\x95\xe6\x89\x8b\xe5\x8a\xbf\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\xe9\x9c\x80\xe8\xa6\x81\xe5\x9c\xa8 LeapController \xe4\xb8\xad\xe5\x90\xaf\xe7\x94\xa8\xe6\x89\x8b\xe5\x8a\xbf\xe6\x89\x8d\xe8\x83\xbd\xe6\x8e\xa5\xe6\x94\xb6\xe5\x85\xb6\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\x09*\n\x09* @param Gesture\x09\x09gesture object detected, can be cast to a sub-class for specific methods\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "GestureDetected" },
		{ "Keywords", "gesture detect" },
		{ "ModuleRelativePath", "Public/LeapEventInterface.h" },
		{ "ToolTip", "Event triggered when any gesture is detected. Gestures need to be enabled in the LeapController to receive their events.\n\xe6\xa3\x80\xe6\xb5\x8b\xe5\x88\xb0\xe4\xbb\xbb\xe4\xbd\x95\xe6\x89\x8b\xe5\x8a\xbf\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\xe9\x9c\x80\xe8\xa6\x81\xe5\x9c\xa8 LeapController \xe4\xb8\xad\xe5\x90\xaf\xe7\x94\xa8\xe6\x89\x8b\xe5\x8a\xbf\xe6\x89\x8d\xe8\x83\xbd\xe6\x8e\xa5\xe6\x94\xb6\xe5\x85\xb6\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\n@param Gesture                gesture object detected, can be cast to a sub-class for specific methods" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapEventInterface_GestureDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapEventInterface, nullptr, "GestureDetected", nullptr, nullptr, sizeof(LeapEventInterface_eventGestureDetected_Parms), Z_Construct_UFunction_ULeapEventInterface_GestureDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_GestureDetected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapEventInterface_GestureDetected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_GestureDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapEventInterface_GestureDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapEventInterface_GestureDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapEventInterface_HandCountChanged_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULeapEventInterface_HandCountChanged_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapEventInterface_eventHandCountChanged_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapEventInterface_HandCountChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapEventInterface_HandCountChanged_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapEventInterface_HandCountChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Interface Event" },
		{ "Comment", "/**\n\x09* Event triggered when number of hands changed from a previous frame.\n\x09* \xe5\xbd\x93\xe6\x89\x8b\xe7\x9a\x84\xe6\x95\xb0\xe9\x87\x8f\xe4\xb8\x8e\xe5\x89\x8d\xe4\xb8\x80\xe5\xb8\xa7\xe7\x9b\xb8\xe6\xaf\x94\xe5\x8f\x91\xe7\x94\x9f\xe5\x8f\x98\xe5\x8c\x96\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\x09*\n\x09* @param Count\x09\x09Number of hands visible\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "HandCountChanged" },
		{ "Keywords", "hand count" },
		{ "ModuleRelativePath", "Public/LeapEventInterface.h" },
		{ "ToolTip", "Event triggered when number of hands changed from a previous frame.\n\xe5\xbd\x93\xe6\x89\x8b\xe7\x9a\x84\xe6\x95\xb0\xe9\x87\x8f\xe4\xb8\x8e\xe5\x89\x8d\xe4\xb8\x80\xe5\xb8\xa7\xe7\x9b\xb8\xe6\xaf\x94\xe5\x8f\x91\xe7\x94\x9f\xe5\x8f\x98\xe5\x8c\x96\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\n@param Count          Number of hands visible" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapEventInterface_HandCountChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapEventInterface, nullptr, "HandCountChanged", nullptr, nullptr, sizeof(LeapEventInterface_eventHandCountChanged_Parms), Z_Construct_UFunction_ULeapEventInterface_HandCountChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_HandCountChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapEventInterface_HandCountChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_HandCountChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapEventInterface_HandCountChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapEventInterface_HandCountChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapEventInterface_KeyTapGestureDetected_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Gesture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapEventInterface_KeyTapGestureDetected_Statics::NewProp_Gesture = { "Gesture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapEventInterface_eventKeyTapGestureDetected_Parms, Gesture), Z_Construct_UClass_ULeapKeyTapGesture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapEventInterface_KeyTapGestureDetected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapEventInterface_KeyTapGestureDetected_Statics::NewProp_Gesture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapEventInterface_KeyTapGestureDetected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Interface Event" },
		{ "Comment", "/**\n\x09* Event triggered when a key tap gesture is detected.  Gestures need to be enabled in the LeapController to receive their events.\n\x09* \xe6\xa3\x80\xe6\xb5\x8b\xe5\x88\xb0\xe6\x8c\x89\xe9\x94\xae\xe6\x89\x8b\xe5\x8a\xbf\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82 \xe9\x9c\x80\xe8\xa6\x81\xe5\x9c\xa8 LeapController \xe4\xb8\xad\xe5\x90\xaf\xe7\x94\xa8\xe6\x89\x8b\xe5\x8a\xbf\xe6\x89\x8d\xe8\x83\xbd\xe6\x8e\xa5\xe6\x94\xb6\xe5\x85\xb6\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\x09*\n\x09* @param Gesture\x09\x09key tap gesture object detected, can be queried to get details of the event\n\x09*/" },
		{ "Keywords", "gesture key tap detect" },
		{ "ModuleRelativePath", "Public/LeapEventInterface.h" },
		{ "ToolTip", "Event triggered when a key tap gesture is detected.  Gestures need to be enabled in the LeapController to receive their events.\n\xe6\xa3\x80\xe6\xb5\x8b\xe5\x88\xb0\xe6\x8c\x89\xe9\x94\xae\xe6\x89\x8b\xe5\x8a\xbf\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82 \xe9\x9c\x80\xe8\xa6\x81\xe5\x9c\xa8 LeapController \xe4\xb8\xad\xe5\x90\xaf\xe7\x94\xa8\xe6\x89\x8b\xe5\x8a\xbf\xe6\x89\x8d\xe8\x83\xbd\xe6\x8e\xa5\xe6\x94\xb6\xe5\x85\xb6\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\n@param Gesture                key tap gesture object detected, can be queried to get details of the event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapEventInterface_KeyTapGestureDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapEventInterface, nullptr, "KeyTapGestureDetected", nullptr, nullptr, sizeof(LeapEventInterface_eventKeyTapGestureDetected_Parms), Z_Construct_UFunction_ULeapEventInterface_KeyTapGestureDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_KeyTapGestureDetected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapEventInterface_KeyTapGestureDetected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_KeyTapGestureDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapEventInterface_KeyTapGestureDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapEventInterface_KeyTapGestureDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapEventInterface_LeapFingerMoved_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Finger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapEventInterface_LeapFingerMoved_Statics::NewProp_Finger = { "Finger", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapEventInterface_eventLeapFingerMoved_Parms, Finger), Z_Construct_UClass_ULeapFinger_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapEventInterface_LeapFingerMoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapEventInterface_LeapFingerMoved_Statics::NewProp_Finger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapEventInterface_LeapFingerMoved_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Interface Event" },
		{ "Comment", "/**\n\x09* Event triggered for each finger that is visible and tracked.\n\x09* \xe4\xb8\xba\xe6\xaf\x8f\xe4\xb8\xaa\xe5\x8f\xaf\xe8\xa7\x81\xe4\xb8\x94\xe8\xa2\xab\xe8\xbf\xbd\xe8\xb8\xaa\xe7\x9a\x84\xe6\x89\x8b\xe6\x8c\x87\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\x09*\n\x09* @param Finger\x09\x09reference to LeapFinger object containing data for the tracked finger\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "FingerMoved" },
		{ "Keywords", "finger moved" },
		{ "ModuleRelativePath", "Public/LeapEventInterface.h" },
		{ "ToolTip", "Event triggered for each finger that is visible and tracked.\n\xe4\xb8\xba\xe6\xaf\x8f\xe4\xb8\xaa\xe5\x8f\xaf\xe8\xa7\x81\xe4\xb8\x94\xe8\xa2\xab\xe8\xbf\xbd\xe8\xb8\xaa\xe7\x9a\x84\xe6\x89\x8b\xe6\x8c\x87\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\n@param Finger         reference to LeapFinger object containing data for the tracked finger" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapEventInterface_LeapFingerMoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapEventInterface, nullptr, "LeapFingerMoved", nullptr, nullptr, sizeof(LeapEventInterface_eventLeapFingerMoved_Parms), Z_Construct_UFunction_ULeapEventInterface_LeapFingerMoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_LeapFingerMoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapEventInterface_LeapFingerMoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_LeapFingerMoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapEventInterface_LeapFingerMoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapEventInterface_LeapFingerMoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapEventInterface_LeapFrontFingerTouch_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Finger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapEventInterface_LeapFrontFingerTouch_Statics::NewProp_Finger = { "Finger", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapEventInterface_eventLeapFrontFingerTouch_Parms, Finger), Z_Construct_UClass_ULeapFinger_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapEventInterface_LeapFrontFingerTouch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapEventInterface_LeapFrontFingerTouch_Statics::NewProp_Finger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapEventInterface_LeapFrontFingerTouch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Interface Event" },
		{ "Comment", "/**\n\x09* Event triggered only for the frontmost finger when it is touching, defined as\n\x09* TouchDistance < 0, a value proportional to the distance between this Pointable object and the adaptive touch plane.\n\x09* \xe4\xbb\x85\xe5\x9c\xa8\xe6\x9c\x80\xe5\x89\x8d\xe9\x9d\xa2\xe7\x9a\x84\xe6\x89\x8b\xe6\x8c\x87\xe8\xa7\xa6\xe6\x91\xb8\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xe4\xba\x8b\xe4\xbb\xb6\xef\xbc\x8c\xe5\xae\x9a\xe4\xb9\x89\xe4\xb8\xba TouchDistance < 0\xef\xbc\x8c\xe8\xaf\xa5\xe5\x80\xbc\xe4\xb8\x8e\xe6\xad\xa4 Pointable \xe5\xaf\xb9\xe8\xb1\xa1\xe4\xb8\x8e\xe8\x87\xaa\xe9\x80\x82\xe5\xba\x94\xe8\xa7\xa6\xe6\x8e\xa7\xe5\xb9\xb3\xe9\x9d\xa2\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe8\xb7\x9d\xe7\xa6\xbb\xe6\x88\x90\xe6\xad\xa3\xe6\xaf\x94\xe3\x80\x82\n\x09*\n\x09* @param Finger\x09\x09reference to LeapFinger object containing data for the tracked finger\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "LeapFrontFingerTouch" },
		{ "Keywords", "finger touched" },
		{ "ModuleRelativePath", "Public/LeapEventInterface.h" },
		{ "ToolTip", "Event triggered only for the frontmost finger when it is touching, defined as\nTouchDistance < 0, a value proportional to the distance between this Pointable object and the adaptive touch plane.\n\xe4\xbb\x85\xe5\x9c\xa8\xe6\x9c\x80\xe5\x89\x8d\xe9\x9d\xa2\xe7\x9a\x84\xe6\x89\x8b\xe6\x8c\x87\xe8\xa7\xa6\xe6\x91\xb8\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xe4\xba\x8b\xe4\xbb\xb6\xef\xbc\x8c\xe5\xae\x9a\xe4\xb9\x89\xe4\xb8\xba TouchDistance < 0\xef\xbc\x8c\xe8\xaf\xa5\xe5\x80\xbc\xe4\xb8\x8e\xe6\xad\xa4 Pointable \xe5\xaf\xb9\xe8\xb1\xa1\xe4\xb8\x8e\xe8\x87\xaa\xe9\x80\x82\xe5\xba\x94\xe8\xa7\xa6\xe6\x8e\xa7\xe5\xb9\xb3\xe9\x9d\xa2\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe8\xb7\x9d\xe7\xa6\xbb\xe6\x88\x90\xe6\xad\xa3\xe6\xaf\x94\xe3\x80\x82\n\n@param Finger         reference to LeapFinger object containing data for the tracked finger" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapEventInterface_LeapFrontFingerTouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapEventInterface, nullptr, "LeapFrontFingerTouch", nullptr, nullptr, sizeof(LeapEventInterface_eventLeapFrontFingerTouch_Parms), Z_Construct_UFunction_ULeapEventInterface_LeapFrontFingerTouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_LeapFrontFingerTouch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapEventInterface_LeapFrontFingerTouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_LeapFrontFingerTouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapEventInterface_LeapFrontFingerTouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapEventInterface_LeapFrontFingerTouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapEventInterface_LeapFrontMostFingerMoved_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Finger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapEventInterface_LeapFrontMostFingerMoved_Statics::NewProp_Finger = { "Finger", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapEventInterface_eventLeapFrontMostFingerMoved_Parms, Finger), Z_Construct_UClass_ULeapFinger_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapEventInterface_LeapFrontMostFingerMoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapEventInterface_LeapFrontMostFingerMoved_Statics::NewProp_Finger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapEventInterface_LeapFrontMostFingerMoved_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Interface Event" },
		{ "Comment", "/**\n\x09* Event triggered for the finger that is frontmost from the perspective of the leap (X Positive) for each visible hand\n\x09* \xe4\xb8\xba\xe6\xaf\x8f\xe5\x8f\xaa\xe5\x8f\xaf\xe8\xa7\x81\xe6\x89\x8b\xe4\xb8\xad\xe4\xbb\x8e Leap \xe8\xa7\x86\xe8\xa7\x92\xe7\x9c\x8b\xe6\x9c\x80\xe9\x9d\xa0\xe5\x89\x8d\xe7\x9a\x84\xe6\x89\x8b\xe6\x8c\x87\xef\xbc\x88X \xe8\xbd\xb4\xe6\xad\xa3\xe6\x96\xb9\xe5\x90\x91\xef\xbc\x89\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\x09*\n\x09* @param Finger\x09\x09reference to LeapFinger object containing data for the tracked finger\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "FrontFingerMoved" },
		{ "Keywords", "finger front most moved" },
		{ "ModuleRelativePath", "Public/LeapEventInterface.h" },
		{ "ToolTip", "Event triggered for the finger that is frontmost from the perspective of the leap (X Positive) for each visible hand\n\xe4\xb8\xba\xe6\xaf\x8f\xe5\x8f\xaa\xe5\x8f\xaf\xe8\xa7\x81\xe6\x89\x8b\xe4\xb8\xad\xe4\xbb\x8e Leap \xe8\xa7\x86\xe8\xa7\x92\xe7\x9c\x8b\xe6\x9c\x80\xe9\x9d\xa0\xe5\x89\x8d\xe7\x9a\x84\xe6\x89\x8b\xe6\x8c\x87\xef\xbc\x88X \xe8\xbd\xb4\xe6\xad\xa3\xe6\x96\xb9\xe5\x90\x91\xef\xbc\x89\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\n@param Finger         reference to LeapFinger object containing data for the tracked finger" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapEventInterface_LeapFrontMostFingerMoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapEventInterface, nullptr, "LeapFrontMostFingerMoved", nullptr, nullptr, sizeof(LeapEventInterface_eventLeapFrontMostFingerMoved_Parms), Z_Construct_UFunction_ULeapEventInterface_LeapFrontMostFingerMoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_LeapFrontMostFingerMoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapEventInterface_LeapFrontMostFingerMoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_LeapFrontMostFingerMoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapEventInterface_LeapFrontMostFingerMoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapEventInterface_LeapFrontMostFingerMoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapEventInterface_LeapHandGrabbed_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULeapEventInterface_LeapHandGrabbed_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapEventInterface_eventLeapHandGrabbed_Parms, Strength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapEventInterface_LeapHandGrabbed_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapEventInterface_eventLeapHandGrabbed_Parms, Hand), Z_Construct_UClass_ULeapHand_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapEventInterface_LeapHandGrabbed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapEventInterface_LeapHandGrabbed_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapEventInterface_LeapHandGrabbed_Statics::NewProp_Hand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapEventInterface_LeapHandGrabbed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Interface Event" },
		{ "Comment", "/**\n\x09* Event triggered when the given hand has grabbed stronger than the grab trigger (grab strength>=0.5)\n\x09* \xe5\xbd\x93\xe7\xbb\x99\xe5\xae\x9a\xe7\x9a\x84\xe6\x89\x8b\xe7\x9a\x84\xe6\x8a\x93\xe5\x8f\x96\xe5\x8a\x9b\xe5\xba\xa6\xe8\xb6\x85\xe8\xbf\x87\xe6\x8a\x93\xe5\x8f\x96\xe8\xa7\xa6\xe5\x8f\x91\xe5\x99\xa8\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xef\xbc\x88\xe6\x8a\x93\xe5\x8f\x96\xe5\x8a\x9b\xe5\xba\xa6 >= 0.5\xef\xbc\x89\n\x09*\n\x09* @param Strength\x09grabbing strength from 0-1.0 \xe6\x8a\x93\xe5\x8f\x96\xe5\x8a\x9b\xe5\xba\xa6\n\x09* @param Hand\x09\x09reference to LeapHand object containing data for the tracked hand\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "HandGrabbed" },
		{ "Keywords", "hand grab" },
		{ "ModuleRelativePath", "Public/LeapEventInterface.h" },
		{ "ToolTip", "Event triggered when the given hand has grabbed stronger than the grab trigger (grab strength>=0.5)\n\xe5\xbd\x93\xe7\xbb\x99\xe5\xae\x9a\xe7\x9a\x84\xe6\x89\x8b\xe7\x9a\x84\xe6\x8a\x93\xe5\x8f\x96\xe5\x8a\x9b\xe5\xba\xa6\xe8\xb6\x85\xe8\xbf\x87\xe6\x8a\x93\xe5\x8f\x96\xe8\xa7\xa6\xe5\x8f\x91\xe5\x99\xa8\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xef\xbc\x88\xe6\x8a\x93\xe5\x8f\x96\xe5\x8a\x9b\xe5\xba\xa6 >= 0.5\xef\xbc\x89\n\n@param Strength       grabbing strength from 0-1.0 \xe6\x8a\x93\xe5\x8f\x96\xe5\x8a\x9b\xe5\xba\xa6\n@param Hand           reference to LeapHand object containing data for the tracked hand" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapEventInterface_LeapHandGrabbed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapEventInterface, nullptr, "LeapHandGrabbed", nullptr, nullptr, sizeof(LeapEventInterface_eventLeapHandGrabbed_Parms), Z_Construct_UFunction_ULeapEventInterface_LeapHandGrabbed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_LeapHandGrabbed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapEventInterface_LeapHandGrabbed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_LeapHandGrabbed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapEventInterface_LeapHandGrabbed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapEventInterface_LeapHandGrabbed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapEventInterface_LeapHandGrabbing_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULeapEventInterface_LeapHandGrabbing_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapEventInterface_eventLeapHandGrabbing_Parms, Strength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapEventInterface_LeapHandGrabbing_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapEventInterface_eventLeapHandGrabbing_Parms, Hand), Z_Construct_UClass_ULeapHand_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapEventInterface_LeapHandGrabbing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapEventInterface_LeapHandGrabbing_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapEventInterface_LeapHandGrabbing_Statics::NewProp_Hand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapEventInterface_LeapHandGrabbing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Interface Event" },
		{ "Comment", "/**\n\x09* Event triggered continuously when the given hand has a grab strength greater than 0.5\n\x09* \xe5\xbd\x93\xe7\xbb\x99\xe5\xae\x9a\xe7\x9a\x84\xe6\x89\x8b\xe7\x9a\x84\xe6\x8a\x93\xe5\x8f\x96\xe5\x8a\x9b\xe5\xba\xa6\xe5\xa4\xa7\xe4\xba\x8e 0.5 \xe6\x97\xb6\xe6\x8c\x81\xe7\xbb\xad\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\x09*\n\x09* @param Strength\x09grabbing strength from 0-1.0\n\x09* @param Hand\x09\x09reference to LeapHand object containing data for the tracked hand\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "HandGrabbing" },
		{ "Keywords", "hand grab" },
		{ "ModuleRelativePath", "Public/LeapEventInterface.h" },
		{ "ToolTip", "Event triggered continuously when the given hand has a grab strength greater than 0.5\n\xe5\xbd\x93\xe7\xbb\x99\xe5\xae\x9a\xe7\x9a\x84\xe6\x89\x8b\xe7\x9a\x84\xe6\x8a\x93\xe5\x8f\x96\xe5\x8a\x9b\xe5\xba\xa6\xe5\xa4\xa7\xe4\xba\x8e 0.5 \xe6\x97\xb6\xe6\x8c\x81\xe7\xbb\xad\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\n@param Strength       grabbing strength from 0-1.0\n@param Hand           reference to LeapHand object containing data for the tracked hand" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapEventInterface_LeapHandGrabbing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapEventInterface, nullptr, "LeapHandGrabbing", nullptr, nullptr, sizeof(LeapEventInterface_eventLeapHandGrabbing_Parms), Z_Construct_UFunction_ULeapEventInterface_LeapHandGrabbing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_LeapHandGrabbing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapEventInterface_LeapHandGrabbing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_LeapHandGrabbing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapEventInterface_LeapHandGrabbing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapEventInterface_LeapHandGrabbing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapEventInterface_LeapHandMoved_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapEventInterface_LeapHandMoved_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapEventInterface_eventLeapHandMoved_Parms, Hand), Z_Construct_UClass_ULeapHand_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapEventInterface_LeapHandMoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapEventInterface_LeapHandMoved_Statics::NewProp_Hand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapEventInterface_LeapHandMoved_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Interface Event" },
		{ "Comment", "/**\n\x09* Event triggered for each hand that is visible and tracked.\n\x09* \xe4\xb8\xba\xe6\xaf\x8f\xe6\x89\x8b\xe5\x8f\xaf\xe8\xa7\x81\xe5\x92\x8c\xe8\xb7\x9f\xe8\xb8\xaa\xe7\x9a\x84\xe6\x89\x8b\xe7\x89\x8c\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\x09*\n\x09* @param Hand\x09\x09reference to LeapHand object containing data for the tracked hand\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "HandMoved" },
		{ "Keywords", "hand moved" },
		{ "ModuleRelativePath", "Public/LeapEventInterface.h" },
		{ "ToolTip", "Event triggered for each hand that is visible and tracked.\n\xe4\xb8\xba\xe6\xaf\x8f\xe6\x89\x8b\xe5\x8f\xaf\xe8\xa7\x81\xe5\x92\x8c\xe8\xb7\x9f\xe8\xb8\xaa\xe7\x9a\x84\xe6\x89\x8b\xe7\x89\x8c\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\n@param Hand           reference to LeapHand object containing data for the tracked hand" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapEventInterface_LeapHandMoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapEventInterface, nullptr, "LeapHandMoved", nullptr, nullptr, sizeof(LeapEventInterface_eventLeapHandMoved_Parms), Z_Construct_UFunction_ULeapEventInterface_LeapHandMoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_LeapHandMoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapEventInterface_LeapHandMoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_LeapHandMoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapEventInterface_LeapHandMoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapEventInterface_LeapHandMoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapEventInterface_LeapHandPinched_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULeapEventInterface_LeapHandPinched_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapEventInterface_eventLeapHandPinched_Parms, Strength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapEventInterface_LeapHandPinched_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapEventInterface_eventLeapHandPinched_Parms, Hand), Z_Construct_UClass_ULeapHand_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapEventInterface_LeapHandPinched_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapEventInterface_LeapHandPinched_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapEventInterface_LeapHandPinched_Statics::NewProp_Hand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapEventInterface_LeapHandPinched_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Interface Event" },
		{ "Comment", "/**\n\x09* Event triggered when the given hand has pinched stronger than the pinch trigger (pinch strength>=0.5)\n\x09* \xe5\xbd\x93\xe7\xbb\x99\xe5\xae\x9a\xe7\x9a\x84\xe6\x89\x8b\xe7\x9a\x84\xe6\x8d\x8f\xe5\x8f\x96\xe5\x8a\x9b\xe5\xba\xa6\xe8\xb6\x85\xe8\xbf\x87\xe6\x8d\x8f\xe5\x8f\x96\xe8\xa7\xa6\xe5\x8f\x91\xe5\x99\xa8\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xef\xbc\x88\xe6\x8d\x8f\xe5\x8f\x96\xe5\x8a\x9b\xe5\xba\xa6 >= 0.5\xef\xbc\x89\xe3\x80\x82\n\x09*\n\x09* @param Strength\x09pinch strength from 0-1.0\n\x09* @param Hand\x09\x09reference to LeapHand object containing data for the tracked hand\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "HandPinched" },
		{ "Keywords", "hand pinch" },
		{ "ModuleRelativePath", "Public/LeapEventInterface.h" },
		{ "ToolTip", "Event triggered when the given hand has pinched stronger than the pinch trigger (pinch strength>=0.5)\n\xe5\xbd\x93\xe7\xbb\x99\xe5\xae\x9a\xe7\x9a\x84\xe6\x89\x8b\xe7\x9a\x84\xe6\x8d\x8f\xe5\x8f\x96\xe5\x8a\x9b\xe5\xba\xa6\xe8\xb6\x85\xe8\xbf\x87\xe6\x8d\x8f\xe5\x8f\x96\xe8\xa7\xa6\xe5\x8f\x91\xe5\x99\xa8\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xef\xbc\x88\xe6\x8d\x8f\xe5\x8f\x96\xe5\x8a\x9b\xe5\xba\xa6 >= 0.5\xef\xbc\x89\xe3\x80\x82\n\n@param Strength       pinch strength from 0-1.0\n@param Hand           reference to LeapHand object containing data for the tracked hand" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapEventInterface_LeapHandPinched_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapEventInterface, nullptr, "LeapHandPinched", nullptr, nullptr, sizeof(LeapEventInterface_eventLeapHandPinched_Parms), Z_Construct_UFunction_ULeapEventInterface_LeapHandPinched_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_LeapHandPinched_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapEventInterface_LeapHandPinched_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_LeapHandPinched_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapEventInterface_LeapHandPinched()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapEventInterface_LeapHandPinched_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapEventInterface_LeapHandPinching_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULeapEventInterface_LeapHandPinching_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapEventInterface_eventLeapHandPinching_Parms, Strength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapEventInterface_LeapHandPinching_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapEventInterface_eventLeapHandPinching_Parms, Hand), Z_Construct_UClass_ULeapHand_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapEventInterface_LeapHandPinching_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapEventInterface_LeapHandPinching_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapEventInterface_LeapHandPinching_Statics::NewProp_Hand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapEventInterface_LeapHandPinching_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Interface Event" },
		{ "Comment", "/**\n\x09* Event triggered continuously when the given hand has a pinch strength greater than 0.5\n\x09* \xe5\xbd\x93\xe7\xbb\x99\xe5\xae\x9a\xe7\x9a\x84\xe6\x89\x8b\xe7\x9a\x84\xe6\x8d\x8f\xe5\x8f\x96\xe5\x8a\x9b\xe5\xba\xa6\xe5\xa4\xa7\xe4\xba\x8e 0.5 \xe6\x97\xb6\xe6\x8c\x81\xe7\xbb\xad\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\x09*\n\x09* @param Strength\x09pinch strength from 0-1.0\n\x09* @param Hand\x09\x09reference to LeapHand object containing data for the tracked hand\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "HandPinching" },
		{ "Keywords", "hand grab" },
		{ "ModuleRelativePath", "Public/LeapEventInterface.h" },
		{ "ToolTip", "Event triggered continuously when the given hand has a pinch strength greater than 0.5\n\xe5\xbd\x93\xe7\xbb\x99\xe5\xae\x9a\xe7\x9a\x84\xe6\x89\x8b\xe7\x9a\x84\xe6\x8d\x8f\xe5\x8f\x96\xe5\x8a\x9b\xe5\xba\xa6\xe5\xa4\xa7\xe4\xba\x8e 0.5 \xe6\x97\xb6\xe6\x8c\x81\xe7\xbb\xad\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\n@param Strength       pinch strength from 0-1.0\n@param Hand           reference to LeapHand object containing data for the tracked hand" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapEventInterface_LeapHandPinching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapEventInterface, nullptr, "LeapHandPinching", nullptr, nullptr, sizeof(LeapEventInterface_eventLeapHandPinching_Parms), Z_Construct_UFunction_ULeapEventInterface_LeapHandPinching_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_LeapHandPinching_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapEventInterface_LeapHandPinching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_LeapHandPinching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapEventInterface_LeapHandPinching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapEventInterface_LeapHandPinching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapEventInterface_LeapHandReleased_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULeapEventInterface_LeapHandReleased_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapEventInterface_eventLeapHandReleased_Parms, Strength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapEventInterface_LeapHandReleased_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapEventInterface_eventLeapHandReleased_Parms, Hand), Z_Construct_UClass_ULeapHand_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapEventInterface_LeapHandReleased_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapEventInterface_LeapHandReleased_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapEventInterface_LeapHandReleased_Statics::NewProp_Hand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapEventInterface_LeapHandReleased_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Interface Event" },
		{ "Comment", "/**\n\x09* Event triggered when the given hand's grab strength has fallen below the grab trigger (grab strength<0.5) after having grabbed earlier.\n\x09* \xe5\xbd\x93\xe7\xbb\x99\xe5\xae\x9a\xe7\x9a\x84\xe6\x89\x8b\xe7\x9a\x84\xe6\x8a\x93\xe5\x8f\x96\xe5\x8a\x9b\xe5\xba\xa6\xe5\x9c\xa8\xe4\xb9\x8b\xe5\x89\x8d\xe6\x8a\x93\xe5\x8f\x96\xe5\x90\x8e\xe4\xb8\x8b\xe9\x99\x8d\xe5\x88\xb0\xe6\x8a\x93\xe5\x8f\x96\xe8\xa7\xa6\xe5\x8f\x91\xe5\x99\xa8\xe4\xbb\xa5\xe4\xb8\x8b\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xef\xbc\x88\xe6\x8a\x93\xe5\x8f\x96\xe5\x8a\x9b\xe5\xba\xa6 < 0.5\xef\xbc\x89\xe3\x80\x82\n\x09*\n\x09* @param Strength\x09grabbing strength from 0-1.0\n\x09* @param Hand\x09\x09reference to LeapHand object containing data for the tracked hand\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "HandReleased" },
		{ "Keywords", "hand released ungrab" },
		{ "ModuleRelativePath", "Public/LeapEventInterface.h" },
		{ "ToolTip", "Event triggered when the given hand's grab strength has fallen below the grab trigger (grab strength<0.5) after having grabbed earlier.\n\xe5\xbd\x93\xe7\xbb\x99\xe5\xae\x9a\xe7\x9a\x84\xe6\x89\x8b\xe7\x9a\x84\xe6\x8a\x93\xe5\x8f\x96\xe5\x8a\x9b\xe5\xba\xa6\xe5\x9c\xa8\xe4\xb9\x8b\xe5\x89\x8d\xe6\x8a\x93\xe5\x8f\x96\xe5\x90\x8e\xe4\xb8\x8b\xe9\x99\x8d\xe5\x88\xb0\xe6\x8a\x93\xe5\x8f\x96\xe8\xa7\xa6\xe5\x8f\x91\xe5\x99\xa8\xe4\xbb\xa5\xe4\xb8\x8b\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xef\xbc\x88\xe6\x8a\x93\xe5\x8f\x96\xe5\x8a\x9b\xe5\xba\xa6 < 0.5\xef\xbc\x89\xe3\x80\x82\n\n@param Strength       grabbing strength from 0-1.0\n@param Hand           reference to LeapHand object containing data for the tracked hand" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapEventInterface_LeapHandReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapEventInterface, nullptr, "LeapHandReleased", nullptr, nullptr, sizeof(LeapEventInterface_eventLeapHandReleased_Parms), Z_Construct_UFunction_ULeapEventInterface_LeapHandReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_LeapHandReleased_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapEventInterface_LeapHandReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_LeapHandReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapEventInterface_LeapHandReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapEventInterface_LeapHandReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapEventInterface_LeapHandRemoved_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HandType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HandType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULeapEventInterface_LeapHandRemoved_Statics::NewProp_HandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULeapEventInterface_LeapHandRemoved_Statics::NewProp_HandType = { "HandType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapEventInterface_eventLeapHandRemoved_Parms, HandType), Z_Construct_UEnum_SimpleLeapMotion_ELeapHandType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapEventInterface_LeapHandRemoved_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapEventInterface_eventLeapHandRemoved_Parms, Hand), Z_Construct_UClass_ULeapHand_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapEventInterface_LeapHandRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapEventInterface_LeapHandRemoved_Statics::NewProp_HandType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapEventInterface_LeapHandRemoved_Statics::NewProp_HandType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapEventInterface_LeapHandRemoved_Statics::NewProp_Hand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapEventInterface_LeapHandRemoved_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Interface Event" },
		{ "Comment", "/**\n\x09* Event triggered when number of hands changed from a previous frame.\n\x09* \xe5\xbd\x93\xe6\x89\x8b\xe7\x9a\x84\xe6\x95\xb0\xe9\x87\x8f\xe4\xb8\x8e\xe5\x89\x8d\xe4\xb8\x80\xe5\xb8\xa7\xe7\x9b\xb8\xe6\xaf\x94\xe5\x8f\x91\xe7\x94\x9f\xe5\x8f\x98\xe5\x8c\x96\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\x09* \xe6\xb3\xa8\xe6\x84\x8f\xef\xbc\x9a\xe4\xbd\xbf\xe7\x94\xa8\xe5\x89\x8d\xe5\xbf\x85\xe9\xa1\xbb\xe5\x85\x88\xe6\xa3\x80\xe6\x9f\xa5\xe6\x98\xaf\xe5\x90\xa6\xe6\x9c\x89\xe6\x95\x88\n\x09*\n\x09* @param LeftHand\x09\x09\xe6\x98\xaf\xe5\xb7\xa6\xe6\x89\x8b\xe8\xa2\xab\xe7\xa7\xbb\xe9\x99\xa4\xe4\xba\x86\xe5\x90\x97\n\x09* @param RightHand\x09\x09\xe6\x98\xaf\xe5\x8f\xb3\xe6\x89\x8b\xe8\xa2\xab\xe7\xa7\xbb\xe9\x99\xa4\xe4\xba\x86\xe5\x90\x97\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "LeapHandRemoved" },
		{ "Keywords", "hand removed" },
		{ "ModuleRelativePath", "Public/LeapEventInterface.h" },
		{ "ToolTip", "Event triggered when number of hands changed from a previous frame.\n\xe5\xbd\x93\xe6\x89\x8b\xe7\x9a\x84\xe6\x95\xb0\xe9\x87\x8f\xe4\xb8\x8e\xe5\x89\x8d\xe4\xb8\x80\xe5\xb8\xa7\xe7\x9b\xb8\xe6\xaf\x94\xe5\x8f\x91\xe7\x94\x9f\xe5\x8f\x98\xe5\x8c\x96\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\xe6\xb3\xa8\xe6\x84\x8f\xef\xbc\x9a\xe4\xbd\xbf\xe7\x94\xa8\xe5\x89\x8d\xe5\xbf\x85\xe9\xa1\xbb\xe5\x85\x88\xe6\xa3\x80\xe6\x9f\xa5\xe6\x98\xaf\xe5\x90\xa6\xe6\x9c\x89\xe6\x95\x88\n\n@param LeftHand               \xe6\x98\xaf\xe5\xb7\xa6\xe6\x89\x8b\xe8\xa2\xab\xe7\xa7\xbb\xe9\x99\xa4\xe4\xba\x86\xe5\x90\x97\n@param RightHand              \xe6\x98\xaf\xe5\x8f\xb3\xe6\x89\x8b\xe8\xa2\xab\xe7\xa7\xbb\xe9\x99\xa4\xe4\xba\x86\xe5\x90\x97" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapEventInterface_LeapHandRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapEventInterface, nullptr, "LeapHandRemoved", nullptr, nullptr, sizeof(LeapEventInterface_eventLeapHandRemoved_Parms), Z_Construct_UFunction_ULeapEventInterface_LeapHandRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_LeapHandRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapEventInterface_LeapHandRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_LeapHandRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapEventInterface_LeapHandRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapEventInterface_LeapHandRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapEventInterface_LeapHandUnpinched_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULeapEventInterface_LeapHandUnpinched_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapEventInterface_eventLeapHandUnpinched_Parms, Strength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapEventInterface_LeapHandUnpinched_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapEventInterface_eventLeapHandUnpinched_Parms, Hand), Z_Construct_UClass_ULeapHand_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapEventInterface_LeapHandUnpinched_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapEventInterface_LeapHandUnpinched_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapEventInterface_LeapHandUnpinched_Statics::NewProp_Hand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapEventInterface_LeapHandUnpinched_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Interface Event" },
		{ "Comment", "/**\n\x09* Event triggered when the given hand's pinch strength has fallen below the pinch trigger (pinch strength<0.5) after having pinched earlier.\n\x09* \xe5\xbd\x93\xe7\xbb\x99\xe5\xae\x9a\xe7\x9a\x84\xe6\x89\x8b\xe7\x9a\x84\xe6\x8d\x8f\xe5\x8f\x96\xe5\x8a\x9b\xe5\xba\xa6\xe5\x9c\xa8\xe4\xb9\x8b\xe5\x89\x8d\xe6\x8d\x8f\xe5\x8f\x96\xe5\x90\x8e\xe4\xb8\x8b\xe9\x99\x8d\xe5\x88\xb0\xe6\x8d\x8f\xe5\x8f\x96\xe8\xa7\xa6\xe5\x8f\x91\xe5\x99\xa8\xe4\xbb\xa5\xe4\xb8\x8b\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xef\xbc\x88\xe6\x8d\x8f\xe5\x8f\x96\xe5\x8a\x9b\xe5\xba\xa6 < 0.5\xef\xbc\x89\xe3\x80\x82\n\x09*\n\x09* @param Strength\x09pinch strength from 0-1.0\n\x09* @param Hand\x09\x09reference to LeapHand object containing data for the tracked hand\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "HandUnpinched" },
		{ "Keywords", "hand unpinch" },
		{ "ModuleRelativePath", "Public/LeapEventInterface.h" },
		{ "ToolTip", "Event triggered when the given hand's pinch strength has fallen below the pinch trigger (pinch strength<0.5) after having pinched earlier.\n\xe5\xbd\x93\xe7\xbb\x99\xe5\xae\x9a\xe7\x9a\x84\xe6\x89\x8b\xe7\x9a\x84\xe6\x8d\x8f\xe5\x8f\x96\xe5\x8a\x9b\xe5\xba\xa6\xe5\x9c\xa8\xe4\xb9\x8b\xe5\x89\x8d\xe6\x8d\x8f\xe5\x8f\x96\xe5\x90\x8e\xe4\xb8\x8b\xe9\x99\x8d\xe5\x88\xb0\xe6\x8d\x8f\xe5\x8f\x96\xe8\xa7\xa6\xe5\x8f\x91\xe5\x99\xa8\xe4\xbb\xa5\xe4\xb8\x8b\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xef\xbc\x88\xe6\x8d\x8f\xe5\x8f\x96\xe5\x8a\x9b\xe5\xba\xa6 < 0.5\xef\xbc\x89\xe3\x80\x82\n\n@param Strength       pinch strength from 0-1.0\n@param Hand           reference to LeapHand object containing data for the tracked hand" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapEventInterface_LeapHandUnpinched_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapEventInterface, nullptr, "LeapHandUnpinched", nullptr, nullptr, sizeof(LeapEventInterface_eventLeapHandUnpinched_Parms), Z_Construct_UFunction_ULeapEventInterface_LeapHandUnpinched_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_LeapHandUnpinched_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapEventInterface_LeapHandUnpinched_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_LeapHandUnpinched_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapEventInterface_LeapHandUnpinched()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapEventInterface_LeapHandUnpinched_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapEventInterface_LeapLeftHandMoved_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapEventInterface_LeapLeftHandMoved_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapEventInterface_eventLeapLeftHandMoved_Parms, Hand), Z_Construct_UClass_ULeapHand_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapEventInterface_LeapLeftHandMoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapEventInterface_LeapLeftHandMoved_Statics::NewProp_Hand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapEventInterface_LeapLeftHandMoved_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Interface Event" },
		{ "Comment", "/**\n\x09* Event triggered for when the left hand is visible and tracked.\n\x09* \xe5\xbd\x93\xe5\xb7\xa6\xe6\x89\x8b\xe5\x8f\xaf\xe8\xa7\x81\xe5\xb9\xb6\xe8\xa2\xab\xe8\xb7\x9f\xe8\xb8\xaa\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\x09*\n\x09* @param Hand\x09\x09reference to LeapHand object containing data for the tracked hand\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "LeftHandMoved" },
		{ "Keywords", "left hand moved" },
		{ "ModuleRelativePath", "Public/LeapEventInterface.h" },
		{ "ToolTip", "Event triggered for when the left hand is visible and tracked.\n\xe5\xbd\x93\xe5\xb7\xa6\xe6\x89\x8b\xe5\x8f\xaf\xe8\xa7\x81\xe5\xb9\xb6\xe8\xa2\xab\xe8\xb7\x9f\xe8\xb8\xaa\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\n@param Hand           reference to LeapHand object containing data for the tracked hand" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapEventInterface_LeapLeftHandMoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapEventInterface, nullptr, "LeapLeftHandMoved", nullptr, nullptr, sizeof(LeapEventInterface_eventLeapLeftHandMoved_Parms), Z_Construct_UFunction_ULeapEventInterface_LeapLeftHandMoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_LeapLeftHandMoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapEventInterface_LeapLeftHandMoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_LeapLeftHandMoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapEventInterface_LeapLeftHandMoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapEventInterface_LeapLeftHandMoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapEventInterface_LeapLeftMostFingerMoved_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Finger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapEventInterface_LeapLeftMostFingerMoved_Statics::NewProp_Finger = { "Finger", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapEventInterface_eventLeapLeftMostFingerMoved_Parms, Finger), Z_Construct_UClass_ULeapFinger_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapEventInterface_LeapLeftMostFingerMoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapEventInterface_LeapLeftMostFingerMoved_Statics::NewProp_Finger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapEventInterface_LeapLeftMostFingerMoved_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Interface Event" },
		{ "Comment", "/**\n\x09* Event triggered for the finger that is leftmost from the perspective of the leap (YNegative)\n\x09* \xe4\xb8\xba\xe6\xaf\x8f\xe5\x8f\xaa\xe5\x8f\xaf\xe8\xa7\x81\xe6\x89\x8b\xe4\xb8\xad\xe4\xbb\x8e Leap \xe8\xa7\x86\xe8\xa7\x92\xe7\x9c\x8b\xe6\x9c\x80\xe9\x9d\xa0\xe5\xb7\xa6\xe7\x9a\x84\xe6\x89\x8b\xe6\x8c\x87\xef\xbc\x88Y \xe8\xbd\xb4\xe8\xb4\x9f\xe6\x96\xb9\xe5\x90\x91\xef\xbc\x89\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\x09*\n\x09* @param Finger\x09\x09reference to LeapFinger object containing data for the tracked finger\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "RightFingerMoved" },
		{ "Keywords", "finger right most moved" },
		{ "ModuleRelativePath", "Public/LeapEventInterface.h" },
		{ "ToolTip", "Event triggered for the finger that is leftmost from the perspective of the leap (YNegative)\n\xe4\xb8\xba\xe6\xaf\x8f\xe5\x8f\xaa\xe5\x8f\xaf\xe8\xa7\x81\xe6\x89\x8b\xe4\xb8\xad\xe4\xbb\x8e Leap \xe8\xa7\x86\xe8\xa7\x92\xe7\x9c\x8b\xe6\x9c\x80\xe9\x9d\xa0\xe5\xb7\xa6\xe7\x9a\x84\xe6\x89\x8b\xe6\x8c\x87\xef\xbc\x88Y \xe8\xbd\xb4\xe8\xb4\x9f\xe6\x96\xb9\xe5\x90\x91\xef\xbc\x89\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\n@param Finger         reference to LeapFinger object containing data for the tracked finger" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapEventInterface_LeapLeftMostFingerMoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapEventInterface, nullptr, "LeapLeftMostFingerMoved", nullptr, nullptr, sizeof(LeapEventInterface_eventLeapLeftMostFingerMoved_Parms), Z_Construct_UFunction_ULeapEventInterface_LeapLeftMostFingerMoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_LeapLeftMostFingerMoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapEventInterface_LeapLeftMostFingerMoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_LeapLeftMostFingerMoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapEventInterface_LeapLeftMostFingerMoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapEventInterface_LeapLeftMostFingerMoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapEventInterface_LeapMotionOnDisconnect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapEventInterface_LeapMotionOnDisconnect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Interface Event" },
		{ "Comment", "/* \xe5\xbd\x93\xe6\x8e\xa7\xe5\x88\xb6\xe5\x99\xa8\xe5\xaf\xb9\xe8\xb1\xa1\xe4\xb8\x8e Leap Motion \xe8\xbd\xaf\xe4\xbb\xb6\xe6\x96\xad\xe5\xbc\x80\xe8\xbf\x9e\xe6\x8e\xa5\xe6\x97\xb6\xe8\xb0\x83\xe7\x94\xa8\xef\xbc\x8c\xe6\x88\x96\xe8\x80\x85 Leap Motion \xe7\xa1\xac\xe4\xbb\xb6\xe5\xb7\xb2\xe6\x8b\x94\xe4\xb8\x8b\xe3\x80\x82\n\x09 * \xe6\x8b\x94\xe4\xb8\x8b Leap Motion \xe8\xae\xbe\xe5\xa4\x87\xe6\x97\xb6\xef\xbc\x8c\xe6\x8e\xa7\xe5\x88\xb6\xe5\x99\xa8\xe5\x8f\xaf\xe4\xbb\xa5\xe6\x96\xad\xe5\xbc\x80\xe8\xbf\x9e\xe6\x8e\xa5\xef\xbc\x8c\xe6\xad\xa4\xe6\x97\xb6\xe7\x94\xa8\xe6\x88\xb7\xe5\x85\xb3\xe9\x97\xad Leap Motion \xe8\xbd\xaf\xe4\xbb\xb6\xef\xbc\x8c\xe6\x88\x96 Leap Motion \xe8\xbd\xaf\xe4\xbb\xb6\xe9\x81\x87\xe5\x88\xb0\xe4\xb8\x8d\xe5\x8f\xaf\xe6\x81\xa2\xe5\xa4\x8d\xe7\x9a\x84\xe9\x94\x99\xe8\xaf\xaf\xe3\x80\x82\n\x09 */" },
		{ "ModuleRelativePath", "Public/LeapEventInterface.h" },
		{ "ToolTip", "\xe5\xbd\x93\xe6\x8e\xa7\xe5\x88\xb6\xe5\x99\xa8\xe5\xaf\xb9\xe8\xb1\xa1\xe4\xb8\x8e Leap Motion \xe8\xbd\xaf\xe4\xbb\xb6\xe6\x96\xad\xe5\xbc\x80\xe8\xbf\x9e\xe6\x8e\xa5\xe6\x97\xb6\xe8\xb0\x83\xe7\x94\xa8\xef\xbc\x8c\xe6\x88\x96\xe8\x80\x85 Leap Motion \xe7\xa1\xac\xe4\xbb\xb6\xe5\xb7\xb2\xe6\x8b\x94\xe4\xb8\x8b\xe3\x80\x82\n       * \xe6\x8b\x94\xe4\xb8\x8b Leap Motion \xe8\xae\xbe\xe5\xa4\x87\xe6\x97\xb6\xef\xbc\x8c\xe6\x8e\xa7\xe5\x88\xb6\xe5\x99\xa8\xe5\x8f\xaf\xe4\xbb\xa5\xe6\x96\xad\xe5\xbc\x80\xe8\xbf\x9e\xe6\x8e\xa5\xef\xbc\x8c\xe6\xad\xa4\xe6\x97\xb6\xe7\x94\xa8\xe6\x88\xb7\xe5\x85\xb3\xe9\x97\xad Leap Motion \xe8\xbd\xaf\xe4\xbb\xb6\xef\xbc\x8c\xe6\x88\x96 Leap Motion \xe8\xbd\xaf\xe4\xbb\xb6\xe9\x81\x87\xe5\x88\xb0\xe4\xb8\x8d\xe5\x8f\xaf\xe6\x81\xa2\xe5\xa4\x8d\xe7\x9a\x84\xe9\x94\x99\xe8\xaf\xaf\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapEventInterface_LeapMotionOnDisconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapEventInterface, nullptr, "LeapMotionOnDisconnect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapEventInterface_LeapMotionOnDisconnect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_LeapMotionOnDisconnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapEventInterface_LeapMotionOnDisconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapEventInterface_LeapMotionOnDisconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapEventInterface_LeapRightHandMoved_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapEventInterface_LeapRightHandMoved_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapEventInterface_eventLeapRightHandMoved_Parms, Hand), Z_Construct_UClass_ULeapHand_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapEventInterface_LeapRightHandMoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapEventInterface_LeapRightHandMoved_Statics::NewProp_Hand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapEventInterface_LeapRightHandMoved_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Interface Event" },
		{ "Comment", "/**\n\x09* Event triggered for when the right hand that is visible and tracked.\n\x09* \xe5\xbd\x93\xe5\x8f\xb3\xe6\x89\x8b\xe5\x8f\xaf\xe8\xa7\x81\xe5\xb9\xb6\xe8\xa2\xab\xe8\xb7\x9f\xe8\xb8\xaa\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\x09*\n\x09* @param Hand\x09\x09reference to LeapHand object containing data for the tracked hand\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "RightHandMoved" },
		{ "Keywords", "right hand moved" },
		{ "ModuleRelativePath", "Public/LeapEventInterface.h" },
		{ "ToolTip", "Event triggered for when the right hand that is visible and tracked.\n\xe5\xbd\x93\xe5\x8f\xb3\xe6\x89\x8b\xe5\x8f\xaf\xe8\xa7\x81\xe5\xb9\xb6\xe8\xa2\xab\xe8\xb7\x9f\xe8\xb8\xaa\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\n@param Hand           reference to LeapHand object containing data for the tracked hand" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapEventInterface_LeapRightHandMoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapEventInterface, nullptr, "LeapRightHandMoved", nullptr, nullptr, sizeof(LeapEventInterface_eventLeapRightHandMoved_Parms), Z_Construct_UFunction_ULeapEventInterface_LeapRightHandMoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_LeapRightHandMoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapEventInterface_LeapRightHandMoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_LeapRightHandMoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapEventInterface_LeapRightHandMoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapEventInterface_LeapRightHandMoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapEventInterface_LeapRightMostFingerMoved_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Finger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapEventInterface_LeapRightMostFingerMoved_Statics::NewProp_Finger = { "Finger", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapEventInterface_eventLeapRightMostFingerMoved_Parms, Finger), Z_Construct_UClass_ULeapFinger_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapEventInterface_LeapRightMostFingerMoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapEventInterface_LeapRightMostFingerMoved_Statics::NewProp_Finger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapEventInterface_LeapRightMostFingerMoved_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Interface Event" },
		{ "Comment", "/**\n\x09* Event triggered for the finger that is rightmost from the perspective of the leap (Y Positive) for each visible hand\n\x09* \xe4\xb8\xba\xe6\xaf\x8f\xe5\x8f\xaa\xe5\x8f\xaf\xe8\xa7\x81\xe6\x89\x8b\xe4\xb8\xad\xe4\xbb\x8e Leap \xe8\xa7\x86\xe8\xa7\x92\xe7\x9c\x8b\xe6\x9c\x80\xe9\x9d\xa0\xe5\x8f\xb3\xe7\x9a\x84\xe6\x89\x8b\xe6\x8c\x87\xef\xbc\x88Y \xe8\xbd\xb4\xe6\xad\xa3\xe6\x96\xb9\xe5\x90\x91\xef\xbc\x89\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\x09*\n\x09* @param Finger\x09\x09reference to LeapFinger object containing data for the tracked finger\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "LeftFingerMoved" },
		{ "Keywords", "finger left most moved" },
		{ "ModuleRelativePath", "Public/LeapEventInterface.h" },
		{ "ToolTip", "Event triggered for the finger that is rightmost from the perspective of the leap (Y Positive) for each visible hand\n\xe4\xb8\xba\xe6\xaf\x8f\xe5\x8f\xaa\xe5\x8f\xaf\xe8\xa7\x81\xe6\x89\x8b\xe4\xb8\xad\xe4\xbb\x8e Leap \xe8\xa7\x86\xe8\xa7\x92\xe7\x9c\x8b\xe6\x9c\x80\xe9\x9d\xa0\xe5\x8f\xb3\xe7\x9a\x84\xe6\x89\x8b\xe6\x8c\x87\xef\xbc\x88Y \xe8\xbd\xb4\xe6\xad\xa3\xe6\x96\xb9\xe5\x90\x91\xef\xbc\x89\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\n@param Finger         reference to LeapFinger object containing data for the tracked finger" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapEventInterface_LeapRightMostFingerMoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapEventInterface, nullptr, "LeapRightMostFingerMoved", nullptr, nullptr, sizeof(LeapEventInterface_eventLeapRightMostFingerMoved_Parms), Z_Construct_UFunction_ULeapEventInterface_LeapRightMostFingerMoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_LeapRightMostFingerMoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapEventInterface_LeapRightMostFingerMoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_LeapRightMostFingerMoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapEventInterface_LeapRightMostFingerMoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapEventInterface_LeapRightMostFingerMoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapEventInterface_RawImageReceived_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapEventInterface_RawImageReceived_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapEventInterface_eventRawImageReceived_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapEventInterface_RawImageReceived_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapEventInterface_eventRawImageReceived_Parms, Image), Z_Construct_UClass_ULeapImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapEventInterface_RawImageReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapEventInterface_RawImageReceived_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapEventInterface_RawImageReceived_Statics::NewProp_Image,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapEventInterface_RawImageReceived_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Interface Event" },
		{ "Comment", "/**\n\x09* Event triggered when a raw image has been processed.  Raw images need to be enabled in the LeapController to receive their events.\n\x09* \xe5\xa4\x84\xe7\x90\x86 Raw \xe5\x9b\xbe\xe5\x83\x8f\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82 \xe9\x9c\x80\xe8\xa6\x81\xe5\x9c\xa8 LeapController \xe4\xb8\xad\xe5\x90\xaf\xe7\x94\xa8 Raw \xe5\x9b\xbe\xe5\x83\x8f\xe6\x89\x8d\xe8\x83\xbd\xe6\x8e\xa5\xe6\x94\xb6\xe5\x85\xb6\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\x09*\n\x09* @param Texture\x09\x09UTexture2D representation of the raw leap image\n\x09* @param Image\x09\x09\x09image object containing details relevant to the image such as distorion\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapEventInterface.h" },
		{ "ToolTip", "Event triggered when a raw image has been processed.  Raw images need to be enabled in the LeapController to receive their events.\n\xe5\xa4\x84\xe7\x90\x86 Raw \xe5\x9b\xbe\xe5\x83\x8f\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82 \xe9\x9c\x80\xe8\xa6\x81\xe5\x9c\xa8 LeapController \xe4\xb8\xad\xe5\x90\xaf\xe7\x94\xa8 Raw \xe5\x9b\xbe\xe5\x83\x8f\xe6\x89\x8d\xe8\x83\xbd\xe6\x8e\xa5\xe6\x94\xb6\xe5\x85\xb6\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\n@param Texture                UTexture2D representation of the raw leap image\n@param Image                  image object containing details relevant to the image such as distorion" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapEventInterface_RawImageReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapEventInterface, nullptr, "RawImageReceived", nullptr, nullptr, sizeof(LeapEventInterface_eventRawImageReceived_Parms), Z_Construct_UFunction_ULeapEventInterface_RawImageReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_RawImageReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapEventInterface_RawImageReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_RawImageReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapEventInterface_RawImageReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapEventInterface_RawImageReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapEventInterface_ScreenTapGestureDetected_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Gesture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapEventInterface_ScreenTapGestureDetected_Statics::NewProp_Gesture = { "Gesture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapEventInterface_eventScreenTapGestureDetected_Parms, Gesture), Z_Construct_UClass_ULeapScreenTapGesture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapEventInterface_ScreenTapGestureDetected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapEventInterface_ScreenTapGestureDetected_Statics::NewProp_Gesture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapEventInterface_ScreenTapGestureDetected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Interface Event" },
		{ "Comment", "/**\n\x09* Event triggered when a screen tap gesture is detected.  Gestures need to be enabled in the LeapController to receive their events.\n\x09* \xe6\xa3\x80\xe6\xb5\x8b\xe5\x88\xb0\xe5\xb1\x8f\xe5\xb9\x95\xe7\x82\xb9\xe5\x87\xbb\xe6\x89\x8b\xe5\x8a\xbf\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82 \xe9\x9c\x80\xe8\xa6\x81\xe5\x9c\xa8 LeapController \xe4\xb8\xad\xe5\x90\xaf\xe7\x94\xa8\xe6\x89\x8b\xe5\x8a\xbf\xe6\x89\x8d\xe8\x83\xbd\xe6\x8e\xa5\xe6\x94\xb6\xe5\x85\xb6\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\x09*\n\x09* @param Gesture\x09\x09screen tap gesture object detected, can be queried to get details of the event\n\x09*/" },
		{ "Keywords", "gesture screen tap detect" },
		{ "ModuleRelativePath", "Public/LeapEventInterface.h" },
		{ "ToolTip", "Event triggered when a screen tap gesture is detected.  Gestures need to be enabled in the LeapController to receive their events.\n\xe6\xa3\x80\xe6\xb5\x8b\xe5\x88\xb0\xe5\xb1\x8f\xe5\xb9\x95\xe7\x82\xb9\xe5\x87\xbb\xe6\x89\x8b\xe5\x8a\xbf\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82 \xe9\x9c\x80\xe8\xa6\x81\xe5\x9c\xa8 LeapController \xe4\xb8\xad\xe5\x90\xaf\xe7\x94\xa8\xe6\x89\x8b\xe5\x8a\xbf\xe6\x89\x8d\xe8\x83\xbd\xe6\x8e\xa5\xe6\x94\xb6\xe5\x85\xb6\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\n@param Gesture                screen tap gesture object detected, can be queried to get details of the event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapEventInterface_ScreenTapGestureDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapEventInterface, nullptr, "ScreenTapGestureDetected", nullptr, nullptr, sizeof(LeapEventInterface_eventScreenTapGestureDetected_Parms), Z_Construct_UFunction_ULeapEventInterface_ScreenTapGestureDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_ScreenTapGestureDetected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapEventInterface_ScreenTapGestureDetected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_ScreenTapGestureDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapEventInterface_ScreenTapGestureDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapEventInterface_ScreenTapGestureDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapEventInterface_SwipeGestureDetected_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Gesture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapEventInterface_SwipeGestureDetected_Statics::NewProp_Gesture = { "Gesture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapEventInterface_eventSwipeGestureDetected_Parms, Gesture), Z_Construct_UClass_ULeapSwipeGesture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapEventInterface_SwipeGestureDetected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapEventInterface_SwipeGestureDetected_Statics::NewProp_Gesture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapEventInterface_SwipeGestureDetected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Interface Event" },
		{ "Comment", "/**\n\x09* Event triggered when a swipe gesture is detected.  Gestures need to be enabled in the LeapController to receive their events.\n\x09* \xe6\xa3\x80\xe6\xb5\x8b\xe5\x88\xb0\xe6\xbb\x91\xe5\x8a\xa8\xe6\x89\x8b\xe5\x8a\xbf\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82 \xe9\x9c\x80\xe8\xa6\x81\xe5\x9c\xa8 LeapController \xe4\xb8\xad\xe5\x90\xaf\xe7\x94\xa8\xe6\x89\x8b\xe5\x8a\xbf\xe6\x89\x8d\xe8\x83\xbd\xe6\x8e\xa5\xe6\x94\xb6\xe5\x85\xb6\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\x09*\n\x09* @param Gesture\x09\x09swipe gesture object detected, can be queried to get details of the event\n\x09*/" },
		{ "Keywords", "gesture swipe detect" },
		{ "ModuleRelativePath", "Public/LeapEventInterface.h" },
		{ "ToolTip", "Event triggered when a swipe gesture is detected.  Gestures need to be enabled in the LeapController to receive their events.\n\xe6\xa3\x80\xe6\xb5\x8b\xe5\x88\xb0\xe6\xbb\x91\xe5\x8a\xa8\xe6\x89\x8b\xe5\x8a\xbf\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82 \xe9\x9c\x80\xe8\xa6\x81\xe5\x9c\xa8 LeapController \xe4\xb8\xad\xe5\x90\xaf\xe7\x94\xa8\xe6\x89\x8b\xe5\x8a\xbf\xe6\x89\x8d\xe8\x83\xbd\xe6\x8e\xa5\xe6\x94\xb6\xe5\x85\xb6\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82\n\n@param Gesture                swipe gesture object detected, can be queried to get details of the event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapEventInterface_SwipeGestureDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapEventInterface, nullptr, "SwipeGestureDetected", nullptr, nullptr, sizeof(LeapEventInterface_eventSwipeGestureDetected_Parms), Z_Construct_UFunction_ULeapEventInterface_SwipeGestureDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_SwipeGestureDetected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapEventInterface_SwipeGestureDetected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapEventInterface_SwipeGestureDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapEventInterface_SwipeGestureDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapEventInterface_SwipeGestureDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULeapEventInterface_NoRegister()
	{
		return ULeapEventInterface::StaticClass();
	}
	struct Z_Construct_UClass_ULeapEventInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULeapEventInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULeapEventInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeapEventInterface_CircleGestureDetected, "CircleGestureDetected" }, // 953525978
		{ &Z_Construct_UFunction_ULeapEventInterface_FingerCountChanged, "FingerCountChanged" }, // 3411463519
		{ &Z_Construct_UFunction_ULeapEventInterface_GestureDetected, "GestureDetected" }, // 2882013877
		{ &Z_Construct_UFunction_ULeapEventInterface_HandCountChanged, "HandCountChanged" }, // 4260405095
		{ &Z_Construct_UFunction_ULeapEventInterface_KeyTapGestureDetected, "KeyTapGestureDetected" }, // 4139473047
		{ &Z_Construct_UFunction_ULeapEventInterface_LeapFingerMoved, "LeapFingerMoved" }, // 2085577381
		{ &Z_Construct_UFunction_ULeapEventInterface_LeapFrontFingerTouch, "LeapFrontFingerTouch" }, // 774740051
		{ &Z_Construct_UFunction_ULeapEventInterface_LeapFrontMostFingerMoved, "LeapFrontMostFingerMoved" }, // 872814292
		{ &Z_Construct_UFunction_ULeapEventInterface_LeapHandGrabbed, "LeapHandGrabbed" }, // 33305056
		{ &Z_Construct_UFunction_ULeapEventInterface_LeapHandGrabbing, "LeapHandGrabbing" }, // 3577866546
		{ &Z_Construct_UFunction_ULeapEventInterface_LeapHandMoved, "LeapHandMoved" }, // 980522379
		{ &Z_Construct_UFunction_ULeapEventInterface_LeapHandPinched, "LeapHandPinched" }, // 3365567258
		{ &Z_Construct_UFunction_ULeapEventInterface_LeapHandPinching, "LeapHandPinching" }, // 3346445160
		{ &Z_Construct_UFunction_ULeapEventInterface_LeapHandReleased, "LeapHandReleased" }, // 2808226535
		{ &Z_Construct_UFunction_ULeapEventInterface_LeapHandRemoved, "LeapHandRemoved" }, // 865131074
		{ &Z_Construct_UFunction_ULeapEventInterface_LeapHandUnpinched, "LeapHandUnpinched" }, // 2047881754
		{ &Z_Construct_UFunction_ULeapEventInterface_LeapLeftHandMoved, "LeapLeftHandMoved" }, // 1657514693
		{ &Z_Construct_UFunction_ULeapEventInterface_LeapLeftMostFingerMoved, "LeapLeftMostFingerMoved" }, // 1838634472
		{ &Z_Construct_UFunction_ULeapEventInterface_LeapMotionOnDisconnect, "LeapMotionOnDisconnect" }, // 3904083414
		{ &Z_Construct_UFunction_ULeapEventInterface_LeapRightHandMoved, "LeapRightHandMoved" }, // 1129188117
		{ &Z_Construct_UFunction_ULeapEventInterface_LeapRightMostFingerMoved, "LeapRightMostFingerMoved" }, // 886962597
		{ &Z_Construct_UFunction_ULeapEventInterface_RawImageReceived, "RawImageReceived" }, // 2960530891
		{ &Z_Construct_UFunction_ULeapEventInterface_ScreenTapGestureDetected, "ScreenTapGestureDetected" }, // 2275170672
		{ &Z_Construct_UFunction_ULeapEventInterface_SwipeGestureDetected, "SwipeGestureDetected" }, // 1557375937
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapEventInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LeapEventInterface.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeapEventInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILeapEventInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULeapEventInterface_Statics::ClassParams = {
		&ULeapEventInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULeapEventInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapEventInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeapEventInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULeapEventInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULeapEventInterface, 2387242753);
	template<> SIMPLELEAPMOTION_API UClass* StaticClass<ULeapEventInterface>()
	{
		return ULeapEventInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULeapEventInterface(Z_Construct_UClass_ULeapEventInterface, &ULeapEventInterface::StaticClass, TEXT("/Script/SimpleLeapMotion"), TEXT("ULeapEventInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeapEventInterface);
	static FName NAME_ULeapEventInterface_CircleGestureDetected = FName(TEXT("CircleGestureDetected"));
	void ILeapEventInterface::Execute_CircleGestureDetected(UObject* O, ULeapCircleGesture* Gesture)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULeapEventInterface::StaticClass()));
		LeapEventInterface_eventCircleGestureDetected_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULeapEventInterface_CircleGestureDetected);
		if (Func)
		{
			Parms.Gesture=Gesture;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_ULeapEventInterface_FingerCountChanged = FName(TEXT("FingerCountChanged"));
	void ILeapEventInterface::Execute_FingerCountChanged(UObject* O, int32 Count)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULeapEventInterface::StaticClass()));
		LeapEventInterface_eventFingerCountChanged_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULeapEventInterface_FingerCountChanged);
		if (Func)
		{
			Parms.Count=Count;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_ULeapEventInterface_GestureDetected = FName(TEXT("GestureDetected"));
	void ILeapEventInterface::Execute_GestureDetected(UObject* O, ULeapGesture* Gesture)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULeapEventInterface::StaticClass()));
		LeapEventInterface_eventGestureDetected_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULeapEventInterface_GestureDetected);
		if (Func)
		{
			Parms.Gesture=Gesture;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_ULeapEventInterface_HandCountChanged = FName(TEXT("HandCountChanged"));
	void ILeapEventInterface::Execute_HandCountChanged(UObject* O, int32 Count)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULeapEventInterface::StaticClass()));
		LeapEventInterface_eventHandCountChanged_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULeapEventInterface_HandCountChanged);
		if (Func)
		{
			Parms.Count=Count;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_ULeapEventInterface_KeyTapGestureDetected = FName(TEXT("KeyTapGestureDetected"));
	void ILeapEventInterface::Execute_KeyTapGestureDetected(UObject* O, ULeapKeyTapGesture* Gesture)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULeapEventInterface::StaticClass()));
		LeapEventInterface_eventKeyTapGestureDetected_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULeapEventInterface_KeyTapGestureDetected);
		if (Func)
		{
			Parms.Gesture=Gesture;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_ULeapEventInterface_LeapFingerMoved = FName(TEXT("LeapFingerMoved"));
	void ILeapEventInterface::Execute_LeapFingerMoved(UObject* O, ULeapFinger* Finger)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULeapEventInterface::StaticClass()));
		LeapEventInterface_eventLeapFingerMoved_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULeapEventInterface_LeapFingerMoved);
		if (Func)
		{
			Parms.Finger=Finger;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_ULeapEventInterface_LeapFrontFingerTouch = FName(TEXT("LeapFrontFingerTouch"));
	void ILeapEventInterface::Execute_LeapFrontFingerTouch(UObject* O, ULeapFinger* Finger)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULeapEventInterface::StaticClass()));
		LeapEventInterface_eventLeapFrontFingerTouch_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULeapEventInterface_LeapFrontFingerTouch);
		if (Func)
		{
			Parms.Finger=Finger;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_ULeapEventInterface_LeapFrontMostFingerMoved = FName(TEXT("LeapFrontMostFingerMoved"));
	void ILeapEventInterface::Execute_LeapFrontMostFingerMoved(UObject* O, ULeapFinger* Finger)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULeapEventInterface::StaticClass()));
		LeapEventInterface_eventLeapFrontMostFingerMoved_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULeapEventInterface_LeapFrontMostFingerMoved);
		if (Func)
		{
			Parms.Finger=Finger;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_ULeapEventInterface_LeapHandGrabbed = FName(TEXT("LeapHandGrabbed"));
	void ILeapEventInterface::Execute_LeapHandGrabbed(UObject* O, float Strength, ULeapHand* Hand)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULeapEventInterface::StaticClass()));
		LeapEventInterface_eventLeapHandGrabbed_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULeapEventInterface_LeapHandGrabbed);
		if (Func)
		{
			Parms.Strength=Strength;
			Parms.Hand=Hand;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_ULeapEventInterface_LeapHandGrabbing = FName(TEXT("LeapHandGrabbing"));
	void ILeapEventInterface::Execute_LeapHandGrabbing(UObject* O, float Strength, ULeapHand* Hand)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULeapEventInterface::StaticClass()));
		LeapEventInterface_eventLeapHandGrabbing_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULeapEventInterface_LeapHandGrabbing);
		if (Func)
		{
			Parms.Strength=Strength;
			Parms.Hand=Hand;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_ULeapEventInterface_LeapHandMoved = FName(TEXT("LeapHandMoved"));
	void ILeapEventInterface::Execute_LeapHandMoved(UObject* O, ULeapHand* Hand)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULeapEventInterface::StaticClass()));
		LeapEventInterface_eventLeapHandMoved_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULeapEventInterface_LeapHandMoved);
		if (Func)
		{
			Parms.Hand=Hand;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_ULeapEventInterface_LeapHandPinched = FName(TEXT("LeapHandPinched"));
	void ILeapEventInterface::Execute_LeapHandPinched(UObject* O, float Strength, ULeapHand* Hand)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULeapEventInterface::StaticClass()));
		LeapEventInterface_eventLeapHandPinched_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULeapEventInterface_LeapHandPinched);
		if (Func)
		{
			Parms.Strength=Strength;
			Parms.Hand=Hand;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_ULeapEventInterface_LeapHandPinching = FName(TEXT("LeapHandPinching"));
	void ILeapEventInterface::Execute_LeapHandPinching(UObject* O, float Strength, ULeapHand* Hand)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULeapEventInterface::StaticClass()));
		LeapEventInterface_eventLeapHandPinching_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULeapEventInterface_LeapHandPinching);
		if (Func)
		{
			Parms.Strength=Strength;
			Parms.Hand=Hand;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_ULeapEventInterface_LeapHandReleased = FName(TEXT("LeapHandReleased"));
	void ILeapEventInterface::Execute_LeapHandReleased(UObject* O, float Strength, ULeapHand* Hand)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULeapEventInterface::StaticClass()));
		LeapEventInterface_eventLeapHandReleased_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULeapEventInterface_LeapHandReleased);
		if (Func)
		{
			Parms.Strength=Strength;
			Parms.Hand=Hand;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_ULeapEventInterface_LeapHandRemoved = FName(TEXT("LeapHandRemoved"));
	void ILeapEventInterface::Execute_LeapHandRemoved(UObject* O, ELeapHandType HandType, ULeapHand* Hand)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULeapEventInterface::StaticClass()));
		LeapEventInterface_eventLeapHandRemoved_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULeapEventInterface_LeapHandRemoved);
		if (Func)
		{
			Parms.HandType=HandType;
			Parms.Hand=Hand;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_ULeapEventInterface_LeapHandUnpinched = FName(TEXT("LeapHandUnpinched"));
	void ILeapEventInterface::Execute_LeapHandUnpinched(UObject* O, float Strength, ULeapHand* Hand)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULeapEventInterface::StaticClass()));
		LeapEventInterface_eventLeapHandUnpinched_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULeapEventInterface_LeapHandUnpinched);
		if (Func)
		{
			Parms.Strength=Strength;
			Parms.Hand=Hand;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_ULeapEventInterface_LeapLeftHandMoved = FName(TEXT("LeapLeftHandMoved"));
	void ILeapEventInterface::Execute_LeapLeftHandMoved(UObject* O, ULeapHand* Hand)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULeapEventInterface::StaticClass()));
		LeapEventInterface_eventLeapLeftHandMoved_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULeapEventInterface_LeapLeftHandMoved);
		if (Func)
		{
			Parms.Hand=Hand;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_ULeapEventInterface_LeapLeftMostFingerMoved = FName(TEXT("LeapLeftMostFingerMoved"));
	void ILeapEventInterface::Execute_LeapLeftMostFingerMoved(UObject* O, ULeapFinger* Finger)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULeapEventInterface::StaticClass()));
		LeapEventInterface_eventLeapLeftMostFingerMoved_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULeapEventInterface_LeapLeftMostFingerMoved);
		if (Func)
		{
			Parms.Finger=Finger;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_ULeapEventInterface_LeapMotionOnDisconnect = FName(TEXT("LeapMotionOnDisconnect"));
	void ILeapEventInterface::Execute_LeapMotionOnDisconnect(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULeapEventInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_ULeapEventInterface_LeapMotionOnDisconnect);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
	static FName NAME_ULeapEventInterface_LeapRightHandMoved = FName(TEXT("LeapRightHandMoved"));
	void ILeapEventInterface::Execute_LeapRightHandMoved(UObject* O, ULeapHand* Hand)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULeapEventInterface::StaticClass()));
		LeapEventInterface_eventLeapRightHandMoved_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULeapEventInterface_LeapRightHandMoved);
		if (Func)
		{
			Parms.Hand=Hand;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_ULeapEventInterface_LeapRightMostFingerMoved = FName(TEXT("LeapRightMostFingerMoved"));
	void ILeapEventInterface::Execute_LeapRightMostFingerMoved(UObject* O, ULeapFinger* Finger)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULeapEventInterface::StaticClass()));
		LeapEventInterface_eventLeapRightMostFingerMoved_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULeapEventInterface_LeapRightMostFingerMoved);
		if (Func)
		{
			Parms.Finger=Finger;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_ULeapEventInterface_RawImageReceived = FName(TEXT("RawImageReceived"));
	void ILeapEventInterface::Execute_RawImageReceived(UObject* O, UTexture2D* Texture, ULeapImage* Image)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULeapEventInterface::StaticClass()));
		LeapEventInterface_eventRawImageReceived_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULeapEventInterface_RawImageReceived);
		if (Func)
		{
			Parms.Texture=Texture;
			Parms.Image=Image;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_ULeapEventInterface_ScreenTapGestureDetected = FName(TEXT("ScreenTapGestureDetected"));
	void ILeapEventInterface::Execute_ScreenTapGestureDetected(UObject* O, ULeapScreenTapGesture* Gesture)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULeapEventInterface::StaticClass()));
		LeapEventInterface_eventScreenTapGestureDetected_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULeapEventInterface_ScreenTapGestureDetected);
		if (Func)
		{
			Parms.Gesture=Gesture;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_ULeapEventInterface_SwipeGestureDetected = FName(TEXT("SwipeGestureDetected"));
	void ILeapEventInterface::Execute_SwipeGestureDetected(UObject* O, ULeapSwipeGesture* Gesture)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULeapEventInterface::StaticClass()));
		LeapEventInterface_eventSwipeGestureDetected_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULeapEventInterface_SwipeGestureDetected);
		if (Func)
		{
			Parms.Gesture=Gesture;
			O->ProcessEvent(Func, &Parms);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
