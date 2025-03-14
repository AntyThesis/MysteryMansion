// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Health_COMP.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHealthChange);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeath);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYSTERYMANSION_API UHealth_COMP : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealth_COMP();


	// Declare Health Variables
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Health")
	float CurrentHealth = 0;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Health")
	float MaxHealth = 0;


	//Declare Dispatchers
	UPROPERTY(BlueprintAssignable)
	FOnDeath OnDeath;

	UPROPERTY(BlueprintAssignable)
	FOnHealthChange OnHealthChanged;



protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	// Declare Health functions
	UFUNCTION(BlueprintCallable)
	void AffectHealth(const float HealthChangeAmount);

	UFUNCTION(BlueprintCallable)
	void RIP() const;
		
};
