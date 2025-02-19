// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleLeapMotion/Public/AnimBody/AnimFinger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimFinger() {}
// Cross Module References
	SIMPLELEAPMOTION_API UEnum* Z_Construct_UEnum_SimpleLeapMotion_EAnimHandType();
	UPackage* Z_Construct_UPackage__Script_SimpleLeapMotion();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_UAnimFinger_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_UAnimFinger();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapFinger_NoRegister();
	SIMPLELEAPMOTION_API UEnum* Z_Construct_UEnum_SimpleLeapMotion_ELeapHandType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_UAnimBone_NoRegister();
// End Cross Module References
	static UEnum* EAnimHandType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleLeapMotion_EAnimHandType, Z_Construct_UPackage__Script_SimpleLeapMotion(), TEXT("EAnimHandType"));
		}
		return Singleton;
	}
	template<> SIMPLELEAPMOTION_API UEnum* StaticEnum<EAnimHandType>()
	{
		return EAnimHandType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAnimHandType(EAnimHandType_StaticEnum, TEXT("/Script/SimpleLeapMotion"), TEXT("EAnimHandType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleLeapMotion_EAnimHandType_Hash() { return 1927108398U; }
	UEnum* Z_Construct_UEnum_SimpleLeapMotion_EAnimHandType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleLeapMotion();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAnimHandType"), 0, Get_Z_Construct_UEnum_SimpleLeapMotion_EAnimHandType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAnimHandType::ANIM_HAND_UNKNOWN", (int64)EAnimHandType::ANIM_HAND_UNKNOWN },
				{ "EAnimHandType::ANIM_HAND_LEFT", (int64)EAnimHandType::ANIM_HAND_LEFT },
				{ "EAnimHandType::ANIM_HAND_RIGHT", (int64)EAnimHandType::ANIM_HAND_RIGHT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ANIM_HAND_LEFT.Name", "EAnimHandType::ANIM_HAND_LEFT" },
				{ "ANIM_HAND_RIGHT.Name", "EAnimHandType::ANIM_HAND_RIGHT" },
				{ "ANIM_HAND_UNKNOWN.Name", "EAnimHandType::ANIM_HAND_UNKNOWN" },
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n* Animation Finger object used to hold tracked animation state and provide\n* convenience functions for re-basing and shifting tracked finger data.\n* \xe7\x94\xa8\xe4\xba\x8e\xe4\xbf\x9d\xe5\xad\x98\xe8\xb7\x9f\xe8\xb8\xaa\xe5\x8a\xa8\xe7\x94\xbb\xe7\x8a\xb6\xe6\x80\x81\xe5\xb9\xb6\xe4\xb8\xba\xe9\x87\x8d\xe6\x96\xb0\xe5\xae\x9a\xe4\xbd\x8d\xe5\x92\x8c\xe7\xa7\xbb\xe5\x8a\xa8\xe8\xb7\x9f\xe8\xb8\xaa\xe6\x89\x8b\xe6\x8c\x87\xe6\x95\xb0\xe6\x8d\xae\xe6\x8f\x90\xe4\xbe\x9b\xe4\xbe\xbf\xe5\x88\xa9\xe5\x87\xbd\xe6\x95\xb0\xe7\x9a\x84\xe5\x8a\xa8\xe7\x94\xbb\xe6\x89\x8b\xe6\x8c\x87\xe5\xaf\xb9\xe8\xb1\xa1\xe3\x80\x82\n*/" },
				{ "ModuleRelativePath", "Public/AnimBody/AnimFinger.h" },
				{ "ToolTip", "Animation Finger object used to hold tracked animation state and provide\nconvenience functions for re-basing and shifting tracked finger data.\n\xe7\x94\xa8\xe4\xba\x8e\xe4\xbf\x9d\xe5\xad\x98\xe8\xb7\x9f\xe8\xb8\xaa\xe5\x8a\xa8\xe7\x94\xbb\xe7\x8a\xb6\xe6\x80\x81\xe5\xb9\xb6\xe4\xb8\xba\xe9\x87\x8d\xe6\x96\xb0\xe5\xae\x9a\xe4\xbd\x8d\xe5\x92\x8c\xe7\xa7\xbb\xe5\x8a\xa8\xe8\xb7\x9f\xe8\xb8\xaa\xe6\x89\x8b\xe6\x8c\x87\xe6\x95\xb0\xe6\x8d\xae\xe6\x8f\x90\xe4\xbe\x9b\xe4\xbe\xbf\xe5\x88\xa9\xe5\x87\xbd\xe6\x95\xb0\xe7\x9a\x84\xe5\x8a\xa8\xe7\x94\xbb\xe6\x89\x8b\xe6\x8c\x87\xe5\xaf\xb9\xe8\xb1\xa1\xe3\x80\x82" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
				nullptr,
				"EAnimHandType",
				"EAnimHandType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UAnimFinger::execSetFromLeapFinger)
	{
		P_GET_OBJECT(ULeapFinger,Z_Param_Finger);
		P_GET_ENUM(ELeapHandType,Z_Param_HandType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFromLeapFinger(Z_Param_Finger,ELeapHandType(Z_Param_HandType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimFinger::execChangeBasis)
	{
		P_GET_STRUCT(FRotator,Z_Param_PreBase);
		P_GET_STRUCT(FRotator,Z_Param_PostBase);
		P_GET_UBOOL(Z_Param_AdjustVectors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeBasis(Z_Param_PreBase,Z_Param_PostBase,Z_Param_AdjustVectors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimFinger::execTransformFinger)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ByTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TransformFinger(Z_Param_Out_ByTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimFinger::execTranslateFinger)
	{
		P_GET_STRUCT(FVector,Z_Param_Shift);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TranslateFinger(Z_Param_Shift);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimFinger::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_Enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_Enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimFinger::execEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Enabled();
		P_NATIVE_END;
	}
	void UAnimFinger::StaticRegisterNativesUAnimFinger()
	{
		UClass* Class = UAnimFinger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeBasis", &UAnimFinger::execChangeBasis },
			{ "Enabled", &UAnimFinger::execEnabled },
			{ "SetEnabled", &UAnimFinger::execSetEnabled },
			{ "SetFromLeapFinger", &UAnimFinger::execSetFromLeapFinger },
			{ "TransformFinger", &UAnimFinger::execTransformFinger },
			{ "TranslateFinger", &UAnimFinger::execTranslateFinger },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimFinger_ChangeBasis_Statics
	{
		struct AnimFinger_eventChangeBasis_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimFinger_ChangeBasis_Statics::NewProp_PreBase = { "PreBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimFinger_eventChangeBasis_Parms, PreBase), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimFinger_ChangeBasis_Statics::NewProp_PostBase = { "PostBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimFinger_eventChangeBasis_Parms, PostBase), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimFinger_ChangeBasis_Statics::NewProp_AdjustVectors_SetBit(void* Obj)
	{
		((AnimFinger_eventChangeBasis_Parms*)Obj)->AdjustVectors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimFinger_ChangeBasis_Statics::NewProp_AdjustVectors = { "AdjustVectors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimFinger_eventChangeBasis_Parms), &Z_Construct_UFunction_UAnimFinger_ChangeBasis_Statics::NewProp_AdjustVectors_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimFinger_ChangeBasis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimFinger_ChangeBasis_Statics::NewProp_PreBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimFinger_ChangeBasis_Statics::NewProp_PostBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimFinger_ChangeBasis_Statics::NewProp_AdjustVectors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimFinger_ChangeBasis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anim Finger" },
		{ "Comment", "/**\n\x09* Changes the Basis by rotations sets. Used for rotating from XForward to YForward defaults\n\x09* in animation.\n\x09* \xe9\x80\x9a\xe8\xbf\x87\xe6\x97\x8b\xe8\xbd\xac\xe9\x9b\x86\xe5\x90\x88\xe6\x9b\xb4\xe6\x94\xb9\xe5\x9f\xba\xe5\x87\x86\xe3\x80\x82\xe7\x94\xa8\xe4\xba\x8e\xe5\x9c\xa8\xe5\x8a\xa8\xe7\x94\xbb\xe4\xb8\xad\xe5\xb0\x86\xe9\xbb\x98\xe8\xae\xa4\xe5\x80\xbc\xe4\xbb\x8e XForward \xe6\x97\x8b\xe8\xbd\xac\xe5\x88\xb0 YForward\xe3\x80\x82\n\x09*\n\x09* @param  PreBase\x09\x09""Basis offset affecting input\n\x09* @param  PostBase\x09\x09""Fixed offset not affecting input\n\x09* @param  AdjustVectors Whether the basis should affect vectors or just orientation\n\x09*/" },
		{ "CPP_Default_AdjustVectors", "true" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimFinger.h" },
		{ "ToolTip", "Changes the Basis by rotations sets. Used for rotating from XForward to YForward defaults\nin animation.\n\xe9\x80\x9a\xe8\xbf\x87\xe6\x97\x8b\xe8\xbd\xac\xe9\x9b\x86\xe5\x90\x88\xe6\x9b\xb4\xe6\x94\xb9\xe5\x9f\xba\xe5\x87\x86\xe3\x80\x82\xe7\x94\xa8\xe4\xba\x8e\xe5\x9c\xa8\xe5\x8a\xa8\xe7\x94\xbb\xe4\xb8\xad\xe5\xb0\x86\xe9\xbb\x98\xe8\xae\xa4\xe5\x80\xbc\xe4\xbb\x8e XForward \xe6\x97\x8b\xe8\xbd\xac\xe5\x88\xb0 YForward\xe3\x80\x82\n\n@param  PreBase               Basis offset affecting input\n@param  PostBase              Fixed offset not affecting input\n@param  AdjustVectors Whether the basis should affect vectors or just orientation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimFinger_ChangeBasis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimFinger, nullptr, "ChangeBasis", nullptr, nullptr, sizeof(AnimFinger_eventChangeBasis_Parms), Z_Construct_UFunction_UAnimFinger_ChangeBasis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimFinger_ChangeBasis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimFinger_ChangeBasis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimFinger_ChangeBasis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimFinger_ChangeBasis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimFinger_ChangeBasis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimFinger_Enabled_Statics
	{
		struct AnimFinger_eventEnabled_Parms
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
	void Z_Construct_UFunction_UAnimFinger_Enabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimFinger_eventEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimFinger_Enabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimFinger_eventEnabled_Parms), &Z_Construct_UFunction_UAnimFinger_Enabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimFinger_Enabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimFinger_Enabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimFinger_Enabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anim Finger" },
		{ "Comment", "/**\n\x09* Check whether alpha blend is 1.f\n\x09*\n\x09* @return  True if alpha is 1.f\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimFinger.h" },
		{ "ToolTip", "Check whether alpha blend is 1.f\n\n@return  True if alpha is 1.f" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimFinger_Enabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimFinger, nullptr, "Enabled", nullptr, nullptr, sizeof(AnimFinger_eventEnabled_Parms), Z_Construct_UFunction_UAnimFinger_Enabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimFinger_Enabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimFinger_Enabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimFinger_Enabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimFinger_Enabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimFinger_Enabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimFinger_SetEnabled_Statics
	{
		struct AnimFinger_eventSetEnabled_Parms
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
	void Z_Construct_UFunction_UAnimFinger_SetEnabled_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((AnimFinger_eventSetEnabled_Parms*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimFinger_SetEnabled_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimFinger_eventSetEnabled_Parms), &Z_Construct_UFunction_UAnimFinger_SetEnabled_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimFinger_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimFinger_SetEnabled_Statics::NewProp_Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimFinger_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anim Finger" },
		{ "Comment", "/**\n\x09* Set enabled state for animation query, Alpha = 1.f\n\x09* Will affect a child bones.\n\x09*\n\x09* @param  Enable default to true\n\x09*/" },
		{ "CPP_Default_Enable", "true" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimFinger.h" },
		{ "ToolTip", "Set enabled state for animation query, Alpha = 1.f\nWill affect a child bones.\n\n@param  Enable default to true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimFinger_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimFinger, nullptr, "SetEnabled", nullptr, nullptr, sizeof(AnimFinger_eventSetEnabled_Parms), Z_Construct_UFunction_UAnimFinger_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimFinger_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimFinger_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimFinger_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimFinger_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimFinger_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimFinger_SetFromLeapFinger_Statics
	{
		struct AnimFinger_eventSetFromLeapFinger_Parms
		{
			ULeapFinger* Finger;
			ELeapHandType HandType;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Finger;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HandType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HandType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimFinger_SetFromLeapFinger_Statics::NewProp_Finger = { "Finger", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimFinger_eventSetFromLeapFinger_Parms, Finger), Z_Construct_UClass_ULeapFinger_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimFinger_SetFromLeapFinger_Statics::NewProp_HandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimFinger_SetFromLeapFinger_Statics::NewProp_HandType = { "HandType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimFinger_eventSetFromLeapFinger_Parms, HandType), Z_Construct_UEnum_SimpleLeapMotion_ELeapHandType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimFinger_SetFromLeapFinger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimFinger_SetFromLeapFinger_Statics::NewProp_Finger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimFinger_SetFromLeapFinger_Statics::NewProp_HandType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimFinger_SetFromLeapFinger_Statics::NewProp_HandType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimFinger_SetFromLeapFinger_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anim Finger" },
		{ "Comment", "/**\n\x09* Convenience function to copy the state of the AnimFinger from the LeapFinger\n\x09* \xe5\xb0\x86 AnimFinger \xe7\x9a\x84\xe7\x8a\xb6\xe6\x80\x81\xe4\xbb\x8e LeapFinger \xe5\xa4\x8d\xe5\x88\xb6\xe8\xbf\x87\xe6\x9d\xa5\xe7\x9a\x84\xe4\xbe\xbf\xe6\x8d\xb7\xe5\x87\xbd\xe6\x95\xb0\xe3\x80\x82\n\x09*\n\x09* @param Finger finger to copy from\n\x09* @param HandType left or right\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimFinger.h" },
		{ "ToolTip", "Convenience function to copy the state of the AnimFinger from the LeapFinger\n\xe5\xb0\x86 AnimFinger \xe7\x9a\x84\xe7\x8a\xb6\xe6\x80\x81\xe4\xbb\x8e LeapFinger \xe5\xa4\x8d\xe5\x88\xb6\xe8\xbf\x87\xe6\x9d\xa5\xe7\x9a\x84\xe4\xbe\xbf\xe6\x8d\xb7\xe5\x87\xbd\xe6\x95\xb0\xe3\x80\x82\n\n@param Finger finger to copy from\n@param HandType left or right" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimFinger_SetFromLeapFinger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimFinger, nullptr, "SetFromLeapFinger", nullptr, nullptr, sizeof(AnimFinger_eventSetFromLeapFinger_Parms), Z_Construct_UFunction_UAnimFinger_SetFromLeapFinger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimFinger_SetFromLeapFinger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimFinger_SetFromLeapFinger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimFinger_SetFromLeapFinger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimFinger_SetFromLeapFinger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimFinger_SetFromLeapFinger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimFinger_TransformFinger_Statics
	{
		struct AnimFinger_eventTransformFinger_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimFinger_TransformFinger_Statics::NewProp_ByTransform = { "ByTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimFinger_eventTransformFinger_Parms, ByTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimFinger_TransformFinger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimFinger_TransformFinger_Statics::NewProp_ByTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimFinger_TransformFinger_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anim Finger" },
		{ "Comment", "/**\n\x09* Transform all the bones in the finger by the given transform\n\x09* \xe9\x80\x9a\xe8\xbf\x87\xe7\xbb\x99\xe5\xae\x9a\xe7\x9a\x84\xe5\x8f\x98\xe6\x8d\xa2\xe5\x8f\x98\xe6\x8d\xa2\xe6\x89\x8b\xe6\x8c\x87\xe4\xb8\xad\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe9\xaa\xa8\xe9\xaa\xbc\n\x09*\n\x09* @param ByTransform\x09""Affecting transform\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimFinger.h" },
		{ "ToolTip", "Transform all the bones in the finger by the given transform\n\xe9\x80\x9a\xe8\xbf\x87\xe7\xbb\x99\xe5\xae\x9a\xe7\x9a\x84\xe5\x8f\x98\xe6\x8d\xa2\xe5\x8f\x98\xe6\x8d\xa2\xe6\x89\x8b\xe6\x8c\x87\xe4\xb8\xad\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe9\xaa\xa8\xe9\xaa\xbc\n\n@param ByTransform    Affecting transform" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimFinger_TransformFinger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimFinger, nullptr, "TransformFinger", nullptr, nullptr, sizeof(AnimFinger_eventTransformFinger_Parms), Z_Construct_UFunction_UAnimFinger_TransformFinger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimFinger_TransformFinger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimFinger_TransformFinger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimFinger_TransformFinger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimFinger_TransformFinger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimFinger_TransformFinger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimFinger_TranslateFinger_Statics
	{
		struct AnimFinger_eventTranslateFinger_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimFinger_TranslateFinger_Statics::NewProp_Shift = { "Shift", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimFinger_eventTranslateFinger_Parms, Shift), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimFinger_TranslateFinger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimFinger_TranslateFinger_Statics::NewProp_Shift,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimFinger_TranslateFinger_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anim Finger" },
		{ "Comment", "/**\n\x09* Translate all the bones in the finger by given vector amount\n\x09* \xe6\x8c\x89\xe7\xbb\x99\xe5\xae\x9a\xe7\x9a\x84\xe5\x90\x91\xe9\x87\x8f\xe9\x87\x8f\xe5\xb9\xb3\xe7\xa7\xbb\xe6\x89\x8b\xe6\x8c\x87\xe4\xb8\xad\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe9\xaa\xa8\xe9\xaa\xbc\n\x09*\n\x09* @param  Shift\x09\x09Vector amount\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimFinger.h" },
		{ "ToolTip", "Translate all the bones in the finger by given vector amount\n\xe6\x8c\x89\xe7\xbb\x99\xe5\xae\x9a\xe7\x9a\x84\xe5\x90\x91\xe9\x87\x8f\xe9\x87\x8f\xe5\xb9\xb3\xe7\xa7\xbb\xe6\x89\x8b\xe6\x8c\x87\xe4\xb8\xad\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe9\xaa\xa8\xe9\xaa\xbc\n\n@param  Shift         Vector amount" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimFinger_TranslateFinger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimFinger, nullptr, "TranslateFinger", nullptr, nullptr, sizeof(AnimFinger_eventTranslateFinger_Parms), Z_Construct_UFunction_UAnimFinger_TranslateFinger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimFinger_TranslateFinger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimFinger_TranslateFinger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimFinger_TranslateFinger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimFinger_TranslateFinger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimFinger_TranslateFinger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimFinger_NoRegister()
	{
		return UAnimFinger::StaticClass();
	}
	struct Z_Construct_UClass_UAnimFinger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Metacarpal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Metacarpal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Proximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Proximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intermediate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Intermediate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Distal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimFinger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimFinger_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimFinger_ChangeBasis, "ChangeBasis" }, // 1730784477
		{ &Z_Construct_UFunction_UAnimFinger_Enabled, "Enabled" }, // 1975516168
		{ &Z_Construct_UFunction_UAnimFinger_SetEnabled, "SetEnabled" }, // 941244490
		{ &Z_Construct_UFunction_UAnimFinger_SetFromLeapFinger, "SetFromLeapFinger" }, // 654276815
		{ &Z_Construct_UFunction_UAnimFinger_TransformFinger, "TransformFinger" }, // 2547348658
		{ &Z_Construct_UFunction_UAnimFinger_TranslateFinger, "TranslateFinger" }, // 777190908
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimFinger_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AnimBody/AnimFinger.h" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimFinger.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimFinger_Statics::NewProp_Metacarpal_MetaData[] = {
		{ "Category", "Anim Finger" },
		{ "Comment", "/**\n\x09* Metacarpal Animation Bone\n\x09* \xe6\x8e\x8c\xe9\xaa\xa8\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimFinger.h" },
		{ "ToolTip", "Metacarpal Animation Bone\n\xe6\x8e\x8c\xe9\xaa\xa8" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimFinger_Statics::NewProp_Metacarpal = { "Metacarpal", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimFinger, Metacarpal), Z_Construct_UClass_UAnimBone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimFinger_Statics::NewProp_Metacarpal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimFinger_Statics::NewProp_Metacarpal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimFinger_Statics::NewProp_Proximal_MetaData[] = {
		{ "Category", "Anim Finger" },
		{ "Comment", "/**\n\x09* Proximal Animation Bone\n\x09* \xe8\xbf\x91\xe8\x8a\x82\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimFinger.h" },
		{ "ToolTip", "Proximal Animation Bone\n\xe8\xbf\x91\xe8\x8a\x82" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimFinger_Statics::NewProp_Proximal = { "Proximal", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimFinger, Proximal), Z_Construct_UClass_UAnimBone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimFinger_Statics::NewProp_Proximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimFinger_Statics::NewProp_Proximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimFinger_Statics::NewProp_Intermediate_MetaData[] = {
		{ "Category", "Anim Finger" },
		{ "Comment", "/**\n\x09* Intermediate Animation Bone\n\x09* \xe4\xb8\xad\xe8\x8a\x82\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimFinger.h" },
		{ "ToolTip", "Intermediate Animation Bone\n\xe4\xb8\xad\xe8\x8a\x82" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimFinger_Statics::NewProp_Intermediate = { "Intermediate", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimFinger, Intermediate), Z_Construct_UClass_UAnimBone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimFinger_Statics::NewProp_Intermediate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimFinger_Statics::NewProp_Intermediate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimFinger_Statics::NewProp_Distal_MetaData[] = {
		{ "Category", "Anim Finger" },
		{ "Comment", "/**\n\x09* Distal Animation Bone\n\x09* \xe6\x9c\xab\xe8\x8a\x82\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimFinger.h" },
		{ "ToolTip", "Distal Animation Bone\n\xe6\x9c\xab\xe8\x8a\x82" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimFinger_Statics::NewProp_Distal = { "Distal", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimFinger, Distal), Z_Construct_UClass_UAnimBone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimFinger_Statics::NewProp_Distal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimFinger_Statics::NewProp_Distal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimFinger_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Anim Finger" },
		{ "Comment", "/**\n\x09* Animation alpha blend\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimBody/AnimFinger.h" },
		{ "ToolTip", "Animation alpha blend" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimFinger_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimFinger, Alpha), METADATA_PARAMS(Z_Construct_UClass_UAnimFinger_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimFinger_Statics::NewProp_Alpha_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimFinger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimFinger_Statics::NewProp_Metacarpal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimFinger_Statics::NewProp_Proximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimFinger_Statics::NewProp_Intermediate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimFinger_Statics::NewProp_Distal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimFinger_Statics::NewProp_Alpha,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimFinger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimFinger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimFinger_Statics::ClassParams = {
		&UAnimFinger::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimFinger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimFinger_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimFinger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimFinger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimFinger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimFinger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimFinger, 104484682);
	template<> SIMPLELEAPMOTION_API UClass* StaticClass<UAnimFinger>()
	{
		return UAnimFinger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimFinger(Z_Construct_UClass_UAnimFinger, &UAnimFinger::StaticClass, TEXT("/Script/SimpleLeapMotion"), TEXT("UAnimFinger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimFinger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
