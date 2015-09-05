#include "StaticLinkLibrary.h"
#include <iostream>
using namespace std;

int add(int a, int b)
{
	cout<<"This is StaticLinkLibrary function add:"<<endl;
	return a + b;
}

int sub(int a, int b)
{
	cout<<"This is StaticLinkLibrary function sub:"<<endl;
	return a - b;
}