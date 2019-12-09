// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/HeroTPP_AnimBlueprint__pf53394063.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroTPP_AnimBlueprint__pf53394063() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__AnimGraph__pf();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__BlueprintUpdateAnimation__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691__pf();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_StateMachine();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_StateResult();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SequencePlayer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TransitionResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Root();
// End Cross Module References
	static FName NAME_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__BlueprintUpdateAnimation__pf = FName(TEXT("BlueprintUpdateAnimation"));
	void UHeroTPP_AnimBlueprint_C__pf53394063::eventbpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf)
	{
		HeroTPP_AnimBlueprint_C__pf53394063_eventbpf__BlueprintUpdateAnimation__pf_Parms Parms;
		Parms.bpp__DeltaTimeX__pf=bpp__DeltaTimeX__pf;
		ProcessEvent(FindFunctionChecked(NAME_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__BlueprintUpdateAnimation__pf),&Parms);
	}
	void UHeroTPP_AnimBlueprint_C__pf53394063::StaticRegisterNativesUHeroTPP_AnimBlueprint_C__pf53394063()
	{
		UClass* Class = UHeroTPP_AnimBlueprint_C__pf53394063::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimGraph", &UHeroTPP_AnimBlueprint_C__pf53394063::execbpf__AnimGraph__pf },
			{ "BlueprintUpdateAnimation", &UHeroTPP_AnimBlueprint_C__pf53394063::execbpf__BlueprintUpdateAnimation__pf },
			{ "EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8", &UHeroTPP_AnimBlueprint_C__pf53394063::execbpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8__pf },
			{ "EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691", &UHeroTPP_AnimBlueprint_C__pf53394063::execbpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__AnimGraph__pf_Statics
	{
		struct HeroTPP_AnimBlueprint_C__pf53394063_eventbpf__AnimGraph__pf_Parms
		{
			FPoseLink bpp__AnimGraph__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__AnimGraph__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__AnimGraph__pf_Statics::NewProp_bpp__AnimGraph__pf = { "bpp__AnimGraph__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(HeroTPP_AnimBlueprint_C__pf53394063_eventbpf__AnimGraph__pf_Parms, bpp__AnimGraph__pf), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__AnimGraph__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__AnimGraph__pf_Statics::NewProp_bpp__AnimGraph__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__AnimGraph__pf_Statics::Function_MetaDataParams[] = {
		{ "AnimBlueprintFunction", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/HeroTPP_AnimBlueprint__pf53394063.h" },
		{ "OverrideNativeName", "AnimGraph" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__AnimGraph__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063, nullptr, "AnimGraph", nullptr, nullptr, sizeof(HeroTPP_AnimBlueprint_C__pf53394063_eventbpf__AnimGraph__pf_Parms), Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__AnimGraph__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__AnimGraph__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__AnimGraph__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__AnimGraph__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__AnimGraph__pf()
	{
		UObject* Outer = Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("AnimGraph") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__AnimGraph__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__BlueprintUpdateAnimation__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaTimeX__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__BlueprintUpdateAnimation__pf_Statics::NewProp_bpp__DeltaTimeX__pf = { "bpp__DeltaTimeX__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(HeroTPP_AnimBlueprint_C__pf53394063_eventbpf__BlueprintUpdateAnimation__pf_Parms, bpp__DeltaTimeX__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__BlueprintUpdateAnimation__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__BlueprintUpdateAnimation__pf_Statics::NewProp_bpp__DeltaTimeX__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__BlueprintUpdateAnimation__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Executed when the Animation is updated */" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/HeroTPP_AnimBlueprint__pf53394063.h" },
		{ "OverrideNativeName", "BlueprintUpdateAnimation" },
		{ "ToolTip", "Executed when the Animation is updated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__BlueprintUpdateAnimation__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063, nullptr, "BlueprintUpdateAnimation", nullptr, nullptr, sizeof(HeroTPP_AnimBlueprint_C__pf53394063_eventbpf__BlueprintUpdateAnimation__pf_Parms), Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__BlueprintUpdateAnimation__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__BlueprintUpdateAnimation__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__BlueprintUpdateAnimation__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__BlueprintUpdateAnimation__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__BlueprintUpdateAnimation__pf()
	{
		UObject* Outer = Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("BlueprintUpdateAnimation") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__BlueprintUpdateAnimation__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HeroTPP_AnimBlueprint__pf53394063.h" },
		{ "OverrideNativeName", "EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063, nullptr, "EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8__pf()
	{
		UObject* Outer = Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HeroTPP_AnimBlueprint__pf53394063.h" },
		{ "OverrideNativeName", "EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063, nullptr, "EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691__pf()
	{
		UObject* Outer = Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_NoRegister()
	{
		return UHeroTPP_AnimBlueprint_C__pf53394063::StaticClass();
	}
	struct Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaTimeX__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaTimeX__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Speed__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Speed__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__IsInAirx__pfzy_MetaData[];
#endif
		static void NewProp_bpv__IsInAirx__pfzy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__IsInAirx__pfzy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimGraphNode_StateMachine_63E01ED04FD7E6EEF5104CAD884F7B8B__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AnimGraphNode_StateMachine_63E01ED04FD7E6EEF5104CAD884F7B8B__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimGraphNode_StateResult_BE086D9A4FAFC223785E5BBA53595051__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AnimGraphNode_StateResult_BE086D9A4FAFC223785E5BBA53595051__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimGraphNode_BlendSpacePlayer_B5D801B7406E99CB8C39F59CDA8B4582__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AnimGraphNode_BlendSpacePlayer_B5D801B7406E99CB8C39F59CDA8B4582__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimGraphNode_StateResult_96FB424842BCC0648F2C2DB0CAFEB3DF__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AnimGraphNode_StateResult_96FB424842BCC0648F2C2DB0CAFEB3DF__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimGraphNode_SequencePlayer_3EB448E5491D469DA5DC43966E0481A8__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AnimGraphNode_SequencePlayer_3EB448E5491D469DA5DC43966E0481A8__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimGraphNode_StateResult_AFF8E8664835BE31E02E81846FEE4095__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AnimGraphNode_StateResult_AFF8E8664835BE31E02E81846FEE4095__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimGraphNode_SequencePlayer_3BD3B990412244CFC1892D84A4342C2D__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AnimGraphNode_SequencePlayer_3BD3B990412244CFC1892D84A4342C2D__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimGraphNode_StateResult_5ECDD11148538CEC852728BCBF0E5FD8__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AnimGraphNode_StateResult_5ECDD11148538CEC852728BCBF0E5FD8__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimGraphNode_SequencePlayer_193B50AE4231658A9EE2C5864BCF5FC7__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AnimGraphNode_SequencePlayer_193B50AE4231658A9EE2C5864BCF5FC7__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimGraphNode_TransitionResult_04136FF0414AC997E300FFB31384DE23__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AnimGraphNode_TransitionResult_04136FF0414AC997E300FFB31384DE23__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimGraphNode_TransitionResult_D8F850D74536408EF1ED218F7A11A4A6__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AnimGraphNode_TransitionResult_D8F850D74536408EF1ED218F7A11A4A6__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimGraphNode_Root_CEDB9C0441584D06409BBE831A729CF8__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AnimGraphNode_Root_CEDB9C0441584D06409BBE831A729CF8__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__AnimGraph__pf, "AnimGraph" }, // 3135421682
		{ &Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__BlueprintUpdateAnimation__pf, "BlueprintUpdateAnimation" }, // 2128437929
		{ &Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8__pf, "EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8" }, // 1470170778
		{ &Z_Construct_UFunction_UHeroTPP_AnimBlueprint_C__pf53394063_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691__pf, "EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691" }, // 1269281681
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "HeroTPP_AnimBlueprint__pf53394063.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HeroTPP_AnimBlueprint__pf53394063.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "HeroTPP_AnimBlueprint_C" },
		{ "ReplaceConverted", "/Game/Player_Assets/Character/HeroTPP_AnimBlueprint.HeroTPP_AnimBlueprint_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_b0l__K2Node_Event_DeltaTimeX__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HeroTPP_AnimBlueprint__pf53394063.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaTimeX" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_b0l__K2Node_Event_DeltaTimeX__pf = { "K2Node_Event_DeltaTimeX", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(UHeroTPP_AnimBlueprint_C__pf53394063, b0l__K2Node_Event_DeltaTimeX__pf), METADATA_PARAMS(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_b0l__K2Node_Event_DeltaTimeX__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_b0l__K2Node_Event_DeltaTimeX__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__Speed__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Speed" },
		{ "ModuleRelativePath", "Public/HeroTPP_AnimBlueprint__pf53394063.h" },
		{ "OverrideNativeName", "Speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__Speed__pf = { "Speed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(UHeroTPP_AnimBlueprint_C__pf53394063, bpv__Speed__pf), METADATA_PARAMS(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__Speed__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__Speed__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__IsInAirx__pfzy_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Is in Air?" },
		{ "ModuleRelativePath", "Public/HeroTPP_AnimBlueprint__pf53394063.h" },
		{ "OverrideNativeName", "IsInAir?" },
	};
#endif
	void Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__IsInAirx__pfzy_SetBit(void* Obj)
	{
		((UHeroTPP_AnimBlueprint_C__pf53394063*)Obj)->bpv__IsInAirx__pfzy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__IsInAirx__pfzy = { "IsInAir?", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(UHeroTPP_AnimBlueprint_C__pf53394063), &Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__IsInAirx__pfzy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__IsInAirx__pfzy_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__IsInAirx__pfzy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_StateMachine_63E01ED04FD7E6EEF5104CAD884F7B8B__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HeroTPP_AnimBlueprint__pf53394063.h" },
		{ "OverrideNativeName", "AnimGraphNode_StateMachine_63E01ED04FD7E6EEF5104CAD884F7B8B" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_StateMachine_63E01ED04FD7E6EEF5104CAD884F7B8B__pf = { "AnimGraphNode_StateMachine_63E01ED04FD7E6EEF5104CAD884F7B8B", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(UHeroTPP_AnimBlueprint_C__pf53394063, bpv__AnimGraphNode_StateMachine_63E01ED04FD7E6EEF5104CAD884F7B8B__pf), Z_Construct_UScriptStruct_FAnimNode_StateMachine, METADATA_PARAMS(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_StateMachine_63E01ED04FD7E6EEF5104CAD884F7B8B__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_StateMachine_63E01ED04FD7E6EEF5104CAD884F7B8B__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_StateResult_BE086D9A4FAFC223785E5BBA53595051__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HeroTPP_AnimBlueprint__pf53394063.h" },
		{ "OverrideNativeName", "AnimGraphNode_StateResult_BE086D9A4FAFC223785E5BBA53595051" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_StateResult_BE086D9A4FAFC223785E5BBA53595051__pf = { "AnimGraphNode_StateResult_BE086D9A4FAFC223785E5BBA53595051", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(UHeroTPP_AnimBlueprint_C__pf53394063, bpv__AnimGraphNode_StateResult_BE086D9A4FAFC223785E5BBA53595051__pf), Z_Construct_UScriptStruct_FAnimNode_StateResult, METADATA_PARAMS(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_StateResult_BE086D9A4FAFC223785E5BBA53595051__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_StateResult_BE086D9A4FAFC223785E5BBA53595051__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_BlendSpacePlayer_B5D801B7406E99CB8C39F59CDA8B4582__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HeroTPP_AnimBlueprint__pf53394063.h" },
		{ "OverrideNativeName", "AnimGraphNode_BlendSpacePlayer_B5D801B7406E99CB8C39F59CDA8B4582" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_BlendSpacePlayer_B5D801B7406E99CB8C39F59CDA8B4582__pf = { "AnimGraphNode_BlendSpacePlayer_B5D801B7406E99CB8C39F59CDA8B4582", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(UHeroTPP_AnimBlueprint_C__pf53394063, bpv__AnimGraphNode_BlendSpacePlayer_B5D801B7406E99CB8C39F59CDA8B4582__pf), Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer, METADATA_PARAMS(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_BlendSpacePlayer_B5D801B7406E99CB8C39F59CDA8B4582__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_BlendSpacePlayer_B5D801B7406E99CB8C39F59CDA8B4582__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_StateResult_96FB424842BCC0648F2C2DB0CAFEB3DF__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HeroTPP_AnimBlueprint__pf53394063.h" },
		{ "OverrideNativeName", "AnimGraphNode_StateResult_96FB424842BCC0648F2C2DB0CAFEB3DF" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_StateResult_96FB424842BCC0648F2C2DB0CAFEB3DF__pf = { "AnimGraphNode_StateResult_96FB424842BCC0648F2C2DB0CAFEB3DF", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(UHeroTPP_AnimBlueprint_C__pf53394063, bpv__AnimGraphNode_StateResult_96FB424842BCC0648F2C2DB0CAFEB3DF__pf), Z_Construct_UScriptStruct_FAnimNode_StateResult, METADATA_PARAMS(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_StateResult_96FB424842BCC0648F2C2DB0CAFEB3DF__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_StateResult_96FB424842BCC0648F2C2DB0CAFEB3DF__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_SequencePlayer_3EB448E5491D469DA5DC43966E0481A8__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HeroTPP_AnimBlueprint__pf53394063.h" },
		{ "OverrideNativeName", "AnimGraphNode_SequencePlayer_3EB448E5491D469DA5DC43966E0481A8" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_SequencePlayer_3EB448E5491D469DA5DC43966E0481A8__pf = { "AnimGraphNode_SequencePlayer_3EB448E5491D469DA5DC43966E0481A8", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(UHeroTPP_AnimBlueprint_C__pf53394063, bpv__AnimGraphNode_SequencePlayer_3EB448E5491D469DA5DC43966E0481A8__pf), Z_Construct_UScriptStruct_FAnimNode_SequencePlayer, METADATA_PARAMS(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_SequencePlayer_3EB448E5491D469DA5DC43966E0481A8__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_SequencePlayer_3EB448E5491D469DA5DC43966E0481A8__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_StateResult_AFF8E8664835BE31E02E81846FEE4095__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HeroTPP_AnimBlueprint__pf53394063.h" },
		{ "OverrideNativeName", "AnimGraphNode_StateResult_AFF8E8664835BE31E02E81846FEE4095" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_StateResult_AFF8E8664835BE31E02E81846FEE4095__pf = { "AnimGraphNode_StateResult_AFF8E8664835BE31E02E81846FEE4095", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(UHeroTPP_AnimBlueprint_C__pf53394063, bpv__AnimGraphNode_StateResult_AFF8E8664835BE31E02E81846FEE4095__pf), Z_Construct_UScriptStruct_FAnimNode_StateResult, METADATA_PARAMS(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_StateResult_AFF8E8664835BE31E02E81846FEE4095__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_StateResult_AFF8E8664835BE31E02E81846FEE4095__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_SequencePlayer_3BD3B990412244CFC1892D84A4342C2D__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HeroTPP_AnimBlueprint__pf53394063.h" },
		{ "OverrideNativeName", "AnimGraphNode_SequencePlayer_3BD3B990412244CFC1892D84A4342C2D" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_SequencePlayer_3BD3B990412244CFC1892D84A4342C2D__pf = { "AnimGraphNode_SequencePlayer_3BD3B990412244CFC1892D84A4342C2D", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(UHeroTPP_AnimBlueprint_C__pf53394063, bpv__AnimGraphNode_SequencePlayer_3BD3B990412244CFC1892D84A4342C2D__pf), Z_Construct_UScriptStruct_FAnimNode_SequencePlayer, METADATA_PARAMS(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_SequencePlayer_3BD3B990412244CFC1892D84A4342C2D__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_SequencePlayer_3BD3B990412244CFC1892D84A4342C2D__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_StateResult_5ECDD11148538CEC852728BCBF0E5FD8__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HeroTPP_AnimBlueprint__pf53394063.h" },
		{ "OverrideNativeName", "AnimGraphNode_StateResult_5ECDD11148538CEC852728BCBF0E5FD8" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_StateResult_5ECDD11148538CEC852728BCBF0E5FD8__pf = { "AnimGraphNode_StateResult_5ECDD11148538CEC852728BCBF0E5FD8", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(UHeroTPP_AnimBlueprint_C__pf53394063, bpv__AnimGraphNode_StateResult_5ECDD11148538CEC852728BCBF0E5FD8__pf), Z_Construct_UScriptStruct_FAnimNode_StateResult, METADATA_PARAMS(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_StateResult_5ECDD11148538CEC852728BCBF0E5FD8__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_StateResult_5ECDD11148538CEC852728BCBF0E5FD8__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_SequencePlayer_193B50AE4231658A9EE2C5864BCF5FC7__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HeroTPP_AnimBlueprint__pf53394063.h" },
		{ "OverrideNativeName", "AnimGraphNode_SequencePlayer_193B50AE4231658A9EE2C5864BCF5FC7" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_SequencePlayer_193B50AE4231658A9EE2C5864BCF5FC7__pf = { "AnimGraphNode_SequencePlayer_193B50AE4231658A9EE2C5864BCF5FC7", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(UHeroTPP_AnimBlueprint_C__pf53394063, bpv__AnimGraphNode_SequencePlayer_193B50AE4231658A9EE2C5864BCF5FC7__pf), Z_Construct_UScriptStruct_FAnimNode_SequencePlayer, METADATA_PARAMS(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_SequencePlayer_193B50AE4231658A9EE2C5864BCF5FC7__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_SequencePlayer_193B50AE4231658A9EE2C5864BCF5FC7__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_TransitionResult_04136FF0414AC997E300FFB31384DE23__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HeroTPP_AnimBlueprint__pf53394063.h" },
		{ "OverrideNativeName", "AnimGraphNode_TransitionResult_04136FF0414AC997E300FFB31384DE23" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_TransitionResult_04136FF0414AC997E300FFB31384DE23__pf = { "AnimGraphNode_TransitionResult_04136FF0414AC997E300FFB31384DE23", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(UHeroTPP_AnimBlueprint_C__pf53394063, bpv__AnimGraphNode_TransitionResult_04136FF0414AC997E300FFB31384DE23__pf), Z_Construct_UScriptStruct_FAnimNode_TransitionResult, METADATA_PARAMS(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_TransitionResult_04136FF0414AC997E300FFB31384DE23__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_TransitionResult_04136FF0414AC997E300FFB31384DE23__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HeroTPP_AnimBlueprint__pf53394063.h" },
		{ "OverrideNativeName", "AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8__pf = { "AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(UHeroTPP_AnimBlueprint_C__pf53394063, bpv__AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8__pf), Z_Construct_UScriptStruct_FAnimNode_TransitionResult, METADATA_PARAMS(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_TransitionResult_D8F850D74536408EF1ED218F7A11A4A6__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HeroTPP_AnimBlueprint__pf53394063.h" },
		{ "OverrideNativeName", "AnimGraphNode_TransitionResult_D8F850D74536408EF1ED218F7A11A4A6" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_TransitionResult_D8F850D74536408EF1ED218F7A11A4A6__pf = { "AnimGraphNode_TransitionResult_D8F850D74536408EF1ED218F7A11A4A6", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(UHeroTPP_AnimBlueprint_C__pf53394063, bpv__AnimGraphNode_TransitionResult_D8F850D74536408EF1ED218F7A11A4A6__pf), Z_Construct_UScriptStruct_FAnimNode_TransitionResult, METADATA_PARAMS(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_TransitionResult_D8F850D74536408EF1ED218F7A11A4A6__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_TransitionResult_D8F850D74536408EF1ED218F7A11A4A6__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HeroTPP_AnimBlueprint__pf53394063.h" },
		{ "OverrideNativeName", "AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691__pf = { "AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(UHeroTPP_AnimBlueprint_C__pf53394063, bpv__AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691__pf), Z_Construct_UScriptStruct_FAnimNode_TransitionResult, METADATA_PARAMS(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_Root_CEDB9C0441584D06409BBE831A729CF8__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HeroTPP_AnimBlueprint__pf53394063.h" },
		{ "OverrideNativeName", "AnimGraphNode_Root_CEDB9C0441584D06409BBE831A729CF8" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_Root_CEDB9C0441584D06409BBE831A729CF8__pf = { "AnimGraphNode_Root_CEDB9C0441584D06409BBE831A729CF8", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(UHeroTPP_AnimBlueprint_C__pf53394063, bpv__AnimGraphNode_Root_CEDB9C0441584D06409BBE831A729CF8__pf), Z_Construct_UScriptStruct_FAnimNode_Root, METADATA_PARAMS(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_Root_CEDB9C0441584D06409BBE831A729CF8__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_Root_CEDB9C0441584D06409BBE831A729CF8__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_b0l__K2Node_Event_DeltaTimeX__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__Speed__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__IsInAirx__pfzy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_StateMachine_63E01ED04FD7E6EEF5104CAD884F7B8B__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_StateResult_BE086D9A4FAFC223785E5BBA53595051__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_BlendSpacePlayer_B5D801B7406E99CB8C39F59CDA8B4582__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_StateResult_96FB424842BCC0648F2C2DB0CAFEB3DF__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_SequencePlayer_3EB448E5491D469DA5DC43966E0481A8__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_StateResult_AFF8E8664835BE31E02E81846FEE4095__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_SequencePlayer_3BD3B990412244CFC1892D84A4342C2D__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_StateResult_5ECDD11148538CEC852728BCBF0E5FD8__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_SequencePlayer_193B50AE4231658A9EE2C5864BCF5FC7__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_TransitionResult_04136FF0414AC997E300FFB31384DE23__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_TransitionResult_D8F850D74536408EF1ED218F7A11A4A6__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::NewProp_bpv__AnimGraphNode_Root_CEDB9C0441584D06409BBE831A729CF8__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroTPP_AnimBlueprint_C__pf53394063>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::ClassParams = {
		&UHeroTPP_AnimBlueprint_C__pf53394063::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Player_Assets/Character/HeroTPP_AnimBlueprint"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("HeroTPP_AnimBlueprint_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UHeroTPP_AnimBlueprint_C__pf53394063, TEXT("HeroTPP_AnimBlueprint_C"), 1539766898);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UHeroTPP_AnimBlueprint_C__pf53394063>()
	{
		return UHeroTPP_AnimBlueprint_C__pf53394063::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeroTPP_AnimBlueprint_C__pf53394063(Z_Construct_UClass_UHeroTPP_AnimBlueprint_C__pf53394063, &UHeroTPP_AnimBlueprint_C__pf53394063::StaticClass, TEXT("/Game/Player_Assets/Character/HeroTPP_AnimBlueprint"), TEXT("HeroTPP_AnimBlueprint_C"), true, TEXT("/Game/Player_Assets/Character/HeroTPP_AnimBlueprint"), TEXT("/Game/Player_Assets/Character/HeroTPP_AnimBlueprint.HeroTPP_AnimBlueprint_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroTPP_AnimBlueprint_C__pf53394063);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
