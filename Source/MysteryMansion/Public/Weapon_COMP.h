// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BulletBase.h"
#include <MysteryMansion/MysteryMansionCharacter.h>
#include "Weapon_COMP.generated.h"




UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYSTERYMANSION_API UWeapon_COMP : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWeapon_COMP();


	AMysteryMansionCharacter* AsAMysteryMansionCharacter;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	FString Name = "Weapon";

	UPROPERTY(BlueprintReadWrite,VisibleAnywhere)
	bool IsMelee = false;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	int BulletsInClip = 0;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	int ReserveBullets = 0;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	float Damage = 0.f;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	TSubclassOf<ABulletBase> BulletBlueprint;


	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	float ReloadTime = 2.f;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	UFUNCTION(BlueprintCallable)
	void FireWeapon();
};
