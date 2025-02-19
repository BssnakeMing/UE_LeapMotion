// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleLeapMotion/Public/LeapToolList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapToolList() {}
// Cross Module References
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapToolList_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapToolList();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SimpleLeapMotion();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapTool_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapPointable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULeapToolList::execRightmost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapTool**)Z_Param__Result=P_THIS->Rightmost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapToolList::execGetPointableByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapPointable**)Z_Param__Result=P_THIS->GetPointableByIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapToolList::execLeftmost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapTool**)Z_Param__Result=P_THIS->Leftmost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapToolList::execIsEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEmpty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapToolList::execFrontmost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapTool**)Z_Param__Result=P_THIS->Frontmost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapToolList::execCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Count();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapToolList::execAppend)
	{
		P_GET_OBJECT(ULeapToolList,Z_Param_List);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapToolList**)Z_Param__Result=P_THIS->Append(Z_Param_List);
		P_NATIVE_END;
	}
	void ULeapToolList::StaticRegisterNativesULeapToolList()
	{
		UClass* Class = ULeapToolList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Append", &ULeapToolList::execAppend },
			{ "Count", &ULeapToolList::execCount },
			{ "Frontmost", &ULeapToolList::execFrontmost },
			{ "GetPointableByIndex", &ULeapToolList::execGetPointableByIndex },
			{ "IsEmpty", &ULeapToolList::execIsEmpty },
			{ "Leftmost", &ULeapToolList::execLeftmost },
			{ "Rightmost", &ULeapToolList::execRightmost },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULeapToolList_Append_Statics
	{
		struct LeapToolList_eventAppend_Parms
		{
			const ULeapToolList* List;
			ULeapToolList* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_List_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_List;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapToolList_Append_Statics::NewProp_List_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapToolList_Append_Statics::NewProp_List = { "List", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapToolList_eventAppend_Parms, List), Z_Construct_UClass_ULeapToolList_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULeapToolList_Append_Statics::NewProp_List_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapToolList_Append_Statics::NewProp_List_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapToolList_Append_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapToolList_eventAppend_Parms, ReturnValue), Z_Construct_UClass_ULeapToolList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapToolList_Append_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapToolList_Append_Statics::NewProp_List,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapToolList_Append_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapToolList_Append_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Tool List" },
		{ "Comment", "/**\n\x09* Appends the members of the specified ToolList to this ToolList.\n\x09*\n\x09* @param\x09List\x09""A ToolList object containing Tool objects to append to the end of this ToolList.\n\x09* @return\x09""A ToolList object with the current and appended list\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "append" },
		{ "Keywords", "append" },
		{ "ModuleRelativePath", "Public/LeapToolList.h" },
		{ "ToolTip", "Appends the members of the specified ToolList to this ToolList.\n\n@param        List    A ToolList object containing Tool objects to append to the end of this ToolList.\n@return       A ToolList object with the current and appended list" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapToolList_Append_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapToolList, nullptr, "Append", nullptr, nullptr, sizeof(LeapToolList_eventAppend_Parms), Z_Construct_UFunction_ULeapToolList_Append_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapToolList_Append_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapToolList_Append_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapToolList_Append_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapToolList_Append()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapToolList_Append_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapToolList_Count_Statics
	{
		struct LeapToolList_eventCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULeapToolList_Count_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapToolList_eventCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapToolList_Count_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapToolList_Count_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapToolList_Count_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Tool List" },
		{ "Comment", "/**\n\x09* Returns the number of tools in this list.\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "count" },
		{ "Keywords", "count" },
		{ "ModuleRelativePath", "Public/LeapToolList.h" },
		{ "ToolTip", "Returns the number of tools in this list." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapToolList_Count_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapToolList, nullptr, "Count", nullptr, nullptr, sizeof(LeapToolList_eventCount_Parms), Z_Construct_UFunction_ULeapToolList_Count_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapToolList_Count_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapToolList_Count_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapToolList_Count_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapToolList_Count()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapToolList_Count_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapToolList_Frontmost_Statics
	{
		struct LeapToolList_eventFrontmost_Parms
		{
			ULeapTool* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapToolList_Frontmost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapToolList_eventFrontmost_Parms, ReturnValue), Z_Construct_UClass_ULeapTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapToolList_Frontmost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapToolList_Frontmost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapToolList_Frontmost_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Tool List" },
		{ "Comment", "/**\n\x09* The member of the list that is farthest to the front within the standard Leap Motion\n\x09* frame of reference(i.e has the largest X coordinate).\n\x09*\n\x09* @return\x09The frontmost tool, or invalid if list is empty.\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "frontmost" },
		{ "Keywords", "frontmost" },
		{ "ModuleRelativePath", "Public/LeapToolList.h" },
		{ "ToolTip", "The member of the list that is farthest to the front within the standard Leap Motion\nframe of reference(i.e has the largest X coordinate).\n\n@return       The frontmost tool, or invalid if list is empty." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapToolList_Frontmost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapToolList, nullptr, "Frontmost", nullptr, nullptr, sizeof(LeapToolList_eventFrontmost_Parms), Z_Construct_UFunction_ULeapToolList_Frontmost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapToolList_Frontmost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapToolList_Frontmost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapToolList_Frontmost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapToolList_Frontmost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapToolList_Frontmost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapToolList_GetPointableByIndex_Statics
	{
		struct LeapToolList_eventGetPointableByIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULeapToolList_GetPointableByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapToolList_eventGetPointableByIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapToolList_GetPointableByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapToolList_eventGetPointableByIndex_Parms, ReturnValue), Z_Construct_UClass_ULeapPointable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapToolList_GetPointableByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapToolList_GetPointableByIndex_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapToolList_GetPointableByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapToolList_GetPointableByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Tool List" },
		{ "Comment", "/**\n\x09* Access a list member by its position in the list.\n\x09*\n\x09* @param\x09Index\x09position in the list.\n\x09* @return The Pointable object at the specified index.\n\x09*/" },
		{ "CompactNodeTitle", "[]" },
		{ "DisplayName", "getPointableById" },
		{ "Keywords", "get pointable by id" },
		{ "ModuleRelativePath", "Public/LeapToolList.h" },
		{ "ToolTip", "Access a list member by its position in the list.\n\n@param        Index   position in the list.\n@return The Pointable object at the specified index." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapToolList_GetPointableByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapToolList, nullptr, "GetPointableByIndex", nullptr, nullptr, sizeof(LeapToolList_eventGetPointableByIndex_Parms), Z_Construct_UFunction_ULeapToolList_GetPointableByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapToolList_GetPointableByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapToolList_GetPointableByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapToolList_GetPointableByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapToolList_GetPointableByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapToolList_GetPointableByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapToolList_IsEmpty_Statics
	{
		struct LeapToolList_eventIsEmpty_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULeapToolList_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LeapToolList_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapToolList_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LeapToolList_eventIsEmpty_Parms), &Z_Construct_UFunction_ULeapToolList_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapToolList_IsEmpty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapToolList_IsEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapToolList_IsEmpty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Tool List" },
		{ "Comment", "/**\n\x09* Reports whether the list is empty.\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "isEmpty" },
		{ "Keywords", "is empty" },
		{ "ModuleRelativePath", "Public/LeapToolList.h" },
		{ "ToolTip", "Reports whether the list is empty." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapToolList_IsEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapToolList, nullptr, "IsEmpty", nullptr, nullptr, sizeof(LeapToolList_eventIsEmpty_Parms), Z_Construct_UFunction_ULeapToolList_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapToolList_IsEmpty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapToolList_IsEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapToolList_IsEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapToolList_IsEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapToolList_IsEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapToolList_Leftmost_Statics
	{
		struct LeapToolList_eventLeftmost_Parms
		{
			ULeapTool* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapToolList_Leftmost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapToolList_eventLeftmost_Parms, ReturnValue), Z_Construct_UClass_ULeapTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapToolList_Leftmost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapToolList_Leftmost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapToolList_Leftmost_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Tool List" },
		{ "Comment", "/**\n\x09* The member of the list that is farthest to the front within the standard Leap Motion\n\x09* frame of reference(i.e has the smallest Y coordinate).\n\x09*\n\x09* @return\x09The leftmost tool, or invalid if list is empty.\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "leftmost" },
		{ "Keywords", "leftmost" },
		{ "ModuleRelativePath", "Public/LeapToolList.h" },
		{ "ToolTip", "The member of the list that is farthest to the front within the standard Leap Motion\nframe of reference(i.e has the smallest Y coordinate).\n\n@return       The leftmost tool, or invalid if list is empty." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapToolList_Leftmost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapToolList, nullptr, "Leftmost", nullptr, nullptr, sizeof(LeapToolList_eventLeftmost_Parms), Z_Construct_UFunction_ULeapToolList_Leftmost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapToolList_Leftmost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapToolList_Leftmost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapToolList_Leftmost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapToolList_Leftmost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapToolList_Leftmost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapToolList_Rightmost_Statics
	{
		struct LeapToolList_eventRightmost_Parms
		{
			ULeapTool* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapToolList_Rightmost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapToolList_eventRightmost_Parms, ReturnValue), Z_Construct_UClass_ULeapTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapToolList_Rightmost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapToolList_Rightmost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapToolList_Rightmost_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Tool List" },
		{ "Comment", "/**\n\x09* The member of the list that is farthest to the front within the standard Leap Motion\n\x09* frame of reference(i.e has the largest Y coordinate).\n\x09*\n\x09* @return\x09The rightmost tool, or invalid if list is empty.\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "rightmost" },
		{ "Keywords", "rightmost" },
		{ "ModuleRelativePath", "Public/LeapToolList.h" },
		{ "ToolTip", "The member of the list that is farthest to the front within the standard Leap Motion\nframe of reference(i.e has the largest Y coordinate).\n\n@return       The rightmost tool, or invalid if list is empty." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapToolList_Rightmost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapToolList, nullptr, "Rightmost", nullptr, nullptr, sizeof(LeapToolList_eventRightmost_Parms), Z_Construct_UFunction_ULeapToolList_Rightmost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapToolList_Rightmost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapToolList_Rightmost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapToolList_Rightmost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapToolList_Rightmost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapToolList_Rightmost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULeapToolList_NoRegister()
	{
		return ULeapToolList::StaticClass();
	}
	struct Z_Construct_UClass_ULeapToolList_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PPointableById_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PPointableById;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PAppendedList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PAppendedList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULeapToolList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULeapToolList_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeapToolList_Append, "Append" }, // 410248434
		{ &Z_Construct_UFunction_ULeapToolList_Count, "Count" }, // 2961319741
		{ &Z_Construct_UFunction_ULeapToolList_Frontmost, "Frontmost" }, // 2685087244
		{ &Z_Construct_UFunction_ULeapToolList_GetPointableByIndex, "GetPointableByIndex" }, // 1459696809
		{ &Z_Construct_UFunction_ULeapToolList_IsEmpty, "IsEmpty" }, // 2280354049
		{ &Z_Construct_UFunction_ULeapToolList_Leftmost, "Leftmost" }, // 1634631975
		{ &Z_Construct_UFunction_ULeapToolList_Rightmost, "Rightmost" }, // 2906512821
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapToolList_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* The ToolList class represents a list of Tool objects.\n*\n* Leap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.ToolList.html\n*/" },
		{ "IncludePath", "LeapToolList.h" },
		{ "ModuleRelativePath", "Public/LeapToolList.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The ToolList class represents a list of Tool objects.\n\nLeap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.ToolList.html" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapToolList_Statics::NewProp_PLeftmost_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapToolList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapToolList_Statics::NewProp_PLeftmost = { "PLeftmost", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapToolList, PLeftmost), Z_Construct_UClass_ULeapTool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapToolList_Statics::NewProp_PLeftmost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapToolList_Statics::NewProp_PLeftmost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapToolList_Statics::NewProp_PRightmost_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapToolList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapToolList_Statics::NewProp_PRightmost = { "PRightmost", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapToolList, PRightmost), Z_Construct_UClass_ULeapTool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapToolList_Statics::NewProp_PRightmost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapToolList_Statics::NewProp_PRightmost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapToolList_Statics::NewProp_PFrontmost_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapToolList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapToolList_Statics::NewProp_PFrontmost = { "PFrontmost", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapToolList, PFrontmost), Z_Construct_UClass_ULeapTool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapToolList_Statics::NewProp_PFrontmost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapToolList_Statics::NewProp_PFrontmost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapToolList_Statics::NewProp_PPointableById_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapToolList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapToolList_Statics::NewProp_PPointableById = { "PPointableById", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapToolList, PPointableById), Z_Construct_UClass_ULeapTool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapToolList_Statics::NewProp_PPointableById_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapToolList_Statics::NewProp_PPointableById_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapToolList_Statics::NewProp_PAppendedList_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapToolList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapToolList_Statics::NewProp_PAppendedList = { "PAppendedList", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapToolList, PAppendedList), Z_Construct_UClass_ULeapToolList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapToolList_Statics::NewProp_PAppendedList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapToolList_Statics::NewProp_PAppendedList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeapToolList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapToolList_Statics::NewProp_PLeftmost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapToolList_Statics::NewProp_PRightmost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapToolList_Statics::NewProp_PFrontmost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapToolList_Statics::NewProp_PPointableById,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapToolList_Statics::NewProp_PAppendedList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeapToolList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeapToolList>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULeapToolList_Statics::ClassParams = {
		&ULeapToolList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULeapToolList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULeapToolList_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULeapToolList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapToolList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeapToolList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULeapToolList_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULeapToolList, 2078213699);
	template<> SIMPLELEAPMOTION_API UClass* StaticClass<ULeapToolList>()
	{
		return ULeapToolList::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULeapToolList(Z_Construct_UClass_ULeapToolList, &ULeapToolList::StaticClass, TEXT("/Script/SimpleLeapMotion"), TEXT("ULeapToolList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeapToolList);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
