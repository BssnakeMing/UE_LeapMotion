// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleLeapMotion/Public/LeapBone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapBone() {}
// Cross Module References
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapBone_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapBone();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SimpleLeapMotion();
	SIMPLELEAPMOTION_API UEnum* Z_Construct_UEnum_SimpleLeapMotion_ELeapHandType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SIMPLELEAPMOTION_API UEnum* Z_Construct_UEnum_SimpleLeapMotion_ELeapBoneType();
// End Cross Module References
	DEFINE_FUNCTION(ULeapBone::execEqual)
	{
		P_GET_OBJECT(ULeapBone,Z_Param_other);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Equal(Z_Param_other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapBone::execDifferent)
	{
		P_GET_OBJECT(ULeapBone,Z_Param_other);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Different(Z_Param_other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapBone::execGetOrientation)
	{
		P_GET_ENUM(ELeapHandType,Z_Param_HandType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetOrientation(ELeapHandType(Z_Param_HandType));
		P_NATIVE_END;
	}
	void ULeapBone::StaticRegisterNativesULeapBone()
	{
		UClass* Class = ULeapBone::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Different", &ULeapBone::execDifferent },
			{ "Equal", &ULeapBone::execEqual },
			{ "GetOrientation", &ULeapBone::execGetOrientation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULeapBone_Different_Statics
	{
		struct LeapBone_eventDifferent_Parms
		{
			const ULeapBone* other;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_other_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapBone_Different_Statics::NewProp_other_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapBone_Different_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapBone_eventDifferent_Parms, other), Z_Construct_UClass_ULeapBone_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULeapBone_Different_Statics::NewProp_other_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBone_Different_Statics::NewProp_other_MetaData)) };
	void Z_Construct_UFunction_ULeapBone_Different_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LeapBone_eventDifferent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapBone_Different_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LeapBone_eventDifferent_Parms), &Z_Construct_UFunction_ULeapBone_Different_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapBone_Different_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBone_Different_Statics::NewProp_other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBone_Different_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapBone_Different_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Bone" },
		{ "Comment", "/**\n\x09* Compare Bone object inequality.\n\x09*\n\x09* @return False if and only if both Bone objects represent the exact same physical bone in the same frame and both Bone objects are valid.\n\x09*/" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "different" },
		{ "Keywords", "different operator" },
		{ "ModuleRelativePath", "Public/LeapBone.h" },
		{ "ToolTip", "Compare Bone object inequality.\n\n@return False if and only if both Bone objects represent the exact same physical bone in the same frame and both Bone objects are valid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapBone_Different_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapBone, nullptr, "Different", nullptr, nullptr, sizeof(LeapBone_eventDifferent_Parms), Z_Construct_UFunction_ULeapBone_Different_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBone_Different_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapBone_Different_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBone_Different_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapBone_Different()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapBone_Different_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapBone_Equal_Statics
	{
		struct LeapBone_eventEqual_Parms
		{
			const ULeapBone* other;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_other_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapBone_Equal_Statics::NewProp_other_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapBone_Equal_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapBone_eventEqual_Parms, other), Z_Construct_UClass_ULeapBone_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULeapBone_Equal_Statics::NewProp_other_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBone_Equal_Statics::NewProp_other_MetaData)) };
	void Z_Construct_UFunction_ULeapBone_Equal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LeapBone_eventEqual_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapBone_Equal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LeapBone_eventEqual_Parms), &Z_Construct_UFunction_ULeapBone_Equal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapBone_Equal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBone_Equal_Statics::NewProp_other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBone_Equal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapBone_Equal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Bone" },
		{ "Comment", "/**\n\x09* Compare Bone object equality.\n\x09*\n\x09* @return True if and only if both Bone objects represent the exact same physical bone in the same frame and both Bone objects are valid.\n\x09*/" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "equal" },
		{ "Keywords", "equal operator" },
		{ "ModuleRelativePath", "Public/LeapBone.h" },
		{ "ToolTip", "Compare Bone object equality.\n\n@return True if and only if both Bone objects represent the exact same physical bone in the same frame and both Bone objects are valid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapBone_Equal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapBone, nullptr, "Equal", nullptr, nullptr, sizeof(LeapBone_eventEqual_Parms), Z_Construct_UFunction_ULeapBone_Equal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBone_Equal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapBone_Equal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBone_Equal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapBone_Equal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapBone_Equal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapBone_GetOrientation_Statics
	{
		struct LeapBone_eventGetOrientation_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULeapBone_GetOrientation_Statics::NewProp_HandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULeapBone_GetOrientation_Statics::NewProp_HandType = { "HandType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapBone_eventGetOrientation_Parms, HandType), Z_Construct_UEnum_SimpleLeapMotion_ELeapHandType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapBone_GetOrientation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapBone_eventGetOrientation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapBone_GetOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBone_GetOrientation_Statics::NewProp_HandType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBone_GetOrientation_Statics::NewProp_HandType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBone_GetOrientation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapBone_GetOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Bone" },
		{ "Comment", "/**\n\x09* Convenience method, requires knowledge of the hand this bone belongs to in order to \n\x09* give a correct orientation (left hand basis is different from right).\n\x09*\n\x09* @param HandType left or right\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapBone.h" },
		{ "ToolTip", "Convenience method, requires knowledge of the hand this bone belongs to in order to\ngive a correct orientation (left hand basis is different from right).\n\n@param HandType left or right" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapBone_GetOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapBone, nullptr, "GetOrientation", nullptr, nullptr, sizeof(LeapBone_eventGetOrientation_Parms), Z_Construct_UFunction_ULeapBone_GetOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBone_GetOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapBone_GetOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBone_GetOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapBone_GetOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapBone_GetOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULeapBone_NoRegister()
	{
		return ULeapBone::StaticClass();
	}
	struct Z_Construct_UClass_ULeapBone_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsValid_MetaData[];
#endif
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextJoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NextJoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevJoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrevJoint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULeapBone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULeapBone_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeapBone_Different, "Different" }, // 766412092
		{ &Z_Construct_UFunction_ULeapBone_Equal, "Equal" }, // 3373188108
		{ &Z_Construct_UFunction_ULeapBone_GetOrientation, "GetOrientation" }, // 3997997952
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapBone_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* The Bone class represents a tracked bone.\n* All fingers contain 4 bones that make up the anatomy of the finger. \n* Get valid Bone objects from a Finger object.\n*\n* Leap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.Bone.html\n*/" },
		{ "IncludePath", "LeapBone.h" },
		{ "ModuleRelativePath", "Public/LeapBone.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The Bone class represents a tracked bone.\nAll fingers contain 4 bones that make up the anatomy of the finger.\nGet valid Bone objects from a Finger object.\n\nLeap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.Bone.html" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapBone_Statics::NewProp_Basis_MetaData[] = {
		{ "Category", "Leap Bone" },
		{ "Comment", "/**\n\x09* The orthonormal basis vectors for this Bone as a Matrix.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapBone.h" },
		{ "ToolTip", "The orthonormal basis vectors for this Bone as a Matrix." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULeapBone_Statics::NewProp_Basis = { "Basis", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapBone, Basis), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UClass_ULeapBone_Statics::NewProp_Basis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapBone_Statics::NewProp_Basis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapBone_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "Leap Bone" },
		{ "Comment", "/**\n\x09* The midpoint of the bone.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapBone.h" },
		{ "ToolTip", "The midpoint of the bone." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULeapBone_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapBone, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULeapBone_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapBone_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapBone_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Leap Bone" },
		{ "Comment", "/**\n\x09* The normalized direction of the bone from base to tip.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapBone.h" },
		{ "ToolTip", "The normalized direction of the bone from base to tip." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULeapBone_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapBone, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULeapBone_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapBone_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapBone_Statics::NewProp_IsValid_MetaData[] = {
		{ "Category", "Leap Bone" },
		{ "Comment", "/**\n\x09* Reports whether this is a valid Bone object.\n\x09* @return True, if this Bone object contains valid tracking data.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapBone.h" },
		{ "ToolTip", "Reports whether this is a valid Bone object.\n@return True, if this Bone object contains valid tracking data." },
	};
#endif
	void Z_Construct_UClass_ULeapBone_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((ULeapBone*)Obj)->IsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULeapBone_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULeapBone), &Z_Construct_UClass_ULeapBone_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULeapBone_Statics::NewProp_IsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapBone_Statics::NewProp_IsValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapBone_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "Leap Bone" },
		{ "Comment", "/**\n\x09* The estimated length of the bone in centimeters.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapBone.h" },
		{ "ToolTip", "The estimated length of the bone in centimeters." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapBone_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapBone, Length), METADATA_PARAMS(Z_Construct_UClass_ULeapBone_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapBone_Statics::NewProp_Length_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapBone_Statics::NewProp_NextJoint_MetaData[] = {
		{ "Category", "Leap Bone" },
		{ "Comment", "/**\n\x09* The end of the bone, closest to the finger tip.\n    * In anatomical terms, this is the distal end of the bone.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapBone.h" },
		{ "ToolTip", "The end of the bone, closest to the finger tip.\nIn anatomical terms, this is the distal end of the bone." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULeapBone_Statics::NewProp_NextJoint = { "NextJoint", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapBone, NextJoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULeapBone_Statics::NewProp_NextJoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapBone_Statics::NewProp_NextJoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapBone_Statics::NewProp_PrevJoint_MetaData[] = {
		{ "Category", "Leap Bone" },
		{ "Comment", "/**\n\x09* The base of the bone, closest to the wrist.\n\x09* In anatomical terms, this is the proximal end of the bone.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapBone.h" },
		{ "ToolTip", "The base of the bone, closest to the wrist.\nIn anatomical terms, this is the proximal end of the bone." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULeapBone_Statics::NewProp_PrevJoint = { "PrevJoint", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapBone, PrevJoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULeapBone_Statics::NewProp_PrevJoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapBone_Statics::NewProp_PrevJoint_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULeapBone_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapBone_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Leap Bone" },
		{ "Comment", "/**\n\x09* The name of this bone.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapBone.h" },
		{ "ToolTip", "The name of this bone." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULeapBone_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapBone, Type), Z_Construct_UEnum_SimpleLeapMotion_ELeapBoneType, METADATA_PARAMS(Z_Construct_UClass_ULeapBone_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapBone_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapBone_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "Leap Bone" },
		{ "Comment", "/**\n\x09* The average width of the flesh around the bone in centimeters.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapBone.h" },
		{ "ToolTip", "The average width of the flesh around the bone in centimeters." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapBone_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapBone, Width), METADATA_PARAMS(Z_Construct_UClass_ULeapBone_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapBone_Statics::NewProp_Width_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeapBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapBone_Statics::NewProp_Basis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapBone_Statics::NewProp_Center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapBone_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapBone_Statics::NewProp_IsValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapBone_Statics::NewProp_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapBone_Statics::NewProp_NextJoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapBone_Statics::NewProp_PrevJoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapBone_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapBone_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapBone_Statics::NewProp_Width,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeapBone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeapBone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULeapBone_Statics::ClassParams = {
		&ULeapBone::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULeapBone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULeapBone_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULeapBone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapBone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeapBone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULeapBone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULeapBone, 2556741444);
	template<> SIMPLELEAPMOTION_API UClass* StaticClass<ULeapBone>()
	{
		return ULeapBone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULeapBone(Z_Construct_UClass_ULeapBone, &ULeapBone::StaticClass, TEXT("/Script/SimpleLeapMotion"), TEXT("ULeapBone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeapBone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
