// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPoseLink;
#ifdef NATIVIZEDASSETS_RightHand_AnimBP__pf558596347_generated_h
#error "RightHand_AnimBP__pf558596347.generated.h already included, missing '#pragma once' in RightHand_AnimBP__pf558596347.h"
#endif
#define NATIVIZEDASSETS_RightHand_AnimBP__pf558596347_generated_h

#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_RightHand_AnimBP__pf558596347_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__AnimGraph__pf) \
	{ \
		P_GET_STRUCT_REF(FPoseLink,Z_Param_Out_bpp__AnimGraph__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__AnimGraph__pf(Z_Param_Out_bpp__AnimGraph__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__BlueprintUpdateAnimation__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__DeltaTimeX__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__BlueprintUpdateAnimation__pf(Z_Param_bpp__DeltaTimeX__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__BlueprintBeginPlay__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__BlueprintBeginPlay__pf(); \
		P_NATIVE_END; \
	}


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_RightHand_AnimBP__pf558596347_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__AnimGraph__pf) \
	{ \
		P_GET_STRUCT_REF(FPoseLink,Z_Param_Out_bpp__AnimGraph__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__AnimGraph__pf(Z_Param_Out_bpp__AnimGraph__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__BlueprintUpdateAnimation__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__DeltaTimeX__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__BlueprintUpdateAnimation__pf(Z_Param_bpp__DeltaTimeX__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__BlueprintBeginPlay__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__BlueprintBeginPlay__pf(); \
		P_NATIVE_END; \
	}


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_RightHand_AnimBP__pf558596347_h_16_EVENT_PARMS \
	struct RightHand_AnimBP_C__pf558596347_eventbpf__BlueprintUpdateAnimation__pf_Parms \
	{ \
		float bpp__DeltaTimeX__pf; \
	};


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_RightHand_AnimBP__pf558596347_h_16_CALLBACK_WRAPPERS \
	void eventbpf__BlueprintBeginPlay__pf(); \
 \
	void eventbpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf); \



#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_RightHand_AnimBP__pf558596347_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURightHand_AnimBP_C__pf558596347(); \
	friend struct Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics; \
public: \
	DECLARE_CLASS(URightHand_AnimBP_C__pf558596347, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Game/VirtualReality/Mannequin/Animations/RightHand_AnimBP"), NO_API) \
	DECLARE_SERIALIZER(URightHand_AnimBP_C__pf558596347) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_RightHand_AnimBP__pf558596347_h_16_INCLASS \
private: \
	static void StaticRegisterNativesURightHand_AnimBP_C__pf558596347(); \
	friend struct Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics; \
public: \
	DECLARE_CLASS(URightHand_AnimBP_C__pf558596347, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Game/VirtualReality/Mannequin/Animations/RightHand_AnimBP"), NO_API) \
	DECLARE_SERIALIZER(URightHand_AnimBP_C__pf558596347) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_RightHand_AnimBP__pf558596347_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URightHand_AnimBP_C__pf558596347(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URightHand_AnimBP_C__pf558596347) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URightHand_AnimBP_C__pf558596347); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URightHand_AnimBP_C__pf558596347); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URightHand_AnimBP_C__pf558596347(URightHand_AnimBP_C__pf558596347&&); \
	NO_API URightHand_AnimBP_C__pf558596347(const URightHand_AnimBP_C__pf558596347&); \
public:


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_RightHand_AnimBP__pf558596347_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URightHand_AnimBP_C__pf558596347(URightHand_AnimBP_C__pf558596347&&); \
	NO_API URightHand_AnimBP_C__pf558596347(const URightHand_AnimBP_C__pf558596347&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URightHand_AnimBP_C__pf558596347); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URightHand_AnimBP_C__pf558596347); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URightHand_AnimBP_C__pf558596347)


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_RightHand_AnimBP__pf558596347_h_16_PRIVATE_PROPERTY_OFFSET
#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_RightHand_AnimBP__pf558596347_h_12_PROLOG \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_RightHand_AnimBP__pf558596347_h_16_EVENT_PARMS


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_RightHand_AnimBP__pf558596347_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_RightHand_AnimBP__pf558596347_h_16_PRIVATE_PROPERTY_OFFSET \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_RightHand_AnimBP__pf558596347_h_16_RPC_WRAPPERS \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_RightHand_AnimBP__pf558596347_h_16_CALLBACK_WRAPPERS \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_RightHand_AnimBP__pf558596347_h_16_INCLASS \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_RightHand_AnimBP__pf558596347_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_RightHand_AnimBP__pf558596347_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_RightHand_AnimBP__pf558596347_h_16_PRIVATE_PROPERTY_OFFSET \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_RightHand_AnimBP__pf558596347_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_RightHand_AnimBP__pf558596347_h_16_CALLBACK_WRAPPERS \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_RightHand_AnimBP__pf558596347_h_16_INCLASS_NO_PURE_DECLS \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_RightHand_AnimBP__pf558596347_h_16_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class URightHand_AnimBP_C__pf558596347>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_RightHand_AnimBP__pf558596347_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
