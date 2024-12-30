#include "DropBlock.h"
#include "MinoI.h"
#include "MinoJ.h"
#include "MinoL.h"
#include "MinoO.h"
#include "MinoS.h"
#include "MinoT.h"
#include "MinoZ.h"

void DropBlock::Initialize()
{
	// 테트로미노 새로 할당하기
	tetrominos[static_cast<int>(MinoType::I)] = new MinoI();
	tetrominos[static_cast<int>(MinoType::J)] = new MinoJ();
	tetrominos[static_cast<int>(MinoType::L)] = new MinoL();
	tetrominos[static_cast<int>(MinoType::O)] = new MinoO();
	tetrominos[static_cast<int>(MinoType::S)] = new MinoS();
	tetrominos[static_cast<int>(MinoType::T)] = new MinoT();
	tetrominos[static_cast<int>(MinoType::Z)] = new MinoZ();

	for (Tetromino* mino : tetrominos)
	{
		mino->Initialize();
	}

	Reset();
}

void DropBlock::Update(float deltaTime)
{
}

void DropBlock::Destroy()
{
	// 할당한 테트로미노 전부 제거
	const int size = static_cast<int>(MinoType::NUM_OF_TYPES);
	for (int i = 0; i < size; i++)
	{
		tetrominos[i]->Destroy();
		delete tetrominos[i];
		tetrominos[i] = nullptr;
	}
}

void DropBlock::Reset()
{
	if (current != nullptr)
		current->Reset();

	current = GetRandomTetromino();


}

Tetromino* DropBlock::GetRandomTetromino()
{
	return tetrominos[0];
}
