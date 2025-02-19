// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleLeapMotion/Public/LeapImageList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapImageList() {}
// Cross Module References
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapImageList_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapImageList();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SimpleLeapMotion();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULeapImageList::execGetIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapImage**)Z_Param__Result=P_THIS->GetIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	void ULeapImageList::StaticRegisterNativesULeapImageList()
	{
		UClass* Class = ULeapImageList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIndex", &ULeapImageList::execGetIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULeapImageList_GetIndex_Statics
	{
		struct LeapImageList_eventGetIndex_Parms
		{
			int32 Index;
			ULeapImage* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULeapImageList_GetIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapImageList_eventGetIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapImageList_GetIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapImageList_eventGetIndex_Parms, ReturnValue), Z_Construct_UClass_ULeapImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapImageList_GetIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapImageList_GetIndex_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapImageList_GetIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapImageList_GetIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Image List" },
		{ "Comment", "/**\n\x09* Access a list member by its position in the list.\n\x09*\n\x09* @param\x09Index\x09The zero-based list position index.\n\x09* @return\x09The Image object at the specified index.\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "getIndex" },
		{ "Keywords", "get index" },
		{ "ModuleRelativePath", "Public/LeapImageList.h" },
		{ "ToolTip", "Access a list member by its position in the list.\n\n@param        Index   The zero-based list position index.\n@return       The Image object at the specified index." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapImageList_GetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapImageList, nullptr, "GetIndex", nullptr, nullptr, sizeof(LeapImageList_eventGetIndex_Parms), Z_Construct_UFunction_ULeapImageList_GetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapImageList_GetIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapImageList_GetIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapImageList_GetIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapImageList_GetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapImageList_GetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULeapImageList_NoRegister()
	{
		return ULeapImageList::StaticClass();
	}
	struct Z_Construct_UClass_ULeapImageList_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEmpty_MetaData[];
#endif
		static void NewProp_IsEmpty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEmpty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PIndexImage1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PIndexImage1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PIndexImage2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PIndexImage2;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULeapImageList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULeapImageList_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeapImageList_GetIndex, "GetIndex" }, // 1898776086
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapImageList_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* The ImageList class represents a list of Image objects.\n*\n* Leap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.ImageList.html\n*/" },
		{ "IncludePath", "LeapImageList.h" },
		{ "ModuleRelativePath", "Public/LeapImageList.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The ImageList class represents a list of Image objects.\n\nLeap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.ImageList.html" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapImageList_Statics::NewProp_IsEmpty_MetaData[] = {
		{ "Category", "Leap Image List" },
		{ "Comment", "/**\n\x09* Whether the list is empty.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapImageList.h" },
		{ "ToolTip", "Whether the list is empty." },
	};
#endif
	void Z_Construct_UClass_ULeapImageList_Statics::NewProp_IsEmpty_SetBit(void* Obj)
	{
		((ULeapImageList*)Obj)->IsEmpty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULeapImageList_Statics::NewProp_IsEmpty = { "IsEmpty", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULeapImageList), &Z_Construct_UClass_ULeapImageList_Statics::NewProp_IsEmpty_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULeapImageList_Statics::NewProp_IsEmpty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapImageList_Statics::NewProp_IsEmpty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapImageList_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "Leap Image List" },
		{ "Comment", "/**\n\x09* The number of images in this list.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapImageList.h" },
		{ "ToolTip", "The number of images in this list." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULeapImageList_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapImageList, Count), METADATA_PARAMS(Z_Construct_UClass_ULeapImageList_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapImageList_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapImageList_Statics::NewProp_PIndexImage1_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapImageList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapImageList_Statics::NewProp_PIndexImage1 = { "PIndexImage1", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapImageList, PIndexImage1), Z_Construct_UClass_ULeapImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapImageList_Statics::NewProp_PIndexImage1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapImageList_Statics::NewProp_PIndexImage1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapImageList_Statics::NewProp_PIndexImage2_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapImageList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapImageList_Statics::NewProp_PIndexImage2 = { "PIndexImage2", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapImageList, PIndexImage2), Z_Construct_UClass_ULeapImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapImageList_Statics::NewProp_PIndexImage2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapImageList_Statics::NewProp_PIndexImage2_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeapImageList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapImageList_Statics::NewProp_IsEmpty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapImageList_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapImageList_Statics::NewProp_PIndexImage1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapImageList_Statics::NewProp_PIndexImage2,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeapImageList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeapImageList>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULeapImageList_Statics::ClassParams = {
		&ULeapImageList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULeapImageList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULeapImageList_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULeapImageList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapImageList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeapImageList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULeapImageList_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULeapImageList, 2455573630);
	template<> SIMPLELEAPMOTION_API UClass* StaticClass<ULeapImageList>()
	{
		return ULeapImageList::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULeapImageList(Z_Construct_UClass_ULeapImageList, &ULeapImageList::StaticClass, TEXT("/Script/SimpleLeapMotion"), TEXT("ULeapImageList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeapImageList);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
