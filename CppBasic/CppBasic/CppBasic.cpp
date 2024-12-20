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
	
	// 슬롯머신
	// 처음에 돈을 걸고
	// 랜덤으로 숫자를 3개 뽑아서 셋다 같은 숫자가 나오면 2배로 돌려주기
	// 다시 처음으로

	// 가위바위보
	// 5판 3선승

	std::srand(std::time(0));
	int random = std::rand() % 100;	// 0 ~ 99 중에 랜덤한 숫자
	
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
