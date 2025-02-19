// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULeapCircleGesture;
class ULeapGesture;
class ULeapKeyTapGesture;
class ULeapFinger;
class ULeapHand;
enum class ELeapHandType : uint8;
class UTexture2D;
class ULeapImage;
class ULeapScreenTapGesture;
class ULeapSwipeGesture;
#ifdef SIMPLELEAPMOTION_LeapEventInterface_generated_h
#error "LeapEventInterface.generated.h already included, missing '#pragma once' in LeapEventInterface.h"
#endif
#define SIMPLELEAPMOTION_LeapEventInterface_generated_h

#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapEventInterface_h_11_SPARSE_DATA
#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapEventInterface_h_11_RPC_WRAPPERS
#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapEventInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapEventInterface_h_11_EVENT_PARMS \
	struct LeapEventInterface_eventCircleGestureDetected_Parms \
	{ \
		ULeapCircleGesture* Gesture; \
	}; \
	struct LeapEventInterface_eventFingerCountChanged_Parms \
	{ \
		int32 Count; \
	}; \
	struct LeapEventInterface_eventGestureDetected_Parms \
	{ \
		ULeapGesture* Gesture; \
	}; \
	struct LeapEventInterface_eventHandCountChanged_Parms \
	{ \
		int32 Count; \
	}; \
	struct LeapEventInterface_eventKeyTapGestureDetected_Parms \
	{ \
		ULeapKeyTapGesture* Gesture; \
	}; \
	struct LeapEventInterface_eventLeapFingerMoved_Parms \
	{ \
		ULeapFinger* Finger; \
	}; \
	struct LeapEventInterface_eventLeapFrontFingerTouch_Parms \
	{ \
		ULeapFinger* Finger; \
	}; \
	struct LeapEventInterface_eventLeapFrontMostFingerMoved_Parms \
	{ \
		ULeapFinger* Finger; \
	}; \
	struct LeapEventInterface_eventLeapHandGrabbed_Parms \
	{ \
		float Strength; \
		ULeapHand* Hand; \
	}; \
	struct LeapEventInterface_eventLeapHandGrabbing_Parms \
	{ \
		float Strength; \
		ULeapHand* Hand; \
	}; \
	struct LeapEventInterface_eventLeapHandMoved_Parms \
	{ \
		ULeapHand* Hand; \
	}; \
	struct LeapEventInterface_eventLeapHandPinched_Parms \
	{ \
		float Strength; \
		ULeapHand* Hand; \
	}; \
	struct LeapEventInterface_eventLeapHandPinching_Parms \
	{ \
		float Strength; \
		ULeapHand* Hand; \
	}; \
	struct LeapEventInterface_eventLeapHandReleased_Parms \
	{ \
		float Strength; \
		ULeapHand* Hand; \
	}; \
	struct LeapEventInterface_eventLeapHandRemoved_Parms \
	{ \
		ELeapHandType HandType; \
		ULeapHand* Hand; \
	}; \
	struct LeapEventInterface_eventLeapHandUnpinched_Parms \
	{ \
		float Strength; \
		ULeapHand* Hand; \
	}; \
	struct LeapEventInterface_eventLeapLeftHandMoved_Parms \
	{ \
		ULeapHand* Hand; \
	}; \
	struct LeapEventInterface_eventLeapLeftMostFingerMoved_Parms \
	{ \
		ULeapFinger* Finger; \
	}; \
	struct LeapEventInterface_eventLeapRightHandMoved_Parms \
	{ \
		ULeapHand* Hand; \
	}; \
	struct LeapEventInterface_eventLeapRightMostFingerMoved_Parms \
	{ \
		ULeapFinger* Finger; \
	}; \
	struct LeapEventInterface_eventRawImageReceived_Parms \
	{ \
		UTexture2D* Texture; \
		ULeapImage* Image; \
	}; \
	struct LeapEventInterface_eventScreenTapGestureDetected_Parms \
	{ \
		ULeapScreenTapGesture* Gesture; \
	}; \
	struct LeapEventInterface_eventSwipeGestureDetected_Parms \
	{ \
		ULeapSwipeGesture* Gesture; \
	};


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapEventInterface_h_11_CALLBACK_WRAPPERS
#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapEventInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SIMPLELEAPMOTION_API ULeapEventInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapEventInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SIMPLELEAPMOTION_API, ULeapEventInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapEventInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SIMPLELEAPMOTION_API ULeapEventInterface(ULeapEventInterface&&); \
	SIMPLELEAPMOTION_API ULeapEventInterface(const ULeapEventInterface&); \
public:


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapEventInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SIMPLELEAPMOTION_API ULeapEventInterface(ULeapEventInterface&&); \
	SIMPLELEAPMOTION_API ULeapEventInterface(const ULeapEventInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SIMPLELEAPMOTION_API, ULeapEventInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapEventInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapEventInterface)


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapEventInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULeapEventInterface(); \
	friend struct Z_Construct_UClass_ULeapEventInterface_Statics; \
