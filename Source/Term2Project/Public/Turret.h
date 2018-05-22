// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Turret.generated.h"

// Declaring Variables


UCLASS()
class TERM2PROJECT_API ATurret : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATurret();

	//UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MyStuff")
		//void turretRot();

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		UStaticMeshComponent* TurretPlatform;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		UStaticMeshComponent* TurretStand;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		UStaticMeshComponent* TurretBarrel;

	// This is to store an actor ref
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		AActor* Ref;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool InRange = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float RotSpeed = 200;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float AttackRange = 800;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float FireRate = 0;

	UFUNCTION(/*BlueprintNativeEvent,*/ BlueprintCallable, Category = "MyStuff")
		virtual void checkRange(float & inputRange);

	//UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "blerp")
		//FString shootAtPlayer(FString Word1, FString Word2);
};
