// Fill out your copyright notice in the Description page of Project Settings.

#include "LyraCameraMode_FirstPerson.h"

#include "GameFramework/Character.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(LyraCameraMode_FirstPerson)


FVector ULyraCameraMode_FirstPerson::GetPivotLocation() const
{
	const AActor* TargetActor = GetTargetActor();
	check(TargetActor);

	if (const APawn* TargetPawn = Cast<APawn>(TargetActor))
	{
		// Get mesh socket location for head bone
		if (const ACharacter* TargetCharacter = Cast<ACharacter>(TargetPawn))
		{
			return TargetCharacter->GetMesh()->GetSocketLocation(TEXT("head"));
		}

		return TargetPawn->GetPawnViewLocation();
	}

	return TargetActor->GetActorLocation();

}
