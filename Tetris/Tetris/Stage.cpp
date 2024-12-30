#include "Stage.h"

void Stage::Initialize()
{
	// 출력 텍스트 초기화
	renderText = new char[canvasTextArraySize];
	memset(renderText, 0, canvasTextArraySize);	// canvasText를 0으로 채우기, char 크기는 1

	// 드랍블럭 초기화
	pDropBlock = new DropBlock();
	pDropBlock->Initialize();
}

void Stage::Destroy()
{
	// 드랍블럭 제거
	pDropBlock->Destroy();
	delete pDropBlock;
	pDropBlock = nullptr;

	// 출력 텍스트 제거
	delete renderText;
	renderText = nullptr;	
}

void Stage::Update(float deltaTime)
{
	pDropBlock->Update(deltaTime);

	DataToText();	// 마지막 줄에 있어야 함
}

void Stage::DataToText()
{
	// 기본 구조 : canvas에 CellType을 배치하기 -> canvas의 정보를 바탕으로 text로 변경하기

	// 배경 데이터 넣기
	// StageBackground에 있는 데이터를 canvas로 (sizeof(CellType) * FullWidth * FullHeight)만큼 복사
	memcpy(canvas, StageBackground, sizeof(CellType) * FullWidth * FullHeight);		

	// 라인 데이터 넣기

	// 블록 데이터 넣기
	 const Position* pPositions = pDropBlock->GetCurrent()->GetMinos();
	 const Position position = Origin + pDropBlock->GetCurrentPosition();	// 원점에 드랍블럭의 위치 더하기
	 for (int i = 0; i < Tetromino::TetroCount; i++)
	 {
		 int x = position.x + pPositions[i].x;
		 int y = position.y + pPositions[i].y;
		 canvas[y][x] = CellType::Block;
	 }

	// 텍스트로 변경하기
	memset(renderText, 0, canvasTextArraySize);	// 일단 깨끗하게 정리
	for (int y = 0; y < FullHeight; y++)
	{
		for (int x = 0; x < FullWidth; x++)
		{
			int index = static_cast<int>(canvas[y][x]);
			strcat_s(renderText, canvasTextArraySize, enumToChar[index]);
		}
		strcat_s(renderText, canvasTextArraySize, "\n");
	}
}
