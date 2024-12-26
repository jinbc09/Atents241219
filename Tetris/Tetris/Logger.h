#pragma once
#include <Windows.h>
#include "Singleton.h"

class Logger : public Singleton<Logger>
{
public:
	static void Print(const char* str) { OutputDebugStringA(str); }
	static void Print(const wchar_t* str) { OutputDebugStringW(str); }
	
	// int data;	// static 함수 안에서는 dynamic맴버에 접근이 불가능하다.

};

