// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTMAZE_LoseScreen_generated_h
#error "LoseScreen.generated.h already included, missing '#pragma once' in LoseScreen.h"
#endif
#define PROJECTMAZE_LoseScreen_generated_h

#define ProjectMaze_Source_ProjectMaze_LoseScreen_h_15_SPARSE_DATA
#define ProjectMaze_Source_ProjectMaze_LoseScreen_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnQuitClicked); \
	DECLARE_FUNCTION(execOnRetryClicked);


#define ProjectMaze_Source_ProjectMaze_LoseScreen_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnQuitClicked); \
	DECLARE_FUNCTION(execOnRetryClicked);


#define ProjectMaze_Source_ProjectMaze_LoseScreen_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoseScreen(); \
	friend struct Z_Construct_UClass_ULoseScreen_Statics; \
public: \
	DECLARE_CLASS(ULoseScreen, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectMaze"), NO_API) \
	DECLARE_SERIALIZER(ULoseScreen)


#define ProjectMaze_Source_ProjectMaze_LoseScreen_h_15_INCLASS \
private: \
	static void StaticRegisterNativesULoseScreen(); \
	friend struct Z_Construct_UClass_ULoseScreen_Statics; \
public: \
	DECLARE_CLASS(ULoseScreen, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectMaze"), NO_API) \
	DECLARE_SERIALIZER(ULoseScreen)


#define ProjectMaze_Source_ProjectMaze_LoseScreen_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoseScreen(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoseScreen) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoseScreen); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoseScreen); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoseScreen(ULoseScreen&&); \
	NO_API ULoseScreen(const ULoseScreen&); \
public:


#define ProjectMaze_Source_ProjectMaze_LoseScreen_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoseScreen(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoseScreen(ULoseScreen&&); \
	NO_API ULoseScreen(const ULoseScreen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoseScreen); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoseScreen); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoseScreen)


#define ProjectMaze_Source_ProjectMaze_LoseScreen_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RetryButton() { return STRUCT_OFFSET(ULoseScreen, RetryButton); } \
	FORCEINLINE static uint32 __PPO__QuitButton() { return STRUCT_OFFSET(ULoseScreen, QuitButton); }


#define ProjectMaze_Source_ProjectMaze_LoseScreen_h_12_PROLOG
#define ProjectMaze_Source_ProjectMaze_LoseScreen_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectMaze_Source_ProjectMaze_LoseScreen_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectMaze_Source_ProjectMaze_LoseScreen_h_15_SPARSE_DATA \
	ProjectMaze_Source_ProjectMaze_LoseScreen_h_15_RPC_WRAPPERS \
	ProjectMaze_Source_ProjectMaze_LoseScreen_h_15_INCLASS \
	ProjectMaze_Source_ProjectMaze_LoseScreen_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectMaze_Source_ProjectMaze_LoseScreen_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectMaze_Source_ProjectMaze_LoseScreen_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectMaze_Source_ProjectMaze_LoseScreen_h_15_SPARSE_DATA \
	ProjectMaze_Source_ProjectMaze_LoseScreen_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectMaze_Source_ProjectMaze_LoseScreen_h_15_INCLASS_NO_PURE_DECLS \
	ProjectMaze_Source_ProjectMaze_LoseScreen_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTMAZE_API UClass* StaticClass<class ULoseScreen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectMaze_Source_ProjectMaze_LoseScreen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
