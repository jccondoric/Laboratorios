// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pila.h"
#include "Brick.generated.h"


UCLASS()
class LABORATORIOS_API ABrick : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABrick();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)//Malla
		UStaticMeshComponent* SM_Brick;


	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
