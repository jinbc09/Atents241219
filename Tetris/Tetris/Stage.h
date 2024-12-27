#pragma once
#include "System.h"
#include "common.h"

class Stage : public System
{
public:
	void Initialize() override;
	void Destroy() override;
	void Update(float deltaTime) override;

private:
	static const unsigned int StageWidth = 10;		// 게임 판의 가로 길이
	static const unsigned int StageHeight = 20;		// 게임 판의 세로 길이

	static const unsigned int SpawnHeight = 4;		// 처음 블록이 생성되는 곳의 높이
	
	static const unsigned int LinesHeight = StageHeight + SpawnHeight;		// 테트로미노가 존재할 수 있는 높이 = 게임 판의 세로 길이 + 처음 블록이 생성되는 곳의 높이

	static const unsigned int FullWidth = StageWidth + 2;	// 게임에서 사용되는 최종 너피(테두리 2줄)
	static const unsigned int FullHeight = LinesHeight + 1;	// 게임에서 사용되는 최종 높이(테두리 1줄)
	
	/* 배경의 형태
	000000000000
	000000000000
	000000000000
	000000000000
	100000000001
	100000000001
	100000000001
	100000000001
	100000000001
	100000000001
	100000000001
	100000000001
	100000000001
	100000000001
	100000000001
	100000000001
	100000000001
	100000000001
	100000000001
	100000000001
	100000000001
	100000000001
	100000000001
	100000000001
	111111111111	
	*/

	const CellType STAGE_BACKGROUND[FullHeight][FullWidth] =
	{
		{CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,},
		{CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,},
		{CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,},
		{CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,},
		{CellType::Background,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Background,},
		{CellType::Background,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Background,},
		{CellType::Background,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Background,},
		{CellType::Background,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Background,},
		{CellType::Background,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Background,},
		{CellType::Background,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Background,},
		{CellType::Background,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Background,},
		{CellType::Background,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Background,},
		{CellType::Background,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Background,},
		{CellType::Background,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Background,},
		{CellType::Background,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Background,},
		{CellType::Background,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Background,},
		{CellType::Background,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Background,},
		{CellType::Background,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Background,},
		{CellType::Background,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Background,},
		{CellType::Background,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Background,},
		{CellType::Background,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Background,},
		{CellType::Background,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Background,},
		{CellType::Background,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Background,},
		{CellType::Background,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Blank,CellType::Background,},
		{CellType::Background,CellType::Background,CellType::Background,CellType::Background,CellType::Background,CellType::Background,CellType::Background,CellType::Background,CellType::Background,CellType::Background,CellType::Background,CellType::Background,},
	};
};

