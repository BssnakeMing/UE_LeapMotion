// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleLeapMotion/Public/LeapArm.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapArm() {}
// Cross Module References
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapArm_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapArm();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SimpleLeapMotion();
	SIMPLELEAPMOTION_API UEnum* Z_Construct_UEnum_SimpleLeapMotion_ELeapHandType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(ULeapArm::execGetOrientation)
	{
		P_GET_ENUM(ELeapHandType,Z_Param_HandType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetOrientation(ELeapHandType(Z_Param_HandType));
		P_NATIVE_END;
	}
	void ULeapArm::StaticRegisterNativesULeapArm()
	{
		UClass* Class = ULeapArm::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOrientation", &ULeapArm::execGetOrientation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULeapArm_GetOrientation_Statics
	{
		struct LeapArm_eventGetOrientation_Parms
		{
			ELeapHandType HandType;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HandType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HandType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULeapArm_GetOrientation_Statics::NewProp_HandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULeapArm_GetOrientation_Statics::NewProp_HandType = { "HandType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapArm_eventGetOrientation_Parms, HandType), Z_Construct_UEnum_SimpleLeapMotion_ELeapHandType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapArm_GetOrientation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapArm_eventGetOrientation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapArm_GetOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapArm_GetOrientation_Statics::NewProp_HandType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapArm_GetOrientation_Statics::NewProp_HandType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapArm_GetOrientation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapArm_GetOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Arm" },
		{ "Comment", "/**\n\x09* Basis matrix in rotation form for the arm given the hand\n\x09* @param HandType left or right\n\x09* @return Orientation basis\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapArm.h" },
		{ "ToolTip", "Basis matrix in rotation form for the arm given the hand\n@param HandType left or right\n@return Orientation basis" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapArm_GetOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapArm, nullptr, "GetOrientation", nullptr, nullptr, sizeof(LeapArm_eventGetOrientation_Parms), Z_Construct_UFunction_ULeapArm_GetOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapArm_GetOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapArm_GetOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapArm_GetOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapArm_GetOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapArm_GetOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULeapArm_NoRegister()
	{
		return ULeapArm::StaticClass();
	}
	struct Z_Construct_UClass_ULeapArm_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Basis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Basis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElbowPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ElbowPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsValid_MetaData[];
#endif
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WristPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WristPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULeapArm_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULeapArm_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeapArm_GetOrientation, "GetOrientation" }, // 2372685095
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapArm_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* The Arm class represents the forearm.\n*\n* Leap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.Arm.html\n*/" },
		{ "IncludePath", "LeapArm.h" },
		{ "ModuleRelativePath", "Public/LeapArm.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The Arm class represents the forearm.\n\nLeap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.Arm.html" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapArm_Statics::NewProp_Basis_MetaData[] = {
		{ "Category", "Leap Arm" },
		{ "Comment", "/**\n\x09* The orthonormal basis vectors for the Arm bone as a Matrix.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapArm.h" },
		{ "ToolTip", "The orthonormal basis vectors for the Arm bone as a Matrix." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULeapArm_Statics::NewProp_Basis = { "Basis", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapArm, Basis), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UClass_ULeapArm_Statics::NewProp_Basis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapArm_Statics::NewProp_Basis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapArm_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "Leap Arm" },
		{ "Comment", "/**\n\x09* The center of the forearm.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapArm.h" },
		{ "ToolTip", "The center of the forearm." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULeapArm_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapArm, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULeapArm_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapArm_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapArm_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Leap Arm" },
		{ "Comment", "/**\n\x09* The normalized direction in which the arm is pointing (from elbow to wrist).\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapArm.h" },
		{ "ToolTip", "The normalized direction in which the arm is pointing (from elbow to wrist)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULeapArm_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapArm, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULeapArm_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapArm_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapArm_Statics::NewProp_ElbowPosition_MetaData[] = {
		{ "Category", "Leap Arm" },
		{ "Comment", "/**\n\x09* The position of the elbow.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapArm.h" },
		{ "ToolTip", "The position of the elbow." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULeapArm_Statics::NewProp_ElbowPosition = { "ElbowPosition", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapArm, ElbowPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULeapArm_Statics::NewProp_ElbowPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapArm_Statics::NewProp_ElbowPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapArm_Statics::NewProp_IsValid_MetaData[] = {
		{ "Category", "Leap Arm" },
		{ "Comment", "/**\n\x09* Reports whether this is a valid Hand object.\n\x09* @return True, if this Hand object contains valid tracking data.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapArm.h" },
		{ "ToolTip", "Reports whether this is a valid Hand object.\n@return True, if this Hand object contains valid tracking data." },
	};
#endif
	void Z_Construct_UClass_ULeapArm_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((ULeapArm*)Obj)->IsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULeapArm_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULeapArm), &Z_Construct_UClass_ULeapArm_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULeapArm_Statics::NewProp_IsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapArm_Statics::NewProp_IsValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapArm_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "Leap Arm" },
		{ "Comment", "/**\n\x09* The estimated width of the palm when the hand is in a flat position.\n\x09* @return Width\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapArm.h" },
		{ "ToolTip", "The estimated width of the palm when the hand is in a flat position.\n@return Width" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapArm_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapArm, Width), METADATA_PARAMS(Z_Construct_UClass_ULeapArm_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapArm_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapArm_Statics::NewProp_WristPosition_MetaData[] = {
		{ "Category", "Leap Arm" },
		{ "Comment", "/**\n\x09* The position of the wrist of this hand.\n\x09* @return A vector containing the coordinates of the wrist position in centimeters.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapArm.h" },
		{ "ToolTip", "The position of the wrist of this hand.\n@return A vector containing the coordinates of the wrist position in centimeters." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULeapArm_Statics::NewProp_WristPosition = { "WristPosition", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapArm, WristPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULeapArm_Statics::NewProp_WristPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapArm_Statics::NewProp_WristPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeapArm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapArm_Statics::NewProp_Basis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapArm_Statics::NewProp_Center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapArm_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapArm_Statics::NewProp_ElbowPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapArm_Statics::NewProp_IsValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapArm_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapArm_Statics::NewProp_WristPosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeapArm_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeapArm>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULeapArm_Statics::ClassParams = {
		&ULeapArm::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULeapArm_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULeapArm_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULeapArm_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapArm_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeapArm()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULeapArm_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULeapArm, 3155451908);
	template<> SIMPLELEAPMOTION_API UClass* StaticClass<ULeapArm>()
	{
		return ULeapArm::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULeapArm(Z_Construct_UClass_ULeapArm, &ULeapArm::StaticClass, TEXT("/Script/SimpleLeapMotion"), TEXT("ULeapArm"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeapArm);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
