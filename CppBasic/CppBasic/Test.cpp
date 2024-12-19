#include "Test.h"
#include <iostream>

// 정의부
using namespace std;

void Test::Run()
{
}

void Test::Run2()
{
}

void Test::Test_1219_InputOutput()
{
    std::string name;
    int number = 10;
    float fNumber = 10.0f;

    //std::cin >> number;     // C++ 표준 입력 방식
    //scanf_s("%d", &number);       
    std::cin >> name;

    //std::cout << "Hello World! " << number <<"\n";  // C++의 표준 콘솔 출력 방식
    //printf("Hello World! %f\n", fNumber);   // C언어의 표준 출력 방식 (%d:정수, %f:실수)
    //std::cout << "My name is " << name << ".\n";
    printf("My name is %s.\n", name.c_str());
}

void Test::Test_1219_DataType()
{
	// 1bit = 0 아니면 1만 저장 가능
	// 1byte = 8bit

	int i = 0;	// 인티저 변수 i를 선언함. integer : 정수. 소수점 없는 숫자. 32bit 크기
	cout << "Integer Size : " << sizeof(i) << " Byte" << endl;
	unsigned int j = 5000000000;	// 오버플로우 발생
	i = 20;

	float f = 0.0f;	// 플로트 변수 f를 선언함. float : 실수. 소수점 있는 숫자. 32bit 크기. 태생적으로 오차가 있는 데이터타입
	cout << "Float Size : " << sizeof(f) << " Byte" << endl;
	// 12.5 = 125 * 10^-1

	char c;	// 캐릭터 변수 c를 선언함. 정수형, 8bit
	c = 'a';		// 97
	c = 'a' + 1;	// 'b'
	cout << "char Size : " << sizeof(c) << " Byte" << endl;

	bool b;	// 불리언, 8bit
	b = true;
	b = false;
	cout << "bool Size : " << sizeof(b) << " Byte" << endl;

	// 스트링, 가변 사이즈
	std::string str = "String";

	double d = 1.0;	// 실수, 64bit

	// 컴파일 타임에 컴파일러가 추측해서 데이터타입을 결정
	auto a = 10.5;
	cout << "Auto Size : " << sizeof(a) << " Byte" << endl;

	// 상수 : 변할 수 없는 숫자. 컴파일 타임에 결정
	const int con = 0;
	//con = 10;	// 상수는 수정할 수 없다.

	float pi = PI;
}
