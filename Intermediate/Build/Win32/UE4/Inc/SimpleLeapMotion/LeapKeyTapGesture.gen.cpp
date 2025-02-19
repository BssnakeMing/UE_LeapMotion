// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleLeapMotion/Public/LeapKeyTapGesture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapKeyTapGesture() {}
// Cross Module References
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapKeyTapGesture_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapKeyTapGesture();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapGesture();
	UPackage* Z_Construct_UPackage__Script_SimpleLeapMotion();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapPointable_NoRegister();
	SIMPLELEAPMOTION_API UEnum* Z_Construct_UEnum_SimpleLeapMotion_ELeapBasicDirection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(ULeapKeyTapGesture::execPointable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapPointable**)Z_Param__Result=P_THIS->Pointable();
		P_NATIVE_END;
	}
	void ULeapKeyTapGesture::StaticRegisterNativesULeapKeyTapGesture()
	{
		UClass* Class = ULeapKeyTapGesture::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Pointable", &ULeapKeyTapGesture::execPointable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULeapKeyTapGesture_Pointable_Statics
	{
		struct LeapKeyTapGesture_eventPointable_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapKeyTapGesture_Pointable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapKeyTapGesture_eventPointable_Parms, ReturnValue), Z_Construct_UClass_ULeapPointable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapKeyTapGesture_Pointable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapKeyTapGesture_Pointable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapKeyTapGesture_Pointable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Key Tap Gesture" },
		{ "Comment", "/**\n\x09* The finger performing the key tap gesture.\n\x09*\n\x09* @return\x09""A Pointable object representing the tapping finger.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapKeyTapGesture.h" },
		{ "ToolTip", "The finger performing the key tap gesture.\n\n@return       A Pointable object representing the tapping finger." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapKeyTapGesture_Pointable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapKeyTapGesture, nullptr, "Pointable", nullptr, nullptr, sizeof(LeapKeyTapGesture_eventPointable_Parms), Z_Construct_UFunction_ULeapKeyTapGesture_Pointable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapKeyTapGesture_Pointable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapKeyTapGesture_Pointable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapKeyTapGesture_Pointable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapKeyTapGesture_Pointable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapKeyTapGesture_Pointable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULeapKeyTapGesture_NoRegister()
	{
		return ULeapKeyTapGesture::StaticClass();
	}
	struct Z_Construct_UClass_ULeapKeyTapGesture_Statics
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
	UObject* (*const Z_Construct_UClass_ULeapKeyTapGesture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULeapGesture,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULeapKeyTapGesture_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeapKeyTapGesture_Pointable, "Pointable" }, // 448184834
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapKeyTapGesture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* The KeyTapGesture class represents a tapping gesture by a finger or tool.\n* A key tap gesture is recognized when the tip of a finger rotates down toward \n* the palm and then springs back to approximately the original position, as if\n* tapping.\n*\n* Leap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.KeyTapGesture.html\n*/" },
		{ "IncludePath", "LeapKeyTapGesture.h" },
		{ "ModuleRelativePath", "Public/LeapKeyTapGesture.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The KeyTapGesture class represents a tapping gesture by a finger or tool.\nA key tap gesture is recognized when the tip of a finger rotates down toward\nthe palm and then springs back to approximately the original position, as if\ntapping.\n\nLeap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.KeyTapGesture.html" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULeapKeyTapGesture_Statics::NewProp_BasicDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapKeyTapGesture_Statics::NewProp_BasicDirection_MetaData[] = {
		{ "Category", "Leap Key Tap  Gesture" },
		{ "Comment", "/**\n\x09* The direction of finger tip motion in basic enum form, useful for switching\n\x09* through common directions checks (Up/Down, Left/Right, In/Out)\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapKeyTapGesture.h" },
		{ "ToolTip", "The direction of finger tip motion in basic enum form, useful for switching\nthrough common directions checks (Up/Down, Left/Right, In/Out)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULeapKeyTapGesture_Statics::NewProp_BasicDirection = { "BasicDirection", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapKeyTapGesture, BasicDirection), Z_Construct_UEnum_SimpleLeapMotion_ELeapBasicDirection, METADATA_PARAMS(Z_Construct_UClass_ULeapKeyTapGesture_Statics::NewProp_BasicDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapKeyTapGesture_Statics::NewProp_BasicDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapKeyTapGesture_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Leap Key Tap Gesture" },
		{ "Comment", "/**\n\x09* The direction of finger tip motion.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapKeyTapGesture.h" },
		{ "ToolTip", "The direction of finger tip motion." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULeapKeyTapGesture_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapKeyTapGesture, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULeapKeyTapGesture_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapKeyTapGesture_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapKeyTapGesture_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Leap Key Tap Gesture" },
		{ "Comment", "/**\n\x09* The position where the key tap is registered.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapKeyTapGesture.h" },
		{ "ToolTip", "The position where the key tap is registered." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULeapKeyTapGesture_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapKeyTapGesture, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULeapKeyTapGesture_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapKeyTapGesture_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapKeyTapGesture_Statics::NewProp_Progress_MetaData[] = {
		{ "Category", "Leap Key Tap Gesture" },
		{ "Comment", "/**\n\x09* The progress value is always 1.0 for a key tap gesture.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapKeyTapGesture.h" },
		{ "ToolTip", "The progress value is always 1.0 for a key tap gesture." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapKeyTapGesture_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapKeyTapGesture, Progress), METADATA_PARAMS(Z_Construct_UClass_ULeapKeyTapGesture_Statics::NewProp_Progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapKeyTapGesture_Statics::NewProp_Progress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapKeyTapGesture_Statics::NewProp_PPointable_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapKeyTapGesture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapKeyTapGesture_Statics::NewProp_PPointable = { "PPointable", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapKeyTapGesture, PPointable), Z_Construct_UClass_ULeapPointable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapKeyTapGesture_Statics::NewProp_PPointable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapKeyTapGesture_Statics::NewProp_PPointable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeapKeyTapGesture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapKeyTapGesture_Statics::NewProp_BasicDirection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapKeyTapGesture_Statics::NewProp_BasicDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapKeyTapGesture_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapKeyTapGesture_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapKeyTapGesture_Statics::NewProp_Progress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapKeyTapGesture_Statics::NewProp_PPointable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeapKeyTapGesture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeapKeyTapGesture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULeapKeyTapGesture_Statics::ClassParams = {
		&ULeapKeyTapGesture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULeapKeyTapGesture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULeapKeyTapGesture_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULeapKeyTapGesture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapKeyTapGesture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeapKeyTapGesture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULeapKeyTapGesture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULeapKeyTapGesture, 2182941466);
	template<> SIMPLELEAPMOTION_API UClass* StaticClass<ULeapKeyTapGesture>()
	{
		return ULeapKeyTapGesture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULeapKeyTapGesture(Z_Construct_UClass_ULeapKeyTapGesture, &ULeapKeyTapGesture::StaticClass, TEXT("/Script/SimpleLeapMotion"), TEXT("ULeapKeyTapGesture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeapKeyTapGesture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
