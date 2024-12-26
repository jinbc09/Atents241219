#include <iostream>
#include <Windows.h>
#include "Test.h"
#include "Logger.h"

void Test::Test_Output()
{
	printf("한글");
	OutputDebugString(L"Print~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	OutputDebugStringA("Print-------------------------\n");
}

void Test::Test_Input()
{
	while (true)
	{
		if (GetAsyncKeyState(VK_UP) & 0x8000)
		{
			Logger::Print("Up press\n");
		}
		if (GetAsyncKeyState(VK_DOWN) & 0x8000)
		{
			Logger::Print("Down press\n");
		}
		if (GetAsyncKeyState(VK_LEFT) & 0x8000)
		{
			Logger::Print("Left press\n");
		}
		if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
		{
			Logger::Print("Right press\n");
		}
		if (GetAsyncKeyState(VK_ESCAPE) & 0x8000)
		{
			break;
		}
	}
}

void Test::Test_Logger()
{
	//Logger::Get().data;
	Logger::Print("Hello\n");
	Logger::Print(L"안녕\n");

}

void Test_Func1()
{
	Logger::Print("Test_Func1\n");
}

void Test::Test_Functional()
{
	std::function<void()> func;		// 함수를 저장할 수 있는 변수
	func = Test_Func1;		// func에 Test_Func1 함수를 저장
	func();					// func에 저장된 함수를 실행

	func = []() {			// 람다함수를 저장
		Logger::Print("Test Lambda Func\n");
	};
	func();

	/*std::function<void()> func2;
	int x = 10;
	func2 = [x]() {
		Logger::Print("Test Lambda Func\n");
		
		};

	x = 20;
	func2();

	[x]() -> float {
		Logger::Print("Test Lambda Func\n");
		return 0.5f;
		};*/

	func = std::bind(&Test::Test_Logger, this);	// 맴버 함수를 저장하기(어떤 인스턴스의 함수인지 알려주어야 한다)
	func();
}

void Test::Test_Input_Functional()
{
	// 화살표 키를 눌렀을 때 적절한 함수가 실행되게 하기
	// 위쪽 : Test_Up() 실행
	// 아래쪽 : Test_Down() 실행
	// 왼쪽 : 람다 함수 실행
	// 오른쪽 : 람다 함수 실행
	
	// 각각의 함수는 Logger로 방향 출력하기
}

void Test::Test_Up()
{
	
}

void Test::Test_Down()
{
}

