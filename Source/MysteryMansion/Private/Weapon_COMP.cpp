// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon_COMP.h"

// Sets default values for this component's properties
UWeapon_COMP::UWeapon_COMP()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWeapon_COMP::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
	AsAMysteryMansionCharacter = Cast<AMysteryMansionCharacter>(GetOwner());
	
}


// Called every frame
void UWeapon_COMP::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}



void UWeapon_COMP::FireWeapon()
{
	if (AsAMysteryMansionCharacter)
	{

        FVector SpawnLocation = AsAMysteryMansionCharacter->AttackArrow->GetComponentLocation();
        FRotator SpawnRotation = AsAMysteryMansionCharacter->GetActorRotation();


        GetWorld()->SpawnActor<ABulletBase>(BulletBlueprint, SpawnLocation, SpawnRotation);

      
    }
}
	
