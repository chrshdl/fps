// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Containers/Array.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/UObjectGlobals.h"

#include "BPFunctionLibrary.generated.h"

class UMaterialInterface;
class UObject;
class UStaticMesh;
struct FFrame;

/**
 *
 */

UCLASS()
class UBPFunctionLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

    UFUNCTION(BlueprintCallable, Category="LyraExt")
    static bool ChangeMeshMaterials(TArray<UStaticMesh*> Mesh, UMaterialInterface* Material);
};