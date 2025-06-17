// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CharacterTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SWORDGAME_CharacterTypes_generated_h
#error "CharacterTypes.generated.h already included, missing '#pragma once' in CharacterTypes.h"
#endif
#define SWORDGAME_CharacterTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SwordGame_Source_SwordGame_Public_CharacterTypes_h


#define FOREACH_ENUM_E_PLAYERACTIONSTATE(op) \
	op(E_PlayerActionState::EPAS_Idle) \
	op(E_PlayerActionState::EPAS_Attacking) \
	op(E_PlayerActionState::EPAS_Arming) 

enum class E_PlayerActionState : uint8;
template<> struct TIsUEnumClass<E_PlayerActionState> { enum { Value = true }; };
template<> SWORDGAME_API UEnum* StaticEnum<E_PlayerActionState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
