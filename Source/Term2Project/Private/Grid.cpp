// Fill out your copyright notice in the Description page of Project Settings.

#include "Grid.h"


// Sets default values
AGrid::AGrid()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AGrid::OnConstruction(const FTransform & Transform)
{

	Location = AActor::GetActorLocation();
	FVector TempLoc;

	FGridNode TempStruct;
	FXRow TempRow;

	YRow.Empty();
	for (int y = 1; y <= YRowAmmount; ++y)
	{

		GridPoints.Empty();
		for (int x = 1; x <= XRowAmmount; ++x)
		{
			TempStruct = FGridNode::FGridNode();

			TempStruct.SetLocation(Location + FVector(0.0f, 250.0f, 0.0f)*x + FVector(250.0f, 0.0f, 0.0f)*y);

			GridPoints.Add(TempStruct);
		}

		TempRow = FXRow::FXRow();
		TempRow.SetRowNumber(y);
		TempRow.SetGridPoints(GridPoints);

		YRow.Add(TempRow);

	}

}

// Called when the game starts or when spawned
void AGrid::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AGrid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}