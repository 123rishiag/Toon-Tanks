// Toon Tanks

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tank.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API ATank : public ABasePawn
{
	GENERATED_BODY()

public:
	ATank();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void HandleDestruction();

	class APlayerController* GetTankPlayerController() const;

	bool bAlive = true;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere, Category = "Components")
	class USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere, Category = "Components")
	class UCameraComponent* Camera;
	UPROPERTY(EditAnywhere, Category = "Movement")
	float speed = 1000.f;
	UPROPERTY(EditAnywhere, Category = "Movement")
	float turnRate = 150.f;

	void Move(float value);
	void Turn(float value);

	class APlayerController* TankPlayerController;
};
