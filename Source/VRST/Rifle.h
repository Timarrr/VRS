// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/MeshComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Rifle.generated.h"


UCLASS(Blueprintable)
class VRST_API ARifle : public AActor
{
	GENERATED_BODY()
	public:
	/** Please add a variable description */
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category="Default")
	TObjectPtr<UMeshComponent> SkeletalMeshGun;

	// /** Please add a variable description */
	// UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category="Default")
	// TObjectPtr<UGrabComponent> GrabComponentSnap;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category="Default")
	TObjectPtr<USceneComponent> MuzzleLocation;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Default", meta=(MultiLine="true"))
	TObjectPtr<UHapticFeedbackEffect_Base> PistolFireHapticEffect;

	// Sets default values for this actor's properties
	ARifle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
