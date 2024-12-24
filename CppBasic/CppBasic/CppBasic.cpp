#include <iostream> // F12로 선언을 확인할 수 있다.
#include "Test.h"
#include "Animal.h"

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
	// day.Test_1223_Pointer();
	// day.Test_1223_Reference();
	// day.Test_1223_String();
	// day.Test_1223_StringPractice();
	
	// 클래스 : 객체의 데이터와 동작을 표현한 것
	MyClass a;
	a.height = 180;

	Animal* animal = new Animal();
	animal->Cry();

	/*Dog* dog = new Dog();
	dog->Cry();*/
	Animal* dog = new Dog();
	dog->Cry();		// Cry가 일반 함수라면 현재 자신의 타입을 기준으로 함수가 실행됨
					// Cry가 가상 함수라면 자신의 인스턴스 기준으로 함수가 실행됨

	Animal* cat = new Cat();
	cat->Cry();

	// 가상함수 
	// 가상함수가 있는 클래스는 가상 테이블(Virtual Table)이 추가된다.
	// 가상테이블에는 가상함수(virtual)들의 주소가 기록되어 있다.
	// 가상함수들이 호출될때는 가상테이블에 기록된 함수의 주소로 점프한 다음 실행이 된다.

	delete cat;
	cat = nullptr;
	delete dog;
	dog = nullptr;

	delete animal;
	animal = nullptr;

	// 주말 과제
	// 텍스트 미로탐색 게임 만들기
	// 주변환경은 텍스트로만 표현
	// 이동은 1~4를 입력받아서 처리
	// 골인지점에 도착하면 게임 종료
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
