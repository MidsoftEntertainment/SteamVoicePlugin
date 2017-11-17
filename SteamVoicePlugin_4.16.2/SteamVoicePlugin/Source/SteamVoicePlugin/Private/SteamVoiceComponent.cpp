// Fill out your copyright notice in the Description page of Project Settings.

#include "SteamVoiceComponent.h"
#include "GameFramework/Pawn.h"


// Sets default values for this component's properties
USteamVoiceComponent::USteamVoiceComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void USteamVoiceComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void USteamVoiceComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}



void USteamVoiceComponent::StartSteamVoice()
{
	APlayerController *PlayerController;
	PlayerController = Cast<APlayerController>(Cast<APawn>(GetOwner())->GetController());
	if (PlayerController)
	{
		PlayerController->StartTalking();
		UE_LOG(LogTemp, Warning, TEXT("I am talking."));
	}

	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController is invalid."));
	}
}

void USteamVoiceComponent::StopSteamVoice()
{
	APlayerController *PlayerController;
	PlayerController = Cast<APlayerController>(Cast<APawn>(GetOwner())->GetController());
	if (PlayerController)
	{
		PlayerController->StopTalking();
		UE_LOG(LogTemp, Warning, TEXT("I am not talking."));
	}

	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController is invalid."));
	}
}