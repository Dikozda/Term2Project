// Fill out your copyright notice in the Description page of Project Settings.

#include "Turret.h"
#include "Kismet/GameplayStatics.h"


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
	
	//this gets the player pawn and saves it to a varible
	Ref = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
}

// Called every frame

void ATurret::Tick(float DeltaTime)
{
	
	Super::Tick(DeltaTime);
}
/*
void ATurret::turretRot()
{
	1 + 1;
}
*/
void ATurret::checkRange(float & inputRange)
{
	inputRange = inputRange + 1;

}
/*
FString ATurret::shootAtPlayer(FString word1, FString Word2)
{
	
	cout << word1;
	return word1;
}
*/