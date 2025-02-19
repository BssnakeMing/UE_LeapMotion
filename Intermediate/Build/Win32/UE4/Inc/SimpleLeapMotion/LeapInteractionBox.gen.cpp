// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleLeapMotion/Public/LeapInteractionBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapInteractionBox() {}
// Cross Module References
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapInteractionBox_NoRegister();
	SIMPLELEAPMOTION_API UClass* Z_Construct_UClass_ULeapInteractionBox();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SimpleLeapMotion();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(ULeapInteractionBox::execNormalizePoint)
	{
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_UBOOL(Z_Param_Clamp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->NormalizePoint(Z_Param_Position,Z_Param_Clamp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapInteractionBox::execDenormalizePoint)
	{
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->DenormalizePoint(Z_Param_Position);
		P_NATIVE_END;
	}
	void ULeapInteractionBox::StaticRegisterNativesULeapInteractionBox()
	{
		UClass* Class = ULeapInteractionBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DenormalizePoint", &ULeapInteractionBox::execDenormalizePoint },
			{ "NormalizePoint", &ULeapInteractionBox::execNormalizePoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULeapInteractionBox_DenormalizePoint_Statics
	{
		struct LeapInteractionBox_eventDenormalizePoint_Parms
		{
			FVector Position;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapInteractionBox_DenormalizePoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapInteractionBox_eventDenormalizePoint_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapInteractionBox_DenormalizePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapInteractionBox_eventDenormalizePoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapInteractionBox_DenormalizePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapInteractionBox_DenormalizePoint_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapInteractionBox_DenormalizePoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapInteractionBox_DenormalizePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Interaction Box" },
		{ "Comment", "/**\n\x09* Converts a position defined by normalized InteractionBox coordinates into\n\x09* device coordinates in centimeters.\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "DisplayName", "DenormalizePoint" },
		{ "Keywords", "normalize point" },
		{ "ModuleRelativePath", "Public/LeapInteractionBox.h" },
		{ "ToolTip", "Converts a position defined by normalized InteractionBox coordinates into\ndevice coordinates in centimeters." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapInteractionBox_DenormalizePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapInteractionBox, nullptr, "DenormalizePoint", nullptr, nullptr, sizeof(LeapInteractionBox_eventDenormalizePoint_Parms), Z_Construct_UFunction_ULeapInteractionBox_DenormalizePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapInteractionBox_DenormalizePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapInteractionBox_DenormalizePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapInteractionBox_DenormalizePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapInteractionBox_DenormalizePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapInteractionBox_DenormalizePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapInteractionBox_NormalizePoint_Statics
	{
		struct LeapInteractionBox_eventNormalizePoint_Parms
		{
			FVector Position;
			bool Clamp;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static void NewProp_Clamp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Clamp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapInteractionBox_NormalizePoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapInteractionBox_eventNormalizePoint_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULeapInteractionBox_NormalizePoint_Statics::NewProp_Clamp_SetBit(void* Obj)
	{
		((LeapInteractionBox_eventNormalizePoint_Parms*)Obj)->Clamp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapInteractionBox_NormalizePoint_Statics::NewProp_Clamp = { "Clamp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LeapInteractionBox_eventNormalizePoint_Parms), &Z_Construct_UFunction_ULeapInteractionBox_NormalizePoint_Statics::NewProp_Clamp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapInteractionBox_NormalizePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapInteractionBox_eventNormalizePoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapInteractionBox_NormalizePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapInteractionBox_NormalizePoint_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapInteractionBox_NormalizePoint_Statics::NewProp_Clamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapInteractionBox_NormalizePoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapInteractionBox_NormalizePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Interaction Box" },
		{ "Comment", "/**\n\x09* Normalizes the coordinates of a point using the interaction box.\n\x09*\n\x09* @param\x09Position\x09The input position in device coordinates.\n\x09* @param\x09""Clamp\x09\x09Whether or not to limit the output value to the range [0,1] when the input position is outside the InteractionBox. Defaults to true.\n\x09* @return\x09The normalized position.\n\x09*/" },
		{ "CompactNodeTitle", "" },
		{ "CPP_Default_Clamp", "true" },
		{ "DisplayName", "normalizePoint" },
		{ "Keywords", "normalize point" },
		{ "ModuleRelativePath", "Public/LeapInteractionBox.h" },
		{ "ToolTip", "Normalizes the coordinates of a point using the interaction box.\n\n@param        Position        The input position in device coordinates.\n@param        Clamp           Whether or not to limit the output value to the range [0,1] when the input position is outside the InteractionBox. Defaults to true.\n@return       The normalized position." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapInteractionBox_NormalizePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapInteractionBox, nullptr, "NormalizePoint", nullptr, nullptr, sizeof(LeapInteractionBox_eventNormalizePoint_Parms), Z_Construct_UFunction_ULeapInteractionBox_NormalizePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapInteractionBox_NormalizePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapInteractionBox_NormalizePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapInteractionBox_NormalizePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapInteractionBox_NormalizePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapInteractionBox_NormalizePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULeapInteractionBox_NoRegister()
	{
		return ULeapInteractionBox::StaticClass();
	}
	struct Z_Construct_UClass_ULeapInteractionBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Depth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsValid_MetaData[];
#endif
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULeapInteractionBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULeapInteractionBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeapInteractionBox_DenormalizePoint, "DenormalizePoint" }, // 4256720761
		{ &Z_Construct_UFunction_ULeapInteractionBox_NormalizePoint, "NormalizePoint" }, // 3251045967
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapInteractionBox_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* The InteractionBox class represents a box-shaped region completely within the \n* field of view of the Leap Motion controller. The interaction box is an axis-aligned \n* rectangular prism and provides normalized coordinates for hands, fingers, and tools \n* within this box.\n*\n* The InteractionBox class can make it easier to map positions in the Leap Motion coordinate \n* system to 2D or 3D coordinate systems used for application drawing.\n*\n* Leap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.InteractionBox.html\n*/" },
		{ "IncludePath", "LeapInteractionBox.h" },
		{ "ModuleRelativePath", "Public/LeapInteractionBox.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The InteractionBox class represents a box-shaped region completely within the\nfield of view of the Leap Motion controller. The interaction box is an axis-aligned\nrectangular prism and provides normalized coordinates for hands, fingers, and tools\nwithin this box.\n\nThe InteractionBox class can make it easier to map positions in the Leap Motion coordinate\nsystem to 2D or 3D coordinate systems used for application drawing.\n\nLeap API reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.InteractionBox.html" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapInteractionBox_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "Leap Interaction Box" },
		{ "Comment", "/**\n\x09* The center of the InteractionBox in device coordinates (centimeters).\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapInteractionBox.h" },
		{ "ToolTip", "The center of the InteractionBox in device coordinates (centimeters)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULeapInteractionBox_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapInteractionBox, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULeapInteractionBox_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapInteractionBox_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapInteractionBox_Statics::NewProp_Depth_MetaData[] = {
		{ "Category", "Leap Interaction Box" },
		{ "Comment", "/**\n\x09* The depth of the InteractionBox in centimeters, measured along the x-axis.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapInteractionBox.h" },
		{ "ToolTip", "The depth of the InteractionBox in centimeters, measured along the x-axis." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapInteractionBox_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapInteractionBox, Depth), METADATA_PARAMS(Z_Construct_UClass_ULeapInteractionBox_Statics::NewProp_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapInteractionBox_Statics::NewProp_Depth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapInteractionBox_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "Leap Interaction Box" },
		{ "Comment", "/**\n\x09* The height of the InteractionBox in centimeters, measured along the z-axis.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapInteractionBox.h" },
		{ "ToolTip", "The height of the InteractionBox in centimeters, measured along the z-axis." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapInteractionBox_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapInteractionBox, Height), METADATA_PARAMS(Z_Construct_UClass_ULeapInteractionBox_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapInteractionBox_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapInteractionBox_Statics::NewProp_IsValid_MetaData[] = {
		{ "Category", "Leap Interaction Box" },
		{ "Comment", "/**\n\x09* Reports whether this is a valid InteractionBox object.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapInteractionBox.h" },
		{ "ToolTip", "Reports whether this is a valid InteractionBox object." },
	};
#endif
	void Z_Construct_UClass_ULeapInteractionBox_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((ULeapInteractionBox*)Obj)->IsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULeapInteractionBox_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULeapInteractionBox), &Z_Construct_UClass_ULeapInteractionBox_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULeapInteractionBox_Statics::NewProp_IsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapInteractionBox_Statics::NewProp_IsValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapInteractionBox_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "Leap Interaction Box" },
		{ "Comment", "/**\n\x09* The width of the InteractionBox in centimeters, measured along the y-axis.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapInteractionBox.h" },
		{ "ToolTip", "The width of the InteractionBox in centimeters, measured along the y-axis." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapInteractionBox_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeapInteractionBox, Width), METADATA_PARAMS(Z_Construct_UClass_ULeapInteractionBox_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapInteractionBox_Statics::NewProp_Width_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeapInteractionBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapInteractionBox_Statics::NewProp_Center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapInteractionBox_Statics::NewProp_Depth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapInteractionBox_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapInteractionBox_Statics::NewProp_IsValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapInteractionBox_Statics::NewProp_Width,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeapInteractionBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeapInteractionBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULeapInteractionBox_Statics::ClassParams = {
		&ULeapInteractionBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULeapInteractionBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULeapInteractionBox_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULeapInteractionBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapInteractionBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeapInteractionBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULeapInteractionBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULeapInteractionBox, 1334705093);
	template<> SIMPLELEAPMOTION_API UClass* StaticClass<ULeapInteractionBox>()
	{
		return ULeapInteractionBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULeapInteractionBox(Z_Construct_UClass_ULeapInteractionBox, &ULeapInteractionBox::StaticClass, TEXT("/Script/SimpleLeapMotion"), TEXT("ULeapInteractionBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeapInteractionBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
