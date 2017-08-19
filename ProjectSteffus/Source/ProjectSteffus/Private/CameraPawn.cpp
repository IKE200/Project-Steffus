// Fill out your copyright notice in the Description page of Project Settings.

#include "CameraPawn.h"

// Sets default values
ACameraPawn::ACameraPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACameraPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACameraPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACameraPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ACameraPawn::MoveCamRight(float DeltaSeconds)
{
	float MoveIncrement = CamMoveSpeed * DeltaSeconds;
	UE_LOG(LogTemp, Warning, TEXT("right %f"), MoveIncrement);
	FVector ActorLoc = GetActorLocation();
	FVector NewLocation = ActorLoc + FVector::RightVector * MoveIncrement;
	SetActorLocation(NewLocation);
}

void ACameraPawn::MoveCamLeft(float DeltaSeconds)
{
	float MoveIncrement = CamMoveSpeed * DeltaSeconds;
	UE_LOG(LogTemp, Warning, TEXT("left %f"), MoveIncrement);
	FVector ActorLoc = GetActorLocation();
	FVector NewLocation = ActorLoc + FVector::RightVector * -MoveIncrement;
	SetActorLocation(NewLocation);
}

void ACameraPawn::MoveCamUp(float DeltaSeconds)
{
	float MoveIncrement = CamMoveSpeed * DeltaSeconds;
	UE_LOG(LogTemp, Warning, TEXT("up %f"), MoveIncrement);
	FVector ActorLoc = GetActorLocation();
	FVector NewLocation = ActorLoc + FVector::ForwardVector * MoveIncrement;
	SetActorLocation(NewLocation);
}

void ACameraPawn::MoveCamDown(float DeltaSeconds)
{
	float MoveIncrement = CamMoveSpeed * DeltaSeconds;
	UE_LOG(LogTemp, Warning, TEXT("down %f"), MoveIncrement);
	FVector ActorLoc = GetActorLocation();
	FVector NewLocation = ActorLoc + FVector::ForwardVector * -MoveIncrement;
	SetActorLocation(NewLocation);
}

