// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleLeapMotion/Public/LeapTool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapTool() {}
// Cross Module References
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapTool_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapTool();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapPointable();
	UPackage* Z_Construct_UPackage__Script_SimpleLeapMotion();
// End Cross Module References
	void ULeapTool::StaticRegisterNativesULeapTool()
	{
	}
	UClass* Z_Construct_UClass_ULeapTool_NoRegister()
	{
		return ULeapTool::StaticClass();
	}
	struct Z_Construct_UClass_ULeapTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULeapTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULeapPointable,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapTool_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* The Tool class represents a tracked tool.\n* Tools are Pointable objects that the Leap Motion software has classified as a tool.\n* Get valid Tool objects from a Frame object.\n*\n* Leap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.Tool.html\n*/" },
		{ "IncludePath", "LeapTool.h" },
		{ "ModuleRelativePath", "Public/LeapTool.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The Tool class represents a tracked tool.\nTools are Pointable objects that the Leap Motion software has classified as a tool.\nGet valid Tool objects from a Frame object.\n\nLeap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.Tool.html" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeapTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeapTool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULeapTool_Statics::ClassParams = {
		&ULeapTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULeapTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeapTool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULeapTool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULeapTool, 352417222);
	template<> SIMPLELEAPMOTION_API UClass* StaticClass<ULeapTool>()
	{
		return ULeapTool::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULeapTool(Z_Construct_UClass_ULeapTool, &ULeapTool::StaticClass, TEXT("/Script/SimpleLeapMotion"), TEXT("ULeapTool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeapTool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
