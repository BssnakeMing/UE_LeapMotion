// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleLeapMotion/Public/LeapFrame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapFrame() {}
// Cross Module References
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapFrame_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapFrame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SimpleLeapMotion();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapFinger_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapFingerList_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapGesture_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapGestureList_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapHand_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapHandList_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapImageList_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapInteractionBox_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapPointable_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapPointableList_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapTool_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapToolList_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULeapFrame::execTranslationProbability)
	{
		P_GET_OBJECT(ULeapFrame,Z_Param_Frame);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->TranslationProbability(Z_Param_Frame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapFrame::execTranslation)
	{
		P_GET_OBJECT(ULeapFrame,Z_Param_Frame);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->Translation(Z_Param_Frame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapFrame::execTools)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapToolList**)Z_Param__Result=P_THIS->Tools();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapFrame::execTool)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapTool**)Z_Param__Result=P_THIS->Tool(Z_Param_Id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapFrame::execScaleProbability)
	{
		P_GET_OBJECT(ULeapFrame,Z_Param_Frame);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->ScaleProbability(Z_Param_Frame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapFrame::execScaleFactor)
	{
		P_GET_OBJECT(ULeapFrame,Z_Param_Frame);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->ScaleFactor(Z_Param_Frame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapFrame::execRotationProbability)
	{
		P_GET_OBJECT(ULeapFrame,Z_Param_Frame);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->RotationProbability(Z_Param_Frame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapFrame::execRotationAxis)
	{
		P_GET_OBJECT(ULeapFrame,Z_Param_Frame);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->RotationAxis(Z_Param_Frame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapFrame::execRotationAngleAroundAxis)
	{
		P_GET_OBJECT(ULeapFrame,Z_Param_Frame);
		P_GET_STRUCT(FVector,Z_Param_Axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->RotationAngleAroundAxis(Z_Param_Frame,Z_Param_Axis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapFrame::execRotationAngle)
	{
		P_GET_OBJECT(ULeapFrame,Z_Param_Frame);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->RotationAngle(Z_Param_Frame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapFrame::execPointables)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapPointableList**)Z_Param__Result=P_THIS->Pointables();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapFrame::execPointable)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapPointable**)Z_Param__Result=P_THIS->Pointable(Z_Param_Id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapFrame::execInteractionBox)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapInteractionBox**)Z_Param__Result=P_THIS->InteractionBox();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapFrame::execImages)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapImageList**)Z_Param__Result=P_THIS->Images();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapFrame::execHands)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapHandList**)Z_Param__Result=P_THIS->Hands();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapFrame::execHand)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapHand**)Z_Param__Result=P_THIS->Hand(Z_Param_Id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapFrame::execGesturesSinceFrame)
	{
		P_GET_OBJECT(ULeapFrame,Z_Param_Frame);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapGestureList**)Z_Param__Result=P_THIS->GesturesSinceFrame(Z_Param_Frame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapFrame::execGestures)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapGestureList**)Z_Param__Result=P_THIS->Gestures();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapFrame::execGesture)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapGesture**)Z_Param__Result=P_THIS->Gesture(Z_Param_Id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapFrame::execFingers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapFingerList**)Z_Param__Result=P_THIS->Fingers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapFrame::execFinger)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapFinger**)Z_Param__Result=P_THIS->Finger(Z_Param_Id);
		P_NATIVE_END;
	}
	void ULeapFrame::StaticRegisterNativesULeapFrame()
	{
		UClass* Class = ULeapFrame::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Finger", &ULeapFrame::execFinger },
			{ "Fingers", &ULeapFrame::execFingers },
			{ "Gesture", &ULeapFrame::execGesture },
			{ "Gestures", &ULeapFrame::execGestures },
			{ "GesturesSinceFrame", &ULeapFrame::execGesturesSinceFrame },
			{ "Hand", &ULeapFrame::execHand },
			{ "Hands", &ULeapFrame::execHands },
			{ "Images", &ULeapFrame::execImages },
			{ "InteractionBox", &ULeapFrame::execInteractionBox },
			{ "Pointable", &ULeapFrame::execPointable },
			{ "Pointables", &ULeapFrame::execPointables },
			{ "RotationAngle", &ULeapFrame::execRotationAngle },
			{ "RotationAngleAroundAxis", &ULeapFrame::execRotationAngleAroundAxis },
			{ "RotationAxis", &ULeapFrame::execRotationAxis },
			{ "RotationProbability", &ULeapFrame::execRotationProbability },
			{ "ScaleFactor", &ULeapFrame::execScaleFactor },
			{ "ScaleProbability", &ULeapFrame::execScaleProbability },
			{ "Tool", &ULeapFrame::execTool },
			{ "Tools", &ULeapFrame::execTools },
			{ "Translation", &ULeapFrame::execTranslation },
			{ "TranslationProbability", &ULeapFrame::execTranslationProbability },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULeapFrame_Finger_Statics
	{
		struct LeapFrame_eventFinger_Parms
		{
			int32 Id;
			ULeapFinger* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULeapFrame_Finger_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventFinger_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapFrame_Finger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventFinger_Parms, ReturnValue), Z_Construct_UClass_ULeapFinger_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapFrame_Finger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_Finger_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_Finger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapFrame_Finger_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Frame" },
		{ "Comment", "/**\n\x09* The Finger object with the specified ID in this frame.\n\x09* \n\x09* @param\x09Id The ID value of a Finger object from a previous frame.\n\x09* @return\x09The Finger object with the matching ID if one exists in this frame; otherwise, an invalid Finger object is returned.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
		{ "ToolTip", "The Finger object with the specified ID in this frame.\n\n@param        Id The ID value of a Finger object from a previous frame.\n@return       The Finger object with the matching ID if one exists in this frame; otherwise, an invalid Finger object is returned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapFrame_Finger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapFrame, nullptr, "Finger", nullptr, nullptr, sizeof(LeapFrame_eventFinger_Parms), Z_Construct_UFunction_ULeapFrame_Finger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_Finger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapFrame_Finger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_Finger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapFrame_Finger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapFrame_Finger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapFrame_Fingers_Statics
	{
		struct LeapFrame_eventFingers_Parms
		{
			ULeapFingerList* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapFrame_Fingers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventFingers_Parms, ReturnValue), Z_Construct_UClass_ULeapFingerList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapFrame_Fingers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_Fingers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapFrame_Fingers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Frame" },
		{ "Comment", "/**\n\x09* The list of Finger objects detected in this frame, given in arbitrary order.\n\x09*\n\x09* @return\x09The FingerList containing all Finger objects detected in this frame.\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "fingers" },
		{ "Keywords", "get fingers" },
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
		{ "ToolTip", "The list of Finger objects detected in this frame, given in arbitrary order.\n\n@return       The FingerList containing all Finger objects detected in this frame." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapFrame_Fingers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapFrame, nullptr, "Fingers", nullptr, nullptr, sizeof(LeapFrame_eventFingers_Parms), Z_Construct_UFunction_ULeapFrame_Fingers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_Fingers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapFrame_Fingers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_Fingers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapFrame_Fingers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapFrame_Fingers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapFrame_Gesture_Statics
	{
		struct LeapFrame_eventGesture_Parms
		{
			int32 Id;
			ULeapGesture* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULeapFrame_Gesture_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventGesture_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapFrame_Gesture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventGesture_Parms, ReturnValue), Z_Construct_UClass_ULeapGesture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapFrame_Gesture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_Gesture_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_Gesture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapFrame_Gesture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Frame" },
		{ "Comment", "/**\n\x09* The Gesture object with the specified ID in this frame.\n\x09*\n\x09* @param\x09\x09Id The ID of an Gesture object from a previous frame.\n\x09* @return The Gesture object in the frame with the specified ID if one exists; Otherwise, an Invalid Gesture object.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
		{ "ToolTip", "The Gesture object with the specified ID in this frame.\n\n@param                Id The ID of an Gesture object from a previous frame.\n@return The Gesture object in the frame with the specified ID if one exists; Otherwise, an Invalid Gesture object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapFrame_Gesture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapFrame, nullptr, "Gesture", nullptr, nullptr, sizeof(LeapFrame_eventGesture_Parms), Z_Construct_UFunction_ULeapFrame_Gesture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_Gesture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapFrame_Gesture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_Gesture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapFrame_Gesture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapFrame_Gesture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapFrame_Gestures_Statics
	{
		struct LeapFrame_eventGestures_Parms
		{
			ULeapGestureList* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapFrame_Gestures_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventGestures_Parms, ReturnValue), Z_Construct_UClass_ULeapGestureList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapFrame_Gestures_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_Gestures_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapFrame_Gestures_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Frame" },
		{ "Comment", "/**\n\x09* The gestures recognized or continuing in this frame.\n\x09*\n\x09* @return the list of gestures.\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "gestures" },
		{ "Keywords", "get gestures" },
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
		{ "ToolTip", "The gestures recognized or continuing in this frame.\n\n@return the list of gestures." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapFrame_Gestures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapFrame, nullptr, "Gestures", nullptr, nullptr, sizeof(LeapFrame_eventGestures_Parms), Z_Construct_UFunction_ULeapFrame_Gestures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_Gestures_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapFrame_Gestures_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_Gestures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapFrame_Gestures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapFrame_Gestures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapFrame_GesturesSinceFrame_Statics
	{
		struct LeapFrame_eventGesturesSinceFrame_Parms
		{
			ULeapFrame* Frame;
			ULeapGestureList* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Frame;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapFrame_GesturesSinceFrame_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventGesturesSinceFrame_Parms, Frame), Z_Construct_UClass_ULeapFrame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapFrame_GesturesSinceFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventGesturesSinceFrame_Parms, ReturnValue), Z_Construct_UClass_ULeapGestureList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapFrame_GesturesSinceFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_GesturesSinceFrame_Statics::NewProp_Frame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_GesturesSinceFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapFrame_GesturesSinceFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Frame" },
		{ "Comment", "/**\n\x09* Returns a GestureList containing all gestures that have occurred since the specified frame.\n\x09*\n\x09* @param\x09\x09""Frame An earlier Frame object. The starting frame must still be in the frame history cache, which has a default length of 60 frames.\n\x09* @return GestureList The list of the Gesture objects that have occurred since the specified frame.\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "gestures" },
		{ "Keywords", "get gestures" },
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
		{ "ToolTip", "Returns a GestureList containing all gestures that have occurred since the specified frame.\n\n@param                Frame An earlier Frame object. The starting frame must still be in the frame history cache, which has a default length of 60 frames.\n@return GestureList The list of the Gesture objects that have occurred since the specified frame." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapFrame_GesturesSinceFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapFrame, nullptr, "GesturesSinceFrame", nullptr, nullptr, sizeof(LeapFrame_eventGesturesSinceFrame_Parms), Z_Construct_UFunction_ULeapFrame_GesturesSinceFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_GesturesSinceFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapFrame_GesturesSinceFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_GesturesSinceFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapFrame_GesturesSinceFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapFrame_GesturesSinceFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapFrame_Hand_Statics
	{
		struct LeapFrame_eventHand_Parms
		{
			int32 Id;
			ULeapHand* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULeapFrame_Hand_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventHand_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapFrame_Hand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventHand_Parms, ReturnValue), Z_Construct_UClass_ULeapHand_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapFrame_Hand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_Hand_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_Hand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapFrame_Hand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Frame" },
		{ "Comment", "/**\n\x09* The Hand object with the specified ID in this frame.\n\x09*\n\x09* @param\x09\x09Id The ID value of a Hand object from a previous frame.\n\x09* @return The Hand object with the matching ID if one exists in this frame; otherwise, an invalid Hand object is returned.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
		{ "ToolTip", "The Hand object with the specified ID in this frame.\n\n@param                Id The ID value of a Hand object from a previous frame.\n@return The Hand object with the matching ID if one exists in this frame; otherwise, an invalid Hand object is returned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapFrame_Hand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapFrame, nullptr, "Hand", nullptr, nullptr, sizeof(LeapFrame_eventHand_Parms), Z_Construct_UFunction_ULeapFrame_Hand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_Hand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapFrame_Hand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_Hand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapFrame_Hand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapFrame_Hand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapFrame_Hands_Statics
	{
		struct LeapFrame_eventHands_Parms
		{
			ULeapHandList* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapFrame_Hands_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventHands_Parms, ReturnValue), Z_Construct_UClass_ULeapHandList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapFrame_Hands_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_Hands_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapFrame_Hands_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Frame" },
		{ "Comment", "/**\n\x09* The list of Hand objects detected in this frame, given in arbitrary order.\n\x09*\n\x09* @return The HandList containing all Hand objects detected in this frame.\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "getHands" },
		{ "Keywords", "get hands" },
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
		{ "ToolTip", "The list of Hand objects detected in this frame, given in arbitrary order.\n\n@return The HandList containing all Hand objects detected in this frame." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapFrame_Hands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapFrame, nullptr, "Hands", nullptr, nullptr, sizeof(LeapFrame_eventHands_Parms), Z_Construct_UFunction_ULeapFrame_Hands_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_Hands_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapFrame_Hands_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_Hands_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapFrame_Hands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapFrame_Hands_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapFrame_Images_Statics
	{
		struct LeapFrame_eventImages_Parms
		{
			ULeapImageList* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapFrame_Images_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventImages_Parms, ReturnValue), Z_Construct_UClass_ULeapImageList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapFrame_Images_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_Images_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapFrame_Images_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Frame" },
		{ "Comment", "/**\n\x09* The list of images from the Leap Motion cameras.\n\x09*\n\x09* @return An ImageList object containing the camera images analyzed to create this Frame.\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "images" },
		{ "Keywords", "get images" },
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
		{ "ToolTip", "The list of images from the Leap Motion cameras.\n\n@return An ImageList object containing the camera images analyzed to create this Frame." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapFrame_Images_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapFrame, nullptr, "Images", nullptr, nullptr, sizeof(LeapFrame_eventImages_Parms), Z_Construct_UFunction_ULeapFrame_Images_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_Images_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapFrame_Images_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_Images_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapFrame_Images()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapFrame_Images_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapFrame_InteractionBox_Statics
	{
		struct LeapFrame_eventInteractionBox_Parms
		{
			ULeapInteractionBox* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapFrame_InteractionBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventInteractionBox_Parms, ReturnValue), Z_Construct_UClass_ULeapInteractionBox_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapFrame_InteractionBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_InteractionBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapFrame_InteractionBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Frame" },
		{ "Comment", "/**\n\x09* The current InteractionBox for the frame.\n\x09*\n\x09* @return The current InteractionBox object.\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "interactionBox" },
		{ "Keywords", "get interaction box" },
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
		{ "ToolTip", "The current InteractionBox for the frame.\n\n@return The current InteractionBox object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapFrame_InteractionBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapFrame, nullptr, "InteractionBox", nullptr, nullptr, sizeof(LeapFrame_eventInteractionBox_Parms), Z_Construct_UFunction_ULeapFrame_InteractionBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_InteractionBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapFrame_InteractionBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_InteractionBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapFrame_InteractionBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapFrame_InteractionBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapFrame_Pointable_Statics
	{
		struct LeapFrame_eventPointable_Parms
		{
			int32 Id;
			ULeapPointable* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULeapFrame_Pointable_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventPointable_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapFrame_Pointable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventPointable_Parms, ReturnValue), Z_Construct_UClass_ULeapPointable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapFrame_Pointable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_Pointable_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_Pointable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapFrame_Pointable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Frame" },
		{ "Comment", "/**\n\x09* The Pointable object with the specified ID in this frame.\n\x09*\n\x09* @param\x09\x09Id The ID value of a Pointable object from a previous frame.\n\x09* @return The Pointable object with the matching ID if one exists in this frame; otherwise, an invalid Pointable object is returned.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
		{ "ToolTip", "The Pointable object with the specified ID in this frame.\n\n@param                Id The ID value of a Pointable object from a previous frame.\n@return The Pointable object with the matching ID if one exists in this frame; otherwise, an invalid Pointable object is returned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapFrame_Pointable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapFrame, nullptr, "Pointable", nullptr, nullptr, sizeof(LeapFrame_eventPointable_Parms), Z_Construct_UFunction_ULeapFrame_Pointable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_Pointable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapFrame_Pointable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_Pointable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapFrame_Pointable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapFrame_Pointable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapFrame_Pointables_Statics
	{
		struct LeapFrame_eventPointables_Parms
		{
			ULeapPointableList* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapFrame_Pointables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventPointables_Parms, ReturnValue), Z_Construct_UClass_ULeapPointableList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapFrame_Pointables_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_Pointables_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapFrame_Pointables_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Frame" },
		{ "Comment", "/**\n\x09* The list of Pointable objects (fingers and tools) detected in this frame, given in arbitrary order.\n\x09*\n\x09* @return The PointableList containing all Pointable objects detected in this frame.\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "pointables" },
		{ "Keywords", "get pointables" },
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
		{ "ToolTip", "The list of Pointable objects (fingers and tools) detected in this frame, given in arbitrary order.\n\n@return The PointableList containing all Pointable objects detected in this frame." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapFrame_Pointables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapFrame, nullptr, "Pointables", nullptr, nullptr, sizeof(LeapFrame_eventPointables_Parms), Z_Construct_UFunction_ULeapFrame_Pointables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_Pointables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapFrame_Pointables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_Pointables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapFrame_Pointables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapFrame_Pointables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapFrame_RotationAngle_Statics
	{
		struct LeapFrame_eventRotationAngle_Parms
		{
			ULeapFrame* Frame;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Frame;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapFrame_RotationAngle_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventRotationAngle_Parms, Frame), Z_Construct_UClass_ULeapFrame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULeapFrame_RotationAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventRotationAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapFrame_RotationAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_RotationAngle_Statics::NewProp_Frame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_RotationAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapFrame_RotationAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Frame" },
		{ "Comment", "/**\n\x09* The angle of rotation around the rotation axis derived from the overall rotational motion between the current frame and the specified frame.\n\x09*\n\x09* @param Frame\x09The starting frame for computing the relative rotation.\n\x09* @return A positive value containing the heuristically determined rotational change between the current frame and that specified in the sinceFrame parameter.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
		{ "ToolTip", "The angle of rotation around the rotation axis derived from the overall rotational motion between the current frame and the specified frame.\n\n@param Frame  The starting frame for computing the relative rotation.\n@return A positive value containing the heuristically determined rotational change between the current frame and that specified in the sinceFrame parameter." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapFrame_RotationAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapFrame, nullptr, "RotationAngle", nullptr, nullptr, sizeof(LeapFrame_eventRotationAngle_Parms), Z_Construct_UFunction_ULeapFrame_RotationAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_RotationAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapFrame_RotationAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_RotationAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapFrame_RotationAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapFrame_RotationAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapFrame_RotationAngleAroundAxis_Statics
	{
		struct LeapFrame_eventRotationAngleAroundAxis_Parms
		{
			ULeapFrame* Frame;
			FVector Axis;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Frame;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Axis;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapFrame_RotationAngleAroundAxis_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventRotationAngleAroundAxis_Parms, Frame), Z_Construct_UClass_ULeapFrame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapFrame_RotationAngleAroundAxis_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventRotationAngleAroundAxis_Parms, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULeapFrame_RotationAngleAroundAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventRotationAngleAroundAxis_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapFrame_RotationAngleAroundAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_RotationAngleAroundAxis_Statics::NewProp_Frame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_RotationAngleAroundAxis_Statics::NewProp_Axis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_RotationAngleAroundAxis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapFrame_RotationAngleAroundAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Frame" },
		{ "Comment", "/**\n\x09* The angle of rotation around the specified axis derived from the overall rotational motion between the current frame and the specified frame.\n\x09*\n\x09* @param Frame\x09The starting frame for computing the relative rotation.\n\x09* @param Axis\x09The axis to measure rotation around.\n\x09* @return A value containing the heuristically determined rotational change between the current frame and that specified in the sinceFrame parameter around the given axis.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
		{ "ToolTip", "The angle of rotation around the specified axis derived from the overall rotational motion between the current frame and the specified frame.\n\n@param Frame  The starting frame for computing the relative rotation.\n@param Axis   The axis to measure rotation around.\n@return A value containing the heuristically determined rotational change between the current frame and that specified in the sinceFrame parameter around the given axis." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapFrame_RotationAngleAroundAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapFrame, nullptr, "RotationAngleAroundAxis", nullptr, nullptr, sizeof(LeapFrame_eventRotationAngleAroundAxis_Parms), Z_Construct_UFunction_ULeapFrame_RotationAngleAroundAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_RotationAngleAroundAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapFrame_RotationAngleAroundAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_RotationAngleAroundAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapFrame_RotationAngleAroundAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapFrame_RotationAngleAroundAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapFrame_RotationAxis_Statics
	{
		struct LeapFrame_eventRotationAxis_Parms
		{
			ULeapFrame* Frame;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Frame;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapFrame_RotationAxis_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventRotationAxis_Parms, Frame), Z_Construct_UClass_ULeapFrame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapFrame_RotationAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventRotationAxis_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapFrame_RotationAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_RotationAxis_Statics::NewProp_Frame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_RotationAxis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapFrame_RotationAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Frame" },
		{ "Comment", "/**\n\x09* The axis of rotation derived from the overall rotational motion between the current frame and the specified frame.\n\x09*\n\x09* @param Frame\x09The starting frame for computing the relative rotation.\n\x09* @return A normalized direction Vector representing the axis of the heuristically determined rotational change between the current frame and that specified in the sinceFrame parameter.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
		{ "ToolTip", "The axis of rotation derived from the overall rotational motion between the current frame and the specified frame.\n\n@param Frame  The starting frame for computing the relative rotation.\n@return A normalized direction Vector representing the axis of the heuristically determined rotational change between the current frame and that specified in the sinceFrame parameter." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapFrame_RotationAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapFrame, nullptr, "RotationAxis", nullptr, nullptr, sizeof(LeapFrame_eventRotationAxis_Parms), Z_Construct_UFunction_ULeapFrame_RotationAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_RotationAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapFrame_RotationAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_RotationAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapFrame_RotationAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapFrame_RotationAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapFrame_RotationProbability_Statics
	{
		struct LeapFrame_eventRotationProbability_Parms
		{
			ULeapFrame* Frame;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Frame;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapFrame_RotationProbability_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventRotationProbability_Parms, Frame), Z_Construct_UClass_ULeapFrame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULeapFrame_RotationProbability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventRotationProbability_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapFrame_RotationProbability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_RotationProbability_Statics::NewProp_Frame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_RotationProbability_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapFrame_RotationProbability_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Frame" },
		{ "Comment", "/**\n\x09* The estimated probability that the overall motion between the current frame and the specified frame is intended to be a rotating motion.\n\x09*\n\x09* @param Frame\x09The starting frame for computing the relative rotation.\n\x09* @return A value between 0 and 1 representing the estimated probability that the overall motion between the current frame and the specified frame is intended to be a rotating motion.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
		{ "ToolTip", "The estimated probability that the overall motion between the current frame and the specified frame is intended to be a rotating motion.\n\n@param Frame  The starting frame for computing the relative rotation.\n@return A value between 0 and 1 representing the estimated probability that the overall motion between the current frame and the specified frame is intended to be a rotating motion." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapFrame_RotationProbability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapFrame, nullptr, "RotationProbability", nullptr, nullptr, sizeof(LeapFrame_eventRotationProbability_Parms), Z_Construct_UFunction_ULeapFrame_RotationProbability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_RotationProbability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapFrame_RotationProbability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_RotationProbability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapFrame_RotationProbability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapFrame_RotationProbability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapFrame_ScaleFactor_Statics
	{
		struct LeapFrame_eventScaleFactor_Parms
		{
			ULeapFrame* Frame;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Frame;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapFrame_ScaleFactor_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventScaleFactor_Parms, Frame), Z_Construct_UClass_ULeapFrame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULeapFrame_ScaleFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventScaleFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapFrame_ScaleFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_ScaleFactor_Statics::NewProp_Frame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_ScaleFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapFrame_ScaleFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Frame" },
		{ "Comment", "/**\n\x09* The scale factor derived from the overall motion between the current frame and the specified frame.\n\x09*\n\x09* @param Frame\x09The starting frame for computing the relative scaling.\n\x09* @return A positive value representing the heuristically determined scaling change ratio between the current frame and that specified in the sinceFrame parameter.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
		{ "ToolTip", "The scale factor derived from the overall motion between the current frame and the specified frame.\n\n@param Frame  The starting frame for computing the relative scaling.\n@return A positive value representing the heuristically determined scaling change ratio between the current frame and that specified in the sinceFrame parameter." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapFrame_ScaleFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapFrame, nullptr, "ScaleFactor", nullptr, nullptr, sizeof(LeapFrame_eventScaleFactor_Parms), Z_Construct_UFunction_ULeapFrame_ScaleFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_ScaleFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapFrame_ScaleFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_ScaleFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapFrame_ScaleFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapFrame_ScaleFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapFrame_ScaleProbability_Statics
	{
		struct LeapFrame_eventScaleProbability_Parms
		{
			ULeapFrame* Frame;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Frame;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapFrame_ScaleProbability_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventScaleProbability_Parms, Frame), Z_Construct_UClass_ULeapFrame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULeapFrame_ScaleProbability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventScaleProbability_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapFrame_ScaleProbability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_ScaleProbability_Statics::NewProp_Frame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_ScaleProbability_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapFrame_ScaleProbability_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Frame" },
		{ "Comment", "/**\n\x09* The estimated probability that the overall motion between the current frame and the specified frame is intended to be a scaling motion.\n\x09*\n\x09* @param Frame\x09The starting frame for computing the relative scaling.\n\x09* @return A value between 0 and 1 representing the estimated probability that the overall motion between the current frame and the specified frame is intended to be a scaling motion.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
		{ "ToolTip", "The estimated probability that the overall motion between the current frame and the specified frame is intended to be a scaling motion.\n\n@param Frame  The starting frame for computing the relative scaling.\n@return A value between 0 and 1 representing the estimated probability that the overall motion between the current frame and the specified frame is intended to be a scaling motion." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapFrame_ScaleProbability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapFrame, nullptr, "ScaleProbability", nullptr, nullptr, sizeof(LeapFrame_eventScaleProbability_Parms), Z_Construct_UFunction_ULeapFrame_ScaleProbability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_ScaleProbability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapFrame_ScaleProbability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_ScaleProbability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapFrame_ScaleProbability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapFrame_ScaleProbability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapFrame_Tool_Statics
	{
		struct LeapFrame_eventTool_Parms
		{
			int32 Id;
			ULeapTool* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULeapFrame_Tool_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventTool_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapFrame_Tool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventTool_Parms, ReturnValue), Z_Construct_UClass_ULeapTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapFrame_Tool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_Tool_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_Tool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapFrame_Tool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Frame" },
		{ "Comment", "/**\n\x09* The Tool object with the specified ID in this frame.\n\x09*\n\x09* @param Id\x09\x09The ID value of a Tool object from a previous frame.\n\x09* @return The Tool object with the matching ID if one exists in this frame; otherwise, an invalid Tool object is returned.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
		{ "ToolTip", "The Tool object with the specified ID in this frame.\n\n@param Id             The ID value of a Tool object from a previous frame.\n@return The Tool object with the matching ID if one exists in this frame; otherwise, an invalid Tool object is returned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapFrame_Tool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapFrame, nullptr, "Tool", nullptr, nullptr, sizeof(LeapFrame_eventTool_Parms), Z_Construct_UFunction_ULeapFrame_Tool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_Tool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapFrame_Tool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_Tool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapFrame_Tool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapFrame_Tool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapFrame_Tools_Statics
	{
		struct LeapFrame_eventTools_Parms
		{
			ULeapToolList* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapFrame_Tools_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventTools_Parms, ReturnValue), Z_Construct_UClass_ULeapToolList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapFrame_Tools_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_Tools_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapFrame_Tools_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Frame" },
		{ "Comment", "/**\n\x09* The list of Tool objects detected in this frame, given in arbitrary order.\n\x09*\n\x09* @return The ToolList containing all Tool objects detected in this frame.\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "pointables" },
		{ "Keywords", "get pointables" },
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
		{ "ToolTip", "The list of Tool objects detected in this frame, given in arbitrary order.\n\n@return The ToolList containing all Tool objects detected in this frame." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapFrame_Tools_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapFrame, nullptr, "Tools", nullptr, nullptr, sizeof(LeapFrame_eventTools_Parms), Z_Construct_UFunction_ULeapFrame_Tools_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_Tools_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapFrame_Tools_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_Tools_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapFrame_Tools()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapFrame_Tools_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapFrame_Translation_Statics
	{
		struct LeapFrame_eventTranslation_Parms
		{
			ULeapFrame* Frame;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Frame;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapFrame_Translation_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventTranslation_Parms, Frame), Z_Construct_UClass_ULeapFrame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapFrame_Translation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventTranslation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapFrame_Translation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_Translation_Statics::NewProp_Frame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_Translation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapFrame_Translation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Frame" },
		{ "Comment", "/**\n\x09* The change of position derived from the overall linear motion between the current frame and the specified frame.\n\x09*\n\x09* @param Frame\x09The starting frame for computing the relative translation.\n\x09* @return A Vector representing the heuristically determined change in position of all objects between the current frame and that specified in the frame parameter.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
		{ "ToolTip", "The change of position derived from the overall linear motion between the current frame and the specified frame.\n\n@param Frame  The starting frame for computing the relative translation.\n@return A Vector representing the heuristically determined change in position of all objects between the current frame and that specified in the frame parameter." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapFrame_Translation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapFrame, nullptr, "Translation", nullptr, nullptr, sizeof(LeapFrame_eventTranslation_Parms), Z_Construct_UFunction_ULeapFrame_Translation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_Translation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapFrame_Translation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_Translation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapFrame_Translation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapFrame_Translation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapFrame_TranslationProbability_Statics
	{
		struct LeapFrame_eventTranslationProbability_Parms
		{
			ULeapFrame* Frame;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Frame;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapFrame_TranslationProbability_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventTranslationProbability_Parms, Frame), Z_Construct_UClass_ULeapFrame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULeapFrame_TranslationProbability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFrame_eventTranslationProbability_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapFrame_TranslationProbability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_TranslationProbability_Statics::NewProp_Frame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFrame_TranslationProbability_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapFrame_TranslationProbability_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Frame" },
		{ "Comment", "/**\n\x09* The estimated probability that the overall motion between the current frame and the specified frame is intended to be a translating motion.\n\x09*\n\x09* @param Frame\x09The starting frame for computing the translation.\n\x09* @return A value between 0 and 1 representing the estimated probability that the overall motion between the current frame and the specified frame is intended to be a translating motion.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
		{ "ToolTip", "The estimated probability that the overall motion between the current frame and the specified frame is intended to be a translating motion.\n\n@param Frame  The starting frame for computing the translation.\n@return A value between 0 and 1 representing the estimated probability that the overall motion between the current frame and the specified frame is intended to be a translating motion." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapFrame_TranslationProbability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapFrame, nullptr, "TranslationProbability", nullptr, nullptr, sizeof(LeapFrame_eventTranslationProbability_Parms), Z_Construct_UFunction_ULeapFrame_TranslationProbability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_TranslationProbability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapFrame_TranslationProbability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFrame_TranslationProbability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapFrame_TranslationProbability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapFrame_TranslationProbability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULeapFrame_NoRegister()
	{
		return ULeapFrame::StaticClass();
	}
	struct Z_Construct_UClass_ULeapFrame_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFPS_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentFPS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsValid_MetaData[];
#endif
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PFinger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PFinger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PFingers_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PFingers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PGesture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PGesture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PGestures_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PGestures;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PHands_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PHands;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PImages_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PImages;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PInteractionBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PInteractionBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PPointable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PPointable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PPointables_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PPointables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PTool_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PTool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PTools_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PTools;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULeapFrame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULeapFrame_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeapFrame_Finger, "Finger" }, // 1504411196
		{ &Z_Construct_UFunction_ULeapFrame_Fingers, "Fingers" }, // 841403413
		{ &Z_Construct_UFunction_ULeapFrame_Gesture, "Gesture" }, // 536264789
		{ &Z_Construct_UFunction_ULeapFrame_Gestures, "Gestures" }, // 2116867442
		{ &Z_Construct_UFunction_ULeapFrame_GesturesSinceFrame, "GesturesSinceFrame" }, // 2686498628
		{ &Z_Construct_UFunction_ULeapFrame_Hand, "Hand" }, // 3904983656
		{ &Z_Construct_UFunction_ULeapFrame_Hands, "Hands" }, // 3748784367
		{ &Z_Construct_UFunction_ULeapFrame_Images, "Images" }, // 3932239095
		{ &Z_Construct_UFunction_ULeapFrame_InteractionBox, "InteractionBox" }, // 1528751270
		{ &Z_Construct_UFunction_ULeapFrame_Pointable, "Pointable" }, // 2518783994
		{ &Z_Construct_UFunction_ULeapFrame_Pointables, "Pointables" }, // 2150240115
		{ &Z_Construct_UFunction_ULeapFrame_RotationAngle, "RotationAngle" }, // 2116560793
		{ &Z_Construct_UFunction_ULeapFrame_RotationAngleAroundAxis, "RotationAngleAroundAxis" }, // 866857306
		{ &Z_Construct_UFunction_ULeapFrame_RotationAxis, "RotationAxis" }, // 166694885
		{ &Z_Construct_UFunction_ULeapFrame_RotationProbability, "RotationProbability" }, // 3572035162
		{ &Z_Construct_UFunction_ULeapFrame_ScaleFactor, "ScaleFactor" }, // 3262447737
		{ &Z_Construct_UFunction_ULeapFrame_ScaleProbability, "ScaleProbability" }, // 3650779678
		{ &Z_Construct_UFunction_ULeapFrame_Tool, "Tool" }, // 2437841971
		{ &Z_Construct_UFunction_ULeapFrame_Tools, "Tools" }, // 3394273731
		{ &Z_Construct_UFunction_ULeapFrame_Translation, "Translation" }, // 1137432363
		{ &Z_Construct_UFunction_ULeapFrame_TranslationProbability, "TranslationProbability" }, // 3071104974
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapFrame_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* The Frame class represents a set of hand and finger tracking data detected \n* in a single frame.\n* \n* The Leap Motion software detects hands, fingers and tools within the tracking\n* area, reporting their positions, orientations, gestures, and motions in frames\n* at the Leap Motion frame rate.\n* Frame \xe7\xb1\xbb\xe8\xa1\xa8\xe7\xa4\xba\xe5\x9c\xa8\xe5\x8d\x95\xe4\xb8\xaa\xe5\xb8\xa7\xe4\xb8\xad\xe6\xa3\x80\xe6\xb5\x8b\xe5\x88\xb0\xe7\x9a\x84\xe4\xb8\x80\xe7\xbb\x84\xe6\x89\x8b\xe5\x92\x8c\xe6\x89\x8b\xe6\x8c\x87\xe8\xb7\x9f\xe8\xb8\xaa\xe6\x95\xb0\xe6\x8d\xae\xe3\x80\x82\n* Leap Motion \xe8\xbd\xaf\xe4\xbb\xb6\xe5\x9c\xa8\xe8\xb7\x9f\xe8\xb8\xaa\xe5\x8c\xba\xe5\x9f\x9f\xe5\x86\x85\xe6\xa3\x80\xe6\xb5\x8b\xe6\x89\x8b\xe3\x80\x81\xe6\x89\x8b\xe6\x8c\x87\xe5\x92\x8c\xe5\xb7\xa5\xe5\x85\xb7\xef\xbc\x8c\xe5\xb9\xb6\xe4\xbb\xa5 Leap Motion \xe5\xb8\xa7\xe9\x80\x9f\xe7\x8e\x87\xe5\x9c\xa8\xe5\xb8\xa7\xe4\xb8\xad\xe6\x8a\xa5\xe5\x91\x8a\xe5\xae\x83\xe4\xbb\xac\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xe3\x80\x81\xe6\x96\xb9\xe5\x90\x91\xe3\x80\x81\xe6\x89\x8b\xe5\x8a\xbf\xe5\x92\x8c\xe8\xbf\x90\xe5\x8a\xa8\xe3\x80\x82\n*\n* Leap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.Frame.html\n*/" },
		{ "IncludePath", "LeapFrame.h" },
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The Frame class represents a set of hand and finger tracking data detected\nin a single frame.\n\nThe Leap Motion software detects hands, fingers and tools within the tracking\narea, reporting their positions, orientations, gestures, and motions in frames\nat the Leap Motion frame rate.\nFrame \xe7\xb1\xbb\xe8\xa1\xa8\xe7\xa4\xba\xe5\x9c\xa8\xe5\x8d\x95\xe4\xb8\xaa\xe5\xb8\xa7\xe4\xb8\xad\xe6\xa3\x80\xe6\xb5\x8b\xe5\x88\xb0\xe7\x9a\x84\xe4\xb8\x80\xe7\xbb\x84\xe6\x89\x8b\xe5\x92\x8c\xe6\x89\x8b\xe6\x8c\x87\xe8\xb7\x9f\xe8\xb8\xaa\xe6\x95\xb0\xe6\x8d\xae\xe3\x80\x82\nLeap Motion \xe8\xbd\xaf\xe4\xbb\xb6\xe5\x9c\xa8\xe8\xb7\x9f\xe8\xb8\xaa\xe5\x8c\xba\xe5\x9f\x9f\xe5\x86\x85\xe6\xa3\x80\xe6\xb5\x8b\xe6\x89\x8b\xe3\x80\x81\xe6\x89\x8b\xe6\x8c\x87\xe5\x92\x8c\xe5\xb7\xa5\xe5\x85\xb7\xef\xbc\x8c\xe5\xb9\xb6\xe4\xbb\xa5 Leap Motion \xe5\xb8\xa7\xe9\x80\x9f\xe7\x8e\x87\xe5\x9c\xa8\xe5\xb8\xa7\xe4\xb8\xad\xe6\x8a\xa5\xe5\x91\x8a\xe5\xae\x83\xe4\xbb\xac\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xe3\x80\x81\xe6\x96\xb9\xe5\x90\x91\xe3\x80\x81\xe6\x89\x8b\xe5\x8a\xbf\xe5\x92\x8c\xe8\xbf\x90\xe5\x8a\xa8\xe3\x80\x82\n\nLeap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.Frame.html" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapFrame_Statics::NewProp_CurrentFPS_MetaData[] = {
		{ "Category", "Leap Frame" },
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapFrame_Statics::NewProp_CurrentFPS = { "CurrentFPS", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapFrame, CurrentFPS), METADATA_PARAMS(Z_Construct_UClass_ULeapFrame_Statics::NewProp_CurrentFPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapFrame_Statics::NewProp_CurrentFPS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapFrame_Statics::NewProp_IsValid_MetaData[] = {
		{ "Category", "Leap Frame" },
		{ "Comment", "/**\n\x09* Whether this Frame instance is valid.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
		{ "ToolTip", "Whether this Frame instance is valid." },
	};
#endif
	void Z_Construct_UClass_ULeapFrame_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((ULeapFrame*)Obj)->IsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULeapFrame_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULeapFrame), &Z_Construct_UClass_ULeapFrame_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULeapFrame_Statics::NewProp_IsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapFrame_Statics::NewProp_IsValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapFrame_Statics::NewProp_PFinger_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapFrame_Statics::NewProp_PFinger = { "PFinger", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapFrame, PFinger), Z_Construct_UClass_ULeapFinger_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapFrame_Statics::NewProp_PFinger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapFrame_Statics::NewProp_PFinger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapFrame_Statics::NewProp_PFingers_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapFrame_Statics::NewProp_PFingers = { "PFingers", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapFrame, PFingers), Z_Construct_UClass_ULeapFingerList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapFrame_Statics::NewProp_PFingers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapFrame_Statics::NewProp_PFingers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapFrame_Statics::NewProp_PGesture_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapFrame_Statics::NewProp_PGesture = { "PGesture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapFrame, PGesture), Z_Construct_UClass_ULeapGesture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapFrame_Statics::NewProp_PGesture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapFrame_Statics::NewProp_PGesture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapFrame_Statics::NewProp_PGestures_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapFrame_Statics::NewProp_PGestures = { "PGestures", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapFrame, PGestures), Z_Construct_UClass_ULeapGestureList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapFrame_Statics::NewProp_PGestures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapFrame_Statics::NewProp_PGestures_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapFrame_Statics::NewProp_PHand_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapFrame_Statics::NewProp_PHand = { "PHand", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapFrame, PHand), Z_Construct_UClass_ULeapHand_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapFrame_Statics::NewProp_PHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapFrame_Statics::NewProp_PHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapFrame_Statics::NewProp_PHands_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapFrame_Statics::NewProp_PHands = { "PHands", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapFrame, PHands), Z_Construct_UClass_ULeapHandList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapFrame_Statics::NewProp_PHands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapFrame_Statics::NewProp_PHands_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapFrame_Statics::NewProp_PImages_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapFrame_Statics::NewProp_PImages = { "PImages", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapFrame, PImages), Z_Construct_UClass_ULeapImageList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapFrame_Statics::NewProp_PImages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapFrame_Statics::NewProp_PImages_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapFrame_Statics::NewProp_PInteractionBox_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapFrame_Statics::NewProp_PInteractionBox = { "PInteractionBox", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapFrame, PInteractionBox), Z_Construct_UClass_ULeapInteractionBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapFrame_Statics::NewProp_PInteractionBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapFrame_Statics::NewProp_PInteractionBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapFrame_Statics::NewProp_PPointable_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapFrame_Statics::NewProp_PPointable = { "PPointable", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapFrame, PPointable), Z_Construct_UClass_ULeapPointable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapFrame_Statics::NewProp_PPointable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapFrame_Statics::NewProp_PPointable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapFrame_Statics::NewProp_PPointables_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapFrame_Statics::NewProp_PPointables = { "PPointables", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapFrame, PPointables), Z_Construct_UClass_ULeapPointableList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapFrame_Statics::NewProp_PPointables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapFrame_Statics::NewProp_PPointables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapFrame_Statics::NewProp_PTool_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapFrame_Statics::NewProp_PTool = { "PTool", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapFrame, PTool), Z_Construct_UClass_ULeapTool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapFrame_Statics::NewProp_PTool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapFrame_Statics::NewProp_PTool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapFrame_Statics::NewProp_PTools_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapFrame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapFrame_Statics::NewProp_PTools = { "PTools", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapFrame, PTools), Z_Construct_UClass_ULeapToolList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapFrame_Statics::NewProp_PTools_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapFrame_Statics::NewProp_PTools_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeapFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapFrame_Statics::NewProp_CurrentFPS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapFrame_Statics::NewProp_IsValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapFrame_Statics::NewProp_PFinger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapFrame_Statics::NewProp_PFingers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapFrame_Statics::NewProp_PGesture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapFrame_Statics::NewProp_PGestures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapFrame_Statics::NewProp_PHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapFrame_Statics::NewProp_PHands,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapFrame_Statics::NewProp_PImages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapFrame_Statics::NewProp_PInteractionBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapFrame_Statics::NewProp_PPointable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapFrame_Statics::NewProp_PPointables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapFrame_Statics::NewProp_PTool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapFrame_Statics::NewProp_PTools,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeapFrame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeapFrame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULeapFrame_Statics::ClassParams = {
		&ULeapFrame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULeapFrame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULeapFrame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULeapFrame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapFrame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeapFrame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULeapFrame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULeapFrame, 1963338092);
	template<> SIMPLELEAPMOTION_API UClass* StaticClass<ULeapFrame>()
	{
		return ULeapFrame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULeapFrame(Z_Construct_UClass_ULeapFrame, &ULeapFrame::StaticClass, TEXT("/Script/SimpleLeapMotion"), TEXT("ULeapFrame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeapFrame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
