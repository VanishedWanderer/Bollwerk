// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TopDownArenaAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef TOPDOWNARENARUNTIME_TopDownArenaAttributeSet_generated_h
#error "TopDownArenaAttributeSet.generated.h already included, missing '#pragma once' in TopDownArenaAttributeSet.h"
#endif
#define TOPDOWNARENARUNTIME_TopDownArenaAttributeSet_generated_h

#define FID_Users_Jan_Documents_Bollwerk_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_25_SPARSE_DATA
#define FID_Users_Jan_Documents_Bollwerk_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_MovementSpeed); \
	DECLARE_FUNCTION(execOnRep_BombRange); \
	DECLARE_FUNCTION(execOnRep_BombCapacity); \
	DECLARE_FUNCTION(execOnRep_BombsRemaining);


#define FID_Users_Jan_Documents_Bollwerk_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_MovementSpeed); \
	DECLARE_FUNCTION(execOnRep_BombRange); \
	DECLARE_FUNCTION(execOnRep_BombCapacity); \
	DECLARE_FUNCTION(execOnRep_BombsRemaining);


#define FID_Users_Jan_Documents_Bollwerk_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_25_ACCESSORS
#define FID_Users_Jan_Documents_Bollwerk_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTopDownArenaAttributeSet(); \
	friend struct Z_Construct_UClass_UTopDownArenaAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UTopDownArenaAttributeSet, ULyraAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownArenaRuntime"), NO_API) \
	DECLARE_SERIALIZER(UTopDownArenaAttributeSet) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		BombsRemaining=NETFIELD_REP_START, \
		BombCapacity, \
		BombRange, \
		MovementSpeed, \
		NETFIELD_REP_END=MovementSpeed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UTopDownArenaAttributeSet) \
public:


#define FID_Users_Jan_Documents_Bollwerk_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUTopDownArenaAttributeSet(); \
	friend struct Z_Construct_UClass_UTopDownArenaAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UTopDownArenaAttributeSet, ULyraAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownArenaRuntime"), NO_API) \
	DECLARE_SERIALIZER(UTopDownArenaAttributeSet) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		BombsRemaining=NETFIELD_REP_START, \
		BombCapacity, \
		BombRange, \
		MovementSpeed, \
		NETFIELD_REP_END=MovementSpeed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UTopDownArenaAttributeSet) \
public:


#define FID_Users_Jan_Documents_Bollwerk_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTopDownArenaAttributeSet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTopDownArenaAttributeSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTopDownArenaAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTopDownArenaAttributeSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTopDownArenaAttributeSet(UTopDownArenaAttributeSet&&); \
	NO_API UTopDownArenaAttributeSet(const UTopDownArenaAttributeSet&); \
public: \
	NO_API virtual ~UTopDownArenaAttributeSet();


#define FID_Users_Jan_Documents_Bollwerk_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTopDownArenaAttributeSet(UTopDownArenaAttributeSet&&); \
	NO_API UTopDownArenaAttributeSet(const UTopDownArenaAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTopDownArenaAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTopDownArenaAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTopDownArenaAttributeSet) \
	NO_API virtual ~UTopDownArenaAttributeSet();


#define FID_Users_Jan_Documents_Bollwerk_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_22_PROLOG
#define FID_Users_Jan_Documents_Bollwerk_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Jan_Documents_Bollwerk_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_25_SPARSE_DATA \
	FID_Users_Jan_Documents_Bollwerk_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_25_RPC_WRAPPERS \
	FID_Users_Jan_Documents_Bollwerk_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_25_ACCESSORS \
	FID_Users_Jan_Documents_Bollwerk_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_25_INCLASS \
	FID_Users_Jan_Documents_Bollwerk_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Jan_Documents_Bollwerk_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Jan_Documents_Bollwerk_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_25_SPARSE_DATA \
	FID_Users_Jan_Documents_Bollwerk_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Jan_Documents_Bollwerk_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_25_ACCESSORS \
	FID_Users_Jan_Documents_Bollwerk_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_25_INCLASS_NO_PURE_DECLS \
	FID_Users_Jan_Documents_Bollwerk_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNARENARUNTIME_API UClass* StaticClass<class UTopDownArenaAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Jan_Documents_Bollwerk_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
