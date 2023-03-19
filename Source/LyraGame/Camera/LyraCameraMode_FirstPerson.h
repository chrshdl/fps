// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LyraCameraMode.h"
#include "LyraCameraMode_FirstPerson.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable)
class LYRAGAME_API ULyraCameraMode_FirstPerson : public ULyraCameraMode
{
	GENERATED_BODY()
	

protected:
	virtual FVector GetPivotLocation() const override;
	
};
