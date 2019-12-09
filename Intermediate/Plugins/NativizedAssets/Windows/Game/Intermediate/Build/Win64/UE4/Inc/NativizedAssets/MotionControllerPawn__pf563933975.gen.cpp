// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/MotionControllerPawn__pf563933975.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionControllerPawn__pf563933975() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_MotionController_C__pf563933975_NoRegister();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_2();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_2__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_0__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	static FName NAME_AMotionControllerPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AMotionControllerPawn_C__pf563933975::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMotionControllerPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void AMotionControllerPawn_C__pf563933975::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		MotionControllerPawn_C__pf563933975_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf),&Parms);
	}
	void AMotionControllerPawn_C__pf563933975::StaticRegisterNativesAMotionControllerPawn_C__pf563933975()
	{
		UClass* Class = AMotionControllerPawn_C__pf563933975::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteTeleportation", &AMotionControllerPawn_C__pf563933975::execbpf__ExecuteTeleportation__pf },
			{ "ExecuteUbergraph_MotionControllerPawn_2", &AMotionControllerPawn_C__pf563933975::execbpf__ExecuteUbergraph_MotionControllerPawn__pf_2 },
			{ "GetRotationFromInput", &AMotionControllerPawn_C__pf563933975::execbpf__GetRotationFromInput__pf },
			{ "InpActEvt_GrabLeft_K2Node_InputActionEvent_6", &AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf },
			{ "InpActEvt_GrabLeft_K2Node_InputActionEvent_7", &AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf },
			{ "InpActEvt_GrabRight_K2Node_InputActionEvent_4", &AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf },
			{ "InpActEvt_GrabRight_K2Node_InputActionEvent_5", &AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf },
			{ "InpActEvt_TeleportLeft_K2Node_InputActionEvent_2", &AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_2__pf },
			{ "InpActEvt_TeleportLeft_K2Node_InputActionEvent_3", &AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf },
			{ "InpActEvt_TeleportRight_K2Node_InputActionEvent_0", &AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_0__pf },
			{ "InpActEvt_TeleportRight_K2Node_InputActionEvent_1", &AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf },
			{ "ReceiveBeginPlay", &AMotionControllerPawn_C__pf563933975::execbpf__ReceiveBeginPlay__pf },
			{ "ReceiveTick", &AMotionControllerPawn_C__pf563933975::execbpf__ReceiveTick__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__ExecuteTeleportation__pf_Parms
		{
			ABP_MotionController_C__pf563933975* bpp__MotionController__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__MotionController__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf_Statics::NewProp_bpp__MotionController__pf = { "bpp__MotionController__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__ExecuteTeleportation__pf_Parms, bpp__MotionController__pf), Z_Construct_UClass_ABP_MotionController_C__pf563933975_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf_Statics::NewProp_bpp__MotionController__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "ExecuteTeleportation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "ExecuteTeleportation", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__ExecuteTeleportation__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ExecuteTeleportation") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_2_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__ExecuteUbergraph_MotionControllerPawn__pf_2_Parms
		{
			int32 bpp__EntryPoint__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__EntryPoint__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_2_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__ExecuteUbergraph_MotionControllerPawn__pf_2_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_2_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_MotionControllerPawn_2" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "ExecuteUbergraph_MotionControllerPawn_2", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__ExecuteUbergraph_MotionControllerPawn__pf_2_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_2_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_2_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_2_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_2()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ExecuteUbergraph_MotionControllerPawn_2") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__GetRotationFromInput__pf_Parms
		{
			float bpp__UpAxis__pf;
			float bpp__RightAxis__pf;
			ABP_MotionController_C__pf563933975* bpp__Controller__pf;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__Controller__pf;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__RightAxis__pf;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__UpAxis__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__GetRotationFromInput__pf_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::NewProp_bpp__Controller__pf = { "bpp__Controller__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__GetRotationFromInput__pf_Parms, bpp__Controller__pf), Z_Construct_UClass_ABP_MotionController_C__pf563933975_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::NewProp_bpp__RightAxis__pf = { "bpp__RightAxis__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__GetRotationFromInput__pf_Parms, bpp__RightAxis__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::NewProp_bpp__UpAxis__pf = { "bpp__UpAxis__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__GetRotationFromInput__pf_Parms, bpp__UpAxis__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::NewProp_bpp__Controller__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::NewProp_bpp__RightAxis__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::NewProp_bpp__UpAxis__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "GetRotationFromInput" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "GetRotationFromInput", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__GetRotationFromInput__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x14820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("GetRotationFromInput") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "InpActEvt_GrabLeft_K2Node_InputActionEvent_6" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "InpActEvt_GrabLeft_K2Node_InputActionEvent_6", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_GrabLeft_K2Node_InputActionEvent_6") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "InpActEvt_GrabLeft_K2Node_InputActionEvent_7" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "InpActEvt_GrabLeft_K2Node_InputActionEvent_7", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_GrabLeft_K2Node_InputActionEvent_7") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "InpActEvt_GrabRight_K2Node_InputActionEvent_4" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "InpActEvt_GrabRight_K2Node_InputActionEvent_4", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_GrabRight_K2Node_InputActionEvent_4") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "InpActEvt_GrabRight_K2Node_InputActionEvent_5" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "InpActEvt_GrabRight_K2Node_InputActionEvent_5", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_GrabRight_K2Node_InputActionEvent_5") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_2__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_2__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_2__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_2__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_2__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_2__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_2__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "InpActEvt_TeleportLeft_K2Node_InputActionEvent_2" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_2__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "InpActEvt_TeleportLeft_K2Node_InputActionEvent_2", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_2__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_2__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_2__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_2__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_2__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_2__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_TeleportLeft_K2Node_InputActionEvent_2") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_2__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "InpActEvt_TeleportLeft_K2Node_InputActionEvent_3" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "InpActEvt_TeleportLeft_K2Node_InputActionEvent_3", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_TeleportLeft_K2Node_InputActionEvent_3") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_0__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_0__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_0__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_0__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_0__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_0__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_0__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "InpActEvt_TeleportRight_K2Node_InputActionEvent_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_0__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "InpActEvt_TeleportRight_K2Node_InputActionEvent_0", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_0__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_0__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_0__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_0__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_0__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_0__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_TeleportRight_K2Node_InputActionEvent_0") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_0__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "InpActEvt_TeleportRight_K2Node_InputActionEvent_1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "InpActEvt_TeleportRight_K2Node_InputActionEvent_1", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_TeleportRight_K2Node_InputActionEvent_1") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveBeginPlay") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveTick") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_NoRegister()
	{
		return AMotionControllerPawn_C__pf563933975::StaticClass();
	}
	struct Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key_6__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key_6__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetTeleportDestination_Rotation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_GetTeleportDestination_Rotation__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetTeleportDestination_Location__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_GetTeleportDestination_Location__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_MotionController__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_CustomEvent_MotionController__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_struct_Variable_3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__Temp_struct_Variable_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key_5__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key_5__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key_4__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key_4__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_struct_Variable_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__Temp_struct_Variable_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key_7__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key_7__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_struct_Variable_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__Temp_struct_Variable_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_struct_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__Temp_struct_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key_3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__UseControllerRollToRotate__pf_MetaData[];
#endif
		static void NewProp_bpv__UseControllerRollToRotate__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__UseControllerRollToRotate__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultPlayerHeight__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__DefaultPlayerHeight__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LeftStickDown__pf_MetaData[];
#endif
		static void NewProp_bpv__LeftStickDown__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__LeftStickDown__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RightStickDown__pf_MetaData[];
#endif
		static void NewProp_bpv__RightStickDown__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__RightStickDown__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ThumbDeadzone__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__ThumbDeadzone__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TeleportFadeColor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__TeleportFadeColor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__IsTeleporting__pf_MetaData[];
#endif
		static void NewProp_bpv__IsTeleporting__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__IsTeleporting__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FadeInDuration__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__FadeInDuration__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FadeOutDuration__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__FadeOutDuration__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RightController__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__RightController__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LeftController__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__LeftController__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__bShowChaperone__pf_MetaData[];
#endif
		static void NewProp_bpv__bShowChaperone__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__bShowChaperone__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__VROrigin__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__VROrigin__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Camera__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Camera__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf, "ExecuteTeleportation" }, // 2399182888
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_2, "ExecuteUbergraph_MotionControllerPawn_2" }, // 3292368394
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf, "GetRotationFromInput" }, // 4230169086
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf, "InpActEvt_GrabLeft_K2Node_InputActionEvent_6" }, // 1869664197
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf, "InpActEvt_GrabLeft_K2Node_InputActionEvent_7" }, // 50020493
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf, "InpActEvt_GrabRight_K2Node_InputActionEvent_4" }, // 2896093936
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf, "InpActEvt_GrabRight_K2Node_InputActionEvent_5" }, // 525905512
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_2__pf, "InpActEvt_TeleportLeft_K2Node_InputActionEvent_2" }, // 3549387504
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf, "InpActEvt_TeleportLeft_K2Node_InputActionEvent_3" }, // 2467794492
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_0__pf, "InpActEvt_TeleportRight_K2Node_InputActionEvent_0" }, // 3987578144
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf, "InpActEvt_TeleportRight_K2Node_InputActionEvent_1" }, // 2205397512
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 3353758944
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf, "ReceiveTick" }, // 4039303994
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MotionControllerPawn__pf563933975.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "MotionControllerPawn_C" },
		{ "ReplaceConverted", "/Game/VirtualRealityBP/Blueprints/MotionControllerPawn.MotionControllerPawn_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_K2_AddLocalOffset_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf = { "CallFunc_K2_AddLocalOffset_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_6__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key_6" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_6__pf = { "K2Node_InputActionEvent_Key_6", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_InputActionEvent_Key_6__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_6__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_6__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Rotation__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_GetTeleportDestination_Rotation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Rotation__pf = { "CallFunc_GetTeleportDestination_Rotation", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_GetTeleportDestination_Rotation__pf), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Rotation__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Rotation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Location__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_GetTeleportDestination_Location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Location__pf = { "CallFunc_GetTeleportDestination_Location", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_GetTeleportDestination_Location__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Location__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Location__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_CustomEvent_MotionController__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_MotionController" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_CustomEvent_MotionController__pf = { "K2Node_CustomEvent_MotionController", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_CustomEvent_MotionController__pf), Z_Construct_UClass_ABP_MotionController_C__pf563933975_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_CustomEvent_MotionController__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_CustomEvent_MotionController__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "Temp_struct_Variable_3" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_3__pf = { "Temp_struct_Variable_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__Temp_struct_Variable_3__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_3__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_5__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key_5" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_5__pf = { "K2Node_InputActionEvent_Key_5", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_InputActionEvent_Key_5__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_5__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_5__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_4__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key_4" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_4__pf = { "K2Node_InputActionEvent_Key_4", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_InputActionEvent_Key_4__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_4__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_4__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "Temp_struct_Variable_2" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_2__pf = { "Temp_struct_Variable_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__Temp_struct_Variable_2__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_2__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_7__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key_7" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_7__pf = { "K2Node_InputActionEvent_Key_7", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_InputActionEvent_Key_7__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_7__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_7__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "Temp_struct_Variable_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_1__pf = { "Temp_struct_Variable_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__Temp_struct_Variable_1__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_1__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf = { "K2Node_InputActionEvent_Key", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_InputActionEvent_Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf = { "K2Node_InputActionEvent_Key_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_InputActionEvent_Key_1__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "Temp_struct_Variable" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable__pf = { "Temp_struct_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__Temp_struct_Variable__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key_2" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf = { "K2Node_InputActionEvent_Key_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_InputActionEvent_Key_2__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key_3" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_3__pf = { "K2Node_InputActionEvent_Key_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_InputActionEvent_Key_3__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_3__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_SwitchName_CmpSuccess" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->b0l__K2Node_SwitchName_CmpSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf = { "K2Node_SwitchName_CmpSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__UseControllerRollToRotate__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Use Controller Roll to Rotate" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "UseControllerRollToRotate" },
		{ "tooltip", "Forced to True for PSVR Platform. PS Move controller has no thumbstick axis input so we must force enable this option." },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__UseControllerRollToRotate__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->bpv__UseControllerRollToRotate__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__UseControllerRollToRotate__pf = { "UseControllerRollToRotate", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__UseControllerRollToRotate__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__UseControllerRollToRotate__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__UseControllerRollToRotate__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__DefaultPlayerHeight__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Default Player Height" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "DefaultPlayerHeight" },
		{ "tooltip", "Player height used on the PS4." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__DefaultPlayerHeight__pf = { "DefaultPlayerHeight", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__DefaultPlayerHeight__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__DefaultPlayerHeight__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__DefaultPlayerHeight__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftStickDown__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Left Stick Down" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "LeftStickDown" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftStickDown__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->bpv__LeftStickDown__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftStickDown__pf = { "LeftStickDown", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftStickDown__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftStickDown__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftStickDown__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightStickDown__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Right Stick Down" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "RightStickDown" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightStickDown__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->bpv__RightStickDown__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightStickDown__pf = { "RightStickDown", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightStickDown__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightStickDown__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightStickDown__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__ThumbDeadzone__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Thumb Deadzone" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "ThumbDeadzone" },
		{ "tooltip", "Deadzone for adjusting rotation using the thumbs during teleportation" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__ThumbDeadzone__pf = { "ThumbDeadzone", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__ThumbDeadzone__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__ThumbDeadzone__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__ThumbDeadzone__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__TeleportFadeColor__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Teleport Fade Color" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "TeleportFadeColor" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__TeleportFadeColor__pf = { "TeleportFadeColor", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__TeleportFadeColor__pf), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__TeleportFadeColor__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__TeleportFadeColor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__IsTeleporting__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Is Teleporting" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "IsTeleporting" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__IsTeleporting__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->bpv__IsTeleporting__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__IsTeleporting__pf = { "IsTeleporting", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__IsTeleporting__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__IsTeleporting__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__IsTeleporting__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__FadeInDuration__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Fade in Duration" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "FadeInDuration" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__FadeInDuration__pf = { "FadeInDuration", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__FadeInDuration__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__FadeInDuration__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__FadeInDuration__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__FadeOutDuration__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Fade Out Duration" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "FadeOutDuration" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__FadeOutDuration__pf = { "FadeOutDuration", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__FadeOutDuration__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__FadeOutDuration__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__FadeOutDuration__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightController__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Right Controller" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "RightController" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightController__pf = { "RightController", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__RightController__pf), Z_Construct_UClass_ABP_MotionController_C__pf563933975_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightController__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightController__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftController__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Left Controller" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "LeftController" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftController__pf = { "LeftController", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__LeftController__pf), Z_Construct_UClass_ABP_MotionController_C__pf563933975_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftController__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftController__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__bShowChaperone__pf_MetaData[] = {
		{ "Category", "Chaperone" },
		{ "DisplayName", "Show Chaperone" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "bShowChaperone" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__bShowChaperone__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->bpv__bShowChaperone__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__bShowChaperone__pf = { "bShowChaperone", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__bShowChaperone__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__bShowChaperone__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__bShowChaperone__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__VROrigin__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "VROrigin" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__VROrigin__pf = { "VROrigin", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__VROrigin__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__VROrigin__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__VROrigin__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Camera__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "Camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Camera__pf = { "Camera", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__Camera__pf), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Camera__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Camera__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_6__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Rotation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Location__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_CustomEvent_MotionController__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_5__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_4__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_7__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__UseControllerRollToRotate__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__DefaultPlayerHeight__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftStickDown__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightStickDown__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__ThumbDeadzone__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__TeleportFadeColor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__IsTeleporting__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__FadeInDuration__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__FadeOutDuration__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightController__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftController__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__bShowChaperone__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__VROrigin__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Camera__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMotionControllerPawn_C__pf563933975>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::ClassParams = {
		&AMotionControllerPawn_C__pf563933975::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMotionControllerPawn_C__pf563933975()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/VirtualRealityBP/Blueprints/MotionControllerPawn"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("MotionControllerPawn_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AMotionControllerPawn_C__pf563933975, TEXT("MotionControllerPawn_C"), 3124975906);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AMotionControllerPawn_C__pf563933975>()
	{
		return AMotionControllerPawn_C__pf563933975::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMotionControllerPawn_C__pf563933975(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, &AMotionControllerPawn_C__pf563933975::StaticClass, TEXT("/Game/VirtualRealityBP/Blueprints/MotionControllerPawn"), TEXT("MotionControllerPawn_C"), true, TEXT("/Game/VirtualRealityBP/Blueprints/MotionControllerPawn"), TEXT("/Game/VirtualRealityBP/Blueprints/MotionControllerPawn.MotionControllerPawn_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMotionControllerPawn_C__pf563933975);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
