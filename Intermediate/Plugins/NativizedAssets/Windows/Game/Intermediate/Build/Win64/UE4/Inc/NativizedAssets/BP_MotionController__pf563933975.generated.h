// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef NATIVIZEDASSETS_BP_MotionController__pf563933975_generated_h
#error "BP_MotionController__pf563933975.generated.h already included, missing '#pragma once' in BP_MotionController__pf563933975.h"
#endif
#define NATIVIZEDASSETS_BP_MotionController__pf563933975_generated_h

#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__GetTeleportDestination__pf) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_bpp__Location__pf); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_bpp__Rotation__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__GetTeleportDestination__pf(Z_Param_Out_bpp__Location__pf,Z_Param_Out_bpp__Rotation__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UpdateRoomScaleOutline__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__UpdateRoomScaleOutline__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetupRoomScaleOutline__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetupRoomScaleOutline__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UpdateArcEndpoint__pf) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_bpp__NewLocation__pf); \
		P_GET_UBOOL(Z_Param_bpp__ValidLocationFound__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__UpdateArcEndpoint__pf(Z_Param_bpp__NewLocation__pf,Z_Param_bpp__ValidLocationFound__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UpdateArcSpline__pf) \
	{ \
		P_GET_UBOOL(Z_Param_bpp__FoundValidLocation__pf); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_bpp__SplinePoints__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__UpdateArcSpline__pf(Z_Param_bpp__FoundValidLocation__pf,Z_Param_Out_bpp__SplinePoints__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ClearArc__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ClearArc__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__TraceTeleportDestination__pf) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bpp__Success__pf); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_bpp__TracePoints__pf); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_bpp__NavMeshLocation__pf); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_bpp__TraceLocation__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__TraceTeleportDestination__pf(Z_Param_Out_bpp__Success__pf,Z_Param_Out_bpp__TracePoints__pf,Z_Param_Out_bpp__NavMeshLocation__pf,Z_Param_Out_bpp__TraceLocation__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__DisableTeleporter__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__DisableTeleporter__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ActivateTeleporter__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ActivateTeleporter__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__GrabActor__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__GrabActor__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReleaseActor__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ReleaseActor__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__GetActorNearHand__pf) \
	{ \
		P_GET_OBJECT_REF(AActor,Z_Param_Out_bpp__NearestMesh__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__GetActorNearHand__pf(Z_Param_Out_bpp__NearestMesh__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__UserConstructionScript__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__RumbleController__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__Intensity__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__RumbleController__pf(Z_Param_bpp__Intensity__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OverlappedComponent__pf); \
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf); \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__OtherBodyIndex__pf); \
		P_GET_UBOOL(Z_Param_bpp__bFromSweep__pf); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_bpp__SweepResult__pf__const); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(Z_Param_bpp__OverlappedComponent__pf,Z_Param_bpp__OtherActor__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__OtherBodyIndex__pf,Z_Param_bpp__bFromSweep__pf,Z_Param_Out_bpp__SweepResult__pf__const); \
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
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ReceiveBeginPlay__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__BndEvt__ControllerMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__HitComponent__pf); \
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf); \
		P_GET_STRUCT(FVector,Z_Param_bpp__NormalImpulse__pf); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_bpp__Hit__pf__const); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__BndEvt__ControllerMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf(Z_Param_bpp__HitComponent__pf,Z_Param_bpp__OtherActor__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__NormalImpulse__pf,Z_Param_Out_bpp__Hit__pf__const); \
		P_NATIVE_END; \
	}


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__GetTeleportDestination__pf) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_bpp__Location__pf); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_bpp__Rotation__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__GetTeleportDestination__pf(Z_Param_Out_bpp__Location__pf,Z_Param_Out_bpp__Rotation__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UpdateRoomScaleOutline__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__UpdateRoomScaleOutline__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetupRoomScaleOutline__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetupRoomScaleOutline__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UpdateArcEndpoint__pf) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_bpp__NewLocation__pf); \
		P_GET_UBOOL(Z_Param_bpp__ValidLocationFound__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__UpdateArcEndpoint__pf(Z_Param_bpp__NewLocation__pf,Z_Param_bpp__ValidLocationFound__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UpdateArcSpline__pf) \
	{ \
		P_GET_UBOOL(Z_Param_bpp__FoundValidLocation__pf); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_bpp__SplinePoints__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__UpdateArcSpline__pf(Z_Param_bpp__FoundValidLocation__pf,Z_Param_Out_bpp__SplinePoints__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ClearArc__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ClearArc__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__TraceTeleportDestination__pf) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bpp__Success__pf); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_bpp__TracePoints__pf); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_bpp__NavMeshLocation__pf); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_bpp__TraceLocation__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__TraceTeleportDestination__pf(Z_Param_Out_bpp__Success__pf,Z_Param_Out_bpp__TracePoints__pf,Z_Param_Out_bpp__NavMeshLocation__pf,Z_Param_Out_bpp__TraceLocation__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__DisableTeleporter__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__DisableTeleporter__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ActivateTeleporter__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ActivateTeleporter__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__GrabActor__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__GrabActor__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReleaseActor__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ReleaseActor__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__GetActorNearHand__pf) \
	{ \
		P_GET_OBJECT_REF(AActor,Z_Param_Out_bpp__NearestMesh__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__GetActorNearHand__pf(Z_Param_Out_bpp__NearestMesh__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__UserConstructionScript__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__RumbleController__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__Intensity__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__RumbleController__pf(Z_Param_bpp__Intensity__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OverlappedComponent__pf); \
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf); \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__OtherBodyIndex__pf); \
		P_GET_UBOOL(Z_Param_bpp__bFromSweep__pf); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_bpp__SweepResult__pf__const); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(Z_Param_bpp__OverlappedComponent__pf,Z_Param_bpp__OtherActor__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__OtherBodyIndex__pf,Z_Param_bpp__bFromSweep__pf,Z_Param_Out_bpp__SweepResult__pf__const); \
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
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ReceiveBeginPlay__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__BndEvt__ControllerMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__HitComponent__pf); \
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf); \
		P_GET_STRUCT(FVector,Z_Param_bpp__NormalImpulse__pf); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_bpp__Hit__pf__const); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__BndEvt__ControllerMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf(Z_Param_bpp__HitComponent__pf,Z_Param_bpp__OtherActor__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__NormalImpulse__pf,Z_Param_Out_bpp__Hit__pf__const); \
		P_NATIVE_END; \
	}


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_26_EVENT_PARMS \
	struct BP_MotionController_C__pf563933975_eventbpf__ReceiveTick__pf_Parms \
	{ \
		float bpp__DeltaSeconds__pf; \
	};


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_26_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveBeginPlay__pf(); \
 \
	void eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf); \
 \
	void eventbpf__UserConstructionScript__pf(); \



