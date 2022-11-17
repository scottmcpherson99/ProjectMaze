// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTMAZE_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define PROJECTMAZE_PlayerCharacter_generated_h

#define ProjectMaze_Source_ProjectMaze_PlayerCharacter_PlayerCharacter_h_12_SPARSE_DATA
#define ProjectMaze_Source_ProjectMaze_PlayerCharacter_PlayerCharacter_h_12_RPC_WRAPPERS
#define ProjectMaze_Source_ProjectMaze_PlayerCharacter_PlayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectMaze_Source_ProjectMaze_PlayerCharacter_PlayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMaze"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define ProjectMaze_Source_ProjectMaze_PlayerCharacter_PlayerCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMaze"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define ProjectMaze_Source_ProjectMaze_PlayerCharacter_PlayerCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public:


#define ProjectMaze_Source_ProjectMaze_PlayerCharacter_PlayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter)


#define ProjectMaze_Source_ProjectMaze_PlayerCharacter_PlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(APlayerCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__footstepSound() { return STRUCT_OFFSET(APlayerCharacter, footstepSound); }


#define ProjectMaze_Source_ProjectMaze_PlayerCharacter_PlayerCharacter_h_9_PROLOG
#define ProjectMaze_Source_ProjectMaze_PlayerCharacter_PlayerCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectMaze_Source_ProjectMaze_PlayerCharacter_PlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectMaze_Source_ProjectMaze_PlayerCharacter_PlayerCharacter_h_12_SPARSE_DATA \
	ProjectMaze_Source_ProjectMaze_PlayerCharacter_PlayerCharacter_h_12_RPC_WRAPPERS \
	ProjectMaze_Source_ProjectMaze_PlayerCharacter_PlayerCharacter_h_12_INCLASS \
	ProjectMaze_Source_ProjectMaze_PlayerCharacter_PlayerCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectMaze_Source_ProjectMaze_PlayerCharacter_PlayerCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectMaze_Source_ProjectMaze_PlayerCharacter_PlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectMaze_Source_ProjectMaze_PlayerCharacter_PlayerCharacter_h_12_SPARSE_DATA \
	ProjectMaze_Source_ProjectMaze_PlayerCharacter_PlayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectMaze_Source_ProjectMaze_PlayerCharacter_PlayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
	ProjectMaze_Source_ProjectMaze_PlayerCharacter_PlayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTMAZE_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectMaze_Source_ProjectMaze_PlayerCharacter_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
