#pragma once
#include "Tetromino.h"

class DropBlock
{
public:
	void Initialize();
	void Update(float deltaTime);
	void Destroy();

	// current를 리셋하고 위치를 초기화하는 함수
	void Reset();

	inline const Tetromino* GetCurrent() const { return current; }
private:
	enum class MinoType : char
	{
		I = 0,
		J,
		L,
		O,
		S,
		T,
		Z,
		NUM_OF_TYPES
	};

	// tetrominos 중 하나를 랜덤으로 리턴하는 함수(7bag 기능 적용)
	Tetromino* GetRandomTetromino();

	// 미리 만들어 놓은 모든 테트로미노
	Tetromino* tetrominos[static_cast<int>(MinoType::NUM_OF_TYPES)];

	// 현재 스테이지에서 보이는 테트로미노
	Tetromino* current = nullptr;
};

