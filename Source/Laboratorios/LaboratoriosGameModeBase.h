// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "LaboratoriosGameModeBase.generated.h"

/**
 * 
 */
class ABrick;
UCLASS()
class LABORATORIOS_API ALaboratoriosGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override; 
	ABrick* ladrillo01;


};
