// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTMAZE_SaveGameObject_generated_h
#error "SaveGameObject.generated.h already included, missing '#pragma once' in SaveGameObject.h"
#endif
#define PROJECTMAZE_SaveGameObject_generated_h

#define ProjectMaze_Source_ProjectMaze_SaveGameObject_h_15_SPARSE_DATA
#define ProjectMaze_Source_ProjectMaze_SaveGameObject_h_15_RPC_WRAPPERS
#define ProjectMaze_Source_ProjectMaze_SaveGameObject_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectMaze_Source_ProjectMaze_SaveGameObject_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveGameObject(); \
	friend struct Z_Construct_UClass_USaveGameObject_Statics; \
public: \
	DECLARE_CLASS(USaveGameObject, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectMaze"), NO_API) \
	DECLARE_SERIALIZER(USaveGameObject)


#define ProjectMaze_Source_ProjectMaze_SaveGameObject_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSaveGameObject(); \
	friend struct Z_Construct_UClass_USaveGameObject_Statics; \
public: \
	DECLARE_CLASS(USaveGameObject, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectMaze"), NO_API) \
	DECLARE_SERIALIZER(USaveGameObject)


#define ProjectMaze_Source_ProjectMaze_SaveGameObject_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveGameObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveGameObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveGameObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveGameObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveGameObject(USaveGameObject&&); \
	NO_API USaveGameObject(const USaveGameObject&); \
public:


#define ProjectMaze_Source_ProjectMaze_SaveGameObject_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveGameObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveGameObject(USaveGameObject&&); \
	NO_API USaveGameObject(const USaveGameObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveGameObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveGameObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveGameObject)


#define ProjectMaze_Source_ProjectMaze_SaveGameObject_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__levelName() { return STRUCT_OFFSET(USaveGameObject, levelName); }


#define ProjectMaze_Source_ProjectMaze_SaveGameObject_h_12_PROLOG
#define ProjectMaze_Source_ProjectMaze_SaveGameObject_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectMaze_Source_ProjectMaze_SaveGameObject_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectMaze_Source_ProjectMaze_SaveGameObject_h_15_SPARSE_DATA \
	ProjectMaze_Source_ProjectMaze_SaveGameObject_h_15_RPC_WRAPPERS \
	ProjectMaze_Source_ProjectMaze_SaveGameObject_h_15_INCLASS \
	ProjectMaze_Source_ProjectMaze_SaveGameObject_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectMaze_Source_ProjectMaze_SaveGameObject_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectMaze_Source_ProjectMaze_SaveGameObject_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectMaze_Source_ProjectMaze_SaveGameObject_h_15_SPARSE_DATA \
	ProjectMaze_Source_ProjectMaze_SaveGameObject_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectMaze_Source_ProjectMaze_SaveGameObject_h_15_INCLASS_NO_PURE_DECLS \
	ProjectMaze_Source_ProjectMaze_SaveGameObject_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTMAZE_API UClass* StaticClass<class USaveGameObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectMaze_Source_ProjectMaze_SaveGameObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
