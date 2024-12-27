#include "Tetromino.h"
#include "Logger.h"

void Tetromino::Initialize()
{
	data = nullptr;
	OnInitialize();	// data에 데이터 넣기
	CollectPositions();
}

void Tetromino::Destroy()
{
	if (data != nullptr)
	{
		Logger::Print("경고!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
	}
}

void Tetromino::Spin()
{
	spinIndex++;			// spinIndex 1증가
	spinIndex %= SpinCount;	// spinIndex는 0 ~ 3의 범위를 가진다.
}

void Tetromino::ReverseSpin()
{
	spinIndex = (spinIndex + SpinCount - 1) % SpinCount;	// spinindex 1감소 + spinIndex는 0~3의 범위를 가진다.
}

void Tetromino::CollectPositions()
{
}
