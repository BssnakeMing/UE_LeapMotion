// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleLeapMotion/Public/LeapCircleGesture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapCircleGesture() {}
// Cross Module References
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapCircleGesture_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapCircleGesture();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapGesture();
	UPackage* Z_Construct_UPackage__Script_SimpleLeapMotion();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapPointable_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(ULeapCircleGesture::execPointable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapPointable**)Z_Param__Result=P_THIS->Pointable();
		P_NATIVE_END;
	}
	void ULeapCircleGesture::StaticRegisterNativesULeapCircleGesture()
	{
		UClass* Class = ULeapCircleGesture::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Pointable", &ULeapCircleGesture::execPointable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULeapCircleGesture_Pointable_Statics
	{
		struct LeapCircleGesture_eventPointable_Parms
		{
			ULeapPointable* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapCircleGesture_Pointable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapCircleGesture_eventPointable_Parms, ReturnValue), Z_Construct_UClass_ULeapPointable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapCircleGesture_Pointable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapCircleGesture_Pointable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapCircleGesture_Pointable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Circle Gesture" },
		{ "Comment", "/**\n\x09* @return The finger performing the circle gesture.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapCircleGesture.h" },
		{ "ToolTip", "@return The finger performing the circle gesture." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapCircleGesture_Pointable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapCircleGesture, nullptr, "Pointable", nullptr, nullptr, sizeof(LeapCircleGesture_eventPointable_Parms), Z_Construct_UFunction_ULeapCircleGesture_Pointable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapCircleGesture_Pointable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapCircleGesture_Pointable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapCircleGesture_Pointable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapCircleGesture_Pointable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapCircleGesture_Pointable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULeapCircleGesture_NoRegister()
	{
		return ULeapCircleGesture::StaticClass();
	}
	struct Z_Construct_UClass_ULeapCircleGesture_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Progress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PPointable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PPointable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULeapCircleGesture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULeapGesture,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULeapCircleGesture_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeapCircleGesture_Pointable, "Pointable" }, // 3427009427
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapCircleGesture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* The CircleGesture classes represents a circular finger movement.\n* A circle movement is recognized when the tip of a finger draws a circle within\n* the Leap Motion Controller field of view.\n*\n* Leap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.CircleGesture.html\n*/" },
		{ "IncludePath", "LeapCircleGesture.h" },
		{ "ModuleRelativePath", "Public/LeapCircleGesture.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The CircleGesture classes represents a circular finger movement.\nA circle movement is recognized when the tip of a finger draws a circle within\nthe Leap Motion Controller field of view.\n\nLeap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.CircleGesture.html" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapCircleGesture_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "Leap Circle Gesture" },
		{ "Comment", "/**\n\x09* The center point of the circle within the Leap Motion frame of reference.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapCircleGesture.h" },
		{ "ToolTip", "The center point of the circle within the Leap Motion frame of reference." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULeapCircleGesture_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapCircleGesture, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULeapCircleGesture_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapCircleGesture_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapCircleGesture_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "Leap Circle Gesture" },
		{ "Comment", "/**\n\x09* Returns the normal vector for the circle being traced.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapCircleGesture.h" },
		{ "ToolTip", "Returns the normal vector for the circle being traced." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULeapCircleGesture_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapCircleGesture, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULeapCircleGesture_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapCircleGesture_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapCircleGesture_Statics::NewProp_Progress_MetaData[] = {
		{ "Category", "Leap Circle Gesture" },
		{ "Comment", "/**\n\x09* The number of times the finger tip has traversed the circle.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapCircleGesture.h" },
		{ "ToolTip", "The number of times the finger tip has traversed the circle." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapCircleGesture_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapCircleGesture, Progress), METADATA_PARAMS(Z_Construct_UClass_ULeapCircleGesture_Statics::NewProp_Progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapCircleGesture_Statics::NewProp_Progress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapCircleGesture_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Leap Circle Gesture" },
		{ "Comment", "/**\n\x09* The radius of the circle.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapCircleGesture.h" },
		{ "ToolTip", "The radius of the circle." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapCircleGesture_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapCircleGesture, Radius), METADATA_PARAMS(Z_Construct_UClass_ULeapCircleGesture_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapCircleGesture_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapCircleGesture_Statics::NewProp_PPointable_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapCircleGesture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapCircleGesture_Statics::NewProp_PPointable = { "PPointable", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapCircleGesture, PPointable), Z_Construct_UClass_ULeapPointable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapCircleGesture_Statics::NewProp_PPointable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapCircleGesture_Statics::NewProp_PPointable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeapCircleGesture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapCircleGesture_Statics::NewProp_Center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapCircleGesture_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapCircleGesture_Statics::NewProp_Progress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapCircleGesture_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapCircleGesture_Statics::NewProp_PPointable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeapCircleGesture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeapCircleGesture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULeapCircleGesture_Statics::ClassParams = {
		&ULeapCircleGesture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULeapCircleGesture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULeapCircleGesture_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULeapCircleGesture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapCircleGesture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeapCircleGesture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULeapCircleGesture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULeapCircleGesture, 1481289016);
	template<> SIMPLELEAPMOTION_API UClass* StaticClass<ULeapCircleGesture>()
	{
		return ULeapCircleGesture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULeapCircleGesture(Z_Construct_UClass_ULeapCircleGesture, &ULeapCircleGesture::StaticClass, TEXT("/Script/SimpleLeapMotion"), TEXT("ULeapCircleGesture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeapCircleGesture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
