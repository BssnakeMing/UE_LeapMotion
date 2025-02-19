// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleLeapMotion/Public/LeapFinger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapFinger() {}
// Cross Module References
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapFinger_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapFinger();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapPointable();
	UPackage* Z_Construct_UPackage__Script_SimpleLeapMotion();
	SIMPLELEAPMOTION_API UEnum* Z_Construct_UEnum_SimpleLeapMotion_ELeapBoneType();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapBone_NoRegister();
	SIMPLELEAPMOTION_API UEnum* Z_Construct_UEnum_SimpleLeapMotion_ELeapFingerType();
// End Cross Module References
	DEFINE_FUNCTION(ULeapFinger::execBone)
	{
		P_GET_ENUM(ELeapBoneType,Z_Param_mType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapBone**)Z_Param__Result=P_THIS->Bone(ELeapBoneType(Z_Param_mType));
		P_NATIVE_END;
	}
	void ULeapFinger::StaticRegisterNativesULeapFinger()
	{
		UClass* Class = ULeapFinger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Bone", &ULeapFinger::execBone },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULeapFinger_Bone_Statics
	{
		struct LeapFinger_eventBone_Parms
		{
			ELeapBoneType mType;
			ULeapBone* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULeapFinger_Bone_Statics::NewProp_mType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULeapFinger_Bone_Statics::NewProp_mType = { "mType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFinger_eventBone_Parms, mType), Z_Construct_UEnum_SimpleLeapMotion_ELeapBoneType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapFinger_Bone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFinger_eventBone_Parms, ReturnValue), Z_Construct_UClass_ULeapBone_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapFinger_Bone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFinger_Bone_Statics::NewProp_mType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFinger_Bone_Statics::NewProp_mType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFinger_Bone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapFinger_Bone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Finger" },
		{ "Comment", "/**\n\x09* The bone at a given bone type index on this finger.\n\x09* \xe6\xad\xa4\xe6\x89\x8b\xe6\x8c\x87\xe4\xb8\x8a\xe7\xbb\x99\xe5\xae\x9a\xe9\xaa\xa8\xe9\xaa\xbc\xe7\xb1\xbb\xe5\x9e\x8b\xe7\xb4\xa2\xe5\xbc\x95\xe5\xa4\x84\xe7\x9a\x84\xe9\xaa\xa8\xe9\xaa\xbc\xe3\x80\x82\n\x09*\n\x09* @param\x09mType value from the LeapBoneType enumeration identifying the bone of interest.\n\x09* @return\x09The Bone that has the specified bone type.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapFinger.h" },
		{ "ToolTip", "The bone at a given bone type index on this finger.\n\xe6\xad\xa4\xe6\x89\x8b\xe6\x8c\x87\xe4\xb8\x8a\xe7\xbb\x99\xe5\xae\x9a\xe9\xaa\xa8\xe9\xaa\xbc\xe7\xb1\xbb\xe5\x9e\x8b\xe7\xb4\xa2\xe5\xbc\x95\xe5\xa4\x84\xe7\x9a\x84\xe9\xaa\xa8\xe9\xaa\xbc\xe3\x80\x82\n\n@param        mType value from the LeapBoneType enumeration identifying the bone of interest.\n@return       The Bone that has the specified bone type." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapFinger_Bone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapFinger, nullptr, "Bone", nullptr, nullptr, sizeof(LeapFinger_eventBone_Parms), Z_Construct_UFunction_ULeapFinger_Bone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFinger_Bone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapFinger_Bone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFinger_Bone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapFinger_Bone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapFinger_Bone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULeapFinger_NoRegister()
	{
		return ULeapFinger::StaticClass();
	}
	struct Z_Construct_UClass_ULeapFinger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Metacarpal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Metacarpal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Proximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Proximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intermediate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Intermediate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Distal;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULeapFinger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULeapPointable,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULeapFinger_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeapFinger_Bone, "Bone" }, // 3704565971
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapFinger_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* The Finger class represents a tracked finger.\n*\n* Fingers are Pointable objects that the Leap Motion software has classified as a \n* finger. Get valid Finger objects from a Frame or a Hand object.\n* Finger \xe7\xb1\xbb\xe8\xa1\xa8\xe7\xa4\xba\xe4\xb8\x80\xe4\xb8\xaa\xe8\xa2\xab\xe8\xb7\x9f\xe8\xb8\xaa\xe7\x9a\x84\xe6\x89\x8b\xe6\x8c\x87\xe3\x80\x82\n* \xe6\x89\x8b\xe6\x8c\x87\xe6\x98\xaf Pointable \xe5\xaf\xb9\xe8\xb1\xa1\xef\xbc\x8cLeap Motion \xe8\xbd\xaf\xe4\xbb\xb6\xe5\xb7\xb2\xe5\xb0\x86\xe5\x85\xb6\xe5\xbd\x92\xe7\xb1\xbb\xe4\xb8\xba\xe6\x89\x8b\xe6\x8c\x87\xe3\x80\x82\xe4\xbb\x8e Frame \xe6\x88\x96 Hand \xe5\xaf\xb9\xe8\xb1\xa1\xe8\x8e\xb7\xe5\x8f\x96\xe6\x9c\x89\xe6\x95\x88\xe7\x9a\x84 Finger \xe5\xaf\xb9\xe8\xb1\xa1\xe3\x80\x82\n*\n* Leap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.Finger.html\n*/" },
		{ "IncludePath", "LeapFinger.h" },
		{ "ModuleRelativePath", "Public/LeapFinger.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The Finger class represents a tracked finger.\n\nFingers are Pointable objects that the Leap Motion software has classified as a\nfinger. Get valid Finger objects from a Frame or a Hand object.\nFinger \xe7\xb1\xbb\xe8\xa1\xa8\xe7\xa4\xba\xe4\xb8\x80\xe4\xb8\xaa\xe8\xa2\xab\xe8\xb7\x9f\xe8\xb8\xaa\xe7\x9a\x84\xe6\x89\x8b\xe6\x8c\x87\xe3\x80\x82\n\xe6\x89\x8b\xe6\x8c\x87\xe6\x98\xaf Pointable \xe5\xaf\xb9\xe8\xb1\xa1\xef\xbc\x8cLeap Motion \xe8\xbd\xaf\xe4\xbb\xb6\xe5\xb7\xb2\xe5\xb0\x86\xe5\x85\xb6\xe5\xbd\x92\xe7\xb1\xbb\xe4\xb8\xba\xe6\x89\x8b\xe6\x8c\x87\xe3\x80\x82\xe4\xbb\x8e Frame \xe6\x88\x96 Hand \xe5\xaf\xb9\xe8\xb1\xa1\xe8\x8e\xb7\xe5\x8f\x96\xe6\x9c\x89\xe6\x95\x88\xe7\x9a\x84 Finger \xe5\xaf\xb9\xe8\xb1\xa1\xe3\x80\x82\n\nLeap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.Finger.html" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapFinger_Statics::NewProp_Metacarpal_MetaData[] = {
		{ "Category", "Leap Finger" },
		{ "Comment", "/**\n\x09* The Metacarpal bone of this finger.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapFinger.h" },
		{ "ToolTip", "The Metacarpal bone of this finger." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapFinger_Statics::NewProp_Metacarpal = { "Metacarpal", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapFinger, Metacarpal), Z_Construct_UClass_ULeapBone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapFinger_Statics::NewProp_Metacarpal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapFinger_Statics::NewProp_Metacarpal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapFinger_Statics::NewProp_Proximal_MetaData[] = {
		{ "Category", "Leap Finger" },
		{ "Comment", "/**\n\x09* The Proximal bone of this finger.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapFinger.h" },
		{ "ToolTip", "The Proximal bone of this finger." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapFinger_Statics::NewProp_Proximal = { "Proximal", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapFinger, Proximal), Z_Construct_UClass_ULeapBone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapFinger_Statics::NewProp_Proximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapFinger_Statics::NewProp_Proximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapFinger_Statics::NewProp_Intermediate_MetaData[] = {
		{ "Category", "Leap Finger" },
		{ "Comment", "/**\n\x09* The Intermediate bone of this finger.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapFinger.h" },
		{ "ToolTip", "The Intermediate bone of this finger." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapFinger_Statics::NewProp_Intermediate = { "Intermediate", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapFinger, Intermediate), Z_Construct_UClass_ULeapBone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapFinger_Statics::NewProp_Intermediate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapFinger_Statics::NewProp_Intermediate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapFinger_Statics::NewProp_Distal_MetaData[] = {
		{ "Category", "Leap Finger" },
		{ "Comment", "/**\n\x09* The Distal bone of this finger.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapFinger.h" },
		{ "ToolTip", "The Distal bone of this finger." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapFinger_Statics::NewProp_Distal = { "Distal", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapFinger, Distal), Z_Construct_UClass_ULeapBone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapFinger_Statics::NewProp_Distal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapFinger_Statics::NewProp_Distal_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULeapFinger_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapFinger_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Leap Finger" },
		{ "Comment", "/**\n\x09* Type of finger as enum (see LeapFingerType enum)\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapFinger.h" },
		{ "ToolTip", "Type of finger as enum (see LeapFingerType enum)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULeapFinger_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapFinger, Type), Z_Construct_UEnum_SimpleLeapMotion_ELeapFingerType, METADATA_PARAMS(Z_Construct_UClass_ULeapFinger_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapFinger_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeapFinger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapFinger_Statics::NewProp_Metacarpal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapFinger_Statics::NewProp_Proximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapFinger_Statics::NewProp_Intermediate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapFinger_Statics::NewProp_Distal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapFinger_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapFinger_Statics::NewProp_Type,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeapFinger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeapFinger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULeapFinger_Statics::ClassParams = {
		&ULeapFinger::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULeapFinger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULeapFinger_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULeapFinger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapFinger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeapFinger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULeapFinger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULeapFinger, 3826003094);
	template<> SIMPLELEAPMOTION_API UClass* StaticClass<ULeapFinger>()
	{
		return ULeapFinger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULeapFinger(Z_Construct_UClass_ULeapFinger, &ULeapFinger::StaticClass, TEXT("/Script/SimpleLeapMotion"), TEXT("ULeapFinger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeapFinger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
