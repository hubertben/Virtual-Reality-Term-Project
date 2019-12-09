// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
#ifdef NATIVIZEDASSETS_PickupActorInterface__pf563933975_generated_h
#error "PickupActorInterface__pf563933975.generated.h already included, missing '#pragma once' in PickupActorInterface__pf563933975.h"
#endif
#define NATIVIZEDASSETS_PickupActorInterface__pf563933975_generated_h

#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PickupActorInterface__pf563933975_h_8_RPC_WRAPPERS
#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PickupActorInterface__pf563933975_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PickupActorInterface__pf563933975_h_8_EVENT_PARMS \
	struct PickupActorInterface_C_eventbpf__Pickup__pf_Parms \
	{ \
		USceneComponent* bpp__AttachTo__pf; \
	};


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PickupActorInterface__pf563933975_h_8_CALLBACK_WRAPPERS
#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PickupActorInterface__pf563933975_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPickupActorInterface_C(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPickupActorInterface_C) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPickupActorInterface_C); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPickupActorInterface_C); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPickupActorInterface_C(UPickupActorInterface_C&&); \
	NO_API UPickupActorInterface_C(const UPickupActorInterface_C&); \
public:


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PickupActorInterface__pf563933975_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPickupActorInterface_C(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPickupActorInterface_C(UPickupActorInterface_C&&); \
	NO_API UPickupActorInterface_C(const UPickupActorInterface_C&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPickupActorInterface_C); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPickupActorInterface_C); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPickupActorInterface_C)


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PickupActorInterface__pf563933975_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPickupActorInterface_C(); \
	friend struct Z_Construct_UClass_UPickupActorInterface_C_Statics; \
public: \
	DECLARE_CLASS(UPickupActorInterface_C, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Game/VirtualRealityBP/Blueprints/PickupActorInterface"), NO_API) \
	DECLARE_SERIALIZER(UPickupActorInterface_C)


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PickupActorInterface__pf563933975_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PickupActorInterface__pf563933975_h_8_GENERATED_UINTERFACE_BODY() \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PickupActorInterface__pf563933975_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PickupActorInterface__pf563933975_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PickupActorInterface__pf563933975_h_8_GENERATED_UINTERFACE_BODY() \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PickupActorInterface__pf563933975_h_8_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PickupActorInterface__pf563933975_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPickupActorInterface_C() {} \
public: \
	typedef UPickupActorInterface_C UClassType; \
	typedef IPickupActorInterface_C ThisClass; \
	static void Execute_bpf__Drop__pf(UObject* O); \
	static void Execute_bpf__Pickup__pf(UObject* O, USceneComponent* bpp__AttachTo__pf); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PickupActorInterface__pf563933975_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~IPickupActorInterface_C() {} \
public: \
	typedef UPickupActorInterface_C UClassType; \
	typedef IPickupActorInterface_C ThisClass; \
	static void Execute_bpf__Drop__pf(UObject* O); \
	static void Execute_bpf__Pickup__pf(UObject* O, USceneComponent* bpp__AttachTo__pf); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PickupActorInterface__pf563933975_h_5_PROLOG \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PickupActorInterface__pf563933975_h_8_EVENT_PARMS


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PickupActorInterface__pf563933975_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PickupActorInterface__pf563933975_h_8_RPC_WRAPPERS \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PickupActorInterface__pf563933975_h_8_CALLBACK_WRAPPERS \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PickupActorInterface__pf563933975_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PickupActorInterface__pf563933975_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PickupActorInterface__pf563933975_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PickupActorInterface__pf563933975_h_8_CALLBACK_WRAPPERS \
	vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PickupActorInterface__pf563933975_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class UPickupActorInterface_C>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID vrproj_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PickupActorInterface__pf563933975_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS