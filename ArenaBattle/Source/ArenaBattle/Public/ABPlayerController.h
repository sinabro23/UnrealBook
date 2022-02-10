// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "GameFramework/PlayerController.h"
#include "ABPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE_API AABPlayerController : public APlayerController
{
	GENERATED_BODY()


protected:
	virtual void BeginPlay() override;

public:

	// �����Ǵ� ����.
	virtual void PostInitializeComponents() override;
	
	// ���ǵǴ� ����
	virtual void OnPossess(APawn* aPawn) override;
};
