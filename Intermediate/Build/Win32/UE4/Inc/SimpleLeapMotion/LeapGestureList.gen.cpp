// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleLeapMotion/Public/LeapGestureList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapGestureList() {}
// Cross Module References
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapGestureList_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapGestureList();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SimpleLeapMotion();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapGesture_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULeapGestureList::execGetIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeapGesture**)Z_Param__Result=P_THIS->GetIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	void ULeapGestureList::StaticRegisterNativesULeapGestureList()
	{
		UClass* Class = ULeapGestureList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIndex", &ULeapGestureList::execGetIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULeapGestureList_GetIndex_Statics
	{
		struct LeapGestureList_eventGetIndex_Parms
		{
			int32 Index;
			ULeapGesture* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULeapGestureList_GetIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapGestureList_eventGetIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapGestureList_GetIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapGestureList_eventGetIndex_Parms, ReturnValue), Z_Construct_UClass_ULeapGesture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapGestureList_GetIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapGestureList_GetIndex_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapGestureList_GetIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapGestureList_GetIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Gesture List" },
		{ "Comment", "/**\n\x09* Access a list member by its position in the list.\n\x09*\n\x09* @param index\x09The zero-based list position index.\n\x09* @return\x09\x09The Gesture object at the specified index.\n\x09*/" },
		{ "CompactNodeTitle", "[]" },
		{ "DisplayName", "getIndex" },
		{ "Keywords", "get index" },
		{ "ModuleRelativePath", "Public/LeapGestureList.h" },
		{ "ToolTip", "Access a list member by its position in the list.\n\n@param index  The zero-based list position index.\n@return               The Gesture object at the specified index." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapGestureList_GetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapGestureList, nullptr, "GetIndex", nullptr, nullptr, sizeof(LeapGestureList_eventGetIndex_Parms), Z_Construct_UFunction_ULeapGestureList_GetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapGestureList_GetIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapGestureList_GetIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapGestureList_GetIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapGestureList_GetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapGestureList_GetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULeapGestureList_NoRegister()
	{
		return ULeapGestureList::StaticClass();
	}
	struct Z_Construct_UClass_ULeapGestureList_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PGesture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PGesture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULeapGestureList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULeapGestureList_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeapGestureList_GetIndex, "GetIndex" }, // 3495991042
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapGestureList_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* The GestureList class represents a list of Gesture objects.\n*\n* Leap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.GestureList.html\n*/" },
		{ "IncludePath", "LeapGestureList.h" },
		{ "ModuleRelativePath", "Public/LeapGestureList.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The GestureList class represents a list of Gesture objects.\n\nLeap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.GestureList.html" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapGestureList_Statics::NewProp_IsEmpty_MetaData[] = {
		{ "Category", "Leap Gesture List" },
		{ "Comment", "/**\n\x09* Reports whether the list is empty.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapGestureList.h" },
		{ "ToolTip", "Reports whether the list is empty." },
	};
#endif
	void Z_Construct_UClass_ULeapGestureList_Statics::NewProp_IsEmpty_SetBit(void* Obj)
	{
		((ULeapGestureList*)Obj)->IsEmpty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULeapGestureList_Statics::NewProp_IsEmpty = { "IsEmpty", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULeapGestureList), &Z_Construct_UClass_ULeapGestureList_Statics::NewProp_IsEmpty_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULeapGestureList_Statics::NewProp_IsEmpty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapGestureList_Statics::NewProp_IsEmpty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapGestureList_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "Leap Gesture List" },
		{ "Comment", "/**\n\x09* The length of this list.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapGestureList.h" },
		{ "ToolTip", "The length of this list." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULeapGestureList_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapGestureList, Count), METADATA_PARAMS(Z_Construct_UClass_ULeapGestureList_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapGestureList_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapGestureList_Statics::NewProp_PGesture_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapGestureList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapGestureList_Statics::NewProp_PGesture = { "PGesture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapGestureList, PGesture), Z_Construct_UClass_ULeapGesture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeapGestureList_Statics::NewProp_PGesture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapGestureList_Statics::NewProp_PGesture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeapGestureList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapGestureList_Statics::NewProp_IsEmpty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapGestureList_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapGestureList_Statics::NewProp_PGesture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeapGestureList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeapGestureList>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULeapGestureList_Statics::ClassParams = {
		&ULeapGestureList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULeapGestureList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULeapGestureList_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULeapGestureList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapGestureList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeapGestureList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULeapGestureList_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULeapGestureList, 174758298);
	template<> SIMPLELEAPMOTION_API UClass* StaticClass<ULeapGestureList>()
	{
		return ULeapGestureList::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULeapGestureList(Z_Construct_UClass_ULeapGestureList, &ULeapGestureList::StaticClass, TEXT("/Script/SimpleLeapMotion"), TEXT("ULeapGestureList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeapGestureList);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
