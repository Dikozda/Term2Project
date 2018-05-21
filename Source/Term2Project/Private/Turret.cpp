// Fill out your copyright notice in the Description page of Project Settings.

#include "Turret.h"


// Sets default values
ATurret::ATurret()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	

	TurretPlatform = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("hello"));
	RootComponent = TurretPlatform;
	TurretStand = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("hello0"));
	TurretStand->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	
	TurretBarrel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("hello1"));
	TurretBarrel->AttachToComponent(TurretStand, FAttachmentTransformRules::KeepRelativeTransform);

}

// Called when the game starts or when spawned
void ATurret::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

