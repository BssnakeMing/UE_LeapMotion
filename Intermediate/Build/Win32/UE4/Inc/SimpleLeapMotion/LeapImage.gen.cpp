// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleLeapMotion/Public/LeapImage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapImage() {}
// Cross Module References
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapImage_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapImage();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SimpleLeapMotion();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(ULeapImage::execWarp)
	{
		P_GET_STRUCT(FVector,Z_Param_XY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->Warp(Z_Param_XY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapImage::execRectify)
	{
		P_GET_STRUCT(FVector,Z_Param_uv);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->Rectify(Z_Param_uv);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapImage::execDistortionUE)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->DistortionUE();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapImage::execDistortion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->Distortion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapImage::execTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->Texture();
		P_NATIVE_END;
	}
	void ULeapImage::StaticRegisterNativesULeapImage()
	{
		UClass* Class = ULeapImage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Distortion", &ULeapImage::execDistortion },
			{ "DistortionUE", &ULeapImage::execDistortionUE },
			{ "Rectify", &ULeapImage::execRectify },
			{ "Texture", &ULeapImage::execTexture },
			{ "Warp", &ULeapImage::execWarp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULeapImage_Distortion_Statics
	{
		struct LeapImage_eventDistortion_Parms
		{
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapImage_Distortion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapImage_eventDistortion_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapImage_Distortion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapImage_Distortion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapImage_Distortion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Image" },
		{ "Comment", "/**\n\x09* Faster raw distortion (R=U, G=V), requires channel conversion, 32bit float per \n\x09* channel texture will look odd if rendered raw.\n\x09*\n\x09* @return 128bit Distortion in raw UTexture2D format\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "Distortion" },
		{ "Keywords", "distortion" },
		{ "ModuleRelativePath", "Public/LeapImage.h" },
		{ "ToolTip", "Faster raw distortion (R=U, G=V), requires channel conversion, 32bit float per\nchannel texture will look odd if rendered raw.\n\n@return 128bit Distortion in raw UTexture2D format" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapImage_Distortion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapImage, nullptr, "Distortion", nullptr, nullptr, sizeof(LeapImage_eventDistortion_Parms), Z_Construct_UFunction_ULeapImage_Distortion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapImage_Distortion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapImage_Distortion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapImage_Distortion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapImage_Distortion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapImage_Distortion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapImage_DistortionUE_Statics
	{
		struct LeapImage_eventDistortionUE_Parms
		{
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapImage_DistortionUE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapImage_eventDistortionUE_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapImage_DistortionUE_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapImage_DistortionUE_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapImage_DistortionUE_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Image" },
		{ "Comment", "/**\n\x09* Visually correct distortion in UE format (R=U, G=1-V) at the cost of additional \n\x09* CPU time (roughly 1ms) in 8bit per channel format\n\x09*\n\x09* @return Distortion in converted UTexture2D format\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "Distortion UE" },
		{ "Keywords", "distortion ue" },
		{ "ModuleRelativePath", "Public/LeapImage.h" },
		{ "ToolTip", "Visually correct distortion in UE format (R=U, G=1-V) at the cost of additional\nCPU time (roughly 1ms) in 8bit per channel format\n\n@return Distortion in converted UTexture2D format" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapImage_DistortionUE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapImage, nullptr, "DistortionUE", nullptr, nullptr, sizeof(LeapImage_eventDistortionUE_Parms), Z_Construct_UFunction_ULeapImage_DistortionUE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapImage_DistortionUE_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapImage_DistortionUE_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapImage_DistortionUE_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapImage_DistortionUE()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapImage_DistortionUE_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapImage_Rectify_Statics
	{
		struct LeapImage_eventRectify_Parms
		{
			FVector uv;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_uv;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapImage_Rectify_Statics::NewProp_uv = { "uv", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapImage_eventRectify_Parms, uv), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapImage_Rectify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapImage_eventRectify_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapImage_Rectify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapImage_Rectify_Statics::NewProp_uv,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapImage_Rectify_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapImage_Rectify_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Image" },
		{ "Comment", "/**\n\x09* Provides the corrected camera ray intercepting the specified point on the image.\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "rectify" },
		{ "Keywords", "rectify" },
		{ "ModuleRelativePath", "Public/LeapImage.h" },
		{ "ToolTip", "Provides the corrected camera ray intercepting the specified point on the image." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapImage_Rectify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapImage, nullptr, "Rectify", nullptr, nullptr, sizeof(LeapImage_eventRectify_Parms), Z_Construct_UFunction_ULeapImage_Rectify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapImage_Rectify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapImage_Rectify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapImage_Rectify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapImage_Rectify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapImage_Rectify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapImage_Texture_Statics
	{
		struct LeapImage_eventTexture_Parms
		{
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapImage_Texture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapImage_eventTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapImage_Texture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapImage_Texture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapImage_Texture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Image" },
		{ "Comment", "/**\n\x09* Returns a UTexture2D reference that contains the latest raw Leap Image data in \n\x09* UE format. This can be optionally gamma corrected.\n\x09*\n\x09* @return Image in converted UTexture2D format\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "Texture" },
		{ "Keywords", "get texture" },
		{ "ModuleRelativePath", "Public/LeapImage.h" },
		{ "ToolTip", "Returns a UTexture2D reference that contains the latest raw Leap Image data in\nUE format. This can be optionally gamma corrected.\n\n@return Image in converted UTexture2D format" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapImage_Texture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapImage, nullptr, "Texture", nullptr, nullptr, sizeof(LeapImage_eventTexture_Parms), Z_Construct_UFunction_ULeapImage_Texture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapImage_Texture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapImage_Texture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapImage_Texture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapImage_Texture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapImage_Texture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapImage_Warp_Statics
	{
		struct LeapImage_eventWarp_Parms
		{
			FVector XY;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_XY;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapImage_Warp_Statics::NewProp_XY = { "XY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapImage_eventWarp_Parms, XY), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapImage_Warp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapImage_eventWarp_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapImage_Warp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapImage_Warp_Statics::NewProp_XY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapImage_Warp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapImage_Warp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Image" },
		{ "Comment", "/**\n\x09* Provides the point in the image corresponding to a ray projecting from the camera.\n\x09* Given a ray projected from the camera in the specified direction, warp() corrects \n\x09* for camera distortion and returns the corresponding pixel coordinates in the image.\n\x09* The ray direction is specified in relationship to the camera. The first vector element\n\x09* corresponds to the \xef\xbf\xbdhorizontal\xef\xbf\xbd view angle; the second corresponds to the \xef\xbf\xbdvertical\xef\xbf\xbd \n\x09* view angle.\n\x09*\n\x09* @param\x09XY\x09""A Vector containing the ray direction.\n\x09* @return\x09""A Vector containing the pixel coordinates [x, y, 0] (with z always zero).\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "warp" },
		{ "Keywords", "warp" },
		{ "ModuleRelativePath", "Public/LeapImage.h" },
		{ "ToolTip", "Provides the point in the image corresponding to a ray projecting from the camera.\nGiven a ray projected from the camera in the specified direction, warp() corrects\nfor camera distortion and returns the corresponding pixel coordinates in the image.\nThe ray direction is specified in relationship to the camera. The first vector element\ncorresponds to the \xef\xbf\xbdhorizontal\xef\xbf\xbd view angle; the second corresponds to the \xef\xbf\xbdvertical\xef\xbf\xbd\nview angle.\n\n@param        XY      A Vector containing the ray direction.\n@return       A Vector containing the pixel coordinates [x, y, 0] (with z always zero)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapImage_Warp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapImage, nullptr, "Warp", nullptr, nullptr, sizeof(LeapImage_eventWarp_Parms), Z_Construct_UFunction_ULeapImage_Warp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapImage_Warp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapImage_Warp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapImage_Warp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapImage_Warp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapImage_Warp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULeapImage_NoRegister()
	{
		return ULeapImage::StaticClass();
	}
	struct Z_Construct_UClass_ULeapImage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistortionHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DistortionHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistortionWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DistortionWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsValid_MetaData[];
#endif
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayOffsetX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RayOffsetX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayOffsetY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RayOffsetY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayScaleX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RayScaleX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayScaleY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RayScaleY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseGammaCorrection_MetaData[];
#endif
		static void NewProp_UseGammaCorrection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseGammaCorrection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PImagePointer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PImagePointer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PDistortionPointer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PDistortionPointer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULeapImage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULeapImage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeapImage_Distortion, "Distortion" }, // 2657061030
		{ &Z_Construct_UFunction_ULeapImage_DistortionUE, "DistortionUE" }, // 1061730089
		{ &Z_Construct_UFunction_ULeapImage_Rectify, "Rectify" }, // 1358822567
		{ &Z_Construct_UFunction_ULeapImage_Texture, "Texture" }, // 1684596523
		{ &Z_Construct_UFunction_ULeapImage_Warp, "Warp" }, // 2352024240
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapImage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* The Image class represents a single image from one of the Leap Motion cameras.\n* You can obtain the images from your frame object or from listening to raw image events in LeapEventInterface\n*\n* Leap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.Image.html\n*/" },
		{ "IncludePath", "LeapImage.h" },
		{ "ModuleRelativePath", "Public/LeapImage.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The Image class represents a single image from one of the Leap Motion cameras.\nYou can obtain the images from your frame object or from listening to raw image events in LeapEventInterface\n\nLeap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.Image.html" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapImage_Statics::NewProp_DistortionHeight_MetaData[] = {
		{ "Category", "Leap Image" },
		{ "Comment", "/**\n\x09* The distortion map height.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapImage.h" },
		{ "ToolTip", "The distortion map height." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULeapImage_Statics::NewProp_DistortionHeight = { "DistortionHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapImage, DistortionHeight), METADATA_PARAMS(Z_Construct_UClass_ULeapImage_Statics::NewProp_DistortionHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapImage_Statics::NewProp_DistortionHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapImage_Statics::NewProp_DistortionWidth_MetaData[] = {
		{ "Category", "Leap Image" },
		{ "Comment", "/**\n\x09* The stride of the distortion map.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapImage.h" },
		{ "ToolTip", "The stride of the distortion map." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULeapImage_Statics::NewProp_DistortionWidth = { "DistortionWidth", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapImage, DistortionWidth), METADATA_PARAMS(Z_Construct_UClass_ULeapImage_Statics::NewProp_DistortionWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapImage_Statics::NewProp_DistortionWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapImage_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "Leap Image" },
		{ "Comment", "/**\n\x09* The image height.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapImage.h" },
		{ "ToolTip", "The image height." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULeapImage_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapImage, Height), METADATA_PARAMS(Z_Construct_UClass_ULeapImage_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapImage_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapImage_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Leap Image" },
		{ "Comment", "/**\n\x09* The image ID. Images with ID of 0 are from the left camera;\n\x09* those with an ID of 1 are from the right camera (with the device in its standard operating \n\x09* position with the green LED facing the operator).\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapImage.h" },
		{ "ToolTip", "The image ID. Images with ID of 0 are from the left camera;\nthose with an ID of 1 are from the right camera (with the device in its standard operating\nposition with the green LED facing the operator)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULeapImage_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapImage, Id), METADATA_PARAMS(Z_Construct_UClass_ULeapImage_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapImage_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapImage_Statics::NewProp_IsValid_MetaData[] = {
		{ "Category", "Leap Image" },
		{ "Comment", "/**\n\x09* Reports whether this Image instance contains valid data.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapImage.h" },
		{ "ToolTip", "Reports whether this Image instance contains valid data." },
	};
#endif
	void Z_Construct_UClass_ULeapImage_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((ULeapImage*)Obj)->IsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULeapImage_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULeapImage), &Z_Construct_UClass_ULeapImage_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULeapImage_Statics::NewProp_IsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapImage_Statics::NewProp_IsValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapImage_Statics::NewProp_RayOffsetX_MetaData[] = {
		{ "Category", "Leap Image" },
		{ "Comment", "/**\n\x09* The horizontal ray offset.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapImage.h" },
		{ "ToolTip", "The horizontal ray offset." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapImage_Statics::NewProp_RayOffsetX = { "RayOffsetX", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapImage, RayOffsetX), METADATA_PARAMS(Z_Construct_UClass_ULeapImage_Statics::NewProp_RayOffsetX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapImage_Statics::NewProp_RayOffsetX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapImage_Statics::NewProp_RayOffsetY_MetaData[] = {
		{ "Category", "Leap Image" },
		{ "Comment", "/**\n\x09* The vertical ray offset.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapImage.h" },
		{ "ToolTip", "The vertical ray offset." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapImage_Statics::NewProp_RayOffsetY = { "RayOffsetY", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapImage, RayOffsetY), METADATA_PARAMS(Z_Construct_UClass_ULeapImage_Statics::NewProp_RayOffsetY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapImage_Statics::NewProp_RayOffsetY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapImage_Statics::NewProp_RayScaleX_MetaData[] = {
		{ "Category", "Leap Image" },
		{ "Comment", "/**\n\x09* The horizontal ray scale factor.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapImage.h" },
		{ "ToolTip", "The horizontal ray scale factor." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapImage_Statics::NewProp_RayScaleX = { "RayScaleX", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapImage, RayScaleX), METADATA_PARAMS(Z_Construct_UClass_ULeapImage_Statics::NewProp_RayScaleX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapImage_Statics::NewProp_RayScaleX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapImage_Statics::NewProp_RayScaleY_MetaData[] = {
		{ "Category", "Leap Image" },
		{ "Comment", "/**\n\x09* The vertical ray scale factor.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapImage.h" },
		{ "ToolTip", "The vertical ray scale factor." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapImage_Statics::NewProp_RayScaleY = { "RayScaleY", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapImage, RayScaleY), METADATA_PARAMS(Z_Construct_UClass_ULeapImage_Statics::NewProp_RayScaleY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapImage_Statics::NewProp_RayScaleY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapImage_Statics::NewProp_UseGammaCorrection_MetaData[] = {
		{ "Category", "Leap Image" },
		{ "Comment", "/**\n\x09* Whether this image should apply gamma correction when fetching the texture.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapImage.h" },
		{ "ToolTip", "Whether this image should apply gamma correction when fetching the texture." },
	};
#endif
	void Z_Construct_UClass_ULeapImage_Statics::NewProp_UseGammaCorrection_SetBit(void* Obj)
	{
		((ULeapImage*)Obj)->UseGammaCorrection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULeapImage_Statics::NewProp_UseGammaCorrection = { "UseGammaCorrection", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULeapImage), &Z_Construct_UClass_ULeapImage_Statics::NewProp_UseGammaCorrection_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULeapImage_Statics::NewProp_UseGammaCorrection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapImage_Statics::NewProp_UseGammaCorrection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapImage_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "Leap Image" },
		{ "Comment", "/**\n\x09* The image width.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapImage.h" },
		{ "ToolTip", "The image width." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULeapImage_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapImage, Width), METADATA_PARAMS(Z_Construct_UClass_ULeapImage_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapImage_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapImage_Statics::NewProp_PImagePointer_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapImage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapImage_Statics::NewProp_PImagePointer = { "PImagePointer", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapImage, PImagePointer), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapImage_Statics::NewProp_PImagePointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapImage_Statics::NewProp_PImagePointer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapImage_Statics::NewProp_PDistortionPointer_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapImage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapImage_Statics::NewProp_PDistortionPointer = { "PDistortionPointer", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapImage, PDistortionPointer), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapImage_Statics::NewProp_PDistortionPointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapImage_Statics::NewProp_PDistortionPointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeapImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapImage_Statics::NewProp_DistortionHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapImage_Statics::NewProp_DistortionWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapImage_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapImage_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapImage_Statics::NewProp_IsValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapImage_Statics::NewProp_RayOffsetX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapImage_Statics::NewProp_RayOffsetY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapImage_Statics::NewProp_RayScaleX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapImage_Statics::NewProp_RayScaleY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapImage_Statics::NewProp_UseGammaCorrection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapImage_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapImage_Statics::NewProp_PImagePointer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapImage_Statics::NewProp_PDistortionPointer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeapImage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeapImage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULeapImage_Statics::ClassParams = {
		&ULeapImage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULeapImage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULeapImage_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULeapImage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapImage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeapImage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULeapImage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULeapImage, 1784199338);
	template<> SIMPLELEAPMOTION_API UClass* StaticClass<ULeapImage>()
	{
		return ULeapImage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULeapImage(Z_Construct_UClass_ULeapImage, &ULeapImage::StaticClass, TEXT("/Script/SimpleLeapMotion"), TEXT("ULeapImage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeapImage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
