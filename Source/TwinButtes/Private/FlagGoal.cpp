// Fill out your copyright notice in the Description page of Project Settings.

#include "FlagGoal.h"
#include "Components/SphereComponent.h"1
#include "BaseCharacter.h"


// Sets default values
AFlagGoal::AFlagGoal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


}

// Called when the game starts or when spawned
void AFlagGoal::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFlagGoal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFlagGoal::PlantFlag()
{
}

void AFlagGoal::OnOverlapBegin(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor && OtherActor != this && Cast<ABaseCharacter>(OtherActor))
	{

	}
}
