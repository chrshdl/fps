// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Containers/Array.h"
#include "Math/MathFwd.h"
#include "Subsystems/WorldSubsystem.h"
#include "UObject/UObjectGlobals.h"

#include "PocketLevelSystem.generated.h"

class ULocalPlayer;
class UObject;
class UPocketLevel;
class UPocketLevelInstance;

/**
 *
 */
UCLASS()
class POCKETWORLDS_API UPocketLevelSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	/**
	 * 
	 */
	UPocketLevelInstance* GetOrCreatePocketLevelFor(ULocalPlayer* LocalPlayer, UPocketLevel* PocketLevel, FVector DesiredSpawnPoint);

private:
	UPROPERTY()
	TArray<TObjectPtr<UPocketLevelInstance>> PocketInstances;
};
