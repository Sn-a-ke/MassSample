﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MassProcessor.h"
#include "UObject/Object.h"
#include "MassSampleMovementProcessor.generated.h"

/**
 * Example processor demonstrating how to move entities found in query
 * Processors are called "Systems" in most ECS libraries. 
 */
UCLASS()
class MASSSAMPLE_API UMassSampleMovementProcessor : public UMassProcessor
{
	GENERATED_BODY()
public:
	UMassSampleMovementProcessor();

protected:
	virtual void ConfigureQueries() override;
	virtual void Execute(UMassEntitySubsystem& EntitySubsystem, FMassExecutionContext& Context) override;

	
	//Note that we declare this ourselves! You can have many queries if need be.
	FMassEntityQuery MovementEntityQuery;
	
	
};
