// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleLeapMotion/Public/LeapFingerList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapFingerList() {}
// Cross Module References
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapFingerList_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapFingerList();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SimpleLeapMotion();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapFinger_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULeapFingerList::execRightmost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapFinger**)Z_Param__Result=P_THIS->Rightmost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapFingerList::execGetPointableById)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapFinger**)Z_Param__Result=P_THIS->GetPointableById(Z_Param_Id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapFingerList::execLeftmost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapFinger**)Z_Param__Result=P_THIS->Leftmost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapFingerList::execFrontmost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapFinger**)Z_Param__Result=P_THIS->Frontmost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapFingerList::execExtended)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapFingerList**)Z_Param__Result=P_THIS->Extended();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapFingerList::execAppend)
	{
		P_GET_OBJECT(ULeapFingerList,Z_Param_List);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapFingerList**)Z_Param__Result=P_THIS->Append(Z_Param_List);
		P_NATIVE_END;
	}
	void ULeapFingerList::StaticRegisterNativesULeapFingerList()
	{
		UClass* Class = ULeapFingerList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Append", &ULeapFingerList::execAppend },
			{ "Extended", &ULeapFingerList::execExtended },
			{ "Frontmost", &ULeapFingerList::execFrontmost },
			{ "GetPointableById", &ULeapFingerList::execGetPointableById },
			{ "Leftmost", &ULeapFingerList::execLeftmost },
			{ "Rightmost", &ULeapFingerList::execRightmost },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULeapFingerList_Append_Statics
	{
		struct LeapFingerList_eventAppend_Parms
		{
			const ULeapFingerList* List;
			ULeapFingerList* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapFingerList_Append_Statics::NewProp_List_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapFingerList_Append_Statics::NewProp_List = { "List", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFingerList_eventAppend_Parms, List), Z_Construct_UClass_ULeapFingerList_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULeapFingerList_Append_Statics::NewProp_List_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFingerList_Append_Statics::NewProp_List_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapFingerList_Append_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFingerList_eventAppend_Parms, ReturnValue), Z_Construct_UClass_ULeapFingerList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapFingerList_Append_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFingerList_Append_Statics::NewProp_List,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFingerList_Append_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapFingerList_Append_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Finger List" },
		{ "Comment", "/**\n\x09* Appends the members of the specified FingerList to this FingerList.\n\x09*\n\x09* @param List - A FingerList object containing Finger objects to append to the end of this FingerList.\n\x09* @return the resultant list\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "append" },
		{ "Keywords", "append" },
		{ "ModuleRelativePath", "Public/LeapFingerList.h" },
		{ "ToolTip", "Appends the members of the specified FingerList to this FingerList.\n\n@param List - A FingerList object containing Finger objects to append to the end of this FingerList.\n@return the resultant list" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapFingerList_Append_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapFingerList, nullptr, "Append", nullptr, nullptr, sizeof(LeapFingerList_eventAppend_Parms), Z_Construct_UFunction_ULeapFingerList_Append_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFingerList_Append_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapFingerList_Append_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFingerList_Append_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapFingerList_Append()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapFingerList_Append_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapFingerList_Extended_Statics
	{
		struct LeapFingerList_eventExtended_Parms
		{
			ULeapFingerList* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapFingerList_Extended_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFingerList_eventExtended_Parms, ReturnValue), Z_Construct_UClass_ULeapFingerList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapFingerList_Extended_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFingerList_Extended_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapFingerList_Extended_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Finger List" },
		{ "Comment", "/**\n\x09* Returns a new list containing those fingers in the current list that are extended.\n\x09*\n\x09* @return The list of extended fingers from the current list.\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "extended" },
		{ "Keywords", "extended" },
		{ "ModuleRelativePath", "Public/LeapFingerList.h" },
		{ "ToolTip", "Returns a new list containing those fingers in the current list that are extended.\n\n@return The list of extended fingers from the current list." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapFingerList_Extended_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapFingerList, nullptr, "Extended", nullptr, nullptr, sizeof(LeapFingerList_eventExtended_Parms), Z_Construct_UFunction_ULeapFingerList_Extended_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFingerList_Extended_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapFingerList_Extended_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFingerList_Extended_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapFingerList_Extended()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapFingerList_Extended_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapFingerList_Frontmost_Statics
	{
		struct LeapFingerList_eventFrontmost_Parms
		{
			ULeapFinger* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapFingerList_Frontmost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFingerList_eventFrontmost_Parms, ReturnValue), Z_Construct_UClass_ULeapFinger_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapFingerList_Frontmost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFingerList_Frontmost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapFingerList_Frontmost_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Finger List" },
		{ "Comment", "/**\n\x09* The member of the list that is farthest to the front within the standard Leap Motion frame of reference.\n\x09*\n\x09* @return The frontmost finger, or invalid if list is empty.\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "frontmost" },
		{ "Keywords", "frontmost" },
		{ "ModuleRelativePath", "Public/LeapFingerList.h" },
		{ "ToolTip", "The member of the list that is farthest to the front within the standard Leap Motion frame of reference.\n\n@return The frontmost finger, or invalid if list is empty." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapFingerList_Frontmost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapFingerList, nullptr, "Frontmost", nullptr, nullptr, sizeof(LeapFingerList_eventFrontmost_Parms), Z_Construct_UFunction_ULeapFingerList_Frontmost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFingerList_Frontmost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapFingerList_Frontmost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFingerList_Frontmost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapFingerList_Frontmost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapFingerList_Frontmost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapFingerList_GetPointableById_Statics
	{
		struct LeapFingerList_eventGetPointableById_Parms
		{
			int32 Id;
			ULeapFinger* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULeapFingerList_GetPointableById_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFingerList_eventGetPointableById_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapFingerList_GetPointableById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFingerList_eventGetPointableById_Parms, ReturnValue), Z_Construct_UClass_ULeapFinger_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapFingerList_GetPointableById_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFingerList_GetPointableById_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFingerList_GetPointableById_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapFingerList_GetPointableById_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Finger List" },
		{ "Comment", "/**\n\x09* Access a list member by its position in the list.\n\x09*\n\x09* @return The Finger object at the specified index.\n\x09*/" },
		{ "CompactNodeTitle", "[]" },
		{ "DisplayName", "getPointableById" },
		{ "Keywords", "get pointable by id" },
		{ "ModuleRelativePath", "Public/LeapFingerList.h" },
		{ "ToolTip", "Access a list member by its position in the list.\n\n@return The Finger object at the specified index." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapFingerList_GetPointableById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapFingerList, nullptr, "GetPointableById", nullptr, nullptr, sizeof(LeapFingerList_eventGetPointableById_Parms), Z_Construct_UFunction_ULeapFingerList_GetPointableById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFingerList_GetPointableById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapFingerList_GetPointableById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFingerList_GetPointableById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapFingerList_GetPointableById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapFingerList_GetPointableById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapFingerList_Leftmost_Statics
	{
		struct LeapFingerList_eventLeftmost_Parms
		{
			ULeapFinger* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapFingerList_Leftmost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFingerList_eventLeftmost_Parms, ReturnValue), Z_Construct_UClass_ULeapFinger_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapFingerList_Leftmost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFingerList_Leftmost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapFingerList_Leftmost_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Finger List" },
		{ "Comment", "/**\n\x09* The member of the list that is farthest to the left within the standard Leap Motion frame of reference \n\x09*\n\x09* @return The leftmost finger, or invalid if list is empty.\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "leftmost" },
		{ "Keywords", "leftmost" },
		{ "ModuleRelativePath", "Public/LeapFingerList.h" },
		{ "ToolTip", "The member of the list that is farthest to the left within the standard Leap Motion frame of reference\n\n@return The leftmost finger, or invalid if list is empty." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapFingerList_Leftmost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapFingerList, nullptr, "Leftmost", nullptr, nullptr, sizeof(LeapFingerList_eventLeftmost_Parms), Z_Construct_UFunction_ULeapFingerList_Leftmost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFingerList_Leftmost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapFingerList_Leftmost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFingerList_Leftmost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapFingerList_Leftmost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapFingerList_Leftmost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapFingerList_Rightmost_Statics
	{
		struct LeapFingerList_eventRightmost_Parms
		{
			ULeapFinger* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapFingerList_Rightmost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapFingerList_eventRightmost_Parms, ReturnValue), Z_Construct_UClass_ULeapFinger_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapFingerList_Rightmost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapFingerList_Rightmost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapFingerList_Rightmost_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Finger List" },
		{ "Comment", "/**\n\x09* The member of the list that is farthest to the right within the standard Leap Motion frame of reference\n\x09*\n\x09* @return The rightmost finger, or invalid if list is empty.\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "rightmost" },
		{ "Keywords", "rightmost" },
		{ "ModuleRelativePath", "Public/LeapFingerList.h" },
		{ "ToolTip", "The member of the list that is farthest to the right within the standard Leap Motion frame of reference\n\n@return The rightmost finger, or invalid if list is empty." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapFingerList_Rightmost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapFingerList, nullptr, "Rightmost", nullptr, nullptr, sizeof(LeapFingerList_eventRightmost_Parms), Z_Construct_UFunction_ULeapFingerList_Rightmost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFingerList_Rightmost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapFingerList_Rightmost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapFingerList_Rightmost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapFingerList_Rightmost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapFingerList_Rightmost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULeapFingerList_NoRegister()
	{
		return ULeapFingerList::StaticClass();
	}
	struct Z_Construct_UClass_ULeapFingerList_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PPointableById_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PPointableById;
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
	UObject* (*const Z_Construct_UClass_ULeapFingerList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULeapFingerList_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeapFingerList_Append, "Append" }, // 472666188
		{ &Z_Construct_UFunction_ULeapFingerList_Extended, "Extended" }, // 846966430
		{ &Z_Construct_UFunction_ULeapFingerList_Frontmost, "Frontmost" }, // 75968657
		{ &Z_Construct_UFunction_ULeapFingerList_GetPointableById, "GetPointableById" }, // 1849808704
		{ &Z_Construct_UFunction_ULeapFingerList_Leftmost, "Leftmost" }, // 4261947530
		{ &Z_Construct_UFunction_ULeapFingerList_Rightmost, "Rightmost" }, // 1045027452
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapFingerList_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* The FingerList class represents a list of Finger objects.\n*\n* Leap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.FingerList.html\n*/" },
		{ "IncludePath", "LeapFingerList.h" },
		{ "ModuleRelativePath", "Public/LeapFingerList.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The FingerList class represents a list of Finger objects.\n\nLeap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.FingerList.html" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapFingerList_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "Leap Finger List" },
		{ "Comment", "/**\n\x09* Number of fingers in this list.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapFingerList.h" },
		{ "ToolTip", "Number of fingers in this list." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULeapFingerList_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapFingerList, Count), METADATA_PARAMS(Z_Construct_UClass_ULeapFingerList_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapFingerList_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapFingerList_Statics::NewProp_IsEmpty_MetaData[] = {
		{ "Category", "Leap Finger List" },
		{ "ModuleRelativePath", "Public/LeapFingerList.h" },
	};
#endif
	void Z_Construct_UClass_ULeapFingerList_Statics::NewProp_IsEmpty_SetBit(void* Obj)
	{
		((ULeapFingerList*)Obj)->IsEmpty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULeapFingerList_Statics::NewProp_IsEmpty = { "IsEmpty", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULeapFingerList), &Z_Construct_UClass_ULeapFingerList_Statics::NewProp_IsEmpty_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULeapFingerList_Statics::NewProp_IsEmpty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapFingerList_Statics::NewProp_IsEmpty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapFingerList_Statics::NewProp_PFrontmost_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapFingerList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapFingerList_Statics::NewProp_PFrontmost = { "PFrontmost", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapFingerList, PFrontmost), Z_Construct_UClass_ULeapFinger_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapFingerList_Statics::NewProp_PFrontmost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapFingerList_Statics::NewProp_PFrontmost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapFingerList_Statics::NewProp_PLeftmost_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapFingerList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapFingerList_Statics::NewProp_PLeftmost = { "PLeftmost", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapFingerList, PLeftmost), Z_Construct_UClass_ULeapFinger_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapFingerList_Statics::NewProp_PLeftmost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapFingerList_Statics::NewProp_PLeftmost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapFingerList_Statics::NewProp_PRightmost_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapFingerList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapFingerList_Statics::NewProp_PRightmost = { "PRightmost", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapFingerList, PRightmost), Z_Construct_UClass_ULeapFinger_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapFingerList_Statics::NewProp_PRightmost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapFingerList_Statics::NewProp_PRightmost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapFingerList_Statics::NewProp_PPointableById_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapFingerList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapFingerList_Statics::NewProp_PPointableById = { "PPointableById", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapFingerList, PPointableById), Z_Construct_UClass_ULeapFinger_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapFingerList_Statics::NewProp_PPointableById_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapFingerList_Statics::NewProp_PPointableById_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapFingerList_Statics::NewProp_PAppendedList_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapFingerList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapFingerList_Statics::NewProp_PAppendedList = { "PAppendedList", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapFingerList, PAppendedList), Z_Construct_UClass_ULeapFingerList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapFingerList_Statics::NewProp_PAppendedList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapFingerList_Statics::NewProp_PAppendedList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapFingerList_Statics::NewProp_PExtendedList_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapFingerList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapFingerList_Statics::NewProp_PExtendedList = { "PExtendedList", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapFingerList, PExtendedList), Z_Construct_UClass_ULeapFingerList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapFingerList_Statics::NewProp_PExtendedList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapFingerList_Statics::NewProp_PExtendedList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeapFingerList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapFingerList_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapFingerList_Statics::NewProp_IsEmpty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapFingerList_Statics::NewProp_PFrontmost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapFingerList_Statics::NewProp_PLeftmost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapFingerList_Statics::NewProp_PRightmost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapFingerList_Statics::NewProp_PPointableById,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapFingerList_Statics::NewProp_PAppendedList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapFingerList_Statics::NewProp_PExtendedList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeapFingerList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeapFingerList>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULeapFingerList_Statics::ClassParams = {
		&ULeapFingerList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULeapFingerList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULeapFingerList_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULeapFingerList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapFingerList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeapFingerList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULeapFingerList_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULeapFingerList, 1047486691);
	template<> SIMPLELEAPMOTION_API UClass* StaticClass<ULeapFingerList>()
	{
		return ULeapFingerList::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULeapFingerList(Z_Construct_UClass_ULeapFingerList, &ULeapFingerList::StaticClass, TEXT("/Script/SimpleLeapMotion"), TEXT("ULeapFingerList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeapFingerList);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
