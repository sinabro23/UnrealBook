// Fill out your copyright notice in the Description page of Project Settings.


#include "ABGameMode.h"
#include "ABPawn.h"
#include "ABPlayerController.h"

AABGameMode::AABGameMode()
{
	DefaultPawnClass = AABPawn::StaticClass();
	PlayerControllerClass = AABPlayerController::StaticClass();
}

void AABGameMode::PostLogin(APlayerController* NewPlayer)
{
	// 로그인이란 플레이어가 게임에 입장하는 것.
	// 플레이어가 로그인 완료하면 PostLogin 이벤트 함수가 호출됨. 
	ABLOG(Warning, TEXT("PostLogin Begin"));
	Super::PostLogin(NewPlayer); // 플레이어가 조종할 폰을 생성하고 플레이어 컨트롤러가 해당 폰에 빙의하는 작업이 이뤄짐.
	ABLOG(Warning, TEXT("PostLogin End"));
}
