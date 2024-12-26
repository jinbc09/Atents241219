#pragma once
#include "Singleton.h"
#include "ConsoleDoubleBuffer.h"
#include "Input.h"

class GameManager : public Singleton<GameManager>
{
public:
	void Initialize();
	bool Loop();
	void Destroy();

	float GetDeltaTime() const { return deltaTime; }

private:
	// 이전 프레임에서 지금 프레임 간의 시간 간격(초 단위)
	float deltaTime = 0.0f;	

	ConsoleDoubleBuffer* pRenderer = nullptr;
	Input* pInput = nullptr;
};

