// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Grid.generated.h"

//this is to store the location of each point in the grid, this will be stored in the GridPoints TArray.
USTRUCT(BlueprintType)
struct FGridNode
{
	GENERATED_BODY()

		//this is the varrible that stores the location of this point.
		UPROPERTY(BlueprintReadWrite)
		FVector Location;

	//Set the location varible, had to do this since the constructor complained.
	void SetLocation(FVector NewLocation)
	{
		Location = NewLocation;
	}

	//the constructor, simply gives the location varible a defualt value 0,0,0.
	FGridNode()
	{
		Location = FVector(0.0f, 0.0f, 0.0f);
	}
};


//this data struct basicly contains all the requierd infomation needed for the x rows, it has all the grid points along a x line, and the row number.
USTRUCT(BlueprintType)
struct FXRow
{
	GENERATED_BODY()

		//This is where it stores the gridpoints.
		UPROPERTY(BlueprintReadOnly)
		TArray<FGridNode> GridPoints;

	//This stores the current row number, this is basicly what row this is, e.g. this is row 5 and that is row 2.
	UPROPERTY(BlueprintReadOnly)
		int RowNumber;

	//ues this to set the RowNumber.
	void SetRowNumber(int NewRowNumber)
	{
		RowNumber = NewRowNumber;
	}

	//Use this to store the grid points
	void SetGridPoints(TArray<FGridNode> NewGridPoints)
	{
		GridPoints = NewGridPoints;
	}
	// constructor for construction of the defualt of 1 varible.
	FXRow()
	{
		RowNumber = 0;

	}
};

UCLASS()
class TERM2PROJECT_API AGrid : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AGrid();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int XRowAmmount = 1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int YRowAmmount = 1;

	UPROPERTY(BlueprintReadOnly)
		TArray<FGridNode> GridPoints;

	UPROPERTY(BlueprintReadOnly)
		TArray<FXRow> YRow;

	UPROPERTY(BlueprintReadOnly)
		FVector Location;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void OnConstruction(const FTransform & Transform) override;

};
