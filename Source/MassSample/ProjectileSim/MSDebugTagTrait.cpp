﻿// Fill out your copyright notice in the Description page of Project Settings.


#include "MSDebugTagTrait.h"

#include "MassEntityTemplateRegistry.h"
#include "Fragments/MSFragments.h"

void UMSDebugTagTrait::BuildTemplate(FMassEntityTemplateBuildContext& BuildContext, UWorld& World) const
{
	BuildContext.AddTag<FMassSampleDebuggableTag>();
}
