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
