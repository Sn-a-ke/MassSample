﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MassEntityTraitBase.h"
#include "NiagaraSystem.h"
#include "MSDebugTagTrait.generated.h"

/**
 * 
 */

UCLASS(meta = (DisplayName = "Debuggable Tag"))
class MASSSAMPLE_API UMSDebugTagTrait : public UMassEntityTraitBase
{
	GENERATED_BODY()
public:
	virtual void BuildTemplate(FMassEntityTemplateBuildContext& BuildContext, UWorld& World) const override;
	
};

