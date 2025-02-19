// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleLeapMotion/Public/AnimBody/AnimBone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBone() {}
// Cross Module References
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_UAnimBone_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_UAnimBone();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SimpleLeapMotion();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UAnimBone::execChangeBasis)
	{
		P_GET_STRUCT(FRotator,Z_Param_PreBase);
		P_GET_STRUCT(FRotator,Z_Param_PostBase);
		P_GET_UBOOL(Z_Param_AdjustVectors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeBasis(Z_Param_PreBase,Z_Param_PostBase,Z_Param_AdjustVectors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimBone::execTransformBone)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ByTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TransformBone(Z_Param_Out_ByTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimBone::execTranslateBone)
	{
		P_GET_STRUCT(FVector,Z_Param_Shift);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TranslateBone(Z_Param_Shift);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimBone::execGetTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimBone::execSetFromTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFromTransform(Z_Param_Out_Transform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimBone::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_Enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_Enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimBone::execEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Enabled();
		P_NATIVE_END;
	}
	void UAnimBone::StaticRegisterNativesUAnimBone()
	{
		UClass* Class = UAnimBone::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeBasis", &UAnimBone::execChangeBasis },
			{ "Enabled", &UAnimBone::execEnabled },
			{ "GetTransform", &UAnimBone::execGetTransform },
			{ "SetEnabled", &UAnimBone::execSetEnabled },
			{ "SetFromTransform", &UAnimBone::execSetFromTransform },
			{ "TransformBone", &UAnimBone::execTransformBone },
			{ "TranslateBone", &UAnimBone::execTranslateBone },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimBone_ChangeBasis_Statics
	{
		struct AnimBone_eventChangeBasis_Parms
		{
			FRotator PreBase;
			FRotator PostBase;
			bool AdjustVectors;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreBase;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostBase;
		static void NewProp_AdjustVectors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AdjustVectors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimBone_ChangeBasis_Statics::NewProp_PreBase = { "PreBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimBone_eventChangeBasis_Parms, PreBase), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimBone_ChangeBasis_Statics::NewProp_PostBase = { "PostBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimBone_eventChangeBasis_Parms, PostBase), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimBone_ChangeBasis_Statics::NewProp_AdjustVectors_SetBit(void* Obj)
	{
		((AnimBone_eventChangeBasis_Parms*)Obj)->AdjustVectors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimBone_ChangeBasis_Statics::NewProp_AdjustVectors = { "AdjustVectors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimBone_eventChangeBasis_Parms), &Z_Construct_UFunction_UAnimBone_ChangeBasis_Statics::NewProp_AdjustVectors_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimBone_ChangeBasis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimBone_ChangeBasis_Statics::NewProp_PreBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimBone_ChangeBasis_Statics::NewProp_PostBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimBone_ChangeBasis_Statics::NewProp_AdjustVectors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimBone_ChangeBasis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anim Bone" },
		{ "Comment", "/**\n\x09* Changes the Basis by rotations sets. Used for rotating from XForward to YForward defaults\n\x09* in animation.\n\x09* \xe9\x80\x9a\xe8\xbf\x87\xe6\x97\x8b\xe8\xbd\xac\xe9\x9b\x86\xe5\x90\x88\xe6\x9b\xb4\xe6\x94\xb9\xe5\x9f\xba\xe5\x87\x86\xe3\x80\x82\xe7\x94\xa8\xe4\xba\x8e\xe5\x9c\xa8\xe5\x8a\xa8\xe7\x94\xbb\xe4\xb8\xad\xe5\xb0\x86\xe9\xbb\x98\xe8\xae\xa4\xe5\x80\xbc\xe4\xbb\x8e XForward \xe6\x97\x8b\xe8\xbd\xac\xe5\x88\xb0 YForward\xe3\x80\x82\n\x09*\n\x09* @param  PreBase\x09\x09""Basis offset affecting input\n\x09* @param  PostBase\x09\x09""Fixed offset not affecting input\n\x09* @param  AdjustVectors Whether the basis should affect vectors or just orientation\n\x09*/" },
		{ "CPP_Default_AdjustVectors", "true" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimBone.h" },
		{ "ToolTip", "Changes the Basis by rotations sets. Used for rotating from XForward to YForward defaults\nin animation.\n\xe9\x80\x9a\xe8\xbf\x87\xe6\x97\x8b\xe8\xbd\xac\xe9\x9b\x86\xe5\x90\x88\xe6\x9b\xb4\xe6\x94\xb9\xe5\x9f\xba\xe5\x87\x86\xe3\x80\x82\xe7\x94\xa8\xe4\xba\x8e\xe5\x9c\xa8\xe5\x8a\xa8\xe7\x94\xbb\xe4\xb8\xad\xe5\xb0\x86\xe9\xbb\x98\xe8\xae\xa4\xe5\x80\xbc\xe4\xbb\x8e XForward \xe6\x97\x8b\xe8\xbd\xac\xe5\x88\xb0 YForward\xe3\x80\x82\n\n@param  PreBase               Basis offset affecting input\n@param  PostBase              Fixed offset not affecting input\n@param  AdjustVectors Whether the basis should affect vectors or just orientation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimBone_ChangeBasis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimBone, nullptr, "ChangeBasis", nullptr, nullptr, sizeof(AnimBone_eventChangeBasis_Parms), Z_Construct_UFunction_UAnimBone_ChangeBasis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimBone_ChangeBasis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimBone_ChangeBasis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimBone_ChangeBasis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimBone_ChangeBasis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimBone_ChangeBasis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimBone_Enabled_Statics
	{
		struct AnimBone_eventEnabled_Parms
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
	void Z_Construct_UFunction_UAnimBone_Enabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimBone_eventEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimBone_Enabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimBone_eventEnabled_Parms), &Z_Construct_UFunction_UAnimBone_Enabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimBone_Enabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimBone_Enabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimBone_Enabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anim Bone" },
		{ "Comment", "/**\n\x09* Check whether alpha blend is 1.f\n\x09*\n\x09* @return  True if alpha is 1.f\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimBone.h" },
		{ "ToolTip", "Check whether alpha blend is 1.f\n\n@return  True if alpha is 1.f" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimBone_Enabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimBone, nullptr, "Enabled", nullptr, nullptr, sizeof(AnimBone_eventEnabled_Parms), Z_Construct_UFunction_UAnimBone_Enabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimBone_Enabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimBone_Enabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimBone_Enabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimBone_Enabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimBone_Enabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimBone_GetTransform_Statics
	{
		struct AnimBone_eventGetTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimBone_GetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimBone_eventGetTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimBone_GetTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimBone_GetTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimBone_GetTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anim Bone" },
		{ "Comment", "/**\n\x09* Transform from raw values\n\x09* \xe8\x8e\xb7\xe5\x8f\x96\xe5\x8e\x9f\xe5\xa7\x8b\xe5\x8f\x98\xe6\x8d\xa2\n\x09*\n\x09* \x09* @return Transform\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimBone.h" },
		{ "ToolTip", "Transform from raw values\n\xe8\x8e\xb7\xe5\x8f\x96\xe5\x8e\x9f\xe5\xa7\x8b\xe5\x8f\x98\xe6\x8d\xa2\n\n      * @return Transform" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimBone_GetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimBone, nullptr, "GetTransform", nullptr, nullptr, sizeof(AnimBone_eventGetTransform_Parms), Z_Construct_UFunction_UAnimBone_GetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimBone_GetTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimBone_GetTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimBone_GetTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimBone_GetTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimBone_GetTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimBone_SetEnabled_Statics
	{
		struct AnimBone_eventSetEnabled_Parms
		{
			bool Enable;
		};
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimBone_SetEnabled_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((AnimBone_eventSetEnabled_Parms*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimBone_SetEnabled_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimBone_eventSetEnabled_Parms), &Z_Construct_UFunction_UAnimBone_SetEnabled_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimBone_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimBone_SetEnabled_Statics::NewProp_Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimBone_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anim Bone" },
		{ "Comment", "/**\n\x09* Set enabled state for animation query, Alpha = 1.f\n\x09*\n\x09* @param  Enable default to true\n\x09*/" },
		{ "CPP_Default_Enable", "true" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimBone.h" },
		{ "ToolTip", "Set enabled state for animation query, Alpha = 1.f\n\n@param  Enable default to true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimBone_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimBone, nullptr, "SetEnabled", nullptr, nullptr, sizeof(AnimBone_eventSetEnabled_Parms), Z_Construct_UFunction_UAnimBone_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimBone_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimBone_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimBone_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimBone_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimBone_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimBone_SetFromTransform_Statics
	{
		struct AnimBone_eventSetFromTransform_Parms
		{
			FTransform Transform;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimBone_SetFromTransform_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimBone_SetFromTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimBone_eventSetFromTransform_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UAnimBone_SetFromTransform_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimBone_SetFromTransform_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimBone_SetFromTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimBone_SetFromTransform_Statics::NewProp_Transform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimBone_SetFromTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anim Bone" },
		{ "Comment", "/**\n\x09* Sets raw values from transform\n\x09* \xe8\xae\xbe\xe7\xbd\xae\xe9\xaa\xa8\xe9\xaa\xbc\xe5\x8e\x9f\xe5\xa7\x8b\xe5\x8f\x98\xe6\x8d\xa2\n\x09*\n\x09* @param  Transform\x09\x09Transform\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimBone.h" },
		{ "ToolTip", "Sets raw values from transform\n\xe8\xae\xbe\xe7\xbd\xae\xe9\xaa\xa8\xe9\xaa\xbc\xe5\x8e\x9f\xe5\xa7\x8b\xe5\x8f\x98\xe6\x8d\xa2\n\n@param  Transform             Transform" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimBone_SetFromTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimBone, nullptr, "SetFromTransform", nullptr, nullptr, sizeof(AnimBone_eventSetFromTransform_Parms), Z_Construct_UFunction_UAnimBone_SetFromTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimBone_SetFromTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimBone_SetFromTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimBone_SetFromTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimBone_SetFromTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimBone_SetFromTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimBone_TransformBone_Statics
	{
		struct AnimBone_eventTransformBone_Parms
		{
			FTransform ByTransform;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ByTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimBone_TransformBone_Statics::NewProp_ByTransform = { "ByTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimBone_eventTransformBone_Parms, ByTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimBone_TransformBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimBone_TransformBone_Statics::NewProp_ByTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimBone_TransformBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anim Bone" },
		{ "Comment", "/**\n\x09* Transform the bone by the given transform\n\x09* \xe9\x80\x9a\xe8\xbf\x87\xe7\xbb\x99\xe5\xae\x9a\xe7\x9a\x84\xe5\x8f\x98\xe6\x8d\xa2\xe5\x8f\x98\xe6\x8d\xa2\xe9\xaa\xa8\xe9\xaa\xbc\n\x09*\n\x09* @param ByTransform\x09""Affecting transform\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimBone.h" },
		{ "ToolTip", "Transform the bone by the given transform\n\xe9\x80\x9a\xe8\xbf\x87\xe7\xbb\x99\xe5\xae\x9a\xe7\x9a\x84\xe5\x8f\x98\xe6\x8d\xa2\xe5\x8f\x98\xe6\x8d\xa2\xe9\xaa\xa8\xe9\xaa\xbc\n\n@param ByTransform    Affecting transform" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimBone_TransformBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimBone, nullptr, "TransformBone", nullptr, nullptr, sizeof(AnimBone_eventTransformBone_Parms), Z_Construct_UFunction_UAnimBone_TransformBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimBone_TransformBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimBone_TransformBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimBone_TransformBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimBone_TransformBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimBone_TransformBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimBone_TranslateBone_Statics
	{
		struct AnimBone_eventTranslateBone_Parms
		{
			FVector Shift;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Shift;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimBone_TranslateBone_Statics::NewProp_Shift = { "Shift", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimBone_eventTranslateBone_Parms, Shift), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimBone_TranslateBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimBone_TranslateBone_Statics::NewProp_Shift,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimBone_TranslateBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anim Bone" },
		{ "Comment", "/**\n\x09* Moves the bone by given amount\n\x09* \xe6\x8c\x89\xe7\xbb\x99\xe5\xae\x9a\xe9\x87\x8f\xe7\xa7\xbb\xe5\x8a\xa8\xe9\xaa\xa8\xe9\xaa\xbc\n\x09*\n\x09* @param  Shift\x09\x09Vector amount\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimBone.h" },
		{ "ToolTip", "Moves the bone by given amount\n\xe6\x8c\x89\xe7\xbb\x99\xe5\xae\x9a\xe9\x87\x8f\xe7\xa7\xbb\xe5\x8a\xa8\xe9\xaa\xa8\xe9\xaa\xbc\n\n@param  Shift         Vector amount" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimBone_TranslateBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimBone, nullptr, "TranslateBone", nullptr, nullptr, sizeof(AnimBone_eventTranslateBone_Parms), Z_Construct_UFunction_UAnimBone_TranslateBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimBone_TranslateBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimBone_TranslateBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimBone_TranslateBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimBone_TranslateBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimBone_TranslateBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimBone_NoRegister()
	{
		return UAnimBone::StaticClass();
	}
	struct Z_Construct_UClass_UAnimBone_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextJoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NextJoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevJoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrevJoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimBone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimBone_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimBone_ChangeBasis, "ChangeBasis" }, // 2029018802
		{ &Z_Construct_UFunction_UAnimBone_Enabled, "Enabled" }, // 602677787
		{ &Z_Construct_UFunction_UAnimBone_GetTransform, "GetTransform" }, // 3679501352
		{ &Z_Construct_UFunction_UAnimBone_SetEnabled, "SetEnabled" }, // 145420467
		{ &Z_Construct_UFunction_UAnimBone_SetFromTransform, "SetFromTransform" }, // 3842649853
		{ &Z_Construct_UFunction_UAnimBone_TransformBone, "TransformBone" }, // 2388126941
		{ &Z_Construct_UFunction_UAnimBone_TranslateBone, "TranslateBone" }, // 1687965393
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBone_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Animation Finger object used to hold tracked animation state and provide\n* convenience functions for re-basing and shifting tracked finger data.\n* \xe7\x94\xa8\xe4\xba\x8e\xe4\xbf\x9d\xe5\xad\x98\xe8\xb7\x9f\xe8\xb8\xaa\xe5\x8a\xa8\xe7\x94\xbb\xe7\x8a\xb6\xe6\x80\x81\xe5\xb9\xb6\xe4\xb8\xba\xe9\x87\x8d\xe6\x96\xb0\xe5\xae\x9a\xe4\xbd\x8d\xe5\x92\x8c\xe7\xa7\xbb\xe5\x8a\xa8\xe8\xb7\x9f\xe8\xb8\xaa\xe6\x89\x8b\xe6\x8c\x87\xe6\x95\xb0\xe6\x8d\xae\xe6\x8f\x90\xe4\xbe\x9b\xe4\xbe\xbf\xe5\x88\xa9\xe5\x87\xbd\xe6\x95\xb0\xe7\x9a\x84\xe5\x8a\xa8\xe7\x94\xbb\xe6\x89\x8b\xe6\x8c\x87\xe5\xaf\xb9\xe8\xb1\xa1\xe3\x80\x82\n*/" },
		{ "IncludePath", "AnimBody/AnimBone.h" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimBone.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Animation Finger object used to hold tracked animation state and provide\nconvenience functions for re-basing and shifting tracked finger data.\n\xe7\x94\xa8\xe4\xba\x8e\xe4\xbf\x9d\xe5\xad\x98\xe8\xb7\x9f\xe8\xb8\xaa\xe5\x8a\xa8\xe7\x94\xbb\xe7\x8a\xb6\xe6\x80\x81\xe5\xb9\xb6\xe4\xb8\xba\xe9\x87\x8d\xe6\x96\xb0\xe5\xae\x9a\xe4\xbd\x8d\xe5\x92\x8c\xe7\xa7\xbb\xe5\x8a\xa8\xe8\xb7\x9f\xe8\xb8\xaa\xe6\x89\x8b\xe6\x8c\x87\xe6\x95\xb0\xe6\x8d\xae\xe6\x8f\x90\xe4\xbe\x9b\xe4\xbe\xbf\xe5\x88\xa9\xe5\x87\xbd\xe6\x95\xb0\xe7\x9a\x84\xe5\x8a\xa8\xe7\x94\xbb\xe6\x89\x8b\xe6\x8c\x87\xe5\xaf\xb9\xe8\xb1\xa1\xe3\x80\x82" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBone_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Anim Bone" },
		{ "Comment", "/**\n\x09* Bone raw transform position.\n\x09* \xe9\xaa\xa8\xe9\xaa\xbc\xe5\x8e\x9f\xe5\xa7\x8b\xe5\x8f\x98\xe6\x8d\xa2\xe4\xbd\x8d\xe7\xbd\xae\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimBone.h" },
		{ "ToolTip", "Bone raw transform position.\n\xe9\xaa\xa8\xe9\xaa\xbc\xe5\x8e\x9f\xe5\xa7\x8b\xe5\x8f\x98\xe6\x8d\xa2\xe4\xbd\x8d\xe7\xbd\xae\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBone_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBone, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAnimBone_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBone_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBone_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "Anim Bone" },
		{ "Comment", "/**\n\x09* Bone raw transform orientation.\n\x09* \xe9\xaa\xa8\xe9\xaa\xbc\xe5\x8e\x9f\xe5\xa7\x8b\xe5\x8f\x98\xe6\x8d\xa2\xe6\x96\xb9\xe5\x90\x91\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimBone.h" },
		{ "ToolTip", "Bone raw transform orientation.\n\xe9\xaa\xa8\xe9\xaa\xbc\xe5\x8e\x9f\xe5\xa7\x8b\xe5\x8f\x98\xe6\x8d\xa2\xe6\x96\xb9\xe5\x90\x91\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBone_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBone, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UAnimBone_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBone_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBone_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Anim Bone" },
		{ "Comment", "/**\n\x09* Bone raw transform scale.\n\x09* \xe9\xaa\xa8\xe9\xaa\xbc\xe5\x8e\x9f\xe5\xa7\x8b\xe5\x8f\x98\xe6\x8d\xa2\xe6\xaf\x94\xe4\xbe\x8b\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimBone.h" },
		{ "ToolTip", "Bone raw transform scale.\n\xe9\xaa\xa8\xe9\xaa\xbc\xe5\x8e\x9f\xe5\xa7\x8b\xe5\x8f\x98\xe6\x8d\xa2\xe6\xaf\x94\xe4\xbe\x8b\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBone_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBone, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAnimBone_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBone_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBone_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "Anim Bone" },
		{ "Comment", "/**\n\x09* Bone Length in cm.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimBone.h" },
		{ "ToolTip", "Bone Length in cm." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimBone_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBone, Length), METADATA_PARAMS(Z_Construct_UClass_UAnimBone_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBone_Statics::NewProp_Length_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBone_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Anim Bone" },
		{ "Comment", "/**\n\x09* Tracked state alpha. Vary the value to blend animation with tracked information.\n\x09* \xe8\xb7\x9f\xe8\xb8\xaa\xe7\x8a\xb6\xe6\x80\x81 Alpha\xe3\x80\x82\xe6\x94\xb9\xe5\x8f\x98\xe8\xaf\xa5\xe5\x80\xbc\xe4\xbb\xa5\xe5\xb0\x86\xe5\x8a\xa8\xe7\x94\xbb\xe4\xb8\x8e\xe8\xb7\x9f\xe8\xb8\xaa\xe4\xbf\xa1\xe6\x81\xaf\xe6\xb7\xb7\xe5\x90\x88\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimBone.h" },
		{ "ToolTip", "Tracked state alpha. Vary the value to blend animation with tracked information.\n\xe8\xb7\x9f\xe8\xb8\xaa\xe7\x8a\xb6\xe6\x80\x81 Alpha\xe3\x80\x82\xe6\x94\xb9\xe5\x8f\x98\xe8\xaf\xa5\xe5\x80\xbc\xe4\xbb\xa5\xe5\xb0\x86\xe5\x8a\xa8\xe7\x94\xbb\xe4\xb8\x8e\xe8\xb7\x9f\xe8\xb8\xaa\xe4\xbf\xa1\xe6\x81\xaf\xe6\xb7\xb7\xe5\x90\x88\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimBone_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBone, Alpha), METADATA_PARAMS(Z_Construct_UClass_UAnimBone_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBone_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBone_Statics::NewProp_NextJoint_MetaData[] = {
		{ "Category", "Anim Bone" },
		{ "Comment", "/**\n\x09* Optional vector of the previous joint (outward)\n\x09* \xe5\x89\x8d\xe4\xb8\x80\xe4\xb8\xaa\xe5\x85\xb3\xe8\x8a\x82\xe7\x9a\x84\xe5\x8f\xaf\xe9\x80\x89\xe5\x90\x91\xe9\x87\x8f \xef\xbc\x88\xe5\x90\x91\xe5\xa4\x96\xef\xbc\x89\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimBone.h" },
		{ "ToolTip", "Optional vector of the previous joint (outward)\n\xe5\x89\x8d\xe4\xb8\x80\xe4\xb8\xaa\xe5\x85\xb3\xe8\x8a\x82\xe7\x9a\x84\xe5\x8f\xaf\xe9\x80\x89\xe5\x90\x91\xe9\x87\x8f \xef\xbc\x88\xe5\x90\x91\xe5\xa4\x96\xef\xbc\x89" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBone_Statics::NewProp_NextJoint = { "NextJoint", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBone, NextJoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAnimBone_Statics::NewProp_NextJoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBone_Statics::NewProp_NextJoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBone_Statics::NewProp_PrevJoint_MetaData[] = {
		{ "Category", "Anim Bone" },
		{ "Comment", "/**\n\x09* Optional vector of the previous joint (inward)\n\x09* \xe5\x89\x8d\xe4\xb8\x80\xe4\xb8\xaa\xe5\x85\xb3\xe8\x8a\x82\xe7\x9a\x84\xe5\x8f\xaf\xe9\x80\x89\xe5\x90\x91\xe9\x87\x8f \xef\xbc\x88\xe5\x90\x91\xe5\x86\x85\xef\xbc\x89\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimBone.h" },
		{ "ToolTip", "Optional vector of the previous joint (inward)\n\xe5\x89\x8d\xe4\xb8\x80\xe4\xb8\xaa\xe5\x85\xb3\xe8\x8a\x82\xe7\x9a\x84\xe5\x8f\xaf\xe9\x80\x89\xe5\x90\x91\xe9\x87\x8f \xef\xbc\x88\xe5\x90\x91\xe5\x86\x85\xef\xbc\x89" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBone_Statics::NewProp_PrevJoint = { "PrevJoint", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBone, PrevJoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAnimBone_Statics::NewProp_PrevJoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBone_Statics::NewProp_PrevJoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBone_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBone_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBone_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBone_Statics::NewProp_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBone_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBone_Statics::NewProp_NextJoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBone_Statics::NewProp_PrevJoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimBone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimBone_Statics::ClassParams = {
		&UAnimBone::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimBone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBone_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimBone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimBone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimBone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimBone, 1733345666);
	template<> SIMPLELEAPMOTION_API UClass* StaticClass<UAnimBone>()
	{
		return UAnimBone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimBone(Z_Construct_UClass_UAnimBone, &UAnimBone::StaticClass, TEXT("/Script/SimpleLeapMotion"), TEXT("UAnimBone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
