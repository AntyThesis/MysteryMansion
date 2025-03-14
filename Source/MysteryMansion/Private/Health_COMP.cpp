// Fill out your copyright notice in the Description page of Project Settings.


#include "Health_COMP.h"

// Sets default values for this component's properties
UHealth_COMP::UHealth_COMP()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	
	// Initialize "MaxHealth" variable
	MaxHealth = 100;

}


// Called when the game starts
void UHealth_COMP::BeginPlay()
{
	Super::BeginPlay();

	// ...


	// Initialize "CurrentHealth" variable
	CurrentHealth = MaxHealth;
	
}


// Called every frame
void UHealth_COMP::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


// Define "AffectHealth" function
void UHealth_COMP::AffectHealth(const float HealthChangeAmount)
{
	CurrentHealth += HealthChangeAmount;
	CurrentHealth = FMath::Clamp(CurrentHealth, 0.f, MaxHealth);
	OnHealthChanged.Broadcast();

	if (CurrentHealth == 0)
	{
		RIP();
	}

}



// Define "RIP" function
void UHealth_COMP::RIP() const
{
	OnDeath.Broadcast();
}