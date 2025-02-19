// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleLeapMotion/Public/LeapPointableList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapPointableList() {}
// Cross Module References
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapPointableList_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapPointableList();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SimpleLeapMotion();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapFingerList_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapToolList_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapPointable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULeapPointableList::execRightmost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapPointable**)Z_Param__Result=P_THIS->Rightmost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapPointableList::execGetPointableByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapPointable**)Z_Param__Result=P_THIS->GetPointableByIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapPointableList::execLeftmost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapPointable**)Z_Param__Result=P_THIS->Leftmost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapPointableList::execFrontmost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapPointable**)Z_Param__Result=P_THIS->Frontmost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapPointableList::execExtended)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapPointableList**)Z_Param__Result=P_THIS->Extended();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapPointableList::execAppendTools)
	{
		P_GET_OBJECT(ULeapToolList,Z_Param_List);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapPointableList**)Z_Param__Result=P_THIS->AppendTools(Z_Param_List);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapPointableList::execAppendFingers)
	{
		P_GET_OBJECT(ULeapFingerList,Z_Param_List);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapPointableList**)Z_Param__Result=P_THIS->AppendFingers(Z_Param_List);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapPointableList::execAppend)
	{
		P_GET_OBJECT(ULeapPointableList,Z_Param_List);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapPointableList**)Z_Param__Result=P_THIS->Append(Z_Param_List);
		P_NATIVE_END;
	}
	void ULeapPointableList::StaticRegisterNativesULeapPointableList()
	{
		UClass* Class = ULeapPointableList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Append", &ULeapPointableList::execAppend },
			{ "AppendFingers", &ULeapPointableList::execAppendFingers },
			{ "AppendTools", &ULeapPointableList::execAppendTools },
			{ "Extended", &ULeapPointableList::execExtended },
			{ "Frontmost", &ULeapPointableList::execFrontmost },
			{ "GetPointableByIndex", &ULeapPointableList::execGetPointableByIndex },
			{ "Leftmost", &ULeapPointableList::execLeftmost },
			{ "Rightmost", &ULeapPointableList::execRightmost },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULeapPointableList_Append_Statics
	{
		struct LeapPointableList_eventAppend_Parms
		{
			ULeapPointableList* List;
			ULeapPointableList* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_List;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapPointableList_Append_Statics::NewProp_List = { "List", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapPointableList_eventAppend_Parms, List), Z_Construct_UClass_ULeapPointableList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapPointableList_Append_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapPointableList_eventAppend_Parms, ReturnValue), Z_Construct_UClass_ULeapPointableList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapPointableList_Append_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapPointableList_Append_Statics::NewProp_List,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapPointableList_Append_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapPointableList_Append_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Pointable List" },
		{ "Comment", "/**\n\x09* Appends the members of the specified PointableList to this PointableList.\n\x09*\n\x09* @param\x09List\x09""A PointableList object containing Pointable objects to append to the end of this PointableList.\n\x09* @return\x09""A PointableList object with the current and appended list\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "append" },
		{ "Keywords", "append" },
		{ "ModuleRelativePath", "Public/LeapPointableList.h" },
		{ "ToolTip", "Appends the members of the specified PointableList to this PointableList.\n\n@param        List    A PointableList object containing Pointable objects to append to the end of this PointableList.\n@return       A PointableList object with the current and appended list" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapPointableList_Append_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapPointableList, nullptr, "Append", nullptr, nullptr, sizeof(LeapPointableList_eventAppend_Parms), Z_Construct_UFunction_ULeapPointableList_Append_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapPointableList_Append_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapPointableList_Append_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapPointableList_Append_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapPointableList_Append()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapPointableList_Append_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapPointableList_AppendFingers_Statics
	{
		struct LeapPointableList_eventAppendFingers_Parms
		{
			ULeapFingerList* List;
			ULeapPointableList* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_List;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapPointableList_AppendFingers_Statics::NewProp_List = { "List", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapPointableList_eventAppendFingers_Parms, List), Z_Construct_UClass_ULeapFingerList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapPointableList_AppendFingers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapPointableList_eventAppendFingers_Parms, ReturnValue), Z_Construct_UClass_ULeapPointableList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapPointableList_AppendFingers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapPointableList_AppendFingers_Statics::NewProp_List,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapPointableList_AppendFingers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapPointableList_AppendFingers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Pointable List" },
		{ "Comment", "/**\n\x09* Appends the members of the specified FingerList to this PointableList.\n\x09*\n\x09* @param\x09List\x09""A FingerList object containing Finger objects to append to the end of this PointableList.\n\x09* @return\x09""A PointableList object with the current and appended list\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "appendFingers" },
		{ "Keywords", "append" },
		{ "ModuleRelativePath", "Public/LeapPointableList.h" },
		{ "ToolTip", "Appends the members of the specified FingerList to this PointableList.\n\n@param        List    A FingerList object containing Finger objects to append to the end of this PointableList.\n@return       A PointableList object with the current and appended list" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapPointableList_AppendFingers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapPointableList, nullptr, "AppendFingers", nullptr, nullptr, sizeof(LeapPointableList_eventAppendFingers_Parms), Z_Construct_UFunction_ULeapPointableList_AppendFingers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapPointableList_AppendFingers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapPointableList_AppendFingers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapPointableList_AppendFingers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapPointableList_AppendFingers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapPointableList_AppendFingers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapPointableList_AppendTools_Statics
	{
		struct LeapPointableList_eventAppendTools_Parms
		{
			ULeapToolList* List;
			ULeapPointableList* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_List;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapPointableList_AppendTools_Statics::NewProp_List = { "List", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapPointableList_eventAppendTools_Parms, List), Z_Construct_UClass_ULeapToolList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapPointableList_AppendTools_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapPointableList_eventAppendTools_Parms, ReturnValue), Z_Construct_UClass_ULeapPointableList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapPointableList_AppendTools_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapPointableList_AppendTools_Statics::NewProp_List,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapPointableList_AppendTools_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapPointableList_AppendTools_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Pointable List" },
		{ "Comment", "/**\n\x09* Appends the members of the specified ToolList to this PointableList.\n\x09*\n\x09* @param\x09List\x09""A ToolList object containing Tool objects to append to the end of this PointableList.\n\x09* @return\x09""A PointableList object with the current and appended list\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "appendTools" },
		{ "Keywords", "append" },
		{ "ModuleRelativePath", "Public/LeapPointableList.h" },
		{ "ToolTip", "Appends the members of the specified ToolList to this PointableList.\n\n@param        List    A ToolList object containing Tool objects to append to the end of this PointableList.\n@return       A PointableList object with the current and appended list" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapPointableList_AppendTools_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapPointableList, nullptr, "AppendTools", nullptr, nullptr, sizeof(LeapPointableList_eventAppendTools_Parms), Z_Construct_UFunction_ULeapPointableList_AppendTools_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapPointableList_AppendTools_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapPointableList_AppendTools_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapPointableList_AppendTools_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapPointableList_AppendTools()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapPointableList_AppendTools_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapPointableList_Extended_Statics
	{
		struct LeapPointableList_eventExtended_Parms
		{
			ULeapPointableList* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapPointableList_Extended_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapPointableList_eventExtended_Parms, ReturnValue), Z_Construct_UClass_ULeapPointableList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapPointableList_Extended_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapPointableList_Extended_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapPointableList_Extended_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Pointable List" },
		{ "Comment", "/**\n\x09* Returns a new list containing those members of the current list that are extended.\n\x09*\n\x09* @return\x09The list of tools and extended fingers from the current list.\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "extended" },
		{ "Keywords", "extended" },
		{ "ModuleRelativePath", "Public/LeapPointableList.h" },
		{ "ToolTip", "Returns a new list containing those members of the current list that are extended.\n\n@return       The list of tools and extended fingers from the current list." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapPointableList_Extended_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapPointableList, nullptr, "Extended", nullptr, nullptr, sizeof(LeapPointableList_eventExtended_Parms), Z_Construct_UFunction_ULeapPointableList_Extended_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapPointableList_Extended_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapPointableList_Extended_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapPointableList_Extended_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapPointableList_Extended()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapPointableList_Extended_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapPointableList_Frontmost_Statics
	{
		struct LeapPointableList_eventFrontmost_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapPointableList_Frontmost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapPointableList_eventFrontmost_Parms, ReturnValue), Z_Construct_UClass_ULeapPointable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapPointableList_Frontmost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapPointableList_Frontmost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapPointableList_Frontmost_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Pointable List" },
		{ "Comment", "/**\n\x09* The member of the list that is farthest to the front within the standard Leap Motion \n\x09* frame of reference (i.e has the largest X coordinate).\n\x09*\n\x09* @return\x09The frontmost pointable, or invalid if list is empty.\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "frontmost" },
		{ "Keywords", "frontmost" },
		{ "ModuleRelativePath", "Public/LeapPointableList.h" },
		{ "ToolTip", "The member of the list that is farthest to the front within the standard Leap Motion\nframe of reference (i.e has the largest X coordinate).\n\n@return       The frontmost pointable, or invalid if list is empty." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapPointableList_Frontmost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapPointableList, nullptr, "Frontmost", nullptr, nullptr, sizeof(LeapPointableList_eventFrontmost_Parms), Z_Construct_UFunction_ULeapPointableList_Frontmost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapPointableList_Frontmost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapPointableList_Frontmost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapPointableList_Frontmost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapPointableList_Frontmost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapPointableList_Frontmost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapPointableList_GetPointableByIndex_Statics
	{
		struct LeapPointableList_eventGetPointableByIndex_Parms
		{
			int32 Index;
			ULeapPointable* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULeapPointableList_GetPointableByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapPointableList_eventGetPointableByIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapPointableList_GetPointableByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapPointableList_eventGetPointableByIndex_Parms, ReturnValue), Z_Construct_UClass_ULeapPointable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapPointableList_GetPointableByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapPointableList_GetPointableByIndex_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapPointableList_GetPointableByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapPointableList_GetPointableByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Pointable List" },
		{ "Comment", "/**\n\x09* Access a list member by its position in the list.\n\x09*\n\x09* @param\x09Index\x09position in the list.\n\x09* @return The Pointable object at the specified index.\n\x09*/" },
		{ "CompactNodeTitle", "[]" },
		{ "DisplayName", "getPointableByIndex" },
		{ "Keywords", "get pointable by index" },
		{ "ModuleRelativePath", "Public/LeapPointableList.h" },
		{ "ToolTip", "Access a list member by its position in the list.\n\n@param        Index   position in the list.\n@return The Pointable object at the specified index." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapPointableList_GetPointableByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapPointableList, nullptr, "GetPointableByIndex", nullptr, nullptr, sizeof(LeapPointableList_eventGetPointableByIndex_Parms), Z_Construct_UFunction_ULeapPointableList_GetPointableByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapPointableList_GetPointableByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapPointableList_GetPointableByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapPointableList_GetPointableByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapPointableList_GetPointableByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapPointableList_GetPointableByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapPointableList_Leftmost_Statics
	{
		struct LeapPointableList_eventLeftmost_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapPointableList_Leftmost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapPointableList_eventLeftmost_Parms, ReturnValue), Z_Construct_UClass_ULeapPointable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapPointableList_Leftmost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapPointableList_Leftmost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapPointableList_Leftmost_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Pointable List" },
		{ "Comment", "/**\n\x09* The member of the list that is farthest to the left within the standard Leap Motion\n\x09* frame of reference (i.e has the smallest Y coordinate).\n\x09*\n\x09* @return\x09The leftmost pointable, or invalid if list is empty.\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "leftmost" },
		{ "Keywords", "leftmost" },
		{ "ModuleRelativePath", "Public/LeapPointableList.h" },
		{ "ToolTip", "The member of the list that is farthest to the left within the standard Leap Motion\nframe of reference (i.e has the smallest Y coordinate).\n\n@return       The leftmost pointable, or invalid if list is empty." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapPointableList_Leftmost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapPointableList, nullptr, "Leftmost", nullptr, nullptr, sizeof(LeapPointableList_eventLeftmost_Parms), Z_Construct_UFunction_ULeapPointableList_Leftmost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapPointableList_Leftmost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapPointableList_Leftmost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapPointableList_Leftmost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapPointableList_Leftmost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapPointableList_Leftmost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapPointableList_Rightmost_Statics
	{
		struct LeapPointableList_eventRightmost_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapPointableList_Rightmost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapPointableList_eventRightmost_Parms, ReturnValue), Z_Construct_UClass_ULeapPointable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapPointableList_Rightmost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapPointableList_Rightmost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapPointableList_Rightmost_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Pointable List" },
		{ "Comment", "/**\n\x09* The member of the list that is farthest to the right within the standard Leap Motion \n\x09* frame of reference (i.e has the largest Y coordinate).\n\x09*\n\x09* @return\x09The rightmost pointable, or invalid if list is empty.\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "rightmost" },
		{ "Keywords", "rightmost" },
		{ "ModuleRelativePath", "Public/LeapPointableList.h" },
		{ "ToolTip", "The member of the list that is farthest to the right within the standard Leap Motion\nframe of reference (i.e has the largest Y coordinate).\n\n@return       The rightmost pointable, or invalid if list is empty." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapPointableList_Rightmost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapPointableList, nullptr, "Rightmost", nullptr, nullptr, sizeof(LeapPointableList_eventRightmost_Parms), Z_Construct_UFunction_ULeapPointableList_Rightmost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapPointableList_Rightmost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapPointableList_Rightmost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapPointableList_Rightmost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapPointableList_Rightmost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapPointableList_Rightmost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULeapPointableList_NoRegister()
	{
		return ULeapPointableList::StaticClass();
	}
	struct Z_Construct_UClass_ULeapPointableList_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEmpty_MetaData[];
#endif
		static void NewProp_IsEmpty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEmpty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PLeftmost_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PLeftmost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PRightmost_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PRightmost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PFrontmost_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PFrontmost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PPointableByIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PPointableByIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PAppendedList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PAppendedList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PExtendedList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PExtendedList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULeapPointableList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULeapPointableList_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeapPointableList_Append, "Append" }, // 755912264
		{ &Z_Construct_UFunction_ULeapPointableList_AppendFingers, "AppendFingers" }, // 3789845771
		{ &Z_Construct_UFunction_ULeapPointableList_AppendTools, "AppendTools" }, // 1520195224
		{ &Z_Construct_UFunction_ULeapPointableList_Extended, "Extended" }, // 727957053
		{ &Z_Construct_UFunction_ULeapPointableList_Frontmost, "Frontmost" }, // 2589368656
		{ &Z_Construct_UFunction_ULeapPointableList_GetPointableByIndex, "GetPointableByIndex" }, // 2541084231
		{ &Z_Construct_UFunction_ULeapPointableList_Leftmost, "Leftmost" }, // 2921618984
		{ &Z_Construct_UFunction_ULeapPointableList_Rightmost, "Rightmost" }, // 4230398995
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapPointableList_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* The PointableList class represents a list of Pointable objects.\n* \n* Leap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.PointableList.html\n*/" },
		{ "IncludePath", "LeapPointableList.h" },
		{ "ModuleRelativePath", "Public/LeapPointableList.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The PointableList class represents a list of Pointable objects.\n\nLeap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.PointableList.html" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapPointableList_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "Leap Pointable List" },
		{ "Comment", "/**\n\x09* The number of pointable entities in this list.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapPointableList.h" },
		{ "ToolTip", "The number of pointable entities in this list." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULeapPointableList_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapPointableList, Count), METADATA_PARAMS(Z_Construct_UClass_ULeapPointableList_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapPointableList_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapPointableList_Statics::NewProp_IsEmpty_MetaData[] = {
		{ "Category", "Leap Pointable List" },
		{ "Comment", "/**\n\x09* Reports whether the list is empty.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapPointableList.h" },
		{ "ToolTip", "Reports whether the list is empty." },
	};
#endif
	void Z_Construct_UClass_ULeapPointableList_Statics::NewProp_IsEmpty_SetBit(void* Obj)
	{
		((ULeapPointableList*)Obj)->IsEmpty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULeapPointableList_Statics::NewProp_IsEmpty = { "IsEmpty", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULeapPointableList), &Z_Construct_UClass_ULeapPointableList_Statics::NewProp_IsEmpty_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULeapPointableList_Statics::NewProp_IsEmpty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapPointableList_Statics::NewProp_IsEmpty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapPointableList_Statics::NewProp_PLeftmost_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapPointableList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapPointableList_Statics::NewProp_PLeftmost = { "PLeftmost", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapPointableList, PLeftmost), Z_Construct_UClass_ULeapPointable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapPointableList_Statics::NewProp_PLeftmost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapPointableList_Statics::NewProp_PLeftmost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapPointableList_Statics::NewProp_PRightmost_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapPointableList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapPointableList_Statics::NewProp_PRightmost = { "PRightmost", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapPointableList, PRightmost), Z_Construct_UClass_ULeapPointable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapPointableList_Statics::NewProp_PRightmost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapPointableList_Statics::NewProp_PRightmost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapPointableList_Statics::NewProp_PFrontmost_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapPointableList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapPointableList_Statics::NewProp_PFrontmost = { "PFrontmost", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapPointableList, PFrontmost), Z_Construct_UClass_ULeapPointable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapPointableList_Statics::NewProp_PFrontmost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapPointableList_Statics::NewProp_PFrontmost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapPointableList_Statics::NewProp_PPointableByIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapPointableList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapPointableList_Statics::NewProp_PPointableByIndex = { "PPointableByIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapPointableList, PPointableByIndex), Z_Construct_UClass_ULeapPointable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapPointableList_Statics::NewProp_PPointableByIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapPointableList_Statics::NewProp_PPointableByIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapPointableList_Statics::NewProp_PAppendedList_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapPointableList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapPointableList_Statics::NewProp_PAppendedList = { "PAppendedList", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapPointableList, PAppendedList), Z_Construct_UClass_ULeapPointableList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapPointableList_Statics::NewProp_PAppendedList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapPointableList_Statics::NewProp_PAppendedList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapPointableList_Statics::NewProp_PExtendedList_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapPointableList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapPointableList_Statics::NewProp_PExtendedList = { "PExtendedList", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapPointableList, PExtendedList), Z_Construct_UClass_ULeapPointableList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapPointableList_Statics::NewProp_PExtendedList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapPointableList_Statics::NewProp_PExtendedList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeapPointableList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapPointableList_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapPointableList_Statics::NewProp_IsEmpty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapPointableList_Statics::NewProp_PLeftmost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapPointableList_Statics::NewProp_PRightmost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapPointableList_Statics::NewProp_PFrontmost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapPointableList_Statics::NewProp_PPointableByIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapPointableList_Statics::NewProp_PAppendedList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapPointableList_Statics::NewProp_PExtendedList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeapPointableList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeapPointableList>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULeapPointableList_Statics::ClassParams = {
		&ULeapPointableList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULeapPointableList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULeapPointableList_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULeapPointableList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapPointableList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeapPointableList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULeapPointableList_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULeapPointableList, 1544675000);
	template<> SIMPLELEAPMOTION_API UClass* StaticClass<ULeapPointableList>()
	{
		return ULeapPointableList::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULeapPointableList(Z_Construct_UClass_ULeapPointableList, &ULeapPointableList::StaticClass, TEXT("/Script/SimpleLeapMotion"), TEXT("ULeapPointableList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeapPointableList);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
