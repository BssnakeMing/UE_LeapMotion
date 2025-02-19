// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleLeapMotion/Public/LeapPointable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapPointable() {}
// Cross Module References
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapPointable_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapPointable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SimpleLeapMotion();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapFrame_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapHand_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SIMPLELEAPMOTION_API UEnum* Z_Construct_UEnum_SimpleLeapMotion_ELeapZone();
// End Cross Module References
	DEFINE_FUNCTION(ULeapPointable::execDifferent)
	{
		P_GET_OBJECT(ULeapPointable,Z_Param_Other);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Different(Z_Param_Other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapPointable::execEqual)
	{
		P_GET_OBJECT(ULeapPointable,Z_Param_Other);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Equal(Z_Param_Other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapPointable::execHand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapHand**)Z_Param__Result=P_THIS->Hand();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapPointable::execFrame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapFrame**)Z_Param__Result=P_THIS->Frame();
		P_NATIVE_END;
	}
	void ULeapPointable::StaticRegisterNativesULeapPointable()
	{
		UClass* Class = ULeapPointable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Different", &ULeapPointable::execDifferent },
			{ "Equal", &ULeapPointable::execEqual },
			{ "Frame", &ULeapPointable::execFrame },
			{ "Hand", &ULeapPointable::execHand },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULeapPointable_Different_Statics
	{
		struct LeapPointable_eventDifferent_Parms
		{
			const ULeapPointable* Other;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Other_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapPointable_Different_Statics::NewProp_Other_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapPointable_Different_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapPointable_eventDifferent_Parms, Other), Z_Construct_UClass_ULeapPointable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULeapPointable_Different_Statics::NewProp_Other_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapPointable_Different_Statics::NewProp_Other_MetaData)) };
	void Z_Construct_UFunction_ULeapPointable_Different_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LeapPointable_eventDifferent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapPointable_Different_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LeapPointable_eventDifferent_Parms), &Z_Construct_UFunction_ULeapPointable_Different_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapPointable_Different_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapPointable_Different_Statics::NewProp_Other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapPointable_Different_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapPointable_Different_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Pointable" },
		{ "Comment", "/**\n\x09* Compare Pointable object inequality.\n\x09*\n\x09* @param\x09Other\x09pointable to compare to.\n\x09* @return\x09True if different.\n\x09*/" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "different" },
		{ "Keywords", "different" },
		{ "ModuleRelativePath", "Public/LeapPointable.h" },
		{ "ToolTip", "Compare Pointable object inequality.\n\n@param        Other   pointable to compare to.\n@return       True if different." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapPointable_Different_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapPointable, nullptr, "Different", nullptr, nullptr, sizeof(LeapPointable_eventDifferent_Parms), Z_Construct_UFunction_ULeapPointable_Different_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapPointable_Different_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapPointable_Different_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapPointable_Different_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapPointable_Different()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapPointable_Different_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapPointable_Equal_Statics
	{
		struct LeapPointable_eventEqual_Parms
		{
			const ULeapPointable* Other;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Other_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapPointable_Equal_Statics::NewProp_Other_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapPointable_Equal_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapPointable_eventEqual_Parms, Other), Z_Construct_UClass_ULeapPointable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULeapPointable_Equal_Statics::NewProp_Other_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapPointable_Equal_Statics::NewProp_Other_MetaData)) };
	void Z_Construct_UFunction_ULeapPointable_Equal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LeapPointable_eventEqual_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapPointable_Equal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LeapPointable_eventEqual_Parms), &Z_Construct_UFunction_ULeapPointable_Equal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapPointable_Equal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapPointable_Equal_Statics::NewProp_Other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapPointable_Equal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapPointable_Equal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Pointable" },
		{ "Comment", "/**\n\x09* Compare Pointable object equality.\n\x09*\n\x09* @param\x09Other\x09pointable to compare to.\n\x09* @return\x09True if equal.\n\x09*/" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "equal" },
		{ "Keywords", "equal" },
		{ "ModuleRelativePath", "Public/LeapPointable.h" },
		{ "ToolTip", "Compare Pointable object equality.\n\n@param        Other   pointable to compare to.\n@return       True if equal." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapPointable_Equal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapPointable, nullptr, "Equal", nullptr, nullptr, sizeof(LeapPointable_eventEqual_Parms), Z_Construct_UFunction_ULeapPointable_Equal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapPointable_Equal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapPointable_Equal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapPointable_Equal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapPointable_Equal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapPointable_Equal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapPointable_Frame_Statics
	{
		struct LeapPointable_eventFrame_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapPointable_Frame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapPointable_eventFrame_Parms, ReturnValue), Z_Construct_UClass_ULeapFrame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapPointable_Frame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapPointable_Frame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapPointable_Frame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Pointable" },
		{ "Comment", "/**\n\x09* The Frame associated with this Pointable object.\n\x09*\n\x09* @return\x09The associated Frame object, if available; otherwise, an invalid Frame object is returned.\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "frame" },
		{ "Keywords", "frame" },
		{ "ModuleRelativePath", "Public/LeapPointable.h" },
		{ "ToolTip", "The Frame associated with this Pointable object.\n\n@return       The associated Frame object, if available; otherwise, an invalid Frame object is returned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapPointable_Frame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapPointable, nullptr, "Frame", nullptr, nullptr, sizeof(LeapPointable_eventFrame_Parms), Z_Construct_UFunction_ULeapPointable_Frame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapPointable_Frame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapPointable_Frame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapPointable_Frame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapPointable_Frame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapPointable_Frame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapPointable_Hand_Statics
	{
		struct LeapPointable_eventHand_Parms
		{
			ULeapHand* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapPointable_Hand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapPointable_eventHand_Parms, ReturnValue), Z_Construct_UClass_ULeapHand_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapPointable_Hand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapPointable_Hand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapPointable_Hand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Pointable" },
		{ "Comment", "/**\n\x09* The Hand associated with a finger.\n\x09*\n\x09* @return\x09The associated Hand object, if available; otherwise, an invalid Hand object is returned.\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "hand" },
		{ "Keywords", "hand" },
		{ "ModuleRelativePath", "Public/LeapPointable.h" },
		{ "ToolTip", "The Hand associated with a finger.\n\n@return       The associated Hand object, if available; otherwise, an invalid Hand object is returned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapPointable_Hand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapPointable, nullptr, "Hand", nullptr, nullptr, sizeof(LeapPointable_eventHand_Parms), Z_Construct_UFunction_ULeapPointable_Hand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapPointable_Hand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapPointable_Hand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapPointable_Hand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapPointable_Hand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapPointable_Hand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULeapPointable_NoRegister()
	{
		return ULeapPointable::StaticClass();
	}
	struct Z_Construct_UClass_ULeapPointable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsExtended_MetaData[];
#endif
		static void NewProp_IsExtended_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsExtended;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFinger_MetaData[];
#endif
		static void NewProp_IsFinger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFinger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsTool_MetaData[];
#endif
		static void NewProp_IsTool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsValid_MetaData[];
#endif
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StabilizedTipPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StabilizedTipPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeVisible_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TipPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TipPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TipVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TipVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TouchDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TouchDistance;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TouchZone_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TouchZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TouchZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PHand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULeapPointable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULeapPointable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeapPointable_Different, "Different" }, // 3534429346
		{ &Z_Construct_UFunction_ULeapPointable_Equal, "Equal" }, // 3241130848
		{ &Z_Construct_UFunction_ULeapPointable_Frame, "Frame" }, // 1653272721
		{ &Z_Construct_UFunction_ULeapPointable_Hand, "Hand" }, // 2727535000
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapPointable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* The Pointable class reports the physical characteristics of a detected finger or tool.\n* Pointable \xe7\xb1\xbb\xe6\x8a\xa5\xe5\x91\x8a\xe4\xba\x86\xe6\xa3\x80\xe6\xb5\x8b\xe5\x88\xb0\xe7\x9a\x84\xe6\x89\x8b\xe6\x8c\x87\xe6\x88\x96\xe5\xb7\xa5\xe5\x85\xb7\xe7\x9a\x84\xe7\x89\xa9\xe7\x90\x86\xe7\x89\xb9\xe5\xbe\x81\xe3\x80\x82\n*\n* Leap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.Pointable.html\n*/" },
		{ "IncludePath", "LeapPointable.h" },
		{ "ModuleRelativePath", "Public/LeapPointable.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The Pointable class reports the physical characteristics of a detected finger or tool.\nPointable \xe7\xb1\xbb\xe6\x8a\xa5\xe5\x91\x8a\xe4\xba\x86\xe6\xa3\x80\xe6\xb5\x8b\xe5\x88\xb0\xe7\x9a\x84\xe6\x89\x8b\xe6\x8c\x87\xe6\x88\x96\xe5\xb7\xa5\xe5\x85\xb7\xe7\x9a\x84\xe7\x89\xa9\xe7\x90\x86\xe7\x89\xb9\xe5\xbe\x81\xe3\x80\x82\n\nLeap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.Pointable.html" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapPointable_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Leap Pointable" },
		{ "Comment", "/**\n\x09* The direction in which this finger or tool is pointing. The direction is \n\x09* expressed as a unit vector pointing in the same direction as the tip.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapPointable.h" },
		{ "ToolTip", "The direction in which this finger or tool is pointing. The direction is\nexpressed as a unit vector pointing in the same direction as the tip." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULeapPointable_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapPointable, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULeapPointable_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapPointable_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapPointable_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Leap Pointable" },
		{ "Comment", "/**\n\x09* A unique ID assigned to this Pointable object, whose value remains the same \n\x09* across consecutive frames while the tracked finger or tool remains visible.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapPointable.h" },
		{ "ToolTip", "A unique ID assigned to this Pointable object, whose value remains the same\nacross consecutive frames while the tracked finger or tool remains visible." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULeapPointable_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapPointable, Id), METADATA_PARAMS(Z_Construct_UClass_ULeapPointable_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapPointable_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapPointable_Statics::NewProp_IsExtended_MetaData[] = {
		{ "Category", "Leap Pointable" },
		{ "Comment", "/**\n\x09* Whether or not this Pointable is in an extended posture.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapPointable.h" },
		{ "ToolTip", "Whether or not this Pointable is in an extended posture." },
	};
#endif
	void Z_Construct_UClass_ULeapPointable_Statics::NewProp_IsExtended_SetBit(void* Obj)
	{
		((ULeapPointable*)Obj)->IsExtended = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULeapPointable_Statics::NewProp_IsExtended = { "IsExtended", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULeapPointable), &Z_Construct_UClass_ULeapPointable_Statics::NewProp_IsExtended_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULeapPointable_Statics::NewProp_IsExtended_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapPointable_Statics::NewProp_IsExtended_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapPointable_Statics::NewProp_IsFinger_MetaData[] = {
		{ "Category", "Leap Pointable" },
		{ "Comment", "/**\n\x09* Whether or not this Pointable is classified as a finger.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapPointable.h" },
		{ "ToolTip", "Whether or not this Pointable is classified as a finger." },
	};
#endif
	void Z_Construct_UClass_ULeapPointable_Statics::NewProp_IsFinger_SetBit(void* Obj)
	{
		((ULeapPointable*)Obj)->IsFinger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULeapPointable_Statics::NewProp_IsFinger = { "IsFinger", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULeapPointable), &Z_Construct_UClass_ULeapPointable_Statics::NewProp_IsFinger_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULeapPointable_Statics::NewProp_IsFinger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapPointable_Statics::NewProp_IsFinger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapPointable_Statics::NewProp_IsTool_MetaData[] = {
		{ "Category", "Leap Pointable" },
		{ "Comment", "/**\n\x09* Whether or not this Pointable is classified as a tool.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapPointable.h" },
		{ "ToolTip", "Whether or not this Pointable is classified as a tool." },
	};
#endif
	void Z_Construct_UClass_ULeapPointable_Statics::NewProp_IsTool_SetBit(void* Obj)
	{
		((ULeapPointable*)Obj)->IsTool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULeapPointable_Statics::NewProp_IsTool = { "IsTool", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULeapPointable), &Z_Construct_UClass_ULeapPointable_Statics::NewProp_IsTool_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULeapPointable_Statics::NewProp_IsTool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapPointable_Statics::NewProp_IsTool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapPointable_Statics::NewProp_IsValid_MetaData[] = {
		{ "Category", "Leap Pointable" },
		{ "Comment", "/**\n\x09* Reports whether this is a valid Pointable object.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapPointable.h" },
		{ "ToolTip", "Reports whether this is a valid Pointable object." },
	};
#endif
	void Z_Construct_UClass_ULeapPointable_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((ULeapPointable*)Obj)->IsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULeapPointable_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULeapPointable), &Z_Construct_UClass_ULeapPointable_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULeapPointable_Statics::NewProp_IsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapPointable_Statics::NewProp_IsValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapPointable_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "Leap Pointable" },
		{ "Comment", "/**\n\x09* The estimated length of the finger or tool in centimeters.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapPointable.h" },
		{ "ToolTip", "The estimated length of the finger or tool in centimeters." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapPointable_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapPointable, Length), METADATA_PARAMS(Z_Construct_UClass_ULeapPointable_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapPointable_Statics::NewProp_Length_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapPointable_Statics::NewProp_StabilizedTipPosition_MetaData[] = {
		{ "Category", "Leap Pointable" },
		{ "Comment", "/**\n\x09* The stabilized tip position of this Pointable.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapPointable.h" },
		{ "ToolTip", "The stabilized tip position of this Pointable." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULeapPointable_Statics::NewProp_StabilizedTipPosition = { "StabilizedTipPosition", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapPointable, StabilizedTipPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULeapPointable_Statics::NewProp_StabilizedTipPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapPointable_Statics::NewProp_StabilizedTipPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapPointable_Statics::NewProp_TimeVisible_MetaData[] = {
		{ "Category", "Leap Pointable" },
		{ "Comment", "/**\n\x09* The duration of time this Pointable has been visible to the Leap Motion Controller.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapPointable.h" },
		{ "ToolTip", "The duration of time this Pointable has been visible to the Leap Motion Controller." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapPointable_Statics::NewProp_TimeVisible = { "TimeVisible", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapPointable, TimeVisible), METADATA_PARAMS(Z_Construct_UClass_ULeapPointable_Statics::NewProp_TimeVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapPointable_Statics::NewProp_TimeVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapPointable_Statics::NewProp_TipPosition_MetaData[] = {
		{ "Category", "Leap Pointable" },
		{ "Comment", "/**\n\x09* The tip position in centimeters from the Leap Motion origin.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapPointable.h" },
		{ "ToolTip", "The tip position in centimeters from the Leap Motion origin." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULeapPointable_Statics::NewProp_TipPosition = { "TipPosition", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapPointable, TipPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULeapPointable_Statics::NewProp_TipPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapPointable_Statics::NewProp_TipPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapPointable_Statics::NewProp_TipVelocity_MetaData[] = {
		{ "Category", "Leap Pointable" },
		{ "Comment", "/**\n\x09* The rate of change of the tip position in centimeters/second.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapPointable.h" },
		{ "ToolTip", "The rate of change of the tip position in centimeters/second." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULeapPointable_Statics::NewProp_TipVelocity = { "TipVelocity", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapPointable, TipVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULeapPointable_Statics::NewProp_TipVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapPointable_Statics::NewProp_TipVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapPointable_Statics::NewProp_TouchDistance_MetaData[] = {
		{ "Category", "Leap Pointable" },
		{ "Comment", "/**\n\x09* A value proportional to the distance between this Pointable object and the \n\x09* adaptive touch plane.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapPointable.h" },
		{ "ToolTip", "A value proportional to the distance between this Pointable object and the\nadaptive touch plane." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapPointable_Statics::NewProp_TouchDistance = { "TouchDistance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapPointable, TouchDistance), METADATA_PARAMS(Z_Construct_UClass_ULeapPointable_Statics::NewProp_TouchDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapPointable_Statics::NewProp_TouchDistance_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULeapPointable_Statics::NewProp_TouchZone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapPointable_Statics::NewProp_TouchZone_MetaData[] = {
		{ "Category", "Leap Pointable" },
		{ "Comment", "/**\n\x09* The current touch zone of this Pointable object.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapPointable.h" },
		{ "ToolTip", "The current touch zone of this Pointable object." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULeapPointable_Statics::NewProp_TouchZone = { "TouchZone", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapPointable, TouchZone), Z_Construct_UEnum_SimpleLeapMotion_ELeapZone, METADATA_PARAMS(Z_Construct_UClass_ULeapPointable_Statics::NewProp_TouchZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapPointable_Statics::NewProp_TouchZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapPointable_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "Leap Pointable" },
		{ "Comment", "/**\n\x09* The estimated width of the finger or tool in centimeters.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapPointable.h" },
		{ "ToolTip", "The estimated width of the finger or tool in centimeters." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapPointable_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapPointable, Width), METADATA_PARAMS(Z_Construct_UClass_ULeapPointable_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapPointable_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapPointable_Statics::NewProp_PFrame_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapPointable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapPointable_Statics::NewProp_PFrame = { "PFrame", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapPointable, PFrame), Z_Construct_UClass_ULeapFrame_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapPointable_Statics::NewProp_PFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapPointable_Statics::NewProp_PFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapPointable_Statics::NewProp_PHand_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapPointable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapPointable_Statics::NewProp_PHand = { "PHand", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapPointable, PHand), Z_Construct_UClass_ULeapHand_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapPointable_Statics::NewProp_PHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapPointable_Statics::NewProp_PHand_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeapPointable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapPointable_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapPointable_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapPointable_Statics::NewProp_IsExtended,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapPointable_Statics::NewProp_IsFinger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapPointable_Statics::NewProp_IsTool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapPointable_Statics::NewProp_IsValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapPointable_Statics::NewProp_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapPointable_Statics::NewProp_StabilizedTipPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapPointable_Statics::NewProp_TimeVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapPointable_Statics::NewProp_TipPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapPointable_Statics::NewProp_TipVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapPointable_Statics::NewProp_TouchDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapPointable_Statics::NewProp_TouchZone_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapPointable_Statics::NewProp_TouchZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapPointable_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapPointable_Statics::NewProp_PFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapPointable_Statics::NewProp_PHand,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeapPointable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeapPointable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULeapPointable_Statics::ClassParams = {
		&ULeapPointable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULeapPointable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULeapPointable_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULeapPointable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapPointable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeapPointable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULeapPointable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULeapPointable, 1327792168);
	template<> SIMPLELEAPMOTION_API UClass* StaticClass<ULeapPointable>()
	{
		return ULeapPointable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULeapPointable(Z_Construct_UClass_ULeapPointable, &ULeapPointable::StaticClass, TEXT("/Script/SimpleLeapMotion"), TEXT("ULeapPointable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeapPointable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
