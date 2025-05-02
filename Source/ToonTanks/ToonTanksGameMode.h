// Toon Tanks

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ToonTanksGameMode.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API AToonTanksGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:

	void ActorDied(class AActor* DeadActor);

protected:

	virtual void BeginPlay() override;

private:

	class ATank* Tank;
	
};
