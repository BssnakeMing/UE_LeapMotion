// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleLeapMotion/Public/LeapBlueprintFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapBlueprintFunctionLibrary() {}
// Cross Module References
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapBlueprintFunctionLibrary_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SimpleLeapMotion();
// End Cross Module References
	DEFINE_FUNCTION(ULeapBlueprintFunctionLibrary::execGetTimewarpStats)
	{
		P_GET_UBOOL_REF(Z_Param_Out_OutEnabled);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutFactor);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutTimeWarpAmountMs);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULeapBlueprintFunctionLibrary::GetTimewarpStats(Z_Param_Out_OutEnabled,Z_Param_Out_OutFactor,Z_Param_Out_OutTimeWarpAmountMs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapBlueprintFunctionLibrary::execGetHMDFieldOfView)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutHFOVInDegrees);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutVFOVInDegrees);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULeapBlueprintFunctionLibrary::GetHMDFieldOfView(Z_Param_Out_OutHFOVInDegrees,Z_Param_Out_OutVFOVInDegrees);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapBlueprintFunctionLibrary::execEnableTimeWarp)
	{
		P_GET_UBOOL(Z_Param_Enable);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Factor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Tween);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULeapBlueprintFunctionLibrary::EnableTimeWarp(Z_Param_Enable,Z_Param_Factor,Z_Param_Tween);
		P_NATIVE_END;
	}
	void ULeapBlueprintFunctionLibrary::StaticRegisterNativesULeapBlueprintFunctionLibrary()
	{
		UClass* Class = ULeapBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableTimeWarp", &ULeapBlueprintFunctionLibrary::execEnableTimeWarp },
			{ "GetHMDFieldOfView", &ULeapBlueprintFunctionLibrary::execGetHMDFieldOfView },
			{ "GetTimewarpStats", &ULeapBlueprintFunctionLibrary::execGetTimewarpStats },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_EnableTimeWarp_Statics
	{
		struct LeapBlueprintFunctionLibrary_eventEnableTimeWarp_Parms
		{
			bool Enable;
			float Factor;
			float Tween;
		};
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Factor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Tween;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_EnableTimeWarp_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((LeapBlueprintFunctionLibrary_eventEnableTimeWarp_Parms*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_EnableTimeWarp_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LeapBlueprintFunctionLibrary_eventEnableTimeWarp_Parms), &Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_EnableTimeWarp_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_EnableTimeWarp_Statics::NewProp_Factor = { "Factor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventEnableTimeWarp_Parms, Factor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_EnableTimeWarp_Statics::NewProp_Tween = { "Tween", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventEnableTimeWarp_Parms, Tween), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_EnableTimeWarp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_EnableTimeWarp_Statics::NewProp_Enable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_EnableTimeWarp_Statics::NewProp_Factor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_EnableTimeWarp_Statics::NewProp_Tween,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_EnableTimeWarp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Motion Functions" },
		{ "Comment", "/**\n\x09* Enable warping the event driven hand tracking data by the difference in latest Head Mounted Display transform\n\x09* and the transform when the data was sampled.\n\x09*\n\x09* @param True\x09if you wish to enable timewarp. Defaults value is true\n\x09* @param Factor\x09\x09value 0-1.f that the timewarp should apply\n\x09*/" },
		{ "CPP_Default_Enable", "true" },
		{ "CPP_Default_Factor", "1.000000" },
		{ "CPP_Default_Tween", "1.000000" },
		{ "ModuleRelativePath", "Public/LeapBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Enable warping the event driven hand tracking data by the difference in latest Head Mounted Display transform\nand the transform when the data was sampled.\n\n@param True   if you wish to enable timewarp. Defaults value is true\n@param Factor         value 0-1.f that the timewarp should apply" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_EnableTimeWarp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapBlueprintFunctionLibrary, nullptr, "EnableTimeWarp", nullptr, nullptr, sizeof(LeapBlueprintFunctionLibrary_eventEnableTimeWarp_Parms), Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_EnableTimeWarp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_EnableTimeWarp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_EnableTimeWarp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_EnableTimeWarp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_EnableTimeWarp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_EnableTimeWarp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetHMDFieldOfView_Statics
	{
		struct LeapBlueprintFunctionLibrary_eventGetHMDFieldOfView_Parms
		{
			float OutHFOVInDegrees;
			float OutVFOVInDegrees;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutHFOVInDegrees;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutVFOVInDegrees;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetHMDFieldOfView_Statics::NewProp_OutHFOVInDegrees = { "OutHFOVInDegrees", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventGetHMDFieldOfView_Parms, OutHFOVInDegrees), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetHMDFieldOfView_Statics::NewProp_OutVFOVInDegrees = { "OutVFOVInDegrees", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventGetHMDFieldOfView_Parms, OutVFOVInDegrees), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetHMDFieldOfView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetHMDFieldOfView_Statics::NewProp_OutHFOVInDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetHMDFieldOfView_Statics::NewProp_OutVFOVInDegrees,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetHMDFieldOfView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Motion Functions" },
		{ "Comment", "/**\n\x09* Wrapper function for IHeadMountedDisplay::GetFieldOfView for blueprint use\n\x09*\n\x09* @param OutHFOVInDegrees\x09Horizontal field of view in degrees\n\x09* @param OutVFOVInDegrees\x09Vertical field of view in degrees\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Wrapper function for IHeadMountedDisplay::GetFieldOfView for blueprint use\n\n@param OutHFOVInDegrees       Horizontal field of view in degrees\n@param OutVFOVInDegrees       Vertical field of view in degrees" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetHMDFieldOfView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapBlueprintFunctionLibrary, nullptr, "GetHMDFieldOfView", nullptr, nullptr, sizeof(LeapBlueprintFunctionLibrary_eventGetHMDFieldOfView_Parms), Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetHMDFieldOfView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetHMDFieldOfView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetHMDFieldOfView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetHMDFieldOfView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetHMDFieldOfView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetHMDFieldOfView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetTimewarpStats_Statics
	{
		struct LeapBlueprintFunctionLibrary_eventGetTimewarpStats_Parms
		{
			bool OutEnabled;
			float OutFactor;
			float OutTimeWarpAmountMs;
		};
		static void NewProp_OutEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OutEnabled;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutFactor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutTimeWarpAmountMs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetTimewarpStats_Statics::NewProp_OutEnabled_SetBit(void* Obj)
	{
		((LeapBlueprintFunctionLibrary_eventGetTimewarpStats_Parms*)Obj)->OutEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetTimewarpStats_Statics::NewProp_OutEnabled = { "OutEnabled", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LeapBlueprintFunctionLibrary_eventGetTimewarpStats_Parms), &Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetTimewarpStats_Statics::NewProp_OutEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetTimewarpStats_Statics::NewProp_OutFactor = { "OutFactor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventGetTimewarpStats_Parms, OutFactor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetTimewarpStats_Statics::NewProp_OutTimeWarpAmountMs = { "OutTimeWarpAmountMs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventGetTimewarpStats_Parms, OutTimeWarpAmountMs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetTimewarpStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetTimewarpStats_Statics::NewProp_OutEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetTimewarpStats_Statics::NewProp_OutFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetTimewarpStats_Statics::NewProp_OutTimeWarpAmountMs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetTimewarpStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Motion Functions" },
		{ "Comment", "/**\n\x09* Leap time warp Factor useful for adjusting timewarp\n\x09*\n\x09* @param OutFactor\x09\x09\x09\x09value 0-1.f that the timewarp should apply\n\x09* @param OutTimeWarpAmountMs\x09The amount of time the leap motion time warps in ms\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Leap time warp Factor useful for adjusting timewarp\n\n@param OutFactor                              value 0-1.f that the timewarp should apply\n@param OutTimeWarpAmountMs    The amount of time the leap motion time warps in ms" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetTimewarpStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapBlueprintFunctionLibrary, nullptr, "GetTimewarpStats", nullptr, nullptr, sizeof(LeapBlueprintFunctionLibrary_eventGetTimewarpStats_Parms), Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetTimewarpStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetTimewarpStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetTimewarpStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetTimewarpStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetTimewarpStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetTimewarpStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULeapBlueprintFunctionLibrary_NoRegister()
	{
		return ULeapBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_EnableTimeWarp, "EnableTimeWarp" }, // 3685410572
		{ &Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetHMDFieldOfView, "GetHMDFieldOfView" }, // 4037249144
		{ &Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetTimewarpStats, "GetTimewarpStats" }, // 1943070860
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Useful global blueprint functions for Leap Motion\n*/" },
		{ "IncludePath", "LeapBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/LeapBlueprintFunctionLibrary.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Useful global blueprint functions for Leap Motion" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeapBlueprintFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics::ClassParams = {
		&ULeapBlueprintFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeapBlueprintFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULeapBlueprintFunctionLibrary, 2024430723);
	template<> SIMPLELEAPMOTION_API UClass* StaticClass<ULeapBlueprintFunctionLibrary>()
	{
		return ULeapBlueprintFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULeapBlueprintFunctionLibrary(Z_Construct_UClass_ULeapBlueprintFunctionLibrary, &ULeapBlueprintFunctionLibrary::StaticClass, TEXT("/Script/SimpleLeapMotion"), TEXT("ULeapBlueprintFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeapBlueprintFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
