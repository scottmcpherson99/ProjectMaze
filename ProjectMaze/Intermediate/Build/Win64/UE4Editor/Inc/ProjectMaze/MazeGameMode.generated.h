// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTMAZE_MazeGameMode_generated_h
#error "MazeGameMode.generated.h already included, missing '#pragma once' in MazeGameMode.h"
#endif
#define PROJECTMAZE_MazeGameMode_generated_h

#define ProjectMaze_Source_ProjectMaze_GameSettings_MazeGameMode_h_16_SPARSE_DATA
#define ProjectMaze_Source_ProjectMaze_GameSettings_MazeGameMode_h_16_RPC_WRAPPERS
#define ProjectMaze_Source_ProjectMaze_GameSettings_MazeGameMode_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectMaze_Source_ProjectMaze_GameSettings_MazeGameMode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMazeGameMode(); \
	friend struct Z_Construct_UClass_AMazeGameMode_Statics; \
public: \
	DECLARE_CLASS(AMazeGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMaze"), NO_API) \
	DECLARE_SERIALIZER(AMazeGameMode)


#define ProjectMaze_Source_ProjectMaze_GameSettings_MazeGameMode_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMazeGameMode(); \
	friend struct Z_Construct_UClass_AMazeGameMode_Statics; \
public: \
	DECLARE_CLASS(AMazeGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMaze"), NO_API) \
	DECLARE_SERIALIZER(AMazeGameMode)


#define ProjectMaze_Source_ProjectMaze_GameSettings_MazeGameMode_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMazeGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMazeGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMazeGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMazeGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMazeGameMode(AMazeGameMode&&); \
	NO_API AMazeGameMode(const AMazeGameMode&); \
public:


#define ProjectMaze_Source_ProjectMaze_GameSettings_MazeGameMode_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMazeGameMode(AMazeGameMode&&); \
	NO_API AMazeGameMode(const AMazeGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMazeGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMazeGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMazeGameMode)


#define ProjectMaze_Source_ProjectMaze_GameSettings_MazeGameMode_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HeadsUpDisplayWidget() { return STRUCT_OFFSET(AMazeGameMode, HeadsUpDisplayWidget); } \
	FORCEINLINE static uint32 __PPO__LoseScreenWidget() { return STRUCT_OFFSET(AMazeGameMode, LoseScreenWidget); } \
	FORCEINLINE static uint32 __PPO__WinScreenWidget() { return STRUCT_OFFSET(AMazeGameMode, WinScreenWidget); } \
	FORCEINLINE static uint32 __PPO__backgroundMusic() { return STRUCT_OFFSET(AMazeGameMode, backgroundMusic); }


#define ProjectMaze_Source_ProjectMaze_GameSettings_MazeGameMode_h_13_PROLOG
#define ProjectMaze_Source_ProjectMaze_GameSettings_MazeGameMode_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectMaze_Source_ProjectMaze_GameSettings_MazeGameMode_h_16_PRIVATE_PROPERTY_OFFSET \
	ProjectMaze_Source_ProjectMaze_GameSettings_MazeGameMode_h_16_SPARSE_DATA \
	ProjectMaze_Source_ProjectMaze_GameSettings_MazeGameMode_h_16_RPC_WRAPPERS \
	ProjectMaze_Source_ProjectMaze_GameSettings_MazeGameMode_h_16_INCLASS \
	ProjectMaze_Source_ProjectMaze_GameSettings_MazeGameMode_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectMaze_Source_ProjectMaze_GameSettings_MazeGameMode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectMaze_Source_ProjectMaze_GameSettings_MazeGameMode_h_16_PRIVATE_PROPERTY_OFFSET \
	ProjectMaze_Source_ProjectMaze_GameSettings_MazeGameMode_h_16_SPARSE_DATA \
	ProjectMaze_Source_ProjectMaze_GameSettings_MazeGameMode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectMaze_Source_ProjectMaze_GameSettings_MazeGameMode_h_16_INCLASS_NO_PURE_DECLS \
	ProjectMaze_Source_ProjectMaze_GameSettings_MazeGameMode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTMAZE_API UClass* StaticClass<class AMazeGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectMaze_Source_ProjectMaze_GameSettings_MazeGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
