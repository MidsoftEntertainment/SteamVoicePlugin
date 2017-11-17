// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Pawn.h"
#include "Components/ActorComponent.h"
#include "SteamVoiceComponent.generated.h"


UCLASS( ClassGroup=(SteamVoicePlugin), meta=(BlueprintSpawnableComponent) )
class STEAMVOICEPLUGIN_API USteamVoiceComponent : public UActorComponent
{
	GENERATED_BODY()


public:	
	// Sets default values for this component's properties
	USteamVoiceComponent();

	UFUNCTION(BlueprintCallable, Category = "Steam Voice Plugin")
		void StartSteamVoice();

	UFUNCTION(BlueprintCallable, Category = "Steam Voice Plugin")
		void StopSteamVoice();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};
