// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPoseLink;
#ifdef NATIVIZEDASSETS_HeroTPP_AnimBlueprint__pf53394063_generated_h
#error "HeroTPP_AnimBlueprint__pf53394063.generated.h already included, missing '#pragma once' in HeroTPP_AnimBlueprint__pf53394063.h"
#endif
#define NATIVIZEDASSETS_HeroTPP_AnimBlueprint__pf53394063_generated_h

#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HeroTPP_AnimBlueprint__pf53394063_h_17_RPC_WRAPPERS \
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
	DECLARE_FUNCTION(execbpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8__pf(); \
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
	}


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HeroTPP_AnimBlueprint__pf53394063_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
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
	DECLARE_FUNCTION(execbpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8__pf(); \
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
	}


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HeroTPP_AnimBlueprint__pf53394063_h_17_EVENT_PARMS \
	struct HeroTPP_AnimBlueprint_C__pf53394063_eventbpf__BlueprintUpdateAnimation__pf_Parms \
	{ \
		float bpp__DeltaTimeX__pf; \
	};


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HeroTPP_AnimBlueprint__pf53394063_h_17_CALLBACK_WRAPPERS \
	void eventbpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf); \



#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HeroTPP_AnimBlueprint__pf53394063_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHeroTPP_AnimBlueprint_C__pf53394063(); \
	friend struct Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics; \
public: \
	DECLARE_CLASS(UHeroTPP_AnimBlueprint_C__pf53394063, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Game/Player_Assets/Character/HeroTPP_AnimBlueprint"), NO_API) \
	DECLARE_SERIALIZER(UHeroTPP_AnimBlueprint_C__pf53394063) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HeroTPP_AnimBlueprint__pf53394063_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUHeroTPP_AnimBlueprint_C__pf53394063(); \
	friend struct Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics; \
public: \
	DECLARE_CLASS(UHeroTPP_AnimBlueprint_C__pf53394063, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Game/Player_Assets/Character/HeroTPP_AnimBlueprint"), NO_API) \
	DECLARE_SERIALIZER(UHeroTPP_AnimBlueprint_C__pf53394063) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HeroTPP_AnimBlueprint__pf53394063_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeroTPP_AnimBlueprint_C__pf53394063(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeroTPP_AnimBlueprint_C__pf53394063) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeroTPP_AnimBlueprint_C__pf53394063); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeroTPP_AnimBlueprint_C__pf53394063); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHeroTPP_AnimBlueprint_C__pf53394063(UHeroTPP_AnimBlueprint_C__pf53394063&&); \
	NO_API UHeroTPP_AnimBlueprint_C__pf53394063(const UHeroTPP_AnimBlueprint_C__pf53394063&); \
public:


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HeroTPP_AnimBlueprint__pf53394063_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHeroTPP_AnimBlueprint_C__pf53394063(UHeroTPP_AnimBlueprint_C__pf53394063&&); \
	NO_API UHeroTPP_AnimBlueprint_C__pf53394063(const UHeroTPP_AnimBlueprint_C__pf53394063&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeroTPP_AnimBlueprint_C__pf53394063); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeroTPP_AnimBlueprint_C__pf53394063); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeroTPP_AnimBlueprint_C__pf53394063)


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HeroTPP_AnimBlueprint__pf53394063_h_17_PRIVATE_PROPERTY_OFFSET
#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HeroTPP_AnimBlueprint__pf53394063_h_13_PROLOG \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HeroTPP_AnimBlueprint__pf53394063_h_17_EVENT_PARMS


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HeroTPP_AnimBlueprint__pf53394063_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HeroTPP_AnimBlueprint__pf53394063_h_17_PRIVATE_PROPERTY_OFFSET \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HeroTPP_AnimBlueprint__pf53394063_h_17_RPC_WRAPPERS \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HeroTPP_AnimBlueprint__pf53394063_h_17_CALLBACK_WRAPPERS \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HeroTPP_AnimBlueprint__pf53394063_h_17_INCLASS \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HeroTPP_AnimBlueprint__pf53394063_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HeroTPP_AnimBlueprint__pf53394063_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HeroTPP_AnimBlueprint__pf53394063_h_17_PRIVATE_PROPERTY_OFFSET \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HeroTPP_AnimBlueprint__pf53394063_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HeroTPP_AnimBlueprint__pf53394063_h_17_CALLBACK_WRAPPERS \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HeroTPP_AnimBlueprint__pf53394063_h_17_INCLASS_NO_PURE_DECLS \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HeroTPP_AnimBlueprint__pf53394063_h_17_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class UHeroTPP_AnimBlueprint_C__pf53394063>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HeroTPP_AnimBlueprint__pf53394063_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