public: \
	DECLARE_CLASS(ULeapEventInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SimpleLeapMotion"), SIMPLELEAPMOTION_API) \
	DECLARE_SERIALIZER(ULeapEventInterface)


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapEventInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapEventInterface_h_11_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapEventInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapEventInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapEventInterface_h_11_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapEventInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapEventInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILeapEventInterface() {} \
public: \
	typedef ULeapEventInterface UClassType; \
	typedef ILeapEventInterface ThisClass; \
	static void Execute_CircleGestureDetected(UObject* O, ULeapCircleGesture* Gesture); \
	static void Execute_FingerCountChanged(UObject* O, int32 Count); \
	static void Execute_GestureDetected(UObject* O, ULeapGesture* Gesture); \
	static void Execute_HandCountChanged(UObject* O, int32 Count); \
	static void Execute_KeyTapGestureDetected(UObject* O, ULeapKeyTapGesture* Gesture); \
	static void Execute_LeapFingerMoved(UObject* O, ULeapFinger* Finger); \
	static void Execute_LeapFrontFingerTouch(UObject* O, ULeapFinger* Finger); \
	static void Execute_LeapFrontMostFingerMoved(UObject* O, ULeapFinger* Finger); \
	static void Execute_LeapHandGrabbed(UObject* O, float Strength, ULeapHand* Hand); \
	static void Execute_LeapHandGrabbing(UObject* O, float Strength, ULeapHand* Hand); \
	static void Execute_LeapHandMoved(UObject* O, ULeapHand* Hand); \
	static void Execute_LeapHandPinched(UObject* O, float Strength, ULeapHand* Hand); \
	static void Execute_LeapHandPinching(UObject* O, float Strength, ULeapHand* Hand); \
	static void Execute_LeapHandReleased(UObject* O, float Strength, ULeapHand* Hand); \
	static void Execute_LeapHandRemoved(UObject* O, ELeapHandType HandType, ULeapHand* Hand); \
	static void Execute_LeapHandUnpinched(UObject* O, float Strength, ULeapHand* Hand); \
	static void Execute_LeapLeftHandMoved(UObject* O, ULeapHand* Hand); \
	static void Execute_LeapLeftMostFingerMoved(UObject* O, ULeapFinger* Finger); \
	static void Execute_LeapRightHandMoved(UObject* O, ULeapHand* Hand); \
	static void Execute_LeapRightMostFingerMoved(UObject* O, ULeapFinger* Finger); \
	static void Execute_RawImageReceived(UObject* O, UTexture2D* Texture, ULeapImage* Image); \
	static void Execute_ScreenTapGestureDetected(UObject* O, ULeapScreenTapGesture* Gesture); \
	static void Execute_SwipeGestureDetected(UObject* O, ULeapSwipeGesture* Gesture); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapEventInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~ILeapEventInterface() {} \
public: \
	typedef ULeapEventInterface UClassType; \
	typedef ILeapEventInterface ThisClass; \
	static void Execute_CircleGestureDetected(UObject* O, ULeapCircleGesture* Gesture); \
	static void Execute_FingerCountChanged(UObject* O, int32 Count); \
	static void Execute_GestureDetected(UObject* O, ULeapGesture* Gesture); \
	static void Execute_HandCountChanged(UObject* O, int32 Count); \
	static void Execute_KeyTapGestureDetected(UObject* O, ULeapKeyTapGesture* Gesture); \
	static void Execute_LeapFingerMoved(UObject* O, ULeapFinger* Finger); \
	static void Execute_LeapFrontFingerTouch(UObject* O, ULeapFinger* Finger); \
	static void Execute_LeapFrontMostFingerMoved(UObject* O, ULeapFinger* Finger); \
	static void Execute_LeapHandGrabbed(UObject* O, float Strength, ULeapHand* Hand); \
	static void Execute_LeapHandGrabbing(UObject* O, float Strength, ULeapHand* Hand); \
	static void Execute_LeapHandMoved(UObject* O, ULeapHand* Hand); \
	static void Execute_LeapHandPinched(UObject* O, float Strength, ULeapHand* Hand); \
	static void Execute_LeapHandPinching(UObject* O, float Strength, ULeapHand* Hand); \
	static void Execute_LeapHandReleased(UObject* O, float Strength, ULeapHand* Hand); \
	static void Execute_LeapHandRemoved(UObject* O, ELeapHandType HandType, ULeapHand* Hand); \
	static void Execute_LeapHandUnpinched(UObject* O, float Strength, ULeapHand* Hand); \
	static void Execute_LeapLeftHandMoved(UObject* O, ULeapHand* Hand); \
	static void Execute_LeapLeftMostFingerMoved(UObject* O, ULeapFinger* Finger); \
	static void Execute_LeapRightHandMoved(UObject* O, ULeapHand* Hand); \
	static void Execute_LeapRightMostFingerMoved(UObject* O, ULeapFinger* Finger); \
	static void Execute_RawImageReceived(UObject* O, UTexture2D* Texture, ULeapImage* Image); \
	static void Execute_ScreenTapGestureDetected(UObject* O, ULeapScreenTapGesture* Gesture); \
	static void Execute_SwipeGestureDetected(UObject* O, ULeapSwipeGesture* Gesture); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapEventInterface_h_8_PROLOG \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapEventInterface_h_11_EVENT_PARMS


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapEventInterface_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapEventInterface_h_11_SPARSE_DATA \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapEventInterface_h_11_RPC_WRAPPERS \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapEventInterface_h_11_CALLBACK_WRAPPERS \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapEventInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapEventInterface_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapEventInterface_h_11_SPARSE_DATA \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapEventInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapEventInterface_h_11_CALLBACK_WRAPPERS \
	HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapEventInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLELEAPMOTION_API UClass* StaticClass<class ULeapEventInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SimpleLeapMontion_Source_SimpleLeapMotion_Public_LeapEventInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
