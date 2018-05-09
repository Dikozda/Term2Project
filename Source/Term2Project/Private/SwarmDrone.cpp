// Fill out your copyright notice in the Description page of Project Settings.

#include "SwarmDrone.h"


// Sets default values
ASwarmDrone::ASwarmDrone()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASwarmDrone::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASwarmDrone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASwarmDrone::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

