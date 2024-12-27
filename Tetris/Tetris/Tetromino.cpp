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
	// spinIndex 1증가
	// spinIndex는 0 ~ 3이 계속 반복된다.
}

void Tetromino::ReverseSpin()
{
	// spinindex 1감소
	// spinIndex는 0 ~ 3이 계속 반복된다.
}

void Tetromino::CollectPositions()
{
}
