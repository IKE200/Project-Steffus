// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CameraPawn.generated.h"

UCLASS()
class PROJECTSTEFFUS_API ACameraPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACameraPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MinZoom = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MaxZoom = 1500;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float ZoomIncrement = 50;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float CamMoveSpeed = 50;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float PercentCamMoveTrigger = 0.05f;


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
		void MoveCamRight(float DeltaSeconds);

	UFUNCTION(BlueprintCallable)
		void MoveCamLeft(float DeltaSeconds);
	
	UFUNCTION(BlueprintCallable)
		void MoveCamUp(float DeltaSeconds);

	UFUNCTION(BlueprintCallable)
		void MoveCamDown(float DeltaSeconds);
};
