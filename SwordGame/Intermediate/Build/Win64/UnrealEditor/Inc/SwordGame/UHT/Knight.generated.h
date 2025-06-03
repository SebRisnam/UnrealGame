// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Knight.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SWORDGAME_Knight_generated_h
#error "Knight.generated.h already included, missing '#pragma once' in Knight.h"
#endif
#define SWORDGAME_Knight_generated_h

#define FID_SwordGame_Source_SwordGame_Public_Knight_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKnight(); \
	friend struct Z_Construct_UClass_AKnight_Statics; \
public: \
	DECLARE_CLASS(AKnight, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SwordGame"), NO_API) \
	DECLARE_SERIALIZER(AKnight)


#define FID_SwordGame_Source_SwordGame_Public_Knight_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AKnight(AKnight&&); \
	AKnight(const AKnight&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKnight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKnight); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKnight) \
	NO_API virtual ~AKnight();


#define FID_SwordGame_Source_SwordGame_Public_Knight_h_14_PROLOG
#define FID_SwordGame_Source_SwordGame_Public_Knight_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SwordGame_Source_SwordGame_Public_Knight_h_17_INCLASS_NO_PURE_DECLS \
	FID_SwordGame_Source_SwordGame_Public_Knight_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWORDGAME_API UClass* StaticClass<class AKnight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SwordGame_Source_SwordGame_Public_Knight_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
