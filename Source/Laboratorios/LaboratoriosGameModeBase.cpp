// Copyright Epic Games, Inc. All Rights Reserved.


#include "LaboratoriosGameModeBase.h"
#include "Brick.h"
#include "Pila.h"
void ALaboratoriosGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	/*Pila<class ABrick*> PilaBricks;
	PilaBricks.Insertar(brick);
	PilaBricks.Insertar(brick01);
	PilaBricks.Insertar(brick02);*/


	const FVector Ubicacion(20.0f, 50.0f, 100.0f);
	const FRotator Rotacion(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();

	if (World != nullptr) {
		//Spawn o generacion o creacion de actores en tiempo de ejecucion
		ladrillo01 = World->SpawnActor<ABrick>(Ubicacion, Rotacion);
		ladrillo01->SetHidden(false);
		GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Cyan, TEXT("Actor ladrillo creado"));
	};

	

}
