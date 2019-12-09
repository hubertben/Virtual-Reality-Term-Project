// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABP_MotionController_C__pf563933975;
struct FRotator;
struct FKey;
#ifdef NATIVIZEDASSETS_MotionControllerPawn__pf563933975_generated_h
#error "MotionControllerPawn__pf563933975.generated.h already included, missing '#pragma once' in MotionControllerPawn__pf563933975.h"
#endif
#define NATIVIZEDASSETS_MotionControllerPawn__pf563933975_generated_h

#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MotionControllerPawn__pf563933975_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__GetRotationFromInput__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__UpAxis__pf); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__RightAxis__pf); \
		P_GET_OBJECT(ABP_MotionController_C__pf563933975,Z_Param_bpp__Controller__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->bpf__GetRotationFromInput__pf(Z_Param_bpp__UpAxis__pf,Z_Param_bpp__RightAxis__pf,Z_Param_bpp__Controller__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_2__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_2__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_0__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_0__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__DeltaSeconds__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ExecuteTeleportation__pf) \
	{ \
		P_GET_OBJECT(ABP_MotionController_C__pf563933975,Z_Param_bpp__MotionController__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ExecuteTeleportation__pf(Z_Param_bpp__MotionController__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ReceiveBeginPlay__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_MotionControllerPawn__pf_2) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__EntryPoint__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ExecuteUbergraph_MotionControllerPawn__pf_2(Z_Param_bpp__EntryPoint__pf); \
		P_NATIVE_END; \
	}


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MotionControllerPawn__pf563933975_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__GetRotationFromInput__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__UpAxis__pf); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__RightAxis__pf); \
		P_GET_OBJECT(ABP_MotionController_C__pf563933975,Z_Param_bpp__Controller__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->bpf__GetRotationFromInput__pf(Z_Param_bpp__UpAxis__pf,Z_Param_bpp__RightAxis__pf,Z_Param_bpp__Controller__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_2__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_2__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_0__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_0__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__DeltaSeconds__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ExecuteTeleportation__pf) \
	{ \
		P_GET_OBJECT(ABP_MotionController_C__pf563933975,Z_Param_bpp__MotionController__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ExecuteTeleportation__pf(Z_Param_bpp__MotionController__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ReceiveBeginPlay__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_MotionControllerPawn__pf_2) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__EntryPoint__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ExecuteUbergraph_MotionControllerPawn__pf_2(Z_Param_bpp__EntryPoint__pf); \
		P_NATIVE_END; \
	}


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MotionControllerPawn__pf563933975_h_15_EVENT_PARMS \
	struct MotionControllerPawn_C__pf563933975_eventbpf__ReceiveTick__pf_Parms \
	{ \
		float bpp__DeltaSeconds__pf; \
	};


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MotionControllerPawn__pf563933975_h_15_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveBeginPlay__pf(); \
 \
	void eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf); \



#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MotionControllerPawn__pf563933975_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMotionControllerPawn_C__pf563933975(); \
	friend struct Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics; \
public: \
	DECLARE_CLASS(AMotionControllerPawn_C__pf563933975, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Game/VirtualRealityBP/Blueprints/MotionControllerPawn"), NO_API) \
	DECLARE_SERIALIZER(AMotionControllerPawn_C__pf563933975)


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MotionControllerPawn__pf563933975_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMotionControllerPawn_C__pf563933975(); \
	friend struct Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics; \
public: \
	DECLARE_CLASS(AMotionControllerPawn_C__pf563933975, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Game/VirtualRealityBP/Blueprints/MotionControllerPawn"), NO_API) \
	DECLARE_SERIALIZER(AMotionControllerPawn_C__pf563933975)


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MotionControllerPawn__pf563933975_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMotionControllerPawn_C__pf563933975(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMotionControllerPawn_C__pf563933975) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMotionControllerPawn_C__pf563933975); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMotionControllerPawn_C__pf563933975); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMotionControllerPawn_C__pf563933975(AMotionControllerPawn_C__pf563933975&&); \
	NO_API AMotionControllerPawn_C__pf563933975(const AMotionControllerPawn_C__pf563933975&); \
public:


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MotionControllerPawn__pf563933975_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMotionControllerPawn_C__pf563933975(AMotionControllerPawn_C__pf563933975&&); \
	NO_API AMotionControllerPawn_C__pf563933975(const AMotionControllerPawn_C__pf563933975&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMotionControllerPawn_C__pf563933975); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMotionControllerPawn_C__pf563933975); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMotionControllerPawn_C__pf563933975)


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MotionControllerPawn__pf563933975_h_15_PRIVATE_PROPERTY_OFFSET
#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MotionControllerPawn__pf563933975_h_11_PROLOG \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MotionControllerPawn__pf563933975_h_15_EVENT_PARMS


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MotionControllerPawn__pf563933975_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MotionControllerPawn__pf563933975_h_15_PRIVATE_PROPERTY_OFFSET \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MotionControllerPawn__pf563933975_h_15_RPC_WRAPPERS \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MotionControllerPawn__pf563933975_h_15_CALLBACK_WRAPPERS \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MotionControllerPawn__pf563933975_h_15_INCLASS \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MotionControllerPawn__pf563933975_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MotionControllerPawn__pf563933975_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MotionControllerPawn__pf563933975_h_15_PRIVATE_PROPERTY_OFFSET \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MotionControllerPawn__pf563933975_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MotionControllerPawn__pf563933975_h_15_CALLBACK_WRAPPERS \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MotionControllerPawn__pf563933975_h_15_INCLASS_NO_PURE_DECLS \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MotionControllerPawn__pf563933975_h_15_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class AMotionControllerPawn_C__pf563933975>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MotionControllerPawn__pf563933975_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
