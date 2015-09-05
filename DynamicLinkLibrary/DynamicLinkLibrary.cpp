#include "DynamicLinkLibrary.h"
#include <iostream>
using namespace std;

class A
{
public:
	A(int a, int b):a(a), b(b) { cout<<"Constructor of class A"<<endl; }
	~A() { cout<<"Destructor of class A"<<endl; }
	int GetAdd();
	int GetSub();
private:
	int a;
	int b;
};

int A::GetAdd()
{
	return a + b;
}

int A::GetSub()
{
	return a - b;
}

int add(int a, int b)
{
	A aa(a, b);
	return aa.GetAdd();
}

int sub(int a, int b)
{
	A aa(a, b);
	return aa.GetSub();
}