// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleLeapMotion/Public/LeapEnums.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapEnums() {}
// Cross Module References
	SIMPLELEAPMOTION_API UEnum* Z_Construct_UEnum_SimpleLeapMotion_ELeapZone();
	UPackage* Z_Construct_UPackage__Script_SimpleLeapMotion();
	SIMPLELEAPMOTION_API UEnum* Z_Construct_UEnum_SimpleLeapMotion_ELeapHandType();
	SIMPLELEAPMOTION_API UEnum* Z_Construct_UEnum_SimpleLeapMotion_ELeapBasicDirection();
	SIMPLELEAPMOTION_API UEnum* Z_Construct_UEnum_SimpleLeapMotion_ELeapGestureState();
	SIMPLELEAPMOTION_API UEnum* Z_Construct_UEnum_SimpleLeapMotion_ELeapGestureType();
	SIMPLELEAPMOTION_API UEnum* Z_Construct_UEnum_SimpleLeapMotion_ELeapBoneType();
	SIMPLELEAPMOTION_API UEnum* Z_Construct_UEnum_SimpleLeapMotion_ELeapFingerType();
// End Cross Module References
	static UEnum* ELeapZone_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleLeapMotion_ELeapZone, Z_Construct_UPackage__Script_SimpleLeapMotion(), TEXT("ELeapZone"));
		}
		return Singleton;
	}
	template<> SIMPLELEAPMOTION_API UEnum* StaticEnum<ELeapZone>()
	{
		return ELeapZone_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELeapZone(ELeapZone_StaticEnum, TEXT("/Script/SimpleLeapMotion"), TEXT("ELeapZone"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleLeapMotion_ELeapZone_Hash() { return 2768094936U; }
	UEnum* Z_Construct_UEnum_SimpleLeapMotion_ELeapZone()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleLeapMotion();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELeapZone"), 0, Get_Z_Construct_UEnum_SimpleLeapMotion_ELeapZone_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELeapZone::ZONE_ERROR", (int64)ELeapZone::ZONE_ERROR },
				{ "ELeapZone::ZONE_NONE", (int64)ELeapZone::ZONE_NONE },
				{ "ELeapZone::ZONE_HOVERING", (int64)ELeapZone::ZONE_HOVERING },
				{ "ELeapZone::ZONE_TOUCHING", (int64)ELeapZone::ZONE_TOUCHING },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// \xe7\x94\xa8\xe4\xba\x8e\xe6\x8f\x8f\xe8\xbf\xb0\xe6\x89\x8b\xe6\x8c\x87\xe6\x88\x96\xe5\xb7\xa5\xe5\x85\xb7\xe4\xb8\x8e\xe6\x84\x9f\xe5\xba\x94\xe8\xae\xbe\xe5\xa4\x87\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe4\xba\xa4\xe4\xba\x92\xe7\x8a\xb6\xe6\x80\x81\n" },
				{ "ModuleRelativePath", "Public/LeapEnums.h" },
				{ "ToolTip", "\xe7\x94\xa8\xe4\xba\x8e\xe6\x8f\x8f\xe8\xbf\xb0\xe6\x89\x8b\xe6\x8c\x87\xe6\x88\x96\xe5\xb7\xa5\xe5\x85\xb7\xe4\xb8\x8e\xe6\x84\x9f\xe5\xba\x94\xe8\xae\xbe\xe5\xa4\x87\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe4\xba\xa4\xe4\xba\x92\xe7\x8a\xb6\xe6\x80\x81" },
				{ "ZONE_ERROR.Comment", "// \xe9\x94\x99\xe8\xaf\xaf\xe5\x8c\xba\xe5\x9f\x9f\xef\xbc\x88\xe8\xa1\xa8\xe7\xa4\xba\xe6\x97\xa0\xe6\xb3\x95\xe8\xaf\x86\xe5\x88\xab\xe6\x88\x96\xe9\x94\x99\xe8\xaf\xaf\xe7\x9a\x84\xe5\x8c\xba\xe5\x9f\x9f\xe7\x8a\xb6\xe6\x80\x81\xef\xbc\x89\n" },
				{ "ZONE_ERROR.Name", "ELeapZone::ZONE_ERROR" },
				{ "ZONE_ERROR.ToolTip", "\xe9\x94\x99\xe8\xaf\xaf\xe5\x8c\xba\xe5\x9f\x9f\xef\xbc\x88\xe8\xa1\xa8\xe7\xa4\xba\xe6\x97\xa0\xe6\xb3\x95\xe8\xaf\x86\xe5\x88\xab\xe6\x88\x96\xe9\x94\x99\xe8\xaf\xaf\xe7\x9a\x84\xe5\x8c\xba\xe5\x9f\x9f\xe7\x8a\xb6\xe6\x80\x81\xef\xbc\x89" },
				{ "ZONE_HOVERING.Comment", "// \xe6\x82\xac\xe5\x81\x9c\xe5\x8c\xba\xe5\x9f\x9f\xef\xbc\x88\xe8\xa1\xa8\xe7\xa4\xba\xe6\x89\x8b\xe6\x8c\x87\xe6\x88\x96\xe5\xb7\xa5\xe5\x85\xb7\xe5\x9c\xa8\xe6\x84\x9f\xe5\xba\x94\xe8\xae\xbe\xe5\xa4\x87\xe4\xb8\x8a\xe6\x96\xb9\xef\xbc\x8c\xe4\xbd\x86\xe6\x9c\xaa\xe6\x8e\xa5\xe8\xa7\xa6\xef\xbc\x89\n" },
				{ "ZONE_HOVERING.Name", "ELeapZone::ZONE_HOVERING" },
				{ "ZONE_HOVERING.ToolTip", "\xe6\x82\xac\xe5\x81\x9c\xe5\x8c\xba\xe5\x9f\x9f\xef\xbc\x88\xe8\xa1\xa8\xe7\xa4\xba\xe6\x89\x8b\xe6\x8c\x87\xe6\x88\x96\xe5\xb7\xa5\xe5\x85\xb7\xe5\x9c\xa8\xe6\x84\x9f\xe5\xba\x94\xe8\xae\xbe\xe5\xa4\x87\xe4\xb8\x8a\xe6\x96\xb9\xef\xbc\x8c\xe4\xbd\x86\xe6\x9c\xaa\xe6\x8e\xa5\xe8\xa7\xa6\xef\xbc\x89" },
				{ "ZONE_NONE.Comment", "// \xe6\x97\xa0\xe5\x8c\xba\xe5\x9f\x9f\xef\xbc\x88\xe8\xa1\xa8\xe7\xa4\xba\xe6\x89\x8b\xe6\x8c\x87\xe6\x88\x96\xe5\xb7\xa5\xe5\x85\xb7\xe4\xb8\x8d\xe5\x9c\xa8\xe4\xbb\xbb\xe4\xbd\x95\xe5\xae\x9a\xe4\xb9\x89\xe7\x9a\x84\xe5\x8c\xba\xe5\x9f\x9f\xe5\x86\x85\xef\xbc\x89\n" },
				{ "ZONE_NONE.Name", "ELeapZone::ZONE_NONE" },
				{ "ZONE_NONE.ToolTip", "\xe6\x97\xa0\xe5\x8c\xba\xe5\x9f\x9f\xef\xbc\x88\xe8\xa1\xa8\xe7\xa4\xba\xe6\x89\x8b\xe6\x8c\x87\xe6\x88\x96\xe5\xb7\xa5\xe5\x85\xb7\xe4\xb8\x8d\xe5\x9c\xa8\xe4\xbb\xbb\xe4\xbd\x95\xe5\xae\x9a\xe4\xb9\x89\xe7\x9a\x84\xe5\x8c\xba\xe5\x9f\x9f\xe5\x86\x85\xef\xbc\x89" },
				{ "ZONE_TOUCHING.Comment", "// \xe6\x8e\xa5\xe8\xa7\xa6\xe5\x8c\xba\xe5\x9f\x9f\xef\xbc\x88\xe8\xa1\xa8\xe7\xa4\xba\xe6\x89\x8b\xe6\x8c\x87\xe6\x88\x96\xe5\xb7\xa5\xe5\x85\xb7\xe4\xb8\x8e\xe6\x84\x9f\xe5\xba\x94\xe8\xae\xbe\xe5\xa4\x87\xe6\x8e\xa5\xe8\xa7\xa6\xef\xbc\x89\n" },
				{ "ZONE_TOUCHING.Name", "ELeapZone::ZONE_TOUCHING" },
				{ "ZONE_TOUCHING.ToolTip", "\xe6\x8e\xa5\xe8\xa7\xa6\xe5\x8c\xba\xe5\x9f\x9f\xef\xbc\x88\xe8\xa1\xa8\xe7\xa4\xba\xe6\x89\x8b\xe6\x8c\x87\xe6\x88\x96\xe5\xb7\xa5\xe5\x85\xb7\xe4\xb8\x8e\xe6\x84\x9f\xe5\xba\x94\xe8\xae\xbe\xe5\xa4\x87\xe6\x8e\xa5\xe8\xa7\xa6\xef\xbc\x89" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
				nullptr,
				"ELeapZone",
				"ELeapZone",
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
	static UEnum* ELeapHandType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleLeapMotion_ELeapHandType, Z_Construct_UPackage__Script_SimpleLeapMotion(), TEXT("ELeapHandType"));
		}
		return Singleton;
	}
	template<> SIMPLELEAPMOTION_API UEnum* StaticEnum<ELeapHandType>()
	{
		return ELeapHandType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELeapHandType(ELeapHandType_StaticEnum, TEXT("/Script/SimpleLeapMotion"), TEXT("ELeapHandType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleLeapMotion_ELeapHandType_Hash() { return 3927790240U; }
	UEnum* Z_Construct_UEnum_SimpleLeapMotion_ELeapHandType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleLeapMotion();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELeapHandType"), 0, Get_Z_Construct_UEnum_SimpleLeapMotion_ELeapHandType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELeapHandType::HAND_UNKNOWN", (int64)ELeapHandType::HAND_UNKNOWN },
				{ "ELeapHandType::HAND_LEFT", (int64)ELeapHandType::HAND_LEFT },
				{ "ELeapHandType::HAND_RIGHT", (int64)ELeapHandType::HAND_RIGHT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HAND_LEFT.Name", "ELeapHandType::HAND_LEFT" },
				{ "HAND_RIGHT.Name", "ELeapHandType::HAND_RIGHT" },
				{ "HAND_UNKNOWN.Name", "ELeapHandType::HAND_UNKNOWN" },
				{ "ModuleRelativePath", "Public/LeapEnums.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
				nullptr,
				"ELeapHandType",
				"ELeapHandType",
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
	static UEnum* ELeapBasicDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleLeapMotion_ELeapBasicDirection, Z_Construct_UPackage__Script_SimpleLeapMotion(), TEXT("ELeapBasicDirection"));
		}
		return Singleton;
	}
	template<> SIMPLELEAPMOTION_API UEnum* StaticEnum<ELeapBasicDirection>()
	{
		return ELeapBasicDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELeapBasicDirection(ELeapBasicDirection_StaticEnum, TEXT("/Script/SimpleLeapMotion"), TEXT("ELeapBasicDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleLeapMotion_ELeapBasicDirection_Hash() { return 2189792720U; }
	UEnum* Z_Construct_UEnum_SimpleLeapMotion_ELeapBasicDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleLeapMotion();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELeapBasicDirection"), 0, Get_Z_Construct_UEnum_SimpleLeapMotion_ELeapBasicDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELeapBasicDirection::DIRECTION_NONE", (int64)ELeapBasicDirection::DIRECTION_NONE },
				{ "ELeapBasicDirection::DIRECTION_LEFT", (int64)ELeapBasicDirection::DIRECTION_LEFT },
				{ "ELeapBasicDirection::DIRECTION_RIGHT", (int64)ELeapBasicDirection::DIRECTION_RIGHT },
				{ "ELeapBasicDirection::DIRECTION_UP", (int64)ELeapBasicDirection::DIRECTION_UP },
				{ "ELeapBasicDirection::DIRECTION_DOWN", (int64)ELeapBasicDirection::DIRECTION_DOWN },
				{ "ELeapBasicDirection::DIRECTION_AWAY", (int64)ELeapBasicDirection::DIRECTION_AWAY },
				{ "ELeapBasicDirection::DIRECTION_TOWARD", (int64)ELeapBasicDirection::DIRECTION_TOWARD },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DIRECTION_AWAY.Comment", "// \xe8\xbf\x9c\xe7\xa6\xbb\xef\xbc\x88\xe8\xbf\x9c\xe7\xa6\xbb\xe6\x84\x9f\xe5\xba\x94\xe8\xae\xbe\xe5\xa4\x87\xef\xbc\x89\n" },
				{ "DIRECTION_AWAY.Name", "ELeapBasicDirection::DIRECTION_AWAY" },
				{ "DIRECTION_AWAY.ToolTip", "\xe8\xbf\x9c\xe7\xa6\xbb\xef\xbc\x88\xe8\xbf\x9c\xe7\xa6\xbb\xe6\x84\x9f\xe5\xba\x94\xe8\xae\xbe\xe5\xa4\x87\xef\xbc\x89" },
				{ "DIRECTION_DOWN.Name", "ELeapBasicDirection::DIRECTION_DOWN" },
				{ "DIRECTION_LEFT.Name", "ELeapBasicDirection::DIRECTION_LEFT" },
				{ "DIRECTION_NONE.Name", "ELeapBasicDirection::DIRECTION_NONE" },
				{ "DIRECTION_RIGHT.Name", "ELeapBasicDirection::DIRECTION_RIGHT" },
				{ "DIRECTION_TOWARD.Comment", "// \xe6\x9c\x9d\xe5\x90\x91\xef\xbc\x88\xe9\x9d\xa0\xe8\xbf\x91\xe6\x84\x9f\xe5\xba\x94\xe8\xae\xbe\xe5\xa4\x87\xef\xbc\x89\n" },
				{ "DIRECTION_TOWARD.Name", "ELeapBasicDirection::DIRECTION_TOWARD" },
				{ "DIRECTION_TOWARD.ToolTip", "\xe6\x9c\x9d\xe5\x90\x91\xef\xbc\x88\xe9\x9d\xa0\xe8\xbf\x91\xe6\x84\x9f\xe5\xba\x94\xe8\xae\xbe\xe5\xa4\x87\xef\xbc\x89" },
				{ "DIRECTION_UP.Name", "ELeapBasicDirection::DIRECTION_UP" },
				{ "ModuleRelativePath", "Public/LeapEnums.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
				nullptr,
				"ELeapBasicDirection",
				"ELeapBasicDirection",
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
	static UEnum* ELeapGestureState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleLeapMotion_ELeapGestureState, Z_Construct_UPackage__Script_SimpleLeapMotion(), TEXT("ELeapGestureState"));
		}
		return Singleton;
	}
	template<> SIMPLELEAPMOTION_API UEnum* StaticEnum<ELeapGestureState>()
	{
		return ELeapGestureState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELeapGestureState(ELeapGestureState_StaticEnum, TEXT("/Script/SimpleLeapMotion"), TEXT("ELeapGestureState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleLeapMotion_ELeapGestureState_Hash() { return 2994626041U; }
	UEnum* Z_Construct_UEnum_SimpleLeapMotion_ELeapGestureState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleLeapMotion();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELeapGestureState"), 0, Get_Z_Construct_UEnum_SimpleLeapMotion_ELeapGestureState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELeapGestureState::GESTURE_STATE_INVALID", (int64)ELeapGestureState::GESTURE_STATE_INVALID },
				{ "ELeapGestureState::GESTURE_STATE_START", (int64)ELeapGestureState::GESTURE_STATE_START },
				{ "ELeapGestureState::GESTURE_STATE_UPDATE", (int64)ELeapGestureState::GESTURE_STATE_UPDATE },
				{ "ELeapGestureState::GESTURE_STATE_STOP", (int64)ELeapGestureState::GESTURE_STATE_STOP },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "GESTURE_STATE_INVALID.Comment", "// \xe6\x97\xa0\xe6\x95\x88\xe7\x8a\xb6\xe6\x80\x81\n" },
				{ "GESTURE_STATE_INVALID.Name", "ELeapGestureState::GESTURE_STATE_INVALID" },
				{ "GESTURE_STATE_INVALID.ToolTip", "\xe6\x97\xa0\xe6\x95\x88\xe7\x8a\xb6\xe6\x80\x81" },
				{ "GESTURE_STATE_START.Comment", "// \xe6\x89\x8b\xe5\x8a\xbf\xe5\xbc\x80\xe5\xa7\x8b\n" },
				{ "GESTURE_STATE_START.Name", "ELeapGestureState::GESTURE_STATE_START" },
				{ "GESTURE_STATE_START.ToolTip", "\xe6\x89\x8b\xe5\x8a\xbf\xe5\xbc\x80\xe5\xa7\x8b" },
				{ "GESTURE_STATE_STOP.Comment", "// \xe6\x89\x8b\xe5\x8a\xbf\xe7\xbb\x93\xe6\x9d\x9f\n" },
				{ "GESTURE_STATE_STOP.Name", "ELeapGestureState::GESTURE_STATE_STOP" },
				{ "GESTURE_STATE_STOP.ToolTip", "\xe6\x89\x8b\xe5\x8a\xbf\xe7\xbb\x93\xe6\x9d\x9f" },
				{ "GESTURE_STATE_UPDATE.Comment", "// \xe6\x89\x8b\xe5\x8a\xbf\xe6\x9b\xb4\xe6\x96\xb0\n" },
				{ "GESTURE_STATE_UPDATE.Name", "ELeapGestureState::GESTURE_STATE_UPDATE" },
				{ "GESTURE_STATE_UPDATE.ToolTip", "\xe6\x89\x8b\xe5\x8a\xbf\xe6\x9b\xb4\xe6\x96\xb0" },
				{ "ModuleRelativePath", "Public/LeapEnums.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
				nullptr,
				"ELeapGestureState",
				"ELeapGestureState",
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
	static UEnum* ELeapGestureType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleLeapMotion_ELeapGestureType, Z_Construct_UPackage__Script_SimpleLeapMotion(), TEXT("ELeapGestureType"));
		}
		return Singleton;
	}
	template<> SIMPLELEAPMOTION_API UEnum* StaticEnum<ELeapGestureType>()
	{
		return ELeapGestureType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELeapGestureType(ELeapGestureType_StaticEnum, TEXT("/Script/SimpleLeapMotion"), TEXT("ELeapGestureType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleLeapMotion_ELeapGestureType_Hash() { return 1084747811U; }
	UEnum* Z_Construct_UEnum_SimpleLeapMotion_ELeapGestureType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleLeapMotion();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELeapGestureType"), 0, Get_Z_Construct_UEnum_SimpleLeapMotion_ELeapGestureType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELeapGestureType::GESTURE_TYPE_INVALID", (int64)ELeapGestureType::GESTURE_TYPE_INVALID },
				{ "ELeapGestureType::GESTURE_TYPE_SWIPE", (int64)ELeapGestureType::GESTURE_TYPE_SWIPE },
				{ "ELeapGestureType::GESTURE_TYPE_CIRCLE", (int64)ELeapGestureType::GESTURE_TYPE_CIRCLE },
				{ "ELeapGestureType::GESTURE_TYPE_SCREEN_TAP", (int64)ELeapGestureType::GESTURE_TYPE_SCREEN_TAP },
				{ "ELeapGestureType::GESTURE_TYPE_KEY_TAP", (int64)ELeapGestureType::GESTURE_TYPE_KEY_TAP },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "GESTURE_TYPE_CIRCLE.Comment", "// \xe5\x9c\x86\xe5\x91\xa8\xe6\x89\x8b\xe5\x8a\xbf\n" },
				{ "GESTURE_TYPE_CIRCLE.Name", "ELeapGestureType::GESTURE_TYPE_CIRCLE" },
				{ "GESTURE_TYPE_CIRCLE.ToolTip", "\xe5\x9c\x86\xe5\x91\xa8\xe6\x89\x8b\xe5\x8a\xbf" },
				{ "GESTURE_TYPE_INVALID.Comment", "// \xe6\x97\xa0\xe6\x95\x88\xe7\x9a\x84\xe6\x89\x8b\xe5\x8a\xbf\n" },
				{ "GESTURE_TYPE_INVALID.Name", "ELeapGestureType::GESTURE_TYPE_INVALID" },
				{ "GESTURE_TYPE_INVALID.ToolTip", "\xe6\x97\xa0\xe6\x95\x88\xe7\x9a\x84\xe6\x89\x8b\xe5\x8a\xbf" },
				{ "GESTURE_TYPE_KEY_TAP.Comment", "// \xe7\xa9\xba\xe4\xb8\xad\xe7\x82\xb9\xe5\x87\xbb\xef\xbc\x88\xe6\x88\x96\xe8\x80\x85\xe8\xaf\xb4\xe6\x8c\x89\xe4\xb8\x8b\xe9\x94\xae\xef\xbc\x9fVR\xef\xbc\x89\n" },
				{ "GESTURE_TYPE_KEY_TAP.Name", "ELeapGestureType::GESTURE_TYPE_KEY_TAP" },
				{ "GESTURE_TYPE_KEY_TAP.ToolTip", "\xe7\xa9\xba\xe4\xb8\xad\xe7\x82\xb9\xe5\x87\xbb\xef\xbc\x88\xe6\x88\x96\xe8\x80\x85\xe8\xaf\xb4\xe6\x8c\x89\xe4\xb8\x8b\xe9\x94\xae\xef\xbc\x9fVR\xef\xbc\x89" },
				{ "GESTURE_TYPE_SCREEN_TAP.Comment", "// \xe5\xb1\x8f\xe5\xb9\x95\xe7\x82\xb9\xe5\x87\xbb\n" },
				{ "GESTURE_TYPE_SCREEN_TAP.Name", "ELeapGestureType::GESTURE_TYPE_SCREEN_TAP" },
				{ "GESTURE_TYPE_SCREEN_TAP.ToolTip", "\xe5\xb1\x8f\xe5\xb9\x95\xe7\x82\xb9\xe5\x87\xbb" },
				{ "GESTURE_TYPE_SWIPE.Comment", "// \xe6\x89\xab\xe5\x8a\xa8\xe6\x89\x8b\xe5\x8a\xbf\n" },
				{ "GESTURE_TYPE_SWIPE.Name", "ELeapGestureType::GESTURE_TYPE_SWIPE" },
				{ "GESTURE_TYPE_SWIPE.ToolTip", "\xe6\x89\xab\xe5\x8a\xa8\xe6\x89\x8b\xe5\x8a\xbf" },
				{ "ModuleRelativePath", "Public/LeapEnums.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
				nullptr,
				"ELeapGestureType",
				"ELeapGestureType",
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
	static UEnum* ELeapBoneType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleLeapMotion_ELeapBoneType, Z_Construct_UPackage__Script_SimpleLeapMotion(), TEXT("ELeapBoneType"));
		}
		return Singleton;
	}
	template<> SIMPLELEAPMOTION_API UEnum* StaticEnum<ELeapBoneType>()
	{
		return ELeapBoneType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELeapBoneType(ELeapBoneType_StaticEnum, TEXT("/Script/SimpleLeapMotion"), TEXT("ELeapBoneType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleLeapMotion_ELeapBoneType_Hash() { return 477255205U; }
	UEnum* Z_Construct_UEnum_SimpleLeapMotion_ELeapBoneType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleLeapMotion();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELeapBoneType"), 0, Get_Z_Construct_UEnum_SimpleLeapMotion_ELeapBoneType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELeapBoneType::TYPE_METACARPAL", (int64)ELeapBoneType::TYPE_METACARPAL },
				{ "ELeapBoneType::TYPE_PROXIMAL", (int64)ELeapBoneType::TYPE_PROXIMAL },
				{ "ELeapBoneType::TYPE_INTERMEDIATE", (int64)ELeapBoneType::TYPE_INTERMEDIATE },
				{ "ELeapBoneType::TYPE_DISTAL", (int64)ELeapBoneType::TYPE_DISTAL },
				{ "ELeapBoneType::TYPE_ERROR", (int64)ELeapBoneType::TYPE_ERROR },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/LeapEnums.h" },
				{ "TYPE_DISTAL.Comment", "// \xe8\xbf\x9c\xe8\x8a\x82\xe6\x8c\x87\xe9\xaa\xa8\xef\xbc\x88\xe6\x89\x8b\xe6\x8c\x87\xe6\x9c\x80\xe6\x9c\xab\xe7\xab\xaf\xe7\x9a\x84\xe6\x8c\x87\xe9\xaa\xa8\xef\xbc\x89\n" },
				{ "TYPE_DISTAL.Name", "ELeapBoneType::TYPE_DISTAL" },
				{ "TYPE_DISTAL.ToolTip", "\xe8\xbf\x9c\xe8\x8a\x82\xe6\x8c\x87\xe9\xaa\xa8\xef\xbc\x88\xe6\x89\x8b\xe6\x8c\x87\xe6\x9c\x80\xe6\x9c\xab\xe7\xab\xaf\xe7\x9a\x84\xe6\x8c\x87\xe9\xaa\xa8\xef\xbc\x89" },
				{ "TYPE_ERROR.Comment", "// \xe9\x94\x99\xe8\xaf\xaf\xe7\xb1\xbb\xe5\x9e\x8b\xef\xbc\x88\xe6\x97\xa0\xe6\xb3\x95\xe8\xaf\x86\xe5\x88\xab\xe6\x88\x96\xe6\x97\xa0\xe6\x95\x88\xe7\x9a\x84\xe9\xaa\xa8\xe9\xaa\xbc\xe7\xb1\xbb\xe5\x9e\x8b\xef\xbc\x89\n" },
				{ "TYPE_ERROR.Name", "ELeapBoneType::TYPE_ERROR" },
				{ "TYPE_ERROR.ToolTip", "\xe9\x94\x99\xe8\xaf\xaf\xe7\xb1\xbb\xe5\x9e\x8b\xef\xbc\x88\xe6\x97\xa0\xe6\xb3\x95\xe8\xaf\x86\xe5\x88\xab\xe6\x88\x96\xe6\x97\xa0\xe6\x95\x88\xe7\x9a\x84\xe9\xaa\xa8\xe9\xaa\xbc\xe7\xb1\xbb\xe5\x9e\x8b\xef\xbc\x89" },
				{ "TYPE_INTERMEDIATE.Comment", "// \xe4\xb8\xad\xe8\x8a\x82\xe6\x8c\x87\xe9\xaa\xa8\xef\xbc\x88\xe8\xbf\x91\xe8\x8a\x82\xe6\x8c\x87\xe9\xaa\xa8\xe5\x92\x8c\xe8\xbf\x9c\xe8\x8a\x82\xe6\x8c\x87\xe9\xaa\xa8\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe6\x8c\x87\xe9\xaa\xa8\xef\xbc\x8c\xe6\x8b\x87\xe6\x8c\x87\xe6\xb2\xa1\xe6\x9c\x89\xef\xbc\x89\n" },
				{ "TYPE_INTERMEDIATE.Name", "ELeapBoneType::TYPE_INTERMEDIATE" },
				{ "TYPE_INTERMEDIATE.ToolTip", "\xe4\xb8\xad\xe8\x8a\x82\xe6\x8c\x87\xe9\xaa\xa8\xef\xbc\x88\xe8\xbf\x91\xe8\x8a\x82\xe6\x8c\x87\xe9\xaa\xa8\xe5\x92\x8c\xe8\xbf\x9c\xe8\x8a\x82\xe6\x8c\x87\xe9\xaa\xa8\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe6\x8c\x87\xe9\xaa\xa8\xef\xbc\x8c\xe6\x8b\x87\xe6\x8c\x87\xe6\xb2\xa1\xe6\x9c\x89\xef\xbc\x89" },
				{ "TYPE_METACARPAL.Comment", "// \xe6\x8e\x8c\xe9\xaa\xa8\xef\xbc\x88\xe8\xbf\x9e\xe6\x8e\xa5\xe6\x89\x8b\xe6\x8c\x87\xe5\x88\xb0\xe6\x89\x8b\xe6\x8e\x8c\xe7\x9a\x84\xe9\xaa\xa8\xe5\xa4\xb4\xef\xbc\x89\n" },
				{ "TYPE_METACARPAL.Name", "ELeapBoneType::TYPE_METACARPAL" },
				{ "TYPE_METACARPAL.ToolTip", "\xe6\x8e\x8c\xe9\xaa\xa8\xef\xbc\x88\xe8\xbf\x9e\xe6\x8e\xa5\xe6\x89\x8b\xe6\x8c\x87\xe5\x88\xb0\xe6\x89\x8b\xe6\x8e\x8c\xe7\x9a\x84\xe9\xaa\xa8\xe5\xa4\xb4\xef\xbc\x89" },
				{ "TYPE_PROXIMAL.Comment", "// \xe8\xbf\x91\xe8\x8a\x82\xe6\x8c\x87\xe9\xaa\xa8\xef\xbc\x88\xe6\x9c\x80\xe9\x9d\xa0\xe8\xbf\x91\xe6\x89\x8b\xe6\x8e\x8c\xe7\x9a\x84\xe6\x8c\x87\xe9\xaa\xa8\xef\xbc\x89\n" },
				{ "TYPE_PROXIMAL.Name", "ELeapBoneType::TYPE_PROXIMAL" },
				{ "TYPE_PROXIMAL.ToolTip", "\xe8\xbf\x91\xe8\x8a\x82\xe6\x8c\x87\xe9\xaa\xa8\xef\xbc\x88\xe6\x9c\x80\xe9\x9d\xa0\xe8\xbf\x91\xe6\x89\x8b\xe6\x8e\x8c\xe7\x9a\x84\xe6\x8c\x87\xe9\xaa\xa8\xef\xbc\x89" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
				nullptr,
				"ELeapBoneType",
				"ELeapBoneType",
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
	static UEnum* ELeapFingerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleLeapMotion_ELeapFingerType, Z_Construct_UPackage__Script_SimpleLeapMotion(), TEXT("ELeapFingerType"));
		}
		return Singleton;
	}
	template<> SIMPLELEAPMOTION_API UEnum* StaticEnum<ELeapFingerType>()
	{
		return ELeapFingerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELeapFingerType(ELeapFingerType_StaticEnum, TEXT("/Script/SimpleLeapMotion"), TEXT("ELeapFingerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleLeapMotion_ELeapFingerType_Hash() { return 2842830988U; }
	UEnum* Z_Construct_UEnum_SimpleLeapMotion_ELeapFingerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleLeapMotion();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELeapFingerType"), 0, Get_Z_Construct_UEnum_SimpleLeapMotion_ELeapFingerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELeapFingerType::FINGER_TYPE_THUMB", (int64)ELeapFingerType::FINGER_TYPE_THUMB },
				{ "ELeapFingerType::FINGER_TYPE_INDEX", (int64)ELeapFingerType::FINGER_TYPE_INDEX },
				{ "ELeapFingerType::FINGER_TYPE_MIDDLE", (int64)ELeapFingerType::FINGER_TYPE_MIDDLE },
				{ "ELeapFingerType::FINGER_TYPE_RING", (int64)ELeapFingerType::FINGER_TYPE_RING },
				{ "ELeapFingerType::FINGER_TYPE_PINKY", (int64)ELeapFingerType::FINGER_TYPE_PINKY },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FINGER_TYPE_INDEX.Comment", "// \xe9\xa3\x9f\xe6\x8c\x87\n" },
				{ "FINGER_TYPE_INDEX.Name", "ELeapFingerType::FINGER_TYPE_INDEX" },
				{ "FINGER_TYPE_INDEX.ToolTip", "\xe9\xa3\x9f\xe6\x8c\x87" },
				{ "FINGER_TYPE_MIDDLE.Comment", "// \xe4\xb8\xad\xe6\x8c\x87\n" },
				{ "FINGER_TYPE_MIDDLE.Name", "ELeapFingerType::FINGER_TYPE_MIDDLE" },
				{ "FINGER_TYPE_MIDDLE.ToolTip", "\xe4\xb8\xad\xe6\x8c\x87" },
				{ "FINGER_TYPE_PINKY.Comment", "// \xe5\xb0\x8f\xe6\x8c\x87\n" },
				{ "FINGER_TYPE_PINKY.Name", "ELeapFingerType::FINGER_TYPE_PINKY" },
				{ "FINGER_TYPE_PINKY.ToolTip", "\xe5\xb0\x8f\xe6\x8c\x87" },
				{ "FINGER_TYPE_RING.Comment", "// \xe6\x97\xa0\xe5\x90\x8d\xe6\x8c\x87\n" },
				{ "FINGER_TYPE_RING.Name", "ELeapFingerType::FINGER_TYPE_RING" },
				{ "FINGER_TYPE_RING.ToolTip", "\xe6\x97\xa0\xe5\x90\x8d\xe6\x8c\x87" },
				{ "FINGER_TYPE_THUMB.Comment", "// \xe6\x8b\x87\xe6\x8c\x87\n" },
				{ "FINGER_TYPE_THUMB.Name", "ELeapFingerType::FINGER_TYPE_THUMB" },
				{ "FINGER_TYPE_THUMB.ToolTip", "\xe6\x8b\x87\xe6\x8c\x87" },
				{ "ModuleRelativePath", "Public/LeapEnums.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleLeapMotion,
				nullptr,
				"ELeapFingerType",
				"ELeapFingerType",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
