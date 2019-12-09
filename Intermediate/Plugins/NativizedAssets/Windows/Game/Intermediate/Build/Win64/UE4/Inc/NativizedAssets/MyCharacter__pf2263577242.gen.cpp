// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/MyCharacter__pf2263577242.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacter__pf2263577242() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMyCharacter_C__pf2263577242_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMyCharacter_C__pf2263577242();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__ExecuteUbergraph_MyCharacter__pf_1();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_A_K2Node_InputKeyEvent_0__pf();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_A_K2Node_InputKeyEvent_1__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_D_K2Node_InputKeyEvent_2__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_D_K2Node_InputKeyEvent_3__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_S_K2Node_InputKeyEvent_4__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_S_K2Node_InputKeyEvent_5__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_8__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_9__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_W_K2Node_InputKeyEvent_6__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_W_K2Node_InputKeyEvent_7__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_47__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_UpLook_K2Node_InputAxisEvent_28__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__ReceiveTick__pf();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	static FName NAME_AMyCharacter_C__pf2263577242_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void AMyCharacter_C__pf2263577242::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		MyCharacter_C__pf2263577242_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_AMyCharacter_C__pf2263577242_bpf__ReceiveTick__pf),&Parms);
	}
	void AMyCharacter_C__pf2263577242::StaticRegisterNativesAMyCharacter_C__pf2263577242()
	{
		UClass* Class = AMyCharacter_C__pf2263577242::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteUbergraph_MyCharacter_1", &AMyCharacter_C__pf2263577242::execbpf__ExecuteUbergraph_MyCharacter__pf_1 },
			{ "InpActEvt_A_K2Node_InputKeyEvent_0", &AMyCharacter_C__pf2263577242::execbpf__InpActEvt_A_K2Node_InputKeyEvent_0__pf },
			{ "InpActEvt_A_K2Node_InputKeyEvent_1", &AMyCharacter_C__pf2263577242::execbpf__InpActEvt_A_K2Node_InputKeyEvent_1__pf },
			{ "InpActEvt_D_K2Node_InputKeyEvent_2", &AMyCharacter_C__pf2263577242::execbpf__InpActEvt_D_K2Node_InputKeyEvent_2__pf },
			{ "InpActEvt_D_K2Node_InputKeyEvent_3", &AMyCharacter_C__pf2263577242::execbpf__InpActEvt_D_K2Node_InputKeyEvent_3__pf },
			{ "InpActEvt_S_K2Node_InputKeyEvent_4", &AMyCharacter_C__pf2263577242::execbpf__InpActEvt_S_K2Node_InputKeyEvent_4__pf },
			{ "InpActEvt_S_K2Node_InputKeyEvent_5", &AMyCharacter_C__pf2263577242::execbpf__InpActEvt_S_K2Node_InputKeyEvent_5__pf },
			{ "InpActEvt_SpaceBar_K2Node_InputKeyEvent_8", &AMyCharacter_C__pf2263577242::execbpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_8__pf },
			{ "InpActEvt_SpaceBar_K2Node_InputKeyEvent_9", &AMyCharacter_C__pf2263577242::execbpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_9__pf },
			{ "InpActEvt_W_K2Node_InputKeyEvent_6", &AMyCharacter_C__pf2263577242::execbpf__InpActEvt_W_K2Node_InputKeyEvent_6__pf },
			{ "InpActEvt_W_K2Node_InputKeyEvent_7", &AMyCharacter_C__pf2263577242::execbpf__InpActEvt_W_K2Node_InputKeyEvent_7__pf },
			{ "InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79", &AMyCharacter_C__pf2263577242::execbpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79__pf },
			{ "InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90", &AMyCharacter_C__pf2263577242::execbpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90__pf },
			{ "InpAxisEvt_Turn_K2Node_InputAxisEvent_47", &AMyCharacter_C__pf2263577242::execbpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_47__pf },
			{ "InpAxisEvt_UpLook_K2Node_InputAxisEvent_28", &AMyCharacter_C__pf2263577242::execbpf__InpAxisEvt_UpLook_K2Node_InputAxisEvent_28__pf },
			{ "ReceiveTick", &AMyCharacter_C__pf2263577242::execbpf__ReceiveTick__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__ExecuteUbergraph_MyCharacter__pf_1_Statics
	{
		struct MyCharacter_C__pf2263577242_eventbpf__ExecuteUbergraph_MyCharacter__pf_1_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__ExecuteUbergraph_MyCharacter__pf_1_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MyCharacter_C__pf2263577242_eventbpf__ExecuteUbergraph_MyCharacter__pf_1_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__ExecuteUbergraph_MyCharacter__pf_1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__ExecuteUbergraph_MyCharacter__pf_1_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__ExecuteUbergraph_MyCharacter__pf_1_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_MyCharacter_1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__ExecuteUbergraph_MyCharacter__pf_1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter_C__pf2263577242, nullptr, "ExecuteUbergraph_MyCharacter_1", nullptr, nullptr, sizeof(MyCharacter_C__pf2263577242_eventbpf__ExecuteUbergraph_MyCharacter__pf_1_Parms), Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__ExecuteUbergraph_MyCharacter__pf_1_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__ExecuteUbergraph_MyCharacter__pf_1_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__ExecuteUbergraph_MyCharacter__pf_1_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__ExecuteUbergraph_MyCharacter__pf_1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__ExecuteUbergraph_MyCharacter__pf_1()
	{
		UObject* Outer = Z_Construct_UClass_AMyCharacter_C__pf2263577242();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ExecuteUbergraph_MyCharacter_1") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__ExecuteUbergraph_MyCharacter__pf_1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_A_K2Node_InputKeyEvent_0__pf_Statics
	{
		struct MyCharacter_C__pf2263577242_eventbpf__InpActEvt_A_K2Node_InputKeyEvent_0__pf_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_A_K2Node_InputKeyEvent_0__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MyCharacter_C__pf2263577242_eventbpf__InpActEvt_A_K2Node_InputKeyEvent_0__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_A_K2Node_InputKeyEvent_0__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_A_K2Node_InputKeyEvent_0__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_A_K2Node_InputKeyEvent_0__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "InpActEvt_A_K2Node_InputKeyEvent_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_A_K2Node_InputKeyEvent_0__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter_C__pf2263577242, nullptr, "InpActEvt_A_K2Node_InputKeyEvent_0", nullptr, nullptr, sizeof(MyCharacter_C__pf2263577242_eventbpf__InpActEvt_A_K2Node_InputKeyEvent_0__pf_Parms), Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_A_K2Node_InputKeyEvent_0__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_A_K2Node_InputKeyEvent_0__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_A_K2Node_InputKeyEvent_0__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_A_K2Node_InputKeyEvent_0__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_A_K2Node_InputKeyEvent_0__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMyCharacter_C__pf2263577242();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_A_K2Node_InputKeyEvent_0") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_A_K2Node_InputKeyEvent_0__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_A_K2Node_InputKeyEvent_1__pf_Statics
	{
		struct MyCharacter_C__pf2263577242_eventbpf__InpActEvt_A_K2Node_InputKeyEvent_1__pf_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_A_K2Node_InputKeyEvent_1__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MyCharacter_C__pf2263577242_eventbpf__InpActEvt_A_K2Node_InputKeyEvent_1__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_A_K2Node_InputKeyEvent_1__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_A_K2Node_InputKeyEvent_1__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_A_K2Node_InputKeyEvent_1__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "InpActEvt_A_K2Node_InputKeyEvent_1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_A_K2Node_InputKeyEvent_1__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter_C__pf2263577242, nullptr, "InpActEvt_A_K2Node_InputKeyEvent_1", nullptr, nullptr, sizeof(MyCharacter_C__pf2263577242_eventbpf__InpActEvt_A_K2Node_InputKeyEvent_1__pf_Parms), Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_A_K2Node_InputKeyEvent_1__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_A_K2Node_InputKeyEvent_1__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_A_K2Node_InputKeyEvent_1__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_A_K2Node_InputKeyEvent_1__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_A_K2Node_InputKeyEvent_1__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMyCharacter_C__pf2263577242();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_A_K2Node_InputKeyEvent_1") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_A_K2Node_InputKeyEvent_1__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_D_K2Node_InputKeyEvent_2__pf_Statics
	{
		struct MyCharacter_C__pf2263577242_eventbpf__InpActEvt_D_K2Node_InputKeyEvent_2__pf_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_D_K2Node_InputKeyEvent_2__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MyCharacter_C__pf2263577242_eventbpf__InpActEvt_D_K2Node_InputKeyEvent_2__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_D_K2Node_InputKeyEvent_2__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_D_K2Node_InputKeyEvent_2__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_D_K2Node_InputKeyEvent_2__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "InpActEvt_D_K2Node_InputKeyEvent_2" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_D_K2Node_InputKeyEvent_2__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter_C__pf2263577242, nullptr, "InpActEvt_D_K2Node_InputKeyEvent_2", nullptr, nullptr, sizeof(MyCharacter_C__pf2263577242_eventbpf__InpActEvt_D_K2Node_InputKeyEvent_2__pf_Parms), Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_D_K2Node_InputKeyEvent_2__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_D_K2Node_InputKeyEvent_2__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_D_K2Node_InputKeyEvent_2__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_D_K2Node_InputKeyEvent_2__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_D_K2Node_InputKeyEvent_2__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMyCharacter_C__pf2263577242();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_D_K2Node_InputKeyEvent_2") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_D_K2Node_InputKeyEvent_2__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_D_K2Node_InputKeyEvent_3__pf_Statics
	{
		struct MyCharacter_C__pf2263577242_eventbpf__InpActEvt_D_K2Node_InputKeyEvent_3__pf_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_D_K2Node_InputKeyEvent_3__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MyCharacter_C__pf2263577242_eventbpf__InpActEvt_D_K2Node_InputKeyEvent_3__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_D_K2Node_InputKeyEvent_3__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_D_K2Node_InputKeyEvent_3__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_D_K2Node_InputKeyEvent_3__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "InpActEvt_D_K2Node_InputKeyEvent_3" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_D_K2Node_InputKeyEvent_3__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter_C__pf2263577242, nullptr, "InpActEvt_D_K2Node_InputKeyEvent_3", nullptr, nullptr, sizeof(MyCharacter_C__pf2263577242_eventbpf__InpActEvt_D_K2Node_InputKeyEvent_3__pf_Parms), Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_D_K2Node_InputKeyEvent_3__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_D_K2Node_InputKeyEvent_3__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_D_K2Node_InputKeyEvent_3__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_D_K2Node_InputKeyEvent_3__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_D_K2Node_InputKeyEvent_3__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMyCharacter_C__pf2263577242();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_D_K2Node_InputKeyEvent_3") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_D_K2Node_InputKeyEvent_3__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_S_K2Node_InputKeyEvent_4__pf_Statics
	{
		struct MyCharacter_C__pf2263577242_eventbpf__InpActEvt_S_K2Node_InputKeyEvent_4__pf_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_S_K2Node_InputKeyEvent_4__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MyCharacter_C__pf2263577242_eventbpf__InpActEvt_S_K2Node_InputKeyEvent_4__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_S_K2Node_InputKeyEvent_4__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_S_K2Node_InputKeyEvent_4__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_S_K2Node_InputKeyEvent_4__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "InpActEvt_S_K2Node_InputKeyEvent_4" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_S_K2Node_InputKeyEvent_4__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter_C__pf2263577242, nullptr, "InpActEvt_S_K2Node_InputKeyEvent_4", nullptr, nullptr, sizeof(MyCharacter_C__pf2263577242_eventbpf__InpActEvt_S_K2Node_InputKeyEvent_4__pf_Parms), Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_S_K2Node_InputKeyEvent_4__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_S_K2Node_InputKeyEvent_4__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_S_K2Node_InputKeyEvent_4__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_S_K2Node_InputKeyEvent_4__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_S_K2Node_InputKeyEvent_4__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMyCharacter_C__pf2263577242();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_S_K2Node_InputKeyEvent_4") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_S_K2Node_InputKeyEvent_4__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_S_K2Node_InputKeyEvent_5__pf_Statics
	{
		struct MyCharacter_C__pf2263577242_eventbpf__InpActEvt_S_K2Node_InputKeyEvent_5__pf_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_S_K2Node_InputKeyEvent_5__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MyCharacter_C__pf2263577242_eventbpf__InpActEvt_S_K2Node_InputKeyEvent_5__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_S_K2Node_InputKeyEvent_5__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_S_K2Node_InputKeyEvent_5__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_S_K2Node_InputKeyEvent_5__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "InpActEvt_S_K2Node_InputKeyEvent_5" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_S_K2Node_InputKeyEvent_5__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter_C__pf2263577242, nullptr, "InpActEvt_S_K2Node_InputKeyEvent_5", nullptr, nullptr, sizeof(MyCharacter_C__pf2263577242_eventbpf__InpActEvt_S_K2Node_InputKeyEvent_5__pf_Parms), Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_S_K2Node_InputKeyEvent_5__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_S_K2Node_InputKeyEvent_5__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_S_K2Node_InputKeyEvent_5__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_S_K2Node_InputKeyEvent_5__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_S_K2Node_InputKeyEvent_5__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMyCharacter_C__pf2263577242();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_S_K2Node_InputKeyEvent_5") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_S_K2Node_InputKeyEvent_5__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_8__pf_Statics
	{
		struct MyCharacter_C__pf2263577242_eventbpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_8__pf_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_8__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MyCharacter_C__pf2263577242_eventbpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_8__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_8__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_8__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_8__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "InpActEvt_SpaceBar_K2Node_InputKeyEvent_8" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_8__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter_C__pf2263577242, nullptr, "InpActEvt_SpaceBar_K2Node_InputKeyEvent_8", nullptr, nullptr, sizeof(MyCharacter_C__pf2263577242_eventbpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_8__pf_Parms), Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_8__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_8__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_8__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_8__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_8__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMyCharacter_C__pf2263577242();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_SpaceBar_K2Node_InputKeyEvent_8") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_8__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_9__pf_Statics
	{
		struct MyCharacter_C__pf2263577242_eventbpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_9__pf_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_9__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MyCharacter_C__pf2263577242_eventbpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_9__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_9__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_9__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_9__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "InpActEvt_SpaceBar_K2Node_InputKeyEvent_9" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_9__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter_C__pf2263577242, nullptr, "InpActEvt_SpaceBar_K2Node_InputKeyEvent_9", nullptr, nullptr, sizeof(MyCharacter_C__pf2263577242_eventbpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_9__pf_Parms), Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_9__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_9__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_9__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_9__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_9__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMyCharacter_C__pf2263577242();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_SpaceBar_K2Node_InputKeyEvent_9") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_9__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_W_K2Node_InputKeyEvent_6__pf_Statics
	{
		struct MyCharacter_C__pf2263577242_eventbpf__InpActEvt_W_K2Node_InputKeyEvent_6__pf_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_W_K2Node_InputKeyEvent_6__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MyCharacter_C__pf2263577242_eventbpf__InpActEvt_W_K2Node_InputKeyEvent_6__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_W_K2Node_InputKeyEvent_6__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_W_K2Node_InputKeyEvent_6__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_W_K2Node_InputKeyEvent_6__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "InpActEvt_W_K2Node_InputKeyEvent_6" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_W_K2Node_InputKeyEvent_6__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter_C__pf2263577242, nullptr, "InpActEvt_W_K2Node_InputKeyEvent_6", nullptr, nullptr, sizeof(MyCharacter_C__pf2263577242_eventbpf__InpActEvt_W_K2Node_InputKeyEvent_6__pf_Parms), Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_W_K2Node_InputKeyEvent_6__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_W_K2Node_InputKeyEvent_6__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_W_K2Node_InputKeyEvent_6__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_W_K2Node_InputKeyEvent_6__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_W_K2Node_InputKeyEvent_6__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMyCharacter_C__pf2263577242();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_W_K2Node_InputKeyEvent_6") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_W_K2Node_InputKeyEvent_6__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_W_K2Node_InputKeyEvent_7__pf_Statics
	{
		struct MyCharacter_C__pf2263577242_eventbpf__InpActEvt_W_K2Node_InputKeyEvent_7__pf_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_W_K2Node_InputKeyEvent_7__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MyCharacter_C__pf2263577242_eventbpf__InpActEvt_W_K2Node_InputKeyEvent_7__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_W_K2Node_InputKeyEvent_7__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_W_K2Node_InputKeyEvent_7__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_W_K2Node_InputKeyEvent_7__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "InpActEvt_W_K2Node_InputKeyEvent_7" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_W_K2Node_InputKeyEvent_7__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter_C__pf2263577242, nullptr, "InpActEvt_W_K2Node_InputKeyEvent_7", nullptr, nullptr, sizeof(MyCharacter_C__pf2263577242_eventbpf__InpActEvt_W_K2Node_InputKeyEvent_7__pf_Parms), Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_W_K2Node_InputKeyEvent_7__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_W_K2Node_InputKeyEvent_7__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_W_K2Node_InputKeyEvent_7__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_W_K2Node_InputKeyEvent_7__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_W_K2Node_InputKeyEvent_7__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMyCharacter_C__pf2263577242();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_W_K2Node_InputKeyEvent_7") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_W_K2Node_InputKeyEvent_7__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79__pf_Statics
	{
		struct MyCharacter_C__pf2263577242_eventbpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79__pf_Parms
		{
			float bpp__AxisValue__pf;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__AxisValue__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79__pf_Statics::NewProp_bpp__AxisValue__pf = { "bpp__AxisValue__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MyCharacter_C__pf2263577242_eventbpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79__pf_Parms, bpp__AxisValue__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79__pf_Statics::NewProp_bpp__AxisValue__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter_C__pf2263577242, nullptr, "InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79", nullptr, nullptr, sizeof(MyCharacter_C__pf2263577242_eventbpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79__pf_Parms), Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMyCharacter_C__pf2263577242();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90__pf_Statics
	{
		struct MyCharacter_C__pf2263577242_eventbpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90__pf_Parms
		{
			float bpp__AxisValue__pf;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__AxisValue__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90__pf_Statics::NewProp_bpp__AxisValue__pf = { "bpp__AxisValue__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MyCharacter_C__pf2263577242_eventbpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90__pf_Parms, bpp__AxisValue__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90__pf_Statics::NewProp_bpp__AxisValue__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter_C__pf2263577242, nullptr, "InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90", nullptr, nullptr, sizeof(MyCharacter_C__pf2263577242_eventbpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90__pf_Parms), Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMyCharacter_C__pf2263577242();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_47__pf_Statics
	{
		struct MyCharacter_C__pf2263577242_eventbpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_47__pf_Parms
		{
			float bpp__AxisValue__pf;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__AxisValue__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_47__pf_Statics::NewProp_bpp__AxisValue__pf = { "bpp__AxisValue__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MyCharacter_C__pf2263577242_eventbpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_47__pf_Parms, bpp__AxisValue__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_47__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_47__pf_Statics::NewProp_bpp__AxisValue__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_47__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "InpAxisEvt_Turn_K2Node_InputAxisEvent_47" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_47__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter_C__pf2263577242, nullptr, "InpAxisEvt_Turn_K2Node_InputAxisEvent_47", nullptr, nullptr, sizeof(MyCharacter_C__pf2263577242_eventbpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_47__pf_Parms), Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_47__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_47__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_47__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_47__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_47__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMyCharacter_C__pf2263577242();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpAxisEvt_Turn_K2Node_InputAxisEvent_47") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_47__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_UpLook_K2Node_InputAxisEvent_28__pf_Statics
	{
		struct MyCharacter_C__pf2263577242_eventbpf__InpAxisEvt_UpLook_K2Node_InputAxisEvent_28__pf_Parms
		{
			float bpp__AxisValue__pf;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__AxisValue__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_UpLook_K2Node_InputAxisEvent_28__pf_Statics::NewProp_bpp__AxisValue__pf = { "bpp__AxisValue__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MyCharacter_C__pf2263577242_eventbpf__InpAxisEvt_UpLook_K2Node_InputAxisEvent_28__pf_Parms, bpp__AxisValue__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_UpLook_K2Node_InputAxisEvent_28__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_UpLook_K2Node_InputAxisEvent_28__pf_Statics::NewProp_bpp__AxisValue__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_UpLook_K2Node_InputAxisEvent_28__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "InpAxisEvt_UpLook_K2Node_InputAxisEvent_28" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_UpLook_K2Node_InputAxisEvent_28__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter_C__pf2263577242, nullptr, "InpAxisEvt_UpLook_K2Node_InputAxisEvent_28", nullptr, nullptr, sizeof(MyCharacter_C__pf2263577242_eventbpf__InpAxisEvt_UpLook_K2Node_InputAxisEvent_28__pf_Parms), Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_UpLook_K2Node_InputAxisEvent_28__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_UpLook_K2Node_InputAxisEvent_28__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_UpLook_K2Node_InputAxisEvent_28__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_UpLook_K2Node_InputAxisEvent_28__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_UpLook_K2Node_InputAxisEvent_28__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMyCharacter_C__pf2263577242();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpAxisEvt_UpLook_K2Node_InputAxisEvent_28") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_UpLook_K2Node_InputAxisEvent_28__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MyCharacter_C__pf2263577242_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter_C__pf2263577242, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(MyCharacter_C__pf2263577242_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__ReceiveTick__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMyCharacter_C__pf2263577242();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveTick") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyCharacter_C__pf2263577242_NoRegister()
	{
		return AMyCharacter_C__pf2263577242::StaticClass();
	}
	struct Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputKeyEvent_Key_9__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputKeyEvent_Key_9__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputKeyEvent_Key_8__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputKeyEvent_Key_8__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_struct_Variable_4__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__Temp_struct_Variable_4__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Yaw__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Pitch__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Roll__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputAxisEvent_AxisValue_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_InputAxisEvent_AxisValue_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputAxisEvent_AxisValue_3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_InputAxisEvent_AxisValue_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_struct_Variable_3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__Temp_struct_Variable_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputKeyEvent_Key__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputKeyEvent_Key__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputKeyEvent_Key_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputKeyEvent_Key_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_struct_Variable_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__Temp_struct_Variable_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputKeyEvent_Key_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputKeyEvent_Key_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputKeyEvent_Key_3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputKeyEvent_Key_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_struct_Variable_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__Temp_struct_Variable_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputKeyEvent_Key_4__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputKeyEvent_Key_4__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputKeyEvent_Key_5__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputKeyEvent_Key_5__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_struct_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__Temp_struct_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputKeyEvent_Key_6__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputKeyEvent_Key_6__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputKeyEvent_Key_7__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputKeyEvent_Key_7__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__BaseLookUpRate__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__BaseLookUpRate__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__BaseTurnRate__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__BaseTurnRate__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CameraBoom__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__CameraBoom__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FollowCamera__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__FollowCamera__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__ExecuteUbergraph_MyCharacter__pf_1, "ExecuteUbergraph_MyCharacter_1" }, // 1052924866
		{ &Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_A_K2Node_InputKeyEvent_0__pf, "InpActEvt_A_K2Node_InputKeyEvent_0" }, // 3545962284
		{ &Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_A_K2Node_InputKeyEvent_1__pf, "InpActEvt_A_K2Node_InputKeyEvent_1" }, // 2590352753
		{ &Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_D_K2Node_InputKeyEvent_2__pf, "InpActEvt_D_K2Node_InputKeyEvent_2" }, // 2699485205
		{ &Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_D_K2Node_InputKeyEvent_3__pf, "InpActEvt_D_K2Node_InputKeyEvent_3" }, // 3614168046
		{ &Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_S_K2Node_InputKeyEvent_4__pf, "InpActEvt_S_K2Node_InputKeyEvent_4" }, // 1638127256
		{ &Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_S_K2Node_InputKeyEvent_5__pf, "InpActEvt_S_K2Node_InputKeyEvent_5" }, // 3776177870
		{ &Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_8__pf, "InpActEvt_SpaceBar_K2Node_InputKeyEvent_8" }, // 1599819894
		{ &Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_9__pf, "InpActEvt_SpaceBar_K2Node_InputKeyEvent_9" }, // 3802176116
		{ &Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_W_K2Node_InputKeyEvent_6__pf, "InpActEvt_W_K2Node_InputKeyEvent_6" }, // 2026206473
		{ &Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpActEvt_W_K2Node_InputKeyEvent_7__pf, "InpActEvt_W_K2Node_InputKeyEvent_7" }, // 115888290
		{ &Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79__pf, "InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79" }, // 3450677586
		{ &Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90__pf, "InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90" }, // 2922259721
		{ &Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_47__pf, "InpAxisEvt_Turn_K2Node_InputAxisEvent_47" }, // 2436445980
		{ &Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__InpAxisEvt_UpLook_K2Node_InputAxisEvent_28__pf, "InpAxisEvt_UpLook_K2Node_InputAxisEvent_28" }, // 4266891833
		{ &Z_Construct_UFunction_AMyCharacter_C__pf2263577242_bpf__ReceiveTick__pf, "ReceiveTick" }, // 3154787664
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyCharacter__pf2263577242.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "MyCharacter_C" },
		{ "ReplaceConverted", "/Game/Player_Assets/Blueprints/MyCharacter.MyCharacter_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_9__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "K2Node_InputKeyEvent_Key_9" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_9__pf = { "K2Node_InputKeyEvent_Key_9", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMyCharacter_C__pf2263577242, b0l__K2Node_InputKeyEvent_Key_9__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_9__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_9__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_8__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "K2Node_InputKeyEvent_Key_8" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_8__pf = { "K2Node_InputKeyEvent_Key_8", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMyCharacter_C__pf2263577242, b0l__K2Node_InputKeyEvent_Key_8__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_8__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_8__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMyCharacter_C__pf2263577242, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__Temp_struct_Variable_4__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "Temp_struct_Variable_4" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__Temp_struct_Variable_4__pf = { "Temp_struct_Variable_4", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMyCharacter_C__pf2263577242, b0l__Temp_struct_Variable_4__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__Temp_struct_Variable_4__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__Temp_struct_Variable_4__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "CallFunc_BreakRotator_Yaw" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf = { "CallFunc_BreakRotator_Yaw", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMyCharacter_C__pf2263577242, b0l__CallFunc_BreakRotator_Yaw__pf), METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "CallFunc_BreakRotator_Pitch" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf = { "CallFunc_BreakRotator_Pitch", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMyCharacter_C__pf2263577242, b0l__CallFunc_BreakRotator_Pitch__pf), METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "CallFunc_BreakRotator_Roll" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf = { "CallFunc_BreakRotator_Roll", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMyCharacter_C__pf2263577242, b0l__CallFunc_BreakRotator_Roll__pf), METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "K2Node_InputAxisEvent_AxisValue_1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf = { "K2Node_InputAxisEvent_AxisValue_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMyCharacter_C__pf2263577242, b0l__K2Node_InputAxisEvent_AxisValue_1__pf), METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "K2Node_InputAxisEvent_AxisValue_2" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_2__pf = { "K2Node_InputAxisEvent_AxisValue_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMyCharacter_C__pf2263577242, b0l__K2Node_InputAxisEvent_AxisValue_2__pf), METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_2__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "K2Node_InputAxisEvent_AxisValue_3" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_3__pf = { "K2Node_InputAxisEvent_AxisValue_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMyCharacter_C__pf2263577242, b0l__K2Node_InputAxisEvent_AxisValue_3__pf), METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_3__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__Temp_struct_Variable_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "Temp_struct_Variable_3" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__Temp_struct_Variable_3__pf = { "Temp_struct_Variable_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMyCharacter_C__pf2263577242, b0l__Temp_struct_Variable_3__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__Temp_struct_Variable_3__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__Temp_struct_Variable_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "K2Node_InputKeyEvent_Key" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key__pf = { "K2Node_InputKeyEvent_Key", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMyCharacter_C__pf2263577242, b0l__K2Node_InputKeyEvent_Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "K2Node_InputKeyEvent_Key_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_1__pf = { "K2Node_InputKeyEvent_Key_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMyCharacter_C__pf2263577242, b0l__K2Node_InputKeyEvent_Key_1__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_1__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__Temp_struct_Variable_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "Temp_struct_Variable_2" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__Temp_struct_Variable_2__pf = { "Temp_struct_Variable_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMyCharacter_C__pf2263577242, b0l__Temp_struct_Variable_2__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__Temp_struct_Variable_2__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__Temp_struct_Variable_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "K2Node_InputKeyEvent_Key_2" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_2__pf = { "K2Node_InputKeyEvent_Key_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMyCharacter_C__pf2263577242, b0l__K2Node_InputKeyEvent_Key_2__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_2__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "K2Node_InputKeyEvent_Key_3" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_3__pf = { "K2Node_InputKeyEvent_Key_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMyCharacter_C__pf2263577242, b0l__K2Node_InputKeyEvent_Key_3__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_3__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__Temp_struct_Variable_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "Temp_struct_Variable_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__Temp_struct_Variable_1__pf = { "Temp_struct_Variable_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMyCharacter_C__pf2263577242, b0l__Temp_struct_Variable_1__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__Temp_struct_Variable_1__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__Temp_struct_Variable_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_4__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "K2Node_InputKeyEvent_Key_4" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_4__pf = { "K2Node_InputKeyEvent_Key_4", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMyCharacter_C__pf2263577242, b0l__K2Node_InputKeyEvent_Key_4__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_4__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_4__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_5__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "K2Node_InputKeyEvent_Key_5" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_5__pf = { "K2Node_InputKeyEvent_Key_5", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMyCharacter_C__pf2263577242, b0l__K2Node_InputKeyEvent_Key_5__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_5__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_5__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__Temp_struct_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "Temp_struct_Variable" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__Temp_struct_Variable__pf = { "Temp_struct_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMyCharacter_C__pf2263577242, b0l__Temp_struct_Variable__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__Temp_struct_Variable__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__Temp_struct_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_6__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "K2Node_InputKeyEvent_Key_6" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_6__pf = { "K2Node_InputKeyEvent_Key_6", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMyCharacter_C__pf2263577242, b0l__K2Node_InputKeyEvent_Key_6__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_6__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_6__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_7__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "K2Node_InputKeyEvent_Key_7" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_7__pf = { "K2Node_InputKeyEvent_Key_7", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMyCharacter_C__pf2263577242, b0l__K2Node_InputKeyEvent_Key_7__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_7__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_7__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "K2Node_InputAxisEvent_AxisValue" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf = { "K2Node_InputAxisEvent_AxisValue", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMyCharacter_C__pf2263577242, b0l__K2Node_InputAxisEvent_AxisValue__pf), METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_bpv__BaseLookUpRate__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Base Look Up Rate" },
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "BaseLookUpRate" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_bpv__BaseLookUpRate__pf = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMyCharacter_C__pf2263577242, bpv__BaseLookUpRate__pf), METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_bpv__BaseLookUpRate__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_bpv__BaseLookUpRate__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_bpv__BaseTurnRate__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Base Turn Rate" },
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "BaseTurnRate" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_bpv__BaseTurnRate__pf = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMyCharacter_C__pf2263577242, bpv__BaseTurnRate__pf), METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_bpv__BaseTurnRate__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_bpv__BaseTurnRate__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_bpv__CameraBoom__pf_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "CameraBoom" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_bpv__CameraBoom__pf = { "CameraBoom", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMyCharacter_C__pf2263577242, bpv__CameraBoom__pf), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_bpv__CameraBoom__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_bpv__CameraBoom__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_bpv__FollowCamera__pf_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyCharacter__pf2263577242.h" },
		{ "OverrideNativeName", "FollowCamera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_bpv__FollowCamera__pf = { "FollowCamera", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AMyCharacter_C__pf2263577242, bpv__FollowCamera__pf), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_bpv__FollowCamera__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_bpv__FollowCamera__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_9__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_8__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__Temp_struct_Variable_4__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__Temp_struct_Variable_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__Temp_struct_Variable_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__Temp_struct_Variable_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_4__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_5__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__Temp_struct_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_6__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_7__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_bpv__BaseLookUpRate__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_bpv__BaseTurnRate__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_bpv__CameraBoom__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::NewProp_bpv__FollowCamera__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCharacter_C__pf2263577242>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::ClassParams = {
		&AMyCharacter_C__pf2263577242::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyCharacter_C__pf2263577242()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Player_Assets/Blueprints/MyCharacter"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("MyCharacter_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyCharacter_C__pf2263577242_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AMyCharacter_C__pf2263577242, TEXT("MyCharacter_C"), 3188718943);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AMyCharacter_C__pf2263577242>()
	{
		return AMyCharacter_C__pf2263577242::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCharacter_C__pf2263577242(Z_Construct_UClass_AMyCharacter_C__pf2263577242, &AMyCharacter_C__pf2263577242::StaticClass, TEXT("/Game/Player_Assets/Blueprints/MyCharacter"), TEXT("MyCharacter_C"), true, TEXT("/Game/Player_Assets/Blueprints/MyCharacter"), TEXT("/Game/Player_Assets/Blueprints/MyCharacter.MyCharacter_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCharacter_C__pf2263577242);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
