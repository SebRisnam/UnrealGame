#pragma once

UENUM(BlueprintType)
enum class E_PlayerActionState : uint8
{
	EPAS_Idle UMETA(DisplayName="Idle"),
	EPAS_Attacking UMETA(DisplayName="Attacking")
};
