// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BombaNave.generated.h"


UCLASS()
class DONKEYKONG_API ABombaNave : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABombaNave();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Nave")
	UStaticMeshComponent* BombaMesh;
	// Velocidad de la bomba
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bomba")
	float Velocidad;
	// Funci�n para manejar la colisi�n de la bomba
	// Collision component
	
	FVector DireccionMovimiento;
	//destroy bomb
	float Timer;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
		virtual void Tick(float DeltaTime) override;
};
