// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Blueprint_WallSconce__pf1079297466.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprint_WallSconce__pf1079297466() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABlueprint_WallSconce_C__pf1079297466_bpf__UserConstructionScript__pf();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static FName NAME_ABlueprint_WallSconce_C__pf1079297466_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void ABlueprint_WallSconce_C__pf1079297466::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABlueprint_WallSconce_C__pf1079297466_bpf__UserConstructionScript__pf),NULL);
	}
	void ABlueprint_WallSconce_C__pf1079297466::StaticRegisterNativesABlueprint_WallSconce_C__pf1079297466()
	{
		UClass* Class = ABlueprint_WallSconce_C__pf1079297466::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UserConstructionScript", &ABlueprint_WallSconce_C__pf1079297466::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABlueprint_WallSconce_C__pf1079297466_bpf__UserConstructionScript__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlueprint_WallSconce_C__pf1079297466_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/**t * Construction script, the place to spawn components and do other setup.t * @note Name used in CreateBlueprint functiont */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Construction Script" },
		{ "ModuleRelativePath", "Public/Blueprint_WallSconce__pf1079297466.h" },
		{ "OverrideNativeName", "UserConstructionScript" },
		{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlueprint_WallSconce_C__pf1079297466_bpf__UserConstructionScript__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466, nullptr, "UserConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABlueprint_WallSconce_C__pf1079297466_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABlueprint_WallSconce_C__pf1079297466_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABlueprint_WallSconce_C__pf1079297466_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UserConstructionScript") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABlueprint_WallSconce_C__pf1079297466_bpf__UserConstructionScript__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_NoRegister()
	{
		return ABlueprint_WallSconce_C__pf1079297466::StaticClass();
	}
	struct Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__OuterxConexAngle__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__OuterxConexAngle__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__InnerxConexAngle__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__InnerxConexAngle__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Color__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Color__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Brightness__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Brightness__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Scene1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Scene1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PointLight2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PointLight2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SM_Lamp_Wall__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__SM_Lamp_Wall__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlueprint_WallSconce_C__pf1079297466_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 773101609
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Blueprint_WallSconce__pf1079297466.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Blueprint_WallSconce__pf1079297466.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Blueprint_WallSconce_C" },
		{ "ReplaceConverted", "/Game/StarterContent/Blueprints/Blueprint_WallSconce.Blueprint_WallSconce_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__OuterxConexAngle__pfTT_MetaData[] = {
		{ "Category", "Light" },
		{ "DisplayName", "Outer Cone Angle" },
		{ "ModuleRelativePath", "Public/Blueprint_WallSconce__pf1079297466.h" },
		{ "OverrideNativeName", "Outer Cone Angle" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__OuterxConexAngle__pfTT = { "Outer Cone Angle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ABlueprint_WallSconce_C__pf1079297466, bpv__OuterxConexAngle__pfTT), METADATA_PARAMS(Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__OuterxConexAngle__pfTT_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__OuterxConexAngle__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__InnerxConexAngle__pfTT_MetaData[] = {
		{ "Category", "Light" },
		{ "DisplayName", "Inner Cone Angle" },
		{ "ModuleRelativePath", "Public/Blueprint_WallSconce__pf1079297466.h" },
		{ "OverrideNativeName", "Inner Cone Angle" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__InnerxConexAngle__pfTT = { "Inner Cone Angle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ABlueprint_WallSconce_C__pf1079297466, bpv__InnerxConexAngle__pfTT), METADATA_PARAMS(Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__InnerxConexAngle__pfTT_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__InnerxConexAngle__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__Color__pf_MetaData[] = {
		{ "Category", "Light" },
		{ "DisplayName", "Color" },
		{ "ModuleRelativePath", "Public/Blueprint_WallSconce__pf1079297466.h" },
		{ "OverrideNativeName", "Color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__Color__pf = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ABlueprint_WallSconce_C__pf1079297466, bpv__Color__pf), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__Color__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__Color__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__Brightness__pf_MetaData[] = {
		{ "Category", "Light" },
		{ "DisplayName", "Brightness" },
		{ "ModuleRelativePath", "Public/Blueprint_WallSconce__pf1079297466.h" },
		{ "OverrideNativeName", "Brightness" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__Brightness__pf = { "Brightness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ABlueprint_WallSconce_C__pf1079297466, bpv__Brightness__pf), METADATA_PARAMS(Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__Brightness__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__Brightness__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__Scene1__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Blueprint_WallSconce__pf1079297466.h" },
		{ "OverrideNativeName", "Scene1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__Scene1__pf = { "Scene1", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ABlueprint_WallSconce_C__pf1079297466, bpv__Scene1__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__Scene1__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__Scene1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__PointLight2__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Blueprint_WallSconce__pf1079297466.h" },
		{ "OverrideNativeName", "PointLight2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__PointLight2__pf = { "PointLight2", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ABlueprint_WallSconce_C__pf1079297466, bpv__PointLight2__pf), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__PointLight2__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__PointLight2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__SM_Lamp_Wall__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Blueprint_WallSconce__pf1079297466.h" },
		{ "OverrideNativeName", "SM_Lamp_Wall" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__SM_Lamp_Wall__pf = { "SM_Lamp_Wall", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ABlueprint_WallSconce_C__pf1079297466, bpv__SM_Lamp_Wall__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__SM_Lamp_Wall__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__SM_Lamp_Wall__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__OuterxConexAngle__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__InnerxConexAngle__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__Color__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__Brightness__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__Scene1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__PointLight2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::NewProp_bpv__SM_Lamp_Wall__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlueprint_WallSconce_C__pf1079297466>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::ClassParams = {
		&ABlueprint_WallSconce_C__pf1079297466::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/StarterContent/Blueprints/Blueprint_WallSconce"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Blueprint_WallSconce_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABlueprint_WallSconce_C__pf1079297466, TEXT("Blueprint_WallSconce_C"), 452122485);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABlueprint_WallSconce_C__pf1079297466>()
	{
		return ABlueprint_WallSconce_C__pf1079297466::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlueprint_WallSconce_C__pf1079297466(Z_Construct_UClass_ABlueprint_WallSconce_C__pf1079297466, &ABlueprint_WallSconce_C__pf1079297466::StaticClass, TEXT("/Game/StarterContent/Blueprints/Blueprint_WallSconce"), TEXT("Blueprint_WallSconce_C"), true, TEXT("/Game/StarterContent/Blueprints/Blueprint_WallSconce"), TEXT("/Game/StarterContent/Blueprints/Blueprint_WallSconce.Blueprint_WallSconce_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlueprint_WallSconce_C__pf1079297466);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
