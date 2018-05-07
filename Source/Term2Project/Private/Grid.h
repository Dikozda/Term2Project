// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Grid.generated.h"

USTRUCT(BlueprintType)
struct FGridNode
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite)
		FVector Location;

	void SetLocation(FVector NewLocation)
	{
		Location = NewLocation;
	}

	FGridNode()
	{
		Location = FVector(0.0f, 0.0f, 0.0f);
	}
};

USTRUCT(BlueprintType)
struct FXRow
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadOnly)
		TArray<FGridNode> GridPoints;

	UPROPERTY(BlueprintReadOnly)
		int RowNumber;

	void SetRowNumber(int NewRowNumber)
	{
		RowNumber = NewRowNumber;
	}

	void SetGridPoints(TArray<FGridNode> NewGridPoints)
	{
		GridPoints = NewGridPoints;
	}

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
