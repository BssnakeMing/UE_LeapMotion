// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleLeapMotion/Public/LeapHandList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapHandList() {}
// Cross Module References
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapHandList_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapHandList();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SimpleLeapMotion();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapHand_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULeapHandList::execGetIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapHand**)Z_Param__Result=P_THIS->GetIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapHandList::execRightmost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapHand**)Z_Param__Result=P_THIS->Rightmost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapHandList::execLeftmost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapHand**)Z_Param__Result=P_THIS->Leftmost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapHandList::execFrontmost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapHand**)Z_Param__Result=P_THIS->Frontmost();
		P_NATIVE_END;
	}
	void ULeapHandList::StaticRegisterNativesULeapHandList()
	{
		UClass* Class = ULeapHandList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Frontmost", &ULeapHandList::execFrontmost },
			{ "GetIndex", &ULeapHandList::execGetIndex },
			{ "Leftmost", &ULeapHandList::execLeftmost },
			{ "Rightmost", &ULeapHandList::execRightmost },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULeapHandList_Frontmost_Statics
	{
		struct LeapHandList_eventFrontmost_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapHandList_Frontmost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapHandList_eventFrontmost_Parms, ReturnValue), Z_Construct_UClass_ULeapHand_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapHandList_Frontmost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapHandList_Frontmost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapHandList_Frontmost_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Hand List" },
		{ "Comment", "/**\n\x09* The member of the list that is farthest to the front within the standard Leap Motion frame of reference (i.e has the largest X coordinate).\n\x09*\n\x09* @return\x09The frontmost hand, or invalid if list is empty.\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "getFrontmost" },
		{ "Keywords", "get frontmost" },
		{ "ModuleRelativePath", "Public/LeapHandList.h" },
		{ "ToolTip", "The member of the list that is farthest to the front within the standard Leap Motion frame of reference (i.e has the largest X coordinate).\n\n@return       The frontmost hand, or invalid if list is empty." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapHandList_Frontmost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapHandList, nullptr, "Frontmost", nullptr, nullptr, sizeof(LeapHandList_eventFrontmost_Parms), Z_Construct_UFunction_ULeapHandList_Frontmost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHandList_Frontmost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapHandList_Frontmost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHandList_Frontmost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapHandList_Frontmost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapHandList_Frontmost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapHandList_GetIndex_Statics
	{
		struct LeapHandList_eventGetIndex_Parms
		{
			int32 Index;
			ULeapHand* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULeapHandList_GetIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapHandList_eventGetIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapHandList_GetIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapHandList_eventGetIndex_Parms, ReturnValue), Z_Construct_UClass_ULeapHand_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapHandList_GetIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapHandList_GetIndex_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapHandList_GetIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapHandList_GetIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Hand List" },
		{ "Comment", "/**\n\x09* Access a list member by its position in the list.\n\x09*\n\x09* @param\x09Index\x09The zero-based list position index.\n\x09* @return\x09The Hand object at the specified index.\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "getIndex" },
		{ "Keywords", "get index" },
		{ "ModuleRelativePath", "Public/LeapHandList.h" },
		{ "ToolTip", "Access a list member by its position in the list.\n\n@param        Index   The zero-based list position index.\n@return       The Hand object at the specified index." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapHandList_GetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapHandList, nullptr, "GetIndex", nullptr, nullptr, sizeof(LeapHandList_eventGetIndex_Parms), Z_Construct_UFunction_ULeapHandList_GetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHandList_GetIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapHandList_GetIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHandList_GetIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapHandList_GetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapHandList_GetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapHandList_Leftmost_Statics
	{
		struct LeapHandList_eventLeftmost_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapHandList_Leftmost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapHandList_eventLeftmost_Parms, ReturnValue), Z_Construct_UClass_ULeapHand_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapHandList_Leftmost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapHandList_Leftmost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapHandList_Leftmost_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Hand List" },
		{ "Comment", "/**\n\x09* The member of the list that is farthest to the left within the standard Leap Motion frame of reference (i.e has the smallest Y coordinate).\n\x09*\n\x09* @return\x09The leftmost hand, or invalid if list is empty.\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "getLeftmost" },
		{ "Keywords", "get leftmost" },
		{ "ModuleRelativePath", "Public/LeapHandList.h" },
		{ "ToolTip", "The member of the list that is farthest to the left within the standard Leap Motion frame of reference (i.e has the smallest Y coordinate).\n\n@return       The leftmost hand, or invalid if list is empty." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapHandList_Leftmost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapHandList, nullptr, "Leftmost", nullptr, nullptr, sizeof(LeapHandList_eventLeftmost_Parms), Z_Construct_UFunction_ULeapHandList_Leftmost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHandList_Leftmost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapHandList_Leftmost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHandList_Leftmost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapHandList_Leftmost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapHandList_Leftmost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapHandList_Rightmost_Statics
	{
		struct LeapHandList_eventRightmost_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapHandList_Rightmost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapHandList_eventRightmost_Parms, ReturnValue), Z_Construct_UClass_ULeapHand_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapHandList_Rightmost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapHandList_Rightmost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapHandList_Rightmost_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Hand List" },
		{ "Comment", "/**\n\x09* The member of the list that is farthest to the right within the standard Leap Motion frame of reference (i.e has the largest Y coordinate).\n\x09*\n\x09* @return\x09The rightmost hand, or invalid if list is empty.\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "getRightmost" },
		{ "Keywords", "get rightmost" },
		{ "ModuleRelativePath", "Public/LeapHandList.h" },
		{ "ToolTip", "The member of the list that is farthest to the right within the standard Leap Motion frame of reference (i.e has the largest Y coordinate).\n\n@return       The rightmost hand, or invalid if list is empty." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapHandList_Rightmost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapHandList, nullptr, "Rightmost", nullptr, nullptr, sizeof(LeapHandList_eventRightmost_Parms), Z_Construct_UFunction_ULeapHandList_Rightmost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHandList_Rightmost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapHandList_Rightmost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapHandList_Rightmost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapHandList_Rightmost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapHandList_Rightmost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULeapHandList_NoRegister()
	{
		return ULeapHandList::StaticClass();
	}
	struct Z_Construct_UClass_ULeapHandList_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PFrontmost_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PFrontmost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PLeftmost_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PLeftmost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PRightmost_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PRightmost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PIndexHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PIndexHand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULeapHandList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULeapHandList_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeapHandList_Frontmost, "Frontmost" }, // 1955261751
		{ &Z_Construct_UFunction_ULeapHandList_GetIndex, "GetIndex" }, // 163698179
		{ &Z_Construct_UFunction_ULeapHandList_Leftmost, "Leftmost" }, // 883907701
		{ &Z_Construct_UFunction_ULeapHandList_Rightmost, "Rightmost" }, // 454536749
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapHandList_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* The HandList class represents a list of Hand objects.\n*\n* Leap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.HandList.html\n*/" },
		{ "IncludePath", "LeapHandList.h" },
		{ "ModuleRelativePath", "Public/LeapHandList.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The HandList class represents a list of Hand objects.\n\nLeap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.HandList.html" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapHandList_Statics::NewProp_IsEmpty_MetaData[] = {
		{ "Category", "Leap Hand List" },
		{ "Comment", "/**\n\x09* Whether the list is empty.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapHandList.h" },
		{ "ToolTip", "Whether the list is empty." },
	};
#endif
	void Z_Construct_UClass_ULeapHandList_Statics::NewProp_IsEmpty_SetBit(void* Obj)
	{
		((ULeapHandList*)Obj)->IsEmpty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULeapHandList_Statics::NewProp_IsEmpty = { "IsEmpty", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULeapHandList), &Z_Construct_UClass_ULeapHandList_Statics::NewProp_IsEmpty_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULeapHandList_Statics::NewProp_IsEmpty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapHandList_Statics::NewProp_IsEmpty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapHandList_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "Leap Hand List" },
		{ "Comment", "/**\n\x09* The number of hands in this list.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapHandList.h" },
		{ "ToolTip", "The number of hands in this list." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULeapHandList_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapHandList, Count), METADATA_PARAMS(Z_Construct_UClass_ULeapHandList_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapHandList_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapHandList_Statics::NewProp_PFrontmost_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapHandList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapHandList_Statics::NewProp_PFrontmost = { "PFrontmost", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapHandList, PFrontmost), Z_Construct_UClass_ULeapHand_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapHandList_Statics::NewProp_PFrontmost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapHandList_Statics::NewProp_PFrontmost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapHandList_Statics::NewProp_PLeftmost_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapHandList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapHandList_Statics::NewProp_PLeftmost = { "PLeftmost", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapHandList, PLeftmost), Z_Construct_UClass_ULeapHand_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapHandList_Statics::NewProp_PLeftmost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapHandList_Statics::NewProp_PLeftmost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapHandList_Statics::NewProp_PRightmost_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapHandList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapHandList_Statics::NewProp_PRightmost = { "PRightmost", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapHandList, PRightmost), Z_Construct_UClass_ULeapHand_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapHandList_Statics::NewProp_PRightmost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapHandList_Statics::NewProp_PRightmost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapHandList_Statics::NewProp_PIndexHand_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapHandList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapHandList_Statics::NewProp_PIndexHand = { "PIndexHand", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapHandList, PIndexHand), Z_Construct_UClass_ULeapHand_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapHandList_Statics::NewProp_PIndexHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapHandList_Statics::NewProp_PIndexHand_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeapHandList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapHandList_Statics::NewProp_IsEmpty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapHandList_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapHandList_Statics::NewProp_PFrontmost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapHandList_Statics::NewProp_PLeftmost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapHandList_Statics::NewProp_PRightmost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapHandList_Statics::NewProp_PIndexHand,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeapHandList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeapHandList>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULeapHandList_Statics::ClassParams = {
		&ULeapHandList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULeapHandList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULeapHandList_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULeapHandList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapHandList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeapHandList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULeapHandList_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULeapHandList, 2494942503);
	template<> SIMPLELEAPMOTION_API UClass* StaticClass<ULeapHandList>()
	{
		return ULeapHandList::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULeapHandList(Z_Construct_UClass_ULeapHandList, &ULeapHandList::StaticClass, TEXT("/Script/SimpleLeapMotion"), TEXT("ULeapHandList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeapHandList);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
