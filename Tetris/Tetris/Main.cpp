#include <iostream>
#include "ConsoleDoubleBuffer.h"
#include "Logger.h"

#include "Test.h"

#define _TEST_MODE	1	// 테스트 코드 포함/제거용 디파인

void main()
{
#ifdef _TEST_MODE		// _TEST_MODE이 디파인되어 있으면 컴파일러에서 포함, 되어 있지 않으면 컴파일러에서 포함하지 않음
	Test test;
	test.Test_Output();	
	test.Test_Input();	// 내부에서 무한 루프를 돌린다.


#endif // _TEST_MODE


	ConsoleDoubleBuffer* pDoubleBuffer = new ConsoleDoubleBuffer();
	pDoubleBuffer->Initialize();

	while (true)
	{
		pDoubleBuffer->Render("Hello World!!!");
	}

	pDoubleBuffer->Destroy();
	delete pDoubleBuffer;
	pDoubleBuffer = nullptr;

	
}