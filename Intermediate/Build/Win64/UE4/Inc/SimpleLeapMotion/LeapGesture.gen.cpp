// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleLeapMotion/Public/LeapGesture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapGesture() {}
// Cross Module References
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapGesture_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapGesture();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SimpleLeapMotion();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapFrame_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapHandList_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapPointableList_NoRegister();
	SIMPLELEAPMOTION_API UEnum* Z_Construct_UEnum_SimpleLeapMotion_ELeapGestureState();
	SIMPLELEAPMOTION_API UEnum* Z_Construct_UEnum_SimpleLeapMotion_ELeapGestureType();
// End Cross Module References
	DEFINE_FUNCTION(ULeapGesture::execPointables)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapPointableList**)Z_Param__Result=P_THIS->Pointables();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapGesture::execHands)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapHandList**)Z_Param__Result=P_THIS->Hands();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapGesture::execFrame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapFrame**)Z_Param__Result=P_THIS->Frame();
		P_NATIVE_END;
	}
	void ULeapGesture::StaticRegisterNativesULeapGesture()
	{
		UClass* Class = ULeapGesture::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Frame", &ULeapGesture::execFrame },
			{ "Hands", &ULeapGesture::execHands },
			{ "Pointables", &ULeapGesture::execPointables },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULeapGesture_Frame_Statics
	{
		struct LeapGesture_eventFrame_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapGesture_Frame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapGesture_eventFrame_Parms, ReturnValue), Z_Construct_UClass_ULeapFrame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapGesture_Frame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapGesture_Frame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapGesture_Frame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Gesture" },
		{ "Comment", "/**\n\x09* The Frame containing this Gesture instance.\n\x09* \n\x09* @return The parent Frame object.\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "frame" },
		{ "Keywords", "frame" },
		{ "ModuleRelativePath", "Public/LeapGesture.h" },
		{ "ToolTip", "The Frame containing this Gesture instance.\n\n@return The parent Frame object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapGesture_Frame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapGesture, nullptr, "Frame", nullptr, nullptr, sizeof(LeapGesture_eventFrame_Parms), Z_Construct_UFunction_ULeapGesture_Frame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapGesture_Frame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapGesture_Frame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapGesture_Frame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapGesture_Frame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapGesture_Frame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapGesture_Hands_Statics
	{
		struct LeapGesture_eventHands_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapGesture_Hands_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapGesture_eventHands_Parms, ReturnValue), Z_Construct_UClass_ULeapHandList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapGesture_Hands_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapGesture_Hands_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapGesture_Hands_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Gesture" },
		{ "Comment", "/**\n\x09* The list of hands associated with this Gesture, if any.\n\x09*\n\x09* @return the list of related Hand objects.\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "hands" },
		{ "Keywords", "hands" },
		{ "ModuleRelativePath", "Public/LeapGesture.h" },
		{ "ToolTip", "The list of hands associated with this Gesture, if any.\n\n@return the list of related Hand objects." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapGesture_Hands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapGesture, nullptr, "Hands", nullptr, nullptr, sizeof(LeapGesture_eventHands_Parms), Z_Construct_UFunction_ULeapGesture_Hands_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapGesture_Hands_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapGesture_Hands_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapGesture_Hands_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapGesture_Hands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapGesture_Hands_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapGesture_Pointables_Statics
	{
		struct LeapGesture_eventPointables_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapGesture_Pointables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapGesture_eventPointables_Parms, ReturnValue), Z_Construct_UClass_ULeapPointableList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapGesture_Pointables_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapGesture_Pointables_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapGesture_Pointables_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Gesture" },
		{ "Comment", "/**\n\x09* The list of fingers and tools associated with this Gesture, if any.\n\x09*\n\x09* @return the list of related Pointable objects.\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "pointables" },
		{ "Keywords", "pointables" },
		{ "ModuleRelativePath", "Public/LeapGesture.h" },
		{ "ToolTip", "The list of fingers and tools associated with this Gesture, if any.\n\n@return the list of related Pointable objects." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapGesture_Pointables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapGesture, nullptr, "Pointables", nullptr, nullptr, sizeof(LeapGesture_eventPointables_Parms), Z_Construct_UFunction_ULeapGesture_Pointables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapGesture_Pointables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapGesture_Pointables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapGesture_Pointables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapGesture_Pointables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapGesture_Pointables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULeapGesture_NoRegister()
	{
		return ULeapGesture::StaticClass();
	}
	struct Z_Construct_UClass_ULeapGesture_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsValid_MetaData[];
#endif
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsValid;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PHands_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PHands;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PPointables_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PPointables;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULeapGesture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULeapGesture_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeapGesture_Frame, "Frame" }, // 535423444
		{ &Z_Construct_UFunction_ULeapGesture_Hands, "Hands" }, // 1082302335
		{ &Z_Construct_UFunction_ULeapGesture_Pointables, "Pointables" }, // 1063712731
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapGesture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* The Gesture class represents a recognized movement by the user.\n* The Leap Motion Controller watches the activity within its field of view for certain \n* movement patterns typical of a user gesture or command. For example, a movement from \n* side to side with the hand can indicate a swipe gesture, while a finger poking forward\n* can indicate a screen tap gesture.\n* Gesture \xe7\xb1\xbb\xe8\xa1\xa8\xe7\xa4\xba\xe7\x94\xa8\xe6\x88\xb7\xe8\xaf\x86\xe5\x88\xab\xe7\x9a\x84\xe7\xa7\xbb\xe5\x8a\xa8\xe3\x80\x82\n* Leap Motion Controller \xe4\xbc\x9a\xe5\xae\x9a\xe6\x9c\x9f\xe7\x9b\x91\xe8\xa7\x86\xe5\x85\xb6\xe8\xa7\x86\xe9\x87\x8e\xe5\x86\x85\xe7\x9a\x84\xe6\xb4\xbb\xe5\x8a\xa8\xe7\x94\xa8\xe6\x88\xb7\xe6\x89\x8b\xe5\x8a\xbf\xe6\x88\x96\xe5\x91\xbd\xe4\xbb\xa4\xe7\x9a\x84\xe5\x85\xb8\xe5\x9e\x8b\xe7\xa7\xbb\xe5\x8a\xa8\xe6\xa8\xa1\xe5\xbc\x8f\xe3\x80\x82\n* \xe4\xbe\x8b\xe5\xa6\x82\xef\xbc\x8c\xe4\xbb\x8e\xe6\x89\x8b\xe7\x9a\x84\xe5\xb7\xa6\xe5\x8f\xb3\xe5\x8f\xaf\xe4\xbb\xa5\xe8\xa1\xa8\xe7\xa4\xba\xe6\xbb\x91\xe5\x8a\xa8\xe6\x89\x8b\xe5\x8a\xbf\xef\xbc\x8c\xe8\x80\x8c\xe6\x89\x8b\xe6\x8c\x87\xe5\x90\x91\xe5\x89\x8d\xe6\x88\xb3\xe5\x8f\xaf\xe4\xbb\xa5\xe6\x8c\x87\xe7\xa4\xba\xe5\xb1\x8f\xe5\xb9\x95\xe7\x82\xb9\xe5\x87\xbb\xe6\x89\x8b\xe5\x8a\xbf\xe3\x80\x82\n*\n* Leap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.Gesture.html\n*/" },
		{ "IncludePath", "LeapGesture.h" },
		{ "ModuleRelativePath", "Public/LeapGesture.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The Gesture class represents a recognized movement by the user.\nThe Leap Motion Controller watches the activity within its field of view for certain\nmovement patterns typical of a user gesture or command. For example, a movement from\nside to side with the hand can indicate a swipe gesture, while a finger poking forward\ncan indicate a screen tap gesture.\nGesture \xe7\xb1\xbb\xe8\xa1\xa8\xe7\xa4\xba\xe7\x94\xa8\xe6\x88\xb7\xe8\xaf\x86\xe5\x88\xab\xe7\x9a\x84\xe7\xa7\xbb\xe5\x8a\xa8\xe3\x80\x82\nLeap Motion Controller \xe4\xbc\x9a\xe5\xae\x9a\xe6\x9c\x9f\xe7\x9b\x91\xe8\xa7\x86\xe5\x85\xb6\xe8\xa7\x86\xe9\x87\x8e\xe5\x86\x85\xe7\x9a\x84\xe6\xb4\xbb\xe5\x8a\xa8\xe7\x94\xa8\xe6\x88\xb7\xe6\x89\x8b\xe5\x8a\xbf\xe6\x88\x96\xe5\x91\xbd\xe4\xbb\xa4\xe7\x9a\x84\xe5\x85\xb8\xe5\x9e\x8b\xe7\xa7\xbb\xe5\x8a\xa8\xe6\xa8\xa1\xe5\xbc\x8f\xe3\x80\x82\n\xe4\xbe\x8b\xe5\xa6\x82\xef\xbc\x8c\xe4\xbb\x8e\xe6\x89\x8b\xe7\x9a\x84\xe5\xb7\xa6\xe5\x8f\xb3\xe5\x8f\xaf\xe4\xbb\xa5\xe8\xa1\xa8\xe7\xa4\xba\xe6\xbb\x91\xe5\x8a\xa8\xe6\x89\x8b\xe5\x8a\xbf\xef\xbc\x8c\xe8\x80\x8c\xe6\x89\x8b\xe6\x8c\x87\xe5\x90\x91\xe5\x89\x8d\xe6\x88\xb3\xe5\x8f\xaf\xe4\xbb\xa5\xe6\x8c\x87\xe7\xa4\xba\xe5\xb1\x8f\xe5\xb9\x95\xe7\x82\xb9\xe5\x87\xbb\xe6\x89\x8b\xe5\x8a\xbf\xe3\x80\x82\n\nLeap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.Gesture.html" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapGesture_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Leap Gesture" },
		{ "Comment", "/**\n\x09* The elapsed duration of the recognized movement up to the frame containing this\n\x09* Gesture object, in microseconds.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapGesture.h" },
		{ "ToolTip", "The elapsed duration of the recognized movement up to the frame containing this\nGesture object, in microseconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapGesture_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapGesture, Duration), METADATA_PARAMS(Z_Construct_UClass_ULeapGesture_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapGesture_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapGesture_Statics::NewProp_DurationSeconds_MetaData[] = {
		{ "Category", "Leap Gesture" },
		{ "Comment", "/**\n\x09* The elapsed duration in seconds.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapGesture.h" },
		{ "ToolTip", "The elapsed duration in seconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapGesture_Statics::NewProp_DurationSeconds = { "DurationSeconds", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapGesture, DurationSeconds), METADATA_PARAMS(Z_Construct_UClass_ULeapGesture_Statics::NewProp_DurationSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapGesture_Statics::NewProp_DurationSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapGesture_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Leap Gesture" },
		{ "Comment", "/**\n\x09* The gesture ID.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapGesture.h" },
		{ "ToolTip", "The gesture ID." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULeapGesture_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapGesture, Id), METADATA_PARAMS(Z_Construct_UClass_ULeapGesture_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapGesture_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapGesture_Statics::NewProp_IsValid_MetaData[] = {
		{ "Category", "Leap Gesture" },
		{ "Comment", "/**\n\x09* Reports whether this Gesture instance represents a valid Gesture.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapGesture.h" },
		{ "ToolTip", "Reports whether this Gesture instance represents a valid Gesture." },
	};
#endif
	void Z_Construct_UClass_ULeapGesture_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((ULeapGesture*)Obj)->IsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULeapGesture_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULeapGesture), &Z_Construct_UClass_ULeapGesture_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULeapGesture_Statics::NewProp_IsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapGesture_Statics::NewProp_IsValid_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULeapGesture_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapGesture_Statics::NewProp_State_MetaData[] = {
		{ "Category", "Leap Gesture" },
		{ "Comment", "/**\n\x09* The gesture state.\n\x09* Recognized movements occur over time and have a beginning, a middle, and an end.\n\x09* The \xef\xbf\xbdstate\xef\xbf\xbd attribute reports where in that sequence this Gesture object falls.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapGesture.h" },
		{ "ToolTip", "The gesture state.\nRecognized movements occur over time and have a beginning, a middle, and an end.\nThe \xef\xbf\xbdstate\xef\xbf\xbd attribute reports where in that sequence this Gesture object falls." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULeapGesture_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapGesture, State), Z_Construct_UEnum_SimpleLeapMotion_ELeapGestureState, METADATA_PARAMS(Z_Construct_UClass_ULeapGesture_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapGesture_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULeapGesture_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapGesture_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Leap Gesture" },
		{ "Comment", "/**\n\x09* The gesture type.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapGesture.h" },
		{ "ToolTip", "The gesture type." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULeapGesture_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapGesture, Type), Z_Construct_UEnum_SimpleLeapMotion_ELeapGestureType, METADATA_PARAMS(Z_Construct_UClass_ULeapGesture_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapGesture_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapGesture_Statics::NewProp_PFrame_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapGesture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapGesture_Statics::NewProp_PFrame = { "PFrame", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapGesture, PFrame), Z_Construct_UClass_ULeapFrame_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapGesture_Statics::NewProp_PFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapGesture_Statics::NewProp_PFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapGesture_Statics::NewProp_PHands_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapGesture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapGesture_Statics::NewProp_PHands = { "PHands", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapGesture, PHands), Z_Construct_UClass_ULeapHandList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapGesture_Statics::NewProp_PHands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapGesture_Statics::NewProp_PHands_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapGesture_Statics::NewProp_PPointables_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapGesture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapGesture_Statics::NewProp_PPointables = { "PPointables", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapGesture, PPointables), Z_Construct_UClass_ULeapPointableList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapGesture_Statics::NewProp_PPointables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapGesture_Statics::NewProp_PPointables_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeapGesture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapGesture_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapGesture_Statics::NewProp_DurationSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapGesture_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapGesture_Statics::NewProp_IsValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapGesture_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapGesture_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapGesture_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapGesture_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapGesture_Statics::NewProp_PFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapGesture_Statics::NewProp_PHands,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapGesture_Statics::NewProp_PPointables,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeapGesture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeapGesture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULeapGesture_Statics::ClassParams = {
		&ULeapGesture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULeapGesture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULeapGesture_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULeapGesture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapGesture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeapGesture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULeapGesture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULeapGesture, 3795445832);
	template<> SIMPLELEAPMOTION_API UClass* StaticClass<ULeapGesture>()
	{
		return ULeapGesture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULeapGesture(Z_Construct_UClass_ULeapGesture, &ULeapGesture::StaticClass, TEXT("/Script/SimpleLeapMotion"), TEXT("ULeapGesture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeapGesture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
