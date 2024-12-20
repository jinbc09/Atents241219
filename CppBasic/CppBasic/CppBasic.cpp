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

	int data = Add(1, 3);
	float data2 = Add(1.5f, 3.3f);

	int data3 = TemplateAdd<int>(10, 30);
	float data4 = TemplateAdd<float>(10.5f, 2.6f);

	// 이름 : Clamp
	// 파라메터 : value, min, max
	// 기능 : value가 min보다 적으면 min값, max보다 크면 max값, min~max 사이에 있으면 value를 리턴하는 함수
	// 템플릿 함수이어야 한다.
	
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
