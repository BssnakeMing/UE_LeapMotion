// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleLeapMotion/Public/AnimBody/AnimBody.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBody() {}
// Cross Module References
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_UAnimBody_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_UAnimBody();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SimpleLeapMotion();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_UAnimHand_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_UAnimBone_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAnimBody::execChangeBasis)
	{
		P_GET_STRUCT(FRotator,Z_Param_PreBase);
		P_GET_STRUCT(FRotator,Z_Param_PostBase);
		P_GET_UBOOL(Z_Param_AdjustVectors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeBasis(Z_Param_PreBase,Z_Param_PostBase,Z_Param_AdjustVectors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimBody::execTranslateBody)
	{
		P_GET_STRUCT(FVector,Z_Param_Shift);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TranslateBody(Z_Param_Shift);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimBody::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_Enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_Enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimBody::execEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Enabled();
		P_NATIVE_END;
	}
	void UAnimBody::StaticRegisterNativesUAnimBody()
	{
		UClass* Class = UAnimBody::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeBasis", &UAnimBody::execChangeBasis },
			{ "Enabled", &UAnimBody::execEnabled },
			{ "SetEnabled", &UAnimBody::execSetEnabled },
			{ "TranslateBody", &UAnimBody::execTranslateBody },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimBody_ChangeBasis_Statics
	{
		struct AnimBody_eventChangeBasis_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimBody_ChangeBasis_Statics::NewProp_PreBase = { "PreBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimBody_eventChangeBasis_Parms, PreBase), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimBody_ChangeBasis_Statics::NewProp_PostBase = { "PostBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimBody_eventChangeBasis_Parms, PostBase), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimBody_ChangeBasis_Statics::NewProp_AdjustVectors_SetBit(void* Obj)
	{
		((AnimBody_eventChangeBasis_Parms*)Obj)->AdjustVectors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimBody_ChangeBasis_Statics::NewProp_AdjustVectors = { "AdjustVectors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimBody_eventChangeBasis_Parms), &Z_Construct_UFunction_UAnimBody_ChangeBasis_Statics::NewProp_AdjustVectors_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimBody_ChangeBasis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimBody_ChangeBasis_Statics::NewProp_PreBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimBody_ChangeBasis_Statics::NewProp_PostBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimBody_ChangeBasis_Statics::NewProp_AdjustVectors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimBody_ChangeBasis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anim Body" },
		{ "Comment", "/**\n\x09* \xe9\x80\x9a\xe8\xbf\x87\xe6\x97\x8b\xe8\xbd\xac\xe9\x9b\x86\xe5\x90\x88\xe6\x9b\xb4\xe6\x94\xb9\xe5\x9f\xba\xe5\x87\x86\xe3\x80\x82\xe7\x94\xa8\xe4\xba\x8e\xe5\x9c\xa8\xe5\x8a\xa8\xe7\x94\xbb\xe4\xb8\xad\xe5\xb0\x86\xe9\xbb\x98\xe8\xae\xa4\xe5\x80\xbc\xe4\xbb\x8e XForward \xe6\x97\x8b\xe8\xbd\xac\xe5\x88\xb0 YForward\xe3\x80\x82\n\x09* \n\x09* @param PreBase \xe5\xbd\xb1\xe5\x93\x8d\xe8\xbe\x93\xe5\x85\xa5\xe7\x9a\x84\xe5\x9f\xba\xe5\x87\x86\xe5\x81\x8f\xe7\xa7\xbb\n\x09* @param PostBase \xe4\xb8\x8d\xe5\xbd\xb1\xe5\x93\x8d\xe8\xbe\x93\xe5\x85\xa5\xe7\x9a\x84\xe5\x9b\xba\xe5\xae\x9a\xe5\x81\x8f\xe7\xa7\xbb\n\x09* @param AdjustVectors \xe5\x9f\xba\xe5\x87\x86\xe6\x98\xaf\xe5\x90\xa6\xe5\xba\x94\xe8\xaf\xa5\xe5\xbd\xb1\xe5\x93\x8d\xe5\x90\x91\xe9\x87\x8f\xef\xbc\x8c\xe8\xbf\x98\xe6\x98\xaf\xe5\x8f\xaa\xe5\xbd\xb1\xe5\x93\x8d\xe6\x96\xb9\xe5\x90\x91\n\x09*/" },
		{ "CPP_Default_AdjustVectors", "true" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimBody.h" },
		{ "ToolTip", "\xe9\x80\x9a\xe8\xbf\x87\xe6\x97\x8b\xe8\xbd\xac\xe9\x9b\x86\xe5\x90\x88\xe6\x9b\xb4\xe6\x94\xb9\xe5\x9f\xba\xe5\x87\x86\xe3\x80\x82\xe7\x94\xa8\xe4\xba\x8e\xe5\x9c\xa8\xe5\x8a\xa8\xe7\x94\xbb\xe4\xb8\xad\xe5\xb0\x86\xe9\xbb\x98\xe8\xae\xa4\xe5\x80\xbc\xe4\xbb\x8e XForward \xe6\x97\x8b\xe8\xbd\xac\xe5\x88\xb0 YForward\xe3\x80\x82\n\n@param PreBase \xe5\xbd\xb1\xe5\x93\x8d\xe8\xbe\x93\xe5\x85\xa5\xe7\x9a\x84\xe5\x9f\xba\xe5\x87\x86\xe5\x81\x8f\xe7\xa7\xbb\n@param PostBase \xe4\xb8\x8d\xe5\xbd\xb1\xe5\x93\x8d\xe8\xbe\x93\xe5\x85\xa5\xe7\x9a\x84\xe5\x9b\xba\xe5\xae\x9a\xe5\x81\x8f\xe7\xa7\xbb\n@param AdjustVectors \xe5\x9f\xba\xe5\x87\x86\xe6\x98\xaf\xe5\x90\xa6\xe5\xba\x94\xe8\xaf\xa5\xe5\xbd\xb1\xe5\x93\x8d\xe5\x90\x91\xe9\x87\x8f\xef\xbc\x8c\xe8\xbf\x98\xe6\x98\xaf\xe5\x8f\xaa\xe5\xbd\xb1\xe5\x93\x8d\xe6\x96\xb9\xe5\x90\x91" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimBody_ChangeBasis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimBody, nullptr, "ChangeBasis", nullptr, nullptr, sizeof(AnimBody_eventChangeBasis_Parms), Z_Construct_UFunction_UAnimBody_ChangeBasis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimBody_ChangeBasis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimBody_ChangeBasis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimBody_ChangeBasis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimBody_ChangeBasis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimBody_ChangeBasis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimBody_Enabled_Statics
	{
		struct AnimBody_eventEnabled_Parms
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
	void Z_Construct_UFunction_UAnimBody_Enabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimBody_eventEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimBody_Enabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimBody_eventEnabled_Parms), &Z_Construct_UFunction_UAnimBody_Enabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimBody_Enabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimBody_Enabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimBody_Enabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anim Body" },
		{ "Comment", "/**\n\x09* Check whether alpha blend is 1.f\n\x09* \xe6\xa3\x80\xe6\x9f\xa5 Alpha \xe6\xb7\xb7\xe5\x90\x88\xe6\x98\xaf\xe5\x90\xa6\xe4\xb8\xba 1.0f\xe3\x80\x82\n\x09*\n\x09* @return  True if alpha is 1.f\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimBody.h" },
		{ "ToolTip", "Check whether alpha blend is 1.f\n\xe6\xa3\x80\xe6\x9f\xa5 Alpha \xe6\xb7\xb7\xe5\x90\x88\xe6\x98\xaf\xe5\x90\xa6\xe4\xb8\xba 1.0f\xe3\x80\x82\n\n@return  True if alpha is 1.f" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimBody_Enabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimBody, nullptr, "Enabled", nullptr, nullptr, sizeof(AnimBody_eventEnabled_Parms), Z_Construct_UFunction_UAnimBody_Enabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimBody_Enabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimBody_Enabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimBody_Enabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimBody_Enabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimBody_Enabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimBody_SetEnabled_Statics
	{
		struct AnimBody_eventSetEnabled_Parms
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
	void Z_Construct_UFunction_UAnimBody_SetEnabled_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((AnimBody_eventSetEnabled_Parms*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimBody_SetEnabled_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimBody_eventSetEnabled_Parms), &Z_Construct_UFunction_UAnimBody_SetEnabled_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimBody_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimBody_SetEnabled_Statics::NewProp_Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimBody_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anim Body" },
		{ "Comment", "/**\n\x09* Set enabled state for animation query, Alpha = 1.f.\n\x09* Will affect a child bones.\n\x09* \xe8\xae\xbe\xe7\xbd\xae\xe5\x8a\xa8\xe7\x94\xbb\xe6\x9f\xa5\xe8\xaf\xa2\xe7\x9a\x84\xe5\x90\xaf\xe7\x94\xa8\xe7\x8a\xb6\xe6\x80\x81\xef\xbc\x8c""Alpha = 1.0f\xe3\x80\x82\n\x09* \xe8\xbf\x99\xe5\xb0\x86\xe5\xbd\xb1\xe5\x93\x8d\xe5\xad\x90\xe9\xaa\xa8\xe9\xaa\xbc\xe3\x80\x82\n\x09*\n\x09* @param  Enable default to true\n\x09*/" },
		{ "CPP_Default_Enable", "true" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimBody.h" },
		{ "ToolTip", "Set enabled state for animation query, Alpha = 1.f.\nWill affect a child bones.\n\xe8\xae\xbe\xe7\xbd\xae\xe5\x8a\xa8\xe7\x94\xbb\xe6\x9f\xa5\xe8\xaf\xa2\xe7\x9a\x84\xe5\x90\xaf\xe7\x94\xa8\xe7\x8a\xb6\xe6\x80\x81\xef\xbc\x8c""Alpha = 1.0f\xe3\x80\x82\n\xe8\xbf\x99\xe5\xb0\x86\xe5\xbd\xb1\xe5\x93\x8d\xe5\xad\x90\xe9\xaa\xa8\xe9\xaa\xbc\xe3\x80\x82\n\n@param  Enable default to true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimBody_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimBody, nullptr, "SetEnabled", nullptr, nullptr, sizeof(AnimBody_eventSetEnabled_Parms), Z_Construct_UFunction_UAnimBody_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimBody_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimBody_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimBody_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimBody_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimBody_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimBody_TranslateBody_Statics
	{
		struct AnimBody_eventTranslateBody_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimBody_TranslateBody_Statics::NewProp_Shift = { "Shift", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimBody_eventTranslateBody_Parms, Shift), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimBody_TranslateBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimBody_TranslateBody_Statics::NewProp_Shift,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimBody_TranslateBody_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anim Body" },
		{ "Comment", "/**\n\x09* Translate all the bones in the body by given vector amount\n\x09* \xe5\xb0\x86\xe8\xba\xab\xe4\xbd\x93\xe4\xb8\xad\xe6\x89\x80\xe6\x9c\x89\xe9\xaa\xa8\xe9\xaa\xbc\xe6\x8c\x89\xe7\xbb\x99\xe5\xae\x9a\xe5\x90\x91\xe9\x87\x8f\xe9\x87\x8f\xe5\xb9\xb3\xe7\xa7\xbb\n\x09*\n\x09* @param  Shift\x09\x09Vector amount\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimBody.h" },
		{ "ToolTip", "Translate all the bones in the body by given vector amount\n\xe5\xb0\x86\xe8\xba\xab\xe4\xbd\x93\xe4\xb8\xad\xe6\x89\x80\xe6\x9c\x89\xe9\xaa\xa8\xe9\xaa\xbc\xe6\x8c\x89\xe7\xbb\x99\xe5\xae\x9a\xe5\x90\x91\xe9\x87\x8f\xe9\x87\x8f\xe5\xb9\xb3\xe7\xa7\xbb\n\n@param  Shift         Vector amount" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimBody_TranslateBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimBody, nullptr, "TranslateBody", nullptr, nullptr, sizeof(AnimBody_eventTranslateBody_Parms), Z_Construct_UFunction_UAnimBody_TranslateBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimBody_TranslateBody_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimBody_TranslateBody_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimBody_TranslateBody_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimBody_TranslateBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimBody_TranslateBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimBody_NoRegister()
	{
		return UAnimBody::StaticClass();
	}
	struct Z_Construct_UClass_UAnimBody_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Left;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Right;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Head_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Head;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimBody_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimBody_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimBody_ChangeBasis, "ChangeBasis" }, // 350362595
		{ &Z_Construct_UFunction_UAnimBody_Enabled, "Enabled" }, // 1621469134
		{ &Z_Construct_UFunction_UAnimBody_SetEnabled, "SetEnabled" }, // 3786946897
		{ &Z_Construct_UFunction_UAnimBody_TranslateBody, "TranslateBody" }, // 1551121811
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBody_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Animation Skeleton" },
		{ "Comment", "/**\n* Animation Body object used to hold tracked animation state and provide\n* convenience functions for re-basing and shifting the whole skeleton data.\n* \xe7\x94\xa8\xe4\xba\x8e\xe4\xbf\x9d\xe5\xad\x98\xe8\xb7\x9f\xe8\xb8\xaa\xe5\x8a\xa8\xe7\x94\xbb\xe7\x8a\xb6\xe6\x80\x81\xe5\xb9\xb6\xe4\xb8\xba\xe9\x87\x8d\xe6\x96\xb0\xe5\xae\x9a\xe4\xbd\x8d\xe5\x92\x8c\xe7\xa7\xbb\xe5\x8a\xa8\xe6\x95\xb4\xe4\xb8\xaa\xe9\xaa\xa8\xe9\xaa\xbc\xe6\x95\xb0\xe6\x8d\xae\xe6\x8f\x90\xe4\xbe\x9b\xe4\xbe\xbf\xe5\x88\xa9\xe5\x87\xbd\xe6\x95\xb0\xe7\x9a\x84\xe5\x8a\xa8\xe7\x94\xbb\xe8\xba\xab\xe4\xbd\x93\xe5\xaf\xb9\xe8\xb1\xa1\xe3\x80\x82\n*/" },
		{ "IncludePath", "AnimBody/AnimBody.h" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimBody.h" },
		{ "ToolTip", "Animation Body object used to hold tracked animation state and provide\nconvenience functions for re-basing and shifting the whole skeleton data.\n\xe7\x94\xa8\xe4\xba\x8e\xe4\xbf\x9d\xe5\xad\x98\xe8\xb7\x9f\xe8\xb8\xaa\xe5\x8a\xa8\xe7\x94\xbb\xe7\x8a\xb6\xe6\x80\x81\xe5\xb9\xb6\xe4\xb8\xba\xe9\x87\x8d\xe6\x96\xb0\xe5\xae\x9a\xe4\xbd\x8d\xe5\x92\x8c\xe7\xa7\xbb\xe5\x8a\xa8\xe6\x95\xb4\xe4\xb8\xaa\xe9\xaa\xa8\xe9\xaa\xbc\xe6\x95\xb0\xe6\x8d\xae\xe6\x8f\x90\xe4\xbe\x9b\xe4\xbe\xbf\xe5\x88\xa9\xe5\x87\xbd\xe6\x95\xb0\xe7\x9a\x84\xe5\x8a\xa8\xe7\x94\xbb\xe8\xba\xab\xe4\xbd\x93\xe5\xaf\xb9\xe8\xb1\xa1\xe3\x80\x82" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBody_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Anim Body" },
		{ "Comment", "/**\n\x09* Tracked state alpha. Vary the value to blend animation with tracked information.\n\x09* \xe8\xb7\x9f\xe8\xb8\xaa\xe7\x8a\xb6\xe6\x80\x81 Alpha \xe5\x80\xbc\xe3\x80\x82\xe8\xb0\x83\xe6\x95\xb4\xe6\xad\xa4\xe5\x80\xbc\xe5\x8f\xaf\xe4\xbb\xa5\xe6\xb7\xb7\xe5\x90\x88\xe5\x8a\xa8\xe7\x94\xbb\xe5\x92\x8c\xe8\xb7\x9f\xe8\xb8\xaa\xe4\xbf\xa1\xe6\x81\xaf\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimBody.h" },
		{ "ToolTip", "Tracked state alpha. Vary the value to blend animation with tracked information.\n\xe8\xb7\x9f\xe8\xb8\xaa\xe7\x8a\xb6\xe6\x80\x81 Alpha \xe5\x80\xbc\xe3\x80\x82\xe8\xb0\x83\xe6\x95\xb4\xe6\xad\xa4\xe5\x80\xbc\xe5\x8f\xaf\xe4\xbb\xa5\xe6\xb7\xb7\xe5\x90\x88\xe5\x8a\xa8\xe7\x94\xbb\xe5\x92\x8c\xe8\xb7\x9f\xe8\xb8\xaa\xe4\xbf\xa1\xe6\x81\xaf\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimBody_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBody, Alpha), METADATA_PARAMS(Z_Construct_UClass_UAnimBody_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBody_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBody_Statics::NewProp_Left_MetaData[] = {
		{ "Category", "Anim Body" },
		{ "Comment", "/**\n\x09* Left Anim Hand\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimBody.h" },
		{ "ToolTip", "Left Anim Hand" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimBody_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBody, Left), Z_Construct_UClass_UAnimHand_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimBody_Statics::NewProp_Left_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBody_Statics::NewProp_Left_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBody_Statics::NewProp_Right_MetaData[] = {
		{ "Category", "Anim Body" },
		{ "Comment", "/**\n\x09* Right Anim Hand\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimBody.h" },
		{ "ToolTip", "Right Anim Hand" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimBody_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBody, Right), Z_Construct_UClass_UAnimHand_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimBody_Statics::NewProp_Right_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBody_Statics::NewProp_Right_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBody_Statics::NewProp_Head_MetaData[] = {
		{ "Category", "Anim Body" },
		{ "Comment", "/**\n\x09* Head Bone\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimBody.h" },
		{ "ToolTip", "Head Bone" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimBody_Statics::NewProp_Head = { "Head", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBody, Head), Z_Construct_UClass_UAnimBone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimBody_Statics::NewProp_Head_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBody_Statics::NewProp_Head_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBody_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBody_Statics::NewProp_Left,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBody_Statics::NewProp_Right,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBody_Statics::NewProp_Head,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimBody_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBody>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimBody_Statics::ClassParams = {
		&UAnimBody::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimBody_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBody_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimBody_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBody_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimBody()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimBody_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimBody, 2612838650);
	template<> SIMPLELEAPMOTION_API UClass* StaticClass<UAnimBody>()
	{
		return UAnimBody::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimBody(Z_Construct_UClass_UAnimBody, &UAnimBody::StaticClass, TEXT("/Script/SimpleLeapMotion"), TEXT("UAnimBody"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBody);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
