// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANK_VS_ZOMBIES_Tank_generated_h
#error "Tank.generated.h already included, missing '#pragma once' in Tank.h"
#endif
#define TANK_VS_ZOMBIES_Tank_generated_h

#define Tank_vs_Zombies_Source_Tank_vs_Zombies_Tank_h_12_SPARSE_DATA
#define Tank_vs_Zombies_Source_Tank_vs_Zombies_Tank_h_12_RPC_WRAPPERS
#define Tank_vs_Zombies_Source_Tank_vs_Zombies_Tank_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Tank_vs_Zombies_Source_Tank_vs_Zombies_Tank_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATank(); \
	friend struct Z_Construct_UClass_ATank_Statics; \
public: \
	DECLARE_CLASS(ATank, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tank_vs_Zombies"), NO_API) \
	DECLARE_SERIALIZER(ATank)


#define Tank_vs_Zombies_Source_Tank_vs_Zombies_Tank_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATank(); \
	friend struct Z_Construct_UClass_ATank_Statics; \
public: \
	DECLARE_CLASS(ATank, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tank_vs_Zombies"), NO_API) \
	DECLARE_SERIALIZER(ATank)


#define Tank_vs_Zombies_Source_Tank_vs_Zombies_Tank_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATank(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATank) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATank); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATank); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATank(ATank&&); \
	NO_API ATank(const ATank&); \
public:


#define Tank_vs_Zombies_Source_Tank_vs_Zombies_Tank_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATank(ATank&&); \
	NO_API ATank(const ATank&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATank); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATank); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATank)


#define Tank_vs_Zombies_Source_Tank_vs_Zombies_Tank_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TankDirection() { return STRUCT_OFFSET(ATank, TankDirection); } \
	FORCEINLINE static uint32 __PPO__TankSprite() { return STRUCT_OFFSET(ATank, TankSprite); } \
	FORCEINLINE static uint32 __PPO__ChildTurret() { return STRUCT_OFFSET(ATank, ChildTurret); }


#define Tank_vs_Zombies_Source_Tank_vs_Zombies_Tank_h_9_PROLOG
#define Tank_vs_Zombies_Source_Tank_vs_Zombies_Tank_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tank_vs_Zombies_Source_Tank_vs_Zombies_Tank_h_12_PRIVATE_PROPERTY_OFFSET \
	Tank_vs_Zombies_Source_Tank_vs_Zombies_Tank_h_12_SPARSE_DATA \
	Tank_vs_Zombies_Source_Tank_vs_Zombies_Tank_h_12_RPC_WRAPPERS \
	Tank_vs_Zombies_Source_Tank_vs_Zombies_Tank_h_12_INCLASS \
	Tank_vs_Zombies_Source_Tank_vs_Zombies_Tank_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tank_vs_Zombies_Source_Tank_vs_Zombies_Tank_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tank_vs_Zombies_Source_Tank_vs_Zombies_Tank_h_12_PRIVATE_PROPERTY_OFFSET \
	Tank_vs_Zombies_Source_Tank_vs_Zombies_Tank_h_12_SPARSE_DATA \
	Tank_vs_Zombies_Source_Tank_vs_Zombies_Tank_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Tank_vs_Zombies_Source_Tank_vs_Zombies_Tank_h_12_INCLASS_NO_PURE_DECLS \
	Tank_vs_Zombies_Source_Tank_vs_Zombies_Tank_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANK_VS_ZOMBIES_API UClass* StaticClass<class ATank>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tank_vs_Zombies_Source_Tank_vs_Zombies_Tank_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
