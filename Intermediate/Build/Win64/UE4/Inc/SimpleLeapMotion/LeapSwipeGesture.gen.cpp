// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleLeapMotion/Public/LeapSwipeGesture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapSwipeGesture() {}
// Cross Module References
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapSwipeGesture_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapSwipeGesture();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapGesture();
	UPackage* Z_Construct_UPackage__Script_SimpleLeapMotion();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapPointable_NoRegister();
	SIMPLELEAPMOTION_API UEnum* Z_Construct_UEnum_SimpleLeapMotion_ELeapBasicDirection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(ULeapSwipeGesture::execPointable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapPointable**)Z_Param__Result=P_THIS->Pointable();
		P_NATIVE_END;
	}
	void ULeapSwipeGesture::StaticRegisterNativesULeapSwipeGesture()
	{
		UClass* Class = ULeapSwipeGesture::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Pointable", &ULeapSwipeGesture::execPointable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULeapSwipeGesture_Pointable_Statics
	{
		struct LeapSwipeGesture_eventPointable_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapSwipeGesture_Pointable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapSwipeGesture_eventPointable_Parms, ReturnValue), Z_Construct_UClass_ULeapPointable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapSwipeGesture_Pointable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapSwipeGesture_Pointable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapSwipeGesture_Pointable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Swipe Gesture" },
		{ "Comment", "/**\n\x09* The finger performing the swipe gesture.\n\x09*\n\x09* @return\x09""A Pointable object representing the swiping finger.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapSwipeGesture.h" },
		{ "ToolTip", "The finger performing the swipe gesture.\n\n@return       A Pointable object representing the swiping finger." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapSwipeGesture_Pointable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapSwipeGesture, nullptr, "Pointable", nullptr, nullptr, sizeof(LeapSwipeGesture_eventPointable_Parms), Z_Construct_UFunction_ULeapSwipeGesture_Pointable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapSwipeGesture_Pointable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapSwipeGesture_Pointable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapSwipeGesture_Pointable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapSwipeGesture_Pointable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapSwipeGesture_Pointable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULeapSwipeGesture_NoRegister()
	{
		return ULeapSwipeGesture::StaticClass();
	}
	struct Z_Construct_UClass_ULeapSwipeGesture_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PPointable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PPointable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULeapSwipeGesture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULeapGesture,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULeapSwipeGesture_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeapSwipeGesture_Pointable, "Pointable" }, // 798755609
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapSwipeGesture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n* The SwipeGesture class represents a swiping motion a finger or tool.\n* SwipeGesture objects are generated for each visible finger or tool. \n* Swipe gestures are continuous; a gesture object with the same ID value\n* will appear in each frame while the gesture continues.\n*\n* Leap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.SwipeGesture.html\n*/" },
		{ "IncludePath", "LeapSwipeGesture.h" },
		{ "ModuleRelativePath", "Public/LeapSwipeGesture.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The SwipeGesture class represents a swiping motion a finger or tool.\nSwipeGesture objects are generated for each visible finger or tool.\nSwipe gestures are continuous; a gesture object with the same ID value\nwill appear in each frame while the gesture continues.\n\nLeap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.SwipeGesture.html" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULeapSwipeGesture_Statics::NewProp_BasicDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapSwipeGesture_Statics::NewProp_BasicDirection_MetaData[] = {
		{ "Category", "Leap Swipe Gesture" },
		{ "Comment", "/**\n\x09* The unit direction vector parallel to the swipe motion in basic enum form, useful for switching through common directions checks (Up/Down, Left/Right, In/Out)\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapSwipeGesture.h" },
		{ "ToolTip", "The unit direction vector parallel to the swipe motion in basic enum form, useful for switching through common directions checks (Up/Down, Left/Right, In/Out)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULeapSwipeGesture_Statics::NewProp_BasicDirection = { "BasicDirection", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapSwipeGesture, BasicDirection), Z_Construct_UEnum_SimpleLeapMotion_ELeapBasicDirection, METADATA_PARAMS(Z_Construct_UClass_ULeapSwipeGesture_Statics::NewProp_BasicDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapSwipeGesture_Statics::NewProp_BasicDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapSwipeGesture_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Leap Swipe Gesture" },
		{ "Comment", "/**\n\x09* The unit direction vector parallel to the swipe motion.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapSwipeGesture.h" },
		{ "ToolTip", "The unit direction vector parallel to the swipe motion." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULeapSwipeGesture_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapSwipeGesture, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULeapSwipeGesture_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapSwipeGesture_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapSwipeGesture_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Leap Swipe Gesture" },
		{ "Comment", "/**\n\x09* The current position of the swipe.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapSwipeGesture.h" },
		{ "ToolTip", "The current position of the swipe." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULeapSwipeGesture_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapSwipeGesture, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULeapSwipeGesture_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapSwipeGesture_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapSwipeGesture_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Leap Swipe Gesture" },
		{ "Comment", "/**\n\x09* The swipe speed in cm/second.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapSwipeGesture.h" },
		{ "ToolTip", "The swipe speed in cm/second." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapSwipeGesture_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapSwipeGesture, Speed), METADATA_PARAMS(Z_Construct_UClass_ULeapSwipeGesture_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapSwipeGesture_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapSwipeGesture_Statics::NewProp_StartPosition_MetaData[] = {
		{ "Category", "Leap Swipe Gesture" },
		{ "Comment", "/**\n\x09* The position where the swipe began.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapSwipeGesture.h" },
		{ "ToolTip", "The position where the swipe began." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULeapSwipeGesture_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapSwipeGesture, StartPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULeapSwipeGesture_Statics::NewProp_StartPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapSwipeGesture_Statics::NewProp_StartPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapSwipeGesture_Statics::NewProp_PPointable_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapSwipeGesture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapSwipeGesture_Statics::NewProp_PPointable = { "PPointable", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapSwipeGesture, PPointable), Z_Construct_UClass_ULeapPointable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapSwipeGesture_Statics::NewProp_PPointable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapSwipeGesture_Statics::NewProp_PPointable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeapSwipeGesture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapSwipeGesture_Statics::NewProp_BasicDirection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapSwipeGesture_Statics::NewProp_BasicDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapSwipeGesture_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapSwipeGesture_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapSwipeGesture_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapSwipeGesture_Statics::NewProp_StartPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapSwipeGesture_Statics::NewProp_PPointable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeapSwipeGesture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeapSwipeGesture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULeapSwipeGesture_Statics::ClassParams = {
		&ULeapSwipeGesture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULeapSwipeGesture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULeapSwipeGesture_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULeapSwipeGesture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapSwipeGesture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeapSwipeGesture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULeapSwipeGesture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULeapSwipeGesture, 2691804290);
	template<> SIMPLELEAPMOTION_API UClass* StaticClass<ULeapSwipeGesture>()
	{
		return ULeapSwipeGesture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULeapSwipeGesture(Z_Construct_UClass_ULeapSwipeGesture, &ULeapSwipeGesture::StaticClass, TEXT("/Script/SimpleLeapMotion"), TEXT("ULeapSwipeGesture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeapSwipeGesture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
