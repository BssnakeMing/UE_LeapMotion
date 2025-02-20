// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleLeapMotion/Public/LeapController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapController() {}
// Cross Module References
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapController_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapController();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SimpleLeapMotion();
	SIMPLELEAPMOTION_API UEnum* Z_Construct_UEnum_SimpleLeapMotion_ELeapGestureType();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapFrame_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(ULeapController::execIsTrackingPaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTrackingPaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapController::execSetTrackingPause)
	{
		P_GET_UBOOL(Z_Param_Pause);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTrackingPause(Z_Param_Pause);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapController::execSetInterfaceDelegate)
	{
		P_GET_OBJECT(UObject,Z_Param_NewDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInterfaceDelegate(Z_Param_NewDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapController::execSetLeapMountToHMDOffset)
	{
		P_GET_STRUCT(FVector,Z_Param_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLeapMountToHMDOffset(Z_Param_Offset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapController::execEnableGesture)
	{
		P_GET_ENUM(ELeapGestureType,Z_Param_GestureType);
		P_GET_UBOOL(Z_Param_Enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableGesture(ELeapGestureType(Z_Param_GestureType),Z_Param_Enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapController::execEnableBackgroundTracking)
	{
		P_GET_UBOOL(Z_Param_TrackInBackground);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableBackgroundTracking(Z_Param_TrackInBackground);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapController::execEnableImageSupport)
	{
		P_GET_UBOOL(Z_Param_AllowImages);
		P_GET_UBOOL(Z_Param_EmitImageEvents);
		P_GET_UBOOL(Z_Param_UseGammaCorrection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableImageSupport(Z_Param_AllowImages,Z_Param_EmitImageEvents,Z_Param_UseGammaCorrection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapController::execOptimizeForHMD)
	{
		P_GET_UBOOL(Z_Param_UseTopdown);
		P_GET_UBOOL(Z_Param_AutoRotate);
		P_GET_UBOOL(Z_Param_AutoShift);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OptimizeForHMD(Z_Param_UseTopdown,Z_Param_AutoRotate,Z_Param_AutoShift);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapController::execIsServiceConnected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsServiceConnected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapController::execHasFocus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasFocus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapController::execFrame)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_History);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapFrame**)Z_Param__Result=P_THIS->Frame(Z_Param_History);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapController::execIsConnected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsConnected();
		P_NATIVE_END;
	}
	void ULeapController::StaticRegisterNativesULeapController()
	{
		UClass* Class = ULeapController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableBackgroundTracking", &ULeapController::execEnableBackgroundTracking },
			{ "EnableGesture", &ULeapController::execEnableGesture },
			{ "EnableImageSupport", &ULeapController::execEnableImageSupport },
			{ "Frame", &ULeapController::execFrame },
			{ "HasFocus", &ULeapController::execHasFocus },
			{ "IsConnected", &ULeapController::execIsConnected },
			{ "IsServiceConnected", &ULeapController::execIsServiceConnected },
			{ "IsTrackingPaused", &ULeapController::execIsTrackingPaused },
			{ "OptimizeForHMD", &ULeapController::execOptimizeForHMD },
			{ "SetInterfaceDelegate", &ULeapController::execSetInterfaceDelegate },
			{ "SetLeapMountToHMDOffset", &ULeapController::execSetLeapMountToHMDOffset },
			{ "SetTrackingPause", &ULeapController::execSetTrackingPause },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULeapController_EnableBackgroundTracking_Statics
	{
		struct LeapController_eventEnableBackgroundTracking_Parms
		{
			bool TrackInBackground;
		};
		static void NewProp_TrackInBackground_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TrackInBackground;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULeapController_EnableBackgroundTracking_Statics::NewProp_TrackInBackground_SetBit(void* Obj)
	{
		((LeapController_eventEnableBackgroundTracking_Parms*)Obj)->TrackInBackground = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapController_EnableBackgroundTracking_Statics::NewProp_TrackInBackground = { "TrackInBackground", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LeapController_eventEnableBackgroundTracking_Parms), &Z_Construct_UFunction_ULeapController_EnableBackgroundTracking_Statics::NewProp_TrackInBackground_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapController_EnableBackgroundTracking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapController_EnableBackgroundTracking_Statics::NewProp_TrackInBackground,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapController_EnableBackgroundTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Controller" },
		{ "Comment", "/**\n\x09*  Requests that your application receives frames when it is not the foreground application for user input.\n\x09*\n\x09* @param TrackInBackground toggle to enable or disable\n\x09*/" },
		{ "CPP_Default_TrackInBackground", "false" },
		{ "Keywords", "enable background tracking" },
		{ "ModuleRelativePath", "Public/LeapController.h" },
		{ "ToolTip", "Requests that your application receives frames when it is not the foreground application for user input.\n\n@param TrackInBackground toggle to enable or disable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapController_EnableBackgroundTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapController, nullptr, "EnableBackgroundTracking", nullptr, nullptr, sizeof(LeapController_eventEnableBackgroundTracking_Parms), Z_Construct_UFunction_ULeapController_EnableBackgroundTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapController_EnableBackgroundTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapController_EnableBackgroundTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapController_EnableBackgroundTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapController_EnableBackgroundTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapController_EnableBackgroundTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapController_EnableGesture_Statics
	{
		struct LeapController_eventEnableGesture_Parms
		{
			ELeapGestureType GestureType;
			bool Enable;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GestureType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GestureType;
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULeapController_EnableGesture_Statics::NewProp_GestureType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULeapController_EnableGesture_Statics::NewProp_GestureType = { "GestureType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapController_eventEnableGesture_Parms, GestureType), Z_Construct_UEnum_SimpleLeapMotion_ELeapGestureType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULeapController_EnableGesture_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((LeapController_eventEnableGesture_Parms*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapController_EnableGesture_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LeapController_eventEnableGesture_Parms), &Z_Construct_UFunction_ULeapController_EnableGesture_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapController_EnableGesture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapController_EnableGesture_Statics::NewProp_GestureType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapController_EnableGesture_Statics::NewProp_GestureType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapController_EnableGesture_Statics::NewProp_Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapController_EnableGesture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Controller" },
		{ "Comment", "/**\n\x09* Enables or disables reporting of a specified gesture type.\n\x09*\n\x09* @param GestureType category of gesture you wish to enable or disable\n\x09* @param Enable whether the gesture detection should be enabled\n\x09*/" },
		{ "CPP_Default_Enable", "true" },
		{ "Keywords", "enable gesture" },
		{ "ModuleRelativePath", "Public/LeapController.h" },
		{ "ToolTip", "Enables or disables reporting of a specified gesture type.\n\n@param GestureType category of gesture you wish to enable or disable\n@param Enable whether the gesture detection should be enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapController_EnableGesture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapController, nullptr, "EnableGesture", nullptr, nullptr, sizeof(LeapController_eventEnableGesture_Parms), Z_Construct_UFunction_ULeapController_EnableGesture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapController_EnableGesture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapController_EnableGesture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapController_EnableGesture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapController_EnableGesture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapController_EnableGesture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapController_EnableImageSupport_Statics
	{
		struct LeapController_eventEnableImageSupport_Parms
		{
			bool AllowImages;
			bool EmitImageEvents;
			bool UseGammaCorrection;
		};
		static void NewProp_AllowImages_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowImages;
		static void NewProp_EmitImageEvents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EmitImageEvents;
		static void NewProp_UseGammaCorrection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseGammaCorrection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULeapController_EnableImageSupport_Statics::NewProp_AllowImages_SetBit(void* Obj)
	{
		((LeapController_eventEnableImageSupport_Parms*)Obj)->AllowImages = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapController_EnableImageSupport_Statics::NewProp_AllowImages = { "AllowImages", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LeapController_eventEnableImageSupport_Parms), &Z_Construct_UFunction_ULeapController_EnableImageSupport_Statics::NewProp_AllowImages_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULeapController_EnableImageSupport_Statics::NewProp_EmitImageEvents_SetBit(void* Obj)
	{
		((LeapController_eventEnableImageSupport_Parms*)Obj)->EmitImageEvents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapController_EnableImageSupport_Statics::NewProp_EmitImageEvents = { "EmitImageEvents", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LeapController_eventEnableImageSupport_Parms), &Z_Construct_UFunction_ULeapController_EnableImageSupport_Statics::NewProp_EmitImageEvents_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULeapController_EnableImageSupport_Statics::NewProp_UseGammaCorrection_SetBit(void* Obj)
	{
		((LeapController_eventEnableImageSupport_Parms*)Obj)->UseGammaCorrection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapController_EnableImageSupport_Statics::NewProp_UseGammaCorrection = { "UseGammaCorrection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LeapController_eventEnableImageSupport_Parms), &Z_Construct_UFunction_ULeapController_EnableImageSupport_Statics::NewProp_UseGammaCorrection_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapController_EnableImageSupport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapController_EnableImageSupport_Statics::NewProp_AllowImages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapController_EnableImageSupport_Statics::NewProp_EmitImageEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapController_EnableImageSupport_Statics::NewProp_UseGammaCorrection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapController_EnableImageSupport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Controller" },
		{ "Comment", "/**\n\x09* Enable image streaming by the leap motion. Optionally emit raw image events and adjust images by standard gamma correction.\n\x09*\n\x09* @param AllowImages enable image support at minimum for polling\n\x09* @param EmitImageEvents whether to emit raw image event whenever they're ready\n\x09* @param UseGammaCorrection true if you wish to use image gamma correction\n\x09*/" },
		{ "CPP_Default_AllowImages", "true" },
		{ "CPP_Default_EmitImageEvents", "true" },
		{ "CPP_Default_UseGammaCorrection", "false" },
		{ "Keywords", "use allow images set policy" },
		{ "ModuleRelativePath", "Public/LeapController.h" },
		{ "ToolTip", "Enable image streaming by the leap motion. Optionally emit raw image events and adjust images by standard gamma correction.\n\n@param AllowImages enable image support at minimum for polling\n@param EmitImageEvents whether to emit raw image event whenever they're ready\n@param UseGammaCorrection true if you wish to use image gamma correction" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapController_EnableImageSupport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapController, nullptr, "EnableImageSupport", nullptr, nullptr, sizeof(LeapController_eventEnableImageSupport_Parms), Z_Construct_UFunction_ULeapController_EnableImageSupport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapController_EnableImageSupport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapController_EnableImageSupport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapController_EnableImageSupport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapController_EnableImageSupport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapController_EnableImageSupport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapController_Frame_Statics
	{
		struct LeapController_eventFrame_Parms
		{
			int32 History;
			ULeapFrame* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_History;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULeapController_Frame_Statics::NewProp_History = { "History", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapController_eventFrame_Parms, History), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapController_Frame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapController_eventFrame_Parms, ReturnValue), Z_Construct_UClass_ULeapFrame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapController_Frame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapController_Frame_Statics::NewProp_History,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapController_Frame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapController_Frame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Controller" },
		{ "Comment", "/**\n\x09* Returns a frame of tracking data from the Leap Motion software.\n\x09* Call frame() or frame(0) to access the most recent frame; call frame(1)\n\x09* to access the previous frame, and so on. If you use a history value greater \n\x09* than the number of stored frames, then the controller returns an invalid frame.\n\x09*\n\x09* @param optional history parameter to specify which frame to retrieve. \n\x09* @return The specified frame; or, if no history parameter is specified, the newest frame. If a frame is not available at the specified history position, an invalid Frame is returned.\n\x09*/" },
		{ "DisplayName", "Get Frame" },
		{ "Keywords", "get frame" },
		{ "ModuleRelativePath", "Public/LeapController.h" },
		{ "ToolTip", "Returns a frame of tracking data from the Leap Motion software.\nCall frame() or frame(0) to access the most recent frame; call frame(1)\nto access the previous frame, and so on. If you use a history value greater\nthan the number of stored frames, then the controller returns an invalid frame.\n\n@param optional history parameter to specify which frame to retrieve.\n@return The specified frame; or, if no history parameter is specified, the newest frame. If a frame is not available at the specified history position, an invalid Frame is returned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapController_Frame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapController, nullptr, "Frame", nullptr, nullptr, sizeof(LeapController_eventFrame_Parms), Z_Construct_UFunction_ULeapController_Frame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapController_Frame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapController_Frame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapController_Frame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapController_Frame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapController_Frame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapController_HasFocus_Statics
	{
		struct LeapController_eventHasFocus_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULeapController_HasFocus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LeapController_eventHasFocus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapController_HasFocus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LeapController_eventHasFocus_Parms), &Z_Construct_UFunction_ULeapController_HasFocus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapController_HasFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapController_HasFocus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapController_HasFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Controller" },
		{ "Comment", "/**\n\x09* Reports whether this application is the focused, foreground application.\n\x09*\n\x09* @return True, if application has focus; false otherwise.\n\x09*/" },
		{ "Keywords", "has Focus" },
		{ "ModuleRelativePath", "Public/LeapController.h" },
		{ "ToolTip", "Reports whether this application is the focused, foreground application.\n\n@return True, if application has focus; false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapController_HasFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapController, nullptr, "HasFocus", nullptr, nullptr, sizeof(LeapController_eventHasFocus_Parms), Z_Construct_UFunction_ULeapController_HasFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapController_HasFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapController_HasFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapController_HasFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapController_HasFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapController_HasFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapController_IsConnected_Statics
	{
		struct LeapController_eventIsConnected_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULeapController_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LeapController_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapController_IsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LeapController_eventIsConnected_Parms), &Z_Construct_UFunction_ULeapController_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapController_IsConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapController_IsConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapController_IsConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Controller" },
		{ "Comment", "/**\n\x09* Reports whether this Controller is connected to the Leap Motion service and the Leap Motion hardware is plugged in.\n\x09* \xe6\x8a\xa5\xe5\x91\x8a\xe6\xad\xa4\xe6\x8e\xa7\xe5\x88\xb6\xe5\x99\xa8\xe6\x98\xaf\xe5\x90\xa6\xe5\xb7\xb2\xe8\xbf\x9e\xe6\x8e\xa5\xe5\x88\xb0 Leap Motion \xe6\x9c\x8d\xe5\x8a\xa1\xef\xbc\x8c\xe4\xbb\xa5\xe5\x8f\x8a Leap Motion \xe7\xa1\xac\xe4\xbb\xb6\xe6\x98\xaf\xe5\x90\xa6\xe5\xb7\xb2\xe6\x8f\x92\xe5\x85\xa5\xe3\x80\x82\n\x09*/" },
		{ "Keywords", "is connected" },
		{ "ModuleRelativePath", "Public/LeapController.h" },
		{ "ToolTip", "Reports whether this Controller is connected to the Leap Motion service and the Leap Motion hardware is plugged in.\n\xe6\x8a\xa5\xe5\x91\x8a\xe6\xad\xa4\xe6\x8e\xa7\xe5\x88\xb6\xe5\x99\xa8\xe6\x98\xaf\xe5\x90\xa6\xe5\xb7\xb2\xe8\xbf\x9e\xe6\x8e\xa5\xe5\x88\xb0 Leap Motion \xe6\x9c\x8d\xe5\x8a\xa1\xef\xbc\x8c\xe4\xbb\xa5\xe5\x8f\x8a Leap Motion \xe7\xa1\xac\xe4\xbb\xb6\xe6\x98\xaf\xe5\x90\xa6\xe5\xb7\xb2\xe6\x8f\x92\xe5\x85\xa5\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapController_IsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapController, nullptr, "IsConnected", nullptr, nullptr, sizeof(LeapController_eventIsConnected_Parms), Z_Construct_UFunction_ULeapController_IsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapController_IsConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapController_IsConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapController_IsConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapController_IsConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapController_IsConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapController_IsServiceConnected_Statics
	{
		struct LeapController_eventIsServiceConnected_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULeapController_IsServiceConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LeapController_eventIsServiceConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapController_IsServiceConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LeapController_eventIsServiceConnected_Parms), &Z_Construct_UFunction_ULeapController_IsServiceConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapController_IsServiceConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapController_IsServiceConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapController_IsServiceConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Controller" },
		{ "Comment", "/**\n\x09* Reports whether this Controller is connected to the Leap Motion service and the Leap Motion hardware is plugged in.\n\x09*\n\x09* @return True, if connected; false otherwise.\n\x09*/" },
		{ "Keywords", "is service connected" },
		{ "ModuleRelativePath", "Public/LeapController.h" },
		{ "ToolTip", "Reports whether this Controller is connected to the Leap Motion service and the Leap Motion hardware is plugged in.\n\n@return True, if connected; false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapController_IsServiceConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapController, nullptr, "IsServiceConnected", nullptr, nullptr, sizeof(LeapController_eventIsServiceConnected_Parms), Z_Construct_UFunction_ULeapController_IsServiceConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapController_IsServiceConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapController_IsServiceConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapController_IsServiceConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapController_IsServiceConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapController_IsServiceConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapController_IsTrackingPaused_Statics
	{
		struct LeapController_eventIsTrackingPaused_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULeapController_IsTrackingPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LeapController_eventIsTrackingPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapController_IsTrackingPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LeapController_eventIsTrackingPaused_Parms), &Z_Construct_UFunction_ULeapController_IsTrackingPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapController_IsTrackingPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapController_IsTrackingPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapController_IsTrackingPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Interface" },
		{ "Comment", "// \xe8\xbf\x94\xe5\x9b\x9e Leap Motion \xe6\x9c\x8d\xe5\x8a\xa1\xe5\xbd\x93\xe5\x89\x8d\xe6\x98\xaf\xe5\x90\xa6\xe6\x9a\x82\xe5\x81\x9c\xe3\x80\x82\n" },
		{ "ModuleRelativePath", "Public/LeapController.h" },
		{ "ToolTip", "\xe8\xbf\x94\xe5\x9b\x9e Leap Motion \xe6\x9c\x8d\xe5\x8a\xa1\xe5\xbd\x93\xe5\x89\x8d\xe6\x98\xaf\xe5\x90\xa6\xe6\x9a\x82\xe5\x81\x9c\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapController_IsTrackingPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapController, nullptr, "IsTrackingPaused", nullptr, nullptr, sizeof(LeapController_eventIsTrackingPaused_Parms), Z_Construct_UFunction_ULeapController_IsTrackingPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapController_IsTrackingPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapController_IsTrackingPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapController_IsTrackingPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapController_IsTrackingPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapController_IsTrackingPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapController_OptimizeForHMD_Statics
	{
		struct LeapController_eventOptimizeForHMD_Parms
		{
			bool UseTopdown;
			bool AutoRotate;
			bool AutoShift;
		};
		static void NewProp_UseTopdown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseTopdown;
		static void NewProp_AutoRotate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoRotate;
		static void NewProp_AutoShift_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoShift;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULeapController_OptimizeForHMD_Statics::NewProp_UseTopdown_SetBit(void* Obj)
	{
		((LeapController_eventOptimizeForHMD_Parms*)Obj)->UseTopdown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapController_OptimizeForHMD_Statics::NewProp_UseTopdown = { "UseTopdown", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LeapController_eventOptimizeForHMD_Parms), &Z_Construct_UFunction_ULeapController_OptimizeForHMD_Statics::NewProp_UseTopdown_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULeapController_OptimizeForHMD_Statics::NewProp_AutoRotate_SetBit(void* Obj)
	{
		((LeapController_eventOptimizeForHMD_Parms*)Obj)->AutoRotate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapController_OptimizeForHMD_Statics::NewProp_AutoRotate = { "AutoRotate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LeapController_eventOptimizeForHMD_Parms), &Z_Construct_UFunction_ULeapController_OptimizeForHMD_Statics::NewProp_AutoRotate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULeapController_OptimizeForHMD_Statics::NewProp_AutoShift_SetBit(void* Obj)
	{
		((LeapController_eventOptimizeForHMD_Parms*)Obj)->AutoShift = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapController_OptimizeForHMD_Statics::NewProp_AutoShift = { "AutoShift", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LeapController_eventOptimizeForHMD_Parms), &Z_Construct_UFunction_ULeapController_OptimizeForHMD_Statics::NewProp_AutoShift_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapController_OptimizeForHMD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapController_OptimizeForHMD_Statics::NewProp_UseTopdown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapController_OptimizeForHMD_Statics::NewProp_AutoRotate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapController_OptimizeForHMD_Statics::NewProp_AutoShift,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapController_OptimizeForHMD_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Controller" },
		{ "Comment", "/**\n\x09* Set Flags and tracking for the plugin to use tracking expecting leap mounted on HMD.\n\x09* Optionally auto-rotate and auto-shift values by the movement of the hmd (useful pre-4.11)\n\x09*/" },
		{ "CPP_Default_AutoRotate", "true" },
		{ "CPP_Default_AutoShift", "true" },
		{ "CPP_Default_UseTopdown", "false" },
		{ "Keywords", "optimize hmd facing top set policy" },
		{ "ModuleRelativePath", "Public/LeapController.h" },
		{ "ToolTip", "Set Flags and tracking for the plugin to use tracking expecting leap mounted on HMD.\nOptionally auto-rotate and auto-shift values by the movement of the hmd (useful pre-4.11)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapController_OptimizeForHMD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapController, nullptr, "OptimizeForHMD", nullptr, nullptr, sizeof(LeapController_eventOptimizeForHMD_Parms), Z_Construct_UFunction_ULeapController_OptimizeForHMD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapController_OptimizeForHMD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapController_OptimizeForHMD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapController_OptimizeForHMD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapController_OptimizeForHMD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapController_OptimizeForHMD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapController_SetInterfaceDelegate_Statics
	{
		struct LeapController_eventSetInterfaceDelegate_Parms
		{
			UObject* NewDelegate;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapController_SetInterfaceDelegate_Statics::NewProp_NewDelegate = { "NewDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapController_eventSetInterfaceDelegate_Parms, NewDelegate), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapController_SetInterfaceDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapController_SetInterfaceDelegate_Statics::NewProp_NewDelegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapController_SetInterfaceDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Interface" },
		{ "Comment", "/**\n\x09* Leap Event Interface forwarding, automatically set since 0.6.2, available for event redirection\n\x09*\n\x09* @param Object\x09""Delegate object for this controller's events\n\x09*/" },
		{ "Keywords", "set delegate self" },
		{ "ModuleRelativePath", "Public/LeapController.h" },
		{ "ToolTip", "Leap Event Interface forwarding, automatically set since 0.6.2, available for event redirection\n\n@param Object Delegate object for this controller's events" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapController_SetInterfaceDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapController, nullptr, "SetInterfaceDelegate", nullptr, nullptr, sizeof(LeapController_eventSetInterfaceDelegate_Parms), Z_Construct_UFunction_ULeapController_SetInterfaceDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapController_SetInterfaceDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapController_SetInterfaceDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapController_SetInterfaceDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapController_SetInterfaceDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapController_SetInterfaceDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapController_SetLeapMountToHMDOffset_Statics
	{
		struct LeapController_eventSetLeapMountToHMDOffset_Parms
		{
			FVector Offset;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapController_SetLeapMountToHMDOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapController_eventSetLeapMountToHMDOffset_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapController_SetLeapMountToHMDOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapController_SetLeapMountToHMDOffset_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapController_SetLeapMountToHMDOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Controller" },
		{ "Comment", "/**\n\x09* Specify a custom leap to eye offset. Given in UE coordinate system (XForward). \n\x09*\n\x09* @param Offset offset vector, defaults to DK2 value (8cm forward)\n\x09*/" },
		{ "CPP_Default_Offset", "8.000000,0.000000,0.000000" },
		{ "ModuleRelativePath", "Public/LeapController.h" },
		{ "ToolTip", "Specify a custom leap to eye offset. Given in UE coordinate system (XForward).\n\n@param Offset offset vector, defaults to DK2 value (8cm forward)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapController_SetLeapMountToHMDOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapController, nullptr, "SetLeapMountToHMDOffset", nullptr, nullptr, sizeof(LeapController_eventSetLeapMountToHMDOffset_Parms), Z_Construct_UFunction_ULeapController_SetLeapMountToHMDOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapController_SetLeapMountToHMDOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapController_SetLeapMountToHMDOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapController_SetLeapMountToHMDOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapController_SetLeapMountToHMDOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapController_SetLeapMountToHMDOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapController_SetTrackingPause_Statics
	{
		struct LeapController_eventSetTrackingPause_Parms
		{
			bool Pause;
		};
		static void NewProp_Pause_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Pause;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULeapController_SetTrackingPause_Statics::NewProp_Pause_SetBit(void* Obj)
	{
		((LeapController_eventSetTrackingPause_Parms*)Obj)->Pause = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapController_SetTrackingPause_Statics::NewProp_Pause = { "Pause", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LeapController_eventSetTrackingPause_Parms), &Z_Construct_UFunction_ULeapController_SetTrackingPause_Statics::NewProp_Pause_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapController_SetTrackingPause_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapController_SetTrackingPause_Statics::NewProp_Pause,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapController_SetTrackingPause_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Interface" },
		{ "Comment", "/**\n\x09 *\x09\xe6\x9a\x82\xe5\x81\x9c\xe6\x88\x96\xe6\x81\xa2\xe5\xa4\x8d Leap Motion \xe6\x9c\x8d\xe5\x8a\xa1\xe3\x80\x82\n\x09 *\n\x09 * \xe5\xbd\x93\xe6\x9c\x8d\xe5\x8a\xa1\xe6\x9a\x82\xe5\x81\x9c\xe6\x97\xb6\xef\xbc\x8c\xe6\xb2\xa1\xe6\x9c\x89\xe5\xba\x94\xe7\x94\xa8\xe7\xa8\x8b\xe5\xba\x8f\xe6\x8e\xa5\xe6\x94\xb6\xe8\xb7\x9f\xe8\xb8\xaa\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x8c\xe5\xb9\xb6\xe4\xb8\x94\xe6\x9c\x8d\xe5\x8a\xa1\xe6\x9c\xac\xe8\xba\xab\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84 CPU \xe6\x97\xb6\xe9\x97\xb4\xe6\x9c\x80\xe5\xb0\x91\xe3\x80\x82\n\x09 * \n\x09 * @param Pause \xe6\x9c\x8d\xe5\x8a\xa1\xe7\x8a\xb6\xe6\x80\x81\n\x09 */" },
		{ "ModuleRelativePath", "Public/LeapController.h" },
		{ "ToolTip", "\xe6\x9a\x82\xe5\x81\x9c\xe6\x88\x96\xe6\x81\xa2\xe5\xa4\x8d Leap Motion \xe6\x9c\x8d\xe5\x8a\xa1\xe3\x80\x82\n\n\xe5\xbd\x93\xe6\x9c\x8d\xe5\x8a\xa1\xe6\x9a\x82\xe5\x81\x9c\xe6\x97\xb6\xef\xbc\x8c\xe6\xb2\xa1\xe6\x9c\x89\xe5\xba\x94\xe7\x94\xa8\xe7\xa8\x8b\xe5\xba\x8f\xe6\x8e\xa5\xe6\x94\xb6\xe8\xb7\x9f\xe8\xb8\xaa\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x8c\xe5\xb9\xb6\xe4\xb8\x94\xe6\x9c\x8d\xe5\x8a\xa1\xe6\x9c\xac\xe8\xba\xab\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84 CPU \xe6\x97\xb6\xe9\x97\xb4\xe6\x9c\x80\xe5\xb0\x91\xe3\x80\x82\n\n@param Pause \xe6\x9c\x8d\xe5\x8a\xa1\xe7\x8a\xb6\xe6\x80\x81" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapController_SetTrackingPause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapController, nullptr, "SetTrackingPause", nullptr, nullptr, sizeof(LeapController_eventSetTrackingPause_Parms), Z_Construct_UFunction_ULeapController_SetTrackingPause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapController_SetTrackingPause_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapController_SetTrackingPause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapController_SetTrackingPause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapController_SetTrackingPause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapController_SetTrackingPause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULeapController_NoRegister()
	{
		return ULeapController::StaticClass();
	}
	struct Z_Construct_UClass_ULeapController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PFrame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULeapController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULeapController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeapController_EnableBackgroundTracking, "EnableBackgroundTracking" }, // 2076011670
		{ &Z_Construct_UFunction_ULeapController_EnableGesture, "EnableGesture" }, // 2262404074
		{ &Z_Construct_UFunction_ULeapController_EnableImageSupport, "EnableImageSupport" }, // 2322045036
		{ &Z_Construct_UFunction_ULeapController_Frame, "Frame" }, // 3197394583
		{ &Z_Construct_UFunction_ULeapController_HasFocus, "HasFocus" }, // 961361649
		{ &Z_Construct_UFunction_ULeapController_IsConnected, "IsConnected" }, // 405126023
		{ &Z_Construct_UFunction_ULeapController_IsServiceConnected, "IsServiceConnected" }, // 3665842321
		{ &Z_Construct_UFunction_ULeapController_IsTrackingPaused, "IsTrackingPaused" }, // 1450694155
		{ &Z_Construct_UFunction_ULeapController_OptimizeForHMD, "OptimizeForHMD" }, // 433427081
		{ &Z_Construct_UFunction_ULeapController_SetInterfaceDelegate, "SetInterfaceDelegate" }, // 3161011376
		{ &Z_Construct_UFunction_ULeapController_SetLeapMountToHMDOffset, "SetLeapMountToHMDOffset" }, // 711793096
		{ &Z_Construct_UFunction_ULeapController_SetTrackingPause, "SetTrackingPause" }, // 3296231629
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Input" },
		{ "Comment", "/**\n* Leap Controller class wrapped into an Actor Component.\n*\n* The Controller class is your main interface to the Leap Motion Controller.\n* Create an instance of this Controller class to access frames of tracking data\n* and configuration information. Frame data can be polled at any time using the\n* Frame() function. Call Frame() or Frame(0) to get the most recent \n* frame. Set the history parameter to a positive integer to access previous frames. \n* A controller stores up to 60 frames in its frame history.\n*\n* Leap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.Controller.html\n*/" },
		{ "IncludePath", "LeapController.h" },
		{ "ModuleRelativePath", "Public/LeapController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Leap Controller class wrapped into an Actor Component.\n\nThe Controller class is your main interface to the Leap Motion Controller.\nCreate an instance of this Controller class to access frames of tracking data\nand configuration information. Frame data can be polled at any time using the\nFrame() function. Call Frame() or Frame(0) to get the most recent\nframe. Set the history parameter to a positive integer to access previous frames.\nA controller stores up to 60 frames in its frame history.\n\nLeap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.Controller.html" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapController_Statics::NewProp_PFrame_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapController_Statics::NewProp_PFrame = { "PFrame", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapController, PFrame), Z_Construct_UClass_ULeapFrame_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapController_Statics::NewProp_PFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapController_Statics::NewProp_PFrame_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeapController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapController_Statics::NewProp_PFrame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeapController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeapController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULeapController_Statics::ClassParams = {
		&ULeapController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULeapController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULeapController_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULeapController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeapController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULeapController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULeapController, 1354048861);
	template<> SIMPLELEAPMOTION_API UClass* StaticClass<ULeapController>()
	{
		return ULeapController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULeapController(Z_Construct_UClass_ULeapController, &ULeapController::StaticClass, TEXT("/Script/SimpleLeapMotion"), TEXT("ULeapController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeapController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
