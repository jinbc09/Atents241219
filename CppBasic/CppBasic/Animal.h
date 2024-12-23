#pragma once
#include <string>
using namespace std;

class Animal
{
public:
	virtual void Cry();

	std::string name;
protected:
	int age = 0;

private:
	int address = 0;
};

class Dog : public Animal
{
public:
	virtual void Cry() override;
};