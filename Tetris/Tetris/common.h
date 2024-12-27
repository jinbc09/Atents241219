#pragma once
#include <functional>

// 테트리스에서 사용되는 키 종류(크기는 char)
enum class KeyType : char
{
	Left = 0,	// 왼쪽 이동용 키
	Right,		// 오른쪽 이동용 키
	Spin,		// 회전용 키
	SoftDrop,	// 빠르게 떨어지게 하는 키
	HardDrop,	// 바닥으로 즉시 떨어지게 하는 키
	Esc,		// Esc키
	NUM_OF_KEYTYPE	// 키 종류가 몇개인지
};

using Action = std::function<void()>;

enum class CellType : char
{
	Blank = 0,		// 빈칸
	Background,		// 테두리
	Block,			// 테트로미노 블록(떨어지고 있는 블록)
	Line,			// 바닥에 쌓인 블록
};