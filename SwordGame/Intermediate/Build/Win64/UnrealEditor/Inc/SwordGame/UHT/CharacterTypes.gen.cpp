// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SwordGame/Public/CharacterTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterTypes() {}

// Begin Cross Module References
SWORDGAME_API UEnum* Z_Construct_UEnum_SwordGame_E_PlayerActionState();
UPackage* Z_Construct_UPackage__Script_SwordGame();
// End Cross Module References

// Begin Enum E_PlayerActionState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_PlayerActionState;
static UEnum* E_PlayerActionState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_E_PlayerActionState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_E_PlayerActionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SwordGame_E_PlayerActionState, (UObject*)Z_Construct_UPackage__Script_SwordGame(), TEXT("E_PlayerActionState"));
	}
	return Z_Registration_Info_UEnum_E_PlayerActionState.OuterSingleton;
}
template<> SWORDGAME_API UEnum* StaticEnum<E_PlayerActionState>()
{
	return E_PlayerActionState_StaticEnum();
}
struct Z_Construct_UEnum_SwordGame_E_PlayerActionState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EPAS_Arming.DisplayName", "Arming" },
		{ "EPAS_Arming.Name", "E_PlayerActionState::EPAS_Arming" },
		{ "EPAS_Attacking.DisplayName", "Attacking" },
		{ "EPAS_Attacking.Name", "E_PlayerActionState::EPAS_Attacking" },
		{ "EPAS_Idle.DisplayName", "Idle" },
		{ "EPAS_Idle.Name", "E_PlayerActionState::EPAS_Idle" },
		{ "ModuleRelativePath", "Public/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "E_PlayerActionState::EPAS_Idle", (int64)E_PlayerActionState::EPAS_Idle },
		{ "E_PlayerActionState::EPAS_Attacking", (int64)E_PlayerActionState::EPAS_Attacking },
		{ "E_PlayerActionState::EPAS_Arming", (int64)E_PlayerActionState::EPAS_Arming },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SwordGame_E_PlayerActionState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SwordGame,
	nullptr,
	"E_PlayerActionState",
	"E_PlayerActionState",
	Z_Construct_UEnum_SwordGame_E_PlayerActionState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SwordGame_E_PlayerActionState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SwordGame_E_PlayerActionState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SwordGame_E_PlayerActionState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SwordGame_E_PlayerActionState()
{
	if (!Z_Registration_Info_UEnum_E_PlayerActionState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_PlayerActionState.InnerSingleton, Z_Construct_UEnum_SwordGame_E_PlayerActionState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_E_PlayerActionState.InnerSingleton;
}
// End Enum E_PlayerActionState

// Begin Registration
struct Z_CompiledInDeferFile_FID_SwordGame_Source_SwordGame_Public_CharacterTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ E_PlayerActionState_StaticEnum, TEXT("E_PlayerActionState"), &Z_Registration_Info_UEnum_E_PlayerActionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1708638097U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SwordGame_Source_SwordGame_Public_CharacterTypes_h_1273738518(TEXT("/Script/SwordGame"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_SwordGame_Source_SwordGame_Public_CharacterTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SwordGame_Source_SwordGame_Public_CharacterTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
