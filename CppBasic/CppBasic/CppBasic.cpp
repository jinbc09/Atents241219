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
	// day.Test_1223_Pointer();
	// day.Test_1223_Reference();
	// day.Test_1223_String();
	
	char str[16] = "12345";
	int length = MyStrLen(str);
	printf("Length : %d\n", length);

	char str2[16] = "12345";
	char str3[16] = "12345";
	int result1 = MyStrCmp(str2, str3);
	int result2 = strcmp(str2, str3);
	printf("Cmp result : %d, %d\n", result1, result2);	// 0

	char str4[16] = "12345";
	char str5[16] = "12347";
	result1 = MyStrCmp(str4, str5);
	result2 = strcmp(str4, str5);
	printf("Cmp result : %d, %d\n", result1, result2);		// -1

	char str6[16] = "12347";
	char str7[16] = "12345";
	result1 = MyStrCmp(str6, str7);
	result2 = strcmp(str6, str7);
	printf("Cmp result : %d, %d\n", result1, result2);		// -1

	char str8[16] = "1234";
	char str9[16] = "12345";
	result1 = MyStrCmp(str8, str9);
	result2 = strcmp(str8, str9);
	printf("Cmp result : %d, %d\n", result1, result2);		// -1

	char str10[16] = "12345";
	char str11[16] = "1234";
	result1 = MyStrCmp(str10, str11);
	result2 = strcmp(str10, str11);
	printf("Cmp result : %d, %d\n", result1, result2);		// 1


	// "1321,55,87,57,786" 파싱
	char raw[32] = "1321,55,87,57,786";
	int parseResult[5];
	memset(parseResult, 0, sizeof(int) * 5);
	MyParser(raw, parseResult);

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
