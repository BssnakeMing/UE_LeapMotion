// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleLeapMotion/Public/AnimBody/AnimHand.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimHand() {}
// Cross Module References
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_UAnimHand_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_UAnimHand();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SimpleLeapMotion();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapHand_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_UAnimFinger_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_UAnimBone_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAnimHand::execApplyTimewarp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyTimewarp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimHand::execSetFromLeapHand)
	{
		P_GET_OBJECT(ULeapHand,Z_Param_LeapHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFromLeapHand(Z_Param_LeapHand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimHand::execChangeBasis)
	{
		P_GET_STRUCT(FRotator,Z_Param_PreBase);
		P_GET_STRUCT(FRotator,Z_Param_PostBase);
		P_GET_UBOOL(Z_Param_AdjustVectors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeBasis(Z_Param_PreBase,Z_Param_PostBase,Z_Param_AdjustVectors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimHand::execTransformHand)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ByTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TransformHand(Z_Param_Out_ByTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimHand::execTranslateHand)
	{
		P_GET_STRUCT(FVector,Z_Param_Shift);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TranslateHand(Z_Param_Shift);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimHand::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_Enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_Enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimHand::execEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Enabled();
		P_NATIVE_END;
	}
	void UAnimHand::StaticRegisterNativesUAnimHand()
	{
		UClass* Class = UAnimHand::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyTimewarp", &UAnimHand::execApplyTimewarp },
			{ "ChangeBasis", &UAnimHand::execChangeBasis },
			{ "Enabled", &UAnimHand::execEnabled },
			{ "SetEnabled", &UAnimHand::execSetEnabled },
			{ "SetFromLeapHand", &UAnimHand::execSetFromLeapHand },
			{ "TransformHand", &UAnimHand::execTransformHand },
			{ "TranslateHand", &UAnimHand::execTranslateHand },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimHand_ApplyTimewarp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimHand_ApplyTimewarp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anim Hand" },
		{ "Comment", "/**\n\x09* Apply the timewarp now\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimHand.h" },
		{ "ToolTip", "Apply the timewarp now" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimHand_ApplyTimewarp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimHand, nullptr, "ApplyTimewarp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimHand_ApplyTimewarp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimHand_ApplyTimewarp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimHand_ApplyTimewarp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimHand_ApplyTimewarp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimHand_ChangeBasis_Statics
	{
		struct AnimHand_eventChangeBasis_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimHand_ChangeBasis_Statics::NewProp_PreBase = { "PreBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimHand_eventChangeBasis_Parms, PreBase), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimHand_ChangeBasis_Statics::NewProp_PostBase = { "PostBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimHand_eventChangeBasis_Parms, PostBase), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimHand_ChangeBasis_Statics::NewProp_AdjustVectors_SetBit(void* Obj)
	{
		((AnimHand_eventChangeBasis_Parms*)Obj)->AdjustVectors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimHand_ChangeBasis_Statics::NewProp_AdjustVectors = { "AdjustVectors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimHand_eventChangeBasis_Parms), &Z_Construct_UFunction_UAnimHand_ChangeBasis_Statics::NewProp_AdjustVectors_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimHand_ChangeBasis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimHand_ChangeBasis_Statics::NewProp_PreBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimHand_ChangeBasis_Statics::NewProp_PostBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimHand_ChangeBasis_Statics::NewProp_AdjustVectors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimHand_ChangeBasis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anim Hand" },
		{ "Comment", "/**\n\x09* Changes the Basis by rotations sets. Used for rotating from XForward to YForward defaults\n\x09* in animation.\n\x09*\n\x09* @param  PreBase\x09\x09""Basis offset affecting input\n\x09* @param  PostBase\x09\x09""Fixed offset not affecting input\n\x09* @param  AdjustVectors Whether the basis should affect vectors or just orientation\n\x09*/" },
		{ "CPP_Default_AdjustVectors", "true" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimHand.h" },
		{ "ToolTip", "Changes the Basis by rotations sets. Used for rotating from XForward to YForward defaults\nin animation.\n\n@param  PreBase               Basis offset affecting input\n@param  PostBase              Fixed offset not affecting input\n@param  AdjustVectors Whether the basis should affect vectors or just orientation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimHand_ChangeBasis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimHand, nullptr, "ChangeBasis", nullptr, nullptr, sizeof(AnimHand_eventChangeBasis_Parms), Z_Construct_UFunction_UAnimHand_ChangeBasis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimHand_ChangeBasis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimHand_ChangeBasis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimHand_ChangeBasis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimHand_ChangeBasis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimHand_ChangeBasis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimHand_Enabled_Statics
	{
		struct AnimHand_eventEnabled_Parms
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
	void Z_Construct_UFunction_UAnimHand_Enabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimHand_eventEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimHand_Enabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimHand_eventEnabled_Parms), &Z_Construct_UFunction_UAnimHand_Enabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimHand_Enabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimHand_Enabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimHand_Enabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anim Hand" },
		{ "Comment", "/**\n\x09* Check whether alpha blend is 1.f\n\x09*\n\x09* @return  True if alpha is 1.f\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimHand.h" },
		{ "ToolTip", "Check whether alpha blend is 1.f\n\n@return  True if alpha is 1.f" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimHand_Enabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimHand, nullptr, "Enabled", nullptr, nullptr, sizeof(AnimHand_eventEnabled_Parms), Z_Construct_UFunction_UAnimHand_Enabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimHand_Enabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimHand_Enabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimHand_Enabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimHand_Enabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimHand_Enabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimHand_SetEnabled_Statics
	{
		struct AnimHand_eventSetEnabled_Parms
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
	void Z_Construct_UFunction_UAnimHand_SetEnabled_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((AnimHand_eventSetEnabled_Parms*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimHand_SetEnabled_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimHand_eventSetEnabled_Parms), &Z_Construct_UFunction_UAnimHand_SetEnabled_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimHand_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimHand_SetEnabled_Statics::NewProp_Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimHand_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anim Hand" },
		{ "Comment", "/**\n\x09* Set enabled state for animation query, Alpha = 1.f\n\x09* Will affect a child bones.\n\x09*\n\x09* @param  Enable default to true\n\x09*/" },
		{ "CPP_Default_Enable", "true" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimHand.h" },
		{ "ToolTip", "Set enabled state for animation query, Alpha = 1.f\nWill affect a child bones.\n\n@param  Enable default to true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimHand_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimHand, nullptr, "SetEnabled", nullptr, nullptr, sizeof(AnimHand_eventSetEnabled_Parms), Z_Construct_UFunction_UAnimHand_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimHand_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimHand_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimHand_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimHand_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimHand_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimHand_SetFromLeapHand_Statics
	{
		struct AnimHand_eventSetFromLeapHand_Parms
		{
			ULeapHand* LeapHand;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeapHand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimHand_SetFromLeapHand_Statics::NewProp_LeapHand = { "LeapHand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimHand_eventSetFromLeapHand_Parms, LeapHand), Z_Construct_UClass_ULeapHand_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimHand_SetFromLeapHand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimHand_SetFromLeapHand_Statics::NewProp_LeapHand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimHand_SetFromLeapHand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anim Hand" },
		{ "Comment", "/**\n\x09* Convenience function to copy the state of the AnimHand from the LeapHand\n\x09* \xe4\xbb\x8e LeapHand \xe5\xa4\x8d\xe5\x88\xb6 AnimHand \xe7\x8a\xb6\xe6\x80\x81\xe7\x9a\x84\xe4\xbe\xbf\xe6\x8d\xb7\xe5\x87\xbd\xe6\x95\xb0\n\x09*\n\x09* @param Hand hand to copy from\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimHand.h" },
		{ "ToolTip", "Convenience function to copy the state of the AnimHand from the LeapHand\n\xe4\xbb\x8e LeapHand \xe5\xa4\x8d\xe5\x88\xb6 AnimHand \xe7\x8a\xb6\xe6\x80\x81\xe7\x9a\x84\xe4\xbe\xbf\xe6\x8d\xb7\xe5\x87\xbd\xe6\x95\xb0\n\n@param Hand hand to copy from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimHand_SetFromLeapHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimHand, nullptr, "SetFromLeapHand", nullptr, nullptr, sizeof(AnimHand_eventSetFromLeapHand_Parms), Z_Construct_UFunction_UAnimHand_SetFromLeapHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimHand_SetFromLeapHand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimHand_SetFromLeapHand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimHand_SetFromLeapHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimHand_SetFromLeapHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimHand_SetFromLeapHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimHand_TransformHand_Statics
	{
		struct AnimHand_eventTransformHand_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimHand_TransformHand_Statics::NewProp_ByTransform = { "ByTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimHand_eventTransformHand_Parms, ByTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimHand_TransformHand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimHand_TransformHand_Statics::NewProp_ByTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimHand_TransformHand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anim Finger" },
		{ "Comment", "/**\n\x09* Transform all the bones in the hand by the given transform\n\x09*\n\x09* @param ByTransform\x09""Affecting transform\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimHand.h" },
		{ "ToolTip", "Transform all the bones in the hand by the given transform\n\n@param ByTransform    Affecting transform" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimHand_TransformHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimHand, nullptr, "TransformHand", nullptr, nullptr, sizeof(AnimHand_eventTransformHand_Parms), Z_Construct_UFunction_UAnimHand_TransformHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimHand_TransformHand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimHand_TransformHand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimHand_TransformHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimHand_TransformHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimHand_TransformHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimHand_TranslateHand_Statics
	{
		struct AnimHand_eventTranslateHand_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimHand_TranslateHand_Statics::NewProp_Shift = { "Shift", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimHand_eventTranslateHand_Parms, Shift), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimHand_TranslateHand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimHand_TranslateHand_Statics::NewProp_Shift,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimHand_TranslateHand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anim Hand" },
		{ "Comment", "/**\n\x09* Translate all the bones in the hand by given vector amount\n\x09*\n\x09* @param  Shift\x09\x09Vector amount\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimHand.h" },
		{ "ToolTip", "Translate all the bones in the hand by given vector amount\n\n@param  Shift         Vector amount" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimHand_TranslateHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimHand, nullptr, "TranslateHand", nullptr, nullptr, sizeof(AnimHand_eventTranslateHand_Parms), Z_Construct_UFunction_UAnimHand_TranslateHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimHand_TranslateHand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimHand_TranslateHand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimHand_TranslateHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimHand_TranslateHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimHand_TranslateHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimHand_NoRegister()
	{
		return UAnimHand::StaticClass();
	}
	struct Z_Construct_UClass_UAnimHand_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Confidence_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Confidence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thumb_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Thumb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Middle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Middle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ring_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Ring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pinky_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pinky;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wrist_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Wrist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Palm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Palm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowerArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LowerArm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimHand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimHand_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimHand_ApplyTimewarp, "ApplyTimewarp" }, // 838049790
		{ &Z_Construct_UFunction_UAnimHand_ChangeBasis, "ChangeBasis" }, // 214173897
		{ &Z_Construct_UFunction_UAnimHand_Enabled, "Enabled" }, // 160930579
		{ &Z_Construct_UFunction_UAnimHand_SetEnabled, "SetEnabled" }, // 1986640696
		{ &Z_Construct_UFunction_UAnimHand_SetFromLeapHand, "SetFromLeapHand" }, // 548581258
		{ &Z_Construct_UFunction_UAnimHand_TransformHand, "TransformHand" }, // 3808185019
		{ &Z_Construct_UFunction_UAnimHand_TranslateHand, "TranslateHand" }, // 1250051951
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimHand_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Animation Hand object used to hold tracked animation state and provide\n* convenience functions for re-basing and shifting tracked hand data.\n* \xe7\x94\xa8\xe4\xba\x8e\xe4\xbf\x9d\xe5\xad\x98\xe8\xb7\x9f\xe8\xb8\xaa\xe5\x8a\xa8\xe7\x94\xbb\xe7\x8a\xb6\xe6\x80\x81\xe5\xb9\xb6\xe4\xb8\xba\xe9\x87\x8d\xe6\x96\xb0\xe5\xae\x9a\xe4\xbd\x8d\xe5\x92\x8c\xe7\xa7\xbb\xe5\x8a\xa8\xe8\xb7\x9f\xe8\xb8\xaa\xe6\x89\x8b\xe9\x83\xa8\xe6\x95\xb0\xe6\x8d\xae\xe6\x8f\x90\xe4\xbe\x9b\xe4\xbe\xbf\xe5\x88\xa9\xe5\x87\xbd\xe6\x95\xb0\xe7\x9a\x84\xe5\x8a\xa8\xe7\x94\xbb\xe6\x89\x8b\xe9\x83\xa8\xe5\xaf\xb9\xe8\xb1\xa1\xe3\x80\x82\n*/" },
		{ "IncludePath", "AnimBody/AnimHand.h" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimHand.h" },
		{ "ToolTip", "Animation Hand object used to hold tracked animation state and provide\nconvenience functions for re-basing and shifting tracked hand data.\n\xe7\x94\xa8\xe4\xba\x8e\xe4\xbf\x9d\xe5\xad\x98\xe8\xb7\x9f\xe8\xb8\xaa\xe5\x8a\xa8\xe7\x94\xbb\xe7\x8a\xb6\xe6\x80\x81\xe5\xb9\xb6\xe4\xb8\xba\xe9\x87\x8d\xe6\x96\xb0\xe5\xae\x9a\xe4\xbd\x8d\xe5\x92\x8c\xe7\xa7\xbb\xe5\x8a\xa8\xe8\xb7\x9f\xe8\xb8\xaa\xe6\x89\x8b\xe9\x83\xa8\xe6\x95\xb0\xe6\x8d\xae\xe6\x8f\x90\xe4\xbe\x9b\xe4\xbe\xbf\xe5\x88\xa9\xe5\x87\xbd\xe6\x95\xb0\xe7\x9a\x84\xe5\x8a\xa8\xe7\x94\xbb\xe6\x89\x8b\xe9\x83\xa8\xe5\xaf\xb9\xe8\xb1\xa1\xe3\x80\x82" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimHand_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Anim Hand" },
		{ "Comment", "/**\n\x09* Tracked state alpha. Vary the value to blend animation with tracked information.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimHand.h" },
		{ "ToolTip", "Tracked state alpha. Vary the value to blend animation with tracked information." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimHand_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimHand, Alpha), METADATA_PARAMS(Z_Construct_UClass_UAnimHand_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimHand_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimHand_Statics::NewProp_Confidence_MetaData[] = {
		{ "Category", "Anim Hand Hand" },
		{ "Comment", "/**\n\x09* Confidence in pose as determined by tracking\n\x09* \xe7\x94\xb1\xe8\xb7\x9f\xe8\xb8\xaa\xe7\xa1\xae\xe5\xae\x9a\xe7\x9a\x84\xe5\xa7\xbf\xe5\x8a\xbf\xe7\xbd\xae\xe4\xbf\xa1\xe5\xba\xa6\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimHand.h" },
		{ "ToolTip", "Confidence in pose as determined by tracking\n\xe7\x94\xb1\xe8\xb7\x9f\xe8\xb8\xaa\xe7\xa1\xae\xe5\xae\x9a\xe7\x9a\x84\xe5\xa7\xbf\xe5\x8a\xbf\xe7\xbd\xae\xe4\xbf\xa1\xe5\xba\xa6\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimHand_Statics::NewProp_Confidence = { "Confidence", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimHand, Confidence), METADATA_PARAMS(Z_Construct_UClass_UAnimHand_Statics::NewProp_Confidence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimHand_Statics::NewProp_Confidence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimHand_Statics::NewProp_Thumb_MetaData[] = {
		{ "Category", "Anim Hand Finger" },
		{ "Comment", "/**\n\x09* Tracked thumb finger.\n\x09* \xe6\x8b\x87\xe6\x8c\x87\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimHand.h" },
		{ "ToolTip", "Tracked thumb finger.\n\xe6\x8b\x87\xe6\x8c\x87" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimHand_Statics::NewProp_Thumb = { "Thumb", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimHand, Thumb), Z_Construct_UClass_UAnimFinger_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimHand_Statics::NewProp_Thumb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimHand_Statics::NewProp_Thumb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimHand_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "Anim Hand Finger" },
		{ "Comment", "/**\n\x09* Tracked index finger.\n\x09* \xe9\xa3\x9f\xe6\x8c\x87\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimHand.h" },
		{ "ToolTip", "Tracked index finger.\n\xe9\xa3\x9f\xe6\x8c\x87" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimHand_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimHand, Index), Z_Construct_UClass_UAnimFinger_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimHand_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimHand_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimHand_Statics::NewProp_Middle_MetaData[] = {
		{ "Category", "Anim Hand Finger" },
		{ "Comment", "/**\n\x09* Tracked middle finger.\n\x09* \xe4\xb8\xad\xe6\x8c\x87\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimHand.h" },
		{ "ToolTip", "Tracked middle finger.\n\xe4\xb8\xad\xe6\x8c\x87" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimHand_Statics::NewProp_Middle = { "Middle", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimHand, Middle), Z_Construct_UClass_UAnimFinger_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimHand_Statics::NewProp_Middle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimHand_Statics::NewProp_Middle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimHand_Statics::NewProp_Ring_MetaData[] = {
		{ "Category", "Anim Hand Finger" },
		{ "Comment", "/**\n\x09* Tracked ring finger.\n\x09* \xe6\x97\xa0\xe5\x90\x8d\xe6\x8c\x87\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimHand.h" },
		{ "ToolTip", "Tracked ring finger.\n\xe6\x97\xa0\xe5\x90\x8d\xe6\x8c\x87" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimHand_Statics::NewProp_Ring = { "Ring", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimHand, Ring), Z_Construct_UClass_UAnimFinger_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimHand_Statics::NewProp_Ring_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimHand_Statics::NewProp_Ring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimHand_Statics::NewProp_Pinky_MetaData[] = {
		{ "Category", "Anim Hand Finger" },
		{ "Comment", "/**\n\x09* Tracked pinky finger.\n\x09* \xe5\xb0\x8f\xe6\x8c\x87\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimHand.h" },
		{ "ToolTip", "Tracked pinky finger.\n\xe5\xb0\x8f\xe6\x8c\x87" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimHand_Statics::NewProp_Pinky = { "Pinky", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimHand, Pinky), Z_Construct_UClass_UAnimFinger_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimHand_Statics::NewProp_Pinky_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimHand_Statics::NewProp_Pinky_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimHand_Statics::NewProp_Wrist_MetaData[] = {
		{ "Category", "Anim Hand" },
		{ "Comment", "/**\n\x09* Tracked wrist bone.\n\x09* \xe6\x89\x8b\xe8\x85\x95\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimHand.h" },
		{ "ToolTip", "Tracked wrist bone.\n\xe6\x89\x8b\xe8\x85\x95" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimHand_Statics::NewProp_Wrist = { "Wrist", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimHand, Wrist), Z_Construct_UClass_UAnimBone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimHand_Statics::NewProp_Wrist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimHand_Statics::NewProp_Wrist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimHand_Statics::NewProp_Palm_MetaData[] = {
		{ "Category", "Anim Hand" },
		{ "Comment", "/**\n\x09* Tracked palm bone.\n\x09* \xe6\x89\x8b\xe6\x8e\x8c\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimHand.h" },
		{ "ToolTip", "Tracked palm bone.\n\xe6\x89\x8b\xe6\x8e\x8c" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimHand_Statics::NewProp_Palm = { "Palm", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimHand, Palm), Z_Construct_UClass_UAnimBone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimHand_Statics::NewProp_Palm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimHand_Statics::NewProp_Palm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimHand_Statics::NewProp_LowerArm_MetaData[] = {
		{ "Category", "Anim Hand" },
		{ "Comment", "/**\n\x09* Tracked lowerarm bone.\n\x09* \xe5\x89\x8d\xe8\x87\x82\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimHand.h" },
		{ "ToolTip", "Tracked lowerarm bone.\n\xe5\x89\x8d\xe8\x87\x82" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimHand_Statics::NewProp_LowerArm = { "LowerArm", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimHand, LowerArm), Z_Construct_UClass_UAnimBone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimHand_Statics::NewProp_LowerArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimHand_Statics::NewProp_LowerArm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimHand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimHand_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimHand_Statics::NewProp_Confidence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimHand_Statics::NewProp_Thumb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimHand_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimHand_Statics::NewProp_Middle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimHand_Statics::NewProp_Ring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimHand_Statics::NewProp_Pinky,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimHand_Statics::NewProp_Wrist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimHand_Statics::NewProp_Palm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimHand_Statics::NewProp_LowerArm,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimHand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimHand>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimHand_Statics::ClassParams = {
		&UAnimHand::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimHand_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimHand_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimHand_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimHand_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimHand()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimHand_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimHand, 1376732298);
	template<> SIMPLELEAPMOTION_API UClass* StaticClass<UAnimHand>()
	{
		return UAnimHand::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimHand(Z_Construct_UClass_UAnimHand, &UAnimHand::StaticClass, TEXT("/Script/SimpleLeapMotion"), TEXT("UAnimHand"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimHand);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
