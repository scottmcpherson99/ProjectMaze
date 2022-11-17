// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTMAZE_HeadsUpDisplay_generated_h
#error "HeadsUpDisplay.generated.h already included, missing '#pragma once' in HeadsUpDisplay.h"
#endif
#define PROJECTMAZE_HeadsUpDisplay_generated_h

#define ProjectMaze_Source_ProjectMaze_HeadsUpDisplay_h_19_SPARSE_DATA
#define ProjectMaze_Source_ProjectMaze_HeadsUpDisplay_h_19_RPC_WRAPPERS
#define ProjectMaze_Source_ProjectMaze_HeadsUpDisplay_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectMaze_Source_ProjectMaze_HeadsUpDisplay_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHeadsUpDisplay(); \
	friend struct Z_Construct_UClass_UHeadsUpDisplay_Statics; \
public: \
	DECLARE_CLASS(UHeadsUpDisplay, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectMaze"), NO_API) \
	DECLARE_SERIALIZER(UHeadsUpDisplay)


#define ProjectMaze_Source_ProjectMaze_HeadsUpDisplay_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUHeadsUpDisplay(); \
	friend struct Z_Construct_UClass_UHeadsUpDisplay_Statics; \
public: \
	DECLARE_CLASS(UHeadsUpDisplay, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectMaze"), NO_API) \
	DECLARE_SERIALIZER(UHeadsUpDisplay)


#define ProjectMaze_Source_ProjectMaze_HeadsUpDisplay_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeadsUpDisplay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeadsUpDisplay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeadsUpDisplay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeadsUpDisplay); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHeadsUpDisplay(UHeadsUpDisplay&&); \
	NO_API UHeadsUpDisplay(const UHeadsUpDisplay&); \
public:


#define ProjectMaze_Source_ProjectMaze_HeadsUpDisplay_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeadsUpDisplay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHeadsUpDisplay(UHeadsUpDisplay&&); \
	NO_API UHeadsUpDisplay(const UHeadsUpDisplay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeadsUpDisplay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeadsUpDisplay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeadsUpDisplay)


#define ProjectMaze_Source_ProjectMaze_HeadsUpDisplay_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NumberOfKeys() { return STRUCT_OFFSET(UHeadsUpDisplay, NumberOfKeys); } \
	FORCEINLINE static uint32 __PPO__InteractMessage() { return STRUCT_OFFSET(UHeadsUpDisplay, InteractMessage); } \
	FORCEINLINE static uint32 __PPO__HealthBox() { return STRUCT_OFFSET(UHeadsUpDisplay, HealthBox); } \
	FORCEINLINE static uint32 __PPO__heartFullTexture() { return STRUCT_OFFSET(UHeadsUpDisplay, heartFullTexture); } \
	FORCEINLINE static uint32 __PPO__heartHalfTexture() { return STRUCT_OFFSET(UHeadsUpDisplay, heartHalfTexture); }


#define ProjectMaze_Source_ProjectMaze_HeadsUpDisplay_h_16_PROLOG
#define ProjectMaze_Source_ProjectMaze_HeadsUpDisplay_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectMaze_Source_ProjectMaze_HeadsUpDisplay_h_19_PRIVATE_PROPERTY_OFFSET \
	ProjectMaze_Source_ProjectMaze_HeadsUpDisplay_h_19_SPARSE_DATA \
	ProjectMaze_Source_ProjectMaze_HeadsUpDisplay_h_19_RPC_WRAPPERS \
	ProjectMaze_Source_ProjectMaze_HeadsUpDisplay_h_19_INCLASS \
	ProjectMaze_Source_ProjectMaze_HeadsUpDisplay_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectMaze_Source_ProjectMaze_HeadsUpDisplay_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectMaze_Source_ProjectMaze_HeadsUpDisplay_h_19_PRIVATE_PROPERTY_OFFSET \
	ProjectMaze_Source_ProjectMaze_HeadsUpDisplay_h_19_SPARSE_DATA \
	ProjectMaze_Source_ProjectMaze_HeadsUpDisplay_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectMaze_Source_ProjectMaze_HeadsUpDisplay_h_19_INCLASS_NO_PURE_DECLS \
	ProjectMaze_Source_ProjectMaze_HeadsUpDisplay_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTMAZE_API UClass* StaticClass<class UHeadsUpDisplay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectMaze_Source_ProjectMaze_HeadsUpDisplay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
