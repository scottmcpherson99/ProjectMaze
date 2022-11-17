// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTMAZE_WinScreen_generated_h
#error "WinScreen.generated.h already included, missing '#pragma once' in WinScreen.h"
#endif
#define PROJECTMAZE_WinScreen_generated_h

#define ProjectMaze_Source_ProjectMaze_WinScreen_h_15_SPARSE_DATA
#define ProjectMaze_Source_ProjectMaze_WinScreen_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnReturnClicked); \
	DECLARE_FUNCTION(execOnNextClicked);


#define ProjectMaze_Source_ProjectMaze_WinScreen_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnReturnClicked); \
	DECLARE_FUNCTION(execOnNextClicked);


#define ProjectMaze_Source_ProjectMaze_WinScreen_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWinScreen(); \
	friend struct Z_Construct_UClass_UWinScreen_Statics; \
public: \
	DECLARE_CLASS(UWinScreen, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectMaze"), NO_API) \
	DECLARE_SERIALIZER(UWinScreen)


#define ProjectMaze_Source_ProjectMaze_WinScreen_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUWinScreen(); \
	friend struct Z_Construct_UClass_UWinScreen_Statics; \
public: \
	DECLARE_CLASS(UWinScreen, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectMaze"), NO_API) \
	DECLARE_SERIALIZER(UWinScreen)


#define ProjectMaze_Source_ProjectMaze_WinScreen_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWinScreen(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWinScreen) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWinScreen); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWinScreen); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWinScreen(UWinScreen&&); \
	NO_API UWinScreen(const UWinScreen&); \
public:


#define ProjectMaze_Source_ProjectMaze_WinScreen_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWinScreen(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWinScreen(UWinScreen&&); \
	NO_API UWinScreen(const UWinScreen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWinScreen); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWinScreen); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWinScreen)


#define ProjectMaze_Source_ProjectMaze_WinScreen_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NextButton() { return STRUCT_OFFSET(UWinScreen, NextButton); } \
	FORCEINLINE static uint32 __PPO__ReturnButton() { return STRUCT_OFFSET(UWinScreen, ReturnButton); }


#define ProjectMaze_Source_ProjectMaze_WinScreen_h_12_PROLOG
#define ProjectMaze_Source_ProjectMaze_WinScreen_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectMaze_Source_ProjectMaze_WinScreen_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectMaze_Source_ProjectMaze_WinScreen_h_15_SPARSE_DATA \
	ProjectMaze_Source_ProjectMaze_WinScreen_h_15_RPC_WRAPPERS \
	ProjectMaze_Source_ProjectMaze_WinScreen_h_15_INCLASS \
	ProjectMaze_Source_ProjectMaze_WinScreen_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectMaze_Source_ProjectMaze_WinScreen_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectMaze_Source_ProjectMaze_WinScreen_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectMaze_Source_ProjectMaze_WinScreen_h_15_SPARSE_DATA \
	ProjectMaze_Source_ProjectMaze_WinScreen_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectMaze_Source_ProjectMaze_WinScreen_h_15_INCLASS_NO_PURE_DECLS \
	ProjectMaze_Source_ProjectMaze_WinScreen_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTMAZE_API UClass* StaticClass<class UWinScreen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectMaze_Source_ProjectMaze_WinScreen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
