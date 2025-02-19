// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleLeapMotion/Public/LeapBaseObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapBaseObject() {}
// Cross Module References
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapBaseObject_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapBaseObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SimpleLeapMotion();
// End Cross Module References
	void ULeapBaseObject::StaticRegisterNativesULeapBaseObject()
	{
	}
	UClass* Z_Construct_UClass_ULeapBaseObject_NoRegister()
	{
		return ULeapBaseObject::StaticClass();
	}
	struct Z_Construct_UClass_ULeapBaseObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULeapBaseObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapBaseObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Optional base class for custom memory management\n*/" },
		{ "IncludePath", "LeapBaseObject.h" },
		{ "ModuleRelativePath", "Public/LeapBaseObject.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Optional base class for custom memory management" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeapBaseObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeapBaseObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULeapBaseObject_Statics::ClassParams = {
		&ULeapBaseObject::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULeapBaseObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapBaseObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeapBaseObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULeapBaseObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULeapBaseObject, 3616413820);
	template<> SIMPLELEAPMOTION_API UClass* StaticClass<ULeapBaseObject>()
	{
		return ULeapBaseObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULeapBaseObject(Z_Construct_UClass_ULeapBaseObject, &ULeapBaseObject::StaticClass, TEXT("/Script/SimpleLeapMotion"), TEXT("ULeapBaseObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeapBaseObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
