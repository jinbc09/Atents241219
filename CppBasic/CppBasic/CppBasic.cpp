#include <iostream> // F12로 선언을 확인할 수 있다.
#include "Test.h"

using namespace std;    // std 네임스페이스를 기본적으로 사용한다고 표시


int main()  // main 함수(엔트리포인트)
{
	Test day;
	// day.Test_1219_InputOutput();
	// day.Test_1219_DataType();
	// day.Test_1219_ArithmeticOperator();
	// day.Test_1220_Assignment();
	// day.Test_1220_Comparison();
	// day.Test_1220_Logical();
	// day.Test_1220_ControlStatement();
	// day.Test_1220_SlotMachine();
	// day.Test_1220_RPS();	

	// 포인터 : 메모리 주소를 저장하는 변수
	int a = 10;
	int* pAddress = nullptr;
	pAddress = &a;	// 주소연산자 &로 a변수의 주소를 가져오기

	int b = *pAddress;	// 간접참조연산자 *로 pAddress 주소에 들어있는 데이터를 int타입으로 가져오는 것

	int array[5] = { 1,3,5,7,9 };

	pAddress = array;

	// pAddress + 1;	array[1]; 같은 동작
	// *(pAddress + 5) = 30;	// 범위를 벗어나서 접근

}

// F5 : 디버그 모드로 시작
// F10 : 디버그 모드에서 브레이크 포인트에서 멈췄을 때 누르면 브레이크 포인트에서 한 줄씩 진행한다. 
// F7 : 프로그램 빌드
// Shift + Del : 한줄씩 지우기
// Ctrl + D : 한줄 복사
// Ctrl + K + O : 헤더와 소스를 전환하기
// Ctrl + , : Go to All 메뉴 열기
// Ctrl + . : 빠른 작업 및 리팩토링
// Ctrl + Tab : 열려있는 창 이동