#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABP_MotionController_C__pf563933975(); \
	friend struct Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics; \
public: \
	DECLARE_CLASS(ABP_MotionController_C__pf563933975, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Game/VirtualRealityBP/Blueprints/BP_MotionController"), NO_API) \
	DECLARE_SERIALIZER(ABP_MotionController_C__pf563933975)


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_26_INCLASS \
private: \
	static void StaticRegisterNativesABP_MotionController_C__pf563933975(); \
	friend struct Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics; \
public: \
	DECLARE_CLASS(ABP_MotionController_C__pf563933975, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Game/VirtualRealityBP/Blueprints/BP_MotionController"), NO_API) \
	DECLARE_SERIALIZER(ABP_MotionController_C__pf563933975)


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABP_MotionController_C__pf563933975(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_MotionController_C__pf563933975) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_MotionController_C__pf563933975); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_MotionController_C__pf563933975); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_MotionController_C__pf563933975(ABP_MotionController_C__pf563933975&&); \
	NO_API ABP_MotionController_C__pf563933975(const ABP_MotionController_C__pf563933975&); \
public:


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_MotionController_C__pf563933975(ABP_MotionController_C__pf563933975&&); \
	NO_API ABP_MotionController_C__pf563933975(const ABP_MotionController_C__pf563933975&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_MotionController_C__pf563933975); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_MotionController_C__pf563933975); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_MotionController_C__pf563933975)


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_26_PRIVATE_PROPERTY_OFFSET
#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_22_PROLOG \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_26_EVENT_PARMS


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_26_PRIVATE_PROPERTY_OFFSET \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_26_RPC_WRAPPERS \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_26_CALLBACK_WRAPPERS \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_26_INCLASS \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_26_PRIVATE_PROPERTY_OFFSET \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_26_CALLBACK_WRAPPERS \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_26_INCLASS_NO_PURE_DECLS \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_26_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class ABP_MotionController_C__pf563933975>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
