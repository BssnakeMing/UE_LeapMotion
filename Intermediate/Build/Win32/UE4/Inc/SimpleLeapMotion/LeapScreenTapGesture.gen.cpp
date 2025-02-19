// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleLeapMotion/Public/LeapScreenTapGesture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapScreenTapGesture() {}
// Cross Module References
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapScreenTapGesture_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapScreenTapGesture();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapGesture();
	UPackage* Z_Construct_UPackage__Script_SimpleLeapMotion();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapPointable_NoRegister();
	SIMPLELEAPMOTION_API UEnum* Z_Construct_UEnum_SimpleLeapMotion_ELeapBasicDirection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(ULeapScreenTapGesture::execPointable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapPointable**)Z_Param__Result=P_THIS->Pointable();
		P_NATIVE_END;
	}
	void ULeapScreenTapGesture::StaticRegisterNativesULeapScreenTapGesture()
	{
		UClass* Class = ULeapScreenTapGesture::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Pointable", &ULeapScreenTapGesture::execPointable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULeapScreenTapGesture_Pointable_Statics
	{
		struct LeapScreenTapGesture_eventPointable_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapScreenTapGesture_Pointable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapScreenTapGesture_eventPointable_Parms, ReturnValue), Z_Construct_UClass_ULeapPointable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapScreenTapGesture_Pointable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapScreenTapGesture_Pointable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapScreenTapGesture_Pointable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Screen Tap Gesture" },
		{ "Comment", "/**\n\x09* The finger performing the screen tap gesture.\n\x09*\n\x09* @return\x09""A Pointable object representing the tapping finger.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapScreenTapGesture.h" },
		{ "ToolTip", "The finger performing the screen tap gesture.\n\n@return       A Pointable object representing the tapping finger." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapScreenTapGesture_Pointable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapScreenTapGesture, nullptr, "Pointable", nullptr, nullptr, sizeof(LeapScreenTapGesture_eventPointable_Parms), Z_Construct_UFunction_ULeapScreenTapGesture_Pointable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapScreenTapGesture_Pointable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapScreenTapGesture_Pointable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapScreenTapGesture_Pointable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapScreenTapGesture_Pointable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapScreenTapGesture_Pointable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULeapScreenTapGesture_NoRegister()
	{
		return ULeapScreenTapGesture::StaticClass();
	}
	struct Z_Construct_UClass_ULeapScreenTapGesture_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BasicDirection_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasicDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BasicDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Progress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PPointable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PPointable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULeapScreenTapGesture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULeapGesture,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULeapScreenTapGesture_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeapScreenTapGesture_Pointable, "Pointable" }, // 1154775154
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapScreenTapGesture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* The ScreenTapGesture class represents a tapping gesture by a finger or tool.\n* A screen tap gesture is recognized when the tip of a finger pokes forward and\n* then springs back to approximately the original position, as if tapping a vertical\n* screen. The tapping finger must pause briefly before beginning the tap.\n*\n* Leap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.ScreenTapGesture.html\n*/" },
		{ "IncludePath", "LeapScreenTapGesture.h" },
		{ "ModuleRelativePath", "Public/LeapScreenTapGesture.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The ScreenTapGesture class represents a tapping gesture by a finger or tool.\nA screen tap gesture is recognized when the tip of a finger pokes forward and\nthen springs back to approximately the original position, as if tapping a vertical\nscreen. The tapping finger must pause briefly before beginning the tap.\n\nLeap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.ScreenTapGesture.html" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULeapScreenTapGesture_Statics::NewProp_BasicDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapScreenTapGesture_Statics::NewProp_BasicDirection_MetaData[] = {
		{ "Category", "Leap Screen Tap  Gesture" },
		{ "Comment", "/**\n\x09* The direction of finger tip motion in basic enum form, useful for switching \n\x09* through common directions checks (Up/Down, Left/Right, In/Out)\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapScreenTapGesture.h" },
		{ "ToolTip", "The direction of finger tip motion in basic enum form, useful for switching\nthrough common directions checks (Up/Down, Left/Right, In/Out)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULeapScreenTapGesture_Statics::NewProp_BasicDirection = { "BasicDirection", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapScreenTapGesture, BasicDirection), Z_Construct_UEnum_SimpleLeapMotion_ELeapBasicDirection, METADATA_PARAMS(Z_Construct_UClass_ULeapScreenTapGesture_Statics::NewProp_BasicDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapScreenTapGesture_Statics::NewProp_BasicDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapScreenTapGesture_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Leap Screen Tap Gesture" },
		{ "Comment", "/**\n\x09* The direction of finger tip motion.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapScreenTapGesture.h" },
		{ "ToolTip", "The direction of finger tip motion." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULeapScreenTapGesture_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapScreenTapGesture, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULeapScreenTapGesture_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapScreenTapGesture_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapScreenTapGesture_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Leap Screen Tap Gesture" },
		{ "Comment", "/**\n\x09* The position where the screen tap is registered.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapScreenTapGesture.h" },
		{ "ToolTip", "The position where the screen tap is registered." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULeapScreenTapGesture_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapScreenTapGesture, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULeapScreenTapGesture_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapScreenTapGesture_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapScreenTapGesture_Statics::NewProp_Progress_MetaData[] = {
		{ "Category", "Leap Screen Tap Gesture" },
		{ "Comment", "/**\n\x09* The progress value is always 1.0 for a screen tap gesture.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapScreenTapGesture.h" },
		{ "ToolTip", "The progress value is always 1.0 for a screen tap gesture." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapScreenTapGesture_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapScreenTapGesture, Progress), METADATA_PARAMS(Z_Construct_UClass_ULeapScreenTapGesture_Statics::NewProp_Progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapScreenTapGesture_Statics::NewProp_Progress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapScreenTapGesture_Statics::NewProp_PPointable_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapScreenTapGesture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapScreenTapGesture_Statics::NewProp_PPointable = { "PPointable", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapScreenTapGesture, PPointable), Z_Construct_UClass_ULeapPointable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapScreenTapGesture_Statics::NewProp_PPointable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapScreenTapGesture_Statics::NewProp_PPointable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeapScreenTapGesture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapScreenTapGesture_Statics::NewProp_BasicDirection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapScreenTapGesture_Statics::NewProp_BasicDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapScreenTapGesture_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapScreenTapGesture_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapScreenTapGesture_Statics::NewProp_Progress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapScreenTapGesture_Statics::NewProp_PPointable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeapScreenTapGesture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeapScreenTapGesture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULeapScreenTapGesture_Statics::ClassParams = {
		&ULeapScreenTapGesture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULeapScreenTapGesture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULeapScreenTapGesture_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULeapScreenTapGesture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapScreenTapGesture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeapScreenTapGesture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULeapScreenTapGesture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULeapScreenTapGesture, 1541489457);
	template<> SIMPLELEAPMOTION_API UClass* StaticClass<ULeapScreenTapGesture>()
	{
		return ULeapScreenTapGesture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULeapScreenTapGesture(Z_Construct_UClass_ULeapScreenTapGesture, &ULeapScreenTapGesture::StaticClass, TEXT("/Script/SimpleLeapMotion"), TEXT("ULeapScreenTapGesture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeapScreenTapGesture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
