// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleLeapMotion/Public/LeapHand.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapHand() {}
// Cross Module References
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapHand_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapHand();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SimpleLeapMotion();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapFingerList_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapFrame_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapArm_NoRegister();
	SIMPLELEAPMOTION_API UEnum* Z_Construct_UEnum_SimpleLeapMotion_ELeapHandType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	DEFINE_FUNCTION(ULeapHand::execTranslationProbability)
	{
		P_GET_OBJECT(ULeapFrame,Z_Param_OtherFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->TranslationProbability(Z_Param_OtherFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapHand::execTranslation)
	{
		P_GET_OBJECT(ULeapFrame,Z_Param_OtherFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->Translation(Z_Param_OtherFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapHand::execScaleProbability)
	{
		P_GET_OBJECT(ULeapFrame,Z_Param_OtherFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->ScaleProbability(Z_Param_OtherFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapHand::execScaleFactor)
	{
		P_GET_OBJECT(ULeapFrame,Z_Param_OtherFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->ScaleFactor(Z_Param_OtherFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapHand::execRotationProbability)
	{
		P_GET_OBJECT(ULeapFrame,Z_Param_OtherFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->RotationProbability(Z_Param_OtherFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapHand::execRotationMatrix)
	{
		P_GET_OBJECT(ULeapFrame,Z_Param_OtherFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMatrix*)Z_Param__Result=P_THIS->RotationMatrix(Z_Param_OtherFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapHand::execRotationAxis)
	{
		P_GET_OBJECT(ULeapFrame,Z_Param_OtherFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->RotationAxis(Z_Param_OtherFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapHand::execRotationAngleWithAxis)
	{
		P_GET_OBJECT(ULeapFrame,Z_Param_OtherFrame);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->RotationAngleWithAxis(Z_Param_OtherFrame,Z_Param_Out_Axis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapHand::execRotationAngle)
	{
		P_GET_OBJECT(ULeapFrame,Z_Param_OtherFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->RotationAngle(Z_Param_OtherFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapHand::execFrame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapFrame**)Z_Param__Result=P_THIS->Frame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapHand::execFingers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapFingerList**)Z_Param__Result=P_THIS->Fingers();
		P_NATIVE_END;
	}
	void ULeapHand::StaticRegisterNativesULeapHand()
	{
		UClass* Class = ULeapHand::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fingers", &ULeapHand::execFingers },
			{ "Frame", &ULeapHand::execFrame },
			{ "RotationAngle", &ULeapHand::execRotationAngle },
			{ "RotationAngleWithAxis", &ULeapHand::execRotationAngleWithAxis },
			{ "RotationAxis", &ULeapHand::execRotationAxis },
			{ "RotationMatrix", &ULeapHand::execRotationMatrix },
			{ "RotationProbability", &ULeapHand::execRotationProbability },
			{ "ScaleFactor", &ULeapHand::execScaleFactor },
			{ "ScaleProbability", &ULeapHand::execScaleProbability },
			{ "Translation", &ULeapHand::execTranslation },
			{ "TranslationProbability", &ULeapHand::execTranslationProbability },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULeapHand_Fingers_Statics
	{
		struct LeapHand_eventFingers_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapHand_Fingers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapHand_eventFingers_Parms, ReturnValue), Z_Construct_UClass_ULeapFingerList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapHand_Fingers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapHand_Fingers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapHand_Fingers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Hand" },
		{ "Comment", "/**\n\x09* The list of Finger objects detected in this frame that are attached to this hand,\n\x09* given in order from thumb to pinky.\n\x09* \xe6\xad\xa4\xe5\xb8\xa7\xe4\xb8\xad\xe6\xa3\x80\xe6\xb5\x8b\xe5\x88\xb0\xe7\x9a\x84\xe3\x80\x81\xe9\x99\x84\xe7\x9d\x80\xe5\x9c\xa8\xe8\xaf\xa5\xe6\x89\x8b\xe4\xb8\x8a\xe7\x9a\x84\xe6\x89\x8b\xe6\x8c\x87\xe5\xaf\xb9\xe8\xb1\xa1\xe7\x9a\x84\xe5\x88\x97\xe8\xa1\xa8\xef\xbc\x8c\xe6\x8c\x89\xe4\xbb\x8e\xe6\x8b\x87\xe6\x8c\x87\xe5\x88\xb0\xe5\xb0\x8f\xe6\x8c\x87\xe7\x9a\x84\xe9\xa1\xba\xe5\xba\x8f\xe6\x8e\x92\xe5\x88\x97\xe3\x80\x82\n\x09*\n\x09* @return\x09The FingerList containing all Finger objects attached to this hand.\n\x09*/" },
		{ "DisplayName", "Fingers" },
		{ "ModuleRelativePath", "Public/LeapHand.h" },
		{ "ToolTip", "The list of Finger objects detected in this frame that are attached to this hand,\ngiven in order from thumb to pinky.\n\xe6\xad\xa4\xe5\xb8\xa7\xe4\xb8\xad\xe6\xa3\x80\xe6\xb5\x8b\xe5\x88\xb0\xe7\x9a\x84\xe3\x80\x81\xe9\x99\x84\xe7\x9d\x80\xe5\x9c\xa8\xe8\xaf\xa5\xe6\x89\x8b\xe4\xb8\x8a\xe7\x9a\x84\xe6\x89\x8b\xe6\x8c\x87\xe5\xaf\xb9\xe8\xb1\xa1\xe7\x9a\x84\xe5\x88\x97\xe8\xa1\xa8\xef\xbc\x8c\xe6\x8c\x89\xe4\xbb\x8e\xe6\x8b\x87\xe6\x8c\x87\xe5\x88\xb0\xe5\xb0\x8f\xe6\x8c\x87\xe7\x9a\x84\xe9\xa1\xba\xe5\xba\x8f\xe6\x8e\x92\xe5\x88\x97\xe3\x80\x82\n\n@return       The FingerList containing all Finger objects attached to this hand." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapHand_Fingers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapHand, nullptr, "Fingers", nullptr, nullptr, sizeof(LeapHand_eventFingers_Parms), Z_Construct_UFunction_ULeapHand_Fingers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHand_Fingers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapHand_Fingers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHand_Fingers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapHand_Fingers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapHand_Fingers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapHand_Frame_Statics
	{
		struct LeapHand_eventFrame_Parms
		{
			ULeapFrame* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapHand_Frame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapHand_eventFrame_Parms, ReturnValue), Z_Construct_UClass_ULeapFrame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapHand_Frame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapHand_Frame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapHand_Frame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Hand" },
		{ "Comment", "/**\n\x09* The Frame associated with this Hand.\n\x09* \xe4\xb8\x8e\xe6\xad\xa4\xe6\x89\x8b\xe5\x85\xb3\xe8\x81\x94\xe7\x9a\x84\xe5\xb8\xa7\xe3\x80\x82\n\x09* \xe5\xa6\x82\xe6\x9e\x9c\xe5\x8f\xaf\xe7\x94\xa8\xef\xbc\x8c\xe5\x88\x99\xe8\xbf\x94\xe5\x9b\x9e\xe5\x85\xb3\xe8\x81\x94\xe7\x9a\x84 Frame \xe5\xaf\xb9\xe8\xb1\xa1\xef\xbc\x9b\xe5\x90\xa6\xe5\x88\x99\xef\xbc\x8c\xe8\xbf\x94\xe5\x9b\x9e\xe4\xb8\x80\xe4\xb8\xaa\xe6\x97\xa0\xe6\x95\x88\xe7\x9a\x84 Frame \xe5\xaf\xb9\xe8\xb1\xa1\xe3\x80\x82\n\x09*\n\x09* @return\x09The associated Frame object, if available; otherwise, an invalid Frame object is returned.\n\x09*/" },
		{ "DisplayName", "Frame" },
		{ "ModuleRelativePath", "Public/LeapHand.h" },
		{ "ToolTip", "The Frame associated with this Hand.\n\xe4\xb8\x8e\xe6\xad\xa4\xe6\x89\x8b\xe5\x85\xb3\xe8\x81\x94\xe7\x9a\x84\xe5\xb8\xa7\xe3\x80\x82\n\xe5\xa6\x82\xe6\x9e\x9c\xe5\x8f\xaf\xe7\x94\xa8\xef\xbc\x8c\xe5\x88\x99\xe8\xbf\x94\xe5\x9b\x9e\xe5\x85\xb3\xe8\x81\x94\xe7\x9a\x84 Frame \xe5\xaf\xb9\xe8\xb1\xa1\xef\xbc\x9b\xe5\x90\xa6\xe5\x88\x99\xef\xbc\x8c\xe8\xbf\x94\xe5\x9b\x9e\xe4\xb8\x80\xe4\xb8\xaa\xe6\x97\xa0\xe6\x95\x88\xe7\x9a\x84 Frame \xe5\xaf\xb9\xe8\xb1\xa1\xe3\x80\x82\n\n@return       The associated Frame object, if available; otherwise, an invalid Frame object is returned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapHand_Frame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapHand, nullptr, "Frame", nullptr, nullptr, sizeof(LeapHand_eventFrame_Parms), Z_Construct_UFunction_ULeapHand_Frame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHand_Frame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapHand_Frame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHand_Frame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapHand_Frame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapHand_Frame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapHand_RotationAngle_Statics
	{
		struct LeapHand_eventRotationAngle_Parms
		{
			ULeapFrame* OtherFrame;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherFrame;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapHand_RotationAngle_Statics::NewProp_OtherFrame = { "OtherFrame", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapHand_eventRotationAngle_Parms, OtherFrame), Z_Construct_UClass_ULeapFrame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULeapHand_RotationAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapHand_eventRotationAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapHand_RotationAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapHand_RotationAngle_Statics::NewProp_OtherFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapHand_RotationAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapHand_RotationAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Hand" },
		{ "Comment", "/**\n\x09* The angle of rotation around the rotation axis derived from the change in orientation \n\x09* of this hand, and any associated fingers, between the current frame and the specified frame.\n\x09* \xe5\x9b\xb4\xe7\xbb\x95\xe6\x97\x8b\xe8\xbd\xac\xe8\xbd\xb4\xe7\x9a\x84\xe6\x97\x8b\xe8\xbd\xac\xe8\xa7\x92\xe5\xba\xa6\xef\xbc\x8c\xe8\xaf\xa5\xe8\xa7\x92\xe5\xba\xa6\xe7\x94\xb1\xe5\xbd\x93\xe5\x89\x8d\xe5\xb8\xa7\xe5\x92\x8c\xe6\x8c\x87\xe5\xae\x9a\xe5\xb8\xa7\xe4\xb9\x8b\xe9\x97\xb4\xe6\xad\xa4\xe6\x89\x8b\xe5\x8f\x8a\xe4\xbb\xbb\xe4\xbd\x95\xe7\x9b\xb8\xe5\x85\xb3\xe6\x89\x8b\xe6\x8c\x87\xe7\x9a\x84\xe5\xa7\xbf\xe6\x80\x81\xe5\x8f\x98\xe5\x8c\x96\xe5\xbe\x97\xe5\x87\xba\xe3\x80\x82\n\x09*\n\x09* @param\x09OtherFrame\x09The starting frame for computing the relative rotation.\xe7\x94\xa8\xe4\xba\x8e\xe8\xae\xa1\xe7\xae\x97\xe7\x9b\xb8\xe5\xaf\xb9\xe6\x97\x8b\xe8\xbd\xac\xe7\x9a\x84\xe8\xb5\xb7\xe5\xa7\x8b\xe5\xb8\xa7\xe3\x80\x82\n\x09* @return\x09""A positive value representing the heuristically determined rotational change of the hand between the current frame and that specified in the sinceFrame parameter.\n\x09*\x09\x09\x09\xe4\xb8\x80\xe4\xb8\xaa\xe6\xad\xa3\xe5\x80\xbc\xef\xbc\x8c\xe8\xa1\xa8\xe7\xa4\xba\xe5\x90\xaf\xe5\x8f\x91\xe5\xbc\x8f\xe7\xa1\xae\xe5\xae\x9a\xe6\x96\xb9\xe6\xb3\x95\xe8\xae\xa1\xe7\xae\x97\xe5\x87\xba\xe7\x9a\x84\xe6\x89\x8b\xe5\x9c\xa8\xe5\xbd\x93\xe5\x89\x8d\xe5\xb8\xa7\xe5\x92\x8c sinceFrame \xe5\x8f\x82\xe6\x95\xb0\xe6\x8c\x87\xe5\xae\x9a\xe5\xb8\xa7\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe6\x97\x8b\xe8\xbd\xac\xe5\x8f\x98\xe5\x8c\x96\xe3\x80\x82\n\x09*/" },
		{ "DisplayName", "RotationAngle" },
		{ "ModuleRelativePath", "Public/LeapHand.h" },
		{ "ToolTip", "The angle of rotation around the rotation axis derived from the change in orientation\nof this hand, and any associated fingers, between the current frame and the specified frame.\n\xe5\x9b\xb4\xe7\xbb\x95\xe6\x97\x8b\xe8\xbd\xac\xe8\xbd\xb4\xe7\x9a\x84\xe6\x97\x8b\xe8\xbd\xac\xe8\xa7\x92\xe5\xba\xa6\xef\xbc\x8c\xe8\xaf\xa5\xe8\xa7\x92\xe5\xba\xa6\xe7\x94\xb1\xe5\xbd\x93\xe5\x89\x8d\xe5\xb8\xa7\xe5\x92\x8c\xe6\x8c\x87\xe5\xae\x9a\xe5\xb8\xa7\xe4\xb9\x8b\xe9\x97\xb4\xe6\xad\xa4\xe6\x89\x8b\xe5\x8f\x8a\xe4\xbb\xbb\xe4\xbd\x95\xe7\x9b\xb8\xe5\x85\xb3\xe6\x89\x8b\xe6\x8c\x87\xe7\x9a\x84\xe5\xa7\xbf\xe6\x80\x81\xe5\x8f\x98\xe5\x8c\x96\xe5\xbe\x97\xe5\x87\xba\xe3\x80\x82\n\n@param        OtherFrame      The starting frame for computing the relative rotation.\xe7\x94\xa8\xe4\xba\x8e\xe8\xae\xa1\xe7\xae\x97\xe7\x9b\xb8\xe5\xaf\xb9\xe6\x97\x8b\xe8\xbd\xac\xe7\x9a\x84\xe8\xb5\xb7\xe5\xa7\x8b\xe5\xb8\xa7\xe3\x80\x82\n@return       A positive value representing the heuristically determined rotational change of the hand between the current frame and that specified in the sinceFrame parameter.\n                      \xe4\xb8\x80\xe4\xb8\xaa\xe6\xad\xa3\xe5\x80\xbc\xef\xbc\x8c\xe8\xa1\xa8\xe7\xa4\xba\xe5\x90\xaf\xe5\x8f\x91\xe5\xbc\x8f\xe7\xa1\xae\xe5\xae\x9a\xe6\x96\xb9\xe6\xb3\x95\xe8\xae\xa1\xe7\xae\x97\xe5\x87\xba\xe7\x9a\x84\xe6\x89\x8b\xe5\x9c\xa8\xe5\xbd\x93\xe5\x89\x8d\xe5\xb8\xa7\xe5\x92\x8c sinceFrame \xe5\x8f\x82\xe6\x95\xb0\xe6\x8c\x87\xe5\xae\x9a\xe5\xb8\xa7\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe6\x97\x8b\xe8\xbd\xac\xe5\x8f\x98\xe5\x8c\x96\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapHand_RotationAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapHand, nullptr, "RotationAngle", nullptr, nullptr, sizeof(LeapHand_eventRotationAngle_Parms), Z_Construct_UFunction_ULeapHand_RotationAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHand_RotationAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapHand_RotationAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHand_RotationAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapHand_RotationAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapHand_RotationAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapHand_RotationAngleWithAxis_Statics
	{
		struct LeapHand_eventRotationAngleWithAxis_Parms
		{
			ULeapFrame* OtherFrame;
			FVector Axis;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Axis;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapHand_RotationAngleWithAxis_Statics::NewProp_OtherFrame = { "OtherFrame", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapHand_eventRotationAngleWithAxis_Parms, OtherFrame), Z_Construct_UClass_ULeapFrame_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapHand_RotationAngleWithAxis_Statics::NewProp_Axis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapHand_RotationAngleWithAxis_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapHand_eventRotationAngleWithAxis_Parms, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULeapHand_RotationAngleWithAxis_Statics::NewProp_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHand_RotationAngleWithAxis_Statics::NewProp_Axis_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULeapHand_RotationAngleWithAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapHand_eventRotationAngleWithAxis_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapHand_RotationAngleWithAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapHand_RotationAngleWithAxis_Statics::NewProp_OtherFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapHand_RotationAngleWithAxis_Statics::NewProp_Axis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapHand_RotationAngleWithAxis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapHand_RotationAngleWithAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Hand" },
		{ "Comment", "/**\n\x09* The angle of rotation around the specified axis derived from the change in orientation \n\x09* of this hand, and any associated fingers, between the current frame and the specified frame.\n\x09* \xe5\x9b\xb4\xe7\xbb\x95\xe6\x8c\x87\xe5\xae\x9a\xe8\xbd\xb4\xe7\x9a\x84\xe6\x97\x8b\xe8\xbd\xac\xe8\xa7\x92\xe5\xba\xa6\xef\xbc\x8c\xe8\xaf\xa5\xe8\xa7\x92\xe5\xba\xa6\xe7\x94\xb1\xe5\xbd\x93\xe5\x89\x8d\xe5\xb8\xa7\xe5\x92\x8c\xe6\x8c\x87\xe5\xae\x9a\xe5\xb8\xa7\xe4\xb9\x8b\xe9\x97\xb4\xe6\xad\xa4\xe6\x89\x8b\xe5\x8f\x8a\xe4\xbb\xbb\xe4\xbd\x95\xe7\x9b\xb8\xe5\x85\xb3\xe6\x89\x8b\xe6\x8c\x87\xe7\x9a\x84\xe5\xa7\xbf\xe6\x80\x81\xe5\x8f\x98\xe5\x8c\x96\xe5\xbe\x97\xe5\x87\xba\xe3\x80\x82\n\x09*\n\x09* @param\x09OtherFrame\x09The starting frame for computing the relative rotation.\n\x09* @param\x09""Axis\x09\x09The axis to measure rotation around.\n\x09* @return\x09""A value representing the heuristically determined rotational change of the hand between the current frame and that specified in the sinceFrame parameter around the specified axis.\n\x09*/" },
		{ "DisplayName", "RotationAngleWithAxis" },
		{ "ModuleRelativePath", "Public/LeapHand.h" },
		{ "ToolTip", "The angle of rotation around the specified axis derived from the change in orientation\nof this hand, and any associated fingers, between the current frame and the specified frame.\n\xe5\x9b\xb4\xe7\xbb\x95\xe6\x8c\x87\xe5\xae\x9a\xe8\xbd\xb4\xe7\x9a\x84\xe6\x97\x8b\xe8\xbd\xac\xe8\xa7\x92\xe5\xba\xa6\xef\xbc\x8c\xe8\xaf\xa5\xe8\xa7\x92\xe5\xba\xa6\xe7\x94\xb1\xe5\xbd\x93\xe5\x89\x8d\xe5\xb8\xa7\xe5\x92\x8c\xe6\x8c\x87\xe5\xae\x9a\xe5\xb8\xa7\xe4\xb9\x8b\xe9\x97\xb4\xe6\xad\xa4\xe6\x89\x8b\xe5\x8f\x8a\xe4\xbb\xbb\xe4\xbd\x95\xe7\x9b\xb8\xe5\x85\xb3\xe6\x89\x8b\xe6\x8c\x87\xe7\x9a\x84\xe5\xa7\xbf\xe6\x80\x81\xe5\x8f\x98\xe5\x8c\x96\xe5\xbe\x97\xe5\x87\xba\xe3\x80\x82\n\n@param        OtherFrame      The starting frame for computing the relative rotation.\n@param        Axis            The axis to measure rotation around.\n@return       A value representing the heuristically determined rotational change of the hand between the current frame and that specified in the sinceFrame parameter around the specified axis." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapHand_RotationAngleWithAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapHand, nullptr, "RotationAngleWithAxis", nullptr, nullptr, sizeof(LeapHand_eventRotationAngleWithAxis_Parms), Z_Construct_UFunction_ULeapHand_RotationAngleWithAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHand_RotationAngleWithAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapHand_RotationAngleWithAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHand_RotationAngleWithAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapHand_RotationAngleWithAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapHand_RotationAngleWithAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapHand_RotationAxis_Statics
	{
		struct LeapHand_eventRotationAxis_Parms
		{
			const ULeapFrame* OtherFrame;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherFrame;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapHand_RotationAxis_Statics::NewProp_OtherFrame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapHand_RotationAxis_Statics::NewProp_OtherFrame = { "OtherFrame", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapHand_eventRotationAxis_Parms, OtherFrame), Z_Construct_UClass_ULeapFrame_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULeapHand_RotationAxis_Statics::NewProp_OtherFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHand_RotationAxis_Statics::NewProp_OtherFrame_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapHand_RotationAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapHand_eventRotationAxis_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapHand_RotationAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapHand_RotationAxis_Statics::NewProp_OtherFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapHand_RotationAxis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapHand_RotationAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Hand" },
		{ "Comment", "/**\n\x09* The axis of rotation derived from the change in orientation of this hand, and any associated \n\x09* fingers, between the current frame and the specified frame.\n\x09* \xe6\x97\x8b\xe8\xbd\xac\xe8\xbd\xb4\xef\xbc\x8c\xe7\x94\xb1\xe5\xbd\x93\xe5\x89\x8d\xe5\xb8\xa7\xe5\x92\x8c\xe6\x8c\x87\xe5\xae\x9a\xe5\xb8\xa7\xe4\xb9\x8b\xe9\x97\xb4\xe6\xad\xa4\xe6\x89\x8b\xe5\x8f\x8a\xe4\xbb\xbb\xe4\xbd\x95\xe7\x9b\xb8\xe5\x85\xb3\xe6\x89\x8b\xe6\x8c\x87\xe7\x9a\x84\xe5\xa7\xbf\xe6\x80\x81\xe5\x8f\x98\xe5\x8c\x96\xe5\xbe\x97\xe5\x87\xba\xe3\x80\x82\n\x09*\n\x09* @param\x09OtherFrame\x09The starting frame for computing the relative rotation.\n\x09* @return\x09""A normalized direction Vector representing the heuristically determined axis of rotational change of the hand between the current frame and that specified in the sinceFrame parameter.\n\x09*/" },
		{ "DisplayName", "RotationAxis" },
		{ "ModuleRelativePath", "Public/LeapHand.h" },
		{ "ToolTip", "The axis of rotation derived from the change in orientation of this hand, and any associated\nfingers, between the current frame and the specified frame.\n\xe6\x97\x8b\xe8\xbd\xac\xe8\xbd\xb4\xef\xbc\x8c\xe7\x94\xb1\xe5\xbd\x93\xe5\x89\x8d\xe5\xb8\xa7\xe5\x92\x8c\xe6\x8c\x87\xe5\xae\x9a\xe5\xb8\xa7\xe4\xb9\x8b\xe9\x97\xb4\xe6\xad\xa4\xe6\x89\x8b\xe5\x8f\x8a\xe4\xbb\xbb\xe4\xbd\x95\xe7\x9b\xb8\xe5\x85\xb3\xe6\x89\x8b\xe6\x8c\x87\xe7\x9a\x84\xe5\xa7\xbf\xe6\x80\x81\xe5\x8f\x98\xe5\x8c\x96\xe5\xbe\x97\xe5\x87\xba\xe3\x80\x82\n\n@param        OtherFrame      The starting frame for computing the relative rotation.\n@return       A normalized direction Vector representing the heuristically determined axis of rotational change of the hand between the current frame and that specified in the sinceFrame parameter." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapHand_RotationAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapHand, nullptr, "RotationAxis", nullptr, nullptr, sizeof(LeapHand_eventRotationAxis_Parms), Z_Construct_UFunction_ULeapHand_RotationAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHand_RotationAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapHand_RotationAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHand_RotationAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapHand_RotationAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapHand_RotationAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapHand_RotationMatrix_Statics
	{
		struct FMatrix
		{
			FPlane XPlane;
			FPlane YPlane;
			FPlane ZPlane;
			FPlane WPlane;
		};

		struct LeapHand_eventRotationMatrix_Parms
		{
			const ULeapFrame* OtherFrame;
			FMatrix ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherFrame;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapHand_RotationMatrix_Statics::NewProp_OtherFrame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapHand_RotationMatrix_Statics::NewProp_OtherFrame = { "OtherFrame", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapHand_eventRotationMatrix_Parms, OtherFrame), Z_Construct_UClass_ULeapFrame_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULeapHand_RotationMatrix_Statics::NewProp_OtherFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHand_RotationMatrix_Statics::NewProp_OtherFrame_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapHand_RotationMatrix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapHand_eventRotationMatrix_Parms, ReturnValue), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapHand_RotationMatrix_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapHand_RotationMatrix_Statics::NewProp_OtherFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapHand_RotationMatrix_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapHand_RotationMatrix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Hand" },
		{ "Comment", "/**\n\x09* The transform matrix expressing the rotation derived from the change in orientation of this \n\x09* hand, and any associated fingers, between the current frame and the specified frame.\n\x09* \xe5\x8f\x98\xe6\x8d\xa2\xe7\x9f\xa9\xe9\x98\xb5\xef\xbc\x8c\xe8\xa1\xa8\xe7\xa4\xba\xe7\x94\xb1\xe5\xbd\x93\xe5\x89\x8d\xe5\xb8\xa7\xe5\x92\x8c\xe6\x8c\x87\xe5\xae\x9a\xe5\xb8\xa7\xe4\xb9\x8b\xe9\x97\xb4\xe6\xad\xa4\xe6\x89\x8b\xe5\x8f\x8a\xe4\xbb\xbb\xe4\xbd\x95\xe7\x9b\xb8\xe5\x85\xb3\xe6\x89\x8b\xe6\x8c\x87\xe7\x9a\x84\xe5\xa7\xbf\xe6\x80\x81\xe5\x8f\x98\xe5\x8c\x96\xe5\xbe\x97\xe5\x87\xba\xe7\x9a\x84\xe6\x97\x8b\xe8\xbd\xac\xe3\x80\x82\n\x09*\n\x09* @param\x09OtherFrame\x09The starting frame for computing the relative rotation.\n\x09* @return\x09""A transformation Matrix representing the heuristically determined rotational change of the hand between the current frame and that specified in the sinceFrame parameter.\n\x09*/" },
		{ "DisplayName", "RotationMatrix" },
		{ "ModuleRelativePath", "Public/LeapHand.h" },
		{ "ToolTip", "The transform matrix expressing the rotation derived from the change in orientation of this\nhand, and any associated fingers, between the current frame and the specified frame.\n\xe5\x8f\x98\xe6\x8d\xa2\xe7\x9f\xa9\xe9\x98\xb5\xef\xbc\x8c\xe8\xa1\xa8\xe7\xa4\xba\xe7\x94\xb1\xe5\xbd\x93\xe5\x89\x8d\xe5\xb8\xa7\xe5\x92\x8c\xe6\x8c\x87\xe5\xae\x9a\xe5\xb8\xa7\xe4\xb9\x8b\xe9\x97\xb4\xe6\xad\xa4\xe6\x89\x8b\xe5\x8f\x8a\xe4\xbb\xbb\xe4\xbd\x95\xe7\x9b\xb8\xe5\x85\xb3\xe6\x89\x8b\xe6\x8c\x87\xe7\x9a\x84\xe5\xa7\xbf\xe6\x80\x81\xe5\x8f\x98\xe5\x8c\x96\xe5\xbe\x97\xe5\x87\xba\xe7\x9a\x84\xe6\x97\x8b\xe8\xbd\xac\xe3\x80\x82\n\n@param        OtherFrame      The starting frame for computing the relative rotation.\n@return       A transformation Matrix representing the heuristically determined rotational change of the hand between the current frame and that specified in the sinceFrame parameter." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapHand_RotationMatrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapHand, nullptr, "RotationMatrix", nullptr, nullptr, sizeof(LeapHand_eventRotationMatrix_Parms), Z_Construct_UFunction_ULeapHand_RotationMatrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHand_RotationMatrix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapHand_RotationMatrix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHand_RotationMatrix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapHand_RotationMatrix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapHand_RotationMatrix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapHand_RotationProbability_Statics
	{
		struct LeapHand_eventRotationProbability_Parms
		{
			const ULeapFrame* OtherFrame;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherFrame;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapHand_RotationProbability_Statics::NewProp_OtherFrame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapHand_RotationProbability_Statics::NewProp_OtherFrame = { "OtherFrame", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapHand_eventRotationProbability_Parms, OtherFrame), Z_Construct_UClass_ULeapFrame_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULeapHand_RotationProbability_Statics::NewProp_OtherFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHand_RotationProbability_Statics::NewProp_OtherFrame_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULeapHand_RotationProbability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapHand_eventRotationProbability_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapHand_RotationProbability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapHand_RotationProbability_Statics::NewProp_OtherFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapHand_RotationProbability_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapHand_RotationProbability_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Hand" },
		{ "Comment", "/**\n\x09* The estimated probability that the hand motion between the current frame and the specified \n\x09* frame is intended to be a rotating motion.\n\x09* \xe5\xbd\x93\xe5\x89\x8d\xe5\xb8\xa7\xe5\x92\x8c\xe6\x8c\x87\xe5\xae\x9a\xe5\xb8\xa7\xe4\xb9\x8b\xe9\x97\xb4\xe6\x89\x8b\xe9\x83\xa8\xe8\xbf\x90\xe5\x8a\xa8\xe8\xa2\xab\xe8\xae\xa4\xe4\xb8\xba\xe6\x98\xaf\xe6\x97\x8b\xe8\xbd\xac\xe8\xbf\x90\xe5\x8a\xa8\xe7\x9a\x84\xe4\xbc\xb0\xe8\xae\xa1\xe6\xa6\x82\xe7\x8e\x87\xe3\x80\x82\n\x09*\n\x09* @param\x09OtherFrame\x09The starting frame for computing the relative rotation.\n\x09* @return\x09""A value between 0 and 1 representing the estimated probability that the hand motion between the current frame and the specified frame is intended to be a rotating motion.\n\x09*/" },
		{ "DisplayName", "RotationProbability" },
		{ "ModuleRelativePath", "Public/LeapHand.h" },
		{ "ToolTip", "The estimated probability that the hand motion between the current frame and the specified\nframe is intended to be a rotating motion.\n\xe5\xbd\x93\xe5\x89\x8d\xe5\xb8\xa7\xe5\x92\x8c\xe6\x8c\x87\xe5\xae\x9a\xe5\xb8\xa7\xe4\xb9\x8b\xe9\x97\xb4\xe6\x89\x8b\xe9\x83\xa8\xe8\xbf\x90\xe5\x8a\xa8\xe8\xa2\xab\xe8\xae\xa4\xe4\xb8\xba\xe6\x98\xaf\xe6\x97\x8b\xe8\xbd\xac\xe8\xbf\x90\xe5\x8a\xa8\xe7\x9a\x84\xe4\xbc\xb0\xe8\xae\xa1\xe6\xa6\x82\xe7\x8e\x87\xe3\x80\x82\n\n@param        OtherFrame      The starting frame for computing the relative rotation.\n@return       A value between 0 and 1 representing the estimated probability that the hand motion between the current frame and the specified frame is intended to be a rotating motion." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapHand_RotationProbability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapHand, nullptr, "RotationProbability", nullptr, nullptr, sizeof(LeapHand_eventRotationProbability_Parms), Z_Construct_UFunction_ULeapHand_RotationProbability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHand_RotationProbability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapHand_RotationProbability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHand_RotationProbability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapHand_RotationProbability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapHand_RotationProbability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapHand_ScaleFactor_Statics
	{
		struct LeapHand_eventScaleFactor_Parms
		{
			const ULeapFrame* OtherFrame;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherFrame;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapHand_ScaleFactor_Statics::NewProp_OtherFrame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapHand_ScaleFactor_Statics::NewProp_OtherFrame = { "OtherFrame", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapHand_eventScaleFactor_Parms, OtherFrame), Z_Construct_UClass_ULeapFrame_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULeapHand_ScaleFactor_Statics::NewProp_OtherFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHand_ScaleFactor_Statics::NewProp_OtherFrame_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULeapHand_ScaleFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapHand_eventScaleFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapHand_ScaleFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapHand_ScaleFactor_Statics::NewProp_OtherFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapHand_ScaleFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapHand_ScaleFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Hand" },
		{ "Comment", "/**\n\x09* The scale factor derived from this hand\xef\xbf\xbds motion between the current frame and the specified frame.\n\x09* \xe7\x94\xb1\xe5\xbd\x93\xe5\x89\x8d\xe5\xb8\xa7\xe5\x92\x8c\xe6\x8c\x87\xe5\xae\x9a\xe5\xb8\xa7\xe4\xb9\x8b\xe9\x97\xb4\xe6\xad\xa4\xe6\x89\x8b\xe7\x9a\x84\xe8\xbf\x90\xe5\x8a\xa8\xe5\xbe\x97\xe5\x87\xba\xe7\x9a\x84\xe7\xbc\xa9\xe6\x94\xbe\xe5\x9b\xa0\xe5\xad\x90\xe3\x80\x82\n\x09*\n\x09* @param\x09OtherFrame\x09The starting frame for computing the relative scaling.\n\x09* @return\x09""A positive value representing the heuristically determined scaling change ratio of the hand between the current frame and that specified in the sinceFrame parameter.\n\x09*/" },
		{ "DisplayName", "ScaleFactor" },
		{ "ModuleRelativePath", "Public/LeapHand.h" },
		{ "ToolTip", "The scale factor derived from this hand\xef\xbf\xbds motion between the current frame and the specified frame.\n\xe7\x94\xb1\xe5\xbd\x93\xe5\x89\x8d\xe5\xb8\xa7\xe5\x92\x8c\xe6\x8c\x87\xe5\xae\x9a\xe5\xb8\xa7\xe4\xb9\x8b\xe9\x97\xb4\xe6\xad\xa4\xe6\x89\x8b\xe7\x9a\x84\xe8\xbf\x90\xe5\x8a\xa8\xe5\xbe\x97\xe5\x87\xba\xe7\x9a\x84\xe7\xbc\xa9\xe6\x94\xbe\xe5\x9b\xa0\xe5\xad\x90\xe3\x80\x82\n\n@param        OtherFrame      The starting frame for computing the relative scaling.\n@return       A positive value representing the heuristically determined scaling change ratio of the hand between the current frame and that specified in the sinceFrame parameter." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapHand_ScaleFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapHand, nullptr, "ScaleFactor", nullptr, nullptr, sizeof(LeapHand_eventScaleFactor_Parms), Z_Construct_UFunction_ULeapHand_ScaleFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHand_ScaleFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapHand_ScaleFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHand_ScaleFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapHand_ScaleFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapHand_ScaleFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapHand_ScaleProbability_Statics
	{
		struct LeapHand_eventScaleProbability_Parms
		{
			const ULeapFrame* OtherFrame;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherFrame;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapHand_ScaleProbability_Statics::NewProp_OtherFrame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapHand_ScaleProbability_Statics::NewProp_OtherFrame = { "OtherFrame", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapHand_eventScaleProbability_Parms, OtherFrame), Z_Construct_UClass_ULeapFrame_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULeapHand_ScaleProbability_Statics::NewProp_OtherFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHand_ScaleProbability_Statics::NewProp_OtherFrame_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULeapHand_ScaleProbability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapHand_eventScaleProbability_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapHand_ScaleProbability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapHand_ScaleProbability_Statics::NewProp_OtherFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapHand_ScaleProbability_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapHand_ScaleProbability_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Hand" },
		{ "Comment", "/**\n\x09* The estimated probability that the hand motion between the current frame and the specified \n\x09* frame is intended to be a scaling motion.\n\x09* \xe4\xbc\xb0\xe8\xae\xa1\xe7\x9a\x84\xe6\xa6\x82\xe7\x8e\x87\xef\xbc\x8c\xe8\xa1\xa8\xe7\xa4\xba\xe5\xbd\x93\xe5\x89\x8d\xe5\xb8\xa7\xe5\x92\x8c\xe6\x8c\x87\xe5\xae\x9a\xe5\xb8\xa7\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe6\x89\x8b\xe9\x83\xa8\xe8\xbf\x90\xe5\x8a\xa8\xe6\x98\xaf\xe5\x90\xa6\xe6\x84\x8f\xe5\x9b\xbe\xe4\xb8\xba\xe7\xbc\xa9\xe6\x94\xbe\xe8\xbf\x90\xe5\x8a\xa8\xe3\x80\x82\n\x09*\n\x09* @param\x09OtherFrame\x09The starting frame for computing the relative scaling.\n\x09* @return\x09""A value between 0 and 1 representing the estimated probability that the hand motion between the current frame and the specified frame is intended to be a scaling motion.\n\x09*/" },
		{ "DisplayName", "ScaleProbability" },
		{ "ModuleRelativePath", "Public/LeapHand.h" },
		{ "ToolTip", "The estimated probability that the hand motion between the current frame and the specified\nframe is intended to be a scaling motion.\n\xe4\xbc\xb0\xe8\xae\xa1\xe7\x9a\x84\xe6\xa6\x82\xe7\x8e\x87\xef\xbc\x8c\xe8\xa1\xa8\xe7\xa4\xba\xe5\xbd\x93\xe5\x89\x8d\xe5\xb8\xa7\xe5\x92\x8c\xe6\x8c\x87\xe5\xae\x9a\xe5\xb8\xa7\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe6\x89\x8b\xe9\x83\xa8\xe8\xbf\x90\xe5\x8a\xa8\xe6\x98\xaf\xe5\x90\xa6\xe6\x84\x8f\xe5\x9b\xbe\xe4\xb8\xba\xe7\xbc\xa9\xe6\x94\xbe\xe8\xbf\x90\xe5\x8a\xa8\xe3\x80\x82\n\n@param        OtherFrame      The starting frame for computing the relative scaling.\n@return       A value between 0 and 1 representing the estimated probability that the hand motion between the current frame and the specified frame is intended to be a scaling motion." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapHand_ScaleProbability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapHand, nullptr, "ScaleProbability", nullptr, nullptr, sizeof(LeapHand_eventScaleProbability_Parms), Z_Construct_UFunction_ULeapHand_ScaleProbability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHand_ScaleProbability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapHand_ScaleProbability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHand_ScaleProbability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapHand_ScaleProbability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapHand_ScaleProbability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapHand_Translation_Statics
	{
		struct LeapHand_eventTranslation_Parms
		{
			const ULeapFrame* OtherFrame;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherFrame;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapHand_Translation_Statics::NewProp_OtherFrame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapHand_Translation_Statics::NewProp_OtherFrame = { "OtherFrame", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapHand_eventTranslation_Parms, OtherFrame), Z_Construct_UClass_ULeapFrame_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULeapHand_Translation_Statics::NewProp_OtherFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHand_Translation_Statics::NewProp_OtherFrame_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapHand_Translation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapHand_eventTranslation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapHand_Translation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapHand_Translation_Statics::NewProp_OtherFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapHand_Translation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapHand_Translation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Hand" },
		{ "Comment", "/**\n\x09* The change of position of this hand between the current frame and the specified frame.\n\x09* \xe6\xad\xa4\xe6\x89\x8b\xe5\x9c\xa8\xe5\xbd\x93\xe5\x89\x8d\xe5\xb8\xa7\xe5\x92\x8c\xe6\x8c\x87\xe5\xae\x9a\xe5\xb8\xa7\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xe5\x8f\x98\xe5\x8c\x96\xe3\x80\x82\n\x09*\n\x09* @param\x09OtherFrame\x09The starting frame for computing the translation.\n\x09* @return\x09""A Vector representing the heuristically determined change in hand position between the current frame and that specified in the sinceFrame parameter.\n\x09*/" },
		{ "DisplayName", "Translation" },
		{ "ModuleRelativePath", "Public/LeapHand.h" },
		{ "ToolTip", "The change of position of this hand between the current frame and the specified frame.\n\xe6\xad\xa4\xe6\x89\x8b\xe5\x9c\xa8\xe5\xbd\x93\xe5\x89\x8d\xe5\xb8\xa7\xe5\x92\x8c\xe6\x8c\x87\xe5\xae\x9a\xe5\xb8\xa7\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xe5\x8f\x98\xe5\x8c\x96\xe3\x80\x82\n\n@param        OtherFrame      The starting frame for computing the translation.\n@return       A Vector representing the heuristically determined change in hand position between the current frame and that specified in the sinceFrame parameter." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapHand_Translation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapHand, nullptr, "Translation", nullptr, nullptr, sizeof(LeapHand_eventTranslation_Parms), Z_Construct_UFunction_ULeapHand_Translation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHand_Translation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapHand_Translation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHand_Translation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapHand_Translation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapHand_Translation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapHand_TranslationProbability_Statics
	{
		struct LeapHand_eventTranslationProbability_Parms
		{
			const ULeapFrame* OtherFrame;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherFrame;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapHand_TranslationProbability_Statics::NewProp_OtherFrame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapHand_TranslationProbability_Statics::NewProp_OtherFrame = { "OtherFrame", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapHand_eventTranslationProbability_Parms, OtherFrame), Z_Construct_UClass_ULeapFrame_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULeapHand_TranslationProbability_Statics::NewProp_OtherFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHand_TranslationProbability_Statics::NewProp_OtherFrame_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULeapHand_TranslationProbability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapHand_eventTranslationProbability_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapHand_TranslationProbability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapHand_TranslationProbability_Statics::NewProp_OtherFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapHand_TranslationProbability_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapHand_TranslationProbability_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Hand" },
		{ "Comment", "/**\n\x09* The estimated probability that the hand motion between the current frame and the specified \n\x09* frame is intended to be a translating motion.+\n\x09* \xe4\xbc\xb0\xe8\xae\xa1\xe7\x9a\x84\xe6\xa6\x82\xe7\x8e\x87\xef\xbc\x8c\xe8\xa1\xa8\xe7\xa4\xba\xe5\xbd\x93\xe5\x89\x8d\xe5\xb8\xa7\xe5\x92\x8c\xe6\x8c\x87\xe5\xae\x9a\xe5\xb8\xa7\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe6\x89\x8b\xe9\x83\xa8\xe8\xbf\x90\xe5\x8a\xa8\xe6\x98\xaf\xe5\x90\xa6\xe6\x84\x8f\xe5\x9b\xbe\xe4\xb8\xba\xe5\xb9\xb3\xe7\xa7\xbb\xe8\xbf\x90\xe5\x8a\xa8\xe3\x80\x82\n\x09*\n\x09* @param\x09OtherFrame\x09The starting frame for computing the translation.\n\x09* @return\x09""A value between 0 and 1 representing the estimated probability that the hand motion between the current frame and the specified frame is intended to be a translating motion.\n\x09*/" },
		{ "DisplayName", "TranslationProbability" },
		{ "ModuleRelativePath", "Public/LeapHand.h" },
		{ "ToolTip", "The estimated probability that the hand motion between the current frame and the specified\nframe is intended to be a translating motion.+\n\xe4\xbc\xb0\xe8\xae\xa1\xe7\x9a\x84\xe6\xa6\x82\xe7\x8e\x87\xef\xbc\x8c\xe8\xa1\xa8\xe7\xa4\xba\xe5\xbd\x93\xe5\x89\x8d\xe5\xb8\xa7\xe5\x92\x8c\xe6\x8c\x87\xe5\xae\x9a\xe5\xb8\xa7\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe6\x89\x8b\xe9\x83\xa8\xe8\xbf\x90\xe5\x8a\xa8\xe6\x98\xaf\xe5\x90\xa6\xe6\x84\x8f\xe5\x9b\xbe\xe4\xb8\xba\xe5\xb9\xb3\xe7\xa7\xbb\xe8\xbf\x90\xe5\x8a\xa8\xe3\x80\x82\n\n@param        OtherFrame      The starting frame for computing the translation.\n@return       A value between 0 and 1 representing the estimated probability that the hand motion between the current frame and the specified frame is intended to be a translating motion." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapHand_TranslationProbability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapHand, nullptr, "TranslationProbability", nullptr, nullptr, sizeof(LeapHand_eventTranslationProbability_Parms), Z_Construct_UFunction_ULeapHand_TranslationProbability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHand_TranslationProbability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapHand_TranslationProbability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHand_TranslationProbability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapHand_TranslationProbability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapHand_TranslationProbability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULeapHand_NoRegister()
	{
		return ULeapHand::StaticClass();
	}
	struct Z_Construct_UClass_ULeapHand_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Arm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Arm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Basis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Basis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Confidence_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Confidence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GrabStrength;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HandType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HandType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLeft_MetaData[];
#endif
		static void NewProp_IsLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsRight_MetaData[];
#endif
		static void NewProp_IsRight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsValid_MetaData[];
#endif
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PalmNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PalmNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PalmOrientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PalmOrientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PalmPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PalmPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PalmVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PalmVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PalmWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PalmWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinchStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PinchStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereCenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SphereCenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StabilizedPalmPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StabilizedPalmPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeVisible_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WristPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WristPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PFingers_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PFingers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULeapHand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULeapHand_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeapHand_Fingers, "Fingers" }, // 773219480
		{ &Z_Construct_UFunction_ULeapHand_Frame, "Frame" }, // 1797598957
		{ &Z_Construct_UFunction_ULeapHand_RotationAngle, "RotationAngle" }, // 3722598588
		{ &Z_Construct_UFunction_ULeapHand_RotationAngleWithAxis, "RotationAngleWithAxis" }, // 2837670200
		{ &Z_Construct_UFunction_ULeapHand_RotationAxis, "RotationAxis" }, // 1880908492
		{ &Z_Construct_UFunction_ULeapHand_RotationMatrix, "RotationMatrix" }, // 1975635709
		{ &Z_Construct_UFunction_ULeapHand_RotationProbability, "RotationProbability" }, // 1707864332
		{ &Z_Construct_UFunction_ULeapHand_ScaleFactor, "ScaleFactor" }, // 3064445394
		{ &Z_Construct_UFunction_ULeapHand_ScaleProbability, "ScaleProbability" }, // 615826815
		{ &Z_Construct_UFunction_ULeapHand_Translation, "Translation" }, // 2192812919
		{ &Z_Construct_UFunction_ULeapHand_TranslationProbability, "TranslationProbability" }, // 4100076559
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapHand_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* The Hand class reports the physical characteristics of a detected hand.\n* Hand tracking data includes a palm position and velocity; vectors for \n* the palm normal and direction to the fingers; properties of a sphere \n* fit to the hand; and lists of the attached fingers.\n* \xe6\x89\x8b\xe9\x83\xa8\xe8\xbf\xbd\xe8\xb8\xaa\xe6\x95\xb0\xe6\x8d\xae\xe5\x8c\x85\xe6\x8b\xac\xe6\x89\x8b\xe6\x8e\x8c\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xe5\x92\x8c\xe9\x80\x9f\xe5\xba\xa6\xef\xbc\x9b\xe6\x89\x8b\xe6\x8e\x8c\xe6\xb3\x95\xe7\xba\xbf\xe5\x90\x91\xe9\x87\x8f\xe5\x92\x8c\xe6\x8c\x87\xe5\x90\x91\xe6\x89\x8b\xe6\x8c\x87\xe6\x96\xb9\xe5\x90\x91\xe7\x9a\x84\xe5\x90\x91\xe9\x87\x8f\xef\xbc\x9b\xe6\x8b\x9f\xe5\x90\x88\xe5\x88\xb0\xe6\x89\x8b\xe7\x9a\x84\xe7\x90\x83\xe4\xbd\x93\xe7\x9a\x84\xe5\xb1\x9e\xe6\x80\xa7\xef\xbc\x9b\xe4\xbb\xa5\xe5\x8f\x8a\xe9\x99\x84\xe5\xb1\x9e\xe6\x89\x8b\xe6\x8c\x87\xe7\x9a\x84\xe5\x88\x97\xe8\xa1\xa8\xe3\x80\x82\n*\n* Leap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.Hand.html\n*/" },
		{ "IncludePath", "LeapHand.h" },
		{ "ModuleRelativePath", "Public/LeapHand.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The Hand class reports the physical characteristics of a detected hand.\nHand tracking data includes a palm position and velocity; vectors for\nthe palm normal and direction to the fingers; properties of a sphere\nfit to the hand; and lists of the attached fingers.\n\xe6\x89\x8b\xe9\x83\xa8\xe8\xbf\xbd\xe8\xb8\xaa\xe6\x95\xb0\xe6\x8d\xae\xe5\x8c\x85\xe6\x8b\xac\xe6\x89\x8b\xe6\x8e\x8c\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xe5\x92\x8c\xe9\x80\x9f\xe5\xba\xa6\xef\xbc\x9b\xe6\x89\x8b\xe6\x8e\x8c\xe6\xb3\x95\xe7\xba\xbf\xe5\x90\x91\xe9\x87\x8f\xe5\x92\x8c\xe6\x8c\x87\xe5\x90\x91\xe6\x89\x8b\xe6\x8c\x87\xe6\x96\xb9\xe5\x90\x91\xe7\x9a\x84\xe5\x90\x91\xe9\x87\x8f\xef\xbc\x9b\xe6\x8b\x9f\xe5\x90\x88\xe5\x88\xb0\xe6\x89\x8b\xe7\x9a\x84\xe7\x90\x83\xe4\xbd\x93\xe7\x9a\x84\xe5\xb1\x9e\xe6\x80\xa7\xef\xbc\x9b\xe4\xbb\xa5\xe5\x8f\x8a\xe9\x99\x84\xe5\xb1\x9e\xe6\x89\x8b\xe6\x8c\x87\xe7\x9a\x84\xe5\x88\x97\xe8\xa1\xa8\xe3\x80\x82\n\nLeap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.Hand.html" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapHand_Statics::NewProp_Arm_MetaData[] = {
		{ "Category", "Leap Hand" },
		{ "Comment", "/**\n\x09* The arm to which this hand is attached.\n\x09* \xe6\xad\xa4\xe6\x89\x8b\xe6\x89\x80\xe8\xbf\x9e\xe6\x8e\xa5\xe7\x9a\x84\xe6\x89\x8b\xe8\x87\x82\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapHand.h" },
		{ "ToolTip", "The arm to which this hand is attached.\n\xe6\xad\xa4\xe6\x89\x8b\xe6\x89\x80\xe8\xbf\x9e\xe6\x8e\xa5\xe7\x9a\x84\xe6\x89\x8b\xe8\x87\x82\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapHand_Statics::NewProp_Arm = { "Arm", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapHand, Arm), Z_Construct_UClass_ULeapArm_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapHand_Statics::NewProp_Arm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapHand_Statics::NewProp_Arm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapHand_Statics::NewProp_Basis_MetaData[] = {
		{ "Category", "Leap Hand" },
		{ "Comment", "/**\n\x09* The orientation of the hand as a basis matrix.\n\x09* \xe6\x89\x8b\xe7\x9a\x84\xe6\x96\xb9\xe5\x90\x91\xe4\xbd\x9c\xe4\xb8\xba\xe5\x9f\xba\xe7\x9f\xa9\xe9\x98\xb5\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapHand.h" },
		{ "ToolTip", "The orientation of the hand as a basis matrix.\n\xe6\x89\x8b\xe7\x9a\x84\xe6\x96\xb9\xe5\x90\x91\xe4\xbd\x9c\xe4\xb8\xba\xe5\x9f\xba\xe7\x9f\xa9\xe9\x98\xb5\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULeapHand_Statics::NewProp_Basis = { "Basis", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapHand, Basis), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UClass_ULeapHand_Statics::NewProp_Basis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapHand_Statics::NewProp_Basis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapHand_Statics::NewProp_Confidence_MetaData[] = {
		{ "Category", "Leap Hand" },
		{ "Comment", "/**\n\x09* How confident we are with a given hand pose.\n\x09* The confidence level ranges between 0.0 and 1.0 inclusive.\n\x09* \xe6\x88\x91\xe4\xbb\xac\xe5\xaf\xb9\xe7\xbb\x99\xe5\xae\x9a\xe6\x89\x8b\xe9\x83\xa8\xe5\xa7\xbf\xe5\x8a\xbf\xe7\x9a\x84\xe7\xbd\xae\xe4\xbf\xa1\xe5\xba\xa6\xe3\x80\x82\n\x09* \xe7\xbd\xae\xe4\xbf\xa1\xe5\xba\xa6\xe8\x8c\x83\xe5\x9b\xb4\xe4\xbb\x8b\xe4\xba\x8e 0.0 \xe5\x92\x8c 1.0 \xe4\xb9\x8b\xe9\x97\xb4\xef\xbc\x88\xe5\x90\xab 0.0 \xe5\x92\x8c 1.0\xef\xbc\x89\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapHand.h" },
		{ "ToolTip", "How confident we are with a given hand pose.\nThe confidence level ranges between 0.0 and 1.0 inclusive.\n\xe6\x88\x91\xe4\xbb\xac\xe5\xaf\xb9\xe7\xbb\x99\xe5\xae\x9a\xe6\x89\x8b\xe9\x83\xa8\xe5\xa7\xbf\xe5\x8a\xbf\xe7\x9a\x84\xe7\xbd\xae\xe4\xbf\xa1\xe5\xba\xa6\xe3\x80\x82\n\xe7\xbd\xae\xe4\xbf\xa1\xe5\xba\xa6\xe8\x8c\x83\xe5\x9b\xb4\xe4\xbb\x8b\xe4\xba\x8e 0.0 \xe5\x92\x8c 1.0 \xe4\xb9\x8b\xe9\x97\xb4\xef\xbc\x88\xe5\x90\xab 0.0 \xe5\x92\x8c 1.0\xef\xbc\x89" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapHand_Statics::NewProp_Confidence = { "Confidence", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapHand, Confidence), METADATA_PARAMS(Z_Construct_UClass_ULeapHand_Statics::NewProp_Confidence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapHand_Statics::NewProp_Confidence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapHand_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Leap Hand" },
		{ "Comment", "/**\n\x09* The direction from the palm position toward the fingers.\n\x09* \xe4\xbb\x8e\xe6\x89\x8b\xe6\x8e\x8c\xe4\xbd\x8d\xe7\xbd\xae\xe5\x88\xb0\xe6\x89\x8b\xe6\x8c\x87\xe7\x9a\x84\xe6\x96\xb9\xe5\x90\x91\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapHand.h" },
		{ "ToolTip", "The direction from the palm position toward the fingers.\n\xe4\xbb\x8e\xe6\x89\x8b\xe6\x8e\x8c\xe4\xbd\x8d\xe7\xbd\xae\xe5\x88\xb0\xe6\x89\x8b\xe6\x8c\x87\xe7\x9a\x84\xe6\x96\xb9\xe5\x90\x91\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULeapHand_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapHand, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULeapHand_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapHand_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapHand_Statics::NewProp_GrabStrength_MetaData[] = {
		{ "Category", "Leap Hand" },
		{ "Comment", "/**\n\x09* The strength of a grab hand pose as a float value in the [0..1] range representing \n\x09* the holding strength of the pose.\n\x09* \xe6\x8a\x93\xe5\x8f\x96\xe6\x89\x8b\xe5\x8a\xbf\xe7\x9a\x84\xe5\xbc\xba\xe5\xba\xa6\xef\xbc\x8c\xe4\xbb\xa5 [0..1] \xe8\x8c\x83\xe5\x9b\xb4\xe5\x86\x85\xe7\x9a\x84\xe6\xb5\xae\xe7\x82\xb9\xe5\x80\xbc\xe8\xa1\xa8\xe7\xa4\xba\xef\xbc\x8c\xe4\xbb\xa3\xe8\xa1\xa8\xe8\xaf\xa5\xe6\x89\x8b\xe5\x8a\xbf\xe7\x9a\x84\xe6\x8a\x93\xe6\x8f\xa1\xe5\xbc\xba\xe5\xba\xa6\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapHand.h" },
		{ "ToolTip", "The strength of a grab hand pose as a float value in the [0..1] range representing\nthe holding strength of the pose.\n\xe6\x8a\x93\xe5\x8f\x96\xe6\x89\x8b\xe5\x8a\xbf\xe7\x9a\x84\xe5\xbc\xba\xe5\xba\xa6\xef\xbc\x8c\xe4\xbb\xa5 [0..1] \xe8\x8c\x83\xe5\x9b\xb4\xe5\x86\x85\xe7\x9a\x84\xe6\xb5\xae\xe7\x82\xb9\xe5\x80\xbc\xe8\xa1\xa8\xe7\xa4\xba\xef\xbc\x8c\xe4\xbb\xa3\xe8\xa1\xa8\xe8\xaf\xa5\xe6\x89\x8b\xe5\x8a\xbf\xe7\x9a\x84\xe6\x8a\x93\xe6\x8f\xa1\xe5\xbc\xba\xe5\xba\xa6\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapHand_Statics::NewProp_GrabStrength = { "GrabStrength", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapHand, GrabStrength), METADATA_PARAMS(Z_Construct_UClass_ULeapHand_Statics::NewProp_GrabStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapHand_Statics::NewProp_GrabStrength_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULeapHand_Statics::NewProp_HandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapHand_Statics::NewProp_HandType_MetaData[] = {
		{ "Category", "Leap Hand" },
		{ "Comment", "/**\n\x09* Identifies whether this hand is Left, Right, or Unknown\n\x09* \xe6\xa0\x87\xe8\xaf\x86\xe6\xad\xa4\xe6\x89\x8b\xe6\x98\xaf\xe5\xb7\xa6\xe6\x89\x8b\xe3\x80\x81\xe5\x8f\xb3\xe6\x89\x8b\xe8\xbf\x98\xe6\x98\xaf\xe6\x9c\xaa\xe7\x9f\xa5\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapHand.h" },
		{ "ToolTip", "Identifies whether this hand is Left, Right, or Unknown\n\xe6\xa0\x87\xe8\xaf\x86\xe6\xad\xa4\xe6\x89\x8b\xe6\x98\xaf\xe5\xb7\xa6\xe6\x89\x8b\xe3\x80\x81\xe5\x8f\xb3\xe6\x89\x8b\xe8\xbf\x98\xe6\x98\xaf\xe6\x9c\xaa\xe7\x9f\xa5\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULeapHand_Statics::NewProp_HandType = { "HandType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapHand, HandType), Z_Construct_UEnum_SimpleLeapMotion_ELeapHandType, METADATA_PARAMS(Z_Construct_UClass_ULeapHand_Statics::NewProp_HandType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapHand_Statics::NewProp_HandType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapHand_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Leap Hand" },
		{ "Comment", "/*\n\x09* A unique ID assigned to this Hand object, whose value remains the same across consecutive \n\x09* frames while the tracked hand remains visible.\n\x09* \xe5\x88\x86\xe9\x85\x8d\xe7\xbb\x99\xe6\xad\xa4 Hand \xe5\xaf\xb9\xe8\xb1\xa1\xe7\x9a\x84\xe5\x94\xaf\xe4\xb8\x80 ID\xef\xbc\x8c\xe5\x8f\xaa\xe8\xa6\x81\xe8\xa2\xab\xe8\xb7\x9f\xe8\xb8\xaa\xe7\x9a\x84\xe6\x89\x8b\xe4\xbf\x9d\xe6\x8c\x81\xe5\x8f\xaf\xe8\xa7\x81\xef\xbc\x8c\xe5\x85\xb6\xe5\x80\xbc\xe5\x9c\xa8\xe8\xbf\x9e\xe7\xbb\xad\xe5\xb8\xa7\xe4\xb9\x8b\xe9\x97\xb4\xe4\xbf\x9d\xe6\x8c\x81\xe4\xb8\x8d\xe5\x8f\x98\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapHand.h" },
		{ "ToolTip", "* A unique ID assigned to this Hand object, whose value remains the same across consecutive\n* frames while the tracked hand remains visible.\n* \xe5\x88\x86\xe9\x85\x8d\xe7\xbb\x99\xe6\xad\xa4 Hand \xe5\xaf\xb9\xe8\xb1\xa1\xe7\x9a\x84\xe5\x94\xaf\xe4\xb8\x80 ID\xef\xbc\x8c\xe5\x8f\xaa\xe8\xa6\x81\xe8\xa2\xab\xe8\xb7\x9f\xe8\xb8\xaa\xe7\x9a\x84\xe6\x89\x8b\xe4\xbf\x9d\xe6\x8c\x81\xe5\x8f\xaf\xe8\xa7\x81\xef\xbc\x8c\xe5\x85\xb6\xe5\x80\xbc\xe5\x9c\xa8\xe8\xbf\x9e\xe7\xbb\xad\xe5\xb8\xa7\xe4\xb9\x8b\xe9\x97\xb4\xe4\xbf\x9d\xe6\x8c\x81\xe4\xb8\x8d\xe5\x8f\x98\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULeapHand_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapHand, Id), METADATA_PARAMS(Z_Construct_UClass_ULeapHand_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapHand_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapHand_Statics::NewProp_IsLeft_MetaData[] = {
		{ "Category", "Leap Hand" },
		{ "Comment", "/**\n\x09* Identifies whether this Hand is a left hand.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapHand.h" },
		{ "ToolTip", "Identifies whether this Hand is a left hand." },
	};
#endif
	void Z_Construct_UClass_ULeapHand_Statics::NewProp_IsLeft_SetBit(void* Obj)
	{
		((ULeapHand*)Obj)->IsLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULeapHand_Statics::NewProp_IsLeft = { "IsLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULeapHand), &Z_Construct_UClass_ULeapHand_Statics::NewProp_IsLeft_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULeapHand_Statics::NewProp_IsLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapHand_Statics::NewProp_IsLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapHand_Statics::NewProp_IsRight_MetaData[] = {
		{ "Category", "Leap Hand" },
		{ "Comment", "/**\n\x09* Whether this is a right hand.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapHand.h" },
		{ "ToolTip", "Whether this is a right hand." },
	};
#endif
	void Z_Construct_UClass_ULeapHand_Statics::NewProp_IsRight_SetBit(void* Obj)
	{
		((ULeapHand*)Obj)->IsRight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULeapHand_Statics::NewProp_IsRight = { "IsRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULeapHand), &Z_Construct_UClass_ULeapHand_Statics::NewProp_IsRight_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULeapHand_Statics::NewProp_IsRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapHand_Statics::NewProp_IsRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapHand_Statics::NewProp_IsValid_MetaData[] = {
		{ "Category", "Leap Hand" },
		{ "Comment", "/**\n\x09* Reports whether this is a valid Hand object.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapHand.h" },
		{ "ToolTip", "Reports whether this is a valid Hand object." },
	};
#endif
	void Z_Construct_UClass_ULeapHand_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((ULeapHand*)Obj)->IsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULeapHand_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULeapHand), &Z_Construct_UClass_ULeapHand_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULeapHand_Statics::NewProp_IsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapHand_Statics::NewProp_IsValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapHand_Statics::NewProp_PalmNormal_MetaData[] = {
		{ "Category", "Leap Hand" },
		{ "Comment", "/**\n\x09* The normal vector to the palm. If your hand is flat, this vector will point downward,\n\x09* or \xef\xbf\xbdout\xef\xbf\xbd of the front surface of your palm.\n\x09* \xe6\x89\x8b\xe6\x8e\x8c\xe7\x9a\x84\xe6\xb3\x95\xe7\xba\xbf\xe5\x90\x91\xe9\x87\x8f\xe3\x80\x82\xe5\xa6\x82\xe6\x9e\x9c\xe4\xbd\xa0\xe7\x9a\x84\xe6\x89\x8b\xe6\x98\xaf\xe5\xb9\xb3\xe7\x9a\x84\xef\xbc\x8c\xe8\xbf\x99\xe4\xb8\xaa\xe5\x90\x91\xe9\x87\x8f\xe5\xb0\x86\xe6\x8c\x87\xe5\x90\x91\xe4\xb8\x8b\xe6\x96\xb9\xef\xbc\x8c\xe6\x88\x96\xe8\x80\x85\xe8\xaf\xb4\xe2\x80\x9c\xe6\x9c\x9d\xe5\xa4\x96\xe2\x80\x9d\xef\xbc\x8c\xe4\xbb\x8e\xe4\xbd\xa0\xe6\x89\x8b\xe6\x8e\x8c\xe7\x9a\x84\xe5\x89\x8d\xe8\xa1\xa8\xe9\x9d\xa2\xe6\x8c\x87\xe5\x87\xba\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapHand.h" },
		{ "ToolTip", "The normal vector to the palm. If your hand is flat, this vector will point downward,\nor \xef\xbf\xbdout\xef\xbf\xbd of the front surface of your palm.\n\xe6\x89\x8b\xe6\x8e\x8c\xe7\x9a\x84\xe6\xb3\x95\xe7\xba\xbf\xe5\x90\x91\xe9\x87\x8f\xe3\x80\x82\xe5\xa6\x82\xe6\x9e\x9c\xe4\xbd\xa0\xe7\x9a\x84\xe6\x89\x8b\xe6\x98\xaf\xe5\xb9\xb3\xe7\x9a\x84\xef\xbc\x8c\xe8\xbf\x99\xe4\xb8\xaa\xe5\x90\x91\xe9\x87\x8f\xe5\xb0\x86\xe6\x8c\x87\xe5\x90\x91\xe4\xb8\x8b\xe6\x96\xb9\xef\xbc\x8c\xe6\x88\x96\xe8\x80\x85\xe8\xaf\xb4\xe2\x80\x9c\xe6\x9c\x9d\xe5\xa4\x96\xe2\x80\x9d\xef\xbc\x8c\xe4\xbb\x8e\xe4\xbd\xa0\xe6\x89\x8b\xe6\x8e\x8c\xe7\x9a\x84\xe5\x89\x8d\xe8\xa1\xa8\xe9\x9d\xa2\xe6\x8c\x87\xe5\x87\xba\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULeapHand_Statics::NewProp_PalmNormal = { "PalmNormal", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapHand, PalmNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULeapHand_Statics::NewProp_PalmNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapHand_Statics::NewProp_PalmNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapHand_Statics::NewProp_PalmOrientation_MetaData[] = {
		{ "Category", "Leap Hand" },
		{ "Comment", "/**\n\x09* Custom API, Origin is a flat palm facing down.\n\x09* \xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89 API\xef\xbc\x8c\xe5\x8e\x9f\xe7\x82\xb9\xe6\x98\xaf\xe6\x89\x8b\xe6\x8e\x8c\xe6\x9c\x9d\xe4\xb8\x8b\xe7\x9a\x84\xe5\xb9\xb3\xe9\x9d\xa2\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapHand.h" },
		{ "ToolTip", "Custom API, Origin is a flat palm facing down.\n\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89 API\xef\xbc\x8c\xe5\x8e\x9f\xe7\x82\xb9\xe6\x98\xaf\xe6\x89\x8b\xe6\x8e\x8c\xe6\x9c\x9d\xe4\xb8\x8b\xe7\x9a\x84\xe5\xb9\xb3\xe9\x9d\xa2\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULeapHand_Statics::NewProp_PalmOrientation = { "PalmOrientation", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapHand, PalmOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ULeapHand_Statics::NewProp_PalmOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapHand_Statics::NewProp_PalmOrientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapHand_Statics::NewProp_PalmPosition_MetaData[] = {
		{ "Category", "Leap Hand" },
		{ "Comment", "/**\n\x09* The center position of the palm in centimeters from the Leap Motion Controller origin.\n\x09* \xe6\x89\x8b\xe6\x8e\x8c\xe4\xb8\xad\xe5\xbf\x83\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xef\xbc\x8c\xe4\xbb\xa5\xe5\x8e\x98\xe7\xb1\xb3\xe4\xb8\xba\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x8c\xe7\x9b\xb8\xe5\xaf\xb9\xe4\xba\x8e Leap Motion \xe6\x8e\xa7\xe5\x88\xb6\xe5\x99\xa8\xe7\x9a\x84\xe5\x8e\x9f\xe7\x82\xb9\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapHand.h" },
		{ "ToolTip", "The center position of the palm in centimeters from the Leap Motion Controller origin.\n\xe6\x89\x8b\xe6\x8e\x8c\xe4\xb8\xad\xe5\xbf\x83\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xef\xbc\x8c\xe4\xbb\xa5\xe5\x8e\x98\xe7\xb1\xb3\xe4\xb8\xba\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x8c\xe7\x9b\xb8\xe5\xaf\xb9\xe4\xba\x8e Leap Motion \xe6\x8e\xa7\xe5\x88\xb6\xe5\x99\xa8\xe7\x9a\x84\xe5\x8e\x9f\xe7\x82\xb9\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULeapHand_Statics::NewProp_PalmPosition = { "PalmPosition", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapHand, PalmPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULeapHand_Statics::NewProp_PalmPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapHand_Statics::NewProp_PalmPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapHand_Statics::NewProp_PalmVelocity_MetaData[] = {
		{ "Category", "Leap Hand" },
		{ "Comment", "/**\n\x09* The rate of change of the palm position in centimeters/second.\n\x09* \xe6\x89\x8b\xe6\x8e\x8c\xe4\xbd\x8d\xe7\xbd\xae\xe7\x9a\x84\xe5\x8f\x98\xe5\x8c\x96\xe7\x8e\x87\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xe4\xb8\xba\xe5\x8e\x98\xe7\xb1\xb3/\xe7\xa7\x92\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapHand.h" },
		{ "ToolTip", "The rate of change of the palm position in centimeters/second.\n\xe6\x89\x8b\xe6\x8e\x8c\xe4\xbd\x8d\xe7\xbd\xae\xe7\x9a\x84\xe5\x8f\x98\xe5\x8c\x96\xe7\x8e\x87\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xe4\xb8\xba\xe5\x8e\x98\xe7\xb1\xb3/\xe7\xa7\x92\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULeapHand_Statics::NewProp_PalmVelocity = { "PalmVelocity", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapHand, PalmVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULeapHand_Statics::NewProp_PalmVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapHand_Statics::NewProp_PalmVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapHand_Statics::NewProp_PalmWidth_MetaData[] = {
		{ "Category", "Leap Hand" },
		{ "Comment", "/**\n\x09* The estimated width of the palm when the hand is in a flat position.\n\x09* \xe5\xbd\x93\xe6\x89\x8b\xe5\xa4\x84\xe4\xba\x8e\xe5\xb9\xb3\xe6\x94\xbe\xe4\xbd\x8d\xe7\xbd\xae\xe6\x97\xb6\xe6\x89\x8b\xe6\x8e\x8c\xe7\x9a\x84\xe4\xbc\xb0\xe8\xae\xa1\xe5\xae\xbd\xe5\xba\xa6\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapHand.h" },
		{ "ToolTip", "The estimated width of the palm when the hand is in a flat position.\n\xe5\xbd\x93\xe6\x89\x8b\xe5\xa4\x84\xe4\xba\x8e\xe5\xb9\xb3\xe6\x94\xbe\xe4\xbd\x8d\xe7\xbd\xae\xe6\x97\xb6\xe6\x89\x8b\xe6\x8e\x8c\xe7\x9a\x84\xe4\xbc\xb0\xe8\xae\xa1\xe5\xae\xbd\xe5\xba\xa6\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapHand_Statics::NewProp_PalmWidth = { "PalmWidth", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapHand, PalmWidth), METADATA_PARAMS(Z_Construct_UClass_ULeapHand_Statics::NewProp_PalmWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapHand_Statics::NewProp_PalmWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapHand_Statics::NewProp_PinchStrength_MetaData[] = {
		{ "Category", "Leap Hand" },
		{ "Comment", "/**\n\x09* The holding strength of a pinch hand pose. The strength is zero for an open hand, \n\x09* and blends to 1.0 when a pinching hand pose is recognized. Pinching can be done \n\x09* between the thumb and any other finger of the same hand.\n\x09* \xe6\x8d\x8f\xe5\x90\x88\xe6\x89\x8b\xe5\x8a\xbf\xe7\x9a\x84\xe6\x8a\x93\xe6\x8f\xa1\xe5\xbc\xba\xe5\xba\xa6\xe3\x80\x82\xe5\xbc\xa0\xe5\xbc\x80\xe6\x89\x8b\xe6\x97\xb6\xe5\xbc\xba\xe5\xba\xa6\xe4\xb8\xba\xe9\x9b\xb6\xef\xbc\x8c\xe5\xbd\x93\xe8\xaf\x86\xe5\x88\xab\xe5\x88\xb0\xe6\x8d\x8f\xe5\x90\x88\xe6\x89\x8b\xe5\x8a\xbf\xe6\x97\xb6\xef\xbc\x8c\xe5\xbc\xba\xe5\xba\xa6\xe4\xbc\x9a\xe9\x80\x90\xe6\xb8\x90\xe5\x8f\x98\xe4\xb8\xba 1.0\xe3\x80\x82\xe6\x8d\x8f\xe5\x90\x88\xe5\x8f\xaf\xe4\xbb\xa5\xe5\x9c\xa8\xe5\x90\x8c\xe4\xb8\x80\xe5\x8f\xaa\xe6\x89\x8b\xe7\x9a\x84\xe6\x8b\x87\xe6\x8c\x87\xe5\x92\x8c\xe5\x85\xb6\xe4\xbb\x96\xe4\xbb\xbb\xe4\xbd\x95\xe6\x89\x8b\xe6\x8c\x87\xe4\xb9\x8b\xe9\x97\xb4\xe8\xbf\x9b\xe8\xa1\x8c\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapHand.h" },
		{ "ToolTip", "The holding strength of a pinch hand pose. The strength is zero for an open hand,\nand blends to 1.0 when a pinching hand pose is recognized. Pinching can be done\nbetween the thumb and any other finger of the same hand.\n\xe6\x8d\x8f\xe5\x90\x88\xe6\x89\x8b\xe5\x8a\xbf\xe7\x9a\x84\xe6\x8a\x93\xe6\x8f\xa1\xe5\xbc\xba\xe5\xba\xa6\xe3\x80\x82\xe5\xbc\xa0\xe5\xbc\x80\xe6\x89\x8b\xe6\x97\xb6\xe5\xbc\xba\xe5\xba\xa6\xe4\xb8\xba\xe9\x9b\xb6\xef\xbc\x8c\xe5\xbd\x93\xe8\xaf\x86\xe5\x88\xab\xe5\x88\xb0\xe6\x8d\x8f\xe5\x90\x88\xe6\x89\x8b\xe5\x8a\xbf\xe6\x97\xb6\xef\xbc\x8c\xe5\xbc\xba\xe5\xba\xa6\xe4\xbc\x9a\xe9\x80\x90\xe6\xb8\x90\xe5\x8f\x98\xe4\xb8\xba 1.0\xe3\x80\x82\xe6\x8d\x8f\xe5\x90\x88\xe5\x8f\xaf\xe4\xbb\xa5\xe5\x9c\xa8\xe5\x90\x8c\xe4\xb8\x80\xe5\x8f\xaa\xe6\x89\x8b\xe7\x9a\x84\xe6\x8b\x87\xe6\x8c\x87\xe5\x92\x8c\xe5\x85\xb6\xe4\xbb\x96\xe4\xbb\xbb\xe4\xbd\x95\xe6\x89\x8b\xe6\x8c\x87\xe4\xb9\x8b\xe9\x97\xb4\xe8\xbf\x9b\xe8\xa1\x8c\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapHand_Statics::NewProp_PinchStrength = { "PinchStrength", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapHand, PinchStrength), METADATA_PARAMS(Z_Construct_UClass_ULeapHand_Statics::NewProp_PinchStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapHand_Statics::NewProp_PinchStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapHand_Statics::NewProp_SphereCenter_MetaData[] = {
		{ "Category", "Leap Hand" },
		{ "Comment", "/**\n\x09* The center of a sphere fit to the curvature of this hand. This sphere is placed roughly as \n\x09* if the hand were holding a ball.\n\x09* \xe6\x8b\x9f\xe5\x90\x88\xe5\x88\xb0\xe6\xad\xa4\xe6\x89\x8b\xe6\x9b\xb2\xe7\x8e\x87\xe7\x9a\x84\xe7\x90\x83\xe4\xbd\x93\xe7\x9a\x84\xe4\xb8\xad\xe5\xbf\x83\xe3\x80\x82\xe8\xbf\x99\xe4\xb8\xaa\xe7\x90\x83\xe4\xbd\x93\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xe5\xa4\xa7\xe8\x87\xb4\xe5\xb0\xb1\xe5\x83\x8f\xe6\x89\x8b\xe6\x8f\xa1\xe7\x9d\x80\xe4\xb8\x80\xe4\xb8\xaa\xe7\x90\x83\xe4\xb8\x80\xe6\xa0\xb7\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapHand.h" },
		{ "ToolTip", "The center of a sphere fit to the curvature of this hand. This sphere is placed roughly as\nif the hand were holding a ball.\n\xe6\x8b\x9f\xe5\x90\x88\xe5\x88\xb0\xe6\xad\xa4\xe6\x89\x8b\xe6\x9b\xb2\xe7\x8e\x87\xe7\x9a\x84\xe7\x90\x83\xe4\xbd\x93\xe7\x9a\x84\xe4\xb8\xad\xe5\xbf\x83\xe3\x80\x82\xe8\xbf\x99\xe4\xb8\xaa\xe7\x90\x83\xe4\xbd\x93\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xe5\xa4\xa7\xe8\x87\xb4\xe5\xb0\xb1\xe5\x83\x8f\xe6\x89\x8b\xe6\x8f\xa1\xe7\x9d\x80\xe4\xb8\x80\xe4\xb8\xaa\xe7\x90\x83\xe4\xb8\x80\xe6\xa0\xb7\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULeapHand_Statics::NewProp_SphereCenter = { "SphereCenter", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapHand, SphereCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULeapHand_Statics::NewProp_SphereCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapHand_Statics::NewProp_SphereCenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapHand_Statics::NewProp_SphereRadius_MetaData[] = {
		{ "Category", "Leap Hand" },
		{ "Comment", "/**\n\x09* The radius of a sphere fit to the curvature of this hand. This sphere is placed roughly as\n\x09* if the hand were holding a ball.\n\x09* \xe6\x8b\x9f\xe5\x90\x88\xe5\x88\xb0\xe6\xad\xa4\xe6\x89\x8b\xe6\x9b\xb2\xe7\x8e\x87\xe7\x9a\x84\xe7\x90\x83\xe4\xbd\x93\xe7\x9a\x84\xe5\x8d\x8a\xe5\xbe\x84\xe3\x80\x82\xe8\xbf\x99\xe4\xb8\xaa\xe7\x90\x83\xe4\xbd\x93\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xe5\xa4\xa7\xe8\x87\xb4\xe5\xb0\xb1\xe5\x83\x8f\xe6\x89\x8b\xe6\x8f\xa1\xe7\x9d\x80\xe4\xb8\x80\xe4\xb8\xaa\xe7\x90\x83\xe4\xb8\x80\xe6\xa0\xb7\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapHand.h" },
		{ "ToolTip", "The radius of a sphere fit to the curvature of this hand. This sphere is placed roughly as\nif the hand were holding a ball.\n\xe6\x8b\x9f\xe5\x90\x88\xe5\x88\xb0\xe6\xad\xa4\xe6\x89\x8b\xe6\x9b\xb2\xe7\x8e\x87\xe7\x9a\x84\xe7\x90\x83\xe4\xbd\x93\xe7\x9a\x84\xe5\x8d\x8a\xe5\xbe\x84\xe3\x80\x82\xe8\xbf\x99\xe4\xb8\xaa\xe7\x90\x83\xe4\xbd\x93\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xe5\xa4\xa7\xe8\x87\xb4\xe5\xb0\xb1\xe5\x83\x8f\xe6\x89\x8b\xe6\x8f\xa1\xe7\x9d\x80\xe4\xb8\x80\xe4\xb8\xaa\xe7\x90\x83\xe4\xb8\x80\xe6\xa0\xb7\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapHand_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapHand, SphereRadius), METADATA_PARAMS(Z_Construct_UClass_ULeapHand_Statics::NewProp_SphereRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapHand_Statics::NewProp_SphereRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapHand_Statics::NewProp_StabilizedPalmPosition_MetaData[] = {
		{ "Category", "Leap Hand" },
		{ "Comment", "/**\n\x09* The stabilized palm position of this Hand.\n\x09* \xe6\xad\xa4\xe6\x89\x8b\xe7\x9a\x84\xe7\xa8\xb3\xe5\xae\x9a\xe6\x89\x8b\xe6\x8e\x8c\xe4\xbd\x8d\xe7\xbd\xae\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapHand.h" },
		{ "ToolTip", "The stabilized palm position of this Hand.\n\xe6\xad\xa4\xe6\x89\x8b\xe7\x9a\x84\xe7\xa8\xb3\xe5\xae\x9a\xe6\x89\x8b\xe6\x8e\x8c\xe4\xbd\x8d\xe7\xbd\xae\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULeapHand_Statics::NewProp_StabilizedPalmPosition = { "StabilizedPalmPosition", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapHand, StabilizedPalmPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULeapHand_Statics::NewProp_StabilizedPalmPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapHand_Statics::NewProp_StabilizedPalmPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapHand_Statics::NewProp_TimeVisible_MetaData[] = {
		{ "Category", "Leap Hand" },
		{ "Comment", "/**\n\x09* The duration of time this Hand has been visible to the Leap Motion Controller.\n\x09* \xe6\xad\xa4\xe6\x89\x8b\xe5\xaf\xb9 Leap Motion \xe6\x8e\xa7\xe5\x88\xb6\xe5\x99\xa8\xe5\x8f\xaf\xe8\xa7\x81\xe7\x9a\x84\xe6\x97\xb6\xe9\x95\xbf\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapHand.h" },
		{ "ToolTip", "The duration of time this Hand has been visible to the Leap Motion Controller.\n\xe6\xad\xa4\xe6\x89\x8b\xe5\xaf\xb9 Leap Motion \xe6\x8e\xa7\xe5\x88\xb6\xe5\x99\xa8\xe5\x8f\xaf\xe8\xa7\x81\xe7\x9a\x84\xe6\x97\xb6\xe9\x95\xbf\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapHand_Statics::NewProp_TimeVisible = { "TimeVisible", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapHand, TimeVisible), METADATA_PARAMS(Z_Construct_UClass_ULeapHand_Statics::NewProp_TimeVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapHand_Statics::NewProp_TimeVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapHand_Statics::NewProp_WristPosition_MetaData[] = {
		{ "Category", "Leap Hand" },
		{ "Comment", "/**\n\x09* The position of the wrist of this hand.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapHand.h" },
		{ "ToolTip", "The position of the wrist of this hand." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULeapHand_Statics::NewProp_WristPosition = { "WristPosition", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapHand, WristPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULeapHand_Statics::NewProp_WristPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapHand_Statics::NewProp_WristPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapHand_Statics::NewProp_PFrame_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapHand.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapHand_Statics::NewProp_PFrame = { "PFrame", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapHand, PFrame), Z_Construct_UClass_ULeapFrame_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapHand_Statics::NewProp_PFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapHand_Statics::NewProp_PFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapHand_Statics::NewProp_PFingers_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapHand.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapHand_Statics::NewProp_PFingers = { "PFingers", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapHand, PFingers), Z_Construct_UClass_ULeapFingerList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapHand_Statics::NewProp_PFingers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapHand_Statics::NewProp_PFingers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeapHand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapHand_Statics::NewProp_Arm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapHand_Statics::NewProp_Basis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapHand_Statics::NewProp_Confidence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapHand_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapHand_Statics::NewProp_GrabStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapHand_Statics::NewProp_HandType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapHand_Statics::NewProp_HandType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapHand_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapHand_Statics::NewProp_IsLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapHand_Statics::NewProp_IsRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapHand_Statics::NewProp_IsValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapHand_Statics::NewProp_PalmNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapHand_Statics::NewProp_PalmOrientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapHand_Statics::NewProp_PalmPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapHand_Statics::NewProp_PalmVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapHand_Statics::NewProp_PalmWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapHand_Statics::NewProp_PinchStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapHand_Statics::NewProp_SphereCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapHand_Statics::NewProp_SphereRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapHand_Statics::NewProp_StabilizedPalmPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapHand_Statics::NewProp_TimeVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapHand_Statics::NewProp_WristPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapHand_Statics::NewProp_PFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapHand_Statics::NewProp_PFingers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeapHand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeapHand>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULeapHand_Statics::ClassParams = {
		&ULeapHand::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULeapHand_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULeapHand_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULeapHand_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapHand_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeapHand()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULeapHand_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULeapHand, 4030826428);
	template<> SIMPLELEAPMOTION_API UClass* StaticClass<ULeapHand>()
	{
		return ULeapHand::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULeapHand(Z_Construct_UClass_ULeapHand, &ULeapHand::StaticClass, TEXT("/Script/SimpleLeapMotion"), TEXT("ULeapHand"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeapHand);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
